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

// Function: sub_002DACF8
// Address: 0x2dacf8 - 0x2db390
void sub_002DACF8_0x2dacf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DACF8_0x2dacf8");
#endif

    switch (ctx->pc) {
        case 0x2dacf8u: goto label_2dacf8;
        case 0x2dacfcu: goto label_2dacfc;
        case 0x2dad00u: goto label_2dad00;
        case 0x2dad04u: goto label_2dad04;
        case 0x2dad08u: goto label_2dad08;
        case 0x2dad0cu: goto label_2dad0c;
        case 0x2dad10u: goto label_2dad10;
        case 0x2dad14u: goto label_2dad14;
        case 0x2dad18u: goto label_2dad18;
        case 0x2dad1cu: goto label_2dad1c;
        case 0x2dad20u: goto label_2dad20;
        case 0x2dad24u: goto label_2dad24;
        case 0x2dad28u: goto label_2dad28;
        case 0x2dad2cu: goto label_2dad2c;
        case 0x2dad30u: goto label_2dad30;
        case 0x2dad34u: goto label_2dad34;
        case 0x2dad38u: goto label_2dad38;
        case 0x2dad3cu: goto label_2dad3c;
        case 0x2dad40u: goto label_2dad40;
        case 0x2dad44u: goto label_2dad44;
        case 0x2dad48u: goto label_2dad48;
        case 0x2dad4cu: goto label_2dad4c;
        case 0x2dad50u: goto label_2dad50;
        case 0x2dad54u: goto label_2dad54;
        case 0x2dad58u: goto label_2dad58;
        case 0x2dad5cu: goto label_2dad5c;
        case 0x2dad60u: goto label_2dad60;
        case 0x2dad64u: goto label_2dad64;
        case 0x2dad68u: goto label_2dad68;
        case 0x2dad6cu: goto label_2dad6c;
        case 0x2dad70u: goto label_2dad70;
        case 0x2dad74u: goto label_2dad74;
        case 0x2dad78u: goto label_2dad78;
        case 0x2dad7cu: goto label_2dad7c;
        case 0x2dad80u: goto label_2dad80;
        case 0x2dad84u: goto label_2dad84;
        case 0x2dad88u: goto label_2dad88;
        case 0x2dad8cu: goto label_2dad8c;
        case 0x2dad90u: goto label_2dad90;
        case 0x2dad94u: goto label_2dad94;
        case 0x2dad98u: goto label_2dad98;
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dada0u: goto label_2dada0;
        case 0x2dada4u: goto label_2dada4;
        case 0x2dada8u: goto label_2dada8;
        case 0x2dadacu: goto label_2dadac;
        case 0x2dadb0u: goto label_2dadb0;
        case 0x2dadb4u: goto label_2dadb4;
        case 0x2dadb8u: goto label_2dadb8;
        case 0x2dadbcu: goto label_2dadbc;
        case 0x2dadc0u: goto label_2dadc0;
        case 0x2dadc4u: goto label_2dadc4;
        case 0x2dadc8u: goto label_2dadc8;
        case 0x2dadccu: goto label_2dadcc;
        case 0x2dadd0u: goto label_2dadd0;
        case 0x2dadd4u: goto label_2dadd4;
        case 0x2dadd8u: goto label_2dadd8;
        case 0x2daddcu: goto label_2daddc;
        case 0x2dade0u: goto label_2dade0;
        case 0x2dade4u: goto label_2dade4;
        case 0x2dade8u: goto label_2dade8;
        case 0x2dadecu: goto label_2dadec;
        case 0x2dadf0u: goto label_2dadf0;
        case 0x2dadf4u: goto label_2dadf4;
        case 0x2dadf8u: goto label_2dadf8;
        case 0x2dadfcu: goto label_2dadfc;
        case 0x2dae00u: goto label_2dae00;
        case 0x2dae04u: goto label_2dae04;
        case 0x2dae08u: goto label_2dae08;
        case 0x2dae0cu: goto label_2dae0c;
        case 0x2dae10u: goto label_2dae10;
        case 0x2dae14u: goto label_2dae14;
        case 0x2dae18u: goto label_2dae18;
        case 0x2dae1cu: goto label_2dae1c;
        case 0x2dae20u: goto label_2dae20;
        case 0x2dae24u: goto label_2dae24;
        case 0x2dae28u: goto label_2dae28;
        case 0x2dae2cu: goto label_2dae2c;
        case 0x2dae30u: goto label_2dae30;
        case 0x2dae34u: goto label_2dae34;
        case 0x2dae38u: goto label_2dae38;
        case 0x2dae3cu: goto label_2dae3c;
        case 0x2dae40u: goto label_2dae40;
        case 0x2dae44u: goto label_2dae44;
        case 0x2dae48u: goto label_2dae48;
        case 0x2dae4cu: goto label_2dae4c;
        case 0x2dae50u: goto label_2dae50;
        case 0x2dae54u: goto label_2dae54;
        case 0x2dae58u: goto label_2dae58;
        case 0x2dae5cu: goto label_2dae5c;
        case 0x2dae60u: goto label_2dae60;
        case 0x2dae64u: goto label_2dae64;
        case 0x2dae68u: goto label_2dae68;
        case 0x2dae6cu: goto label_2dae6c;
        case 0x2dae70u: goto label_2dae70;
        case 0x2dae74u: goto label_2dae74;
        case 0x2dae78u: goto label_2dae78;
        case 0x2dae7cu: goto label_2dae7c;
        case 0x2dae80u: goto label_2dae80;
        case 0x2dae84u: goto label_2dae84;
        case 0x2dae88u: goto label_2dae88;
        case 0x2dae8cu: goto label_2dae8c;
        case 0x2dae90u: goto label_2dae90;
        case 0x2dae94u: goto label_2dae94;
        case 0x2dae98u: goto label_2dae98;
        case 0x2dae9cu: goto label_2dae9c;
        case 0x2daea0u: goto label_2daea0;
        case 0x2daea4u: goto label_2daea4;
        case 0x2daea8u: goto label_2daea8;
        case 0x2daeacu: goto label_2daeac;
        case 0x2daeb0u: goto label_2daeb0;
        case 0x2daeb4u: goto label_2daeb4;
        case 0x2daeb8u: goto label_2daeb8;
        case 0x2daebcu: goto label_2daebc;
        case 0x2daec0u: goto label_2daec0;
        case 0x2daec4u: goto label_2daec4;
        case 0x2daec8u: goto label_2daec8;
        case 0x2daeccu: goto label_2daecc;
        case 0x2daed0u: goto label_2daed0;
        case 0x2daed4u: goto label_2daed4;
        case 0x2daed8u: goto label_2daed8;
        case 0x2daedcu: goto label_2daedc;
        case 0x2daee0u: goto label_2daee0;
        case 0x2daee4u: goto label_2daee4;
        case 0x2daee8u: goto label_2daee8;
        case 0x2daeecu: goto label_2daeec;
        case 0x2daef0u: goto label_2daef0;
        case 0x2daef4u: goto label_2daef4;
        case 0x2daef8u: goto label_2daef8;
        case 0x2daefcu: goto label_2daefc;
        case 0x2daf00u: goto label_2daf00;
        case 0x2daf04u: goto label_2daf04;
        case 0x2daf08u: goto label_2daf08;
        case 0x2daf0cu: goto label_2daf0c;
        case 0x2daf10u: goto label_2daf10;
        case 0x2daf14u: goto label_2daf14;
        case 0x2daf18u: goto label_2daf18;
        case 0x2daf1cu: goto label_2daf1c;
        case 0x2daf20u: goto label_2daf20;
        case 0x2daf24u: goto label_2daf24;
        case 0x2daf28u: goto label_2daf28;
        case 0x2daf2cu: goto label_2daf2c;
        case 0x2daf30u: goto label_2daf30;
        case 0x2daf34u: goto label_2daf34;
        case 0x2daf38u: goto label_2daf38;
        case 0x2daf3cu: goto label_2daf3c;
        case 0x2daf40u: goto label_2daf40;
        case 0x2daf44u: goto label_2daf44;
        case 0x2daf48u: goto label_2daf48;
        case 0x2daf4cu: goto label_2daf4c;
        case 0x2daf50u: goto label_2daf50;
        case 0x2daf54u: goto label_2daf54;
        case 0x2daf58u: goto label_2daf58;
        case 0x2daf5cu: goto label_2daf5c;
        case 0x2daf60u: goto label_2daf60;
        case 0x2daf64u: goto label_2daf64;
        case 0x2daf68u: goto label_2daf68;
        case 0x2daf6cu: goto label_2daf6c;
        case 0x2daf70u: goto label_2daf70;
        case 0x2daf74u: goto label_2daf74;
        case 0x2daf78u: goto label_2daf78;
        case 0x2daf7cu: goto label_2daf7c;
        case 0x2daf80u: goto label_2daf80;
        case 0x2daf84u: goto label_2daf84;
        case 0x2daf88u: goto label_2daf88;
        case 0x2daf8cu: goto label_2daf8c;
        case 0x2daf90u: goto label_2daf90;
        case 0x2daf94u: goto label_2daf94;
        case 0x2daf98u: goto label_2daf98;
        case 0x2daf9cu: goto label_2daf9c;
        case 0x2dafa0u: goto label_2dafa0;
        case 0x2dafa4u: goto label_2dafa4;
        case 0x2dafa8u: goto label_2dafa8;
        case 0x2dafacu: goto label_2dafac;
        case 0x2dafb0u: goto label_2dafb0;
        case 0x2dafb4u: goto label_2dafb4;
        case 0x2dafb8u: goto label_2dafb8;
        case 0x2dafbcu: goto label_2dafbc;
        case 0x2dafc0u: goto label_2dafc0;
        case 0x2dafc4u: goto label_2dafc4;
        case 0x2dafc8u: goto label_2dafc8;
        case 0x2dafccu: goto label_2dafcc;
        case 0x2dafd0u: goto label_2dafd0;
        case 0x2dafd4u: goto label_2dafd4;
        case 0x2dafd8u: goto label_2dafd8;
        case 0x2dafdcu: goto label_2dafdc;
        case 0x2dafe0u: goto label_2dafe0;
        case 0x2dafe4u: goto label_2dafe4;
        case 0x2dafe8u: goto label_2dafe8;
        case 0x2dafecu: goto label_2dafec;
        case 0x2daff0u: goto label_2daff0;
        case 0x2daff4u: goto label_2daff4;
        case 0x2daff8u: goto label_2daff8;
        case 0x2daffcu: goto label_2daffc;
        case 0x2db000u: goto label_2db000;
        case 0x2db004u: goto label_2db004;
        case 0x2db008u: goto label_2db008;
        case 0x2db00cu: goto label_2db00c;
        case 0x2db010u: goto label_2db010;
        case 0x2db014u: goto label_2db014;
        case 0x2db018u: goto label_2db018;
        case 0x2db01cu: goto label_2db01c;
        case 0x2db020u: goto label_2db020;
        case 0x2db024u: goto label_2db024;
        case 0x2db028u: goto label_2db028;
        case 0x2db02cu: goto label_2db02c;
        case 0x2db030u: goto label_2db030;
        case 0x2db034u: goto label_2db034;
        case 0x2db038u: goto label_2db038;
        case 0x2db03cu: goto label_2db03c;
        case 0x2db040u: goto label_2db040;
        case 0x2db044u: goto label_2db044;
        case 0x2db048u: goto label_2db048;
        case 0x2db04cu: goto label_2db04c;
        case 0x2db050u: goto label_2db050;
        case 0x2db054u: goto label_2db054;
        case 0x2db058u: goto label_2db058;
        case 0x2db05cu: goto label_2db05c;
        case 0x2db060u: goto label_2db060;
        case 0x2db064u: goto label_2db064;
        case 0x2db068u: goto label_2db068;
        case 0x2db06cu: goto label_2db06c;
        case 0x2db070u: goto label_2db070;
        case 0x2db074u: goto label_2db074;
        case 0x2db078u: goto label_2db078;
        case 0x2db07cu: goto label_2db07c;
        case 0x2db080u: goto label_2db080;
        case 0x2db084u: goto label_2db084;
        case 0x2db088u: goto label_2db088;
        case 0x2db08cu: goto label_2db08c;
        case 0x2db090u: goto label_2db090;
        case 0x2db094u: goto label_2db094;
        case 0x2db098u: goto label_2db098;
        case 0x2db09cu: goto label_2db09c;
        case 0x2db0a0u: goto label_2db0a0;
        case 0x2db0a4u: goto label_2db0a4;
        case 0x2db0a8u: goto label_2db0a8;
        case 0x2db0acu: goto label_2db0ac;
        case 0x2db0b0u: goto label_2db0b0;
        case 0x2db0b4u: goto label_2db0b4;
        case 0x2db0b8u: goto label_2db0b8;
        case 0x2db0bcu: goto label_2db0bc;
        case 0x2db0c0u: goto label_2db0c0;
        case 0x2db0c4u: goto label_2db0c4;
        case 0x2db0c8u: goto label_2db0c8;
        case 0x2db0ccu: goto label_2db0cc;
        case 0x2db0d0u: goto label_2db0d0;
        case 0x2db0d4u: goto label_2db0d4;
        case 0x2db0d8u: goto label_2db0d8;
        case 0x2db0dcu: goto label_2db0dc;
        case 0x2db0e0u: goto label_2db0e0;
        case 0x2db0e4u: goto label_2db0e4;
        case 0x2db0e8u: goto label_2db0e8;
        case 0x2db0ecu: goto label_2db0ec;
        case 0x2db0f0u: goto label_2db0f0;
        case 0x2db0f4u: goto label_2db0f4;
        case 0x2db0f8u: goto label_2db0f8;
        case 0x2db0fcu: goto label_2db0fc;
        case 0x2db100u: goto label_2db100;
        case 0x2db104u: goto label_2db104;
        case 0x2db108u: goto label_2db108;
        case 0x2db10cu: goto label_2db10c;
        case 0x2db110u: goto label_2db110;
        case 0x2db114u: goto label_2db114;
        case 0x2db118u: goto label_2db118;
        case 0x2db11cu: goto label_2db11c;
        case 0x2db120u: goto label_2db120;
        case 0x2db124u: goto label_2db124;
        case 0x2db128u: goto label_2db128;
        case 0x2db12cu: goto label_2db12c;
        case 0x2db130u: goto label_2db130;
        case 0x2db134u: goto label_2db134;
        case 0x2db138u: goto label_2db138;
        case 0x2db13cu: goto label_2db13c;
        case 0x2db140u: goto label_2db140;
        case 0x2db144u: goto label_2db144;
        case 0x2db148u: goto label_2db148;
        case 0x2db14cu: goto label_2db14c;
        case 0x2db150u: goto label_2db150;
        case 0x2db154u: goto label_2db154;
        case 0x2db158u: goto label_2db158;
        case 0x2db15cu: goto label_2db15c;
        case 0x2db160u: goto label_2db160;
        case 0x2db164u: goto label_2db164;
        case 0x2db168u: goto label_2db168;
        case 0x2db16cu: goto label_2db16c;
        case 0x2db170u: goto label_2db170;
        case 0x2db174u: goto label_2db174;
        case 0x2db178u: goto label_2db178;
        case 0x2db17cu: goto label_2db17c;
        case 0x2db180u: goto label_2db180;
        case 0x2db184u: goto label_2db184;
        case 0x2db188u: goto label_2db188;
        case 0x2db18cu: goto label_2db18c;
        case 0x2db190u: goto label_2db190;
        case 0x2db194u: goto label_2db194;
        case 0x2db198u: goto label_2db198;
        case 0x2db19cu: goto label_2db19c;
        case 0x2db1a0u: goto label_2db1a0;
        case 0x2db1a4u: goto label_2db1a4;
        case 0x2db1a8u: goto label_2db1a8;
        case 0x2db1acu: goto label_2db1ac;
        case 0x2db1b0u: goto label_2db1b0;
        case 0x2db1b4u: goto label_2db1b4;
        case 0x2db1b8u: goto label_2db1b8;
        case 0x2db1bcu: goto label_2db1bc;
        case 0x2db1c0u: goto label_2db1c0;
        case 0x2db1c4u: goto label_2db1c4;
        case 0x2db1c8u: goto label_2db1c8;
        case 0x2db1ccu: goto label_2db1cc;
        case 0x2db1d0u: goto label_2db1d0;
        case 0x2db1d4u: goto label_2db1d4;
        case 0x2db1d8u: goto label_2db1d8;
        case 0x2db1dcu: goto label_2db1dc;
        case 0x2db1e0u: goto label_2db1e0;
        case 0x2db1e4u: goto label_2db1e4;
        case 0x2db1e8u: goto label_2db1e8;
        case 0x2db1ecu: goto label_2db1ec;
        case 0x2db1f0u: goto label_2db1f0;
        case 0x2db1f4u: goto label_2db1f4;
        case 0x2db1f8u: goto label_2db1f8;
        case 0x2db1fcu: goto label_2db1fc;
        case 0x2db200u: goto label_2db200;
        case 0x2db204u: goto label_2db204;
        case 0x2db208u: goto label_2db208;
        case 0x2db20cu: goto label_2db20c;
        case 0x2db210u: goto label_2db210;
        case 0x2db214u: goto label_2db214;
        case 0x2db218u: goto label_2db218;
        case 0x2db21cu: goto label_2db21c;
        case 0x2db220u: goto label_2db220;
        case 0x2db224u: goto label_2db224;
        case 0x2db228u: goto label_2db228;
        case 0x2db22cu: goto label_2db22c;
        case 0x2db230u: goto label_2db230;
        case 0x2db234u: goto label_2db234;
        case 0x2db238u: goto label_2db238;
        case 0x2db23cu: goto label_2db23c;
        case 0x2db240u: goto label_2db240;
        case 0x2db244u: goto label_2db244;
        case 0x2db248u: goto label_2db248;
        case 0x2db24cu: goto label_2db24c;
        case 0x2db250u: goto label_2db250;
        case 0x2db254u: goto label_2db254;
        case 0x2db258u: goto label_2db258;
        case 0x2db25cu: goto label_2db25c;
        case 0x2db260u: goto label_2db260;
        case 0x2db264u: goto label_2db264;
        case 0x2db268u: goto label_2db268;
        case 0x2db26cu: goto label_2db26c;
        case 0x2db270u: goto label_2db270;
        case 0x2db274u: goto label_2db274;
        case 0x2db278u: goto label_2db278;
        case 0x2db27cu: goto label_2db27c;
        case 0x2db280u: goto label_2db280;
        case 0x2db284u: goto label_2db284;
        case 0x2db288u: goto label_2db288;
        case 0x2db28cu: goto label_2db28c;
        case 0x2db290u: goto label_2db290;
        case 0x2db294u: goto label_2db294;
        case 0x2db298u: goto label_2db298;
        case 0x2db29cu: goto label_2db29c;
        case 0x2db2a0u: goto label_2db2a0;
        case 0x2db2a4u: goto label_2db2a4;
        case 0x2db2a8u: goto label_2db2a8;
        case 0x2db2acu: goto label_2db2ac;
        case 0x2db2b0u: goto label_2db2b0;
        case 0x2db2b4u: goto label_2db2b4;
        case 0x2db2b8u: goto label_2db2b8;
        case 0x2db2bcu: goto label_2db2bc;
        case 0x2db2c0u: goto label_2db2c0;
        case 0x2db2c4u: goto label_2db2c4;
        case 0x2db2c8u: goto label_2db2c8;
        case 0x2db2ccu: goto label_2db2cc;
        case 0x2db2d0u: goto label_2db2d0;
        case 0x2db2d4u: goto label_2db2d4;
        case 0x2db2d8u: goto label_2db2d8;
        case 0x2db2dcu: goto label_2db2dc;
        case 0x2db2e0u: goto label_2db2e0;
        case 0x2db2e4u: goto label_2db2e4;
        case 0x2db2e8u: goto label_2db2e8;
        case 0x2db2ecu: goto label_2db2ec;
        case 0x2db2f0u: goto label_2db2f0;
        case 0x2db2f4u: goto label_2db2f4;
        case 0x2db2f8u: goto label_2db2f8;
        case 0x2db2fcu: goto label_2db2fc;
        case 0x2db300u: goto label_2db300;
        case 0x2db304u: goto label_2db304;
        case 0x2db308u: goto label_2db308;
        case 0x2db30cu: goto label_2db30c;
        case 0x2db310u: goto label_2db310;
        case 0x2db314u: goto label_2db314;
        case 0x2db318u: goto label_2db318;
        case 0x2db31cu: goto label_2db31c;
        case 0x2db320u: goto label_2db320;
        case 0x2db324u: goto label_2db324;
        case 0x2db328u: goto label_2db328;
        case 0x2db32cu: goto label_2db32c;
        case 0x2db330u: goto label_2db330;
        case 0x2db334u: goto label_2db334;
        case 0x2db338u: goto label_2db338;
        case 0x2db33cu: goto label_2db33c;
        case 0x2db340u: goto label_2db340;
        case 0x2db344u: goto label_2db344;
        case 0x2db348u: goto label_2db348;
        case 0x2db34cu: goto label_2db34c;
        case 0x2db350u: goto label_2db350;
        case 0x2db354u: goto label_2db354;
        case 0x2db358u: goto label_2db358;
        case 0x2db35cu: goto label_2db35c;
        case 0x2db360u: goto label_2db360;
        case 0x2db364u: goto label_2db364;
        case 0x2db368u: goto label_2db368;
        case 0x2db36cu: goto label_2db36c;
        case 0x2db370u: goto label_2db370;
        case 0x2db374u: goto label_2db374;
        case 0x2db378u: goto label_2db378;
        case 0x2db37cu: goto label_2db37c;
        case 0x2db380u: goto label_2db380;
        case 0x2db384u: goto label_2db384;
        case 0x2db388u: goto label_2db388;
        case 0x2db38cu: goto label_2db38c;
        default: break;
    }

    ctx->pc = 0x2dacf8u;

