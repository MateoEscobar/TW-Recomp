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

// Function: sub_0029FE18
// Address: 0x29fe18 - 0x2a0a68
void sub_0029FE18_0x29fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FE18_0x29fe18");
#endif

    switch (ctx->pc) {
        case 0x29fe18u: goto label_29fe18;
        case 0x29fe1cu: goto label_29fe1c;
        case 0x29fe20u: goto label_29fe20;
        case 0x29fe24u: goto label_29fe24;
        case 0x29fe28u: goto label_29fe28;
        case 0x29fe2cu: goto label_29fe2c;
        case 0x29fe30u: goto label_29fe30;
        case 0x29fe34u: goto label_29fe34;
        case 0x29fe38u: goto label_29fe38;
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe40u: goto label_29fe40;
        case 0x29fe44u: goto label_29fe44;
        case 0x29fe48u: goto label_29fe48;
        case 0x29fe4cu: goto label_29fe4c;
        case 0x29fe50u: goto label_29fe50;
        case 0x29fe54u: goto label_29fe54;
        case 0x29fe58u: goto label_29fe58;
        case 0x29fe5cu: goto label_29fe5c;
        case 0x29fe60u: goto label_29fe60;
        case 0x29fe64u: goto label_29fe64;
        case 0x29fe68u: goto label_29fe68;
        case 0x29fe6cu: goto label_29fe6c;
        case 0x29fe70u: goto label_29fe70;
        case 0x29fe74u: goto label_29fe74;
        case 0x29fe78u: goto label_29fe78;
        case 0x29fe7cu: goto label_29fe7c;
        case 0x29fe80u: goto label_29fe80;
        case 0x29fe84u: goto label_29fe84;
        case 0x29fe88u: goto label_29fe88;
        case 0x29fe8cu: goto label_29fe8c;
        case 0x29fe90u: goto label_29fe90;
        case 0x29fe94u: goto label_29fe94;
        case 0x29fe98u: goto label_29fe98;
        case 0x29fe9cu: goto label_29fe9c;
        case 0x29fea0u: goto label_29fea0;
        case 0x29fea4u: goto label_29fea4;
        case 0x29fea8u: goto label_29fea8;
        case 0x29feacu: goto label_29feac;
        case 0x29feb0u: goto label_29feb0;
        case 0x29feb4u: goto label_29feb4;
        case 0x29feb8u: goto label_29feb8;
        case 0x29febcu: goto label_29febc;
        case 0x29fec0u: goto label_29fec0;
        case 0x29fec4u: goto label_29fec4;
        case 0x29fec8u: goto label_29fec8;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed0u: goto label_29fed0;
        case 0x29fed4u: goto label_29fed4;
        case 0x29fed8u: goto label_29fed8;
        case 0x29fedcu: goto label_29fedc;
        case 0x29fee0u: goto label_29fee0;
        case 0x29fee4u: goto label_29fee4;
        case 0x29fee8u: goto label_29fee8;
        case 0x29feecu: goto label_29feec;
        case 0x29fef0u: goto label_29fef0;
        case 0x29fef4u: goto label_29fef4;
        case 0x29fef8u: goto label_29fef8;
        case 0x29fefcu: goto label_29fefc;
        case 0x29ff00u: goto label_29ff00;
        case 0x29ff04u: goto label_29ff04;
        case 0x29ff08u: goto label_29ff08;
        case 0x29ff0cu: goto label_29ff0c;
        case 0x29ff10u: goto label_29ff10;
        case 0x29ff14u: goto label_29ff14;
        case 0x29ff18u: goto label_29ff18;
        case 0x29ff1cu: goto label_29ff1c;
        case 0x29ff20u: goto label_29ff20;
        case 0x29ff24u: goto label_29ff24;
        case 0x29ff28u: goto label_29ff28;
        case 0x29ff2cu: goto label_29ff2c;
        case 0x29ff30u: goto label_29ff30;
        case 0x29ff34u: goto label_29ff34;
        case 0x29ff38u: goto label_29ff38;
        case 0x29ff3cu: goto label_29ff3c;
        case 0x29ff40u: goto label_29ff40;
        case 0x29ff44u: goto label_29ff44;
        case 0x29ff48u: goto label_29ff48;
        case 0x29ff4cu: goto label_29ff4c;
        case 0x29ff50u: goto label_29ff50;
        case 0x29ff54u: goto label_29ff54;
        case 0x29ff58u: goto label_29ff58;
        case 0x29ff5cu: goto label_29ff5c;
        case 0x29ff60u: goto label_29ff60;
        case 0x29ff64u: goto label_29ff64;
        case 0x29ff68u: goto label_29ff68;
        case 0x29ff6cu: goto label_29ff6c;
        case 0x29ff70u: goto label_29ff70;
        case 0x29ff74u: goto label_29ff74;
        case 0x29ff78u: goto label_29ff78;
        case 0x29ff7cu: goto label_29ff7c;
        case 0x29ff80u: goto label_29ff80;
        case 0x29ff84u: goto label_29ff84;
        case 0x29ff88u: goto label_29ff88;
        case 0x29ff8cu: goto label_29ff8c;
        case 0x29ff90u: goto label_29ff90;
        case 0x29ff94u: goto label_29ff94;
        case 0x29ff98u: goto label_29ff98;
        case 0x29ff9cu: goto label_29ff9c;
        case 0x29ffa0u: goto label_29ffa0;
        case 0x29ffa4u: goto label_29ffa4;
        case 0x29ffa8u: goto label_29ffa8;
        case 0x29ffacu: goto label_29ffac;
        case 0x29ffb0u: goto label_29ffb0;
        case 0x29ffb4u: goto label_29ffb4;
        case 0x29ffb8u: goto label_29ffb8;
        case 0x29ffbcu: goto label_29ffbc;
        case 0x29ffc0u: goto label_29ffc0;
        case 0x29ffc4u: goto label_29ffc4;
        case 0x29ffc8u: goto label_29ffc8;
        case 0x29ffccu: goto label_29ffcc;
        case 0x29ffd0u: goto label_29ffd0;
        case 0x29ffd4u: goto label_29ffd4;
        case 0x29ffd8u: goto label_29ffd8;
        case 0x29ffdcu: goto label_29ffdc;
        case 0x29ffe0u: goto label_29ffe0;
        case 0x29ffe4u: goto label_29ffe4;
        case 0x29ffe8u: goto label_29ffe8;
        case 0x29ffecu: goto label_29ffec;
        case 0x29fff0u: goto label_29fff0;
        case 0x29fff4u: goto label_29fff4;
        case 0x29fff8u: goto label_29fff8;
        case 0x29fffcu: goto label_29fffc;
        case 0x2a0000u: goto label_2a0000;
        case 0x2a0004u: goto label_2a0004;
        case 0x2a0008u: goto label_2a0008;
        case 0x2a000cu: goto label_2a000c;
        case 0x2a0010u: goto label_2a0010;
        case 0x2a0014u: goto label_2a0014;
        case 0x2a0018u: goto label_2a0018;
        case 0x2a001cu: goto label_2a001c;
        case 0x2a0020u: goto label_2a0020;
        case 0x2a0024u: goto label_2a0024;
        case 0x2a0028u: goto label_2a0028;
        case 0x2a002cu: goto label_2a002c;
        case 0x2a0030u: goto label_2a0030;
        case 0x2a0034u: goto label_2a0034;
        case 0x2a0038u: goto label_2a0038;
        case 0x2a003cu: goto label_2a003c;
        case 0x2a0040u: goto label_2a0040;
        case 0x2a0044u: goto label_2a0044;
        case 0x2a0048u: goto label_2a0048;
        case 0x2a004cu: goto label_2a004c;
        case 0x2a0050u: goto label_2a0050;
        case 0x2a0054u: goto label_2a0054;
        case 0x2a0058u: goto label_2a0058;
        case 0x2a005cu: goto label_2a005c;
        case 0x2a0060u: goto label_2a0060;
        case 0x2a0064u: goto label_2a0064;
        case 0x2a0068u: goto label_2a0068;
        case 0x2a006cu: goto label_2a006c;
        case 0x2a0070u: goto label_2a0070;
        case 0x2a0074u: goto label_2a0074;
        case 0x2a0078u: goto label_2a0078;
        case 0x2a007cu: goto label_2a007c;
        case 0x2a0080u: goto label_2a0080;
        case 0x2a0084u: goto label_2a0084;
        case 0x2a0088u: goto label_2a0088;
        case 0x2a008cu: goto label_2a008c;
        case 0x2a0090u: goto label_2a0090;
        case 0x2a0094u: goto label_2a0094;
        case 0x2a0098u: goto label_2a0098;
        case 0x2a009cu: goto label_2a009c;
        case 0x2a00a0u: goto label_2a00a0;
        case 0x2a00a4u: goto label_2a00a4;
        case 0x2a00a8u: goto label_2a00a8;
        case 0x2a00acu: goto label_2a00ac;
        case 0x2a00b0u: goto label_2a00b0;
        case 0x2a00b4u: goto label_2a00b4;
        case 0x2a00b8u: goto label_2a00b8;
        case 0x2a00bcu: goto label_2a00bc;
        case 0x2a00c0u: goto label_2a00c0;
        case 0x2a00c4u: goto label_2a00c4;
        case 0x2a00c8u: goto label_2a00c8;
        case 0x2a00ccu: goto label_2a00cc;
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a00d4u: goto label_2a00d4;
        case 0x2a00d8u: goto label_2a00d8;
        case 0x2a00dcu: goto label_2a00dc;
        case 0x2a00e0u: goto label_2a00e0;
        case 0x2a00e4u: goto label_2a00e4;
        case 0x2a00e8u: goto label_2a00e8;
        case 0x2a00ecu: goto label_2a00ec;
        case 0x2a00f0u: goto label_2a00f0;
        case 0x2a00f4u: goto label_2a00f4;
        case 0x2a00f8u: goto label_2a00f8;
        case 0x2a00fcu: goto label_2a00fc;
        case 0x2a0100u: goto label_2a0100;
        case 0x2a0104u: goto label_2a0104;
        case 0x2a0108u: goto label_2a0108;
        case 0x2a010cu: goto label_2a010c;
        case 0x2a0110u: goto label_2a0110;
        case 0x2a0114u: goto label_2a0114;
        case 0x2a0118u: goto label_2a0118;
        case 0x2a011cu: goto label_2a011c;
        case 0x2a0120u: goto label_2a0120;
        case 0x2a0124u: goto label_2a0124;
        case 0x2a0128u: goto label_2a0128;
        case 0x2a012cu: goto label_2a012c;
        case 0x2a0130u: goto label_2a0130;
        case 0x2a0134u: goto label_2a0134;
        case 0x2a0138u: goto label_2a0138;
        case 0x2a013cu: goto label_2a013c;
        case 0x2a0140u: goto label_2a0140;
        case 0x2a0144u: goto label_2a0144;
        case 0x2a0148u: goto label_2a0148;
        case 0x2a014cu: goto label_2a014c;
        case 0x2a0150u: goto label_2a0150;
        case 0x2a0154u: goto label_2a0154;
        case 0x2a0158u: goto label_2a0158;
        case 0x2a015cu: goto label_2a015c;
        case 0x2a0160u: goto label_2a0160;
        case 0x2a0164u: goto label_2a0164;
        case 0x2a0168u: goto label_2a0168;
        case 0x2a016cu: goto label_2a016c;
        case 0x2a0170u: goto label_2a0170;
        case 0x2a0174u: goto label_2a0174;
        case 0x2a0178u: goto label_2a0178;
        case 0x2a017cu: goto label_2a017c;
        case 0x2a0180u: goto label_2a0180;
        case 0x2a0184u: goto label_2a0184;
        case 0x2a0188u: goto label_2a0188;
        case 0x2a018cu: goto label_2a018c;
        case 0x2a0190u: goto label_2a0190;
        case 0x2a0194u: goto label_2a0194;
        case 0x2a0198u: goto label_2a0198;
        case 0x2a019cu: goto label_2a019c;
        case 0x2a01a0u: goto label_2a01a0;
        case 0x2a01a4u: goto label_2a01a4;
        case 0x2a01a8u: goto label_2a01a8;
        case 0x2a01acu: goto label_2a01ac;
        case 0x2a01b0u: goto label_2a01b0;
        case 0x2a01b4u: goto label_2a01b4;
        case 0x2a01b8u: goto label_2a01b8;
        case 0x2a01bcu: goto label_2a01bc;
        case 0x2a01c0u: goto label_2a01c0;
        case 0x2a01c4u: goto label_2a01c4;
        case 0x2a01c8u: goto label_2a01c8;
        case 0x2a01ccu: goto label_2a01cc;
        case 0x2a01d0u: goto label_2a01d0;
        case 0x2a01d4u: goto label_2a01d4;
        case 0x2a01d8u: goto label_2a01d8;
        case 0x2a01dcu: goto label_2a01dc;
        case 0x2a01e0u: goto label_2a01e0;
        case 0x2a01e4u: goto label_2a01e4;
        case 0x2a01e8u: goto label_2a01e8;
        case 0x2a01ecu: goto label_2a01ec;
        case 0x2a01f0u: goto label_2a01f0;
        case 0x2a01f4u: goto label_2a01f4;
        case 0x2a01f8u: goto label_2a01f8;
        case 0x2a01fcu: goto label_2a01fc;
        case 0x2a0200u: goto label_2a0200;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a0208u: goto label_2a0208;
        case 0x2a020cu: goto label_2a020c;
        case 0x2a0210u: goto label_2a0210;
        case 0x2a0214u: goto label_2a0214;
        case 0x2a0218u: goto label_2a0218;
        case 0x2a021cu: goto label_2a021c;
        case 0x2a0220u: goto label_2a0220;
        case 0x2a0224u: goto label_2a0224;
        case 0x2a0228u: goto label_2a0228;
        case 0x2a022cu: goto label_2a022c;
        case 0x2a0230u: goto label_2a0230;
        case 0x2a0234u: goto label_2a0234;
        case 0x2a0238u: goto label_2a0238;
        case 0x2a023cu: goto label_2a023c;
        case 0x2a0240u: goto label_2a0240;
        case 0x2a0244u: goto label_2a0244;
        case 0x2a0248u: goto label_2a0248;
        case 0x2a024cu: goto label_2a024c;
        case 0x2a0250u: goto label_2a0250;
        case 0x2a0254u: goto label_2a0254;
        case 0x2a0258u: goto label_2a0258;
        case 0x2a025cu: goto label_2a025c;
        case 0x2a0260u: goto label_2a0260;
        case 0x2a0264u: goto label_2a0264;
        case 0x2a0268u: goto label_2a0268;
        case 0x2a026cu: goto label_2a026c;
        case 0x2a0270u: goto label_2a0270;
        case 0x2a0274u: goto label_2a0274;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a027cu: goto label_2a027c;
        case 0x2a0280u: goto label_2a0280;
        case 0x2a0284u: goto label_2a0284;
        case 0x2a0288u: goto label_2a0288;
        case 0x2a028cu: goto label_2a028c;
        case 0x2a0290u: goto label_2a0290;
        case 0x2a0294u: goto label_2a0294;
        case 0x2a0298u: goto label_2a0298;
        case 0x2a029cu: goto label_2a029c;
        case 0x2a02a0u: goto label_2a02a0;
        case 0x2a02a4u: goto label_2a02a4;
        case 0x2a02a8u: goto label_2a02a8;
        case 0x2a02acu: goto label_2a02ac;
        case 0x2a02b0u: goto label_2a02b0;
        case 0x2a02b4u: goto label_2a02b4;
        case 0x2a02b8u: goto label_2a02b8;
        case 0x2a02bcu: goto label_2a02bc;
        case 0x2a02c0u: goto label_2a02c0;
        case 0x2a02c4u: goto label_2a02c4;
        case 0x2a02c8u: goto label_2a02c8;
        case 0x2a02ccu: goto label_2a02cc;
        case 0x2a02d0u: goto label_2a02d0;
        case 0x2a02d4u: goto label_2a02d4;
        case 0x2a02d8u: goto label_2a02d8;
        case 0x2a02dcu: goto label_2a02dc;
        case 0x2a02e0u: goto label_2a02e0;
        case 0x2a02e4u: goto label_2a02e4;
        case 0x2a02e8u: goto label_2a02e8;
        case 0x2a02ecu: goto label_2a02ec;
        case 0x2a02f0u: goto label_2a02f0;
        case 0x2a02f4u: goto label_2a02f4;
        case 0x2a02f8u: goto label_2a02f8;
        case 0x2a02fcu: goto label_2a02fc;
        case 0x2a0300u: goto label_2a0300;
        case 0x2a0304u: goto label_2a0304;
        case 0x2a0308u: goto label_2a0308;
        case 0x2a030cu: goto label_2a030c;
        case 0x2a0310u: goto label_2a0310;
        case 0x2a0314u: goto label_2a0314;
        case 0x2a0318u: goto label_2a0318;
        case 0x2a031cu: goto label_2a031c;
        case 0x2a0320u: goto label_2a0320;
        case 0x2a0324u: goto label_2a0324;
        case 0x2a0328u: goto label_2a0328;
        case 0x2a032cu: goto label_2a032c;
        case 0x2a0330u: goto label_2a0330;
        case 0x2a0334u: goto label_2a0334;
        case 0x2a0338u: goto label_2a0338;
        case 0x2a033cu: goto label_2a033c;
        case 0x2a0340u: goto label_2a0340;
        case 0x2a0344u: goto label_2a0344;
        case 0x2a0348u: goto label_2a0348;
        case 0x2a034cu: goto label_2a034c;
        case 0x2a0350u: goto label_2a0350;
        case 0x2a0354u: goto label_2a0354;
        case 0x2a0358u: goto label_2a0358;
        case 0x2a035cu: goto label_2a035c;
        case 0x2a0360u: goto label_2a0360;
        case 0x2a0364u: goto label_2a0364;
        case 0x2a0368u: goto label_2a0368;
        case 0x2a036cu: goto label_2a036c;
        case 0x2a0370u: goto label_2a0370;
        case 0x2a0374u: goto label_2a0374;
        case 0x2a0378u: goto label_2a0378;
        case 0x2a037cu: goto label_2a037c;
        case 0x2a0380u: goto label_2a0380;
        case 0x2a0384u: goto label_2a0384;
        case 0x2a0388u: goto label_2a0388;
        case 0x2a038cu: goto label_2a038c;
        case 0x2a0390u: goto label_2a0390;
        case 0x2a0394u: goto label_2a0394;
        case 0x2a0398u: goto label_2a0398;
        case 0x2a039cu: goto label_2a039c;
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a03a4u: goto label_2a03a4;
        case 0x2a03a8u: goto label_2a03a8;
        case 0x2a03acu: goto label_2a03ac;
        case 0x2a03b0u: goto label_2a03b0;
        case 0x2a03b4u: goto label_2a03b4;
        case 0x2a03b8u: goto label_2a03b8;
        case 0x2a03bcu: goto label_2a03bc;
        case 0x2a03c0u: goto label_2a03c0;
        case 0x2a03c4u: goto label_2a03c4;
        case 0x2a03c8u: goto label_2a03c8;
        case 0x2a03ccu: goto label_2a03cc;
        case 0x2a03d0u: goto label_2a03d0;
        case 0x2a03d4u: goto label_2a03d4;
        case 0x2a03d8u: goto label_2a03d8;
        case 0x2a03dcu: goto label_2a03dc;
        case 0x2a03e0u: goto label_2a03e0;
        case 0x2a03e4u: goto label_2a03e4;
        case 0x2a03e8u: goto label_2a03e8;
        case 0x2a03ecu: goto label_2a03ec;
        case 0x2a03f0u: goto label_2a03f0;
        case 0x2a03f4u: goto label_2a03f4;
        case 0x2a03f8u: goto label_2a03f8;
        case 0x2a03fcu: goto label_2a03fc;
        case 0x2a0400u: goto label_2a0400;
        case 0x2a0404u: goto label_2a0404;
        case 0x2a0408u: goto label_2a0408;
        case 0x2a040cu: goto label_2a040c;
        case 0x2a0410u: goto label_2a0410;
        case 0x2a0414u: goto label_2a0414;
        case 0x2a0418u: goto label_2a0418;
        case 0x2a041cu: goto label_2a041c;
        case 0x2a0420u: goto label_2a0420;
        case 0x2a0424u: goto label_2a0424;
        case 0x2a0428u: goto label_2a0428;
        case 0x2a042cu: goto label_2a042c;
        case 0x2a0430u: goto label_2a0430;
        case 0x2a0434u: goto label_2a0434;
        case 0x2a0438u: goto label_2a0438;
        case 0x2a043cu: goto label_2a043c;
        case 0x2a0440u: goto label_2a0440;
        case 0x2a0444u: goto label_2a0444;
        case 0x2a0448u: goto label_2a0448;
        case 0x2a044cu: goto label_2a044c;
        case 0x2a0450u: goto label_2a0450;
        case 0x2a0454u: goto label_2a0454;
        case 0x2a0458u: goto label_2a0458;
        case 0x2a045cu: goto label_2a045c;
        case 0x2a0460u: goto label_2a0460;
        case 0x2a0464u: goto label_2a0464;
        case 0x2a0468u: goto label_2a0468;
        case 0x2a046cu: goto label_2a046c;
        case 0x2a0470u: goto label_2a0470;
        case 0x2a0474u: goto label_2a0474;
        case 0x2a0478u: goto label_2a0478;
        case 0x2a047cu: goto label_2a047c;
        case 0x2a0480u: goto label_2a0480;
        case 0x2a0484u: goto label_2a0484;
        case 0x2a0488u: goto label_2a0488;
        case 0x2a048cu: goto label_2a048c;
        case 0x2a0490u: goto label_2a0490;
        case 0x2a0494u: goto label_2a0494;
        case 0x2a0498u: goto label_2a0498;
        case 0x2a049cu: goto label_2a049c;
        case 0x2a04a0u: goto label_2a04a0;
        case 0x2a04a4u: goto label_2a04a4;
        case 0x2a04a8u: goto label_2a04a8;
        case 0x2a04acu: goto label_2a04ac;
        case 0x2a04b0u: goto label_2a04b0;
        case 0x2a04b4u: goto label_2a04b4;
        case 0x2a04b8u: goto label_2a04b8;
        case 0x2a04bcu: goto label_2a04bc;
        case 0x2a04c0u: goto label_2a04c0;
        case 0x2a04c4u: goto label_2a04c4;
        case 0x2a04c8u: goto label_2a04c8;
        case 0x2a04ccu: goto label_2a04cc;
        case 0x2a04d0u: goto label_2a04d0;
        case 0x2a04d4u: goto label_2a04d4;
        case 0x2a04d8u: goto label_2a04d8;
        case 0x2a04dcu: goto label_2a04dc;
        case 0x2a04e0u: goto label_2a04e0;
        case 0x2a04e4u: goto label_2a04e4;
        case 0x2a04e8u: goto label_2a04e8;
        case 0x2a04ecu: goto label_2a04ec;
        case 0x2a04f0u: goto label_2a04f0;
        case 0x2a04f4u: goto label_2a04f4;
        case 0x2a04f8u: goto label_2a04f8;
        case 0x2a04fcu: goto label_2a04fc;
        case 0x2a0500u: goto label_2a0500;
        case 0x2a0504u: goto label_2a0504;
        case 0x2a0508u: goto label_2a0508;
        case 0x2a050cu: goto label_2a050c;
        case 0x2a0510u: goto label_2a0510;
        case 0x2a0514u: goto label_2a0514;
        case 0x2a0518u: goto label_2a0518;
        case 0x2a051cu: goto label_2a051c;
        case 0x2a0520u: goto label_2a0520;
        case 0x2a0524u: goto label_2a0524;
        case 0x2a0528u: goto label_2a0528;
        case 0x2a052cu: goto label_2a052c;
        case 0x2a0530u: goto label_2a0530;
        case 0x2a0534u: goto label_2a0534;
        case 0x2a0538u: goto label_2a0538;
        case 0x2a053cu: goto label_2a053c;
        case 0x2a0540u: goto label_2a0540;
        case 0x2a0544u: goto label_2a0544;
        case 0x2a0548u: goto label_2a0548;
        case 0x2a054cu: goto label_2a054c;
        case 0x2a0550u: goto label_2a0550;
        case 0x2a0554u: goto label_2a0554;
        case 0x2a0558u: goto label_2a0558;
        case 0x2a055cu: goto label_2a055c;
        case 0x2a0560u: goto label_2a0560;
        case 0x2a0564u: goto label_2a0564;
        case 0x2a0568u: goto label_2a0568;
        case 0x2a056cu: goto label_2a056c;
        case 0x2a0570u: goto label_2a0570;
        case 0x2a0574u: goto label_2a0574;
        case 0x2a0578u: goto label_2a0578;
        case 0x2a057cu: goto label_2a057c;
        case 0x2a0580u: goto label_2a0580;
        case 0x2a0584u: goto label_2a0584;
        case 0x2a0588u: goto label_2a0588;
        case 0x2a058cu: goto label_2a058c;
        case 0x2a0590u: goto label_2a0590;
        case 0x2a0594u: goto label_2a0594;
        case 0x2a0598u: goto label_2a0598;
        case 0x2a059cu: goto label_2a059c;
        case 0x2a05a0u: goto label_2a05a0;
        case 0x2a05a4u: goto label_2a05a4;
        case 0x2a05a8u: goto label_2a05a8;
        case 0x2a05acu: goto label_2a05ac;
        case 0x2a05b0u: goto label_2a05b0;
        case 0x2a05b4u: goto label_2a05b4;
        case 0x2a05b8u: goto label_2a05b8;
        case 0x2a05bcu: goto label_2a05bc;
        case 0x2a05c0u: goto label_2a05c0;
        case 0x2a05c4u: goto label_2a05c4;
        case 0x2a05c8u: goto label_2a05c8;
        case 0x2a05ccu: goto label_2a05cc;
        case 0x2a05d0u: goto label_2a05d0;
        case 0x2a05d4u: goto label_2a05d4;
        case 0x2a05d8u: goto label_2a05d8;
        case 0x2a05dcu: goto label_2a05dc;
        case 0x2a05e0u: goto label_2a05e0;
        case 0x2a05e4u: goto label_2a05e4;
        case 0x2a05e8u: goto label_2a05e8;
        case 0x2a05ecu: goto label_2a05ec;
        case 0x2a05f0u: goto label_2a05f0;
        case 0x2a05f4u: goto label_2a05f4;
        case 0x2a05f8u: goto label_2a05f8;
        case 0x2a05fcu: goto label_2a05fc;
        case 0x2a0600u: goto label_2a0600;
        case 0x2a0604u: goto label_2a0604;
        case 0x2a0608u: goto label_2a0608;
        case 0x2a060cu: goto label_2a060c;
        case 0x2a0610u: goto label_2a0610;
        case 0x2a0614u: goto label_2a0614;
        case 0x2a0618u: goto label_2a0618;
        case 0x2a061cu: goto label_2a061c;
        case 0x2a0620u: goto label_2a0620;
        case 0x2a0624u: goto label_2a0624;
        case 0x2a0628u: goto label_2a0628;
        case 0x2a062cu: goto label_2a062c;
        case 0x2a0630u: goto label_2a0630;
        case 0x2a0634u: goto label_2a0634;
        case 0x2a0638u: goto label_2a0638;
        case 0x2a063cu: goto label_2a063c;
        case 0x2a0640u: goto label_2a0640;
        case 0x2a0644u: goto label_2a0644;
        case 0x2a0648u: goto label_2a0648;
        case 0x2a064cu: goto label_2a064c;
        case 0x2a0650u: goto label_2a0650;
        case 0x2a0654u: goto label_2a0654;
        case 0x2a0658u: goto label_2a0658;
        case 0x2a065cu: goto label_2a065c;
        case 0x2a0660u: goto label_2a0660;
        case 0x2a0664u: goto label_2a0664;
        case 0x2a0668u: goto label_2a0668;
        case 0x2a066cu: goto label_2a066c;
        case 0x2a0670u: goto label_2a0670;
        case 0x2a0674u: goto label_2a0674;
        case 0x2a0678u: goto label_2a0678;
        case 0x2a067cu: goto label_2a067c;
        case 0x2a0680u: goto label_2a0680;
        case 0x2a0684u: goto label_2a0684;
        case 0x2a0688u: goto label_2a0688;
        case 0x2a068cu: goto label_2a068c;
        case 0x2a0690u: goto label_2a0690;
        case 0x2a0694u: goto label_2a0694;
        case 0x2a0698u: goto label_2a0698;
        case 0x2a069cu: goto label_2a069c;
        case 0x2a06a0u: goto label_2a06a0;
        case 0x2a06a4u: goto label_2a06a4;
        case 0x2a06a8u: goto label_2a06a8;
        case 0x2a06acu: goto label_2a06ac;
        case 0x2a06b0u: goto label_2a06b0;
        case 0x2a06b4u: goto label_2a06b4;
        case 0x2a06b8u: goto label_2a06b8;
        case 0x2a06bcu: goto label_2a06bc;
        case 0x2a06c0u: goto label_2a06c0;
        case 0x2a06c4u: goto label_2a06c4;
        case 0x2a06c8u: goto label_2a06c8;
        case 0x2a06ccu: goto label_2a06cc;
        case 0x2a06d0u: goto label_2a06d0;
        case 0x2a06d4u: goto label_2a06d4;
        case 0x2a06d8u: goto label_2a06d8;
        case 0x2a06dcu: goto label_2a06dc;
        case 0x2a06e0u: goto label_2a06e0;
        case 0x2a06e4u: goto label_2a06e4;
        case 0x2a06e8u: goto label_2a06e8;
        case 0x2a06ecu: goto label_2a06ec;
        case 0x2a06f0u: goto label_2a06f0;
        case 0x2a06f4u: goto label_2a06f4;
        case 0x2a06f8u: goto label_2a06f8;
        case 0x2a06fcu: goto label_2a06fc;
        case 0x2a0700u: goto label_2a0700;
        case 0x2a0704u: goto label_2a0704;
        case 0x2a0708u: goto label_2a0708;
        case 0x2a070cu: goto label_2a070c;
        case 0x2a0710u: goto label_2a0710;
        case 0x2a0714u: goto label_2a0714;
        case 0x2a0718u: goto label_2a0718;
        case 0x2a071cu: goto label_2a071c;
        case 0x2a0720u: goto label_2a0720;
        case 0x2a0724u: goto label_2a0724;
        case 0x2a0728u: goto label_2a0728;
        case 0x2a072cu: goto label_2a072c;
        case 0x2a0730u: goto label_2a0730;
        case 0x2a0734u: goto label_2a0734;
        case 0x2a0738u: goto label_2a0738;
        case 0x2a073cu: goto label_2a073c;
        case 0x2a0740u: goto label_2a0740;
        case 0x2a0744u: goto label_2a0744;
        case 0x2a0748u: goto label_2a0748;
        case 0x2a074cu: goto label_2a074c;
        case 0x2a0750u: goto label_2a0750;
        case 0x2a0754u: goto label_2a0754;
        case 0x2a0758u: goto label_2a0758;
        case 0x2a075cu: goto label_2a075c;
        case 0x2a0760u: goto label_2a0760;
        case 0x2a0764u: goto label_2a0764;
        case 0x2a0768u: goto label_2a0768;
        case 0x2a076cu: goto label_2a076c;
        case 0x2a0770u: goto label_2a0770;
        case 0x2a0774u: goto label_2a0774;
        case 0x2a0778u: goto label_2a0778;
        case 0x2a077cu: goto label_2a077c;
        case 0x2a0780u: goto label_2a0780;
        case 0x2a0784u: goto label_2a0784;
        case 0x2a0788u: goto label_2a0788;
        case 0x2a078cu: goto label_2a078c;
        case 0x2a0790u: goto label_2a0790;
        case 0x2a0794u: goto label_2a0794;
        case 0x2a0798u: goto label_2a0798;
        case 0x2a079cu: goto label_2a079c;
        case 0x2a07a0u: goto label_2a07a0;
        case 0x2a07a4u: goto label_2a07a4;
        case 0x2a07a8u: goto label_2a07a8;
        case 0x2a07acu: goto label_2a07ac;
        case 0x2a07b0u: goto label_2a07b0;
        case 0x2a07b4u: goto label_2a07b4;
        case 0x2a07b8u: goto label_2a07b8;
        case 0x2a07bcu: goto label_2a07bc;
        case 0x2a07c0u: goto label_2a07c0;
        case 0x2a07c4u: goto label_2a07c4;
        case 0x2a07c8u: goto label_2a07c8;
        case 0x2a07ccu: goto label_2a07cc;
        case 0x2a07d0u: goto label_2a07d0;
        case 0x2a07d4u: goto label_2a07d4;
        case 0x2a07d8u: goto label_2a07d8;
        case 0x2a07dcu: goto label_2a07dc;
        case 0x2a07e0u: goto label_2a07e0;
        case 0x2a07e4u: goto label_2a07e4;
        case 0x2a07e8u: goto label_2a07e8;
        case 0x2a07ecu: goto label_2a07ec;
        case 0x2a07f0u: goto label_2a07f0;
        case 0x2a07f4u: goto label_2a07f4;
        case 0x2a07f8u: goto label_2a07f8;
        case 0x2a07fcu: goto label_2a07fc;
        case 0x2a0800u: goto label_2a0800;
        case 0x2a0804u: goto label_2a0804;
        case 0x2a0808u: goto label_2a0808;
        case 0x2a080cu: goto label_2a080c;
        case 0x2a0810u: goto label_2a0810;
        case 0x2a0814u: goto label_2a0814;
        case 0x2a0818u: goto label_2a0818;
        case 0x2a081cu: goto label_2a081c;
        case 0x2a0820u: goto label_2a0820;
        case 0x2a0824u: goto label_2a0824;
        case 0x2a0828u: goto label_2a0828;
        case 0x2a082cu: goto label_2a082c;
        case 0x2a0830u: goto label_2a0830;
        case 0x2a0834u: goto label_2a0834;
        case 0x2a0838u: goto label_2a0838;
        case 0x2a083cu: goto label_2a083c;
        case 0x2a0840u: goto label_2a0840;
        case 0x2a0844u: goto label_2a0844;
        case 0x2a0848u: goto label_2a0848;
        case 0x2a084cu: goto label_2a084c;
        case 0x2a0850u: goto label_2a0850;
        case 0x2a0854u: goto label_2a0854;
        case 0x2a0858u: goto label_2a0858;
        case 0x2a085cu: goto label_2a085c;
        case 0x2a0860u: goto label_2a0860;
        case 0x2a0864u: goto label_2a0864;
        case 0x2a0868u: goto label_2a0868;
        case 0x2a086cu: goto label_2a086c;
        case 0x2a0870u: goto label_2a0870;
        case 0x2a0874u: goto label_2a0874;
        case 0x2a0878u: goto label_2a0878;
        case 0x2a087cu: goto label_2a087c;
        case 0x2a0880u: goto label_2a0880;
        case 0x2a0884u: goto label_2a0884;
        case 0x2a0888u: goto label_2a0888;
        case 0x2a088cu: goto label_2a088c;
        case 0x2a0890u: goto label_2a0890;
        case 0x2a0894u: goto label_2a0894;
        case 0x2a0898u: goto label_2a0898;
        case 0x2a089cu: goto label_2a089c;
        case 0x2a08a0u: goto label_2a08a0;
        case 0x2a08a4u: goto label_2a08a4;
        case 0x2a08a8u: goto label_2a08a8;
        case 0x2a08acu: goto label_2a08ac;
        case 0x2a08b0u: goto label_2a08b0;
        case 0x2a08b4u: goto label_2a08b4;
        case 0x2a08b8u: goto label_2a08b8;
        case 0x2a08bcu: goto label_2a08bc;
        case 0x2a08c0u: goto label_2a08c0;
        case 0x2a08c4u: goto label_2a08c4;
        case 0x2a08c8u: goto label_2a08c8;
        case 0x2a08ccu: goto label_2a08cc;
        case 0x2a08d0u: goto label_2a08d0;
        case 0x2a08d4u: goto label_2a08d4;
        case 0x2a08d8u: goto label_2a08d8;
        case 0x2a08dcu: goto label_2a08dc;
        case 0x2a08e0u: goto label_2a08e0;
        case 0x2a08e4u: goto label_2a08e4;
        case 0x2a08e8u: goto label_2a08e8;
        case 0x2a08ecu: goto label_2a08ec;
        case 0x2a08f0u: goto label_2a08f0;
        case 0x2a08f4u: goto label_2a08f4;
        case 0x2a08f8u: goto label_2a08f8;
        case 0x2a08fcu: goto label_2a08fc;
        case 0x2a0900u: goto label_2a0900;
        case 0x2a0904u: goto label_2a0904;
        case 0x2a0908u: goto label_2a0908;
        case 0x2a090cu: goto label_2a090c;
        case 0x2a0910u: goto label_2a0910;
        case 0x2a0914u: goto label_2a0914;
        case 0x2a0918u: goto label_2a0918;
        case 0x2a091cu: goto label_2a091c;
        case 0x2a0920u: goto label_2a0920;
        case 0x2a0924u: goto label_2a0924;
        case 0x2a0928u: goto label_2a0928;
        case 0x2a092cu: goto label_2a092c;
        case 0x2a0930u: goto label_2a0930;
        case 0x2a0934u: goto label_2a0934;
        case 0x2a0938u: goto label_2a0938;
        case 0x2a093cu: goto label_2a093c;
        case 0x2a0940u: goto label_2a0940;
        case 0x2a0944u: goto label_2a0944;
        case 0x2a0948u: goto label_2a0948;
        case 0x2a094cu: goto label_2a094c;
        case 0x2a0950u: goto label_2a0950;
        case 0x2a0954u: goto label_2a0954;
        case 0x2a0958u: goto label_2a0958;
        case 0x2a095cu: goto label_2a095c;
        case 0x2a0960u: goto label_2a0960;
        case 0x2a0964u: goto label_2a0964;
        case 0x2a0968u: goto label_2a0968;
        case 0x2a096cu: goto label_2a096c;
        case 0x2a0970u: goto label_2a0970;
        case 0x2a0974u: goto label_2a0974;
        case 0x2a0978u: goto label_2a0978;
        case 0x2a097cu: goto label_2a097c;
        case 0x2a0980u: goto label_2a0980;
        case 0x2a0984u: goto label_2a0984;
        case 0x2a0988u: goto label_2a0988;
        case 0x2a098cu: goto label_2a098c;
        case 0x2a0990u: goto label_2a0990;
        case 0x2a0994u: goto label_2a0994;
        case 0x2a0998u: goto label_2a0998;
        case 0x2a099cu: goto label_2a099c;
        case 0x2a09a0u: goto label_2a09a0;
        case 0x2a09a4u: goto label_2a09a4;
        case 0x2a09a8u: goto label_2a09a8;
        case 0x2a09acu: goto label_2a09ac;
        case 0x2a09b0u: goto label_2a09b0;
        case 0x2a09b4u: goto label_2a09b4;
        case 0x2a09b8u: goto label_2a09b8;
        case 0x2a09bcu: goto label_2a09bc;
        case 0x2a09c0u: goto label_2a09c0;
        case 0x2a09c4u: goto label_2a09c4;
        case 0x2a09c8u: goto label_2a09c8;
        case 0x2a09ccu: goto label_2a09cc;
        case 0x2a09d0u: goto label_2a09d0;
        case 0x2a09d4u: goto label_2a09d4;
        case 0x2a09d8u: goto label_2a09d8;
        case 0x2a09dcu: goto label_2a09dc;
        case 0x2a09e0u: goto label_2a09e0;
        case 0x2a09e4u: goto label_2a09e4;
        case 0x2a09e8u: goto label_2a09e8;
        case 0x2a09ecu: goto label_2a09ec;
        case 0x2a09f0u: goto label_2a09f0;
        case 0x2a09f4u: goto label_2a09f4;
        case 0x2a09f8u: goto label_2a09f8;
        case 0x2a09fcu: goto label_2a09fc;
        case 0x2a0a00u: goto label_2a0a00;
        case 0x2a0a04u: goto label_2a0a04;
        case 0x2a0a08u: goto label_2a0a08;
        case 0x2a0a0cu: goto label_2a0a0c;
        case 0x2a0a10u: goto label_2a0a10;
        case 0x2a0a14u: goto label_2a0a14;
        case 0x2a0a18u: goto label_2a0a18;
        case 0x2a0a1cu: goto label_2a0a1c;
        case 0x2a0a20u: goto label_2a0a20;
        case 0x2a0a24u: goto label_2a0a24;
        case 0x2a0a28u: goto label_2a0a28;
        case 0x2a0a2cu: goto label_2a0a2c;
        case 0x2a0a30u: goto label_2a0a30;
        case 0x2a0a34u: goto label_2a0a34;
        case 0x2a0a38u: goto label_2a0a38;
        case 0x2a0a3cu: goto label_2a0a3c;
        case 0x2a0a40u: goto label_2a0a40;
        case 0x2a0a44u: goto label_2a0a44;
        case 0x2a0a48u: goto label_2a0a48;
        case 0x2a0a4cu: goto label_2a0a4c;
        case 0x2a0a50u: goto label_2a0a50;
        case 0x2a0a54u: goto label_2a0a54;
        case 0x2a0a58u: goto label_2a0a58;
        case 0x2a0a5cu: goto label_2a0a5c;
        case 0x2a0a60u: goto label_2a0a60;
        case 0x2a0a64u: goto label_2a0a64;
        default: break;
    }

    ctx->pc = 0x29fe18u;

