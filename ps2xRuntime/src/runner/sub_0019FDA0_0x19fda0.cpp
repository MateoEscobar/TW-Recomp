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

// Function: sub_0019FDA0
// Address: 0x19fda0 - 0x1a03a8
void sub_0019FDA0_0x19fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FDA0_0x19fda0");
#endif

    switch (ctx->pc) {
        case 0x19fda0u: goto label_19fda0;
        case 0x19fda4u: goto label_19fda4;
        case 0x19fda8u: goto label_19fda8;
        case 0x19fdacu: goto label_19fdac;
        case 0x19fdb0u: goto label_19fdb0;
        case 0x19fdb4u: goto label_19fdb4;
        case 0x19fdb8u: goto label_19fdb8;
        case 0x19fdbcu: goto label_19fdbc;
        case 0x19fdc0u: goto label_19fdc0;
        case 0x19fdc4u: goto label_19fdc4;
        case 0x19fdc8u: goto label_19fdc8;
        case 0x19fdccu: goto label_19fdcc;
        case 0x19fdd0u: goto label_19fdd0;
        case 0x19fdd4u: goto label_19fdd4;
        case 0x19fdd8u: goto label_19fdd8;
        case 0x19fddcu: goto label_19fddc;
        case 0x19fde0u: goto label_19fde0;
        case 0x19fde4u: goto label_19fde4;
        case 0x19fde8u: goto label_19fde8;
        case 0x19fdecu: goto label_19fdec;
        case 0x19fdf0u: goto label_19fdf0;
        case 0x19fdf4u: goto label_19fdf4;
        case 0x19fdf8u: goto label_19fdf8;
        case 0x19fdfcu: goto label_19fdfc;
        case 0x19fe00u: goto label_19fe00;
        case 0x19fe04u: goto label_19fe04;
        case 0x19fe08u: goto label_19fe08;
        case 0x19fe0cu: goto label_19fe0c;
        case 0x19fe10u: goto label_19fe10;
        case 0x19fe14u: goto label_19fe14;
        case 0x19fe18u: goto label_19fe18;
        case 0x19fe1cu: goto label_19fe1c;
        case 0x19fe20u: goto label_19fe20;
        case 0x19fe24u: goto label_19fe24;
        case 0x19fe28u: goto label_19fe28;
        case 0x19fe2cu: goto label_19fe2c;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe34u: goto label_19fe34;
        case 0x19fe38u: goto label_19fe38;
        case 0x19fe3cu: goto label_19fe3c;
        case 0x19fe40u: goto label_19fe40;
        case 0x19fe44u: goto label_19fe44;
        case 0x19fe48u: goto label_19fe48;
        case 0x19fe4cu: goto label_19fe4c;
        case 0x19fe50u: goto label_19fe50;
        case 0x19fe54u: goto label_19fe54;
        case 0x19fe58u: goto label_19fe58;
        case 0x19fe5cu: goto label_19fe5c;
        case 0x19fe60u: goto label_19fe60;
        case 0x19fe64u: goto label_19fe64;
        case 0x19fe68u: goto label_19fe68;
        case 0x19fe6cu: goto label_19fe6c;
        case 0x19fe70u: goto label_19fe70;
        case 0x19fe74u: goto label_19fe74;
        case 0x19fe78u: goto label_19fe78;
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe80u: goto label_19fe80;
        case 0x19fe84u: goto label_19fe84;
        case 0x19fe88u: goto label_19fe88;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe90u: goto label_19fe90;
        case 0x19fe94u: goto label_19fe94;
        case 0x19fe98u: goto label_19fe98;
        case 0x19fe9cu: goto label_19fe9c;
        case 0x19fea0u: goto label_19fea0;
        case 0x19fea4u: goto label_19fea4;
        case 0x19fea8u: goto label_19fea8;
        case 0x19feacu: goto label_19feac;
        case 0x19feb0u: goto label_19feb0;
        case 0x19feb4u: goto label_19feb4;
        case 0x19feb8u: goto label_19feb8;
        case 0x19febcu: goto label_19febc;
        case 0x19fec0u: goto label_19fec0;
        case 0x19fec4u: goto label_19fec4;
        case 0x19fec8u: goto label_19fec8;
        case 0x19feccu: goto label_19fecc;
        case 0x19fed0u: goto label_19fed0;
        case 0x19fed4u: goto label_19fed4;
        case 0x19fed8u: goto label_19fed8;
        case 0x19fedcu: goto label_19fedc;
        case 0x19fee0u: goto label_19fee0;
        case 0x19fee4u: goto label_19fee4;
        case 0x19fee8u: goto label_19fee8;
        case 0x19feecu: goto label_19feec;
        case 0x19fef0u: goto label_19fef0;
        case 0x19fef4u: goto label_19fef4;
        case 0x19fef8u: goto label_19fef8;
        case 0x19fefcu: goto label_19fefc;
        case 0x19ff00u: goto label_19ff00;
        case 0x19ff04u: goto label_19ff04;
        case 0x19ff08u: goto label_19ff08;
        case 0x19ff0cu: goto label_19ff0c;
        case 0x19ff10u: goto label_19ff10;
        case 0x19ff14u: goto label_19ff14;
        case 0x19ff18u: goto label_19ff18;
        case 0x19ff1cu: goto label_19ff1c;
        case 0x19ff20u: goto label_19ff20;
        case 0x19ff24u: goto label_19ff24;
        case 0x19ff28u: goto label_19ff28;
        case 0x19ff2cu: goto label_19ff2c;
        case 0x19ff30u: goto label_19ff30;
        case 0x19ff34u: goto label_19ff34;
        case 0x19ff38u: goto label_19ff38;
        case 0x19ff3cu: goto label_19ff3c;
        case 0x19ff40u: goto label_19ff40;
        case 0x19ff44u: goto label_19ff44;
        case 0x19ff48u: goto label_19ff48;
        case 0x19ff4cu: goto label_19ff4c;
        case 0x19ff50u: goto label_19ff50;
        case 0x19ff54u: goto label_19ff54;
        case 0x19ff58u: goto label_19ff58;
        case 0x19ff5cu: goto label_19ff5c;
        case 0x19ff60u: goto label_19ff60;
        case 0x19ff64u: goto label_19ff64;
        case 0x19ff68u: goto label_19ff68;
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff70u: goto label_19ff70;
        case 0x19ff74u: goto label_19ff74;
        case 0x19ff78u: goto label_19ff78;
        case 0x19ff7cu: goto label_19ff7c;
        case 0x19ff80u: goto label_19ff80;
        case 0x19ff84u: goto label_19ff84;
        case 0x19ff88u: goto label_19ff88;
        case 0x19ff8cu: goto label_19ff8c;
        case 0x19ff90u: goto label_19ff90;
        case 0x19ff94u: goto label_19ff94;
        case 0x19ff98u: goto label_19ff98;
        case 0x19ff9cu: goto label_19ff9c;
        case 0x19ffa0u: goto label_19ffa0;
        case 0x19ffa4u: goto label_19ffa4;
        case 0x19ffa8u: goto label_19ffa8;
        case 0x19ffacu: goto label_19ffac;
        case 0x19ffb0u: goto label_19ffb0;
        case 0x19ffb4u: goto label_19ffb4;
        case 0x19ffb8u: goto label_19ffb8;
        case 0x19ffbcu: goto label_19ffbc;
        case 0x19ffc0u: goto label_19ffc0;
        case 0x19ffc4u: goto label_19ffc4;
        case 0x19ffc8u: goto label_19ffc8;
        case 0x19ffccu: goto label_19ffcc;
        case 0x19ffd0u: goto label_19ffd0;
        case 0x19ffd4u: goto label_19ffd4;
        case 0x19ffd8u: goto label_19ffd8;
        case 0x19ffdcu: goto label_19ffdc;
        case 0x19ffe0u: goto label_19ffe0;
        case 0x19ffe4u: goto label_19ffe4;
        case 0x19ffe8u: goto label_19ffe8;
        case 0x19ffecu: goto label_19ffec;
        case 0x19fff0u: goto label_19fff0;
        case 0x19fff4u: goto label_19fff4;
        case 0x19fff8u: goto label_19fff8;
        case 0x19fffcu: goto label_19fffc;
        case 0x1a0000u: goto label_1a0000;
        case 0x1a0004u: goto label_1a0004;
        case 0x1a0008u: goto label_1a0008;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0010u: goto label_1a0010;
        case 0x1a0014u: goto label_1a0014;
        case 0x1a0018u: goto label_1a0018;
        case 0x1a001cu: goto label_1a001c;
        case 0x1a0020u: goto label_1a0020;
        case 0x1a0024u: goto label_1a0024;
        case 0x1a0028u: goto label_1a0028;
        case 0x1a002cu: goto label_1a002c;
        case 0x1a0030u: goto label_1a0030;
        case 0x1a0034u: goto label_1a0034;
        case 0x1a0038u: goto label_1a0038;
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0040u: goto label_1a0040;
        case 0x1a0044u: goto label_1a0044;
        case 0x1a0048u: goto label_1a0048;
        case 0x1a004cu: goto label_1a004c;
        case 0x1a0050u: goto label_1a0050;
        case 0x1a0054u: goto label_1a0054;
        case 0x1a0058u: goto label_1a0058;
        case 0x1a005cu: goto label_1a005c;
        case 0x1a0060u: goto label_1a0060;
        case 0x1a0064u: goto label_1a0064;
        case 0x1a0068u: goto label_1a0068;
        case 0x1a006cu: goto label_1a006c;
        case 0x1a0070u: goto label_1a0070;
        case 0x1a0074u: goto label_1a0074;
        case 0x1a0078u: goto label_1a0078;
        case 0x1a007cu: goto label_1a007c;
        case 0x1a0080u: goto label_1a0080;
        case 0x1a0084u: goto label_1a0084;
        case 0x1a0088u: goto label_1a0088;
        case 0x1a008cu: goto label_1a008c;
        case 0x1a0090u: goto label_1a0090;
        case 0x1a0094u: goto label_1a0094;
        case 0x1a0098u: goto label_1a0098;
        case 0x1a009cu: goto label_1a009c;
        case 0x1a00a0u: goto label_1a00a0;
        case 0x1a00a4u: goto label_1a00a4;
        case 0x1a00a8u: goto label_1a00a8;
        case 0x1a00acu: goto label_1a00ac;
        case 0x1a00b0u: goto label_1a00b0;
        case 0x1a00b4u: goto label_1a00b4;
        case 0x1a00b8u: goto label_1a00b8;
        case 0x1a00bcu: goto label_1a00bc;
        case 0x1a00c0u: goto label_1a00c0;
        case 0x1a00c4u: goto label_1a00c4;
        case 0x1a00c8u: goto label_1a00c8;
        case 0x1a00ccu: goto label_1a00cc;
        case 0x1a00d0u: goto label_1a00d0;
        case 0x1a00d4u: goto label_1a00d4;
        case 0x1a00d8u: goto label_1a00d8;
        case 0x1a00dcu: goto label_1a00dc;
        case 0x1a00e0u: goto label_1a00e0;
        case 0x1a00e4u: goto label_1a00e4;
        case 0x1a00e8u: goto label_1a00e8;
        case 0x1a00ecu: goto label_1a00ec;
        case 0x1a00f0u: goto label_1a00f0;
        case 0x1a00f4u: goto label_1a00f4;
        case 0x1a00f8u: goto label_1a00f8;
        case 0x1a00fcu: goto label_1a00fc;
        case 0x1a0100u: goto label_1a0100;
        case 0x1a0104u: goto label_1a0104;
        case 0x1a0108u: goto label_1a0108;
        case 0x1a010cu: goto label_1a010c;
        case 0x1a0110u: goto label_1a0110;
        case 0x1a0114u: goto label_1a0114;
        case 0x1a0118u: goto label_1a0118;
        case 0x1a011cu: goto label_1a011c;
        case 0x1a0120u: goto label_1a0120;
        case 0x1a0124u: goto label_1a0124;
        case 0x1a0128u: goto label_1a0128;
        case 0x1a012cu: goto label_1a012c;
        case 0x1a0130u: goto label_1a0130;
        case 0x1a0134u: goto label_1a0134;
        case 0x1a0138u: goto label_1a0138;
        case 0x1a013cu: goto label_1a013c;
        case 0x1a0140u: goto label_1a0140;
        case 0x1a0144u: goto label_1a0144;
        case 0x1a0148u: goto label_1a0148;
        case 0x1a014cu: goto label_1a014c;
        case 0x1a0150u: goto label_1a0150;
        case 0x1a0154u: goto label_1a0154;
        case 0x1a0158u: goto label_1a0158;
        case 0x1a015cu: goto label_1a015c;
        case 0x1a0160u: goto label_1a0160;
        case 0x1a0164u: goto label_1a0164;
        case 0x1a0168u: goto label_1a0168;
        case 0x1a016cu: goto label_1a016c;
        case 0x1a0170u: goto label_1a0170;
        case 0x1a0174u: goto label_1a0174;
        case 0x1a0178u: goto label_1a0178;
        case 0x1a017cu: goto label_1a017c;
        case 0x1a0180u: goto label_1a0180;
        case 0x1a0184u: goto label_1a0184;
        case 0x1a0188u: goto label_1a0188;
        case 0x1a018cu: goto label_1a018c;
        case 0x1a0190u: goto label_1a0190;
        case 0x1a0194u: goto label_1a0194;
        case 0x1a0198u: goto label_1a0198;
        case 0x1a019cu: goto label_1a019c;
        case 0x1a01a0u: goto label_1a01a0;
        case 0x1a01a4u: goto label_1a01a4;
        case 0x1a01a8u: goto label_1a01a8;
        case 0x1a01acu: goto label_1a01ac;
        case 0x1a01b0u: goto label_1a01b0;
        case 0x1a01b4u: goto label_1a01b4;
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01bcu: goto label_1a01bc;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01c4u: goto label_1a01c4;
        case 0x1a01c8u: goto label_1a01c8;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d0u: goto label_1a01d0;
        case 0x1a01d4u: goto label_1a01d4;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01dcu: goto label_1a01dc;
        case 0x1a01e0u: goto label_1a01e0;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01e8u: goto label_1a01e8;
        case 0x1a01ecu: goto label_1a01ec;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a01f8u: goto label_1a01f8;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0200u: goto label_1a0200;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a0208u: goto label_1a0208;
        case 0x1a020cu: goto label_1a020c;
        case 0x1a0210u: goto label_1a0210;
        case 0x1a0214u: goto label_1a0214;
        case 0x1a0218u: goto label_1a0218;
        case 0x1a021cu: goto label_1a021c;
        case 0x1a0220u: goto label_1a0220;
        case 0x1a0224u: goto label_1a0224;
        case 0x1a0228u: goto label_1a0228;
        case 0x1a022cu: goto label_1a022c;
        case 0x1a0230u: goto label_1a0230;
        case 0x1a0234u: goto label_1a0234;
        case 0x1a0238u: goto label_1a0238;
        case 0x1a023cu: goto label_1a023c;
        case 0x1a0240u: goto label_1a0240;
        case 0x1a0244u: goto label_1a0244;
        case 0x1a0248u: goto label_1a0248;
        case 0x1a024cu: goto label_1a024c;
        case 0x1a0250u: goto label_1a0250;
        case 0x1a0254u: goto label_1a0254;
        case 0x1a0258u: goto label_1a0258;
        case 0x1a025cu: goto label_1a025c;
        case 0x1a0260u: goto label_1a0260;
        case 0x1a0264u: goto label_1a0264;
        case 0x1a0268u: goto label_1a0268;
        case 0x1a026cu: goto label_1a026c;
        case 0x1a0270u: goto label_1a0270;
        case 0x1a0274u: goto label_1a0274;
        case 0x1a0278u: goto label_1a0278;
        case 0x1a027cu: goto label_1a027c;
        case 0x1a0280u: goto label_1a0280;
        case 0x1a0284u: goto label_1a0284;
        case 0x1a0288u: goto label_1a0288;
        case 0x1a028cu: goto label_1a028c;
        case 0x1a0290u: goto label_1a0290;
        case 0x1a0294u: goto label_1a0294;
        case 0x1a0298u: goto label_1a0298;
        case 0x1a029cu: goto label_1a029c;
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02a4u: goto label_1a02a4;
        case 0x1a02a8u: goto label_1a02a8;
        case 0x1a02acu: goto label_1a02ac;
        case 0x1a02b0u: goto label_1a02b0;
        case 0x1a02b4u: goto label_1a02b4;
        case 0x1a02b8u: goto label_1a02b8;
        case 0x1a02bcu: goto label_1a02bc;
        case 0x1a02c0u: goto label_1a02c0;
        case 0x1a02c4u: goto label_1a02c4;
        case 0x1a02c8u: goto label_1a02c8;
        case 0x1a02ccu: goto label_1a02cc;
        case 0x1a02d0u: goto label_1a02d0;
        case 0x1a02d4u: goto label_1a02d4;
        case 0x1a02d8u: goto label_1a02d8;
        case 0x1a02dcu: goto label_1a02dc;
        case 0x1a02e0u: goto label_1a02e0;
        case 0x1a02e4u: goto label_1a02e4;
        case 0x1a02e8u: goto label_1a02e8;
        case 0x1a02ecu: goto label_1a02ec;
        case 0x1a02f0u: goto label_1a02f0;
        case 0x1a02f4u: goto label_1a02f4;
        case 0x1a02f8u: goto label_1a02f8;
        case 0x1a02fcu: goto label_1a02fc;
        case 0x1a0300u: goto label_1a0300;
        case 0x1a0304u: goto label_1a0304;
        case 0x1a0308u: goto label_1a0308;
        case 0x1a030cu: goto label_1a030c;
        case 0x1a0310u: goto label_1a0310;
        case 0x1a0314u: goto label_1a0314;
        case 0x1a0318u: goto label_1a0318;
        case 0x1a031cu: goto label_1a031c;
        case 0x1a0320u: goto label_1a0320;
        case 0x1a0324u: goto label_1a0324;
        case 0x1a0328u: goto label_1a0328;
        case 0x1a032cu: goto label_1a032c;
        case 0x1a0330u: goto label_1a0330;
        case 0x1a0334u: goto label_1a0334;
        case 0x1a0338u: goto label_1a0338;
        case 0x1a033cu: goto label_1a033c;
        case 0x1a0340u: goto label_1a0340;
        case 0x1a0344u: goto label_1a0344;
        case 0x1a0348u: goto label_1a0348;
        case 0x1a034cu: goto label_1a034c;
        case 0x1a0350u: goto label_1a0350;
        case 0x1a0354u: goto label_1a0354;
        case 0x1a0358u: goto label_1a0358;
        case 0x1a035cu: goto label_1a035c;
        case 0x1a0360u: goto label_1a0360;
        case 0x1a0364u: goto label_1a0364;
        case 0x1a0368u: goto label_1a0368;
        case 0x1a036cu: goto label_1a036c;
        case 0x1a0370u: goto label_1a0370;
        case 0x1a0374u: goto label_1a0374;
        case 0x1a0378u: goto label_1a0378;
        case 0x1a037cu: goto label_1a037c;
        case 0x1a0380u: goto label_1a0380;
        case 0x1a0384u: goto label_1a0384;
        case 0x1a0388u: goto label_1a0388;
        case 0x1a038cu: goto label_1a038c;
        case 0x1a0390u: goto label_1a0390;
        case 0x1a0394u: goto label_1a0394;
        case 0x1a0398u: goto label_1a0398;
        case 0x1a039cu: goto label_1a039c;
        case 0x1a03a0u: goto label_1a03a0;
        case 0x1a03a4u: goto label_1a03a4;
        default: break;
    }

    ctx->pc = 0x19fda0u;