label_2dacf8:
    // 0x2dacf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dacf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2dacfc:
    // 0x2dacfc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2dacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2dad00:
    // 0x2dad00: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2dad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2dad04:
    // 0x2dad04: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2dad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2dad08:
    // 0x2dad08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dad08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dad0c:
    // 0x2dad0c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2dad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2dad10:
    // 0x2dad10: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2dad10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dad14:
    // 0x2dad14: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2dad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2dad18:
    // 0x2dad18: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2dad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2dad1c:
    // 0x2dad1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2dad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2dad20:
    // 0x2dad20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dad24:
    // 0x2dad24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2dad28:
    // 0x2dad28: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2dad28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2dad2c:
    // 0x2dad2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dad30:
    // 0x2dad30: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2dad30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dad34:
    // 0x2dad34: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2dad34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2dad38:
    // 0x2dad38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dad3c:
    // 0x2dad3c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2dad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2dad40:
    // 0x2dad40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2dad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2dad44:
    // 0x2dad44: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2dad44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dad48:
    // 0x2dad48: 0xc08bfbc  jal         func_22FEF0
label_2dad4c:
    if (ctx->pc == 0x2DAD4Cu) {
        ctx->pc = 0x2DAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD48u;
        // 0x2dad4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD50u;
        goto label_2dad50;
    }
    ctx->pc = 0x2DAD48u;
    SET_GPR_U32(ctx, 31, 0x2DAD50u);
    ctx->pc = 0x2DAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD48u;
    // 0x2dad4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DAD48u, 0x2DAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD50u;