label_29fe18:
    // 0x29fe18: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x29fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_29fe1c:
    // 0x29fe1c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x29fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_29fe20:
    // 0x29fe20: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x29fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_29fe24:
    // 0x29fe24: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_29fe28:
    // 0x29fe28: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x29fe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_29fe2c:
    // 0x29fe2c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x29fe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_29fe30:
    // 0x29fe30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29fe30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fe34:
    // 0x29fe34: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x29fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_29fe38:
    // 0x29fe38: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x29fe38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_29fe3c:
    // 0x29fe3c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x29fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_29fe40:
    // 0x29fe40: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x29fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_29fe44:
    // 0x29fe44: 0x3c160001  lui         $s6, 0x1
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1 << 16));
label_29fe48:
    // 0x29fe48: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x29fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_29fe4c:
    // 0x29fe4c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29fe4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fe50:
    // 0x29fe50: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x29fe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_29fe54:
    // 0x29fe54: 0x3c1e0001  lui         $fp, 0x1
    ctx->pc = 0x29fe54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1 << 16));
label_29fe58:
    // 0x29fe58: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x29fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_29fe5c:
    // 0x29fe5c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29fe60:
    // 0x29fe60: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x29fe60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29fe64:
    // 0x29fe64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29fe68:
    // 0x29fe68: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29fe68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29fe6c:
    // 0x29fe6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29fe70:
    // 0x29fe70: 0x40f809  jalr        $v0
