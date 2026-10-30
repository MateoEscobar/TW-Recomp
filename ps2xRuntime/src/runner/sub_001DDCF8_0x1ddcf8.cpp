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

// Function: sub_001DDCF8
// Address: 0x1ddcf8 - 0x1de488
void sub_001DDCF8_0x1ddcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDCF8_0x1ddcf8");
#endif

    switch (ctx->pc) {
        case 0x1ddcf8u: goto label_1ddcf8;
        case 0x1ddcfcu: goto label_1ddcfc;
        case 0x1ddd00u: goto label_1ddd00;
        case 0x1ddd04u: goto label_1ddd04;
        case 0x1ddd08u: goto label_1ddd08;
        case 0x1ddd0cu: goto label_1ddd0c;
        case 0x1ddd10u: goto label_1ddd10;
        case 0x1ddd14u: goto label_1ddd14;
        case 0x1ddd18u: goto label_1ddd18;
        case 0x1ddd1cu: goto label_1ddd1c;
        case 0x1ddd20u: goto label_1ddd20;
        case 0x1ddd24u: goto label_1ddd24;
        case 0x1ddd28u: goto label_1ddd28;
        case 0x1ddd2cu: goto label_1ddd2c;
        case 0x1ddd30u: goto label_1ddd30;
        case 0x1ddd34u: goto label_1ddd34;
        case 0x1ddd38u: goto label_1ddd38;
        case 0x1ddd3cu: goto label_1ddd3c;
        case 0x1ddd40u: goto label_1ddd40;
        case 0x1ddd44u: goto label_1ddd44;
        case 0x1ddd48u: goto label_1ddd48;
        case 0x1ddd4cu: goto label_1ddd4c;
        case 0x1ddd50u: goto label_1ddd50;
        case 0x1ddd54u: goto label_1ddd54;
        case 0x1ddd58u: goto label_1ddd58;
        case 0x1ddd5cu: goto label_1ddd5c;
        case 0x1ddd60u: goto label_1ddd60;
        case 0x1ddd64u: goto label_1ddd64;
        case 0x1ddd68u: goto label_1ddd68;
        case 0x1ddd6cu: goto label_1ddd6c;
        case 0x1ddd70u: goto label_1ddd70;
        case 0x1ddd74u: goto label_1ddd74;
        case 0x1ddd78u: goto label_1ddd78;
        case 0x1ddd7cu: goto label_1ddd7c;
        case 0x1ddd80u: goto label_1ddd80;
        case 0x1ddd84u: goto label_1ddd84;
        case 0x1ddd88u: goto label_1ddd88;
        case 0x1ddd8cu: goto label_1ddd8c;
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1ddd94u: goto label_1ddd94;
        case 0x1ddd98u: goto label_1ddd98;
        case 0x1ddd9cu: goto label_1ddd9c;
        case 0x1ddda0u: goto label_1ddda0;
        case 0x1ddda4u: goto label_1ddda4;
        case 0x1ddda8u: goto label_1ddda8;
        case 0x1dddacu: goto label_1dddac;
        case 0x1dddb0u: goto label_1dddb0;
        case 0x1dddb4u: goto label_1dddb4;
        case 0x1dddb8u: goto label_1dddb8;
        case 0x1dddbcu: goto label_1dddbc;
        case 0x1dddc0u: goto label_1dddc0;
        case 0x1dddc4u: goto label_1dddc4;
        case 0x1dddc8u: goto label_1dddc8;
        case 0x1dddccu: goto label_1dddcc;
        case 0x1dddd0u: goto label_1dddd0;
        case 0x1dddd4u: goto label_1dddd4;
        case 0x1dddd8u: goto label_1dddd8;
        case 0x1ddddcu: goto label_1ddddc;
        case 0x1ddde0u: goto label_1ddde0;
        case 0x1ddde4u: goto label_1ddde4;
        case 0x1ddde8u: goto label_1ddde8;
        case 0x1dddecu: goto label_1dddec;
        case 0x1dddf0u: goto label_1dddf0;
        case 0x1dddf4u: goto label_1dddf4;
        case 0x1dddf8u: goto label_1dddf8;
        case 0x1dddfcu: goto label_1dddfc;
        case 0x1dde00u: goto label_1dde00;
        case 0x1dde04u: goto label_1dde04;
        case 0x1dde08u: goto label_1dde08;
        case 0x1dde0cu: goto label_1dde0c;
        case 0x1dde10u: goto label_1dde10;
        case 0x1dde14u: goto label_1dde14;
        case 0x1dde18u: goto label_1dde18;
        case 0x1dde1cu: goto label_1dde1c;
        case 0x1dde20u: goto label_1dde20;
        case 0x1dde24u: goto label_1dde24;
        case 0x1dde28u: goto label_1dde28;
        case 0x1dde2cu: goto label_1dde2c;
        case 0x1dde30u: goto label_1dde30;
        case 0x1dde34u: goto label_1dde34;
        case 0x1dde38u: goto label_1dde38;
        case 0x1dde3cu: goto label_1dde3c;
        case 0x1dde40u: goto label_1dde40;
        case 0x1dde44u: goto label_1dde44;
        case 0x1dde48u: goto label_1dde48;
        case 0x1dde4cu: goto label_1dde4c;
        case 0x1dde50u: goto label_1dde50;
        case 0x1dde54u: goto label_1dde54;
        case 0x1dde58u: goto label_1dde58;
        case 0x1dde5cu: goto label_1dde5c;
        case 0x1dde60u: goto label_1dde60;
        case 0x1dde64u: goto label_1dde64;
        case 0x1dde68u: goto label_1dde68;
        case 0x1dde6cu: goto label_1dde6c;
        case 0x1dde70u: goto label_1dde70;
        case 0x1dde74u: goto label_1dde74;
        case 0x1dde78u: goto label_1dde78;
        case 0x1dde7cu: goto label_1dde7c;
        case 0x1dde80u: goto label_1dde80;
        case 0x1dde84u: goto label_1dde84;
        case 0x1dde88u: goto label_1dde88;
        case 0x1dde8cu: goto label_1dde8c;
        case 0x1dde90u: goto label_1dde90;
        case 0x1dde94u: goto label_1dde94;
        case 0x1dde98u: goto label_1dde98;
        case 0x1dde9cu: goto label_1dde9c;
        case 0x1ddea0u: goto label_1ddea0;
        case 0x1ddea4u: goto label_1ddea4;
        case 0x1ddea8u: goto label_1ddea8;
        case 0x1ddeacu: goto label_1ddeac;
        case 0x1ddeb0u: goto label_1ddeb0;
        case 0x1ddeb4u: goto label_1ddeb4;
        case 0x1ddeb8u: goto label_1ddeb8;
        case 0x1ddebcu: goto label_1ddebc;
        case 0x1ddec0u: goto label_1ddec0;
        case 0x1ddec4u: goto label_1ddec4;
        case 0x1ddec8u: goto label_1ddec8;
        case 0x1ddeccu: goto label_1ddecc;
        case 0x1dded0u: goto label_1dded0;
        case 0x1dded4u: goto label_1dded4;
        case 0x1dded8u: goto label_1dded8;
        case 0x1ddedcu: goto label_1ddedc;
        case 0x1ddee0u: goto label_1ddee0;
        case 0x1ddee4u: goto label_1ddee4;
        case 0x1ddee8u: goto label_1ddee8;
        case 0x1ddeecu: goto label_1ddeec;
        case 0x1ddef0u: goto label_1ddef0;
        case 0x1ddef4u: goto label_1ddef4;
        case 0x1ddef8u: goto label_1ddef8;
        case 0x1ddefcu: goto label_1ddefc;
        case 0x1ddf00u: goto label_1ddf00;
        case 0x1ddf04u: goto label_1ddf04;
        case 0x1ddf08u: goto label_1ddf08;
        case 0x1ddf0cu: goto label_1ddf0c;
        case 0x1ddf10u: goto label_1ddf10;
        case 0x1ddf14u: goto label_1ddf14;
        case 0x1ddf18u: goto label_1ddf18;
        case 0x1ddf1cu: goto label_1ddf1c;
        case 0x1ddf20u: goto label_1ddf20;
        case 0x1ddf24u: goto label_1ddf24;
        case 0x1ddf28u: goto label_1ddf28;
        case 0x1ddf2cu: goto label_1ddf2c;
        case 0x1ddf30u: goto label_1ddf30;
        case 0x1ddf34u: goto label_1ddf34;
        case 0x1ddf38u: goto label_1ddf38;
        case 0x1ddf3cu: goto label_1ddf3c;
        case 0x1ddf40u: goto label_1ddf40;
        case 0x1ddf44u: goto label_1ddf44;
        case 0x1ddf48u: goto label_1ddf48;
        case 0x1ddf4cu: goto label_1ddf4c;
        case 0x1ddf50u: goto label_1ddf50;
        case 0x1ddf54u: goto label_1ddf54;
        case 0x1ddf58u: goto label_1ddf58;
        case 0x1ddf5cu: goto label_1ddf5c;
        case 0x1ddf60u: goto label_1ddf60;
        case 0x1ddf64u: goto label_1ddf64;
        case 0x1ddf68u: goto label_1ddf68;
        case 0x1ddf6cu: goto label_1ddf6c;
        case 0x1ddf70u: goto label_1ddf70;
        case 0x1ddf74u: goto label_1ddf74;
        case 0x1ddf78u: goto label_1ddf78;
        case 0x1ddf7cu: goto label_1ddf7c;
        case 0x1ddf80u: goto label_1ddf80;
        case 0x1ddf84u: goto label_1ddf84;
        case 0x1ddf88u: goto label_1ddf88;
        case 0x1ddf8cu: goto label_1ddf8c;
        case 0x1ddf90u: goto label_1ddf90;
        case 0x1ddf94u: goto label_1ddf94;
        case 0x1ddf98u: goto label_1ddf98;
        case 0x1ddf9cu: goto label_1ddf9c;
        case 0x1ddfa0u: goto label_1ddfa0;
        case 0x1ddfa4u: goto label_1ddfa4;
        case 0x1ddfa8u: goto label_1ddfa8;
        case 0x1ddfacu: goto label_1ddfac;
        case 0x1ddfb0u: goto label_1ddfb0;
        case 0x1ddfb4u: goto label_1ddfb4;
        case 0x1ddfb8u: goto label_1ddfb8;
        case 0x1ddfbcu: goto label_1ddfbc;
        case 0x1ddfc0u: goto label_1ddfc0;
        case 0x1ddfc4u: goto label_1ddfc4;
        case 0x1ddfc8u: goto label_1ddfc8;
        case 0x1ddfccu: goto label_1ddfcc;
        case 0x1ddfd0u: goto label_1ddfd0;
        case 0x1ddfd4u: goto label_1ddfd4;
        case 0x1ddfd8u: goto label_1ddfd8;
        case 0x1ddfdcu: goto label_1ddfdc;
        case 0x1ddfe0u: goto label_1ddfe0;
        case 0x1ddfe4u: goto label_1ddfe4;
        case 0x1ddfe8u: goto label_1ddfe8;
        case 0x1ddfecu: goto label_1ddfec;
        case 0x1ddff0u: goto label_1ddff0;
        case 0x1ddff4u: goto label_1ddff4;
        case 0x1ddff8u: goto label_1ddff8;
        case 0x1ddffcu: goto label_1ddffc;
        case 0x1de000u: goto label_1de000;
        case 0x1de004u: goto label_1de004;
        case 0x1de008u: goto label_1de008;
        case 0x1de00cu: goto label_1de00c;
        case 0x1de010u: goto label_1de010;
        case 0x1de014u: goto label_1de014;
        case 0x1de018u: goto label_1de018;
        case 0x1de01cu: goto label_1de01c;
        case 0x1de020u: goto label_1de020;
        case 0x1de024u: goto label_1de024;
        case 0x1de028u: goto label_1de028;
        case 0x1de02cu: goto label_1de02c;
        case 0x1de030u: goto label_1de030;
        case 0x1de034u: goto label_1de034;
        case 0x1de038u: goto label_1de038;
        case 0x1de03cu: goto label_1de03c;
        case 0x1de040u: goto label_1de040;
        case 0x1de044u: goto label_1de044;
        case 0x1de048u: goto label_1de048;
        case 0x1de04cu: goto label_1de04c;
        case 0x1de050u: goto label_1de050;
        case 0x1de054u: goto label_1de054;
        case 0x1de058u: goto label_1de058;
        case 0x1de05cu: goto label_1de05c;
        case 0x1de060u: goto label_1de060;
        case 0x1de064u: goto label_1de064;
        case 0x1de068u: goto label_1de068;
        case 0x1de06cu: goto label_1de06c;
        case 0x1de070u: goto label_1de070;
        case 0x1de074u: goto label_1de074;
        case 0x1de078u: goto label_1de078;
        case 0x1de07cu: goto label_1de07c;
        case 0x1de080u: goto label_1de080;
        case 0x1de084u: goto label_1de084;
        case 0x1de088u: goto label_1de088;
        case 0x1de08cu: goto label_1de08c;
        case 0x1de090u: goto label_1de090;
        case 0x1de094u: goto label_1de094;
        case 0x1de098u: goto label_1de098;
        case 0x1de09cu: goto label_1de09c;
        case 0x1de0a0u: goto label_1de0a0;
        case 0x1de0a4u: goto label_1de0a4;
        case 0x1de0a8u: goto label_1de0a8;
        case 0x1de0acu: goto label_1de0ac;
        case 0x1de0b0u: goto label_1de0b0;
        case 0x1de0b4u: goto label_1de0b4;
        case 0x1de0b8u: goto label_1de0b8;
        case 0x1de0bcu: goto label_1de0bc;
        case 0x1de0c0u: goto label_1de0c0;
        case 0x1de0c4u: goto label_1de0c4;
        case 0x1de0c8u: goto label_1de0c8;
        case 0x1de0ccu: goto label_1de0cc;
        case 0x1de0d0u: goto label_1de0d0;
        case 0x1de0d4u: goto label_1de0d4;
        case 0x1de0d8u: goto label_1de0d8;
        case 0x1de0dcu: goto label_1de0dc;
        case 0x1de0e0u: goto label_1de0e0;
        case 0x1de0e4u: goto label_1de0e4;
        case 0x1de0e8u: goto label_1de0e8;
        case 0x1de0ecu: goto label_1de0ec;
        case 0x1de0f0u: goto label_1de0f0;
        case 0x1de0f4u: goto label_1de0f4;
        case 0x1de0f8u: goto label_1de0f8;
        case 0x1de0fcu: goto label_1de0fc;
        case 0x1de100u: goto label_1de100;
        case 0x1de104u: goto label_1de104;
        case 0x1de108u: goto label_1de108;
        case 0x1de10cu: goto label_1de10c;
        case 0x1de110u: goto label_1de110;
        case 0x1de114u: goto label_1de114;
        case 0x1de118u: goto label_1de118;
        case 0x1de11cu: goto label_1de11c;
        case 0x1de120u: goto label_1de120;
        case 0x1de124u: goto label_1de124;
        case 0x1de128u: goto label_1de128;
        case 0x1de12cu: goto label_1de12c;
        case 0x1de130u: goto label_1de130;
        case 0x1de134u: goto label_1de134;
        case 0x1de138u: goto label_1de138;
        case 0x1de13cu: goto label_1de13c;
        case 0x1de140u: goto label_1de140;
        case 0x1de144u: goto label_1de144;
        case 0x1de148u: goto label_1de148;
        case 0x1de14cu: goto label_1de14c;
        case 0x1de150u: goto label_1de150;
        case 0x1de154u: goto label_1de154;
        case 0x1de158u: goto label_1de158;
        case 0x1de15cu: goto label_1de15c;
        case 0x1de160u: goto label_1de160;
        case 0x1de164u: goto label_1de164;
        case 0x1de168u: goto label_1de168;
        case 0x1de16cu: goto label_1de16c;
        case 0x1de170u: goto label_1de170;
        case 0x1de174u: goto label_1de174;
        case 0x1de178u: goto label_1de178;
        case 0x1de17cu: goto label_1de17c;
        case 0x1de180u: goto label_1de180;
        case 0x1de184u: goto label_1de184;
        case 0x1de188u: goto label_1de188;
        case 0x1de18cu: goto label_1de18c;
        case 0x1de190u: goto label_1de190;
        case 0x1de194u: goto label_1de194;
        case 0x1de198u: goto label_1de198;
        case 0x1de19cu: goto label_1de19c;
        case 0x1de1a0u: goto label_1de1a0;
        case 0x1de1a4u: goto label_1de1a4;
        case 0x1de1a8u: goto label_1de1a8;
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1b0u: goto label_1de1b0;
        case 0x1de1b4u: goto label_1de1b4;
        case 0x1de1b8u: goto label_1de1b8;
        case 0x1de1bcu: goto label_1de1bc;
        case 0x1de1c0u: goto label_1de1c0;
        case 0x1de1c4u: goto label_1de1c4;
        case 0x1de1c8u: goto label_1de1c8;
        case 0x1de1ccu: goto label_1de1cc;
        case 0x1de1d0u: goto label_1de1d0;
        case 0x1de1d4u: goto label_1de1d4;
        case 0x1de1d8u: goto label_1de1d8;
        case 0x1de1dcu: goto label_1de1dc;
        case 0x1de1e0u: goto label_1de1e0;
        case 0x1de1e4u: goto label_1de1e4;
        case 0x1de1e8u: goto label_1de1e8;
        case 0x1de1ecu: goto label_1de1ec;
        case 0x1de1f0u: goto label_1de1f0;
        case 0x1de1f4u: goto label_1de1f4;
        case 0x1de1f8u: goto label_1de1f8;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de200u: goto label_1de200;
        case 0x1de204u: goto label_1de204;
        case 0x1de208u: goto label_1de208;
        case 0x1de20cu: goto label_1de20c;
        case 0x1de210u: goto label_1de210;
        case 0x1de214u: goto label_1de214;
        case 0x1de218u: goto label_1de218;
        case 0x1de21cu: goto label_1de21c;
        case 0x1de220u: goto label_1de220;
        case 0x1de224u: goto label_1de224;
        case 0x1de228u: goto label_1de228;
        case 0x1de22cu: goto label_1de22c;
        case 0x1de230u: goto label_1de230;
        case 0x1de234u: goto label_1de234;
        case 0x1de238u: goto label_1de238;
        case 0x1de23cu: goto label_1de23c;
        case 0x1de240u: goto label_1de240;
        case 0x1de244u: goto label_1de244;
        case 0x1de248u: goto label_1de248;
        case 0x1de24cu: goto label_1de24c;
        case 0x1de250u: goto label_1de250;
        case 0x1de254u: goto label_1de254;
        case 0x1de258u: goto label_1de258;
        case 0x1de25cu: goto label_1de25c;
        case 0x1de260u: goto label_1de260;
        case 0x1de264u: goto label_1de264;
        case 0x1de268u: goto label_1de268;
        case 0x1de26cu: goto label_1de26c;
        case 0x1de270u: goto label_1de270;
        case 0x1de274u: goto label_1de274;
        case 0x1de278u: goto label_1de278;
        case 0x1de27cu: goto label_1de27c;
        case 0x1de280u: goto label_1de280;
        case 0x1de284u: goto label_1de284;
        case 0x1de288u: goto label_1de288;
        case 0x1de28cu: goto label_1de28c;
        case 0x1de290u: goto label_1de290;
        case 0x1de294u: goto label_1de294;
        case 0x1de298u: goto label_1de298;
        case 0x1de29cu: goto label_1de29c;
        case 0x1de2a0u: goto label_1de2a0;
        case 0x1de2a4u: goto label_1de2a4;
        case 0x1de2a8u: goto label_1de2a8;
        case 0x1de2acu: goto label_1de2ac;
        case 0x1de2b0u: goto label_1de2b0;
        case 0x1de2b4u: goto label_1de2b4;
        case 0x1de2b8u: goto label_1de2b8;
        case 0x1de2bcu: goto label_1de2bc;
        case 0x1de2c0u: goto label_1de2c0;
        case 0x1de2c4u: goto label_1de2c4;
        case 0x1de2c8u: goto label_1de2c8;
        case 0x1de2ccu: goto label_1de2cc;
        case 0x1de2d0u: goto label_1de2d0;
        case 0x1de2d4u: goto label_1de2d4;
        case 0x1de2d8u: goto label_1de2d8;
        case 0x1de2dcu: goto label_1de2dc;
        case 0x1de2e0u: goto label_1de2e0;
        case 0x1de2e4u: goto label_1de2e4;
        case 0x1de2e8u: goto label_1de2e8;
        case 0x1de2ecu: goto label_1de2ec;
        case 0x1de2f0u: goto label_1de2f0;
        case 0x1de2f4u: goto label_1de2f4;
        case 0x1de2f8u: goto label_1de2f8;
        case 0x1de2fcu: goto label_1de2fc;
        case 0x1de300u: goto label_1de300;
        case 0x1de304u: goto label_1de304;
        case 0x1de308u: goto label_1de308;
        case 0x1de30cu: goto label_1de30c;
        case 0x1de310u: goto label_1de310;
        case 0x1de314u: goto label_1de314;
        case 0x1de318u: goto label_1de318;
        case 0x1de31cu: goto label_1de31c;
        case 0x1de320u: goto label_1de320;
        case 0x1de324u: goto label_1de324;
        case 0x1de328u: goto label_1de328;
        case 0x1de32cu: goto label_1de32c;
        case 0x1de330u: goto label_1de330;
        case 0x1de334u: goto label_1de334;
        case 0x1de338u: goto label_1de338;
        case 0x1de33cu: goto label_1de33c;
        case 0x1de340u: goto label_1de340;
        case 0x1de344u: goto label_1de344;
        case 0x1de348u: goto label_1de348;
        case 0x1de34cu: goto label_1de34c;
        case 0x1de350u: goto label_1de350;
        case 0x1de354u: goto label_1de354;
        case 0x1de358u: goto label_1de358;
        case 0x1de35cu: goto label_1de35c;
        case 0x1de360u: goto label_1de360;
        case 0x1de364u: goto label_1de364;
        case 0x1de368u: goto label_1de368;
        case 0x1de36cu: goto label_1de36c;
        case 0x1de370u: goto label_1de370;
        case 0x1de374u: goto label_1de374;
        case 0x1de378u: goto label_1de378;
        case 0x1de37cu: goto label_1de37c;
        case 0x1de380u: goto label_1de380;
        case 0x1de384u: goto label_1de384;
        case 0x1de388u: goto label_1de388;
        case 0x1de38cu: goto label_1de38c;
        case 0x1de390u: goto label_1de390;
        case 0x1de394u: goto label_1de394;
        case 0x1de398u: goto label_1de398;
        case 0x1de39cu: goto label_1de39c;
        case 0x1de3a0u: goto label_1de3a0;
        case 0x1de3a4u: goto label_1de3a4;
        case 0x1de3a8u: goto label_1de3a8;
        case 0x1de3acu: goto label_1de3ac;
        case 0x1de3b0u: goto label_1de3b0;
        case 0x1de3b4u: goto label_1de3b4;
        case 0x1de3b8u: goto label_1de3b8;
        case 0x1de3bcu: goto label_1de3bc;
        case 0x1de3c0u: goto label_1de3c0;
        case 0x1de3c4u: goto label_1de3c4;
        case 0x1de3c8u: goto label_1de3c8;
        case 0x1de3ccu: goto label_1de3cc;
        case 0x1de3d0u: goto label_1de3d0;
        case 0x1de3d4u: goto label_1de3d4;
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3e0u: goto label_1de3e0;
        case 0x1de3e4u: goto label_1de3e4;
        case 0x1de3e8u: goto label_1de3e8;
        case 0x1de3ecu: goto label_1de3ec;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de3f4u: goto label_1de3f4;
        case 0x1de3f8u: goto label_1de3f8;
        case 0x1de3fcu: goto label_1de3fc;
        case 0x1de400u: goto label_1de400;
        case 0x1de404u: goto label_1de404;
        case 0x1de408u: goto label_1de408;
        case 0x1de40cu: goto label_1de40c;
        case 0x1de410u: goto label_1de410;
        case 0x1de414u: goto label_1de414;
        case 0x1de418u: goto label_1de418;
        case 0x1de41cu: goto label_1de41c;
        case 0x1de420u: goto label_1de420;
        case 0x1de424u: goto label_1de424;
        case 0x1de428u: goto label_1de428;
        case 0x1de42cu: goto label_1de42c;
        case 0x1de430u: goto label_1de430;
        case 0x1de434u: goto label_1de434;
        case 0x1de438u: goto label_1de438;
        case 0x1de43cu: goto label_1de43c;
        case 0x1de440u: goto label_1de440;
        case 0x1de444u: goto label_1de444;
        case 0x1de448u: goto label_1de448;
        case 0x1de44cu: goto label_1de44c;
        case 0x1de450u: goto label_1de450;
        case 0x1de454u: goto label_1de454;
        case 0x1de458u: goto label_1de458;
        case 0x1de45cu: goto label_1de45c;
        case 0x1de460u: goto label_1de460;
        case 0x1de464u: goto label_1de464;
        case 0x1de468u: goto label_1de468;
        case 0x1de46cu: goto label_1de46c;
        case 0x1de470u: goto label_1de470;
        case 0x1de474u: goto label_1de474;
        case 0x1de478u: goto label_1de478;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de480u: goto label_1de480;
        case 0x1de484u: goto label_1de484;
        default: break;
    }

    ctx->pc = 0x1ddcf8u;