label_2dad50:
    // 0x2dad50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2dad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2dad54:
    // 0x2dad54: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2dad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2dad58:
    // 0x2dad58: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2dad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2dad5c:
    // 0x2dad5c: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2dad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2dad60:
    // 0x2dad60: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2dad60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2dad64:
    // 0x2dad64: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2dad68:
    if (ctx->pc == 0x2DAD68u) {
        ctx->pc = 0x2DAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD64u;
        // 0x2dad68: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD6Cu;
        goto label_2dad6c;
    }
    ctx->pc = 0x2DAD64u;
    {
        const bool branch_taken_0x2dad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD64u;
        // 0x2dad68: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad64) {
            ctx->pc = 0x2DAE68u;
            goto label_2dae68;
        }
    }
    ctx->pc = 0x2DAD6Cu;
label_2dad6c:
    // 0x2dad6c: 0x24621f40  addiu       $v0, $v1, 0x1F40
    ctx->pc = 0x2dad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
label_2dad70:
    // 0x2dad70: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2dad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2dad74:
    // 0x2dad74: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x2dad74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_2dad78:
    // 0x2dad78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dad78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dad7c:
    // 0x2dad7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dad80:
    // 0x2dad80: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2dad80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_2dad84:
    // 0x2dad84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dad84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dad88:
    // 0x2dad88: 0xc04808c  jal         func_120230
label_2dad8c:
    if (ctx->pc == 0x2DAD8Cu) {
        ctx->pc = 0x2DAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD88u;
        // 0x2dad8c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD90u;
        goto label_2dad90;
    }
    ctx->pc = 0x2DAD88u;
    SET_GPR_U32(ctx, 31, 0x2DAD90u);
    ctx->pc = 0x2DAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD88u;
    // 0x2dad8c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2DAD88u, 0x2DAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD90u;
label_2dad90:
    // 0x2dad90: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x2dad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_2dad94:
    // 0x2dad94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dad94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dad98:
    // 0x2dad98: 0x0  nop
    ctx->pc = 0x2dad98u;
    // NOP
label_2dad9c:
    // 0x2dad9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dad9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dada0:
    // 0x2dada0: 0x0  nop
    ctx->pc = 0x2dada0u;
    // NOP
label_2dada4:
    // 0x2dada4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2dada8:
    if (ctx->pc == 0x2DADA8u) {
        ctx->pc = 0x2DADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADA4u;
        // 0x2dada8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADACu;
        goto label_2dadac;
    }
    ctx->pc = 0x2DADA4u;
    {
        const bool branch_taken_0x2dada4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADA4u;
        // 0x2dada8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dada4) {
            ctx->pc = 0x2DADDCu;
            goto label_2daddc;
        }
    }
    ctx->pc = 0x2DADACu;
label_2dadac:
    // 0x2dadac: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2dadacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2dadb0:
    // 0x2dadb0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2dadb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2dadb4:
    // 0x2dadb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dadb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dadb8:
    // 0x2dadb8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dadb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dadbc:
    // 0x2dadbc: 0xc0480ba  jal         func_1202E8
label_2dadc0:
    if (ctx->pc == 0x2DADC0u) {
        ctx->pc = 0x2DADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADBCu;
        // 0x2dadc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADC4u;
        goto label_2dadc4;
    }
    ctx->pc = 0x2DADBCu;
    SET_GPR_U32(ctx, 31, 0x2DADC4u);
    ctx->pc = 0x2DADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADBCu;
    // 0x2dadc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x2DADBCu, 0x2DADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADC4u;
label_2dadc4:
    // 0x2dadc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2dadc8:
    if (ctx->pc == 0x2DADC8u) {
        ctx->pc = 0x2DADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADC4u;
        // 0x2dadc8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADCCu;
        goto label_2dadcc;
    }
    ctx->pc = 0x2DADC4u;
    {
        const bool branch_taken_0x2dadc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADC4u;
        // 0x2dadc8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dadc4) {
            ctx->pc = 0x2DADDCu;
            goto label_2daddc;
        }
    }
    ctx->pc = 0x2DADCCu;
label_2dadcc:
    // 0x2dadcc: 0xc08c0aa  jal         func_2302A8
label_2dadd0:
    if (ctx->pc == 0x2DADD0u) {
        ctx->pc = 0x2DADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADCCu;
        // 0x2dadd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADD4u;
        goto label_2dadd4;
    }
    ctx->pc = 0x2DADCCu;
    SET_GPR_U32(ctx, 31, 0x2DADD4u);
    ctx->pc = 0x2DADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADCCu;
    // 0x2dadd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2302A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2302A8u, 0x2DADCCu, 0x2DADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADD4u;
label_2dadd4:
    // 0x2dadd4: 0x10000162  b           . + 4 + (0x162 << 2)
label_2dadd8:
    if (ctx->pc == 0x2DADD8u) {
        ctx->pc = 0x2DADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADD4u;
        // 0x2dadd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADDCu;
        goto label_2daddc;
    }
    ctx->pc = 0x2DADD4u;
    {
        const bool branch_taken_0x2dadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADD4u;
        // 0x2dadd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dadd4) {
            ctx->pc = 0x2DB360u;
            goto label_2db360;
        }
    }
    ctx->pc = 0x2DADDCu;
label_2daddc:
    // 0x2daddc: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2daddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2dade0:
    // 0x2dade0: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x2dade0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_2dade4:
    // 0x2dade4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dade4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dade8:
    // 0x2dade8: 0x86220054  lh          $v0, 0x54($s1)
    ctx->pc = 0x2dade8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2dadec:
    // 0x2dadec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dadecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dadf0:
    // 0x2dadf0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2dadf4:
    if (ctx->pc == 0x2DADF4u) {
        ctx->pc = 0x2DADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADF0u;
        // 0x2dadf4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADF8u;
        goto label_2dadf8;
    }
    ctx->pc = 0x2DADF0u;
    {
        const bool branch_taken_0x2dadf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADF0u;
        // 0x2dadf4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dadf0) {
            ctx->pc = 0x2DAE68u;
            goto label_2dae68;
        }
    }
    ctx->pc = 0x2DADF8u;
label_2dadf8:
    // 0x2dadf8: 0xc08a08a  jal         func_228228
label_2dadfc:
    if (ctx->pc == 0x2DADFCu) {
        ctx->pc = 0x2DADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADF8u;
        // 0x2dadfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE00u;
        goto label_2dae00;
    }
    ctx->pc = 0x2DADF8u;
    SET_GPR_U32(ctx, 31, 0x2DAE00u);
    ctx->pc = 0x2DADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADF8u;
    // 0x2dadfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2DADF8u, 0x2DAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE00u;