label_29fe74:
    if (ctx->pc == 0x29FE74u) {
        ctx->pc = 0x29FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE70u;
        // 0x29fe74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FE78u;
        goto label_29fe78;
    }
    ctx->pc = 0x29FE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FE78u);
        ctx->pc = 0x29FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE70u;
        // 0x29fe74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FE70u, 0x29FE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FE78u;
label_29fe78:
    // 0x29fe78: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_29fe7c:
    // 0x29fe7c: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x29fe7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_29fe80:
    // 0x29fe80: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x29fe80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_29fe84:
    // 0x29fe84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29fe84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fe88:
    // 0x29fe88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29fe8c:
    // 0x29fe8c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x29fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_29fe90:
    // 0x29fe90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_29fe94:
    // 0x29fe94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29fe94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_29fe98:
    // 0x29fe98: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_29fe9c:
    // 0x29fe9c: 0xc0e409a  jal         func_390268
label_29fea0:
    if (ctx->pc == 0x29FEA0u) {
        ctx->pc = 0x29FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE9Cu;
        // 0x29fea0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FEA4u;
        goto label_29fea4;
    }
    ctx->pc = 0x29FE9Cu;
    SET_GPR_U32(ctx, 31, 0x29FEA4u);
    ctx->pc = 0x29FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE9Cu;
    // 0x29fea0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29FE9Cu, 0x29FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEA4u;
label_29fea4:
    // 0x29fea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29fea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fea8:
    // 0x29fea8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29feac:
    // 0x29feac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29feacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29feb0:
    // 0x29feb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29feb4:
    // 0x29feb4: 0x40f809  jalr        $v0
label_29feb8:
    if (ctx->pc == 0x29FEB8u) {
        ctx->pc = 0x29FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEB4u;
        // 0x29feb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FEBCu;
        goto label_29febc;
    }
    ctx->pc = 0x29FEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FEBCu);
        ctx->pc = 0x29FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEB4u;
        // 0x29feb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FEB4u, 0x29FEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FEBCu;
label_29febc:
    // 0x29febc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x29febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_29fec0:
    // 0x29fec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29fec4:
    // 0x29fec4: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x29fec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_29fec8:
    // 0x29fec8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29fecc:
    // 0x29fecc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29fed0:
    // 0x29fed0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29fed0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29fed4:
    // 0x29fed4: 0xc089bfc  jal         func_226FF0
label_29fed8:
    if (ctx->pc == 0x29FED8u) {
        ctx->pc = 0x29FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FED4u;
        // 0x29fed8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FEDCu;
        goto label_29fedc;
    }
    ctx->pc = 0x29FED4u;
    SET_GPR_U32(ctx, 31, 0x29FEDCu);
    ctx->pc = 0x29FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FED4u;
    // 0x29fed8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x29FED4u, 0x29FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEDCu;
label_29fedc:
    // 0x29fedc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29fee0:
    // 0x29fee0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29fee4:
    // 0x29fee4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x29fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29fee8:
    // 0x29fee8: 0xa0f809  jalr        $a1
label_29feec:
    if (ctx->pc == 0x29FEECu) {
        ctx->pc = 0x29FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEE8u;
        // 0x29feec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FEF0u;
        goto label_29fef0;
    }
    ctx->pc = 0x29FEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29FEF0u);
        ctx->pc = 0x29FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEE8u;
        // 0x29feec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FEE8u, 0x29FEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FEF0u;
label_29fef0:
    // 0x29fef0: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x29fef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_29fef4:
    // 0x29fef4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x29fef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29fef8:
    // 0x29fef8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x29fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_29fefc:
    // 0x29fefc: 0xc0e4060  jal         func_390180
label_29ff00:
    if (ctx->pc == 0x29FF00u) {
        ctx->pc = 0x29FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEFCu;
        // 0x29ff00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FF04u;
        goto label_29ff04;
    }
    ctx->pc = 0x29FEFCu;
    SET_GPR_U32(ctx, 31, 0x29FF04u);
    ctx->pc = 0x29FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FEFCu;
    // 0x29ff00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x29FEFCu, 0x29FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF04u;
label_29ff04:
    // 0x29ff04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29ff08:
    // 0x29ff08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ff0c:
    // 0x29ff0c: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x29ff0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_29ff10:
    // 0x29ff10: 0x8c6600a4  lw          $a2, 0xA4($v1)
    ctx->pc = 0x29ff10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_29ff14:
    // 0x29ff14: 0xc0f809  jalr        $a2
label_29ff18:
    if (ctx->pc == 0x29FF18u) {
        ctx->pc = 0x29FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF14u;
        // 0x29ff18: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FF1Cu;
        goto label_29ff1c;
    }
    ctx->pc = 0x29FF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x29FF1Cu);
        ctx->pc = 0x29FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF14u;
        // 0x29ff18: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FF14u, 0x29FF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FF1Cu;
label_29ff1c:
    // 0x29ff1c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x29ff1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29ff20:
    // 0x29ff20: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x29ff20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29ff24:
    // 0x29ff24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29ff28:
    // 0x29ff28: 0xc0e4060  jal         func_390180
label_29ff2c:
    if (ctx->pc == 0x29FF2Cu) {
        ctx->pc = 0x29FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF28u;
        // 0x29ff2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FF30u;
        goto label_29ff30;
    }
    ctx->pc = 0x29FF28u;
    SET_GPR_U32(ctx, 31, 0x29FF30u);
    ctx->pc = 0x29FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF28u;
    // 0x29ff2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x29FF28u, 0x29FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF30u;
label_29ff30:
    // 0x29ff30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29ff34:
    // 0x29ff34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ff38:
    // 0x29ff38: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x29ff38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_29ff3c:
    // 0x29ff3c: 0x8c6600a4  lw          $a2, 0xA4($v1)
    ctx->pc = 0x29ff3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_29ff40:
    // 0x29ff40: 0xc0f809  jalr        $a2
label_29ff44:
    if (ctx->pc == 0x29FF44u) {
        ctx->pc = 0x29FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF40u;
        // 0x29ff44: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FF48u;
        goto label_29ff48;
    }
    ctx->pc = 0x29FF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x29FF48u);
        ctx->pc = 0x29FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF40u;
        // 0x29ff44: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FF40u, 0x29FF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FF48u;
label_29ff48:
    // 0x29ff48: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x29ff48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29ff4c:
    // 0x29ff4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_29ff50:
    // 0x29ff50: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x29ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff54:
    // 0x29ff54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ff54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ff58:
    // 0x29ff58: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x29ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ff5c:
    // 0x29ff5c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x29ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29ff60:
    // 0x29ff60: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x29ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_29ff64:
    // 0x29ff64: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x29ff64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_29ff68:
    // 0x29ff68: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x29ff68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_29ff6c:
    // 0x29ff6c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_29ff70:
    // 0x29ff70: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x29ff70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_29ff74:
    // 0x29ff74: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x29ff74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_29ff78:
    // 0x29ff78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29ff7c:
    // 0x29ff7c: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x29ff7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_29ff80:
    // 0x29ff80: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x29ff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_29ff84:
    // 0x29ff84: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x29ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_29ff88:
    // 0x29ff88: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x29ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ff8c:
    // 0x29ff8c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x29ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ff90:
    // 0x29ff90: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x29ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29ff94:
    // 0x29ff94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x29ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_29ff98:
    // 0x29ff98: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x29ff98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_29ff9c:
    // 0x29ff9c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x29ff9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_29ffa0:
    // 0x29ffa0: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x29ffa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_29ffa4:
    // 0x29ffa4: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x29ffa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_29ffa8:
    // 0x29ffa8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x29ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29ffac:
    // 0x29ffac: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x29ffacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_29ffb0:
    // 0x29ffb0: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x29ffb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_29ffb4:
    // 0x29ffb4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x29ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_29ffb8:
    // 0x29ffb8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ffbc:
    // 0x29ffbc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x29ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ffc0:
    // 0x29ffc0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29ffc4:
    // 0x29ffc4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x29ffc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_29ffc8:
    // 0x29ffc8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x29ffc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_29ffcc:
    // 0x29ffcc: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x29ffccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_29ffd0:
    // 0x29ffd0: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x29ffd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_29ffd4:
    // 0x29ffd4: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x29ffd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_29ffd8:
    // 0x29ffd8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x29ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_29ffdc:
    // 0x29ffdc: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x29ffdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_29ffe0:
    // 0x29ffe0: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x29ffe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_29ffe4:
    // 0x29ffe4: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x29ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_29ffe8:
    // 0x29ffe8: 0xc10c1fa  jal         func_4307E8
label_29ffec:
    if (ctx->pc == 0x29FFECu) {
        ctx->pc = 0x29FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFE8u;
        // 0x29ffec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FFF0u;
        goto label_29fff0;
    }
    ctx->pc = 0x29FFE8u;
    SET_GPR_U32(ctx, 31, 0x29FFF0u);
    ctx->pc = 0x29FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFE8u;
    // 0x29ffec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x29FFE8u, 0x29FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFF0u;
label_29fff0:
    // 0x29fff0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29fff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_29fff4:
    // 0x29fff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29fff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29fff8:
    // 0x29fff8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x29fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_29fffc:
    // 0x29fffc: 0x24426e30  addiu       $v0, $v0, 0x6E30
    ctx->pc = 0x29fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
label_2a0000:
    // 0x2a0000: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2a0000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2a0004:
    // 0x2a0004: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a0004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2a0008:
    // 0x2a0008: 0x247129b8  addiu       $s1, $v1, 0x29B8
    ctx->pc = 0x2a0008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10680));
label_2a000c:
    // 0x2a000c: 0x2450001c  addiu       $s0, $v0, 0x1C
    ctx->pc = 0x2a000cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_2a0010:
    // 0x2a0010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0014:
    // 0x2a0014: 0xc10c313  jal         func_430C4C
label_2a0018:
    if (ctx->pc == 0x2A0018u) {
        ctx->pc = 0x2A0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0014u;
        // 0x2a0018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A001Cu;
        goto label_2a001c;
    }
    ctx->pc = 0x2A0014u;
    SET_GPR_U32(ctx, 31, 0x2A001Cu);
    ctx->pc = 0x2A0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0014u;
    // 0x2a0018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2A0014u, 0x2A001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A001Cu;
label_2a001c:
    // 0x2a001c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2a0020:
    if (ctx->pc == 0x2A0020u) {
        ctx->pc = 0x2A0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A001Cu;
        // 0x2a0020: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0024u;
        goto label_2a0024;
    }
    ctx->pc = 0x2A001Cu;
    {
        const bool branch_taken_0x2a001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A001Cu;
        // 0x2a0020: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a001c) {
            ctx->pc = 0x2A0080u;
            goto label_2a0080;
        }
    }
    ctx->pc = 0x2A0024u;
label_2a0024:
    // 0x2a0024: 0x26100b10  addiu       $s0, $s0, 0xB10
    ctx->pc = 0x2a0024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
label_2a0028:
    // 0x2a0028: 0x2bc03  sra         $s7, $v0, 16
    ctx->pc = 0x2a0028u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
label_2a002c:
    // 0x2a002c: 0x2ae20020  slti        $v0, $s7, 0x20
    ctx->pc = 0x2a002cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)32) ? 1 : 0);
label_2a0030:
    // 0x2a0030: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2a0034:
    if (ctx->pc == 0x2A0034u) {
        ctx->pc = 0x2A0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0030u;
        // 0x2a0034: 0x2deb021  addu        $s6, $s6, $fp (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0038u;
        goto label_2a0038;
    }
    ctx->pc = 0x2A0030u;
    {
        const bool branch_taken_0x2a0030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0030u;
        // 0x2a0034: 0x2deb021  addu        $s6, $s6, $fp (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0030) {
            ctx->pc = 0x2A0010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0010;
        }
    }
    ctx->pc = 0x2A0038u;
label_2a0038:
    // 0x2a0038: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a0038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a003c:
    // 0x2a003c: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0040:
    // 0x2a0040: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a0040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2a0044:
    // 0x2a0044: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2a0044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2a0048:
    // 0x2a0048: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2a0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a004c:
    // 0x2a004c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2a004cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0050:
    // 0x2a0050: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2a0054:
    if (ctx->pc == 0x2A0054u) {
        ctx->pc = 0x2A0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0050u;
        // 0x2a0054: 0x4b403  sra         $s6, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0058u;
        goto label_2a0058;
    }
    ctx->pc = 0x2A0050u;
    {
        const bool branch_taken_0x2a0050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0050u;
        // 0x2a0054: 0x4b403  sra         $s6, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0050) {
            ctx->pc = 0x2A00C4u;
            goto label_2a00c4;
        }
    }
    ctx->pc = 0x2A0058u;
label_2a0058:
    // 0x2a0058: 0x86630034  lh          $v1, 0x34($s3)
    ctx->pc = 0x2a0058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
label_2a005c:
    // 0x2a005c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0060:
    // 0x2a0060: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2a0064:
    if (ctx->pc == 0x2A0064u) {
        ctx->pc = 0x2A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0060u;
        // 0x2a0064: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0068u;
        goto label_2a0068;
    }
    ctx->pc = 0x2A0060u;
    {
        const bool branch_taken_0x2a0060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0060u;
        // 0x2a0064: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0060) {
            ctx->pc = 0x2A00A8u;
            goto label_2a00a8;
        }
    }
    ctx->pc = 0x2A0068u;