label_19fda0:
    // 0x19fda0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x19fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_19fda4:
    // 0x19fda4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19fda8:
    // 0x19fda8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x19fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_19fdac:
    // 0x19fdac: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_19fdb0:
    // 0x19fdb0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x19fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_19fdb4:
    // 0x19fdb4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x19fdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_19fdb8:
    // 0x19fdb8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x19fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_19fdbc:
    // 0x19fdbc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x19fdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_19fdc0:
    // 0x19fdc0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x19fdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_19fdc4:
    // 0x19fdc4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x19fdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_19fdc8:
    // 0x19fdc8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_19fdcc:
    // 0x19fdcc: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x19fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_19fdd0:
    // 0x19fdd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_19fdd4:
    // 0x19fdd4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x19fdd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_19fdd8:
    // 0x19fdd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19fddc:
    // 0x19fddc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19fddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19fde0:
    // 0x19fde0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_19fde4:
    if (ctx->pc == 0x19FDE4u) {
        ctx->pc = 0x19FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE0u;
        // 0x19fde4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDE8u;
        goto label_19fde8;
    }
    ctx->pc = 0x19FDE0u;
    {
        const bool branch_taken_0x19fde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE0u;
        // 0x19fde4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fde0) {
            ctx->pc = 0x19FE94u;
            goto label_19fe94;
        }
    }
    ctx->pc = 0x19FDE8u;