label_2dae00:
    // 0x2dae00: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2dae04:
    if (ctx->pc == 0x2DAE04u) {
        ctx->pc = 0x2DAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE00u;
        // 0x2dae04: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE08u;
        goto label_2dae08;
    }
    ctx->pc = 0x2DAE00u;
    {
        const bool branch_taken_0x2dae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE00u;
        // 0x2dae04: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae00) {
            ctx->pc = 0x2DAE6Cu;
            goto label_2dae6c;
        }
    }
    ctx->pc = 0x2DAE08u;
label_2dae08:
    // 0x2dae08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dae0c:
    // 0x2dae0c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2dae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2dae10:
    // 0x2dae10: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x2dae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2dae14:
    // 0x2dae14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2dae14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2dae18:
    // 0x2dae18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2dae1c:
    if (ctx->pc == 0x2DAE1Cu) {
        ctx->pc = 0x2DAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE18u;
        // 0x2dae1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE20u;
        goto label_2dae20;
    }
    ctx->pc = 0x2DAE18u;
    {
        const bool branch_taken_0x2dae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE18u;
        // 0x2dae1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae18) {
            ctx->pc = 0x2DAE40u;
            goto label_2dae40;
        }
    }
    ctx->pc = 0x2DAE20u;
label_2dae20:
    // 0x2dae20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dae24:
    // 0x2dae24: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_2dae28:
    if (ctx->pc == 0x2DAE28u) {
        ctx->pc = 0x2DAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE24u;
        // 0x2dae28: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE2Cu;
        goto label_2dae2c;
    }
    ctx->pc = 0x2DAE24u;
    {
        const bool branch_taken_0x2dae24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE24u;
        // 0x2dae28: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae24) {
            ctx->pc = 0x2DAE6Cu;
            goto label_2dae6c;
        }
    }
    ctx->pc = 0x2DAE2Cu;
label_2dae2c:
    // 0x2dae2c: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x2dae2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2dae30:
    // 0x2dae30: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x2dae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_2dae34:
    // 0x2dae34: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2dae38:
    if (ctx->pc == 0x2DAE38u) {
        ctx->pc = 0x2DAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE34u;
        // 0x2dae38: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE3Cu;
        goto label_2dae3c;
    }
    ctx->pc = 0x2DAE34u;
    {
        const bool branch_taken_0x2dae34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE34u;
        // 0x2dae38: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae34) {
            ctx->pc = 0x2DAE6Cu;
            goto label_2dae6c;
        }
    }
    ctx->pc = 0x2DAE3Cu;
label_2dae3c:
    // 0x2dae3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dae40:
    // 0x2dae40: 0x86250054  lh          $a1, 0x54($s1)
    ctx->pc = 0x2dae40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2dae44:
    // 0x2dae44: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2dae44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2dae48:
    // 0x2dae48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dae4c:
    // 0x2dae4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dae50:
    // 0x2dae50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dae50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dae54:
    // 0x2dae54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dae54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dae58:
    // 0x2dae58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dae58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dae5c:
    // 0x2dae5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dae60:
    // 0x2dae60: 0xc088178  jal         func_2205E0
label_2dae64:
    if (ctx->pc == 0x2DAE64u) {
        ctx->pc = 0x2DAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE60u;
        // 0x2dae64: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE68u;
        goto label_2dae68;
    }
    ctx->pc = 0x2DAE60u;
    SET_GPR_U32(ctx, 31, 0x2DAE68u);
    ctx->pc = 0x2DAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE60u;
    // 0x2dae64: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2DAE60u, 0x2DAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE68u;
label_2dae68:
    // 0x2dae68: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2dae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2dae6c:
    // 0x2dae6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dae70:
    // 0x2dae70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2dae74:
    if (ctx->pc == 0x2DAE74u) {
        ctx->pc = 0x2DAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE70u;
        // 0x2dae74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE78u;
        goto label_2dae78;
    }
    ctx->pc = 0x2DAE70u;
    {
        const bool branch_taken_0x2dae70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae70) {
            ctx->pc = 0x2DAE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAE70u;
            // 0x2dae74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAE78u;
            goto label_2dae78;
        }
    }
    ctx->pc = 0x2DAE78u;
label_2dae78:
    // 0x2dae78: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2dae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2dae7c:
    // 0x2dae7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2dae7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2dae80:
    // 0x2dae80: 0x2010  mfhi        $a0
    ctx->pc = 0x2dae80u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2dae84:
    // 0x2dae84: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2dae88:
    if (ctx->pc == 0x2DAE88u) {
        ctx->pc = 0x2DAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE84u;
        // 0x2dae88: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE8Cu;
        goto label_2dae8c;
    }
    ctx->pc = 0x2DAE84u;
    {
        const bool branch_taken_0x2dae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE84u;
        // 0x2dae88: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae84) {
            ctx->pc = 0x2DAEA4u;
            goto label_2daea4;
        }
    }
    ctx->pc = 0x2DAE8Cu;
label_2dae8c:
    // 0x2dae8c: 0x80a2002e  lb          $v0, 0x2E($a1)
    ctx->pc = 0x2dae8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2dae90:
    // 0x2dae90: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
label_2dae94:
    if (ctx->pc == 0x2DAE94u) {
        ctx->pc = 0x2DAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE90u;
        // 0x2dae94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE98u;
        goto label_2dae98;
    }
    ctx->pc = 0x2DAE90u;
    {
        const bool branch_taken_0x2dae90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE90u;
        // 0x2dae94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae90) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DAE98u;
label_2dae98:
    // 0x2dae98: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2dae9c:
    // 0x2dae9c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2daea0:
    if (ctx->pc == 0x2DAEA0u) {
        ctx->pc = 0x2DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE9Cu;
        // 0x2daea0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAEA4u;
        goto label_2daea4;
    }
    ctx->pc = 0x2DAE9Cu;
    {
        const bool branch_taken_0x2dae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE9Cu;
        // 0x2daea0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae9c) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DAEA4u;
label_2daea4:
    // 0x2daea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2daea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2daea8:
    // 0x2daea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2daea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daeac:
    // 0x2daeac: 0xc0cdb38  jal         func_336CE0
label_2daeb0:
    if (ctx->pc == 0x2DAEB0u) {
        ctx->pc = 0x2DAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEACu;
        // 0x2daeb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAEB4u;
        goto label_2daeb4;
    }
    ctx->pc = 0x2DAEACu;
    SET_GPR_U32(ctx, 31, 0x2DAEB4u);
    ctx->pc = 0x2DAEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEACu;
    // 0x2daeb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DAEACu, 0x2DAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEB4u;
label_2daeb4:
    // 0x2daeb4: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x2daeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
label_2daeb8:
    // 0x2daeb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2daeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2daebc:
    // 0x2daebc: 0x0  nop
    ctx->pc = 0x2daebcu;
    // NOP
label_2daec0:
    // 0x2daec0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2daec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2daec4:
    // 0x2daec4: 0x0  nop
    ctx->pc = 0x2daec4u;
    // NOP
label_2daec8:
    // 0x2daec8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2daecc:
    if (ctx->pc == 0x2DAECCu) {
        ctx->pc = 0x2DAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEC8u;
        // 0x2daecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAED0u;
        goto label_2daed0;
    }
    ctx->pc = 0x2DAEC8u;
    {
        const bool branch_taken_0x2daec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEC8u;
        // 0x2daecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daec8) {
            ctx->pc = 0x2DAF24u;
            goto label_2daf24;
        }
    }
    ctx->pc = 0x2DAED0u;
label_2daed0:
    // 0x2daed0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2daed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2daed4:
    // 0x2daed4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2daed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2daed8:
    // 0x2daed8: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x2daed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_2daedc:
    // 0x2daedc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2daedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2daee0:
    // 0x2daee0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2daee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2daee4:
    // 0x2daee4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2daee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2daee8:
    // 0x2daee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2daee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2daeec:
    // 0x2daeec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2daeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2daef0:
    // 0x2daef0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2daef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2daef4:
    // 0x2daef4: 0xc0480ba  jal         func_1202E8
label_2daef8:
    if (ctx->pc == 0x2DAEF8u) {
        ctx->pc = 0x2DAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEF4u;
        // 0x2daef8: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAEFCu;
        goto label_2daefc;
    }
    ctx->pc = 0x2DAEF4u;
    SET_GPR_U32(ctx, 31, 0x2DAEFCu);
    ctx->pc = 0x2DAEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEF4u;
    // 0x2daef8: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x2DAEF4u, 0x2DAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEFCu;
label_2daefc:
    // 0x2daefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2daefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf00:
    // 0x2daf00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daf04:
    // 0x2daf04: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_2daf08:
    if (ctx->pc == 0x2DAF08u) {
        ctx->pc = 0x2DAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF04u;
        // 0x2daf08: 0xc6200018  lwc1        $f0, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF0Cu;
        goto label_2daf0c;
    }
    ctx->pc = 0x2DAF04u;
    {
        const bool branch_taken_0x2daf04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daf04) {
            ctx->pc = 0x2DAF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAF04u;
            // 0x2daf08: 0xc6200018  lwc1        $f0, 0x18($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAF1Cu;
            goto label_2daf1c;
        }
    }
    ctx->pc = 0x2DAF0Cu;
label_2daf0c:
    // 0x2daf0c: 0xc0a36c8  jal         func_28DB20
label_2daf10:
    if (ctx->pc == 0x2DAF10u) {
        ctx->pc = 0x2DAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF0Cu;
        // 0x2daf10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF14u;
        goto label_2daf14;
    }
    ctx->pc = 0x2DAF0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAF14u);
    ctx->pc = 0x2DAF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF0Cu;
    // 0x2daf10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DAF0Cu, 0x2DAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF14u;
label_2daf14:
    // 0x2daf14: 0xa6300052  sh          $s0, 0x52($s1)
    ctx->pc = 0x2daf14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 16));
label_2daf18:
    // 0x2daf18: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2daf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2daf1c:
    // 0x2daf1c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2daf1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2daf20:
    // 0x2daf20: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2daf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2daf24:
    // 0x2daf24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2daf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2daf28:
    // 0x2daf28: 0xc0b6ac0  jal         func_2DAB00