label_2a0068:
    // 0x2a0068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a006c:
    if (ctx->pc == 0x2A006Cu) {
        ctx->pc = 0x2A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0068u;
        // 0x2a006c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0070u;
        goto label_2a0070;
    }
    ctx->pc = 0x2A0068u;
    {
        const bool branch_taken_0x2a0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0068u;
        // 0x2a006c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0068) {
            ctx->pc = 0x2A0088u;
            goto label_2a0088;
        }
    }
    ctx->pc = 0x2A0070u;
label_2a0070:
    // 0x2a0070: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2a0074:
    if (ctx->pc == 0x2A0074u) {
        ctx->pc = 0x2A0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0070u;
        // 0x2a0074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0078u;
        goto label_2a0078;
    }
    ctx->pc = 0x2A0070u;
    {
        const bool branch_taken_0x2a0070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0070u;
        // 0x2a0074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0070) {
            ctx->pc = 0x2A0098u;
            goto label_2a0098;
        }
    }
    ctx->pc = 0x2A0078u;
label_2a0078:
    // 0x2a0078: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a007c:
    if (ctx->pc == 0x2A007Cu) {
        ctx->pc = 0x2A007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0078u;
        // 0x2a007c: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0080u;
        goto label_2a0080;
    }
    ctx->pc = 0x2A0078u;
    {
        const bool branch_taken_0x2a0078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0078u;
        // 0x2a007c: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0078) {
            ctx->pc = 0x2A00C8u;
            goto label_2a00c8;
        }
    }
    ctx->pc = 0x2A0080u;
label_2a0080:
    // 0x2a0080: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_2a0084:
    if (ctx->pc == 0x2A0084u) {
        ctx->pc = 0x2A0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0080u;
        // 0x2a0084: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0088u;
        goto label_2a0088;
    }
    ctx->pc = 0x2A0080u;
    {
        const bool branch_taken_0x2a0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0080u;
        // 0x2a0084: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0080) {
            ctx->pc = 0x2A003Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a003c;
        }
    }
    ctx->pc = 0x2A0088u;
label_2a0088:
    // 0x2a0088: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2a008c:
    if (ctx->pc == 0x2A008Cu) {
        ctx->pc = 0x2A008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0088u;
        // 0x2a008c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0090u;
        goto label_2a0090;
    }
    ctx->pc = 0x2A0088u;
    {
        const bool branch_taken_0x2a0088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0088u;
        // 0x2a008c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0088) {
            ctx->pc = 0x2A00BCu;
            goto label_2a00bc;
        }
    }
    ctx->pc = 0x2A0090u;
label_2a0090:
    // 0x2a0090: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a0094:
    if (ctx->pc == 0x2A0094u) {
        ctx->pc = 0x2A0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0090u;
        // 0x2a0094: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0098u;
        goto label_2a0098;
    }
    ctx->pc = 0x2A0090u;
    {
        const bool branch_taken_0x2a0090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0090u;
        // 0x2a0094: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0090) {
            ctx->pc = 0x2A00C8u;
            goto label_2a00c8;
        }
    }
    ctx->pc = 0x2A0098u;
label_2a0098:
    // 0x2a0098: 0xc0a7f84  jal         func_29FE10
label_2a009c:
    if (ctx->pc == 0x2A009Cu) {
        ctx->pc = 0x2A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0098u;
        // 0x2a009c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A00A0u;
        goto label_2a00a0;
    }
    ctx->pc = 0x2A0098u;
    SET_GPR_U32(ctx, 31, 0x2A00A0u);
    ctx->pc = 0x2A009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0098u;
    // 0x2a009c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x2A0098u, 0x2A00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00A0u;
label_2a00a0:
    // 0x2a00a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a00a4:
    if (ctx->pc == 0x2A00A4u) {
        ctx->pc = 0x2A00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00A0u;
        // 0x2a00a4: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A00A8u;
        goto label_2a00a8;
    }
    ctx->pc = 0x2A00A0u;
    {
        const bool branch_taken_0x2a00a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00A0u;
        // 0x2a00a4: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00a0) {
            ctx->pc = 0x2A00C8u;
            goto label_2a00c8;
        }
    }
    ctx->pc = 0x2A00A8u;
label_2a00a8:
    // 0x2a00a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a00ac:
    // 0x2a00ac: 0xc0a7f84  jal         func_29FE10
label_2a00b0:
    if (ctx->pc == 0x2A00B0u) {
        ctx->pc = 0x2A00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00ACu;
        // 0x2a00b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A00B4u;
        goto label_2a00b4;
    }
    ctx->pc = 0x2A00ACu;
    SET_GPR_U32(ctx, 31, 0x2A00B4u);
    ctx->pc = 0x2A00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00ACu;
    // 0x2a00b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x2A00ACu, 0x2A00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00B4u;
label_2a00b4:
    // 0x2a00b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a00b8:
    if (ctx->pc == 0x2A00B8u) {
        ctx->pc = 0x2A00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00B4u;
        // 0x2a00b8: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A00BCu;
        goto label_2a00bc;
    }
    ctx->pc = 0x2A00B4u;
    {
        const bool branch_taken_0x2a00b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00B4u;
        // 0x2a00b8: 0x86630010  lh          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00b4) {
            ctx->pc = 0x2A00C8u;
            goto label_2a00c8;
        }
    }
    ctx->pc = 0x2A00BCu;
label_2a00bc:
    // 0x2a00bc: 0xc0a7f84  jal         func_29FE10
label_2a00c0:
    if (ctx->pc == 0x2A00C0u) {
        ctx->pc = 0x2A00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00BCu;
        // 0x2a00c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A00C4u;
        goto label_2a00c4;
    }
    ctx->pc = 0x2A00BCu;
    SET_GPR_U32(ctx, 31, 0x2A00C4u);
    ctx->pc = 0x2A00C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00BCu;
    // 0x2a00c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x2A00BCu, 0x2A00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00C4u;
label_2a00c4:
    // 0x2a00c4: 0x86630010  lh          $v1, 0x10($s3)
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_2a00c8:
    // 0x2a00c8: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x2a00c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2a00cc:
    // 0x2a00cc: 0x10400258  beqz        $v0, . + 4 + (0x258 << 2)
label_2a00d0:
    if (ctx->pc == 0x2A00D0u) {
        ctx->pc = 0x2A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00CCu;
        // 0x2a00d0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A00D4u;
        goto label_2a00d4;
    }
    ctx->pc = 0x2A00CCu;
    {
        const bool branch_taken_0x2a00cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00CCu;
        // 0x2a00d0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00cc) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A00D4u;
label_2a00d4:
    // 0x2a00d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a00d8:
    // 0x2a00d8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2a00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2a00dc:
    // 0x2a00dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a00e0:
    // 0x2a00e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a00e4:
    // 0x2a00e4: 0x800008  jr          $a0
label_2a00e8:
    if (ctx->pc == 0x2A00E8u) {
        ctx->pc = 0x2A00ECu;
        goto label_2a00ec;
    }
    ctx->pc = 0x2A00E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A00ECu: goto label_2a00ec;
            case 0x2A01A0u: goto label_2a01a0;
            case 0x2A0240u: goto label_2a0240;
            case 0x2A03ACu: goto label_2a03ac;
            case 0x2A0418u: goto label_2a0418;
            case 0x2A0474u: goto label_2a0474;
            case 0x2A07CCu: goto label_2a07cc;
            case 0x2A0834u: goto label_2a0834;
            case 0x2A08A4u: goto label_2a08a4;
            case 0x2A0920u: goto label_2a0920;
            case 0x2A0958u: goto label_2a0958;
            case 0x2A0A30u: goto label_2a0a30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A00E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A00ECu;
label_2a00ec:
    // 0x2a00ec: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a00f0:
    // 0x2a00f0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2a00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a00f4:
    // 0x2a00f4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a00f8:
    // 0x2a00f8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a00f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a00fc:
    // 0x2a00fc: 0x1060024c  beqz        $v1, . + 4 + (0x24C << 2)
label_2a0100:
    if (ctx->pc == 0x2A0100u) {
        ctx->pc = 0x2A0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00FCu;
        // 0x2a0100: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0104u;
        goto label_2a0104;
    }
    ctx->pc = 0x2A00FCu;
    {
        const bool branch_taken_0x2a00fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00FCu;
        // 0x2a0100: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00fc) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0104u;
label_2a0104:
    // 0x2a0104: 0xc0c1d52  jal         func_307548
label_2a0108:
    if (ctx->pc == 0x2A0108u) {
        ctx->pc = 0x2A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0104u;
        // 0x2a0108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A010Cu;
        goto label_2a010c;
    }
    ctx->pc = 0x2A0104u;
    SET_GPR_U32(ctx, 31, 0x2A010Cu);
    ctx->pc = 0x2A0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0104u;
    // 0x2a0108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307548u, 0x2A0104u, 0x2A010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A010Cu;
label_2a010c:
    // 0x2a010c: 0xc0a367c  jal         func_28D9F0
label_2a0110:
    if (ctx->pc == 0x2A0110u) {
        ctx->pc = 0x2A0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A010Cu;
        // 0x2a0110: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0114u;
        goto label_2a0114;
    }
    ctx->pc = 0x2A010Cu;
    SET_GPR_U32(ctx, 31, 0x2A0114u);
    ctx->pc = 0x2A0110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A010Cu;
    // 0x2a0110: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A010Cu, 0x2A0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0114u;
label_2a0114:
    // 0x2a0114: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a0118:
    if (ctx->pc == 0x2A0118u) {
        ctx->pc = 0x2A0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0114u;
        // 0x2a0118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A011Cu;
        goto label_2a011c;
    }
    ctx->pc = 0x2A0114u;
    {
        const bool branch_taken_0x2a0114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0114u;
        // 0x2a0118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0114) {
            ctx->pc = 0x2A0134u;
            goto label_2a0134;
        }
    }
    ctx->pc = 0x2A011Cu;
label_2a011c:
    // 0x2a011c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0120:
    // 0x2a0120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a0124:
    // 0x2a0124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0128:
    // 0x2a0128: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a012c:
    // 0x2a012c: 0xc0bf800  jal         func_2FE000
label_2a0130:
    if (ctx->pc == 0x2A0130u) {
        ctx->pc = 0x2A0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A012Cu;
        // 0x2a0130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0134u;
        goto label_2a0134;
    }
    ctx->pc = 0x2A012Cu;
    SET_GPR_U32(ctx, 31, 0x2A0134u);
    ctx->pc = 0x2A0130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A012Cu;
    // 0x2a0130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A012Cu, 0x2A0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0134u;
label_2a0134:
    // 0x2a0134: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a0134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a0138:
    // 0x2a0138: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a0138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a013c:
    // 0x2a013c: 0x26100f50  addiu       $s0, $s0, 0xF50
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3920));
label_2a0140:
    // 0x2a0140: 0xc0cd4e4  jal         func_335390
label_2a0144:
    if (ctx->pc == 0x2A0144u) {
        ctx->pc = 0x2A0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0140u;
        // 0x2a0144: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0148u;
        goto label_2a0148;
    }
    ctx->pc = 0x2A0140u;
    SET_GPR_U32(ctx, 31, 0x2A0148u);
    ctx->pc = 0x2A0144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0140u;
    // 0x2a0144: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A0140u, 0x2A0148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0148u;
label_2a0148:
    // 0x2a0148: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a0148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2a014c:
    // 0x2a014c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a014cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a0150:
    // 0x2a0150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a0154:
    // 0x2a0154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0158:
    // 0x2a0158: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a015c:
    // 0x2a015c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a015cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0160:
    // 0x2a0160: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a0160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0164:
    // 0x2a0164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0168:
    // 0x2a0168: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a016c:
    // 0x2a016c: 0xc08e4dc  jal         func_239370
label_2a0170:
    if (ctx->pc == 0x2A0170u) {
        ctx->pc = 0x2A0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A016Cu;
        // 0x2a0170: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0174u;
        goto label_2a0174;
    }
    ctx->pc = 0x2A016Cu;
    SET_GPR_U32(ctx, 31, 0x2A0174u);
    ctx->pc = 0x2A0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A016Cu;
    // 0x2a0170: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239370u, 0x2A016Cu, 0x2A0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0174u;
label_2a0174:
    // 0x2a0174: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0178:
    // 0x2a0178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a017c:
    // 0x2a017c: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x2a017cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a0180:
    // 0x2a0180: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0184:
    // 0x2a0184: 0x94449424  lhu         $a0, -0x6BDC($v0)
    ctx->pc = 0x2a0184u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939684)));
label_2a0188:
    // 0x2a0188: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a018c:
    // 0x2a018c: 0xa6640020  sh          $a0, 0x20($s3)
    ctx->pc = 0x2a018cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 4));
label_2a0190:
    // 0x2a0190: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x2a0190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
label_2a0194:
    // 0x2a0194: 0xa664001e  sh          $a0, 0x1E($s3)
    ctx->pc = 0x2a0194u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 4));
label_2a0198:
    // 0x2a0198: 0x10000225  b           . + 4 + (0x225 << 2)
label_2a019c:
    if (ctx->pc == 0x2A019Cu) {
        ctx->pc = 0x2A019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0198u;
        // 0x2a019c: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A01A0u;
        goto label_2a01a0;
    }
    ctx->pc = 0x2A0198u;
    {
        const bool branch_taken_0x2a0198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0198u;
        // 0x2a019c: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0198) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A01A0u;
label_2a01a0:
    // 0x2a01a0: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2a01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a01a4:
    // 0x2a01a4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2a01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a01a8:
    // 0x2a01a8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a01ac:
    // 0x2a01ac: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a01acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a01b0:
    // 0x2a01b0: 0x10600220  beqz        $v1, . + 4 + (0x220 << 2)
label_2a01b4:
    if (ctx->pc == 0x2A01B4u) {
        ctx->pc = 0x2A01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01B0u;
        // 0x2a01b4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A01B8u;
        goto label_2a01b8;
    }
    ctx->pc = 0x2A01B0u;
    {
        const bool branch_taken_0x2a01b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01B0u;
        // 0x2a01b4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01b0) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A01B8u;
label_2a01b8:
    // 0x2a01b8: 0xc0a367c  jal         func_28D9F0
label_2a01bc:
    if (ctx->pc == 0x2A01BCu) {
        ctx->pc = 0x2A01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01B8u;
        // 0x2a01bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A01C0u;
        goto label_2a01c0;
    }
    ctx->pc = 0x2A01B8u;
    SET_GPR_U32(ctx, 31, 0x2A01C0u);
    ctx->pc = 0x2A01BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01B8u;
    // 0x2a01bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A01B8u, 0x2A01C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01C0u;
label_2a01c0:
    // 0x2a01c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a01c4:
    if (ctx->pc == 0x2A01C4u) {
        ctx->pc = 0x2A01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01C0u;
        // 0x2a01c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A01C8u;
        goto label_2a01c8;
    }
    ctx->pc = 0x2A01C0u;
    {
        const bool branch_taken_0x2a01c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01C0u;
        // 0x2a01c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01c0) {
            ctx->pc = 0x2A01E0u;
            goto label_2a01e0;
        }
    }
    ctx->pc = 0x2A01C8u;
label_2a01c8:
    // 0x2a01c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a01cc:
    // 0x2a01cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a01ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a01d0:
    // 0x2a01d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a01d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a01d4:
    // 0x2a01d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a01d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a01d8:
    // 0x2a01d8: 0xc0bf800  jal         func_2FE000
label_2a01dc:
    if (ctx->pc == 0x2A01DCu) {
        ctx->pc = 0x2A01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01D8u;
        // 0x2a01dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A01E0u;
        goto label_2a01e0;
    }
    ctx->pc = 0x2A01D8u;
    SET_GPR_U32(ctx, 31, 0x2A01E0u);
    ctx->pc = 0x2A01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01D8u;
    // 0x2a01dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A01D8u, 0x2A01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01E0u;
label_2a01e0:
    // 0x2a01e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a01e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a01e4:
    // 0x2a01e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a01e8:
    // 0x2a01e8: 0x26100f50  addiu       $s0, $s0, 0xF50
    ctx->pc = 0x2a01e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3920));
label_2a01ec:
    // 0x2a01ec: 0xc0cd4e4  jal         func_335390
label_2a01f0:
    if (ctx->pc == 0x2A01F0u) {
        ctx->pc = 0x2A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01ECu;
        // 0x2a01f0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A01F4u;
        goto label_2a01f4;
    }
    ctx->pc = 0x2A01ECu;
    SET_GPR_U32(ctx, 31, 0x2A01F4u);
    ctx->pc = 0x2A01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01ECu;
    // 0x2a01f0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A01ECu, 0x2A01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01F4u;
label_2a01f4:
    // 0x2a01f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a01f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2a01f8:
    // 0x2a01f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a01fc:
    // 0x2a01fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a0200:
    // 0x2a0200: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0204:
    // 0x2a0204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a0208:
    // 0x2a0208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a020c:
    // 0x2a020c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a020cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0210:
    // 0x2a0210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0214:
    // 0x2a0214: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0218:
    // 0x2a0218: 0xc08e4dc  jal         func_239370
label_2a021c:
    if (ctx->pc == 0x2A021Cu) {
        ctx->pc = 0x2A021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0218u;
        // 0x2a021c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0220u;
        goto label_2a0220;
    }
    ctx->pc = 0x2A0218u;
    SET_GPR_U32(ctx, 31, 0x2A0220u);
    ctx->pc = 0x2A021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0218u;
    // 0x2a021c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239370u, 0x2A0218u, 0x2A0220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0220u;
label_2a0220:
    // 0x2a0220: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a0220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0224:
    // 0x2a0224: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a0224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a0228:
    // 0x2a0228: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x2a0228u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a022c:
    // 0x2a022c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a022cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a0230:
    // 0x2a0230: 0x8464942c  lh          $a0, -0x6BD4($v1)
    ctx->pc = 0x2a0230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939692)));
label_2a0234:
    // 0x2a0234: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a0234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a0238:
    // 0x2a0238: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_2a023c:
    if (ctx->pc == 0x2A023Cu) {
        ctx->pc = 0x2A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0238u;
        // 0x2a023c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0240u;
        goto label_2a0240;
    }
    ctx->pc = 0x2A0238u;
    {
        const bool branch_taken_0x2a0238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0238u;
        // 0x2a023c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0238) {
            ctx->pc = 0x2A0A2Cu;
            goto label_2a0a2c;
        }
    }
    ctx->pc = 0x2A0240u;