label_1ddcf8:
    // 0x1ddcf8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1ddcfc:
    // 0x1ddcfc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1ddcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1ddd00:
    // 0x1ddd00: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1ddd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1ddd04:
    // 0x1ddd04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ddd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd08:
    // 0x1ddd08: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1ddd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1ddd0c:
    // 0x1ddd0c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1ddd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1ddd10:
    // 0x1ddd10: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1ddd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1ddd14:
    // 0x1ddd14: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ddd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1ddd18:
    // 0x1ddd18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ddd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ddd1c:
    // 0x1ddd1c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1ddd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1ddd20:
    // 0x1ddd20: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1ddd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1ddd24:
    // 0x1ddd24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ddd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ddd28:
    // 0x1ddd28: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1ddd28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1ddd2c:
    // 0x1ddd2c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1ddd2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1ddd30:
    // 0x1ddd30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ddd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ddd34:
    // 0x1ddd34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1ddd38:
    if (ctx->pc == 0x1DDD38u) {
        ctx->pc = 0x1DDD3Cu;
        goto label_1ddd3c;
    }
    ctx->pc = 0x1DDD34u;
    {
        const bool branch_taken_0x1ddd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd34) {
            ctx->pc = 0x1DDD60u;
            goto label_1ddd60;
        }
    }
    ctx->pc = 0x1DDD3Cu;