label_2daf2c:
    if (ctx->pc == 0x2DAF2Cu) {
        ctx->pc = 0x2DAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF28u;
        // 0x2daf2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF30u;
        goto label_2daf30;
    }
    ctx->pc = 0x2DAF28u;
    SET_GPR_U32(ctx, 31, 0x2DAF30u);
    ctx->pc = 0x2DAF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF28u;
    // 0x2daf2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB00u, 0x2DAF28u, 0x2DAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF30u;
label_2daf30:
    // 0x2daf30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2daf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2daf34:
    // 0x2daf34: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2daf34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2daf38:
    // 0x2daf38: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
label_2daf3c:
    if (ctx->pc == 0x2DAF3Cu) {
        ctx->pc = 0x2DAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF38u;
        // 0x2daf3c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF40u;
        goto label_2daf40;
    }
    ctx->pc = 0x2DAF38u;
    {
        const bool branch_taken_0x2daf38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF38u;
        // 0x2daf3c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf38) {
            ctx->pc = 0x2DAFE8u;
            goto label_2dafe8;
        }
    }
    ctx->pc = 0x2DAF40u;
label_2daf40:
    // 0x2daf40: 0xc0a36c2  jal         func_28DB08
label_2daf44:
    if (ctx->pc == 0x2DAF44u) {
        ctx->pc = 0x2DAF48u;
        goto label_2daf48;
    }
    ctx->pc = 0x2DAF40u;
    SET_GPR_U32(ctx, 31, 0x2DAF48u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2DAF40u, 0x2DAF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF48u;
label_2daf48:
    // 0x2daf48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2daf48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf4c:
    // 0x2daf4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2daf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2daf50:
    // 0x2daf50: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2daf50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2daf54:
    // 0x2daf54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2daf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2daf58:
    // 0x2daf58: 0x40f809  jalr        $v0
label_2daf5c:
    if (ctx->pc == 0x2DAF5Cu) {
        ctx->pc = 0x2DAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF58u;
        // 0x2daf5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF60u;
        goto label_2daf60;
    }
    ctx->pc = 0x2DAF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DAF60u);
        ctx->pc = 0x2DAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF58u;
        // 0x2daf5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF58u, 0x2DAF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DAF60u;
label_2daf60:
    // 0x2daf60: 0x14520101  bne         $v0, $s2, . + 4 + (0x101 << 2)
label_2daf64:
    if (ctx->pc == 0x2DAF64u) {
        ctx->pc = 0x2DAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF60u;
        // 0x2daf64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF68u;
        goto label_2daf68;
    }
    ctx->pc = 0x2DAF60u;
    {
        const bool branch_taken_0x2daf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF60u;
        // 0x2daf64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf60) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DAF68u;
label_2daf68:
    // 0x2daf68: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2daf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2daf6c:
    // 0x2daf6c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2daf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2daf70:
    // 0x2daf70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2daf74:
    if (ctx->pc == 0x2DAF74u) {
        ctx->pc = 0x2DAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF70u;
        // 0x2daf74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF78u;
        goto label_2daf78;
    }
    ctx->pc = 0x2DAF70u;
    {
        const bool branch_taken_0x2daf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF70u;
        // 0x2daf74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf70) {
            ctx->pc = 0x2DAF8Cu;
            goto label_2daf8c;
        }
    }
    ctx->pc = 0x2DAF78u;
label_2daf78:
    // 0x2daf78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2daf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2daf7c:
    // 0x2daf7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2daf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2daf80:
    // 0x2daf80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2daf80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daf84:
    // 0x2daf84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2daf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2daf88:
    // 0x2daf88: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x2daf88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_2daf8c:
    // 0x2daf8c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2daf90:
    if (ctx->pc == 0x2DAF90u) {
        ctx->pc = 0x2DAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF8Cu;
        // 0x2daf90: 0x26a24b00  addiu       $v0, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAF94u;
        goto label_2daf94;
    }
    ctx->pc = 0x2DAF8Cu;
    {
        const bool branch_taken_0x2daf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF8Cu;
        // 0x2daf90: 0x26a24b00  addiu       $v0, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf8c) {
            ctx->pc = 0x2DAFE0u;
            goto label_2dafe0;
        }
    }
    ctx->pc = 0x2DAF94u;
label_2daf94:
    // 0x2daf94: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2daf94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2daf98:
    // 0x2daf98: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2daf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2daf9c:
    // 0x2daf9c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2daf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dafa0:
    // 0x2dafa0: 0xc0cdb38  jal         func_336CE0
label_2dafa4:
    if (ctx->pc == 0x2DAFA4u) {
        ctx->pc = 0x2DAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFA0u;
        // 0x2dafa4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAFA8u;
        goto label_2dafa8;
    }
    ctx->pc = 0x2DAFA0u;
    SET_GPR_U32(ctx, 31, 0x2DAFA8u);
    ctx->pc = 0x2DAFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFA0u;
    // 0x2dafa4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DAFA0u, 0x2DAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFA8u;
label_2dafa8:
    // 0x2dafa8: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2dafa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2dafac:
    // 0x2dafac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dafacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dafb0:
    // 0x2dafb0: 0x0  nop
    ctx->pc = 0x2dafb0u;
    // NOP
label_2dafb4:
    // 0x2dafb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dafb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dafb8:
    // 0x2dafb8: 0x0  nop
    ctx->pc = 0x2dafb8u;
    // NOP
label_2dafbc:
    // 0x2dafbc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2dafc0:
    if (ctx->pc == 0x2DAFC0u) {
        ctx->pc = 0x2DAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFBCu;
        // 0x2dafc0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAFC4u;
        goto label_2dafc4;
    }
    ctx->pc = 0x2DAFBCu;
    {
        const bool branch_taken_0x2dafbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFBCu;
        // 0x2dafc0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafbc) {
            ctx->pc = 0x2DAFE0u;
            goto label_2dafe0;
        }
    }
    ctx->pc = 0x2DAFC4u;
label_2dafc4:
    // 0x2dafc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dafc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dafc8:
    // 0x2dafc8: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2dafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2dafcc:
    // 0x2dafcc: 0xc0bf0fa  jal         func_2FC3E8
label_2dafd0:
    if (ctx->pc == 0x2DAFD0u) {
        ctx->pc = 0x2DAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFCCu;
        // 0x2dafd0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAFD4u;
        goto label_2dafd4;
    }
    ctx->pc = 0x2DAFCCu;
    SET_GPR_U32(ctx, 31, 0x2DAFD4u);
    ctx->pc = 0x2DAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFCCu;
    // 0x2dafd0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2DAFCCu, 0x2DAFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFD4u;
label_2dafd4:
    // 0x2dafd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dafd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dafd8:
    // 0x2dafd8: 0xc0b6ac0  jal         func_2DAB00
label_2dafdc:
    if (ctx->pc == 0x2DAFDCu) {
        ctx->pc = 0x2DAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFD8u;
        // 0x2dafdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAFE0u;
        goto label_2dafe0;
    }
    ctx->pc = 0x2DAFD8u;
    SET_GPR_U32(ctx, 31, 0x2DAFE0u);
    ctx->pc = 0x2DAFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFD8u;
    // 0x2dafdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB00u, 0x2DAFD8u, 0x2DAFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFE0u;
label_2dafe0:
    // 0x2dafe0: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_2dafe4:
    if (ctx->pc == 0x2DAFE4u) {
        ctx->pc = 0x2DAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFE0u;
        // 0x2dafe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAFE8u;
        goto label_2dafe8;
    }
    ctx->pc = 0x2DAFE0u;
    {
        const bool branch_taken_0x2dafe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFE0u;
        // 0x2dafe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafe0) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DAFE8u;
label_2dafe8:
    // 0x2dafe8: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2dafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2dafec:
    // 0x2dafec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2daff0:
    if (ctx->pc == 0x2DAFF0u) {
        ctx->pc = 0x2DAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFECu;
        // 0x2daff0: 0x86220052  lh          $v0, 0x52($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAFF4u;
        goto label_2daff4;
    }
    ctx->pc = 0x2DAFECu;
    {
        const bool branch_taken_0x2dafec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dafec) {
            ctx->pc = 0x2DAFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAFECu;
            // 0x2daff0: 0x86220052  lh          $v0, 0x52($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB000u;
            goto label_2db000;
        }
    }
    ctx->pc = 0x2DAFF4u;
label_2daff4:
    // 0x2daff4: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2daff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_2daff8:
    // 0x2daff8: 0xa6320052  sh          $s2, 0x52($s1)
    ctx->pc = 0x2daff8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 18));
label_2daffc:
    // 0x2daffc: 0x86220052  lh          $v0, 0x52($s1)
    ctx->pc = 0x2daffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_2db000:
    // 0x2db000: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2db004:
    if (ctx->pc == 0x2DB004u) {
        ctx->pc = 0x2DB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB000u;
        // 0x2db004: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB008u;
        goto label_2db008;
    }
    ctx->pc = 0x2DB000u;
    {
        const bool branch_taken_0x2db000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB000u;
        // 0x2db004: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db000) {
            ctx->pc = 0x2DB088u;
            goto label_2db088;
        }
    }
    ctx->pc = 0x2DB008u;
label_2db008:
    // 0x2db008: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2db008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2db00c:
    // 0x2db00c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_2db010:
    if (ctx->pc == 0x2DB010u) {
        ctx->pc = 0x2DB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB00Cu;
        // 0x2db010: 0x86230052  lh          $v1, 0x52($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB014u;
        goto label_2db014;
    }
    ctx->pc = 0x2DB00Cu;
    {
        const bool branch_taken_0x2db00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db00c) {
            ctx->pc = 0x2DB010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB00Cu;
            // 0x2db010: 0x86230052  lh          $v1, 0x52($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB08Cu;
            goto label_2db08c;
        }
    }
    ctx->pc = 0x2DB014u;