label_2a0240:
    // 0x2a0240: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0244:
    // 0x2a0244: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2a0244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a0248:
    // 0x2a0248: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a0248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a024c:
    // 0x2a024c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a024cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a0250:
    // 0x2a0250: 0x106001f8  beqz        $v1, . + 4 + (0x1F8 << 2)
label_2a0254:
    if (ctx->pc == 0x2A0254u) {
        ctx->pc = 0x2A0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0250u;
        // 0x2a0254: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0258u;
        goto label_2a0258;
    }
    ctx->pc = 0x2A0250u;
    {
        const bool branch_taken_0x2a0250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0250u;
        // 0x2a0254: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0250) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A0258u;
label_2a0258:
    // 0x2a0258: 0xc0a367c  jal         func_28D9F0
label_2a025c:
    if (ctx->pc == 0x2A025Cu) {
        ctx->pc = 0x2A025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0258u;
        // 0x2a025c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0260u;
        goto label_2a0260;
    }
    ctx->pc = 0x2A0258u;
    SET_GPR_U32(ctx, 31, 0x2A0260u);
    ctx->pc = 0x2A025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0258u;
    // 0x2a025c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A0258u, 0x2A0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0260u;
label_2a0260:
    // 0x2a0260: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a0264:
    if (ctx->pc == 0x2A0264u) {
        ctx->pc = 0x2A0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0260u;
        // 0x2a0264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0268u;
        goto label_2a0268;
    }
    ctx->pc = 0x2A0260u;
    {
        const bool branch_taken_0x2a0260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0260u;
        // 0x2a0264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0260) {
            ctx->pc = 0x2A0280u;
            goto label_2a0280;
        }
    }
    ctx->pc = 0x2A0268u;
label_2a0268:
    // 0x2a0268: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a0268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a026c:
    // 0x2a026c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a0270:
    // 0x2a0270: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0274:
    // 0x2a0274: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a0274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a0278:
    // 0x2a0278: 0xc0bf800  jal         func_2FE000
label_2a027c:
    if (ctx->pc == 0x2A027Cu) {
        ctx->pc = 0x2A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0278u;
        // 0x2a027c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0280u;
        goto label_2a0280;
    }
    ctx->pc = 0x2A0278u;
    SET_GPR_U32(ctx, 31, 0x2A0280u);
    ctx->pc = 0x2A027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0278u;
    // 0x2a027c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A0278u, 0x2A0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0280u;
label_2a0280:
    // 0x2a0280: 0xc0a367c  jal         func_28D9F0
label_2a0284:
    if (ctx->pc == 0x2A0284u) {
        ctx->pc = 0x2A0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0280u;
        // 0x2a0284: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0288u;
        goto label_2a0288;
    }
    ctx->pc = 0x2A0280u;
    SET_GPR_U32(ctx, 31, 0x2A0288u);
    ctx->pc = 0x2A0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0280u;
    // 0x2a0284: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A0280u, 0x2A0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0288u;
label_2a0288:
    // 0x2a0288: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a028c:
    if (ctx->pc == 0x2A028Cu) {
        ctx->pc = 0x2A028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0288u;
        // 0x2a028c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0290u;
        goto label_2a0290;
    }
    ctx->pc = 0x2A0288u;
    {
        const bool branch_taken_0x2a0288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0288u;
        // 0x2a028c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0288) {
            ctx->pc = 0x2A02ACu;
            goto label_2a02ac;
        }
    }
    ctx->pc = 0x2A0290u;
label_2a0290:
    // 0x2a0290: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a0290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0294:
    // 0x2a0294: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a0294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a0298:
    // 0x2a0298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a029c:
    // 0x2a029c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a029cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a02a0:
    // 0x2a02a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a02a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a02a4:
    // 0x2a02a4: 0xc0be8c0  jal         func_2FA300
label_2a02a8:
    if (ctx->pc == 0x2A02A8u) {
        ctx->pc = 0x2A02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02A4u;
        // 0x2a02a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02ACu;
        goto label_2a02ac;
    }
    ctx->pc = 0x2A02A4u;
    SET_GPR_U32(ctx, 31, 0x2A02ACu);
    ctx->pc = 0x2A02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02A4u;
    // 0x2a02a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A02A4u, 0x2A02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02ACu;
label_2a02ac:
    // 0x2a02ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a02acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a02b0:
    // 0x2a02b0: 0x2451b880  addiu       $s1, $v0, -0x4780
    ctx->pc = 0x2a02b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2a02b4:
    // 0x2a02b4: 0xc0cd4e4  jal         func_335390
label_2a02b8:
    if (ctx->pc == 0x2A02B8u) {
        ctx->pc = 0x2A02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02B4u;
        // 0x2a02b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02BCu;
        goto label_2a02bc;
    }
    ctx->pc = 0x2A02B4u;
    SET_GPR_U32(ctx, 31, 0x2A02BCu);
    ctx->pc = 0x2A02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02B4u;
    // 0x2a02b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A02B4u, 0x2A02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02BCu;
label_2a02bc:
    // 0x2a02bc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2a02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a02c0:
    // 0x2a02c0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a02c4:
    // 0x2a02c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a02c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a02c8:
    // 0x2a02c8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a02cc:
    if (ctx->pc == 0x2A02CCu) {
        ctx->pc = 0x2A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02C8u;
        // 0x2a02cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02D0u;
        goto label_2a02d0;
    }
    ctx->pc = 0x2A02C8u;
    {
        const bool branch_taken_0x2a02c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a02c8) {
            ctx->pc = 0x2A02CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A02C8u;
            // 0x2a02cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A02D0u;
            goto label_2a02d0;
        }
    }
    ctx->pc = 0x2A02D0u;
label_2a02d0:
    // 0x2a02d0: 0x94829430  lhu         $v0, -0x6BD0($a0)
    ctx->pc = 0x2a02d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939696)));
label_2a02d4:
    // 0x2a02d4: 0x2810  mfhi        $a1
    ctx->pc = 0x2a02d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2a02d8:
    // 0x2a02d8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2a02d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2a02dc:
    // 0x2a02dc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2a02e0:
    if (ctx->pc == 0x2A02E0u) {
        ctx->pc = 0x2A02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02DCu;
        // 0x2a02e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02E4u;
        goto label_2a02e4;
    }
    ctx->pc = 0x2A02DCu;
    {
        const bool branch_taken_0x2a02dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02DCu;
        // 0x2a02e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02dc) {
            ctx->pc = 0x2A0354u;
            goto label_2a0354;
        }
    }
    ctx->pc = 0x2A02E4u;
label_2a02e4:
    // 0x2a02e4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2a02e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a02e8:
    // 0x2a02e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a02e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a02ec:
    // 0x2a02ec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a02ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2a02f0:
    // 0x2a02f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a02f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a02f4:
    // 0x2a02f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a02f8:
    // 0x2a02f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2a02f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2a02fc:
    // 0x2a02fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a02fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a0300:
    // 0x2a0300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0304:
    // 0x2a0304: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a0308:
    // 0x2a0308: 0xc0c5a62  jal         func_316988
label_2a030c:
    if (ctx->pc == 0x2A030Cu) {
        ctx->pc = 0x2A030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0308u;
        // 0x2a030c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0310u;
        goto label_2a0310;
    }
    ctx->pc = 0x2A0308u;
    SET_GPR_U32(ctx, 31, 0x2A0310u);
    ctx->pc = 0x2A030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0308u;
    // 0x2a030c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316988u, 0x2A0308u, 0x2A0310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0310u;
label_2a0310:
    // 0x2a0310: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a0314:
    // 0x2a0314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0318:
    // 0x2a0318: 0xc0cd4e4  jal         func_335390
label_2a031c:
    if (ctx->pc == 0x2A031Cu) {
        ctx->pc = 0x2A031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0318u;
        // 0x2a031c: 0x26100f40  addiu       $s0, $s0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0320u;
        goto label_2a0320;
    }
    ctx->pc = 0x2A0318u;
    SET_GPR_U32(ctx, 31, 0x2A0320u);
    ctx->pc = 0x2A031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0318u;
    // 0x2a031c: 0x26100f40  addiu       $s0, $s0, 0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A0318u, 0x2A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0320u;
label_2a0320:
    // 0x2a0320: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a0320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2a0324:
    // 0x2a0324: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a0324u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a0328:
    // 0x2a0328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a032c:
    // 0x2a032c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0330:
    // 0x2a0330: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a0334:
    // 0x2a0334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0338:
    // 0x2a0338: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a0338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a033c:
    // 0x2a033c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a033cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0340:
    // 0x2a0340: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0344:
    // 0x2a0344: 0xc08e4dc  jal         func_239370
label_2a0348:
    if (ctx->pc == 0x2A0348u) {
        ctx->pc = 0x2A0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0344u;
        // 0x2a0348: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A034Cu;
        goto label_2a034c;
    }
    ctx->pc = 0x2A0344u;
    SET_GPR_U32(ctx, 31, 0x2A034Cu);
    ctx->pc = 0x2A0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0344u;
    // 0x2a0348: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239370u, 0x2A0344u, 0x2A034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A034Cu;
label_2a034c:
    // 0x2a034c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a0350:
    if (ctx->pc == 0x2A0350u) {
        ctx->pc = 0x2A0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A034Cu;
        // 0x2a0350: 0x8e85b734  lw          $a1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0354u;
        goto label_2a0354;
    }
    ctx->pc = 0x2A034Cu;
    {
        const bool branch_taken_0x2a034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A034Cu;
        // 0x2a0350: 0x8e85b734  lw          $a1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a034c) {
            ctx->pc = 0x2A0390u;
            goto label_2a0390;
        }
    }
    ctx->pc = 0x2A0354u;
label_2a0354:
    // 0x2a0354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0358:
    // 0x2a0358: 0xc0cd4e4  jal         func_335390
label_2a035c:
    if (ctx->pc == 0x2A035Cu) {
        ctx->pc = 0x2A035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0358u;
        // 0x2a035c: 0x26100f50  addiu       $s0, $s0, 0xF50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0360u;
        goto label_2a0360;
    }
    ctx->pc = 0x2A0358u;
    SET_GPR_U32(ctx, 31, 0x2A0360u);
    ctx->pc = 0x2A035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0358u;
    // 0x2a035c: 0x26100f50  addiu       $s0, $s0, 0xF50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A0358u, 0x2A0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0360u;
label_2a0360:
    // 0x2a0360: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a0360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2a0364:
    // 0x2a0364: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a0364u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a0368:
    // 0x2a0368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a036c:
    // 0x2a036c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0370:
    // 0x2a0370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a0374:
    // 0x2a0374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0378:
    // 0x2a0378: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a0378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a037c:
    // 0x2a037c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a037cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0380:
    // 0x2a0380: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0384:
    // 0x2a0384: 0xc08e4dc  jal         func_239370
label_2a0388:
    if (ctx->pc == 0x2A0388u) {
        ctx->pc = 0x2A0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0384u;
        // 0x2a0388: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A038Cu;
        goto label_2a038c;
    }
    ctx->pc = 0x2A0384u;
    SET_GPR_U32(ctx, 31, 0x2A038Cu);
    ctx->pc = 0x2A0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0384u;
    // 0x2a0388: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239370u, 0x2A0384u, 0x2A038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A038Cu;
label_2a038c:
    // 0x2a038c: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0390:
    // 0x2a0390: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a0394:
    // 0x2a0394: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x2a0394u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0398:
    // 0x2a0398: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a0398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a039c:
    // 0x2a039c: 0x8464942c  lh          $a0, -0x6BD4($v1)
    ctx->pc = 0x2a039cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939692)));
label_2a03a0:
    // 0x2a03a0: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a03a4:
    // 0x2a03a4: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_2a03a8:
    if (ctx->pc == 0x2A03A8u) {
        ctx->pc = 0x2A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03A4u;
        // 0x2a03a8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03ACu;
        goto label_2a03ac;
    }
    ctx->pc = 0x2A03A4u;
    {
        const bool branch_taken_0x2a03a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03A4u;
        // 0x2a03a8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03a4) {
            ctx->pc = 0x2A0A2Cu;
            goto label_2a0a2c;
        }
    }
    ctx->pc = 0x2A03ACu;
label_2a03ac:
    // 0x2a03ac: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2a03acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a03b0:
    // 0x2a03b0: 0x80e2002e  lb          $v0, 0x2E($a3)
    ctx->pc = 0x2a03b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 46)));
label_2a03b4:
    // 0x2a03b4: 0x1c40019f  bgtz        $v0, . + 4 + (0x19F << 2)
label_2a03b8:
    if (ctx->pc == 0x2A03B8u) {
        ctx->pc = 0x2A03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03B4u;
        // 0x2a03b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03BCu;
        goto label_2a03bc;
    }
    ctx->pc = 0x2A03B4u;
    {
        const bool branch_taken_0x2a03b4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03B4u;
        // 0x2a03b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03b4) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A03BCu;
label_2a03bc:
    // 0x2a03bc: 0x8e83b734  lw          $v1, -0x48CC($s4)
    ctx->pc = 0x2a03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a03c0:
    // 0x2a03c0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a03c4:
    // 0x2a03c4: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x2a03c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a03c8:
    // 0x2a03c8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2a03c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2a03cc:
    // 0x2a03cc: 0x10400199  beqz        $v0, . + 4 + (0x199 << 2)
label_2a03d0:
    if (ctx->pc == 0x2A03D0u) {
        ctx->pc = 0x2A03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03CCu;
        // 0x2a03d0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03D4u;
        goto label_2a03d4;
    }
    ctx->pc = 0x2A03CCu;
    {
        const bool branch_taken_0x2a03cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03CCu;
        // 0x2a03d0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03cc) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A03D4u;
label_2a03d4:
    // 0x2a03d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a03d8:
    // 0x2a03d8: 0x8462942c  lh          $v0, -0x6BD4($v1)
    ctx->pc = 0x2a03d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939692)));
label_2a03dc:
    // 0x2a03dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a03e0:
    // 0x2a03e0: 0x94839424  lhu         $v1, -0x6BDC($a0)
    ctx->pc = 0x2a03e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939684)));
label_2a03e4:
    // 0x2a03e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2a03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2a03e8:
    // 0x2a03e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a03e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a03ec:
    // 0x2a03ec: 0xa6650010  sh          $a1, 0x10($s3)
    ctx->pc = 0x2a03ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 5));
label_2a03f0:
    // 0x2a03f0: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2a03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2a03f4:
    // 0x2a03f4: 0xa6630020  sh          $v1, 0x20($s3)
    ctx->pc = 0x2a03f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
label_2a03f8:
    // 0x2a03f8: 0xc0a367c  jal         func_28D9F0
label_2a03fc:
    if (ctx->pc == 0x2A03FCu) {
        ctx->pc = 0x2A03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03F8u;
        // 0x2a03fc: 0xa663001e  sh          $v1, 0x1E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0400u;
        goto label_2a0400;
    }
    ctx->pc = 0x2A03F8u;
    SET_GPR_U32(ctx, 31, 0x2A0400u);
    ctx->pc = 0x2A03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A03F8u;
    // 0x2a03fc: 0xa663001e  sh          $v1, 0x1E($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A03F8u, 0x2A0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0400u;
label_2a0400:
    // 0x2a0400: 0x1040018b  beqz        $v0, . + 4 + (0x18B << 2)
label_2a0404:
    if (ctx->pc == 0x2A0404u) {
        ctx->pc = 0x2A0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0400u;
        // 0x2a0404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0408u;
        goto label_2a0408;
    }
    ctx->pc = 0x2A0400u;
    {
        const bool branch_taken_0x2a0400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0400u;
        // 0x2a0404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0400) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0408u;
label_2a0408:
    // 0x2a0408: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a0408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a040c:
    // 0x2a040c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a040cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0410:
    // 0x2a0410: 0x1000011f  b           . + 4 + (0x11F << 2)
label_2a0414:
    if (ctx->pc == 0x2A0414u) {
        ctx->pc = 0x2A0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0410u;
        // 0x2a0414: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0418u;
        goto label_2a0418;
    }
    ctx->pc = 0x2A0410u;
    {
        const bool branch_taken_0x2a0410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0410u;
        // 0x2a0414: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0410) {
            ctx->pc = 0x2A0890u;
            goto label_2a0890;
        }
    }
    ctx->pc = 0x2A0418u;
label_2a0418:
    // 0x2a0418: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a0418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a041c:
    // 0x2a041c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a0420:
    // 0x2a0420: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2a0420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a0424:
    // 0x2a0424: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2a0424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0428:
    // 0x2a0428: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