label_1ddd3c:
    // 0x1ddd3c: 0xc077d38  jal         func_1DF4E0
label_1ddd40:
    if (ctx->pc == 0x1DDD40u) {
        ctx->pc = 0x1DDD44u;
        goto label_1ddd44;
    }
    ctx->pc = 0x1DDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD44u);
    ctx->pc = 0x1DF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF4E0u, 0x1DDD3Cu, 0x1DDD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD44u;
label_1ddd44:
    // 0x1ddd44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ddd48:
    if (ctx->pc == 0x1DDD48u) {
        ctx->pc = 0x1DDD4Cu;
        goto label_1ddd4c;
    }
    ctx->pc = 0x1DDD44u;
    {
        const bool branch_taken_0x1ddd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd44) {
            ctx->pc = 0x1DDD60u;
            goto label_1ddd60;
        }
    }
    ctx->pc = 0x1DDD4Cu;
label_1ddd4c:
    // 0x1ddd4c: 0xc075106  jal         func_1D4418
label_1ddd50:
    if (ctx->pc == 0x1DDD50u) {
        ctx->pc = 0x1DDD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD4Cu;
        // 0x1ddd50: 0x26242b00  addiu       $a0, $s1, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD54u;
        goto label_1ddd54;
    }
    ctx->pc = 0x1DDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD54u);
    ctx->pc = 0x1DDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD4Cu;
    // 0x1ddd50: 0x26242b00  addiu       $a0, $s1, 0x2B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4418u, 0x1DDD4Cu, 0x1DDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD54u;
label_1ddd54:
    // 0x1ddd54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ddd58:
    if (ctx->pc == 0x1DDD58u) {
        ctx->pc = 0x1DDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD54u;
        // 0x1ddd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD5Cu;
        goto label_1ddd5c;
    }
    ctx->pc = 0x1DDD54u;
    {
        const bool branch_taken_0x1ddd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD54u;
        // 0x1ddd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd54) {
            ctx->pc = 0x1DDD60u;
            goto label_1ddd60;
        }
    }
    ctx->pc = 0x1DDD5Cu;
label_1ddd5c:
    // 0x1ddd5c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ddd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1ddd60:
    // 0x1ddd60: 0xc076ede  jal         func_1DBB78
label_1ddd64:
    if (ctx->pc == 0x1DDD64u) {
        ctx->pc = 0x1DDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD60u;
        // 0x1ddd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD68u;
        goto label_1ddd68;
    }
    ctx->pc = 0x1DDD60u;
    SET_GPR_U32(ctx, 31, 0x1DDD68u);
    ctx->pc = 0x1DDD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD60u;
    // 0x1ddd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB78u, 0x1DDD60u, 0x1DDD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD68u;
label_1ddd68:
    // 0x1ddd68: 0x8e221b80  lw          $v0, 0x1B80($s1)
    ctx->pc = 0x1ddd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7040)));
label_1ddd6c:
    // 0x1ddd6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ddd70:
    if (ctx->pc == 0x1DDD70u) {
        ctx->pc = 0x1DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD6Cu;
        // 0x1ddd70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD74u;
        goto label_1ddd74;
    }
    ctx->pc = 0x1DDD6Cu;
    {
        const bool branch_taken_0x1ddd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD6Cu;
        // 0x1ddd70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd6c) {
            ctx->pc = 0x1DDD84u;
            goto label_1ddd84;
        }
    }
    ctx->pc = 0x1DDD74u;
label_1ddd74:
    // 0x1ddd74: 0xc0776f0  jal         func_1DDBC0
label_1ddd78:
    if (ctx->pc == 0x1DDD78u) {
        ctx->pc = 0x1DDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD74u;
        // 0x1ddd78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD7Cu;
        goto label_1ddd7c;
    }
    ctx->pc = 0x1DDD74u;
    SET_GPR_U32(ctx, 31, 0x1DDD7Cu);
    ctx->pc = 0x1DDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD74u;
    // 0x1ddd78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDBC0u, 0x1DDD74u, 0x1DDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD7Cu;
label_1ddd7c:
    // 0x1ddd7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ddd80:
    if (ctx->pc == 0x1DDD80u) {
        ctx->pc = 0x1DDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD7Cu;
        // 0x1ddd80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD84u;
        goto label_1ddd84;
    }
    ctx->pc = 0x1DDD7Cu;
    {
        const bool branch_taken_0x1ddd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD7Cu;
        // 0x1ddd80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd7c) {
            ctx->pc = 0x1DDDA4u;
            goto label_1ddda4;
        }
    }
    ctx->pc = 0x1DDD84u;
label_1ddd84:
    // 0x1ddd84: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ddd88:
    // 0x1ddd88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ddd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ddd8c:
    // 0x1ddd8c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ddd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ddd90:
    // 0x1ddd90: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ddd94:
    // 0x1ddd94: 0x40f809  jalr        $v0
label_1ddd98:
    if (ctx->pc == 0x1DDD98u) {
        ctx->pc = 0x1DDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD94u;
        // 0x1ddd98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD9Cu;
        goto label_1ddd9c;
    }
    ctx->pc = 0x1DDD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DDD9Cu);
        ctx->pc = 0x1DDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD94u;
        // 0x1ddd98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD94u, 0x1DDD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDD9Cu;
label_1ddd9c:
    // 0x1ddd9c: 0xae223b98  sw          $v0, 0x3B98($s1)
    ctx->pc = 0x1ddd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15256), GPR_U32(ctx, 2));
label_1ddda0:
    // 0x1ddda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ddda4:
    // 0x1ddda4: 0xc077474  jal         func_1DD1D0
label_1ddda8:
    if (ctx->pc == 0x1DDDA8u) {
        ctx->pc = 0x1DDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDA4u;
        // 0x1ddda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDACu;
        goto label_1dddac;
    }
    ctx->pc = 0x1DDDA4u;
    SET_GPR_U32(ctx, 31, 0x1DDDACu);
    ctx->pc = 0x1DDDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDA4u;
    // 0x1ddda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1D0u, 0x1DDDA4u, 0x1DDDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDACu;
label_1dddac:
    // 0x1dddac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1dddb0:
    if (ctx->pc == 0x1DDDB0u) {
        ctx->pc = 0x1DDDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDACu;
        // 0x1dddb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDB4u;
        goto label_1dddb4;
    }
    ctx->pc = 0x1DDDACu;
    {
        const bool branch_taken_0x1dddac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDACu;
        // 0x1dddb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddac) {
            ctx->pc = 0x1DDDD0u;
            goto label_1dddd0;
        }
    }
    ctx->pc = 0x1DDDB4u;
label_1dddb4:
    // 0x1dddb4: 0xc067b9c  jal         func_19EE70
label_1dddb8:
    if (ctx->pc == 0x1DDDB8u) {
        ctx->pc = 0x1DDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDB4u;
        // 0x1dddb8: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDBCu;
        goto label_1dddbc;
    }
    ctx->pc = 0x1DDDB4u;
    SET_GPR_U32(ctx, 31, 0x1DDDBCu);
    ctx->pc = 0x1DDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDB4u;
    // 0x1dddb8: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DDDB4u, 0x1DDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDBCu;
label_1dddbc:
    // 0x1dddbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dddbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dddc0:
    // 0x1dddc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dddc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dddc4:
    // 0x1dddc4: 0xc07742e  jal         func_1DD0B8
label_1dddc8:
    if (ctx->pc == 0x1DDDC8u) {
        ctx->pc = 0x1DDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDC4u;
        // 0x1dddc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDCCu;
        goto label_1dddcc;
    }
    ctx->pc = 0x1DDDC4u;
    SET_GPR_U32(ctx, 31, 0x1DDDCCu);
    ctx->pc = 0x1DDDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDC4u;
    // 0x1dddc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0B8u, 0x1DDDC4u, 0x1DDDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDCCu;
label_1dddcc:
    // 0x1dddcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dddd0:
    // 0x1dddd0: 0xc077474  jal         func_1DD1D0
label_1dddd4:
    if (ctx->pc == 0x1DDDD4u) {
        ctx->pc = 0x1DDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDD0u;
        // 0x1dddd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDD8u;
        goto label_1dddd8;
    }
    ctx->pc = 0x1DDDD0u;
    SET_GPR_U32(ctx, 31, 0x1DDDD8u);
    ctx->pc = 0x1DDDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDD0u;
    // 0x1dddd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1D0u, 0x1DDDD0u, 0x1DDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDD8u;
label_1dddd8:
    // 0x1dddd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1ddddc:
    if (ctx->pc == 0x1DDDDCu) {
        ctx->pc = 0x1DDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDD8u;
        // 0x1ddddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDE0u;
        goto label_1ddde0;
    }
    ctx->pc = 0x1DDDD8u;
    {
        const bool branch_taken_0x1dddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDD8u;
        // 0x1ddddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddd8) {
            ctx->pc = 0x1DDDFCu;
            goto label_1dddfc;
        }
    }
    ctx->pc = 0x1DDDE0u;
label_1ddde0:
    // 0x1ddde0: 0xc067b9c  jal         func_19EE70