label_2db014:
    // 0x2db014: 0x92220056  lbu         $v0, 0x56($s1)
    ctx->pc = 0x2db014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2db018:
    // 0x2db018: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2db01c:
    if (ctx->pc == 0x2DB01Cu) {
        ctx->pc = 0x2DB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB018u;
        // 0x2db01c: 0x86230052  lh          $v1, 0x52($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB020u;
        goto label_2db020;
    }
    ctx->pc = 0x2DB018u;
    {
        const bool branch_taken_0x2db018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db018) {
            ctx->pc = 0x2DB01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB018u;
            // 0x2db01c: 0x86230052  lh          $v1, 0x52($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB08Cu;
            goto label_2db08c;
        }
    }
    ctx->pc = 0x2DB020u;
label_2db020:
    // 0x2db020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2db020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2db024:
    // 0x2db024: 0xc0cdb38  jal         func_336CE0
label_2db028:
    if (ctx->pc == 0x2DB028u) {
        ctx->pc = 0x2DB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB024u;
        // 0x2db028: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB02Cu;
        goto label_2db02c;
    }
    ctx->pc = 0x2DB024u;
    SET_GPR_U32(ctx, 31, 0x2DB02Cu);
    ctx->pc = 0x2DB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB024u;
    // 0x2db028: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DB024u, 0x2DB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB02Cu;
label_2db02c:
    // 0x2db02c: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x2db02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2db030:
    // 0x2db030: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2db030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2db034:
    // 0x2db034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db038:
    // 0x2db038: 0x0  nop
    ctx->pc = 0x2db038u;
    // NOP
label_2db03c:
    // 0x2db03c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2db040:
    if (ctx->pc == 0x2DB040u) {
        ctx->pc = 0x2DB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB03Cu;
        // 0x2db040: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB044u;
        goto label_2db044;
    }
    ctx->pc = 0x2DB03Cu;
    {
        const bool branch_taken_0x2db03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB03Cu;
        // 0x2db040: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db03c) {
            ctx->pc = 0x2DB088u;
            goto label_2db088;
        }
    }
    ctx->pc = 0x2DB044u;
label_2db044:
    // 0x2db044: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2db044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db048:
    // 0x2db048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db04c:
    // 0x2db04c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db050:
    // 0x2db050: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2db050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db054:
    // 0x2db054: 0xc09381e  jal         func_24E078
label_2db058:
    if (ctx->pc == 0x2DB058u) {
        ctx->pc = 0x2DB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB054u;
        // 0x2db058: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB05Cu;
        goto label_2db05c;
    }
    ctx->pc = 0x2DB054u;
    SET_GPR_U32(ctx, 31, 0x2DB05Cu);
    ctx->pc = 0x2DB058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB054u;
    // 0x2db058: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2DB054u, 0x2DB05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB05Cu;
label_2db05c:
    // 0x2db05c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2db060:
    if (ctx->pc == 0x2DB060u) {
        ctx->pc = 0x2DB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB05Cu;
        // 0x2db060: 0xa6320052  sh          $s2, 0x52($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB064u;
        goto label_2db064;
    }
    ctx->pc = 0x2DB05Cu;
    {
        const bool branch_taken_0x2db05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db05c) {
            ctx->pc = 0x2DB060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB05Cu;
            // 0x2db060: 0xa6320052  sh          $s2, 0x52($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB088u;
            goto label_2db088;
        }
    }
    ctx->pc = 0x2DB064u;
label_2db064:
    // 0x2db064: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2db064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2db068:
    // 0x2db068: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2db068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2db06c:
    // 0x2db06c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db070:
    // 0x2db070: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2db070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2db074:
    // 0x2db074: 0xc0480ba  jal         func_1202E8
label_2db078:
    if (ctx->pc == 0x2DB078u) {
        ctx->pc = 0x2DB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB074u;
        // 0x2db078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB07Cu;
        goto label_2db07c;
    }
    ctx->pc = 0x2DB074u;
    SET_GPR_U32(ctx, 31, 0x2DB07Cu);
    ctx->pc = 0x2DB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB074u;
    // 0x2db078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x2DB074u, 0x2DB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB07Cu;
label_2db07c:
    // 0x2db07c: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
label_2db080:
    if (ctx->pc == 0x2DB080u) {
        ctx->pc = 0x2DB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB07Cu;
        // 0x2db080: 0x86230052  lh          $v1, 0x52($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB084u;
        goto label_2db084;
    }
    ctx->pc = 0x2DB07Cu;
    {
        const bool branch_taken_0x2db07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2db07c) {
            ctx->pc = 0x2DB080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB07Cu;
            // 0x2db080: 0x86230052  lh          $v1, 0x52($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB08Cu;
            goto label_2db08c;
        }
    }
    ctx->pc = 0x2DB084u;
label_2db084:
    // 0x2db084: 0xa6320052  sh          $s2, 0x52($s1)
    ctx->pc = 0x2db084u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 18));
label_2db088:
    // 0x2db088: 0x86230052  lh          $v1, 0x52($s1)
    ctx->pc = 0x2db088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_2db08c:
    // 0x2db08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db090:
    // 0x2db090: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2db094:
    if (ctx->pc == 0x2DB094u) {
        ctx->pc = 0x2DB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB090u;
        // 0x2db094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB098u;
        goto label_2db098;
    }
    ctx->pc = 0x2DB090u;
    {
        const bool branch_taken_0x2db090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB090u;
        // 0x2db094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db090) {
            ctx->pc = 0x2DB0CCu;
            goto label_2db0cc;
        }
    }
    ctx->pc = 0x2DB098u;
label_2db098:
    // 0x2db098: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x2db098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2db09c:
    // 0x2db09c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2db09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2db0a0:
    // 0x2db0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db0a4:
    // 0x2db0a4: 0xc105df6  jal         func_4177D8
label_2db0a8:
    if (ctx->pc == 0x2DB0A8u) {
        ctx->pc = 0x2DB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0A4u;
        // 0x2db0a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0ACu;
        goto label_2db0ac;
    }
    ctx->pc = 0x2DB0A4u;
    SET_GPR_U32(ctx, 31, 0x2DB0ACu);
    ctx->pc = 0x2DB0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB0A4u;
    // 0x2db0a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2DB0A4u, 0x2DB0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0ACu;
label_2db0ac:
    // 0x2db0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2db0b0:
    if (ctx->pc == 0x2DB0B0u) {
        ctx->pc = 0x2DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0ACu;
        // 0x2db0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0B4u;
        goto label_2db0b4;
    }
    ctx->pc = 0x2DB0ACu;
    {
        const bool branch_taken_0x2db0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0ACu;
        // 0x2db0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0ac) {
            ctx->pc = 0x2DB0C8u;
            goto label_2db0c8;
        }
    }
    ctx->pc = 0x2DB0B4u;
label_2db0b4:
    // 0x2db0b4: 0xc10587a  jal         func_4161E8
label_2db0b8:
    if (ctx->pc == 0x2DB0B8u) {
        ctx->pc = 0x2DB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0B4u;
        // 0x2db0b8: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0BCu;
        goto label_2db0bc;
    }
    ctx->pc = 0x2DB0B4u;
    SET_GPR_U32(ctx, 31, 0x2DB0BCu);
    ctx->pc = 0x2DB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB0B4u;
    // 0x2db0b8: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DB0B4u, 0x2DB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0BCu;
label_2db0bc:
    // 0x2db0bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2db0bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2db0c0:
    // 0x2db0c0: 0xa6200052  sh          $zero, 0x52($s1)
    ctx->pc = 0x2db0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
label_2db0c4:
    // 0x2db0c4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2db0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_2db0c8:
    // 0x2db0c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2db0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2db0cc:
    // 0x2db0cc: 0xc0cdb38  jal         func_336CE0
label_2db0d0:
    if (ctx->pc == 0x2DB0D0u) {
        ctx->pc = 0x2DB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0CCu;
        // 0x2db0d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0D4u;
        goto label_2db0d4;
    }
    ctx->pc = 0x2DB0CCu;
    SET_GPR_U32(ctx, 31, 0x2DB0D4u);
    ctx->pc = 0x2DB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB0CCu;
    // 0x2db0d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DB0CCu, 0x2DB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0D4u;
label_2db0d4:
    // 0x2db0d4: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x2db0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2db0d8:
    // 0x2db0d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2db0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2db0dc:
    // 0x2db0dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db0e0:
    // 0x2db0e0: 0x0  nop
    ctx->pc = 0x2db0e0u;
    // NOP
label_2db0e4:
    // 0x2db0e4: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_2db0e8:
    if (ctx->pc == 0x2DB0E8u) {
        ctx->pc = 0x2DB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0E4u;
        // 0x2db0e8: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0ECu;
        goto label_2db0ec;
    }
    ctx->pc = 0x2DB0E4u;
    {
        const bool branch_taken_0x2db0e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0E4u;
        // 0x2db0e8: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0e4) {
            ctx->pc = 0x2DB1A0u;
            goto label_2db1a0;
        }
    }
    ctx->pc = 0x2DB0ECu;
label_2db0ec:
    // 0x2db0ec: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2db0ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2db0f0:
    // 0x2db0f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2db0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db0f4:
    // 0x2db0f4: 0x26a34b00  addiu       $v1, $s5, 0x4B00
    ctx->pc = 0x2db0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_2db0f8:
    // 0x2db0f8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2db0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2db0fc:
    // 0x2db0fc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2db0fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2db100:
    // 0x2db100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2db104:
    // 0x2db104: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2db108:
    // 0x2db108: 0xc4540140  lwc1        $f20, 0x140($v0)
    ctx->pc = 0x2db108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2db10c:
    // 0x2db10c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2db10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2db110:
    // 0x2db110: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x2db110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_2db114:
    // 0x2db114: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db118:
    // 0x2db118: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2db118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2db11c:
    // 0x2db11c: 0xc1067b8  jal         func_419EE0
label_2db120:
    if (ctx->pc == 0x2DB120u) {
        ctx->pc = 0x2DB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB11Cu;
        // 0x2db120: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB124u;
        goto label_2db124;
    }
    ctx->pc = 0x2DB11Cu;
    SET_GPR_U32(ctx, 31, 0x2DB124u);
    ctx->pc = 0x2DB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB11Cu;
    // 0x2db120: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2DB11Cu, 0x2DB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB124u;