label_19fde8:
    // 0x19fde8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x19fde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_19fdec:
    // 0x19fdec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_19fdf0:
    if (ctx->pc == 0x19FDF0u) {
        ctx->pc = 0x19FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDECu;
        // 0x19fdf0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDF4u;
        goto label_19fdf4;
    }
    ctx->pc = 0x19FDECu;
    {
        const bool branch_taken_0x19fdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDECu;
        // 0x19fdf0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdec) {
            ctx->pc = 0x19FE3Cu;
            goto label_19fe3c;
        }
    }
    ctx->pc = 0x19FDF4u;
label_19fdf4:
    // 0x19fdf4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19fdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19fdf8:
    // 0x19fdf8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_19fdfc:
    if (ctx->pc == 0x19FDFCu) {
        ctx->pc = 0x19FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF8u;
        // 0x19fdfc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE00u;
        goto label_19fe00;
    }
    ctx->pc = 0x19FDF8u;
    {
        const bool branch_taken_0x19fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF8u;
        // 0x19fdfc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdf8) {
            ctx->pc = 0x19FF98u;
            goto label_19ff98;
        }
    }
    ctx->pc = 0x19FE00u;
label_19fe00:
    // 0x19fe00: 0x3c013ed4  lui         $at, 0x3ED4
    ctx->pc = 0x19fe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16084 << 16));
label_19fe04:
    // 0x19fe04: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x19fe04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_19fe08:
    // 0x19fe08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19fe08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19fe0c:
    // 0x19fe0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19fe10:
    // 0x19fe10: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x19fe10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_19fe14:
    // 0x19fe14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fe14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19fe18:
    // 0x19fe18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fe18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fe1c:
    // 0x19fe1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19fe20:
    // 0x19fe20: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x19fe20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_19fe24:
    // 0x19fe24: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fe24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19fe28:
    // 0x19fe28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19fe28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fe2c:
    // 0x19fe2c: 0xe602d000  swc1        $f2, -0x3000($s0)
    ctx->pc = 0x19fe2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294955008), bits); }