label_1ddde4:
    if (ctx->pc == 0x1DDDE4u) {
        ctx->pc = 0x1DDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDE0u;
        // 0x1ddde4: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDE8u;
        goto label_1ddde8;
    }
    ctx->pc = 0x1DDDE0u;
    SET_GPR_U32(ctx, 31, 0x1DDDE8u);
    ctx->pc = 0x1DDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDE0u;
    // 0x1ddde4: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DDDE0u, 0x1DDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDE8u;
label_1ddde8:
    // 0x1ddde8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ddde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dddec:
    // 0x1dddec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dddecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dddf0:
    // 0x1dddf0: 0xc07742e  jal         func_1DD0B8
label_1dddf4:
    if (ctx->pc == 0x1DDDF4u) {
        ctx->pc = 0x1DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDF0u;
        // 0x1dddf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDF8u;
        goto label_1dddf8;
    }
    ctx->pc = 0x1DDDF0u;
    SET_GPR_U32(ctx, 31, 0x1DDDF8u);
    ctx->pc = 0x1DDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDF0u;
    // 0x1dddf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0B8u, 0x1DDDF0u, 0x1DDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDF8u;
label_1dddf8:
    // 0x1dddf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddfc:
    // 0x1dddfc: 0xc047e6c  jal         func_11F9B0
label_1dde00:
    if (ctx->pc == 0x1DDE00u) {
        ctx->pc = 0x1DDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDFCu;
        // 0x1dde00: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE04u;
        goto label_1dde04;
    }
    ctx->pc = 0x1DDDFCu;
    SET_GPR_U32(ctx, 31, 0x1DDE04u);
    ctx->pc = 0x1DDE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDFCu;
    // 0x1dde00: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1DDDFCu, 0x1DDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE04u;
label_1dde04:
    // 0x1dde04: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1dde08:
    if (ctx->pc == 0x1DDE08u) {
        ctx->pc = 0x1DDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE04u;
        // 0x1dde08: 0x8ee5cdb4  lw          $a1, -0x324C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE0Cu;
        goto label_1dde0c;
    }
    ctx->pc = 0x1DDE04u;
    {
        const bool branch_taken_0x1dde04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE04u;
        // 0x1dde08: 0x8ee5cdb4  lw          $a1, -0x324C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde04) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDE0Cu;
label_1dde0c:
    // 0x1dde0c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1dde10:
    // 0x1dde10: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1dde14:
    // 0x1dde14: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1dde18:
    // 0x1dde18: 0x60f809  jalr        $v1
label_1dde1c:
    if (ctx->pc == 0x1DDE1Cu) {
        ctx->pc = 0x1DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE18u;
        // 0x1dde1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE20u;
        goto label_1dde20;
    }
    ctx->pc = 0x1DDE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDE20u);
        ctx->pc = 0x1DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE18u;
        // 0x1dde1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE18u, 0x1DDE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDE20u;
label_1dde20:
    // 0x1dde20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dde24:
    // 0x1dde24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dde24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dde28:
    // 0x1dde28: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1dde28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1dde2c:
    // 0x1dde2c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1dde2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1dde30:
    // 0x1dde30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dde30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dde34:
    // 0x1dde34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dde34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1dde38:
    // 0x1dde38: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1dde38u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1dde3c:
    // 0x1dde3c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1dde3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dde40:
    // 0x1dde40: 0x0  nop
    ctx->pc = 0x1dde40u;
    // NOP
label_1dde44:
    // 0x1dde44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1dde48:
    if (ctx->pc == 0x1DDE48u) {
        ctx->pc = 0x1DDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE44u;
        // 0x1dde48: 0x8ee5cdb4  lw          $a1, -0x324C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE4Cu;
        goto label_1dde4c;
    }
    ctx->pc = 0x1DDE44u;
    {
        const bool branch_taken_0x1dde44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE44u;
        // 0x1dde48: 0x8ee5cdb4  lw          $a1, -0x324C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde44) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDE4Cu;
label_1dde4c:
    // 0x1dde4c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1dde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1dde50:
    // 0x1dde50: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1dde50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1dde54:
    // 0x1dde54: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1dde54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1dde58:
    // 0x1dde58: 0x60f809  jalr        $v1
label_1dde5c:
    if (ctx->pc == 0x1DDE5Cu) {
        ctx->pc = 0x1DDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE58u;
        // 0x1dde5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE60u;
        goto label_1dde60;
    }
    ctx->pc = 0x1DDE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDE60u);
        ctx->pc = 0x1DDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE58u;
        // 0x1dde5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE58u, 0x1DDE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDE60u;
label_1dde60:
    // 0x1dde60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dde60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dde64:
    // 0x1dde64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1dde64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1dde68:
    // 0x1dde68: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1dde68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1dde6c:
    // 0x1dde6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dde70:
    // 0x1dde70: 0x8e303ba4  lw          $s0, 0x3BA4($s1)
    ctx->pc = 0x1dde70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15268)));
label_1dde74:
    // 0x1dde74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dde78:
    // 0x1dde78: 0x8c46ee8c  lw          $a2, -0x1174($v0)
    ctx->pc = 0x1dde78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962828)));
label_1dde7c:
    // 0x1dde7c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1dde7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1dde80:
    // 0x1dde80: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1dde80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1dde84:
    // 0x1dde84: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x1dde84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1dde88:
    // 0x1dde88: 0x40f809  jalr        $v0
label_1dde8c:
    if (ctx->pc == 0x1DDE8Cu) {
        ctx->pc = 0x1DDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE88u;
        // 0x1dde8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE90u;
        goto label_1dde90;
    }
    ctx->pc = 0x1DDE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DDE90u);
        ctx->pc = 0x1DDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE88u;
        // 0x1dde8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE88u, 0x1DDE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDE90u;
label_1dde90:
    // 0x1dde90: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1dde90u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dde94:
    // 0x1dde94: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_1dde98:
    if (ctx->pc == 0x1DDE98u) {
        ctx->pc = 0x1DDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE94u;
        // 0x1dde98: 0x8e221b88  lw          $v0, 0x1B88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE9Cu;
        goto label_1dde9c;
    }
    ctx->pc = 0x1DDE94u;
    {
        const bool branch_taken_0x1dde94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde94) {
            ctx->pc = 0x1DDE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE94u;
            // 0x1dde98: 0x8e221b88  lw          $v0, 0x1B88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF08u;
            goto label_1ddf08;
        }
    }
    ctx->pc = 0x1DDE9Cu;
label_1dde9c:
    // 0x1dde9c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1dde9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ddea0:
    // 0x1ddea0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1ddea4:
    if (ctx->pc == 0x1DDEA4u) {
        ctx->pc = 0x1DDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEA0u;
        // 0x1ddea4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEA8u;
        goto label_1ddea8;
    }
    ctx->pc = 0x1DDEA0u;
    {
        const bool branch_taken_0x1ddea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEA0u;
        // 0x1ddea4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddea0) {
            ctx->pc = 0x1DDF04u;
            goto label_1ddf04;
        }
    }
    ctx->pc = 0x1DDEA8u;
label_1ddea8:
    // 0x1ddea8: 0x80850019  lb          $a1, 0x19($a0)
    ctx->pc = 0x1ddea8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
label_1ddeac:
    // 0x1ddeac: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_1ddeb0:
    if (ctx->pc == 0x1DDEB0u) {
        ctx->pc = 0x1DDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEACu;
        // 0x1ddeb0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEB4u;
        goto label_1ddeb4;
    }
    ctx->pc = 0x1DDEACu;
    {
        const bool branch_taken_0x1ddeac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEACu;
        // 0x1ddeb0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeac) {
            ctx->pc = 0x1DDEC8u;
            goto label_1ddec8;
        }
    }
    ctx->pc = 0x1DDEB4u;
label_1ddeb4:
    // 0x1ddeb4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1ddeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1ddeb8:
    // 0x1ddeb8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ddeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ddebc:
    // 0x1ddebc: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1ddebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_1ddec0:
    // 0x1ddec0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ddec4:
    if (ctx->pc == 0x1DDEC4u) {
        ctx->pc = 0x1DDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEC0u;
        // 0x1ddec4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEC8u;
        goto label_1ddec8;
    }
    ctx->pc = 0x1DDEC0u;
    {
        const bool branch_taken_0x1ddec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEC0u;
        // 0x1ddec4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddec0) {
            ctx->pc = 0x1DDECCu;
            goto label_1ddecc;
        }
    }
    ctx->pc = 0x1DDEC8u;
label_1ddec8:
    // 0x1ddec8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ddec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddecc:
    // 0x1ddecc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1dded0:
    if (ctx->pc == 0x1DDED0u) {
        ctx->pc = 0x1DDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDECCu;
        // 0x1dded0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDED4u;
        goto label_1dded4;
    }
    ctx->pc = 0x1DDECCu;
    {
        const bool branch_taken_0x1ddecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDECCu;
        // 0x1dded0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddecc) {
            ctx->pc = 0x1DDF04u;
            goto label_1ddf04;
        }
    }
    ctx->pc = 0x1DDED4u;
label_1dded4:
    // 0x1dded4: 0x80840019  lb          $a0, 0x19($a0)
    ctx->pc = 0x1dded4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
label_1dded8:
    // 0x1dded8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1ddedc:
    if (ctx->pc == 0x1DDEDCu) {
        ctx->pc = 0x1DDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDED8u;
        // 0x1ddedc: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEE0u;
        goto label_1ddee0;
    }
    ctx->pc = 0x1DDED8u;
    {
        const bool branch_taken_0x1dded8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDED8u;
        // 0x1ddedc: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dded8) {
            ctx->pc = 0x1DDEF4u;
            goto label_1ddef4;
        }
    }
    ctx->pc = 0x1DDEE0u;
label_1ddee0:
    // 0x1ddee0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1ddee4:
    // 0x1ddee4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1ddee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ddee8:
    // 0x1ddee8: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1ddee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_1ddeec:
    // 0x1ddeec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ddef0:
    if (ctx->pc == 0x1DDEF0u) {
        ctx->pc = 0x1DDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEECu;
        // 0x1ddef0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEF4u;
        goto label_1ddef4;
    }
    ctx->pc = 0x1DDEECu;
    {
        const bool branch_taken_0x1ddeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEECu;
        // 0x1ddef0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeec) {
            ctx->pc = 0x1DDEF8u;
            goto label_1ddef8;
        }
    }
    ctx->pc = 0x1DDEF4u;
label_1ddef4:
    // 0x1ddef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ddef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddef8:
    // 0x1ddef8: 0xc0512fc  jal         func_144BF0
label_1ddefc:
    if (ctx->pc == 0x1DDEFCu) {
        ctx->pc = 0x1DDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEF8u;
        // 0x1ddefc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF00u;
        goto label_1ddf00;
    }
    ctx->pc = 0x1DDEF8u;
    SET_GPR_U32(ctx, 31, 0x1DDF00u);
    ctx->pc = 0x1DDEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEF8u;
    // 0x1ddefc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x1DDEF8u, 0x1DDF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF00u;
label_1ddf00:
    // 0x1ddf00: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1ddf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1ddf04:
    // 0x1ddf04: 0x8e221b88  lw          $v0, 0x1B88($s1)
    ctx->pc = 0x1ddf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7048)));
label_1ddf08:
    // 0x1ddf08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ddf0c:
    if (ctx->pc == 0x1DDF0Cu) {
        ctx->pc = 0x1DDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF08u;
        // 0x1ddf0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF10u;
        goto label_1ddf10;
    }
    ctx->pc = 0x1DDF08u;
    {
        const bool branch_taken_0x1ddf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF08u;
        // 0x1ddf0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf08) {
            ctx->pc = 0x1DDF28u;
            goto label_1ddf28;
        }
    }
    ctx->pc = 0x1DDF10u;
label_1ddf10:
    // 0x1ddf10: 0xc107458  jal         func_41D160