label_2db124:
    // 0x2db124: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2db128:
    if (ctx->pc == 0x2DB128u) {
        ctx->pc = 0x2DB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB124u;
        // 0x2db128: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB12Cu;
        goto label_2db12c;
    }
    ctx->pc = 0x2DB124u;
    {
        const bool branch_taken_0x2db124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB124u;
        // 0x2db128: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db124) {
            ctx->pc = 0x2DB150u;
            goto label_2db150;
        }
    }
    ctx->pc = 0x2DB12Cu;
label_2db12c:
    // 0x2db12c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2db12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2db130:
    // 0x2db130: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2db130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db134:
    // 0x2db134: 0x0  nop
    ctx->pc = 0x2db134u;
    // NOP
label_2db138:
    // 0x2db138: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2db13c:
    if (ctx->pc == 0x2DB13Cu) {
        ctx->pc = 0x2DB140u;
        goto label_2db140;
    }
    ctx->pc = 0x2DB138u;
    {
        const bool branch_taken_0x2db138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db138) {
            ctx->pc = 0x2DB150u;
            goto label_2db150;
        }
    }
    ctx->pc = 0x2DB140u;
label_2db140:
    // 0x2db140: 0xc087502  jal         func_21D408
label_2db144:
    if (ctx->pc == 0x2DB144u) {
        ctx->pc = 0x2DB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB140u;
        // 0x2db144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB148u;
        goto label_2db148;
    }
    ctx->pc = 0x2DB140u;
    SET_GPR_U32(ctx, 31, 0x2DB148u);
    ctx->pc = 0x2DB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB140u;
    // 0x2db144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DB140u, 0x2DB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB148u;
label_2db148:
    // 0x2db148: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2db148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_2db14c:
    // 0x2db14c: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x2db14cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2db150:
    // 0x2db150: 0xc0a367c  jal         func_28D9F0
label_2db154:
    if (ctx->pc == 0x2DB154u) {
        ctx->pc = 0x2DB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB150u;
        // 0x2db154: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB158u;
        goto label_2db158;
    }
    ctx->pc = 0x2DB150u;
    SET_GPR_U32(ctx, 31, 0x2DB158u);
    ctx->pc = 0x2DB154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB150u;
    // 0x2db154: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DB150u, 0x2DB158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB158u;
label_2db158:
    // 0x2db158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db15c:
    // 0x2db15c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2db160:
    if (ctx->pc == 0x2DB160u) {
        ctx->pc = 0x2DB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB15Cu;
        // 0x2db160: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB164u;
        goto label_2db164;
    }
    ctx->pc = 0x2DB15Cu;
    {
        const bool branch_taken_0x2db15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB15Cu;
        // 0x2db160: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db15c) {
            ctx->pc = 0x2DB188u;
            goto label_2db188;
        }
    }
    ctx->pc = 0x2DB164u;
label_2db164:
    // 0x2db164: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2db164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db168:
    // 0x2db168: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2db168u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2db16c:
    // 0x2db16c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2db16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db170:
    // 0x2db170: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x2db170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2db174:
    // 0x2db174: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2db174u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db178:
    // 0x2db178: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x2db178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2db17c:
    // 0x2db17c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2db17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db180:
    // 0x2db180: 0xc0bee7a  jal         func_2FB9E8
label_2db184:
    if (ctx->pc == 0x2DB184u) {
        ctx->pc = 0x2DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB180u;
        // 0x2db184: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB188u;
        goto label_2db188;
    }
    ctx->pc = 0x2DB180u;
    SET_GPR_U32(ctx, 31, 0x2DB188u);
    ctx->pc = 0x2DB184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB180u;
    // 0x2db184: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DB180u, 0x2DB188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB188u;
label_2db188:
    // 0x2db188: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2db18c:
    // 0x2db18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db190:
    // 0x2db190: 0xa2200057  sb          $zero, 0x57($s1)
    ctx->pc = 0x2db190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 0));
label_2db194:
    // 0x2db194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2db198:
    // 0x2db198: 0x10000073  b           . + 4 + (0x73 << 2)
label_2db19c:
    if (ctx->pc == 0x2DB19Cu) {
        ctx->pc = 0x2DB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB198u;
        // 0x2db19c: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB1A0u;
        goto label_2db1a0;
    }
    ctx->pc = 0x2DB198u;
    {
        const bool branch_taken_0x2db198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB198u;
        // 0x2db19c: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db198) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DB1A0u;
label_2db1a0:
    // 0x2db1a0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2db1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db1a4:
    // 0x2db1a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2db1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2db1a8:
    // 0x2db1a8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2db1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2db1ac:
    // 0x2db1ac: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x2db1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_2db1b0:
    // 0x2db1b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2db1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2db1b4:
    // 0x2db1b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2db1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db1b8:
    // 0x2db1b8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2db1b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2db1bc:
    // 0x2db1bc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2db1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2db1c0:
    // 0x2db1c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2db1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2db1c4:
    // 0x2db1c4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_2db1c8:
    if (ctx->pc == 0x2DB1C8u) {
        ctx->pc = 0x2DB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1C4u;
        // 0x2db1c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB1CCu;
        goto label_2db1cc;
    }
    ctx->pc = 0x2DB1C4u;
    {
        const bool branch_taken_0x2db1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1C4u;
        // 0x2db1c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1c4) {
            ctx->pc = 0x2DB1D4u;
            goto label_2db1d4;
        }
    }
    ctx->pc = 0x2DB1CCu;
label_2db1cc:
    // 0x2db1cc: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
label_2db1d0:
    if (ctx->pc == 0x2DB1D0u) {
        ctx->pc = 0x2DB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1CCu;
        // 0x2db1d0: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB1D4u;
        goto label_2db1d4;
    }
    ctx->pc = 0x2DB1CCu;
    {
        const bool branch_taken_0x2db1cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1CCu;
        // 0x2db1d0: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1cc) {
            ctx->pc = 0x2DB248u;
            goto label_2db248;
        }
    }
    ctx->pc = 0x2DB1D4u;
label_2db1d4:
    // 0x2db1d4: 0x26900090  addiu       $s0, $s4, 0x90
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2db1d8:
    // 0x2db1d8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2db1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2db1dc:
    // 0x2db1dc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2db1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2db1e0:
    // 0x2db1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2db1e4:
    // 0x2db1e4: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2db1e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2db1e8:
    // 0x2db1e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2db1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2db1ec:
    // 0x2db1ec: 0x26a34b00  addiu       $v1, $s5, 0x4B00
    ctx->pc = 0x2db1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_2db1f0:
    // 0x2db1f0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2db1f4:
    // 0x2db1f4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2db1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2db1f8:
    // 0x2db1f8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2db1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2db1fc:
    // 0x2db1fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2db1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2db200:
    // 0x2db200: 0xc1067b8  jal         func_419EE0
label_2db204:
    if (ctx->pc == 0x2DB204u) {
        ctx->pc = 0x2DB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB200u;
        // 0x2db204: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB208u;
        goto label_2db208;
    }
    ctx->pc = 0x2DB200u;
    SET_GPR_U32(ctx, 31, 0x2DB208u);
    ctx->pc = 0x2DB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB200u;
    // 0x2db204: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2DB200u, 0x2DB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB208u;
label_2db208:
    // 0x2db208: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2db20c:
    if (ctx->pc == 0x2DB20Cu) {
        ctx->pc = 0x2DB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB208u;
        // 0x2db20c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB210u;
        goto label_2db210;
    }
    ctx->pc = 0x2DB208u;
    {
        const bool branch_taken_0x2db208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB208u;
        // 0x2db20c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db208) {
            ctx->pc = 0x2DB248u;
            goto label_2db248;
        }
    }
    ctx->pc = 0x2DB210u;
label_2db210:
    // 0x2db210: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2db210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2db214:
    // 0x2db214: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2db218:
    // 0x2db218: 0x0  nop
    ctx->pc = 0x2db218u;
    // NOP
label_2db21c:
    // 0x2db21c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2db21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db220:
    // 0x2db220: 0x0  nop
    ctx->pc = 0x2db220u;
    // NOP
label_2db224:
    // 0x2db224: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2db228:
    if (ctx->pc == 0x2DB228u) {
        ctx->pc = 0x2DB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB224u;
        // 0x2db228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB22Cu;
        goto label_2db22c;
    }
    ctx->pc = 0x2DB224u;
    {
        const bool branch_taken_0x2db224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB224u;
        // 0x2db228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db224) {
            ctx->pc = 0x2DB248u;
            goto label_2db248;
        }
    }
    ctx->pc = 0x2DB22Cu;
label_2db22c:
    // 0x2db22c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2db22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db230:
    // 0x2db230: 0xa6220052  sh          $v0, 0x52($s1)
    ctx->pc = 0x2db230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 2));
label_2db234:
    // 0x2db234: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2db234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2db238:
    // 0x2db238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db23c:
    // 0x2db23c: 0xa2200056  sb          $zero, 0x56($s1)
    ctx->pc = 0x2db23cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 0));
label_2db240:
    // 0x2db240: 0x10000049  b           . + 4 + (0x49 << 2)
label_2db244:
    if (ctx->pc == 0x2DB244u) {
        ctx->pc = 0x2DB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB240u;
        // 0x2db244: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB248u;
        goto label_2db248;
    }
    ctx->pc = 0x2DB240u;
    {
        const bool branch_taken_0x2db240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB240u;
        // 0x2db244: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db240) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DB248u;
label_2db248:
    // 0x2db248: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2db248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2db24c:
    // 0x2db24c: 0x26a24b00  addiu       $v0, $s5, 0x4B00
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_2db250:
    // 0x2db250: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2db250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db254:
    // 0x2db254: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2db254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2db258:
    // 0x2db258: 0xc04808c  jal         func_120230
label_2db25c:
    if (ctx->pc == 0x2DB25Cu) {
        ctx->pc = 0x2DB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB258u;
        // 0x2db25c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB260u;
        goto label_2db260;
    }
    ctx->pc = 0x2DB258u;
    SET_GPR_U32(ctx, 31, 0x2DB260u);
    ctx->pc = 0x2DB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB258u;
    // 0x2db25c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2DB258u, 0x2DB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB260u;
label_2db260:
    // 0x2db260: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2db264:
    // 0x2db264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2db268:
    // 0x2db268: 0x0  nop
    ctx->pc = 0x2db268u;
    // NOP
label_2db26c:
    // 0x2db26c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2db26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db270:
    // 0x2db270: 0x0  nop
    ctx->pc = 0x2db270u;
    // NOP
label_2db274:
    // 0x2db274: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2db278:
    if (ctx->pc == 0x2DB278u) {
        ctx->pc = 0x2DB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB274u;
        // 0x2db278: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB27Cu;
        goto label_2db27c;
    }
    ctx->pc = 0x2DB274u;
    {
        const bool branch_taken_0x2db274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db274) {
            ctx->pc = 0x2DB278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB274u;
            // 0x2db278: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB27Cu;
            goto label_2db27c;
        }
    }
    ctx->pc = 0x2DB27Cu;