label_2a042c:
    if (ctx->pc == 0x2A042Cu) {
        ctx->pc = 0x2A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0428u;
        // 0x2a042c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0430u;
        goto label_2a0430;
    }
    ctx->pc = 0x2A0428u;
    {
        const bool branch_taken_0x2a0428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0428u;
        // 0x2a042c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0428) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0430u;
label_2a0430:
    // 0x2a0430: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a0430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0434:
    // 0x2a0434: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x2a0434u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a0438:
    // 0x2a0438: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a043c:
    // 0x2a043c: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x2a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
label_2a0440:
    // 0x2a0440: 0xc0a367c  jal         func_28D9F0
label_2a0444:
    if (ctx->pc == 0x2A0444u) {
        ctx->pc = 0x2A0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0440u;
        // 0x2a0444: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0448u;
        goto label_2a0448;
    }
    ctx->pc = 0x2A0440u;
    SET_GPR_U32(ctx, 31, 0x2A0448u);
    ctx->pc = 0x2A0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0440u;
    // 0x2a0444: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A0440u, 0x2A0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0448u;
label_2a0448:
    // 0x2a0448: 0x10400179  beqz        $v0, . + 4 + (0x179 << 2)
label_2a044c:
    if (ctx->pc == 0x2A044Cu) {
        ctx->pc = 0x2A044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0448u;
        // 0x2a044c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0450u;
        goto label_2a0450;
    }
    ctx->pc = 0x2A0448u;
    {
        const bool branch_taken_0x2a0448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0448u;
        // 0x2a044c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0448) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0450u;
label_2a0450:
    // 0x2a0450: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a0450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0454:
    // 0x2a0454: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a0458:
    // 0x2a0458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a045c:
    // 0x2a045c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a0460:
    // 0x2a0460: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a0460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a0464:
    // 0x2a0464: 0xc0be8c0  jal         func_2FA300
label_2a0468:
    if (ctx->pc == 0x2A0468u) {
        ctx->pc = 0x2A0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0464u;
        // 0x2a0468: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A046Cu;
        goto label_2a046c;
    }
    ctx->pc = 0x2A0464u;
    SET_GPR_U32(ctx, 31, 0x2A046Cu);
    ctx->pc = 0x2A0468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0464u;
    // 0x2a0468: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A0464u, 0x2A046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A046Cu;
label_2a046c:
    // 0x2a046c: 0x10000171  b           . + 4 + (0x171 << 2)
label_2a0470:
    if (ctx->pc == 0x2A0470u) {
        ctx->pc = 0x2A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A046Cu;
        // 0x2a0470: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0474u;
        goto label_2a0474;
    }
    ctx->pc = 0x2A046Cu;
    {
        const bool branch_taken_0x2a046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A046Cu;
        // 0x2a0470: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a046c) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A0474u;
label_2a0474:
    // 0x2a0474: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2a0474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0478:
    // 0x2a0478: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2a0478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a047c:
    // 0x2a047c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a0480:
    // 0x2a0480: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a0480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a0484:
    // 0x2a0484: 0x1060016a  beqz        $v1, . + 4 + (0x16A << 2)
label_2a0488:
    if (ctx->pc == 0x2A0488u) {
        ctx->pc = 0x2A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0484u;
        // 0x2a0488: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A048Cu;
        goto label_2a048c;
    }
    ctx->pc = 0x2A0484u;
    {
        const bool branch_taken_0x2a0484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0484u;
        // 0x2a0488: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0484) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A048Cu;
label_2a048c:
    // 0x2a048c: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x2a048cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a0490:
    // 0x2a0490: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a0494:
    // 0x2a0494: 0x248429c0  addiu       $a0, $a0, 0x29C0
    ctx->pc = 0x2a0494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
label_2a0498:
    // 0x2a0498: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a049c:
    // 0x2a049c: 0xc0e6fec  jal         func_39BFB0
label_2a04a0:
    if (ctx->pc == 0x2A04A0u) {
        ctx->pc = 0x2A04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A049Cu;
        // 0x2a04a0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04A4u;
        goto label_2a04a4;
    }
    ctx->pc = 0x2A049Cu;
    SET_GPR_U32(ctx, 31, 0x2A04A4u);
    ctx->pc = 0x2A04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A049Cu;
    // 0x2a04a0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFB0u, 0x2A049Cu, 0x2A04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04A4u;
label_2a04a4:
    // 0x2a04a4: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a04a8:
    // 0x2a04a8: 0x50a000ad  beql        $a1, $zero, . + 4 + (0xAD << 2)
label_2a04ac:
    if (ctx->pc == 0x2A04ACu) {
        ctx->pc = 0x2A04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04A8u;
        // 0x2a04ac: 0x96620020  lhu         $v0, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04B0u;
        goto label_2a04b0;
    }
    ctx->pc = 0x2A04A8u;
    {
        const bool branch_taken_0x2a04a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a04a8) {
            ctx->pc = 0x2A04ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A04A8u;
            // 0x2a04ac: 0x96620020  lhu         $v0, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0760u;
            goto label_2a0760;
        }
    }
    ctx->pc = 0x2A04B0u;
label_2a04b0:
    // 0x2a04b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a04b4:
    // 0x2a04b4: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x2a04b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_2a04b8:
    // 0x2a04b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2a04bc:
    // 0x2a04bc: 0x40f809  jalr        $v0
label_2a04c0:
    if (ctx->pc == 0x2A04C0u) {
        ctx->pc = 0x2A04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04BCu;
        // 0x2a04c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04C4u;
        goto label_2a04c4;
    }
    ctx->pc = 0x2A04BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A04C4u);
        ctx->pc = 0x2A04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04BCu;
        // 0x2a04c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A04BCu, 0x2A04C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A04C4u;
label_2a04c4:
    // 0x2a04c4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2a04c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2a04c8:
    // 0x2a04c8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_2a04cc:
    if (ctx->pc == 0x2A04CCu) {
        ctx->pc = 0x2A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04C8u;
        // 0x2a04cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04D0u;
        goto label_2a04d0;
    }
    ctx->pc = 0x2A04C8u;
    {
        const bool branch_taken_0x2a04c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04C8u;
        // 0x2a04cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04c8) {
            ctx->pc = 0x2A0688u;
            goto label_2a0688;
        }
    }
    ctx->pc = 0x2A04D0u;
label_2a04d0:
    // 0x2a04d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a04d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a04d4:
    // 0x2a04d4: 0x2457b880  addiu       $s7, $v0, -0x4780
    ctx->pc = 0x2a04d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2a04d8:
    // 0x2a04d8: 0x26100f80  addiu       $s0, $s0, 0xF80
    ctx->pc = 0x2a04d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3968));
label_2a04dc:
    // 0x2a04dc: 0xc0cd4e4  jal         func_335390
label_2a04e0:
    if (ctx->pc == 0x2A04E0u) {
        ctx->pc = 0x2A04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04DCu;
        // 0x2a04e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04E4u;
        goto label_2a04e4;
    }
    ctx->pc = 0x2A04DCu;
    SET_GPR_U32(ctx, 31, 0x2A04E4u);
    ctx->pc = 0x2A04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04DCu;
    // 0x2a04e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A04DCu, 0x2A04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04E4u;
label_2a04e4:
    // 0x2a04e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a04e8:
    // 0x2a04e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a04ec:
    // 0x2a04ec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2a04ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a04f0:
    // 0x2a04f0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2a04f4:
    if (ctx->pc == 0x2A04F4u) {
        ctx->pc = 0x2A04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04F0u;
        // 0x2a04f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A04F8u;
        goto label_2a04f8;
    }
    ctx->pc = 0x2A04F0u;
    {
        const bool branch_taken_0x2a04f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a04f0) {
            ctx->pc = 0x2A04F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A04F0u;
            // 0x2a04f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A04F8u;
            goto label_2a04f8;
        }
    }
    ctx->pc = 0x2A04F8u;
label_2a04f8:
    // 0x2a04f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2a04f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a04fc:
    // 0x2a04fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a0500:
    // 0x2a0500: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a0500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2a0504:
    // 0x2a0504: 0xc044da0  jal         func_113680
label_2a0508:
    if (ctx->pc == 0x2A0508u) {
        ctx->pc = 0x2A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0504u;
        // 0x2a0508: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A050Cu;
        goto label_2a050c;
    }
    ctx->pc = 0x2A0504u;
    SET_GPR_U32(ctx, 31, 0x2A050Cu);
    ctx->pc = 0x2A0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0504u;
    // 0x2a0508: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113680u, 0x2A0504u, 0x2A050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A050Cu;
label_2a050c:
    // 0x2a050c: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a0510:
    // 0x2a0510: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0514:
    // 0x2a0514: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0518:
    // 0x2a0518: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a051c:
    // 0x2a051c: 0x40f809  jalr        $v0
label_2a0520:
    if (ctx->pc == 0x2A0520u) {
        ctx->pc = 0x2A0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A051Cu;
        // 0x2a0520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0524u;
        goto label_2a0524;
    }
    ctx->pc = 0x2A051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0524u);
        ctx->pc = 0x2A0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A051Cu;
        // 0x2a0520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A051Cu, 0x2A0524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0524u;
label_2a0524:
    // 0x2a0524: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0528:
    // 0x2a0528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a052c:
    // 0x2a052c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a0530:
    // 0x2a0530: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a0530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0534:
    // 0x2a0534: 0xc08d632  jal         func_2358C8
label_2a0538:
    if (ctx->pc == 0x2A0538u) {
        ctx->pc = 0x2A0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0534u;
        // 0x2a0538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A053Cu;
        goto label_2a053c;
    }
    ctx->pc = 0x2A0534u;
    SET_GPR_U32(ctx, 31, 0x2A053Cu);
    ctx->pc = 0x2A0538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0534u;
    // 0x2a0538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2358C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2358C8u, 0x2A0534u, 0x2A053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A053Cu;
label_2a053c:
    // 0x2a053c: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a0540:
    // 0x2a0540: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2a0540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2a0544:
    // 0x2a0544: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a0548:
    // 0x2a0548: 0x261029d0  addiu       $s0, $s0, 0x29D0
    ctx->pc = 0x2a0548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10704));
label_2a054c:
    // 0x2a054c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0550:
    // 0x2a0550: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0554:
    // 0x2a0554: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0558:
    // 0x2a0558: 0x40f809  jalr        $v0
label_2a055c:
    if (ctx->pc == 0x2A055Cu) {
        ctx->pc = 0x2A055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0558u;
        // 0x2a055c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0560u;
        goto label_2a0560;
    }
    ctx->pc = 0x2A0558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0560u);
        ctx->pc = 0x2A055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0558u;
        // 0x2a055c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0558u, 0x2A0560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0560u;
label_2a0560:
    // 0x2a0560: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a0560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a0564:
    // 0x2a0564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0568:
    // 0x2a0568: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a0568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a056c:
    // 0x2a056c: 0xc0e6fec  jal         func_39BFB0
label_2a0570:
    if (ctx->pc == 0x2A0570u) {
        ctx->pc = 0x2A0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A056Cu;
        // 0x2a0570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0574u;
        goto label_2a0574;
    }
    ctx->pc = 0x2A056Cu;
    SET_GPR_U32(ctx, 31, 0x2A0574u);
    ctx->pc = 0x2A0570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A056Cu;
    // 0x2a0570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFB0u, 0x2A056Cu, 0x2A0574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0574u;
label_2a0574:
    // 0x2a0574: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a0574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a0578:
    // 0x2a0578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a057c:
    // 0x2a057c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a057cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0580:
    // 0x2a0580: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0584:
    // 0x2a0584: 0x40f809  jalr        $v0
label_2a0588:
    if (ctx->pc == 0x2A0588u) {
        ctx->pc = 0x2A0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0584u;
        // 0x2a0588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A058Cu;
        goto label_2a058c;
    }
    ctx->pc = 0x2A0584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A058Cu);
        ctx->pc = 0x2A0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0584u;
        // 0x2a0588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0584u, 0x2A058Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A058Cu;
label_2a058c:
    // 0x2a058c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a0590:
    // 0x2a0590: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a0594:
    // 0x2a0594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0598:
    // 0x2a0598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a059c:
    // 0x2a059c: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2a059cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2a05a0:
    // 0x2a05a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a05a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a05a4:
    // 0x2a05a4: 0xc0e16c2  jal         func_385B08
label_2a05a8:
    if (ctx->pc == 0x2A05A8u) {
        ctx->pc = 0x2A05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05A4u;
        // 0x2a05a8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05ACu;
        goto label_2a05ac;
    }
    ctx->pc = 0x2A05A4u;
    SET_GPR_U32(ctx, 31, 0x2A05ACu);
    ctx->pc = 0x2A05A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A05A4u;
    // 0x2a05a8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385B08u, 0x2A05A4u, 0x2A05ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05ACu;
label_2a05ac:
    // 0x2a05ac: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a05acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a05b0:
    // 0x2a05b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a05b4:
    // 0x2a05b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a05b8:
    // 0x2a05b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a05bc:
    // 0x2a05bc: 0x40f809  jalr        $v0
label_2a05c0:
    if (ctx->pc == 0x2A05C0u) {
        ctx->pc = 0x2A05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05BCu;
        // 0x2a05c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05C4u;
        goto label_2a05c4;
    }
    ctx->pc = 0x2A05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A05C4u);
        ctx->pc = 0x2A05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05BCu;
        // 0x2a05c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A05BCu, 0x2A05C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A05C4u;
label_2a05c4:
    // 0x2a05c4: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x2a05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_2a05c8:
    // 0x2a05c8: 0xc0e409a  jal         func_390268
label_2a05cc:
    if (ctx->pc == 0x2A05CCu) {
        ctx->pc = 0x2A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05C8u;
        // 0x2a05cc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05D0u;
        goto label_2a05d0;
    }
    ctx->pc = 0x2A05C8u;
    SET_GPR_U32(ctx, 31, 0x2A05D0u);
    ctx->pc = 0x2A05CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A05C8u;
    // 0x2a05cc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A05C8u, 0x2A05D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05D0u;
label_2a05d0:
    // 0x2a05d0: 0xc087502  jal         func_21D408
label_2a05d4:
    if (ctx->pc == 0x2A05D4u) {
        ctx->pc = 0x2A05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05D0u;
        // 0x2a05d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05D8u;
        goto label_2a05d8;
    }
    ctx->pc = 0x2A05D0u;
    SET_GPR_U32(ctx, 31, 0x2A05D8u);
    ctx->pc = 0x2A05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A05D0u;
    // 0x2a05d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A05D0u, 0x2A05D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05D8u;
label_2a05d8:
    // 0x2a05d8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2a05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2a05dc:
    // 0x2a05dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a05e0:
    // 0x2a05e0: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
label_2a05e4:
    if (ctx->pc == 0x2A05E4u) {
        ctx->pc = 0x2A05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05E0u;
        // 0x2a05e4: 0x96620020  lhu         $v0, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05E8u;
        goto label_2a05e8;
    }
    ctx->pc = 0x2A05E0u;
    {
        const bool branch_taken_0x2a05e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a05e0) {
            ctx->pc = 0x2A05E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A05E0u;
            // 0x2a05e4: 0x96620020  lhu         $v0, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0760u;
            goto label_2a0760;
        }
    }
    ctx->pc = 0x2A05E8u;
label_2a05e8:
    // 0x2a05e8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a05e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a05ec:
    // 0x2a05ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a05ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a05f0:
    // 0x2a05f0: 0xc0cd4e4  jal         func_335390
label_2a05f4:
    if (ctx->pc == 0x2A05F4u) {
        ctx->pc = 0x2A05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05F0u;
        // 0x2a05f4: 0x26100f70  addiu       $s0, $s0, 0xF70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05F8u;
        goto label_2a05f8;
    }
    ctx->pc = 0x2A05F0u;
    SET_GPR_U32(ctx, 31, 0x2A05F8u);
    ctx->pc = 0x2A05F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A05F0u;
    // 0x2a05f4: 0x26100f70  addiu       $s0, $s0, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A05F0u, 0x2A05F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05F8u;
label_2a05f8:
    // 0x2a05f8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a05f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2a05fc:
    // 0x2a05fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a05fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2a0600:
    // 0x2a0600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a0604:
    // 0x2a0604: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0608:
    // 0x2a0608: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a060c:
    // 0x2a060c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a060cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0610:
    // 0x2a0610: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a0610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0614:
    // 0x2a0614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0618:
    // 0x2a0618: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a061c:
    // 0x2a061c: 0xc08e4dc  jal         func_239370
label_2a0620:
    if (ctx->pc == 0x2A0620u) {
        ctx->pc = 0x2A0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A061Cu;
        // 0x2a0620: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0624u;
        goto label_2a0624;
    }
    ctx->pc = 0x2A061Cu;
    SET_GPR_U32(ctx, 31, 0x2A0624u);
    ctx->pc = 0x2A0620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A061Cu;
    // 0x2a0620: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239370u, 0x2A061Cu, 0x2A0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0624u;
label_2a0624:
    // 0x2a0624: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a0624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a0628:
    // 0x2a0628: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a062c:
    // 0x2a062c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a062cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0630:
    // 0x2a0630: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0634:
    // 0x2a0634: 0x40f809  jalr        $v0
label_2a0638:
    if (ctx->pc == 0x2A0638u) {
        ctx->pc = 0x2A0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0634u;
        // 0x2a0638: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A063Cu;
        goto label_2a063c;
    }
    ctx->pc = 0x2A0634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A063Cu);
        ctx->pc = 0x2A0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0634u;
        // 0x2a0638: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0634u, 0x2A063Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A063Cu;
label_2a063c:
    // 0x2a063c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2a063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2a0640:
    // 0x2a0640: 0xc0e409a  jal         func_390268
label_2a0644:
    if (ctx->pc == 0x2A0644u) {
        ctx->pc = 0x2A0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0640u;
        // 0x2a0644: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0648u;
        goto label_2a0648;
    }
    ctx->pc = 0x2A0640u;
    SET_GPR_U32(ctx, 31, 0x2A0648u);
    ctx->pc = 0x2A0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0640u;
    // 0x2a0644: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A0640u, 0x2A0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0648u;
label_2a0648:
    // 0x2a0648: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a0648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a064c:
    // 0x2a064c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a064cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0650:
    // 0x2a0650: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2a0650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2a0654:
    // 0x2a0654: 0xc0e409a  jal         func_390268
label_2a0658:
    if (ctx->pc == 0x2A0658u) {
        ctx->pc = 0x2A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0654u;
        // 0x2a0658: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A065Cu;
        goto label_2a065c;
    }
    ctx->pc = 0x2A0654u;
    SET_GPR_U32(ctx, 31, 0x2A065Cu);
    ctx->pc = 0x2A0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0654u;
    // 0x2a0658: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A0654u, 0x2A065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A065Cu;
label_2a065c:
    // 0x2a065c: 0x56020040  bnel        $s0, $v0, . + 4 + (0x40 << 2)
label_2a0660:
    if (ctx->pc == 0x2A0660u) {
        ctx->pc = 0x2A0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A065Cu;
        // 0x2a0660: 0x96620020  lhu         $v0, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0664u;
        goto label_2a0664;
    }
    ctx->pc = 0x2A065Cu;
    {
        const bool branch_taken_0x2a065c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a065c) {
            ctx->pc = 0x2A0660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A065Cu;
            // 0x2a0660: 0x96620020  lhu         $v0, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0760u;
            goto label_2a0760;
        }
    }
    ctx->pc = 0x2A0664u;
label_2a0664:
    // 0x2a0664: 0x8e84b734  lw          $a0, -0x48CC($s4)
    ctx->pc = 0x2a0664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0668:
    // 0x2a0668: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a066c:
    // 0x2a066c: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x2a066cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0670:
    // 0x2a0670: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a0670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a0674:
    // 0x2a0674: 0xa660001e  sh          $zero, 0x1E($s3)
    ctx->pc = 0x2a0674u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 0));
label_2a0678:
    // 0x2a0678: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x2a0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_2a067c:
    // 0x2a067c: 0xa6600020  sh          $zero, 0x20($s3)
    ctx->pc = 0x2a067cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 0));
label_2a0680:
    // 0x2a0680: 0x10000036  b           . + 4 + (0x36 << 2)
label_2a0684:
    if (ctx->pc == 0x2A0684u) {
        ctx->pc = 0x2A0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0680u;
        // 0x2a0684: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0688u;
        goto label_2a0688;
    }
    ctx->pc = 0x2A0680u;
    {
        const bool branch_taken_0x2a0680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0680u;
        // 0x2a0684: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0680) {
            ctx->pc = 0x2A075Cu;
            goto label_2a075c;
        }
    }
    ctx->pc = 0x2A0688u;
label_2a0688:
    // 0x2a0688: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a0688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a068c:
    // 0x2a068c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a068cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a0690:
    // 0x2a0690: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a0694:
    // 0x2a0694: 0xc0cd4e4  jal         func_335390