label_1ddf14:
    if (ctx->pc == 0x1DDF14u) {
        ctx->pc = 0x1DDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF10u;
        // 0x1ddf14: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF18u;
        goto label_1ddf18;
    }
    ctx->pc = 0x1DDF10u;
    SET_GPR_U32(ctx, 31, 0x1DDF18u);
    ctx->pc = 0x1DDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF10u;
    // 0x1ddf14: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DDF10u, 0x1DDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF18u;
label_1ddf18:
    // 0x1ddf18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ddf1c:
    if (ctx->pc == 0x1DDF1Cu) {
        ctx->pc = 0x1DDF20u;
        goto label_1ddf20;
    }
    ctx->pc = 0x1DDF18u;
    {
        const bool branch_taken_0x1ddf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf18) {
            ctx->pc = 0x1DDF28u;
            goto label_1ddf28;
        }
    }
    ctx->pc = 0x1DDF20u;
label_1ddf20:
    // 0x1ddf20: 0xc077534  jal         func_1DD4D0
label_1ddf24:
    if (ctx->pc == 0x1DDF24u) {
        ctx->pc = 0x1DDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF20u;
        // 0x1ddf24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF28u;
        goto label_1ddf28;
    }
    ctx->pc = 0x1DDF20u;
    SET_GPR_U32(ctx, 31, 0x1DDF28u);
    ctx->pc = 0x1DDF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF20u;
    // 0x1ddf24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4D0u, 0x1DDF20u, 0x1DDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF28u;
label_1ddf28:
    // 0x1ddf28: 0xc107458  jal         func_41D160
label_1ddf2c:
    if (ctx->pc == 0x1DDF2Cu) {
        ctx->pc = 0x1DDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF28u;
        // 0x1ddf2c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF30u;
        goto label_1ddf30;
    }
    ctx->pc = 0x1DDF28u;
    SET_GPR_U32(ctx, 31, 0x1DDF30u);
    ctx->pc = 0x1DDF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF28u;
    // 0x1ddf2c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DDF28u, 0x1DDF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF30u;
label_1ddf30:
    // 0x1ddf30: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1ddf34:
    if (ctx->pc == 0x1DDF34u) {
        ctx->pc = 0x1DDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF30u;
        // 0x1ddf34: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF38u;
        goto label_1ddf38;
    }
    ctx->pc = 0x1DDF30u;
    {
        const bool branch_taken_0x1ddf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF30u;
        // 0x1ddf34: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf30) {
            ctx->pc = 0x1DDF80u;
            goto label_1ddf80;
        }
    }
    ctx->pc = 0x1DDF38u;
label_1ddf38:
    // 0x1ddf38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ddf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ddf3c:
    // 0x1ddf3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ddf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ddf40:
    // 0x1ddf40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ddf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddf44:
    // 0x1ddf44: 0xc441ee60  lwc1        $f1, -0x11A0($v0)
    ctx->pc = 0x1ddf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ddf48:
    // 0x1ddf48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ddf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf4c:
    // 0x1ddf4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ddf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ddf50:
    // 0x1ddf50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ddf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ddf54:
    // 0x1ddf54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ddf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddf58:
    // 0x1ddf58: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1ddf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ddf5c:
    // 0x1ddf5c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1ddf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ddf60:
    // 0x1ddf60: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ddf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ddf64:
    // 0x1ddf64: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x1ddf64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ddf68:
    // 0x1ddf68: 0x8e272af8  lw          $a3, 0x2AF8($s1)
    ctx->pc = 0x1ddf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11000)));
label_1ddf6c:
    // 0x1ddf6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ddf70:
    // 0x1ddf70: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ddf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ddf74:
    // 0x1ddf74: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ddf78:
    // 0x1ddf78: 0x60f809  jalr        $v1
label_1ddf7c:
    if (ctx->pc == 0x1DDF7Cu) {
        ctx->pc = 0x1DDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF78u;
        // 0x1ddf7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF80u;
        goto label_1ddf80;
    }
    ctx->pc = 0x1DDF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDF80u);
        ctx->pc = 0x1DDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF78u;
        // 0x1ddf7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF78u, 0x1DDF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDF80u;
label_1ddf80:
    // 0x1ddf80: 0x26232dd0  addiu       $v1, $s1, 0x2DD0
    ctx->pc = 0x1ddf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
label_1ddf84:
    // 0x1ddf84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ddf84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf88:
    // 0x1ddf88: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1ddf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1ddf8c:
    // 0x1ddf8c: 0x26342b00  addiu       $s4, $s1, 0x2B00
    ctx->pc = 0x1ddf8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 11008));
label_1ddf90:
    // 0x1ddf90: 0x26353a90  addiu       $s5, $s1, 0x3A90
    ctx->pc = 0x1ddf90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 14992));
label_1ddf94:
    // 0x1ddf94: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x1ddf94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ddf98:
    // 0x1ddf98: 0x26361bd0  addiu       $s6, $s1, 0x1BD0
    ctx->pc = 0x1ddf98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 7120));
label_1ddf9c:
    // 0x1ddf9c: 0x26302af0  addiu       $s0, $s1, 0x2AF0
    ctx->pc = 0x1ddf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10992));
label_1ddfa0:
    // 0x1ddfa0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ddfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ddfa4:
    // 0x1ddfa4: 0x0  nop
    ctx->pc = 0x1ddfa4u;
    // NOP
label_1ddfa8:
    // 0x1ddfa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ddfa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ddfac:
    // 0x1ddfac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ddfacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ddfb0:
    // 0x1ddfb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ddfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ddfb4:
    // 0x1ddfb4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ddfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ddfb8:
    // 0x1ddfb8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ddfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ddfbc:
    // 0x1ddfbc: 0x60f809  jalr        $v1
label_1ddfc0:
    if (ctx->pc == 0x1DDFC0u) {
        ctx->pc = 0x1DDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFBCu;
        // 0x1ddfc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFC4u;
        goto label_1ddfc4;
    }
    ctx->pc = 0x1DDFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDFC4u);
        ctx->pc = 0x1DDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFBCu;
        // 0x1ddfc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDFBCu, 0x1DDFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDFC4u;
label_1ddfc4:
    // 0x1ddfc4: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1ddfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1ddfc8:
    // 0x1ddfc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1ddfcc:
    if (ctx->pc == 0x1DDFCCu) {
        ctx->pc = 0x1DDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFC8u;
        // 0x1ddfcc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFD0u;
        goto label_1ddfd0;
    }
    ctx->pc = 0x1DDFC8u;
    {
        const bool branch_taken_0x1ddfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfc8) {
            ctx->pc = 0x1DDFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFC8u;
            // 0x1ddfcc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddfa8;
        }
    }
    ctx->pc = 0x1DDFD0u;
label_1ddfd0:
    // 0x1ddfd0: 0x8e223a7c  lw          $v0, 0x3A7C($s1)
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14972)));
label_1ddfd4:
    // 0x1ddfd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ddfd8:
    if (ctx->pc == 0x1DDFD8u) {
        ctx->pc = 0x1DDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFD4u;
        // 0x1ddfd8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFDCu;
        goto label_1ddfdc;
    }
    ctx->pc = 0x1DDFD4u;
    {
        const bool branch_taken_0x1ddfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFD4u;
        // 0x1ddfd8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfd4) {
            ctx->pc = 0x1DDFE8u;
            goto label_1ddfe8;
        }
    }
    ctx->pc = 0x1DDFDCu;
label_1ddfdc:
    // 0x1ddfdc: 0xc07944c  jal         func_1E5130
label_1ddfe0:
    if (ctx->pc == 0x1DDFE0u) {
        ctx->pc = 0x1DDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFDCu;
        // 0x1ddfe0: 0x262430a0  addiu       $a0, $s1, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFE4u;
        goto label_1ddfe4;
    }
    ctx->pc = 0x1DDFDCu;
    SET_GPR_U32(ctx, 31, 0x1DDFE4u);
    ctx->pc = 0x1DDFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFDCu;
    // 0x1ddfe0: 0x262430a0  addiu       $a0, $s1, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5130u, 0x1DDFDCu, 0x1DDFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDFE4u;
label_1ddfe4:
    // 0x1ddfe4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ddfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ddfe8:
    // 0x1ddfe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ddfec:
    // 0x1ddfec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ddfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddff0:
    // 0x1ddff0: 0xc442ee28  lwc1        $f2, -0x11D8($v0)
    ctx->pc = 0x1ddff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ddff4:
    // 0x1ddff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ddff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ddff8:
    // 0x1ddff8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ddffc:
    // 0x1ddffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ddffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1de000:
    // 0x1de000: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1de000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1de004:
    // 0x1de004: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1de004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1de008:
    // 0x1de008: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1de008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1de00c:
    // 0x1de00c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1de00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1de010:
    // 0x1de010: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1de010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de014:
    // 0x1de014: 0xc0753c8  jal         func_1D4F20
label_1de018:
    if (ctx->pc == 0x1DE018u) {
        ctx->pc = 0x1DE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE014u;
        // 0x1de018: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE01Cu;
        goto label_1de01c;
    }
    ctx->pc = 0x1DE014u;
    SET_GPR_U32(ctx, 31, 0x1DE01Cu);
    ctx->pc = 0x1DE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE014u;
    // 0x1de018: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1DE014u, 0x1DE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE01Cu;
label_1de01c:
    // 0x1de01c: 0x8e223a78  lw          $v0, 0x3A78($s1)
    ctx->pc = 0x1de01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14968)));
label_1de020:
    // 0x1de020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1de024:
    if (ctx->pc == 0x1DE024u) {
        ctx->pc = 0x1DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE020u;
        // 0x1de024: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE028u;
        goto label_1de028;
    }
    ctx->pc = 0x1DE020u;
    {
        const bool branch_taken_0x1de020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE020u;
        // 0x1de024: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de020) {
            ctx->pc = 0x1DE040u;
            goto label_1de040;
        }
    }
    ctx->pc = 0x1DE028u;
label_1de028:
    // 0x1de028: 0x8c45ecec  lw          $a1, -0x1314($v0)
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1de02c:
    // 0x1de02c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1de030:
    // 0x1de030: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1de030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1de034:
    // 0x1de034: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1de038:
    // 0x1de038: 0x40f809  jalr        $v0
label_1de03c:
    if (ctx->pc == 0x1DE03Cu) {
        ctx->pc = 0x1DE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE038u;
        // 0x1de03c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE040u;
        goto label_1de040;
    }
    ctx->pc = 0x1DE038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE040u);
        ctx->pc = 0x1DE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE038u;
        // 0x1de03c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE038u, 0x1DE040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE040u;
label_1de040:
    // 0x1de040: 0x8ee2cdb4  lw          $v0, -0x324C($s7)
    ctx->pc = 0x1de040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_1de044:
    // 0x1de044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1de044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de048:
    // 0x1de048: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1de048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1de04c:
    // 0x1de04c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1de050:
    if (ctx->pc == 0x1DE050u) {
        ctx->pc = 0x1DE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE04Cu;
        // 0x1de050: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE054u;
        goto label_1de054;
    }
    ctx->pc = 0x1DE04Cu;
    {
        const bool branch_taken_0x1de04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE04Cu;
        // 0x1de050: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de04c) {
            ctx->pc = 0x1DE0B8u;
            goto label_1de0b8;
        }
    }
    ctx->pc = 0x1DE054u;
label_1de054:
    // 0x1de054: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1de058:
    if (ctx->pc == 0x1DE058u) {
        ctx->pc = 0x1DE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE054u;
        // 0x1de058: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE05Cu;
        goto label_1de05c;
    }
    ctx->pc = 0x1DE054u;
    {
        const bool branch_taken_0x1de054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE054u;
        // 0x1de058: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de054) {
            ctx->pc = 0x1DE084u;
            goto label_1de084;
        }
    }
    ctx->pc = 0x1DE05Cu;
label_1de05c:
    // 0x1de05c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_1de060:
    // 0x1de060: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1de060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1de064:
    // 0x1de064: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1de064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de068:
    // 0x1de068: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1de068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1de06c:
    // 0x1de06c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1de06cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1de070:
    // 0x1de070: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1de070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1de074:
    // 0x1de074: 0xc068848  jal         func_1A2120