label_2db27c:
    // 0x2db27c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2db27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2db280:
    // 0x2db280: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2db280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2db284:
    // 0x2db284: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db288:
    // 0x2db288: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2db288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2db28c:
    // 0x2db28c: 0xc0480ba  jal         func_1202E8
label_2db290:
    if (ctx->pc == 0x2DB290u) {
        ctx->pc = 0x2DB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB28Cu;
        // 0x2db290: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB294u;
        goto label_2db294;
    }
    ctx->pc = 0x2DB28Cu;
    SET_GPR_U32(ctx, 31, 0x2DB294u);
    ctx->pc = 0x2DB290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB28Cu;
    // 0x2db290: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x2DB28Cu, 0x2DB294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB294u;
label_2db294:
    // 0x2db294: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_2db298:
    if (ctx->pc == 0x2DB298u) {
        ctx->pc = 0x2DB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB294u;
        // 0x2db298: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB29Cu;
        goto label_2db29c;
    }
    ctx->pc = 0x2DB294u;
    {
        const bool branch_taken_0x2db294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db294) {
            ctx->pc = 0x2DB298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB294u;
            // 0x2db298: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2A8u;
            goto label_2db2a8;
        }
    }
    ctx->pc = 0x2DB29Cu;
label_2db29c:
    // 0x2db29c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2db2a0:
    if (ctx->pc == 0x2DB2A0u) {
        ctx->pc = 0x2DB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB29Cu;
        // 0x2db2a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2A4u;
        goto label_2db2a4;
    }
    ctx->pc = 0x2DB29Cu;
    {
        const bool branch_taken_0x2db29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db29c) {
            ctx->pc = 0x2DB2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB29Cu;
            // 0x2db2a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2D8u;
            goto label_2db2d8;
        }
    }
    ctx->pc = 0x2DB2A4u;
label_2db2a4:
    // 0x2db2a4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2db2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2db2a8:
    // 0x2db2a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db2ac:
    // 0x2db2ac: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2db2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2db2b0:
    // 0x2db2b0: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x2db2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_2db2b4:
    // 0x2db2b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2db2b8:
    // 0x2db2b8: 0x92220057  lbu         $v0, 0x57($s1)
    ctx->pc = 0x2db2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2db2bc:
    // 0x2db2bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2db2bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2db2c0:
    // 0x2db2c0: 0xa2230057  sb          $v1, 0x57($s1)
    ctx->pc = 0x2db2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 3));
label_2db2c4:
    // 0x2db2c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2db2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2db2c8:
    // 0x2db2c8: 0xa6230052  sh          $v1, 0x52($s1)
    ctx->pc = 0x2db2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 3));
label_2db2cc:
    // 0x2db2cc: 0xa2200056  sb          $zero, 0x56($s1)
    ctx->pc = 0x2db2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 0));
label_2db2d0:
    // 0x2db2d0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2db2d4:
    if (ctx->pc == 0x2DB2D4u) {
        ctx->pc = 0x2DB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2D0u;
        // 0x2db2d4: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2D8u;
        goto label_2db2d8;
    }
    ctx->pc = 0x2DB2D0u;
    {
        const bool branch_taken_0x2db2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2D0u;
        // 0x2db2d4: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2d0) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DB2D8u;
label_2db2d8:
    // 0x2db2d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2db2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2db2dc:
    // 0x2db2dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2db2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2db2e0:
    // 0x2db2e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2db2e4:
    if (ctx->pc == 0x2DB2E4u) {
        ctx->pc = 0x2DB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E0u;
        // 0x2db2e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2E8u;
        goto label_2db2e8;
    }
    ctx->pc = 0x2DB2E0u;
    {
        const bool branch_taken_0x2db2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E0u;
        // 0x2db2e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2e0) {
            ctx->pc = 0x2DB2F0u;
            goto label_2db2f0;
        }
    }
    ctx->pc = 0x2DB2E8u;
label_2db2e8:
    // 0x2db2e8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_2db2ec:
    if (ctx->pc == 0x2DB2ECu) {
        ctx->pc = 0x2DB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E8u;
        // 0x2db2ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2F0u;
        goto label_2db2f0;
    }
    ctx->pc = 0x2DB2E8u;
    {
        const bool branch_taken_0x2db2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E8u;
        // 0x2db2ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2e8) {
            ctx->pc = 0x2DB360u;
            goto label_2db360;
        }
    }
    ctx->pc = 0x2DB2F0u;
label_2db2f0:
    // 0x2db2f0: 0x92220056  lbu         $v0, 0x56($s1)
    ctx->pc = 0x2db2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2db2f4:
    // 0x2db2f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2db2f8:
    if (ctx->pc == 0x2DB2F8u) {
        ctx->pc = 0x2DB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2F4u;
        // 0x2db2f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2FCu;
        goto label_2db2fc;
    }
    ctx->pc = 0x2DB2F4u;
    {
        const bool branch_taken_0x2db2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2F4u;
        // 0x2db2f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2f4) {
            ctx->pc = 0x2DB360u;
            goto label_2db360;
        }
    }
    ctx->pc = 0x2DB2FCu;
label_2db2fc:
    // 0x2db2fc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2db2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db300:
    // 0x2db300: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2db300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2db304:
    // 0x2db304: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x2db304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_2db308:
    // 0x2db308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2db30c:
    // 0x2db30c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2db30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2db310:
    // 0x2db310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2db314:
    // 0x2db314: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2db314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2db318:
    // 0x2db318: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2db318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2db31c:
    // 0x2db31c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2db320:
    if (ctx->pc == 0x2DB320u) {
        ctx->pc = 0x2DB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB31Cu;
        // 0x2db320: 0x241005dc  addiu       $s0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB324u;
        goto label_2db324;
    }
    ctx->pc = 0x2DB31Cu;
    {
        const bool branch_taken_0x2db31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB31Cu;
        // 0x2db320: 0x241005dc  addiu       $s0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db31c) {
            ctx->pc = 0x2DB334u;
            goto label_2db334;
        }
    }
    ctx->pc = 0x2DB324u;
label_2db324:
    // 0x2db324: 0x8c82026c  lw          $v0, 0x26C($a0)
    ctx->pc = 0x2db324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
label_2db328:
    // 0x2db328: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x2db328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2db32c:
    // 0x2db32c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2db32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2db330:
    // 0x2db330: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2db330u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2db334:
    // 0x2db334: 0xc0a367c  jal         func_28D9F0
label_2db338:
    if (ctx->pc == 0x2DB338u) {
        ctx->pc = 0x2DB33Cu;
        goto label_2db33c;
    }
    ctx->pc = 0x2DB334u;
    SET_GPR_U32(ctx, 31, 0x2DB33Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DB334u, 0x2DB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB33Cu;
label_2db33c:
    // 0x2db33c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2db340:
    if (ctx->pc == 0x2DB340u) {
        ctx->pc = 0x2DB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB33Cu;
        // 0x2db340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB344u;
        goto label_2db344;
    }
    ctx->pc = 0x2DB33Cu;
    {
        const bool branch_taken_0x2db33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB33Cu;
        // 0x2db340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db33c) {
            ctx->pc = 0x2DB350u;
            goto label_2db350;
        }
    }
    ctx->pc = 0x2DB344u;
label_2db344:
    // 0x2db344: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2db344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db348:
    // 0x2db348: 0xc0bebdc  jal         func_2FAF70
label_2db34c:
    if (ctx->pc == 0x2DB34Cu) {
        ctx->pc = 0x2DB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB348u;
        // 0x2db34c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB350u;
        goto label_2db350;
    }
    ctx->pc = 0x2DB348u;
    SET_GPR_U32(ctx, 31, 0x2DB350u);
    ctx->pc = 0x2DB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB348u;
    // 0x2db34c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2DB348u, 0x2DB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB350u;
label_2db350:
    // 0x2db350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db354:
    // 0x2db354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db358:
    // 0x2db358: 0x10000003  b           . + 4 + (0x3 << 2)
label_2db35c:
    if (ctx->pc == 0x2DB35Cu) {
        ctx->pc = 0x2DB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB358u;
        // 0x2db35c: 0xa2230056  sb          $v1, 0x56($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB360u;
        goto label_2db360;
    }
    ctx->pc = 0x2DB358u;
    {
        const bool branch_taken_0x2db358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB358u;
        // 0x2db35c: 0xa2230056  sb          $v1, 0x56($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db358) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DB360u;
label_2db360:
    // 0x2db360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2db360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2db364:
    // 0x2db364: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x2db364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_2db368:
    // 0x2db368: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2db368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2db36c:
    // 0x2db36c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2db36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2db370:
    // 0x2db370: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2db370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2db374:
    // 0x2db374: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2db374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2db378:
    // 0x2db378: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2db378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2db37c:
    // 0x2db37c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2db37cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2db380:
    // 0x2db380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2db384:
    // 0x2db384: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2db384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2db388:
    // 0x2db388: 0x3e00008  jr          $ra
label_2db38c:
    if (ctx->pc == 0x2DB38Cu) {
        ctx->pc = 0x2DB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB388u;
        // 0x2db38c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB390u;
        goto label_fallthrough_0x2db388;
    }
    ctx->pc = 0x2DB388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB388u;
        // 0x2db38c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2db388:
    ctx->pc = 0x2DB390u;
}