label_2a0698:
    if (ctx->pc == 0x2A0698u) {
        ctx->pc = 0x2A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0694u;
        // 0x2a0698: 0x26100f80  addiu       $s0, $s0, 0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A069Cu;
        goto label_2a069c;
    }
    ctx->pc = 0x2A0694u;
    SET_GPR_U32(ctx, 31, 0x2A069Cu);
    ctx->pc = 0x2A0698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0694u;
    // 0x2a0698: 0x26100f80  addiu       $s0, $s0, 0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A0694u, 0x2A069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A069Cu;
label_2a069c:
    // 0x2a069c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a06a0:
    // 0x2a06a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a06a4:
    // 0x2a06a4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2a06a4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a06a8:
    // 0x2a06a8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2a06ac:
    if (ctx->pc == 0x2A06ACu) {
        ctx->pc = 0x2A06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06A8u;
        // 0x2a06ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A06B0u;
        goto label_2a06b0;
    }
    ctx->pc = 0x2A06A8u;
    {
        const bool branch_taken_0x2a06a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a06a8) {
            ctx->pc = 0x2A06ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A06A8u;
            // 0x2a06ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A06B0u;
            goto label_2a06b0;
        }
    }
    ctx->pc = 0x2A06B0u;
label_2a06b0:
    // 0x2a06b0: 0x1810  mfhi        $v1
    ctx->pc = 0x2a06b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a06b4:
    // 0x2a06b4: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2a06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_2a06b8:
    // 0x2a06b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a06bc:
    // 0x2a06bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2a06c0:
    // 0x2a06c0: 0xc044da0  jal         func_113680
label_2a06c4:
    if (ctx->pc == 0x2A06C4u) {
        ctx->pc = 0x2A06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06C0u;
        // 0x2a06c4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A06C8u;
        goto label_2a06c8;
    }
    ctx->pc = 0x2A06C0u;
    SET_GPR_U32(ctx, 31, 0x2A06C8u);
    ctx->pc = 0x2A06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06C0u;
    // 0x2a06c4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113680u, 0x2A06C0u, 0x2A06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06C8u;
label_2a06c8:
    // 0x2a06c8: 0x8e450bbc  lw          $a1, 0xBBC($s2)
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
label_2a06cc:
    // 0x2a06cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a06d0:
    // 0x2a06d0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x2a06d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_2a06d4:
    // 0x2a06d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2a06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2a06d8:
    // 0x2a06d8: 0x40f809  jalr        $v0
label_2a06dc:
    if (ctx->pc == 0x2A06DCu) {
        ctx->pc = 0x2A06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06D8u;
        // 0x2a06dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A06E0u;
        goto label_2a06e0;
    }
    ctx->pc = 0x2A06D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A06E0u);
        ctx->pc = 0x2A06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06D8u;
        // 0x2a06dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A06D8u, 0x2A06E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A06E0u;
label_2a06e0:
    // 0x2a06e0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2a06e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2a06e4:
    // 0x2a06e4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2a06e8:
    if (ctx->pc == 0x2A06E8u) {
        ctx->pc = 0x2A06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06E4u;
        // 0x2a06e8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A06ECu;
        goto label_2a06ec;
    }
    ctx->pc = 0x2A06E4u;
    {
        const bool branch_taken_0x2a06e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06E4u;
        // 0x2a06e8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06e4) {
            ctx->pc = 0x2A075Cu;
            goto label_2a075c;
        }
    }
    ctx->pc = 0x2A06ECu;
label_2a06ec:
    // 0x2a06ec: 0xc0e8b48  jal         func_3A2D20
label_2a06f0:
    if (ctx->pc == 0x2A06F0u) {
        ctx->pc = 0x2A06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06ECu;
        // 0x2a06f0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A06F4u;
        goto label_2a06f4;
    }
    ctx->pc = 0x2A06ECu;
    SET_GPR_U32(ctx, 31, 0x2A06F4u);
    ctx->pc = 0x2A06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06ECu;
    // 0x2a06f0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2A06ECu, 0x2A06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06F4u;
label_2a06f4:
    // 0x2a06f4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a06f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a06f8:
    // 0x2a06f8: 0xc0e8b70  jal         func_3A2DC0
label_2a06fc:
    if (ctx->pc == 0x2A06FCu) {
        ctx->pc = 0x2A06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06F8u;
        // 0x2a06fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0700u;
        goto label_2a0700;
    }
    ctx->pc = 0x2A06F8u;
    SET_GPR_U32(ctx, 31, 0x2A0700u);
    ctx->pc = 0x2A06FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06F8u;
    // 0x2a06fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2A06F8u, 0x2A0700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0700u;
label_2a0700:
    // 0x2a0700: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a0700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a0704:
    // 0x2a0704: 0xc0e8b70  jal         func_3A2DC0
label_2a0708:
    if (ctx->pc == 0x2A0708u) {
        ctx->pc = 0x2A0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0704u;
        // 0x2a0708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A070Cu;
        goto label_2a070c;
    }
    ctx->pc = 0x2A0704u;
    SET_GPR_U32(ctx, 31, 0x2A070Cu);
    ctx->pc = 0x2A0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0704u;
    // 0x2a0708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2A0704u, 0x2A070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A070Cu;
label_2a070c:
    // 0x2a070c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a070cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a0710:
    // 0x2a0710: 0xc0e8b68  jal         func_3A2DA0
label_2a0714:
    if (ctx->pc == 0x2A0714u) {
        ctx->pc = 0x2A0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0710u;
        // 0x2a0714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0718u;
        goto label_2a0718;
    }
    ctx->pc = 0x2A0710u;
    SET_GPR_U32(ctx, 31, 0x2A0718u);
    ctx->pc = 0x2A0714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0710u;
    // 0x2a0714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2A0710u, 0x2A0718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0718u;
label_2a0718:
    // 0x2a0718: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a0718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a071c:
    // 0x2a071c: 0xc0e8b68  jal         func_3A2DA0
label_2a0720:
    if (ctx->pc == 0x2A0720u) {
        ctx->pc = 0x2A0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A071Cu;
        // 0x2a0720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0724u;
        goto label_2a0724;
    }
    ctx->pc = 0x2A071Cu;
    SET_GPR_U32(ctx, 31, 0x2A0724u);
    ctx->pc = 0x2A0720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A071Cu;
    // 0x2a0720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2A071Cu, 0x2A0724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0724u;
label_2a0724:
    // 0x2a0724: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a0724u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a0728:
    // 0x2a0728: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a0728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a072c:
    // 0x2a072c: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x2a072cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_2a0730:
    // 0x2a0730: 0xc0e8b58  jal         func_3A2D60
label_2a0734:
    if (ctx->pc == 0x2A0734u) {
        ctx->pc = 0x2A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0730u;
        // 0x2a0734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0738u;
        goto label_2a0738;
    }
    ctx->pc = 0x2A0730u;
    SET_GPR_U32(ctx, 31, 0x2A0738u);
    ctx->pc = 0x2A0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0730u;
    // 0x2a0734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2A0730u, 0x2A0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0738u;
label_2a0738:
    // 0x2a0738: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a073c:
    // 0x2a073c: 0xc0e8b58  jal         func_3A2D60
label_2a0740:
    if (ctx->pc == 0x2A0740u) {
        ctx->pc = 0x2A0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A073Cu;
        // 0x2a0740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0744u;
        goto label_2a0744;
    }
    ctx->pc = 0x2A073Cu;
    SET_GPR_U32(ctx, 31, 0x2A0744u);
    ctx->pc = 0x2A0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A073Cu;
    // 0x2a0740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2A073Cu, 0x2A0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0744u;
label_2a0744:
    // 0x2a0744: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x2a0744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2a0748:
    // 0x2a0748: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a074c:
    // 0x2a074c: 0xc0e8b80  jal         func_3A2E00
label_2a0750:
    if (ctx->pc == 0x2A0750u) {
        ctx->pc = 0x2A0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A074Cu;
        // 0x2a0750: 0x8e450bbc  lw          $a1, 0xBBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0754u;
        goto label_2a0754;
    }
    ctx->pc = 0x2A074Cu;
    SET_GPR_U32(ctx, 31, 0x2A0754u);
    ctx->pc = 0x2A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A074Cu;
    // 0x2a0750: 0x8e450bbc  lw          $a1, 0xBBC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2A074Cu, 0x2A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0754u;
label_2a0754:
    // 0x2a0754: 0xc0e8b50  jal         func_3A2D40
label_2a0758:
    if (ctx->pc == 0x2A0758u) {
        ctx->pc = 0x2A0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0754u;
        // 0x2a0758: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A075Cu;
        goto label_2a075c;
    }
    ctx->pc = 0x2A0754u;
    SET_GPR_U32(ctx, 31, 0x2A075Cu);
    ctx->pc = 0x2A0758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0754u;
    // 0x2a0758: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2A0754u, 0x2A075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A075Cu;
label_2a075c:
    // 0x2a075c: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x2a075cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_2a0760:
    // 0x2a0760: 0x9663001e  lhu         $v1, 0x1E($s3)
    ctx->pc = 0x2a0760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_2a0764:
    // 0x2a0764: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a0768:
    // 0x2a0768: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a0768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a076c:
    // 0x2a076c: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x2a076cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_2a0770:
    // 0x2a0770: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x2a0770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2a0774:
    // 0x2a0774: 0x1c800008  bgtz        $a0, . + 4 + (0x8 << 2)
label_2a0778:
    if (ctx->pc == 0x2A0778u) {
        ctx->pc = 0x2A0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0774u;
        // 0x2a0778: 0xa663001e  sh          $v1, 0x1E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A077Cu;
        goto label_2a077c;
    }
    ctx->pc = 0x2A0774u;
    {
        const bool branch_taken_0x2a0774 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0774u;
        // 0x2a0778: 0xa663001e  sh          $v1, 0x1E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0774) {
            ctx->pc = 0x2A0798u;
            goto label_2a0798;
        }
    }
    ctx->pc = 0x2A077Cu;
label_2a077c:
    // 0x2a077c: 0x8e84b734  lw          $a0, -0x48CC($s4)
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0780:
    // 0x2a0780: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a0784:
    // 0x2a0784: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x2a0784u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0788:
    // 0x2a0788: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a0788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a078c:
    // 0x2a078c: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x2a078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_2a0790:
    // 0x2a0790: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2a0794:
    if (ctx->pc == 0x2A0794u) {
        ctx->pc = 0x2A0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0790u;
        // 0x2a0794: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0798u;
        goto label_2a0798;
    }
    ctx->pc = 0x2A0790u;
    {
        const bool branch_taken_0x2a0790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0790u;
        // 0x2a0794: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0790) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0798u;
label_2a0798:
    // 0x2a0798: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a0798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a079c:
    // 0x2a079c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2a079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a07a0:
    // 0x2a07a0: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x2a07a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a07a4:
    // 0x2a07a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a07a8:
    // 0x2a07a8: 0x84439426  lh          $v1, -0x6BDA($v0)
    ctx->pc = 0x2a07a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939686)));
label_2a07ac:
    // 0x2a07ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a07acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a07b0:
    // 0x2a07b0: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a07b4:
    // 0x2a07b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a07b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a07b8:
    // 0x2a07b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a07bc:
    // 0x2a07bc: 0xc0c1d52  jal         func_307548
label_2a07c0:
    if (ctx->pc == 0x2A07C0u) {
        ctx->pc = 0x2A07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07BCu;
        // 0x2a07c0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A07C4u;
        goto label_2a07c4;
    }
    ctx->pc = 0x2A07BCu;
    SET_GPR_U32(ctx, 31, 0x2A07C4u);
    ctx->pc = 0x2A07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07BCu;
    // 0x2a07c0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307548u, 0x2A07BCu, 0x2A07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07C4u;
label_2a07c4:
    // 0x2a07c4: 0x1000009b  b           . + 4 + (0x9B << 2)
label_2a07c8:
    if (ctx->pc == 0x2A07C8u) {
        ctx->pc = 0x2A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07C4u;
        // 0x2a07c8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A07CCu;
        goto label_2a07cc;
    }
    ctx->pc = 0x2A07C4u;
    {
        const bool branch_taken_0x2a07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07C4u;
        // 0x2a07c8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07c4) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A07CCu;
label_2a07cc:
    // 0x2a07cc: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2a07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a07d0:
    // 0x2a07d0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a07d4:
    // 0x2a07d4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a07d8:
    // 0x2a07d8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a07d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a07dc:
    // 0x2a07dc: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
label_2a07e0:
    if (ctx->pc == 0x2A07E0u) {
        ctx->pc = 0x2A07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07DCu;
        // 0x2a07e0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A07E4u;
        goto label_2a07e4;
    }
    ctx->pc = 0x2A07DCu;
    {
        const bool branch_taken_0x2a07dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07DCu;
        // 0x2a07e0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07dc) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A07E4u;
label_2a07e4:
    // 0x2a07e4: 0xc0a36c8  jal         func_28DB20
label_2a07e8:
    if (ctx->pc == 0x2A07E8u) {
        ctx->pc = 0x2A07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07E4u;
        // 0x2a07e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A07ECu;
        goto label_2a07ec;
    }
    ctx->pc = 0x2A07E4u;
    SET_GPR_U32(ctx, 31, 0x2A07ECu);
    ctx->pc = 0x2A07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07E4u;
    // 0x2a07e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A07E4u, 0x2A07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07ECu;
label_2a07ec:
    // 0x2a07ec: 0xc0a367c  jal         func_28D9F0
label_2a07f0:
    if (ctx->pc == 0x2A07F0u) {
        ctx->pc = 0x2A07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07ECu;
        // 0x2a07f0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A07F4u;
        goto label_2a07f4;
    }
    ctx->pc = 0x2A07ECu;
    SET_GPR_U32(ctx, 31, 0x2A07F4u);
    ctx->pc = 0x2A07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07ECu;
    // 0x2a07f0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A07ECu, 0x2A07F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07F4u;
label_2a07f4:
    // 0x2a07f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a07f8:
    if (ctx->pc == 0x2A07F8u) {
        ctx->pc = 0x2A07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07F4u;
        // 0x2a07f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A07FCu;
        goto label_2a07fc;
    }
    ctx->pc = 0x2A07F4u;
    {
        const bool branch_taken_0x2a07f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07F4u;
        // 0x2a07f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07f4) {
            ctx->pc = 0x2A0818u;
            goto label_2a0818;
        }
    }
    ctx->pc = 0x2A07FCu;
label_2a07fc:
    // 0x2a07fc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0800:
    // 0x2a0800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a0800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a0804:
    // 0x2a0804: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0808:
    // 0x2a0808: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a0808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a080c:
    // 0x2a080c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a080cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0810:
    // 0x2a0810: 0xc0be8c0  jal         func_2FA300
label_2a0814:
    if (ctx->pc == 0x2A0814u) {
        ctx->pc = 0x2A0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0810u;
        // 0x2a0814: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0818u;
        goto label_2a0818;
    }
    ctx->pc = 0x2A0810u;
    SET_GPR_U32(ctx, 31, 0x2A0818u);
    ctx->pc = 0x2A0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0810u;
    // 0x2a0814: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A0810u, 0x2A0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0818u;
label_2a0818:
    // 0x2a0818: 0x8e84b734  lw          $a0, -0x48CC($s4)
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a081c:
    // 0x2a081c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0820:
    // 0x2a0820: 0x8445942e  lh          $a1, -0x6BD2($v0)
    ctx->pc = 0x2a0820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939694)));
label_2a0824:
    // 0x2a0824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a0828:
    // 0x2a0828: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a082c:
    // 0x2a082c: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2a0830:
    if (ctx->pc == 0x2A0830u) {
        ctx->pc = 0x2A0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A082Cu;
        // 0x2a0830: 0xa6630010  sh          $v1, 0x10($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0834u;
        goto label_2a0834;
    }
    ctx->pc = 0x2A082Cu;
    {
        const bool branch_taken_0x2a082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A082Cu;
        // 0x2a0830: 0xa6630010  sh          $v1, 0x10($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a082c) {
            ctx->pc = 0x2A0A28u;
            goto label_2a0a28;
        }
    }
    ctx->pc = 0x2A0834u;
label_2a0834:
    // 0x2a0834: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a0834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0838:
    // 0x2a0838: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a0838u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a083c:
    // 0x2a083c: 0x1c60007d  bgtz        $v1, . + 4 + (0x7D << 2)
label_2a0840:
    if (ctx->pc == 0x2A0840u) {
        ctx->pc = 0x2A0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A083Cu;
        // 0x2a0840: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0844u;
        goto label_2a0844;
    }
    ctx->pc = 0x2A083Cu;
    {
        const bool branch_taken_0x2a083c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A083Cu;
        // 0x2a0840: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a083c) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A0844u;
label_2a0844:
    // 0x2a0844: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a0844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0848:
    // 0x2a0848: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a084c:
    // 0x2a084c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2a084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a0850:
    // 0x2a0850: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2a0850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0854:
    // 0x2a0854: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a0858:
    if (ctx->pc == 0x2A0858u) {
        ctx->pc = 0x2A0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0854u;
        // 0x2a0858: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A085Cu;
        goto label_2a085c;
    }
    ctx->pc = 0x2A0854u;
    {
        const bool branch_taken_0x2a0854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0854u;
        // 0x2a0858: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0854) {
            ctx->pc = 0x2A0874u;
            goto label_2a0874;
        }
    }
    ctx->pc = 0x2A085Cu;
label_2a085c:
    // 0x2a085c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a0860:
    // 0x2a0860: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x2a0860u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0864:
    // 0x2a0864: 0x84649428  lh          $a0, -0x6BD8($v1)
    ctx->pc = 0x2a0864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939688)));
label_2a0868:
    // 0x2a0868: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a086c:
    // 0x2a086c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a0870:
    // 0x2a0870: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2a0870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2a0874:
    // 0x2a0874: 0xc0a367c  jal         func_28D9F0
label_2a0878:
    if (ctx->pc == 0x2A0878u) {
        ctx->pc = 0x2A0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0874u;
        // 0x2a0878: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A087Cu;
        goto label_2a087c;
    }
    ctx->pc = 0x2A0874u;
    SET_GPR_U32(ctx, 31, 0x2A087Cu);
    ctx->pc = 0x2A0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0874u;
    // 0x2a0878: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A0874u, 0x2A087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A087Cu;