label_19fe30:
    // 0x19fe30: 0xe460cff8  swc1        $f0, -0x3008($v1)
    ctx->pc = 0x19fe30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955000), bits); }
label_19fe34:
    // 0x19fe34: 0x10000058  b           . + 4 + (0x58 << 2)
label_19fe38:
    if (ctx->pc == 0x19FE38u) {
        ctx->pc = 0x19FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE34u;
        // 0x19fe38: 0xe441d01c  swc1        $f1, -0x2FE4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE3Cu;
        goto label_19fe3c;
    }
    ctx->pc = 0x19FE34u;
    {
        const bool branch_taken_0x19fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE34u;
        // 0x19fe38: 0xe441d01c  swc1        $f1, -0x2FE4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe34) {
            ctx->pc = 0x19FF98u;
            goto label_19ff98;
        }
    }
    ctx->pc = 0x19FE3Cu;
label_19fe3c:
    // 0x19fe3c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19fe40:
    // 0x19fe40: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_19fe44:
    if (ctx->pc == 0x19FE44u) {
        ctx->pc = 0x19FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE40u;
        // 0x19fe44: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE48u;
        goto label_19fe48;
    }
    ctx->pc = 0x19FE40u;
    {
        const bool branch_taken_0x19fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE40u;
        // 0x19fe44: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe40) {
            ctx->pc = 0x19FF98u;
            goto label_19ff98;
        }
    }
    ctx->pc = 0x19FE48u;
label_19fe48:
    // 0x19fe48: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_19fe4c:
    // 0x19fe4c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x19fe4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_19fe50:
    // 0x19fe50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19fe50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19fe54:
    // 0x19fe54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19fe58:
    // 0x19fe58: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_19fe5c:
    // 0x19fe5c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fe5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19fe60:
    // 0x19fe60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fe60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fe64:
    // 0x19fe64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19fe68:
    // 0x19fe68: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x19fe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_19fe6c:
    // 0x19fe6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fe6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19fe70:
    // 0x19fe70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19fe70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fe74:
    // 0x19fe74: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_19fe78:
    // 0x19fe78: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19fe78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_19fe7c:
    // 0x19fe7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19fe7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19fe80:
    // 0x19fe80: 0xe603d000  swc1        $f3, -0x3000($s0)
    ctx->pc = 0x19fe80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294955008), bits); }
label_19fe84:
    // 0x19fe84: 0xe640d004  swc1        $f0, -0x2FFC($s2)
    ctx->pc = 0x19fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294955012), bits); }
label_19fe88:
    // 0x19fe88: 0xe441d018  swc1        $f1, -0x2FE8($v0)
    ctx->pc = 0x19fe88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955032), bits); }
label_19fe8c:
    // 0x19fe8c: 0x10000042  b           . + 4 + (0x42 << 2)
label_19fe90:
    if (ctx->pc == 0x19FE90u) {
        ctx->pc = 0x19FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE8Cu;
        // 0x19fe90: 0xe462d01c  swc1        $f2, -0x2FE4($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE94u;
        goto label_19fe94;
    }
    ctx->pc = 0x19FE8Cu;
    {
        const bool branch_taken_0x19fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE8Cu;
        // 0x19fe90: 0xe462d01c  swc1        $f2, -0x2FE4($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe8c) {
            ctx->pc = 0x19FF98u;
            goto label_19ff98;
        }
    }
    ctx->pc = 0x19FE94u;
label_19fe94:
    // 0x19fe94: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x19fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_19fe98:
    // 0x19fe98: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19fe9c:
    if (ctx->pc == 0x19FE9Cu) {
        ctx->pc = 0x19FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE98u;
        // 0x19fe9c: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEA0u;
        goto label_19fea0;
    }
    ctx->pc = 0x19FE98u;
    {
        const bool branch_taken_0x19fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE98u;
        // 0x19fe9c: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe98) {
            ctx->pc = 0x19FEFCu;
            goto label_19fefc;
        }
    }
    ctx->pc = 0x19FEA0u;
label_19fea0:
    // 0x19fea0: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x19fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_19fea4:
    // 0x19fea4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x19fea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_19fea8:
    // 0x19fea8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x19fea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_19feac:
    // 0x19feac: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x19feacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_19feb0:
    // 0x19feb0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x19feb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_19feb4:
    // 0x19feb4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x19feb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_19feb8:
    // 0x19feb8: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x19feb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_19febc:
    // 0x19febc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x19febcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_19fec0:
    // 0x19fec0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19fec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19fec4:
    // 0x19fec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fec8:
    // 0x19fec8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x19fec8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_19fecc:
    // 0x19fecc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19feccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_19fed0:
    // 0x19fed0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19fed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19fed4:
    // 0x19fed4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19fed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fed8:
    // 0x19fed8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19fedc:
    // 0x19fedc: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x19fedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_19fee0:
    // 0x19fee0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19fee4:
    // 0x19fee4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19fee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19fee8:
    // 0x19fee8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x19fee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_19feec:
    // 0x19feec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19feecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19fef0:
    // 0x19fef0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19fef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19fef4:
    // 0x19fef4: 0x10000017  b           . + 4 + (0x17 << 2)
label_19fef8:
    if (ctx->pc == 0x19FEF8u) {
        ctx->pc = 0x19FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF4u;
        // 0x19fef8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEFCu;
        goto label_19fefc;
    }
    ctx->pc = 0x19FEF4u;
    {
        const bool branch_taken_0x19fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF4u;
        // 0x19fef8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fef4) {
            ctx->pc = 0x19FF54u;
            goto label_19ff54;
        }
    }
    ctx->pc = 0x19FEFCu;
label_19fefc:
    // 0x19fefc: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x19fefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_19ff00:
    // 0x19ff00: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_19ff04:
    // 0x19ff04: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x19ff04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_19ff08:
    // 0x19ff08: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x19ff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_19ff0c:
    // 0x19ff0c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x19ff0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_19ff10:
    // 0x19ff10: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x19ff10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_19ff14:
    // 0x19ff14: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_19ff18:
    // 0x19ff18: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_19ff1c:
    // 0x19ff1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19ff1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19ff20:
    // 0x19ff20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ff20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ff24:
    // 0x19ff24: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x19ff24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_19ff28:
    // 0x19ff28: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19ff28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_19ff2c:
    // 0x19ff2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ff2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19ff30:
    // 0x19ff30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ff30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ff34:
    // 0x19ff34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19ff38:
    // 0x19ff38: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x19ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_19ff3c:
    // 0x19ff3c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19ff3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19ff40:
    // 0x19ff40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19ff40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ff44:
    // 0x19ff44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19ff48:
    // 0x19ff48: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x19ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_19ff4c:
    // 0x19ff4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19ff4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_19ff50:
    // 0x19ff50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19ff50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19ff54:
    // 0x19ff54: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_19ff58:
    // 0x19ff58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19ff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19ff5c:
    // 0x19ff5c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19ff5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_19ff60:
    // 0x19ff60: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x19ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_19ff64:
    // 0x19ff64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ff64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ff68:
    // 0x19ff68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19ff68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_19ff6c:
    // 0x19ff6c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x19ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_19ff70:
    // 0x19ff70: 0xe440cfe8  swc1        $f0, -0x3018($v0)
    ctx->pc = 0x19ff70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954984), bits); }
label_19ff74:
    // 0x19ff74: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19ff78:
    // 0x19ff78: 0xe461cffc  swc1        $f1, -0x3004($v1)
    ctx->pc = 0x19ff78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955004), bits); }
label_19ff7c:
    // 0x19ff7c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x19ff7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19ff80:
    // 0x19ff80: 0xe482d018  swc1        $f2, -0x2FE8($a0)
    ctx->pc = 0x19ff80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955032), bits); }
label_19ff84:
    // 0x19ff84: 0xe4a3d01c  swc1        $f3, -0x2FE4($a1)
    ctx->pc = 0x19ff84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294955036), bits); }