label_1de078:
    if (ctx->pc == 0x1DE078u) {
        ctx->pc = 0x1DE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE074u;
        // 0x1de078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE07Cu;
        goto label_1de07c;
    }
    ctx->pc = 0x1DE074u;
    SET_GPR_U32(ctx, 31, 0x1DE07Cu);
    ctx->pc = 0x1DE078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE074u;
    // 0x1de078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1DE074u, 0x1DE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE07Cu;
label_1de07c:
    // 0x1de07c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1de080:
    if (ctx->pc == 0x1DE080u) {
        ctx->pc = 0x1DE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE07Cu;
        // 0x1de080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE084u;
        goto label_1de084;
    }
    ctx->pc = 0x1DE07Cu;
    {
        const bool branch_taken_0x1de07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE07Cu;
        // 0x1de080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de07c) {
            ctx->pc = 0x1DE0A8u;
            goto label_1de0a8;
        }
    }
    ctx->pc = 0x1DE084u;
label_1de084:
    // 0x1de084: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1de084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_1de088:
    // 0x1de088: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1de088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1de08c:
    // 0x1de08c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1de08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de090:
    // 0x1de090: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1de090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1de094:
    // 0x1de094: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1de094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1de098:
    // 0x1de098: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1de098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1de09c:
    // 0x1de09c: 0xc068848  jal         func_1A2120
label_1de0a0:
    if (ctx->pc == 0x1DE0A0u) {
        ctx->pc = 0x1DE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE09Cu;
        // 0x1de0a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0A4u;
        goto label_1de0a4;
    }
    ctx->pc = 0x1DE09Cu;
    SET_GPR_U32(ctx, 31, 0x1DE0A4u);
    ctx->pc = 0x1DE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE09Cu;
    // 0x1de0a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1DE09Cu, 0x1DE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0A4u;
label_1de0a4:
    // 0x1de0a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1de0a8:
    // 0x1de0a8: 0xc06887a  jal         func_1A21E8
label_1de0ac:
    if (ctx->pc == 0x1DE0ACu) {
        ctx->pc = 0x1DE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0A8u;
        // 0x1de0ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0B0u;
        goto label_1de0b0;
    }
    ctx->pc = 0x1DE0A8u;
    SET_GPR_U32(ctx, 31, 0x1DE0B0u);
    ctx->pc = 0x1DE0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0A8u;
    // 0x1de0ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1DE0A8u, 0x1DE0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0B0u;
label_1de0b0:
    // 0x1de0b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1de0b4:
    if (ctx->pc == 0x1DE0B4u) {
        ctx->pc = 0x1DE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0B0u;
        // 0x1de0b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0B8u;
        goto label_1de0b8;
    }
    ctx->pc = 0x1DE0B0u;
    {
        const bool branch_taken_0x1de0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0B0u;
        // 0x1de0b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0b0) {
            ctx->pc = 0x1DE0E0u;
            goto label_1de0e0;
        }
    }
    ctx->pc = 0x1DE0B8u;
label_1de0b8:
    // 0x1de0b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de0bc:
    // 0x1de0bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1de0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1de0c0:
    // 0x1de0c0: 0xc44cee68  lwc1        $f12, -0x1198($v0)
    ctx->pc = 0x1de0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1de0c4:
    // 0x1de0c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1de0c8:
    // 0x1de0c8: 0xc46dee6c  lwc1        $f13, -0x1194($v1)
    ctx->pc = 0x1de0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1de0cc:
    // 0x1de0cc: 0xc068848  jal         func_1A2120
label_1de0d0:
    if (ctx->pc == 0x1DE0D0u) {
        ctx->pc = 0x1DE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0CCu;
        // 0x1de0d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0D4u;
        goto label_1de0d4;
    }
    ctx->pc = 0x1DE0CCu;
    SET_GPR_U32(ctx, 31, 0x1DE0D4u);
    ctx->pc = 0x1DE0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0CCu;
    // 0x1de0d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1DE0CCu, 0x1DE0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0D4u;
label_1de0d4:
    // 0x1de0d4: 0xc06886e  jal         func_1A21B8
label_1de0d8:
    if (ctx->pc == 0x1DE0D8u) {
        ctx->pc = 0x1DE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0D4u;
        // 0x1de0d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0DCu;
        goto label_1de0dc;
    }
    ctx->pc = 0x1DE0D4u;
    SET_GPR_U32(ctx, 31, 0x1DE0DCu);
    ctx->pc = 0x1DE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0D4u;
    // 0x1de0d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1DE0D4u, 0x1DE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0DCu;
label_1de0dc:
    // 0x1de0dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de0e0:
    // 0x1de0e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1de0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1de0e4:
    // 0x1de0e4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1de0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1de0e8:
    // 0x1de0e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1de0ec:
    // 0x1de0ec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1de0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1de0f0:
    // 0x1de0f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1de0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1de0f4:
    // 0x1de0f4: 0x40f809  jalr        $v0
label_1de0f8:
    if (ctx->pc == 0x1DE0F8u) {
        ctx->pc = 0x1DE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0F4u;
        // 0x1de0f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0FCu;
        goto label_1de0fc;
    }
    ctx->pc = 0x1DE0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE0FCu);
        ctx->pc = 0x1DE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0F4u;
        // 0x1de0f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0F4u, 0x1DE0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE0FCu;
label_1de0fc:
    // 0x1de0fc: 0x8e243ba8  lw          $a0, 0x3BA8($s1)
    ctx->pc = 0x1de0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15272)));
label_1de100:
    // 0x1de100: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1de100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1de104:
    // 0x1de104: 0x8ca3ee88  lw          $v1, -0x1178($a1)
    ctx->pc = 0x1de104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962824)));
label_1de108:
    // 0x1de108: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1de10c:
    // 0x1de10c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1de10cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1de110:
    // 0x1de110: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1de114:
    if (ctx->pc == 0x1DE114u) {
        ctx->pc = 0x1DE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE110u;
        // 0x1de114: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE118u;
        goto label_1de118;
    }
    ctx->pc = 0x1DE110u;
    {
        const bool branch_taken_0x1de110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE110u;
        // 0x1de114: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de110) {
            ctx->pc = 0x1DE15Cu;
            goto label_1de15c;
        }
    }
    ctx->pc = 0x1DE118u;
label_1de118:
    // 0x1de118: 0x92223bac  lbu         $v0, 0x3BAC($s1)
    ctx->pc = 0x1de118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15276)));
label_1de11c:
    // 0x1de11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de120:
    // 0x1de120: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1de120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de124:
    // 0x1de124: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1de124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1de128:
    // 0x1de128: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1de12c:
    if (ctx->pc == 0x1DE12Cu) {
        ctx->pc = 0x1DE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE128u;
        // 0x1de12c: 0xa2243bac  sb          $a0, 0x3BAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE130u;
        goto label_1de130;
    }
    ctx->pc = 0x1DE128u;
    {
        const bool branch_taken_0x1de128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE128u;
        // 0x1de12c: 0xa2243bac  sb          $a0, 0x3BAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de128) {
            ctx->pc = 0x1DE134u;
            goto label_1de134;
        }
    }
    ctx->pc = 0x1DE130u;
label_1de130:
    // 0x1de130: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1de130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de134:
    // 0x1de134: 0xa2253bac  sb          $a1, 0x3BAC($s1)
    ctx->pc = 0x1de134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15276), (uint8_t)GPR_U32(ctx, 5));
label_1de138:
    // 0x1de138: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de13c:
    // 0x1de13c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1de13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1de140:
    // 0x1de140: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1de144:
    // 0x1de144: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1de148:
    // 0x1de148: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1de14c:
    // 0x1de14c: 0x40f809  jalr        $v0
label_1de150:
    if (ctx->pc == 0x1DE150u) {
        ctx->pc = 0x1DE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE14Cu;
        // 0x1de150: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE154u;
        goto label_1de154;
    }
    ctx->pc = 0x1DE14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE154u);
        ctx->pc = 0x1DE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE14Cu;
        // 0x1de150: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE14Cu, 0x1DE154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE154u;
label_1de154:
    // 0x1de154: 0x10000021  b           . + 4 + (0x21 << 2)
label_1de158:
    if (ctx->pc == 0x1DE158u) {
        ctx->pc = 0x1DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE154u;
        // 0x1de158: 0xae223ba8  sw          $v0, 0x3BA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE15Cu;
        goto label_1de15c;
    }
    ctx->pc = 0x1DE154u;
    {
        const bool branch_taken_0x1de154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE154u;
        // 0x1de158: 0xae223ba8  sw          $v0, 0x3BA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de154) {
            ctx->pc = 0x1DE1DCu;
            goto label_1de1dc;
        }
    }
    ctx->pc = 0x1DE15Cu;
label_1de15c:
    // 0x1de15c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1de160:
    if (ctx->pc == 0x1DE160u) {
        ctx->pc = 0x1DE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE15Cu;
        // 0x1de160: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE164u;
        goto label_1de164;
    }
    ctx->pc = 0x1DE15Cu;
    {
        const bool branch_taken_0x1de15c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE15Cu;
        // 0x1de160: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de15c) {
            ctx->pc = 0x1DE178u;
            goto label_1de178;
        }
    }
    ctx->pc = 0x1DE164u;
label_1de164:
    // 0x1de164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de168:
    // 0x1de168: 0x0  nop
    ctx->pc = 0x1de168u;
    // NOP
label_1de16c:
    // 0x1de16c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de170:
    // 0x1de170: 0x1000000a  b           . + 4 + (0xA << 2)
label_1de174:
    if (ctx->pc == 0x1DE174u) {
        ctx->pc = 0x1DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE170u;
        // 0x1de174: 0x8c62ee88  lw          $v0, -0x1178($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE178u;
        goto label_1de178;
    }
    ctx->pc = 0x1DE170u;
    {
        const bool branch_taken_0x1de170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE170u;
        // 0x1de174: 0x8c62ee88  lw          $v0, -0x1178($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de170) {
            ctx->pc = 0x1DE19Cu;
            goto label_1de19c;
        }
    }
    ctx->pc = 0x1DE178u;
label_1de178:
    // 0x1de178: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1de178u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1de17c:
    // 0x1de17c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1de180:
    // 0x1de180: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1de180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1de184:
    // 0x1de184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de188:
    // 0x1de188: 0x0  nop
    ctx->pc = 0x1de188u;
    // NOP
label_1de18c:
    // 0x1de18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de190:
    // 0x1de190: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1de190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1de194:
    // 0x1de194: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1de194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1de198:
    // 0x1de198: 0x8c62ee88  lw          $v0, -0x1178($v1)
    ctx->pc = 0x1de198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962824)));
label_1de19c:
    // 0x1de19c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1de1a0:
    if (ctx->pc == 0x1DE1A0u) {
        ctx->pc = 0x1DE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE19Cu;
        // 0x1de1a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1A4u;
        goto label_1de1a4;
    }
    ctx->pc = 0x1DE19Cu;
    {
        const bool branch_taken_0x1de19c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE19Cu;
        // 0x1de1a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de19c) {
            ctx->pc = 0x1DE1B8u;
            goto label_1de1b8;
        }
    }
    ctx->pc = 0x1DE1A4u;
label_1de1a4:
    // 0x1de1a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de1a8:
    // 0x1de1a8: 0x0  nop
    ctx->pc = 0x1de1a8u;
    // NOP
label_1de1ac:
    // 0x1de1ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1de1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1de1b0:
    // 0x1de1b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de1b4:
    if (ctx->pc == 0x1DE1B4u) {
        ctx->pc = 0x1DE1B8u;
        goto label_1de1b8;
    }
    ctx->pc = 0x1DE1B0u;
    {
        const bool branch_taken_0x1de1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de1b0) {
            ctx->pc = 0x1DE1D0u;
            goto label_1de1d0;
        }
    }
    ctx->pc = 0x1DE1B8u;
label_1de1b8:
    // 0x1de1b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1de1bc:
    // 0x1de1bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1de1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1de1c0:
    // 0x1de1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de1c4:
    // 0x1de1c4: 0x0  nop
    ctx->pc = 0x1de1c4u;
    // NOP