label_2a087c:
    // 0x2a087c: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_2a0880:
    if (ctx->pc == 0x2A0880u) {
        ctx->pc = 0x2A0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A087Cu;
        // 0x2a0880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0884u;
        goto label_2a0884;
    }
    ctx->pc = 0x2A087Cu;
    {
        const bool branch_taken_0x2a087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A087Cu;
        // 0x2a0880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a087c) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0884u;
label_2a0884:
    // 0x2a0884: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a0884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0888:
    // 0x2a0888: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2a0888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2a088c:
    // 0x2a088c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a088cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0890:
    // 0x2a0890: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a0890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a0894:
    // 0x2a0894: 0xc0bf800  jal         func_2FE000
label_2a0898:
    if (ctx->pc == 0x2A0898u) {
        ctx->pc = 0x2A0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0894u;
        // 0x2a0898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A089Cu;
        goto label_2a089c;
    }
    ctx->pc = 0x2A0894u;
    SET_GPR_U32(ctx, 31, 0x2A089Cu);
    ctx->pc = 0x2A0898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0894u;
    // 0x2a0898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A0894u, 0x2A089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A089Cu;
label_2a089c:
    // 0x2a089c: 0x10000065  b           . + 4 + (0x65 << 2)
label_2a08a0:
    if (ctx->pc == 0x2A08A0u) {
        ctx->pc = 0x2A08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A089Cu;
        // 0x2a08a0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A08A4u;
        goto label_2a08a4;
    }
    ctx->pc = 0x2A089Cu;
    {
        const bool branch_taken_0x2a089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A089Cu;
        // 0x2a08a0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a089c) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A08A4u;
label_2a08a4:
    // 0x2a08a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a08a8:
    // 0x2a08a8: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a08ac:
    // 0x2a08ac: 0x1c600061  bgtz        $v1, . + 4 + (0x61 << 2)
label_2a08b0:
    if (ctx->pc == 0x2A08B0u) {
        ctx->pc = 0x2A08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08ACu;
        // 0x2a08b0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A08B4u;
        goto label_2a08b4;
    }
    ctx->pc = 0x2A08ACu;
    {
        const bool branch_taken_0x2a08ac = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08ACu;
        // 0x2a08b0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08ac) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A08B4u;
label_2a08b4:
    // 0x2a08b4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2a08b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a08b8:
    // 0x2a08b8: 0xc0e409a  jal         func_390268
label_2a08bc:
    if (ctx->pc == 0x2A08BCu) {
        ctx->pc = 0x2A08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08B8u;
        // 0x2a08bc: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A08C0u;
        goto label_2a08c0;
    }
    ctx->pc = 0x2A08B8u;
    SET_GPR_U32(ctx, 31, 0x2A08C0u);
    ctx->pc = 0x2A08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08B8u;
    // 0x2a08bc: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A08B8u, 0x2A08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08C0u;
label_2a08c0:
    // 0x2a08c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a08c4:
    // 0x2a08c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a08c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a08c8:
    // 0x2a08c8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a08cc:
    // 0x2a08cc: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2a08ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a08d0:
    // 0x2a08d0: 0xc0f809  jalr        $a2
label_2a08d4:
    if (ctx->pc == 0x2A08D4u) {
        ctx->pc = 0x2A08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08D0u;
        // 0x2a08d4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A08D8u;
        goto label_2a08d8;
    }
    ctx->pc = 0x2A08D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2A08D8u);
        ctx->pc = 0x2A08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08D0u;
        // 0x2a08d4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A08D0u, 0x2A08D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A08D8u;
label_2a08d8:
    // 0x2a08d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a08d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a08dc:
    // 0x2a08dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a08dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a08e0:
    // 0x2a08e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a08e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a08e4:
    // 0x2a08e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a08e8:
    // 0x2a08e8: 0xc0bf7dc  jal         func_2FDF70
label_2a08ec:
    if (ctx->pc == 0x2A08ECu) {
        ctx->pc = 0x2A08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08E8u;
        // 0x2a08ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A08F0u;
        goto label_2a08f0;
    }
    ctx->pc = 0x2A08E8u;
    SET_GPR_U32(ctx, 31, 0x2A08F0u);
    ctx->pc = 0x2A08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08E8u;
    // 0x2a08ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF70u, 0x2A08E8u, 0x2A08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08F0u;
label_2a08f0:
    // 0x2a08f0: 0x8e85b734  lw          $a1, -0x48CC($s4)
    ctx->pc = 0x2a08f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a08f4:
    // 0x2a08f4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a08f8:
    // 0x2a08f8: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2a08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a08fc:
    // 0x2a08fc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2a08fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0900:
    // 0x2a0900: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2a0904:
    if (ctx->pc == 0x2A0904u) {
        ctx->pc = 0x2A0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0900u;
        // 0x2a0904: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0908u;
        goto label_2a0908;
    }
    ctx->pc = 0x2A0900u;
    {
        const bool branch_taken_0x2a0900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0900u;
        // 0x2a0904: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0900) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0908u;
label_2a0908:
    // 0x2a0908: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a0908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a090c:
    // 0x2a090c: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x2a090cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0910:
    // 0x2a0910: 0x84649428  lh          $a0, -0x6BD8($v1)
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939688)));
label_2a0914:
    // 0x2a0914: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a0914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a0918:
    // 0x2a0918: 0x10000044  b           . + 4 + (0x44 << 2)
label_2a091c:
    if (ctx->pc == 0x2A091Cu) {
        ctx->pc = 0x2A091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0918u;
        // 0x2a091c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0920u;
        goto label_2a0920;
    }
    ctx->pc = 0x2A0918u;
    {
        const bool branch_taken_0x2a0918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0918u;
        // 0x2a091c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0918) {
            ctx->pc = 0x2A0A2Cu;
            goto label_2a0a2c;
        }
    }
    ctx->pc = 0x2A0920u;
label_2a0920:
    // 0x2a0920: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a0920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0924:
    // 0x2a0924: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a0924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a0928:
    // 0x2a0928: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
label_2a092c:
    if (ctx->pc == 0x2A092Cu) {
        ctx->pc = 0x2A092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0928u;
        // 0x2a092c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0930u;
        goto label_2a0930;
    }
    ctx->pc = 0x2A0928u;
    {
        const bool branch_taken_0x2a0928 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0928u;
        // 0x2a092c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0928) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A0930u;
label_2a0930:
    // 0x2a0930: 0x8e84b734  lw          $a0, -0x48CC($s4)
    ctx->pc = 0x2a0930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0934:
    // 0x2a0934: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a0934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a0938:
    // 0x2a0938: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a0938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a093c:
    // 0x2a093c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2a093cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0940:
    // 0x2a0940: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2a0944:
    if (ctx->pc == 0x2A0944u) {
        ctx->pc = 0x2A0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0940u;
        // 0x2a0944: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0948u;
        goto label_2a0948;
    }
    ctx->pc = 0x2A0940u;
    {
        const bool branch_taken_0x2a0940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0940u;
        // 0x2a0944: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0940) {
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A0948u;
label_2a0948:
    // 0x2a0948: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x2a0948u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a094c:
    // 0x2a094c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a0950:
    // 0x2a0950: 0x10000036  b           . + 4 + (0x36 << 2)
label_2a0954:
    if (ctx->pc == 0x2A0954u) {
        ctx->pc = 0x2A0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0950u;
        // 0x2a0954: 0x2442012c  addiu       $v0, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0958u;
        goto label_2a0958;
    }
    ctx->pc = 0x2A0950u;
    {
        const bool branch_taken_0x2a0950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0950u;
        // 0x2a0954: 0x2442012c  addiu       $v0, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0950) {
            ctx->pc = 0x2A0A2Cu;
            goto label_2a0a2c;
        }
    }
    ctx->pc = 0x2A0958u;
label_2a0958:
    // 0x2a0958: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2a0958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a095c:
    // 0x2a095c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2a095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a0960:
    // 0x2a0960: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a0960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a0964:
    // 0x2a0964: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a0964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a0968:
    // 0x2a0968: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_2a096c:
    if (ctx->pc == 0x2A096Cu) {
        ctx->pc = 0x2A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0968u;
        // 0x2a096c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0970u;
        goto label_2a0970;
    }
    ctx->pc = 0x2A0968u;
    {
        const bool branch_taken_0x2a0968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0968u;
        // 0x2a096c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0968) {
            ctx->pc = 0x2A0A30u;
            goto label_2a0a30;
        }
    }
    ctx->pc = 0x2A0970u;
label_2a0970:
    // 0x2a0970: 0x86630034  lh          $v1, 0x34($s3)
    ctx->pc = 0x2a0970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
label_2a0974:
    // 0x2a0974: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2a0978:
    if (ctx->pc == 0x2A0978u) {
        ctx->pc = 0x2A0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0974u;
        // 0x2a0978: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A097Cu;
        goto label_2a097c;
    }
    ctx->pc = 0x2A0974u;
    {
        const bool branch_taken_0x2a0974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0974u;
        // 0x2a0978: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0974) {
            ctx->pc = 0x2A09B4u;
            goto label_2a09b4;
        }
    }
    ctx->pc = 0x2A097Cu;
label_2a097c:
    // 0x2a097c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a0980:
    if (ctx->pc == 0x2A0980u) {
        ctx->pc = 0x2A0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A097Cu;
        // 0x2a0980: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0984u;
        goto label_2a0984;
    }
    ctx->pc = 0x2A097Cu;
    {
        const bool branch_taken_0x2a097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A097Cu;
        // 0x2a0980: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a097c) {
            ctx->pc = 0x2A0994u;
            goto label_2a0994;
        }
    }
    ctx->pc = 0x2A0984u;
label_2a0984:
    // 0x2a0984: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2a0988:
    if (ctx->pc == 0x2A0988u) {
        ctx->pc = 0x2A0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0984u;
        // 0x2a0988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A098Cu;
        goto label_2a098c;
    }
    ctx->pc = 0x2A0984u;
    {
        const bool branch_taken_0x2a0984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0984u;
        // 0x2a0988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0984) {
            ctx->pc = 0x2A09A4u;
            goto label_2a09a4;
        }
    }
    ctx->pc = 0x2A098Cu;
label_2a098c:
    // 0x2a098c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2a0990:
    if (ctx->pc == 0x2A0990u) {
        ctx->pc = 0x2A0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A098Cu;
        // 0x2a0990: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0994u;
        goto label_2a0994;
    }
    ctx->pc = 0x2A098Cu;
    {
        const bool branch_taken_0x2a098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A098Cu;
        // 0x2a0990: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a098c) {
            ctx->pc = 0x2A09D4u;
            goto label_2a09d4;
        }
    }
    ctx->pc = 0x2A0994u;
label_2a0994:
    // 0x2a0994: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2a0998:
    if (ctx->pc == 0x2A0998u) {
        ctx->pc = 0x2A0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0994u;
        // 0x2a0998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A099Cu;
        goto label_2a099c;
    }
    ctx->pc = 0x2A0994u;
    {
        const bool branch_taken_0x2a0994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0994u;
        // 0x2a0998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0994) {
            ctx->pc = 0x2A09C8u;
            goto label_2a09c8;
        }
    }
    ctx->pc = 0x2A099Cu;
label_2a099c:
    // 0x2a099c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a09a0:
    if (ctx->pc == 0x2A09A0u) {
        ctx->pc = 0x2A09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A099Cu;
        // 0x2a09a0: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09A4u;
        goto label_2a09a4;
    }
    ctx->pc = 0x2A099Cu;
    {
        const bool branch_taken_0x2a099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A099Cu;
        // 0x2a09a0: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a099c) {
            ctx->pc = 0x2A09D4u;
            goto label_2a09d4;
        }
    }
    ctx->pc = 0x2A09A4u;
label_2a09a4:
    // 0x2a09a4: 0xc0a7f84  jal         func_29FE10
label_2a09a8:
    if (ctx->pc == 0x2A09A8u) {
        ctx->pc = 0x2A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09A4u;
        // 0x2a09a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09ACu;
        goto label_2a09ac;
    }
    ctx->pc = 0x2A09A4u;
    SET_GPR_U32(ctx, 31, 0x2A09ACu);
    ctx->pc = 0x2A09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09A4u;
    // 0x2a09a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x2A09A4u, 0x2A09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09ACu;
label_2a09ac:
    // 0x2a09ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a09b0:
    if (ctx->pc == 0x2A09B0u) {
        ctx->pc = 0x2A09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09ACu;
        // 0x2a09b0: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09B4u;
        goto label_2a09b4;
    }
    ctx->pc = 0x2A09ACu;
    {
        const bool branch_taken_0x2a09ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09ACu;
        // 0x2a09b0: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09ac) {
            ctx->pc = 0x2A09D4u;
            goto label_2a09d4;
        }
    }
    ctx->pc = 0x2A09B4u;
label_2a09b4:
    // 0x2a09b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a09b8:
    // 0x2a09b8: 0xc0a7f84  jal         func_29FE10
label_2a09bc:
    if (ctx->pc == 0x2A09BCu) {
        ctx->pc = 0x2A09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09B8u;
        // 0x2a09bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09C0u;
        goto label_2a09c0;
    }
    ctx->pc = 0x2A09B8u;
    SET_GPR_U32(ctx, 31, 0x2A09C0u);
    ctx->pc = 0x2A09BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09B8u;
    // 0x2a09bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x2A09B8u, 0x2A09C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09C0u;
label_2a09c0:
    // 0x2a09c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a09c4:
    if (ctx->pc == 0x2A09C4u) {
        ctx->pc = 0x2A09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09C0u;
        // 0x2a09c4: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09C8u;
        goto label_2a09c8;
    }
    ctx->pc = 0x2A09C0u;
    {
        const bool branch_taken_0x2a09c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09C0u;
        // 0x2a09c4: 0x86620010  lh          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09c0) {
            ctx->pc = 0x2A09D4u;
            goto label_2a09d4;
        }
    }
    ctx->pc = 0x2A09C8u;
label_2a09c8:
    // 0x2a09c8: 0xc0a7f84  jal         func_29FE10
label_2a09cc:
    if (ctx->pc == 0x2A09CCu) {
        ctx->pc = 0x2A09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09C8u;
        // 0x2a09cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09D0u;
        goto label_2a09d0;
    }
    ctx->pc = 0x2A09C8u;
    SET_GPR_U32(ctx, 31, 0x2A09D0u);
    ctx->pc = 0x2A09CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09C8u;
    // 0x2a09cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x2A09C8u, 0x2A09D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09D0u;
label_2a09d0:
    // 0x2a09d0: 0x86620010  lh          $v0, 0x10($s3)
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_2a09d4:
    // 0x2a09d4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a09d8:
    // 0x2a09d8: 0x50500016  beql        $v0, $s0, . + 4 + (0x16 << 2)
label_2a09dc:
    if (ctx->pc == 0x2A09DCu) {
        ctx->pc = 0x2A09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09D8u;
        // 0x2a09dc: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09E0u;
        goto label_2a09e0;
    }
    ctx->pc = 0x2A09D8u;
    {
        const bool branch_taken_0x2a09d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a09d8) {
            ctx->pc = 0x2A09DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A09D8u;
            // 0x2a09dc: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A09E0u;
label_2a09e0:
    // 0x2a09e0: 0xc0a36c8  jal         func_28DB20
label_2a09e4:
    if (ctx->pc == 0x2A09E4u) {
        ctx->pc = 0x2A09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09E0u;
        // 0x2a09e4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09E8u;
        goto label_2a09e8;
    }
    ctx->pc = 0x2A09E0u;
    SET_GPR_U32(ctx, 31, 0x2A09E8u);
    ctx->pc = 0x2A09E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09E0u;
    // 0x2a09e4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A09E0u, 0x2A09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09E8u;
label_2a09e8:
    // 0x2a09e8: 0xc0a367c  jal         func_28D9F0
label_2a09ec:
    if (ctx->pc == 0x2A09ECu) {
        ctx->pc = 0x2A09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09E8u;
        // 0x2a09ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09F0u;
        goto label_2a09f0;
    }
    ctx->pc = 0x2A09E8u;
    SET_GPR_U32(ctx, 31, 0x2A09F0u);
    ctx->pc = 0x2A09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09E8u;
    // 0x2a09ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A09E8u, 0x2A09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09F0u;
label_2a09f0:
    // 0x2a09f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a09f4:
    if (ctx->pc == 0x2A09F4u) {
        ctx->pc = 0x2A09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09F0u;
        // 0x2a09f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A09F8u;
        goto label_2a09f8;
    }
    ctx->pc = 0x2A09F0u;
    {
        const bool branch_taken_0x2a09f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09F0u;
        // 0x2a09f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09f0) {
            ctx->pc = 0x2A0A14u;
            goto label_2a0a14;
        }
    }
    ctx->pc = 0x2A09F8u;
label_2a09f8:
    // 0x2a09f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a09f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a09fc:
    // 0x2a09fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a09fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a0a00:
    // 0x2a0a00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0a04:
    // 0x2a0a04: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a0a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a0a08:
    // 0x2a0a08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a0c:
    // 0x2a0a0c: 0xc0be8c0  jal         func_2FA300
label_2a0a10:
    if (ctx->pc == 0x2A0A10u) {
        ctx->pc = 0x2A0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A0Cu;
        // 0x2a0a10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0A14u;
        goto label_2a0a14;
    }
    ctx->pc = 0x2A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A14u);
    ctx->pc = 0x2A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A0Cu;
    // 0x2a0a10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A0A0Cu, 0x2A0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A14u;
label_2a0a14:
    // 0x2a0a14: 0x8e84b734  lw          $a0, -0x48CC($s4)
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a0a18:
    // 0x2a0a18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a0a1c:
    // 0x2a0a1c: 0x8465942e  lh          $a1, -0x6BD2($v1)
    ctx->pc = 0x2a0a1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939694)));
label_2a0a20:
    // 0x2a0a20: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a0a24:
    // 0x2a0a24: 0xa6700010  sh          $s0, 0x10($s3)
    ctx->pc = 0x2a0a24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 16));
label_2a0a28:
    // 0x2a0a28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a0a2c:
    // 0x2a0a2c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2a0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2a0a30:
    // 0x2a0a30: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x2a0a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2a0a34:
    // 0x2a0a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a38:
    // 0x2a0a38: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x2a0a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2a0a3c:
    // 0x2a0a3c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x2a0a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2a0a40:
    // 0x2a0a40: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x2a0a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2a0a44:
    // 0x2a0a44: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x2a0a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2a0a48:
    // 0x2a0a48: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x2a0a48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2a0a4c:
    // 0x2a0a4c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x2a0a4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a0a50:
    // 0x2a0a50: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x2a0a50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a0a54:
    // 0x2a0a54: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x2a0a54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a0a58:
    // 0x2a0a58: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2a0a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a0a5c:
    // 0x2a0a5c: 0x3e00008  jr          $ra
label_2a0a60:
    if (ctx->pc == 0x2A0A60u) {
        ctx->pc = 0x2A0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A5Cu;
        // 0x2a0a60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0A64u;
        goto label_2a0a64;
    }
    ctx->pc = 0x2A0A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A5Cu;
        // 0x2a0a60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0A64u;
label_2a0a64:
    // 0x2a0a64: 0x0  nop
    ctx->pc = 0x2a0a64u;
    // NOP
    ctx->pc = 0x2a0a68u;
}