label_19ff88:
    // 0x19ff88: 0xe4c4cfec  swc1        $f4, -0x3014($a2)
    ctx->pc = 0x19ff88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954988), bits); }
label_19ff8c:
    // 0x19ff8c: 0xe527d000  swc1        $f7, -0x3000($t1)
    ctx->pc = 0x19ff8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294955008), bits); }
label_19ff90:
    // 0x19ff90: 0xe506d004  swc1        $f6, -0x2FFC($t0)
    ctx->pc = 0x19ff90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955012), bits); }
label_19ff94:
    // 0x19ff94: 0xe4e5cff0  swc1        $f5, -0x3010($a3)
    ctx->pc = 0x19ff94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954992), bits); }
label_19ff98:
    // 0x19ff98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19ff9c:
    // 0x19ff9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19ffa0:
    // 0x19ffa0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x19ffa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_19ffa4:
    // 0x19ffa4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19ffa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ffa8:
    // 0x19ffa8: 0x84650018  lh          $a1, 0x18($v1)
    ctx->pc = 0x19ffa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_19ffac:
    // 0x19ffac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19ffacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ffb0:
    // 0x19ffb0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x19ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_19ffb4:
    // 0x19ffb4: 0x263e13b0  addiu       $fp, $s1, 0x13B0
    ctx->pc = 0x19ffb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 5040));
label_19ffb8:
    // 0x19ffb8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x19ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_19ffbc:
    // 0x19ffbc: 0x40f809  jalr        $v0
label_19ffc0:
    if (ctx->pc == 0x19FFC0u) {
        ctx->pc = 0x19FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFBCu;
        // 0x19ffc0: 0x3673ffff  ori         $s3, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFC4u;
        goto label_19ffc4;
    }
    ctx->pc = 0x19FFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FFC4u);
        ctx->pc = 0x19FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFBCu;
        // 0x19ffc0: 0x3673ffff  ori         $s3, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FFBCu, 0x19FFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FFC4u;
label_19ffc4:
    // 0x19ffc4: 0xc600d000  lwc1        $f0, -0x3000($s0)
    ctx->pc = 0x19ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ffc8:
    // 0x19ffc8: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x19ffc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19ffcc:
    // 0x19ffcc: 0xc642d004  lwc1        $f2, -0x2FFC($s2)
    ctx->pc = 0x19ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ffd0:
    // 0x19ffd0: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x19ffd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19ffd4:
    // 0x19ffd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ffd8:
    // 0x19ffd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ffd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ffdc:
    // 0x19ffdc: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x19ffdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_19ffe0:
    // 0x19ffe0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19ffe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19ffe4:
    // 0x19ffe4: 0x26320044  addiu       $s2, $s1, 0x44
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_19ffe8:
    // 0x19ffe8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19ffe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19ffec:
    // 0x19ffec: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x19ffecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_19fff0:
    // 0x19fff0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19fff4:
    // 0x19fff4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x19fff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19fff8:
    // 0x19fff8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19fffc:
    // 0x19fffc: 0x50530086  beql        $v0, $s3, . + 4 + (0x86 << 2)
label_1a0000:
    if (ctx->pc == 0x1A0000u) {
        ctx->pc = 0x1A0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFFCu;
        // 0x1a0000: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0004u;
        goto label_1a0004;
    }
    ctx->pc = 0x19FFFCu;
    {
        const bool branch_taken_0x19fffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x19fffc) {
            ctx->pc = 0x1A0000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FFFCu;
            // 0x1a0000: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0218u;
            goto label_1a0218;
        }
    }
    ctx->pc = 0x1A0004u;
label_1a0004:
    // 0x1a0004: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a0004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0008:
    // 0x1a0008: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a0008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a000c:
    // 0x1a000c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a0010:
    // 0x1a0010: 0x40f809  jalr        $v0
label_1a0014:
    if (ctx->pc == 0x1A0014u) {
        ctx->pc = 0x1A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0010u;
        // 0x1a0014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0018u;
        goto label_1a0018;
    }
    ctx->pc = 0x1A0010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0018u);
        ctx->pc = 0x1A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0010u;
        // 0x1a0014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0010u, 0x1A0018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0018u;
label_1a0018:
    // 0x1a0018: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_1a001c:
    if (ctx->pc == 0x1A001Cu) {
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0020u;
        goto label_1a0020;
    }
    ctx->pc = 0x1A0018u;
    {
        const bool branch_taken_0x1a0018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0018) {
            ctx->pc = 0x1A0208u;
            goto label_1a0208;
        }
    }
    ctx->pc = 0x1A0020u;
label_1a0020:
    // 0x1a0020: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x1a0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
label_1a0024:
    // 0x1a0024: 0xc0e409a  jal         func_390268
label_1a0028:
    if (ctx->pc == 0x1A0028u) {
        ctx->pc = 0x1A0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0024u;
        // 0x1a0028: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A002Cu;
        goto label_1a002c;
    }
    ctx->pc = 0x1A0024u;
    SET_GPR_U32(ctx, 31, 0x1A002Cu);
    ctx->pc = 0x1A0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0024u;
    // 0x1a0028: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A0024u, 0x1A002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A002Cu;
label_1a002c:
    // 0x1a002c: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
label_1a0030:
    if (ctx->pc == 0x1A0030u) {
        ctx->pc = 0x1A0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A002Cu;
        // 0x1a0030: 0x8e050240  lw          $a1, 0x240($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0034u;
        goto label_1a0034;
    }
    ctx->pc = 0x1A002Cu;
    {
        const bool branch_taken_0x1a002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a002c) {
            ctx->pc = 0x1A0030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A002Cu;
            // 0x1a0030: 0x8e050240  lw          $a1, 0x240($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A020Cu;
            goto label_1a020c;
        }
    }
    ctx->pc = 0x1A0034u;
label_1a0034:
    // 0x1a0034: 0x8e221324  lw          $v0, 0x1324($s1)
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4900)));
label_1a0038:
    // 0x1a0038: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a003c:
    // 0x1a003c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0040:
    // 0x1a0040: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a0044:
    if (ctx->pc == 0x1A0044u) {
        ctx->pc = 0x1A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0040u;
        // 0x1a0044: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0048u;
        goto label_1a0048;
    }
    ctx->pc = 0x1A0040u;
    {
        const bool branch_taken_0x1a0040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0040) {
            ctx->pc = 0x1A0044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0040u;
            // 0x1a0044: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0048u;
            goto label_1a0048;
        }
    }
    ctx->pc = 0x1A0048u;
label_1a0048:
    // 0x1a0048: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a0048u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1a004c:
    // 0x1a004c: 0x1012  mflo        $v0
    ctx->pc = 0x1a004cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1a0050:
    // 0x1a0050: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a0054:
    if (ctx->pc == 0x1A0054u) {
        ctx->pc = 0x1A0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0050u;
        // 0x1a0054: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0058u;
        goto label_1a0058;
    }
    ctx->pc = 0x1A0050u;
    {
        const bool branch_taken_0x1a0050 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0050u;
        // 0x1a0054: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0050) {
            ctx->pc = 0x1A006Cu;
            goto label_1a006c;
        }
    }
    ctx->pc = 0x1A0058u;
label_1a0058:
    // 0x1a0058: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a0058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a005c:
    // 0x1a005c: 0x0  nop
    ctx->pc = 0x1a005cu;
    // NOP