label_1de1c8:
    // 0x1de1c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1de1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1de1cc:
    // 0x1de1cc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1de1ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1de1d0:
    // 0x1de1d0: 0x0  nop
    ctx->pc = 0x1de1d0u;
    // NOP
label_1de1d4:
    // 0x1de1d4: 0x0  nop
    ctx->pc = 0x1de1d4u;
    // NOP
label_1de1d8:
    // 0x1de1d8: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x1de1d8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_1de1dc:
    // 0x1de1dc: 0x92233bac  lbu         $v1, 0x3BAC($s1)
    ctx->pc = 0x1de1dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15276)));
label_1de1e0:
    // 0x1de1e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de1e4:
    // 0x1de1e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1de1e8:
    if (ctx->pc == 0x1DE1E8u) {
        ctx->pc = 0x1DE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E4u;
        // 0x1de1e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1ECu;
        goto label_1de1ec;
    }
    ctx->pc = 0x1DE1E4u;
    {
        const bool branch_taken_0x1de1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E4u;
        // 0x1de1e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1e4) {
            ctx->pc = 0x1DE1F4u;
            goto label_1de1f4;
        }
    }
    ctx->pc = 0x1DE1ECu;
label_1de1ec:
    // 0x1de1ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1de1f0:
    if (ctx->pc == 0x1DE1F0u) {
        ctx->pc = 0x1DE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1ECu;
        // 0x1de1f0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1F4u;
        goto label_1de1f4;
    }
    ctx->pc = 0x1DE1ECu;
    {
        const bool branch_taken_0x1de1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1ECu;
        // 0x1de1f0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1ec) {
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DE1F4u;
label_1de1f4:
    // 0x1de1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de1f8:
    // 0x1de1f8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1de1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1de1fc:
    // 0x1de1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1de200:
    // 0x1de200: 0x24425380  addiu       $v0, $v0, 0x5380
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
label_1de204:
    // 0x1de204: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1de204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1de208:
    // 0x1de208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1de20c:
    // 0x1de20c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1de20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1de210:
    // 0x1de210: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1de210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1de214:
    // 0x1de214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1de214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1de218:
    // 0x1de218: 0xc05e896  jal         func_17A258
label_1de21c:
    if (ctx->pc == 0x1DE21Cu) {
        ctx->pc = 0x1DE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE218u;
        // 0x1de21c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE220u;
        goto label_1de220;
    }
    ctx->pc = 0x1DE218u;
    SET_GPR_U32(ctx, 31, 0x1DE220u);
    ctx->pc = 0x1DE21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE218u;
    // 0x1de21c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1DE218u, 0x1DE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE220u;
label_1de220:
    // 0x1de220: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1de220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1de224:
    // 0x1de224: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de228:
    // 0x1de228: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1de228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1de22c:
    // 0x1de22c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1de230:
    // 0x1de230: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1de230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1de234:
    // 0x1de234: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1de234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1de238:
    // 0x1de238: 0x40f809  jalr        $v0
label_1de23c:
    if (ctx->pc == 0x1DE23Cu) {
        ctx->pc = 0x1DE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE238u;
        // 0x1de23c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE240u;
        goto label_1de240;
    }
    ctx->pc = 0x1DE238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE240u);
        ctx->pc = 0x1DE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE238u;
        // 0x1de23c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE238u, 0x1DE240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE240u;
label_1de240:
    // 0x1de240: 0x8e243b90  lw          $a0, 0x3B90($s1)
    ctx->pc = 0x1de240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15248)));
label_1de244:
    // 0x1de244: 0x8e233b94  lw          $v1, 0x3B94($s1)
    ctx->pc = 0x1de244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15252)));
label_1de248:
    // 0x1de248: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1de248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1de24c:
    // 0x1de24c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1de24cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1de250:
    // 0x1de250: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
label_1de254:
    if (ctx->pc == 0x1DE254u) {
        ctx->pc = 0x1DE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE250u;
        // 0x1de254: 0x8e241b80  lw          $a0, 0x1B80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE258u;
        goto label_1de258;
    }
    ctx->pc = 0x1DE250u;
    {
        const bool branch_taken_0x1de250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de250) {
            ctx->pc = 0x1DE254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE250u;
            // 0x1de254: 0x8e241b80  lw          $a0, 0x1B80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE304u;
            goto label_1de304;
        }
    }
    ctx->pc = 0x1DE258u;
label_1de258:
    // 0x1de258: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1de25c:
    if (ctx->pc == 0x1DE25Cu) {
        ctx->pc = 0x1DE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE258u;
        // 0x1de25c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE260u;
        goto label_1de260;
    }
    ctx->pc = 0x1DE258u;
    {
        const bool branch_taken_0x1de258 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE258u;
        // 0x1de25c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de258) {
            ctx->pc = 0x1DE274u;
            goto label_1de274;
        }
    }
    ctx->pc = 0x1DE260u;
label_1de260:
    // 0x1de260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de264:
    // 0x1de264: 0x0  nop
    ctx->pc = 0x1de264u;
    // NOP
label_1de268:
    // 0x1de268: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1de268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1de26c:
    // 0x1de26c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1de270:
    if (ctx->pc == 0x1DE270u) {
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x8e223b94  lw          $v0, 0x3B94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE274u;
        goto label_1de274;
    }
    ctx->pc = 0x1DE26Cu;
    {
        const bool branch_taken_0x1de26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x8e223b94  lw          $v0, 0x3B94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de26c) {
            ctx->pc = 0x1DE290u;
            goto label_1de290;
        }
    }
    ctx->pc = 0x1DE274u;
label_1de274:
    // 0x1de274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1de278:
    // 0x1de278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1de278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1de27c:
    // 0x1de27c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de280:
    // 0x1de280: 0x0  nop
    ctx->pc = 0x1de280u;
    // NOP
label_1de284:
    // 0x1de284: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1de284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1de288:
    // 0x1de288: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1de288u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1de28c:
    // 0x1de28c: 0x8e223b94  lw          $v0, 0x3B94($s1)
    ctx->pc = 0x1de28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15252)));
label_1de290:
    // 0x1de290: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1de294:
    if (ctx->pc == 0x1DE294u) {
        ctx->pc = 0x1DE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE290u;
        // 0x1de294: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE298u;
        goto label_1de298;
    }
    ctx->pc = 0x1DE290u;
    {
        const bool branch_taken_0x1de290 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE290u;
        // 0x1de294: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de290) {
            ctx->pc = 0x1DE2ACu;
            goto label_1de2ac;
        }
    }
    ctx->pc = 0x1DE298u;
label_1de298:
    // 0x1de298: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1de298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1de29c:
    // 0x1de29c: 0x0  nop
    ctx->pc = 0x1de29cu;
    // NOP
label_1de2a0:
    // 0x1de2a0: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1de2a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1de2a4:
    // 0x1de2a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de2a8:
    if (ctx->pc == 0x1DE2A8u) {
        ctx->pc = 0x1DE2ACu;
        goto label_1de2ac;
    }
    ctx->pc = 0x1DE2A4u;
    {
        const bool branch_taken_0x1de2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de2a4) {
            ctx->pc = 0x1DE2C4u;
            goto label_1de2c4;
        }
    }
    ctx->pc = 0x1DE2ACu;
label_1de2ac:
    // 0x1de2ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1de2b0:
    // 0x1de2b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1de2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1de2b4:
    // 0x1de2b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1de2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1de2b8:
    // 0x1de2b8: 0x0  nop
    ctx->pc = 0x1de2b8u;
    // NOP
label_1de2bc:
    // 0x1de2bc: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1de2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1de2c0:
    // 0x1de2c0: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1de2c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1de2c4:
    // 0x1de2c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1de2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1de2c8:
    // 0x1de2c8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1de2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1de2cc:
    // 0x1de2cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1de2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1de2d0:
    // 0x1de2d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1de2d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1de2d4:
    // 0x1de2d4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1de2d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_1de2d8:
    // 0x1de2d8: 0xc0cdd5a  jal         func_337568
label_1de2dc:
    if (ctx->pc == 0x1DE2DCu) {
        ctx->pc = 0x1DE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2D8u;
        // 0x1de2dc: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE2E0u;
        goto label_1de2e0;
    }
    ctx->pc = 0x1DE2D8u;
    SET_GPR_U32(ctx, 31, 0x1DE2E0u);
    ctx->pc = 0x1DE2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2D8u;
    // 0x1de2dc: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1DE2D8u, 0x1DE2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2E0u;
label_1de2e0:
    // 0x1de2e0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1de2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1de2e4:
    // 0x1de2e4: 0x0  nop
    ctx->pc = 0x1de2e4u;
    // NOP
label_1de2e8:
    // 0x1de2e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1de2ec:
    if (ctx->pc == 0x1DE2ECu) {
        ctx->pc = 0x1DE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2E8u;
        // 0x1de2ec: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE2F0u;
        goto label_1de2f0;
    }
    ctx->pc = 0x1DE2E8u;
    {
        const bool branch_taken_0x1de2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2E8u;
        // 0x1de2ec: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2e8) {
            ctx->pc = 0x1DE2F4u;
            goto label_1de2f4;
        }
    }
    ctx->pc = 0x1DE2F0u;
label_1de2f0:
    // 0x1de2f0: 0x46150069  min.s       $f1, $f0, $f21
    ctx->pc = 0x1de2f0u;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[21]);
label_1de2f4:
    // 0x1de2f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de2f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1de2f8:
    // 0x1de2f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1de2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1de2fc:
    // 0x1de2fc: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x1de2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
label_1de300:
    // 0x1de300: 0x8e241b80  lw          $a0, 0x1B80($s1)
    ctx->pc = 0x1de300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7040)));
label_1de304:
    // 0x1de304: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1de308:
    if (ctx->pc == 0x1DE308u) {
        ctx->pc = 0x1DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE304u;
        // 0x1de308: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE30Cu;
        goto label_1de30c;
    }
    ctx->pc = 0x1DE304u;
    {
        const bool branch_taken_0x1de304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE304u;
        // 0x1de308: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de304) {
            ctx->pc = 0x1DE324u;
            goto label_1de324;
        }
    }
    ctx->pc = 0x1DE30Cu;
label_1de30c:
    // 0x1de30c: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x1de30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_1de310:
    // 0x1de310: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x1de310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_1de314:
    // 0x1de314: 0xa0640214  sb          $a0, 0x214($v1)
    ctx->pc = 0x1de314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 532), (uint8_t)GPR_U32(ctx, 4));
label_1de318:
    // 0x1de318: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1de318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1de31c:
    // 0x1de31c: 0x8e231b80  lw          $v1, 0x1B80($s1)
    ctx->pc = 0x1de31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7040)));
label_1de320:
    // 0x1de320: 0xa0830214  sb          $v1, 0x214($a0)
    ctx->pc = 0x1de320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 532), (uint8_t)GPR_U32(ctx, 3));
label_1de324:
    // 0x1de324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1de328:
    // 0x1de328: 0xc068992  jal         func_1A2648
label_1de32c:
    if (ctx->pc == 0x1DE32Cu) {
        ctx->pc = 0x1DE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE328u;
        // 0x1de32c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE330u;
        goto label_1de330;
    }
    ctx->pc = 0x1DE328u;
    SET_GPR_U32(ctx, 31, 0x1DE330u);
    ctx->pc = 0x1DE32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE328u;
    // 0x1de32c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1DE328u, 0x1DE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE330u;
label_1de330:
    // 0x1de330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1de330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1de334:
    // 0x1de334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1de334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1de338:
    // 0x1de338: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de33c:
    // 0x1de33c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1de33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1de340:
    // 0x1de340: 0xc441ee58  lwc1        $f1, -0x11A8($v0)
    ctx->pc = 0x1de340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1de344:
    // 0x1de344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de348:
    // 0x1de348: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de34c:
    // 0x1de34c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1de34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1de350:
    // 0x1de350: 0xc440ee50  lwc1        $f0, -0x11B0($v0)
    ctx->pc = 0x1de350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de354:
    // 0x1de354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de358:
    // 0x1de358: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1de358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1de35c:
    // 0x1de35c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1de35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1de360:
    // 0x1de360: 0xc073b2c  jal         func_1CECB0