label_1a0060:
    // 0x1a0060: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a0060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1a0064:
    // 0x1a0064: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a0068:
    if (ctx->pc == 0x1A0068u) {
        ctx->pc = 0x1A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0064u;
        // 0x1a0068: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A006Cu;
        goto label_1a006c;
    }
    ctx->pc = 0x1A0064u;
    {
        const bool branch_taken_0x1a0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0064u;
        // 0x1a0068: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0064) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A006Cu;
label_1a006c:
    // 0x1a006c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a0070:
    // 0x1a0070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0074:
    // 0x1a0074: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a0074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a0078:
    // 0x1a0078: 0x0  nop
    ctx->pc = 0x1a0078u;
    // NOP
label_1a007c:
    // 0x1a007c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a007cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1a0080:
    // 0x1a0080: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1a0080u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1a0084:
    // 0x1a0084: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a0084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a0088:
    // 0x1a0088: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1a008c:
    if (ctx->pc == 0x1A008Cu) {
        ctx->pc = 0x1A008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0088u;
        // 0x1a008c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0090u;
        goto label_1a0090;
    }
    ctx->pc = 0x1A0088u;
    {
        const bool branch_taken_0x1a0088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0088) {
            ctx->pc = 0x1A008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0088u;
            // 0x1a008c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0090u;
            goto label_1a0090;
        }
    }
    ctx->pc = 0x1A0090u;
label_1a0090:
    // 0x1a0090: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0090u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0094:
    // 0x1a0094: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0094u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0098:
    // 0x1a0098: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a009c:
    if (ctx->pc == 0x1A009Cu) {
        ctx->pc = 0x1A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0098u;
        // 0x1a009c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00A0u;
        goto label_1a00a0;
    }
    ctx->pc = 0x1A0098u;
    {
        const bool branch_taken_0x1a0098 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0098u;
        // 0x1a009c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0098) {
            ctx->pc = 0x1A00B4u;
            goto label_1a00b4;
        }
    }
    ctx->pc = 0x1A00A0u;
label_1a00a0:
    // 0x1a00a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a00a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a00a4:
    // 0x1a00a4: 0x0  nop
    ctx->pc = 0x1a00a4u;
    // NOP
label_1a00a8:
    // 0x1a00a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a00a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a00ac:
    // 0x1a00ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a00b0:
    if (ctx->pc == 0x1A00B0u) {
        ctx->pc = 0x1A00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00ACu;
        // 0x1a00b0: 0xc6211310  lwc1        $f1, 0x1310($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00B4u;
        goto label_1a00b4;
    }
    ctx->pc = 0x1A00ACu;
    {
        const bool branch_taken_0x1a00ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00ACu;
        // 0x1a00b0: 0xc6211310  lwc1        $f1, 0x1310($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00ac) {
            ctx->pc = 0x1A00D0u;
            goto label_1a00d0;
        }
    }
    ctx->pc = 0x1A00B4u;
label_1a00b4:
    // 0x1a00b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a00b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a00b8:
    // 0x1a00b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a00b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a00bc:
    // 0x1a00bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a00bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a00c0:
    // 0x1a00c0: 0x0  nop
    ctx->pc = 0x1a00c0u;
    // NOP
label_1a00c4:
    // 0x1a00c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a00c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a00c8:
    // 0x1a00c8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a00c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a00cc:
    // 0x1a00cc: 0xc6211310  lwc1        $f1, 0x1310($s1)
    ctx->pc = 0x1a00ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a00d0:
    // 0x1a00d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a00d4:
    // 0x1a00d4: 0xc6201318  lwc1        $f0, 0x1318($s1)
    ctx->pc = 0x1a00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a00d8:
    // 0x1a00d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a00dc:
    // 0x1a00dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a00dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1a00e0:
    // 0x1a00e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a00e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a00e4:
    // 0x1a00e4: 0xc442cfec  lwc1        $f2, -0x3014($v0)
    ctx->pc = 0x1a00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a00e8:
    // 0x1a00e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1a00e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1a00ec:
    // 0x1a00ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a00f0:
    // 0x1a00f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1a00f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a00f4:
    // 0x1a00f4: 0xc443cff0  lwc1        $f3, -0x3010($v0)
    ctx->pc = 0x1a00f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a00f8:
    // 0x1a00f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a00f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a00fc:
    // 0x1a00fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a0100:
    // 0x1a0100: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a0100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a0104:
    // 0x1a0104: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1a0104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1a0108:
    // 0x1a0108: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a0108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a010c:
    // 0x1a010c: 0xc136b18  jal         func_4DAC60
label_1a0110:
    if (ctx->pc == 0x1A0110u) {
        ctx->pc = 0x1A0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A010Cu;
        // 0x1a0110: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0114u;
        goto label_1a0114;
    }
    ctx->pc = 0x1A010Cu;
    SET_GPR_U32(ctx, 31, 0x1A0114u);
    ctx->pc = 0x1A0110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A010Cu;
    // 0x1a0110: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1A010Cu, 0x1A0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0114u;
label_1a0114:
    // 0x1a0114: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1a0114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a0118:
    // 0x1a0118: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1a0118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a011c:
    // 0x1a011c: 0x2c830004  sltiu       $v1, $a0, 0x4
    ctx->pc = 0x1a011cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1a0120:
    // 0x1a0120: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a0120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1a0124:
    // 0x1a0124: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1a0128:
    if (ctx->pc == 0x1A0128u) {
        ctx->pc = 0x1A0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0124u;
        // 0x1a0128: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A012Cu;
        goto label_1a012c;
    }
    ctx->pc = 0x1A0124u;
    {
        const bool branch_taken_0x1a0124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0124u;
        // 0x1a0128: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0124) {
            ctx->pc = 0x1A018Cu;
            goto label_1a018c;
        }
    }
    ctx->pc = 0x1A012Cu;
label_1a012c:
    // 0x1a012c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0130:
    // 0x1a0130: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a0130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a0134:
    // 0x1a0134: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a0138:
    if (ctx->pc == 0x1A0138u) {
        ctx->pc = 0x1A0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0134u;
        // 0x1a0138: 0x2445d008  addiu       $a1, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A013Cu;
        goto label_1a013c;
    }
    ctx->pc = 0x1A0134u;
    {
        const bool branch_taken_0x1a0134 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0134u;
        // 0x1a0138: 0x2445d008  addiu       $a1, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0134) {
            ctx->pc = 0x1A0150u;
            goto label_1a0150;
        }
    }
    ctx->pc = 0x1A013Cu;
label_1a013c:
    // 0x1a013c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1a013cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a0140:
    // 0x1a0140: 0x0  nop
    ctx->pc = 0x1a0140u;
    // NOP
label_1a0144:
    // 0x1a0144: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a0144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1a0148:
    // 0x1a0148: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a014c:
    if (ctx->pc == 0x1A014Cu) {
        ctx->pc = 0x1A014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0148u;
        // 0x1a014c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0150u;
        goto label_1a0150;
    }
    ctx->pc = 0x1A0148u;
    {
        const bool branch_taken_0x1a0148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0148u;
        // 0x1a014c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0148) {
            ctx->pc = 0x1A0170u;
            goto label_1a0170;
        }
    }
    ctx->pc = 0x1A0150u;
label_1a0150:
    // 0x1a0150: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1a0150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1a0154:
    // 0x1a0154: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a0158:
    // 0x1a0158: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a015c:
    // 0x1a015c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a015cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a0160:
    // 0x1a0160: 0x0  nop
    ctx->pc = 0x1a0160u;
    // NOP
label_1a0164:
    // 0x1a0164: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a0164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1a0168:
    // 0x1a0168: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1a0168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1a016c:
    // 0x1a016c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0170:
    // 0x1a0170: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1a0170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a0174:
    // 0x1a0174: 0xc440d00c  lwc1        $f0, -0x2FF4($v0)
    ctx->pc = 0x1a0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0178:
    // 0x1a0178: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a017c:
    // 0x1a017c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1a017cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1a0180:
    // 0x1a0180: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a0180u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a0184:
    // 0x1a0184: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a0184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a0188:
    // 0x1a0188: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1a0188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a018c:
    // 0x1a018c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0190:
    // 0x1a0190: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a0190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a0194:
    // 0x1a0194: 0xc44ccfe4  lwc1        $f12, -0x301C($v0)
    ctx->pc = 0x1a0194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a0198:
    // 0x1a0198: 0x262512f0  addiu       $a1, $s1, 0x12F0
    ctx->pc = 0x1a0198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4848));
label_1a019c:
    // 0x1a019c: 0xc136b24  jal         func_4DAC90
label_1a01a0:
    if (ctx->pc == 0x1A01A0u) {
        ctx->pc = 0x1A01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A019Cu;
        // 0x1a01a0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01A4u;
        goto label_1a01a4;
    }
    ctx->pc = 0x1A019Cu;
    SET_GPR_U32(ctx, 31, 0x1A01A4u);
    ctx->pc = 0x1A01A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A019Cu;
    // 0x1a01a0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1A019Cu, 0x1A01A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01A4u;
label_1a01a4:
    // 0x1a01a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a01a8:
    // 0x1a01a8: 0xc6211300  lwc1        $f1, 0x1300($s1)
    ctx->pc = 0x1a01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a01ac:
    // 0x1a01ac: 0xc44dcffc  lwc1        $f13, -0x3004($v0)
    ctx->pc = 0x1a01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a01b0:
    // 0x1a01b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a01b4:
    // 0x1a01b4: 0xc6201304  lwc1        $f0, 0x1304($s1)
    ctx->pc = 0x1a01b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a01b8:
    // 0x1a01b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01bc:
    // 0x1a01bc: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x1a01bcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_1a01c0:
    // 0x1a01c0: 0xc46ccfe8  lwc1        $f12, -0x3018($v1)
    ctx->pc = 0x1a01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a01c4:
    // 0x1a01c4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1a01c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a01c8:
    // 0x1a01c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a01c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a01cc:
    // 0x1a01cc: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1a01ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1a01d0:
    // 0x1a01d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1a01d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a01d4:
    // 0x1a01d4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1a01d4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1a01d8:
    // 0x1a01d8: 0xc0682d8  jal         func_1A0B60
label_1a01dc:
    if (ctx->pc == 0x1A01DCu) {
        ctx->pc = 0x1A01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D8u;
        // 0x1a01dc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01E0u;
        goto label_1a01e0;
    }
    ctx->pc = 0x1A01D8u;
    SET_GPR_U32(ctx, 31, 0x1A01E0u);
    ctx->pc = 0x1A01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01D8u;
    // 0x1a01dc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B60u, 0x1A01D8u, 0x1A01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01E0u;
label_1a01e0:
    // 0x1a01e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a01e4:
    // 0x1a01e4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a01e8:
    // 0x1a01e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a01ec:
    // 0x1a01ec: 0x60f809  jalr        $v1
label_1a01f0:
    if (ctx->pc == 0x1A01F0u) {
        ctx->pc = 0x1A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ECu;
        // 0x1a01f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01F4u;
        goto label_1a01f4;
    }
    ctx->pc = 0x1A01ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A01F4u);
        ctx->pc = 0x1A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ECu;
        // 0x1a01f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01ECu, 0x1A01F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A01F4u;
label_1a01f4:
    // 0x1a01f4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a01f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a01f8:
    // 0x1a01f8: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x1a01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a01fc:
    // 0x1a01fc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a01fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a0200:
    // 0x1a0200: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a0204:
    if (ctx->pc == 0x1A0204u) {
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0xe60101d0  swc1        $f1, 0x1D0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0208u;
        goto label_1a0208;
    }
    ctx->pc = 0x1A0200u;
    {
        const bool branch_taken_0x1a0200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0xe60101d0  swc1        $f1, 0x1D0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0200) {
            ctx->pc = 0x1A0214u;
            goto label_1a0214;
        }
    }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0x8e050240  lw          $a1, 0x240($s0)
    ctx->pc = 0x1a0208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
label_1a020c:
    // 0x1a020c: 0xc0681fc  jal         func_1A07F0
label_1a0210:
    if (ctx->pc == 0x1A0210u) {
        ctx->pc = 0x1A0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A020Cu;
        // 0x1a0210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0214u;
        goto label_1a0214;
    }
    ctx->pc = 0x1A020Cu;
    SET_GPR_U32(ctx, 31, 0x1A0214u);
    ctx->pc = 0x1A0210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A020Cu;
    // 0x1a0210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A07F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A07F0u, 0x1A020Cu, 0x1A0214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0214u;
label_1a0214:
    // 0x1a0214: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1a0218:
    // 0x1a0218: 0x26100250  addiu       $s0, $s0, 0x250
    ctx->pc = 0x1a0218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1a021c:
    // 0x1a021c: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1a021cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a0220:
    // 0x1a0220: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
label_1a0224:
    if (ctx->pc == 0x1A0224u) {
        ctx->pc = 0x1A0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0220u;
        // 0x1a0224: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0228u;
        goto label_1a0228;
    }
    ctx->pc = 0x1A0220u;
    {
        const bool branch_taken_0x1a0220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0220u;
        // 0x1a0224: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0220) {
            ctx->pc = 0x19FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fff8;
        }
    }
    ctx->pc = 0x1A0228u;
label_1a0228:
    // 0x1a0228: 0x8e221324  lw          $v0, 0x1324($s1)
    ctx->pc = 0x1a0228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4900)));
label_1a022c:
    // 0x1a022c: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x1a022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1a0230:
    // 0x1a0230: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a0230u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1a0234:
    // 0x1a0234: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a0238:
    if (ctx->pc == 0x1A0238u) {
        ctx->pc = 0x1A0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0234u;
        // 0x1a0238: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A023Cu;
        goto label_1a023c;
    }
    ctx->pc = 0x1A0234u;
    {
        const bool branch_taken_0x1a0234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0234) {
            ctx->pc = 0x1A0238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0234u;
            // 0x1a0238: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A023Cu;
            goto label_1a023c;
        }
    }
    ctx->pc = 0x1A023Cu;
label_1a023c:
    // 0x1a023c: 0x2012  mflo        $a0
    ctx->pc = 0x1a023cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1a0240:
    // 0x1a0240: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a0244:
    if (ctx->pc == 0x1A0244u) {
        ctx->pc = 0x1A0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0240u;
        // 0x1a0244: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0248u;
        goto label_1a0248;
    }
    ctx->pc = 0x1A0240u;
    {
        const bool branch_taken_0x1a0240 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0240u;
        // 0x1a0244: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0240) {
            ctx->pc = 0x1A025Cu;
            goto label_1a025c;
        }
    }
    ctx->pc = 0x1A0248u;
label_1a0248:
    // 0x1a0248: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a024c:
    // 0x1a024c: 0x0  nop
    ctx->pc = 0x1a024cu;
    // NOP
label_1a0250:
    // 0x1a0250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a0250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a0254:
    // 0x1a0254: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0258:
    if (ctx->pc == 0x1A0258u) {
        ctx->pc = 0x1A025Cu;
        goto label_1a025c;
    }
    ctx->pc = 0x1A0254u;
    {
        const bool branch_taken_0x1a0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0254) {
            ctx->pc = 0x1A0274u;
            goto label_1a0274;
        }
    }
    ctx->pc = 0x1A025Cu;
label_1a025c:
    // 0x1a025c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a025cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a0260:
    // 0x1a0260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0264:
    // 0x1a0264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0268:
    // 0x1a0268: 0x0  nop
    ctx->pc = 0x1a0268u;
    // NOP