label_1de364:
    if (ctx->pc == 0x1DE364u) {
        ctx->pc = 0x1DE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE360u;
        // 0x1de364: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE368u;
        goto label_1de368;
    }
    ctx->pc = 0x1DE360u;
    SET_GPR_U32(ctx, 31, 0x1DE368u);
    ctx->pc = 0x1DE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE360u;
    // 0x1de364: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECB0u, 0x1DE360u, 0x1DE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE368u;
label_1de368:
    // 0x1de368: 0xc073b50  jal         func_1CED40
label_1de36c:
    if (ctx->pc == 0x1DE36Cu) {
        ctx->pc = 0x1DE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE368u;
        // 0x1de36c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE370u;
        goto label_1de370;
    }
    ctx->pc = 0x1DE368u;
    SET_GPR_U32(ctx, 31, 0x1DE370u);
    ctx->pc = 0x1DE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE368u;
    // 0x1de36c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1DE368u, 0x1DE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE370u;
label_1de370:
    // 0x1de370: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de374:
    // 0x1de374: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1de374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1de378:
    // 0x1de378: 0xc441ee10  lwc1        $f1, -0x11F0($v0)
    ctx->pc = 0x1de378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1de37c:
    // 0x1de37c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1de37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1de380:
    // 0x1de380: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de384:
    // 0x1de384: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de388:
    // 0x1de388: 0xc440ee14  lwc1        $f0, -0x11EC($v0)
    ctx->pc = 0x1de388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de38c:
    // 0x1de38c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de390:
    // 0x1de390: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1de390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1de394:
    // 0x1de394: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1de394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1de398:
    // 0x1de398: 0xc075a58  jal         func_1D6960
label_1de39c:
    if (ctx->pc == 0x1DE39Cu) {
        ctx->pc = 0x1DE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE398u;
        // 0x1de39c: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3A0u;
        goto label_1de3a0;
    }
    ctx->pc = 0x1DE398u;
    SET_GPR_U32(ctx, 31, 0x1DE3A0u);
    ctx->pc = 0x1DE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE398u;
    // 0x1de39c: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6960u, 0x1DE398u, 0x1DE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3A0u;
label_1de3a0:
    // 0x1de3a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de3a4:
    // 0x1de3a4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1de3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1de3a8:
    // 0x1de3a8: 0xc441ee18  lwc1        $f1, -0x11E8($v0)
    ctx->pc = 0x1de3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1de3ac:
    // 0x1de3ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de3b0:
    // 0x1de3b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de3b4:
    // 0x1de3b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1de3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1de3b8:
    // 0x1de3b8: 0xc440ee1c  lwc1        $f0, -0x11E4($v0)
    ctx->pc = 0x1de3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de3bc:
    // 0x1de3bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de3c0:
    // 0x1de3c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1de3c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1de3c4:
    // 0x1de3c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1de3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1de3c8:
    // 0x1de3c8: 0xc075a60  jal         func_1D6980
label_1de3cc:
    if (ctx->pc == 0x1DE3CCu) {
        ctx->pc = 0x1DE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3C8u;
        // 0x1de3cc: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3D0u;
        goto label_1de3d0;
    }
    ctx->pc = 0x1DE3C8u;
    SET_GPR_U32(ctx, 31, 0x1DE3D0u);
    ctx->pc = 0x1DE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3C8u;
    // 0x1de3cc: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6980u, 0x1DE3C8u, 0x1DE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3D0u;
label_1de3d0:
    // 0x1de3d0: 0xc075aa4  jal         func_1D6A90
label_1de3d4:
    if (ctx->pc == 0x1DE3D4u) {
        ctx->pc = 0x1DE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3D0u;
        // 0x1de3d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3D8u;
        goto label_1de3d8;
    }
    ctx->pc = 0x1DE3D0u;
    SET_GPR_U32(ctx, 31, 0x1DE3D8u);
    ctx->pc = 0x1DE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3D0u;
    // 0x1de3d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A90u, 0x1DE3D0u, 0x1DE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3D8u;
label_1de3d8:
    // 0x1de3d8: 0x8e221ba4  lw          $v0, 0x1BA4($s1)
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7076)));
label_1de3dc:
    // 0x1de3dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1de3e0:
    if (ctx->pc == 0x1DE3E0u) {
        ctx->pc = 0x1DE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3DCu;
        // 0x1de3e0: 0x8e221b7c  lw          $v0, 0x1B7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3E4u;
        goto label_1de3e4;
    }
    ctx->pc = 0x1DE3DCu;
    {
        const bool branch_taken_0x1de3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de3dc) {
            ctx->pc = 0x1DE3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE3DCu;
            // 0x1de3e0: 0x8e221b7c  lw          $v0, 0x1B7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE3F0u;
            goto label_1de3f0;
        }
    }
    ctx->pc = 0x1DE3E4u;
label_1de3e4:
    // 0x1de3e4: 0xc0799de  jal         func_1E6778
label_1de3e8:
    if (ctx->pc == 0x1DE3E8u) {
        ctx->pc = 0x1DE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3E4u;
        // 0x1de3e8: 0x26243bb0  addiu       $a0, $s1, 0x3BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3ECu;
        goto label_1de3ec;
    }
    ctx->pc = 0x1DE3E4u;
    SET_GPR_U32(ctx, 31, 0x1DE3ECu);
    ctx->pc = 0x1DE3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3E4u;
    // 0x1de3e8: 0x26243bb0  addiu       $a0, $s1, 0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6778u, 0x1DE3E4u, 0x1DE3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3ECu;
label_1de3ec:
    // 0x1de3ec: 0x8e221b7c  lw          $v0, 0x1B7C($s1)
    ctx->pc = 0x1de3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7036)));
label_1de3f0:
    // 0x1de3f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1de3f4:
    if (ctx->pc == 0x1DE3F4u) {
        ctx->pc = 0x1DE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3F0u;
        // 0x1de3f4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3F8u;
        goto label_1de3f8;
    }
    ctx->pc = 0x1DE3F0u;
    {
        const bool branch_taken_0x1de3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3F0u;
        // 0x1de3f4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3f0) {
            ctx->pc = 0x1DE420u;
            goto label_1de420;
        }
    }
    ctx->pc = 0x1DE3F8u;
label_1de3f8:
    // 0x1de3f8: 0xc043d5e  jal         func_10F578
label_1de3fc:
    if (ctx->pc == 0x1DE3FCu) {
        ctx->pc = 0x1DE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3F8u;
        // 0x1de3fc: 0x26241b84  addiu       $a0, $s1, 0x1B84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7044));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE400u;
        goto label_1de400;
    }
    ctx->pc = 0x1DE3F8u;
    SET_GPR_U32(ctx, 31, 0x1DE400u);
    ctx->pc = 0x1DE3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3F8u;
    // 0x1de3fc: 0x26241b84  addiu       $a0, $s1, 0x1B84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1DE3F8u, 0x1DE400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE400u;
label_1de400:
    // 0x1de400: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1de404:
    if (ctx->pc == 0x1DE404u) {
        ctx->pc = 0x1DE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE400u;
        // 0x1de404: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE408u;
        goto label_1de408;
    }
    ctx->pc = 0x1DE400u;
    {
        const bool branch_taken_0x1de400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE400u;
        // 0x1de404: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de400) {
            ctx->pc = 0x1DE420u;
            goto label_1de420;
        }
    }
    ctx->pc = 0x1DE408u;
label_1de408:
    // 0x1de408: 0xc0553ca  jal         func_154F28
label_1de40c:
    if (ctx->pc == 0x1DE40Cu) {
        ctx->pc = 0x1DE410u;
        goto label_1de410;
    }
    ctx->pc = 0x1DE408u;
    SET_GPR_U32(ctx, 31, 0x1DE410u);
    ctx->pc = 0x154F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F28u, 0x1DE408u, 0x1DE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE410u;
label_1de410:
    // 0x1de410: 0xae201b7c  sw          $zero, 0x1B7C($s1)
    ctx->pc = 0x1de410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7036), GPR_U32(ctx, 0));
label_1de414:
    // 0x1de414: 0xae201b80  sw          $zero, 0x1B80($s1)
    ctx->pc = 0x1de414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7040), GPR_U32(ctx, 0));
label_1de418:
    // 0x1de418: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1de418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1de41c:
    // 0x1de41c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1de41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1de420:
    // 0x1de420: 0x8c62ee48  lw          $v0, -0x11B8($v1)
    ctx->pc = 0x1de420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962760)));
label_1de424:
    // 0x1de424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1de428:
    if (ctx->pc == 0x1DE428u) {
        ctx->pc = 0x1DE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE424u;
        // 0x1de428: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE42Cu;
        goto label_1de42c;
    }
    ctx->pc = 0x1DE424u;
    {
        const bool branch_taken_0x1de424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE424u;
        // 0x1de428: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de424) {
            ctx->pc = 0x1DE43Cu;
            goto label_1de43c;
        }
    }
    ctx->pc = 0x1DE42Cu;
label_1de42c:
    // 0x1de42c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1de430:
    if (ctx->pc == 0x1DE430u) {
        ctx->pc = 0x1DE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE42Cu;
        // 0x1de430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE434u;
        goto label_1de434;
    }
    ctx->pc = 0x1DE42Cu;
    {
        const bool branch_taken_0x1de42c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE42Cu;
        // 0x1de430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de42c) {
            ctx->pc = 0x1DE448u;
            goto label_1de448;
        }
    }
    ctx->pc = 0x1DE434u;
label_1de434:
    // 0x1de434: 0x10000005  b           . + 4 + (0x5 << 2)
label_1de438:
    if (ctx->pc == 0x1DE438u) {
        ctx->pc = 0x1DE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE434u;
        // 0x1de438: 0xac60ee48  sw          $zero, -0x11B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE43Cu;
        goto label_1de43c;
    }
    ctx->pc = 0x1DE434u;
    {
        const bool branch_taken_0x1de434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE434u;
        // 0x1de438: 0xac60ee48  sw          $zero, -0x11B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de434) {
            ctx->pc = 0x1DE44Cu;
            goto label_1de44c;
        }
    }
    ctx->pc = 0x1DE43Cu;
label_1de43c:
    // 0x1de43c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1de43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1de440:
    // 0x1de440: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1de444:
    if (ctx->pc == 0x1DE444u) {
        ctx->pc = 0x1DE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE440u;
        // 0x1de444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE448u;
        goto label_1de448;
    }
    ctx->pc = 0x1DE440u;
    {
        const bool branch_taken_0x1de440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE440u;
        // 0x1de444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de440) {
            ctx->pc = 0x1DE44Cu;
            goto label_1de44c;
        }
    }
    ctx->pc = 0x1DE448u;
label_1de448:
    // 0x1de448: 0xae221b80  sw          $v0, 0x1B80($s1)
    ctx->pc = 0x1de448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7040), GPR_U32(ctx, 2));
label_1de44c:
    // 0x1de44c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1de44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1de450:
    // 0x1de450: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1de450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1de454:
    // 0x1de454: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1de454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1de458:
    // 0x1de458: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1de458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1de45c:
    // 0x1de45c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1de45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1de460:
    // 0x1de460: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1de460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1de464:
    // 0x1de464: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1de464u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1de468:
    // 0x1de468: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1de468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1de46c:
    // 0x1de46c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1de46cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1de470:
    // 0x1de470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1de470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1de474:
    // 0x1de474: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1de474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1de478:
    // 0x1de478: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1de478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1de47c:
    // 0x1de47c: 0x3e00008  jr          $ra
label_1de480:
    if (ctx->pc == 0x1DE480u) {
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE484u;
        goto label_1de484;
    }
    ctx->pc = 0x1DE47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE484u;
label_1de484:
    // 0x1de484: 0x0  nop
    ctx->pc = 0x1de484u;
    // NOP
    ctx->pc = 0x1de488u;
}