label_1a026c:
    // 0x1a026c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a026cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a0270:
    // 0x1a0270: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a0270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a0274:
    // 0x1a0274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a0278:
    // 0x1a0278: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a0278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1a027c:
    // 0x1a027c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0280:
    // 0x1a0280: 0xc6221318  lwc1        $f2, 0x1318($s1)
    ctx->pc = 0x1a0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a0284:
    // 0x1a0284: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a0284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a0288:
    // 0x1a0288: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1a0288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1a028c:
    // 0x1a028c: 0xc443cff0  lwc1        $f3, -0x3010($v0)
    ctx->pc = 0x1a028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a0290:
    // 0x1a0290: 0xc464cff8  lwc1        $f4, -0x3008($v1)
    ctx->pc = 0x1a0290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a0294:
    // 0x1a0294: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a0294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0298:
    // 0x1a0298: 0xc441cff4  lwc1        $f1, -0x300C($v0)
    ctx->pc = 0x1a0298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a029c:
    // 0x1a029c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a02a0:
    // 0x1a02a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a02a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a02a4:
    // 0x1a02a4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a02a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a02a8:
    // 0x1a02a8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a02a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a02ac:
    // 0x1a02ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a02acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a02b0:
    // 0x1a02b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a02b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a02b4:
    // 0x1a02b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a02b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a02b8:
    // 0x1a02b8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1a02b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1a02bc:
    // 0x1a02bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a02bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a02c0:
    // 0x1a02c0: 0xc136b18  jal         func_4DAC60
label_1a02c4:
    if (ctx->pc == 0x1A02C4u) {
        ctx->pc = 0x1A02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C0u;
        // 0x1a02c4: 0xe6a5000c  swc1        $f5, 0xC($s5) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02C8u;
        goto label_1a02c8;
    }
    ctx->pc = 0x1A02C0u;
    SET_GPR_U32(ctx, 31, 0x1A02C8u);
    ctx->pc = 0x1A02C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02C0u;
    // 0x1a02c4: 0xe6a5000c  swc1        $f5, 0xC($s5) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1A02C0u, 0x1A02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02C8u;
label_1a02c8:
    // 0x1a02c8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1a02c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a02cc:
    // 0x1a02cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a02d0:
    // 0x1a02d0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1a02d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a02d4:
    // 0x1a02d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1a02d8:
    // 0x1a02d8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1a02dc:
    if (ctx->pc == 0x1A02DCu) {
        ctx->pc = 0x1A02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02D8u;
        // 0x1a02dc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02E0u;
        goto label_1a02e0;
    }
    ctx->pc = 0x1A02D8u;
    {
        const bool branch_taken_0x1a02d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02D8u;
        // 0x1a02dc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02d8) {
            ctx->pc = 0x1A02ECu;
            goto label_1a02ec;
        }
    }
    ctx->pc = 0x1A02E0u;
label_1a02e0:
    // 0x1a02e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a02e4:
    // 0x1a02e4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_1a02e8:
    if (ctx->pc == 0x1A02E8u) {
        ctx->pc = 0x1A02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02E4u;
        // 0x1a02e8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02ECu;
        goto label_1a02ec;
    }
    ctx->pc = 0x1A02E4u;
    {
        const bool branch_taken_0x1a02e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02E4u;
        // 0x1a02e8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02e4) {
            ctx->pc = 0x1A02F0u;
            goto label_1a02f0;
        }
    }
    ctx->pc = 0x1A02ECu;
label_1a02ec:
    // 0x1a02ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a02f0:
    // 0x1a02f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a02f4:
    // 0x1a02f4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1a02f8:
    // 0x1a02f8: 0x2444d010  addiu       $a0, $v0, -0x2FF0
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955024));
label_1a02fc:
    // 0x1a02fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1a02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a0300:
    // 0x1a0300: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a0304:
    if (ctx->pc == 0x1A0304u) {
        ctx->pc = 0x1A0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0300u;
        // 0x1a0304: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0308u;
        goto label_1a0308;
    }
    ctx->pc = 0x1A0300u;
    {
        const bool branch_taken_0x1a0300 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0300u;
        // 0x1a0304: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0300) {
            ctx->pc = 0x1A031Cu;
            goto label_1a031c;
        }
    }
    ctx->pc = 0x1A0308u;
label_1a0308:
    // 0x1a0308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a030c:
    // 0x1a030c: 0x0  nop
    ctx->pc = 0x1a030cu;
    // NOP
label_1a0310:
    // 0x1a0310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a0310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a0314:
    // 0x1a0314: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a0318:
    if (ctx->pc == 0x1A0318u) {
        ctx->pc = 0x1A0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0314u;
        // 0x1a0318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A031Cu;
        goto label_1a031c;
    }
    ctx->pc = 0x1A0314u;
    {
        const bool branch_taken_0x1a0314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0314u;
        // 0x1a0318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0314) {
            ctx->pc = 0x1A0338u;
            goto label_1a0338;
        }
    }
    ctx->pc = 0x1A031Cu;
label_1a031c:
    // 0x1a031c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a0320:
    // 0x1a0320: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0324:
    // 0x1a0324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0328:
    // 0x1a0328: 0x0  nop
    ctx->pc = 0x1a0328u;
    // NOP
label_1a032c:
    // 0x1a032c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a032cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a0330:
    // 0x1a0330: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a0330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a0334:
    // 0x1a0334: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a0334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0338:
    // 0x1a0338: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a0338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a033c:
    // 0x1a033c: 0xc442d014  lwc1        $f2, -0x2FEC($v0)
    ctx->pc = 0x1a033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a0340:
    // 0x1a0340: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a0340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a0344:
    // 0x1a0344: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a0348:
    // 0x1a0348: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a034c:
    // 0x1a034c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1a034cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a0350:
    // 0x1a0350: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0354:
    // 0x1a0354: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a0354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a0358:
    // 0x1a0358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a0358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a035c:
    // 0x1a035c: 0xc06e4dc  jal         func_1B9370
label_1a0360:
    if (ctx->pc == 0x1A0360u) {
        ctx->pc = 0x1A0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A035Cu;
        // 0x1a0360: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0364u;
        goto label_1a0364;
    }
    ctx->pc = 0x1A035Cu;
    SET_GPR_U32(ctx, 31, 0x1A0364u);
    ctx->pc = 0x1A0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A035Cu;
    // 0x1a0360: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1A035Cu, 0x1A0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0364u;
label_1a0364:
    // 0x1a0364: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a0368:
    // 0x1a0368: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a0368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a036c:
    // 0x1a036c: 0xc06e552  jal         func_1B9548
label_1a0370:
    if (ctx->pc == 0x1A0370u) {
        ctx->pc = 0x1A0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A036Cu;
        // 0x1a0370: 0xa3c2018c  sb          $v0, 0x18C($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 396), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0374u;
        goto label_1a0374;
    }
    ctx->pc = 0x1A036Cu;
    SET_GPR_U32(ctx, 31, 0x1A0374u);
    ctx->pc = 0x1A0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A036Cu;
    // 0x1a0370: 0xa3c2018c  sb          $v0, 0x18C($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 396), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1A036Cu, 0x1A0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0374u;
label_1a0374:
    // 0x1a0374: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1a0374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a0378:
    // 0x1a0378: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1a0378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a037c:
    // 0x1a037c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1a037cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a0380:
    // 0x1a0380: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1a0380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a0384:
    // 0x1a0384: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1a0384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a0388:
    // 0x1a0388: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1a0388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a038c:
    // 0x1a038c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1a038cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a0390:
    // 0x1a0390: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a0390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a0394:
    // 0x1a0394: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1a0394u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0398:
    // 0x1a0398: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a0398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a039c:
    // 0x1a039c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1a039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a03a0:
    // 0x1a03a0: 0x3e00008  jr          $ra
label_1a03a4:
    if (ctx->pc == 0x1A03A4u) {
        ctx->pc = 0x1A03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A0u;
        // 0x1a03a4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03A8u;
        goto label_fallthrough_0x1a03a0;
    }
    ctx->pc = 0x1A03A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A0u;
        // 0x1a03a4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A03A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a03a0:
    ctx->pc = 0x1A03A8u;
}
