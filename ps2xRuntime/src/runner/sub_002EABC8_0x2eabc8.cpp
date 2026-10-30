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

// Function: sub_002EABC8
// Address: 0x2eabc8 - 0x2ebb38
void sub_002EABC8_0x2eabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EABC8_0x2eabc8");
#endif

    switch (ctx->pc) {
        case 0x2eabc8u: goto label_2eabc8;
        case 0x2eabccu: goto label_2eabcc;
        case 0x2eabd0u: goto label_2eabd0;
        case 0x2eabd4u: goto label_2eabd4;
        case 0x2eabd8u: goto label_2eabd8;
        case 0x2eabdcu: goto label_2eabdc;
        case 0x2eabe0u: goto label_2eabe0;
        case 0x2eabe4u: goto label_2eabe4;
        case 0x2eabe8u: goto label_2eabe8;
        case 0x2eabecu: goto label_2eabec;
        case 0x2eabf0u: goto label_2eabf0;
        case 0x2eabf4u: goto label_2eabf4;
        case 0x2eabf8u: goto label_2eabf8;
        case 0x2eabfcu: goto label_2eabfc;
        case 0x2eac00u: goto label_2eac00;
        case 0x2eac04u: goto label_2eac04;
        case 0x2eac08u: goto label_2eac08;
        case 0x2eac0cu: goto label_2eac0c;
        case 0x2eac10u: goto label_2eac10;
        case 0x2eac14u: goto label_2eac14;
        case 0x2eac18u: goto label_2eac18;
        case 0x2eac1cu: goto label_2eac1c;
        case 0x2eac20u: goto label_2eac20;
        case 0x2eac24u: goto label_2eac24;
        case 0x2eac28u: goto label_2eac28;
        case 0x2eac2cu: goto label_2eac2c;
        case 0x2eac30u: goto label_2eac30;
        case 0x2eac34u: goto label_2eac34;
        case 0x2eac38u: goto label_2eac38;
        case 0x2eac3cu: goto label_2eac3c;
        case 0x2eac40u: goto label_2eac40;
        case 0x2eac44u: goto label_2eac44;
        case 0x2eac48u: goto label_2eac48;
        case 0x2eac4cu: goto label_2eac4c;
        case 0x2eac50u: goto label_2eac50;
        case 0x2eac54u: goto label_2eac54;
        case 0x2eac58u: goto label_2eac58;
        case 0x2eac5cu: goto label_2eac5c;
        case 0x2eac60u: goto label_2eac60;
        case 0x2eac64u: goto label_2eac64;
        case 0x2eac68u: goto label_2eac68;
        case 0x2eac6cu: goto label_2eac6c;
        case 0x2eac70u: goto label_2eac70;
        case 0x2eac74u: goto label_2eac74;
        case 0x2eac78u: goto label_2eac78;
        case 0x2eac7cu: goto label_2eac7c;
        case 0x2eac80u: goto label_2eac80;
        case 0x2eac84u: goto label_2eac84;
        case 0x2eac88u: goto label_2eac88;
        case 0x2eac8cu: goto label_2eac8c;
        case 0x2eac90u: goto label_2eac90;
        case 0x2eac94u: goto label_2eac94;
        case 0x2eac98u: goto label_2eac98;
        case 0x2eac9cu: goto label_2eac9c;
        case 0x2eaca0u: goto label_2eaca0;
        case 0x2eaca4u: goto label_2eaca4;
        case 0x2eaca8u: goto label_2eaca8;
        case 0x2eacacu: goto label_2eacac;
        case 0x2eacb0u: goto label_2eacb0;
        case 0x2eacb4u: goto label_2eacb4;
        case 0x2eacb8u: goto label_2eacb8;
        case 0x2eacbcu: goto label_2eacbc;
        case 0x2eacc0u: goto label_2eacc0;
        case 0x2eacc4u: goto label_2eacc4;
        case 0x2eacc8u: goto label_2eacc8;
        case 0x2eacccu: goto label_2eaccc;
        case 0x2eacd0u: goto label_2eacd0;
        case 0x2eacd4u: goto label_2eacd4;
        case 0x2eacd8u: goto label_2eacd8;
        case 0x2eacdcu: goto label_2eacdc;
        case 0x2eace0u: goto label_2eace0;
        case 0x2eace4u: goto label_2eace4;
        case 0x2eace8u: goto label_2eace8;
        case 0x2eacecu: goto label_2eacec;
        case 0x2eacf0u: goto label_2eacf0;
        case 0x2eacf4u: goto label_2eacf4;
        case 0x2eacf8u: goto label_2eacf8;
        case 0x2eacfcu: goto label_2eacfc;
        case 0x2ead00u: goto label_2ead00;
        case 0x2ead04u: goto label_2ead04;
        case 0x2ead08u: goto label_2ead08;
        case 0x2ead0cu: goto label_2ead0c;
        case 0x2ead10u: goto label_2ead10;
        case 0x2ead14u: goto label_2ead14;
        case 0x2ead18u: goto label_2ead18;
        case 0x2ead1cu: goto label_2ead1c;
        case 0x2ead20u: goto label_2ead20;
        case 0x2ead24u: goto label_2ead24;
        case 0x2ead28u: goto label_2ead28;
        case 0x2ead2cu: goto label_2ead2c;
        case 0x2ead30u: goto label_2ead30;
        case 0x2ead34u: goto label_2ead34;
        case 0x2ead38u: goto label_2ead38;
        case 0x2ead3cu: goto label_2ead3c;
        case 0x2ead40u: goto label_2ead40;
        case 0x2ead44u: goto label_2ead44;
        case 0x2ead48u: goto label_2ead48;
        case 0x2ead4cu: goto label_2ead4c;
        case 0x2ead50u: goto label_2ead50;
        case 0x2ead54u: goto label_2ead54;
        case 0x2ead58u: goto label_2ead58;
        case 0x2ead5cu: goto label_2ead5c;
        case 0x2ead60u: goto label_2ead60;
        case 0x2ead64u: goto label_2ead64;
        case 0x2ead68u: goto label_2ead68;
        case 0x2ead6cu: goto label_2ead6c;
        case 0x2ead70u: goto label_2ead70;
        case 0x2ead74u: goto label_2ead74;
        case 0x2ead78u: goto label_2ead78;
        case 0x2ead7cu: goto label_2ead7c;
        case 0x2ead80u: goto label_2ead80;
        case 0x2ead84u: goto label_2ead84;
        case 0x2ead88u: goto label_2ead88;
        case 0x2ead8cu: goto label_2ead8c;
        case 0x2ead90u: goto label_2ead90;
        case 0x2ead94u: goto label_2ead94;
        case 0x2ead98u: goto label_2ead98;
        case 0x2ead9cu: goto label_2ead9c;
        case 0x2eada0u: goto label_2eada0;
        case 0x2eada4u: goto label_2eada4;
        case 0x2eada8u: goto label_2eada8;
        case 0x2eadacu: goto label_2eadac;
        case 0x2eadb0u: goto label_2eadb0;
        case 0x2eadb4u: goto label_2eadb4;
        case 0x2eadb8u: goto label_2eadb8;
        case 0x2eadbcu: goto label_2eadbc;
        case 0x2eadc0u: goto label_2eadc0;
        case 0x2eadc4u: goto label_2eadc4;
        case 0x2eadc8u: goto label_2eadc8;
        case 0x2eadccu: goto label_2eadcc;
        case 0x2eadd0u: goto label_2eadd0;
        case 0x2eadd4u: goto label_2eadd4;
        case 0x2eadd8u: goto label_2eadd8;
        case 0x2eaddcu: goto label_2eaddc;
        case 0x2eade0u: goto label_2eade0;
        case 0x2eade4u: goto label_2eade4;
        case 0x2eade8u: goto label_2eade8;
        case 0x2eadecu: goto label_2eadec;
        case 0x2eadf0u: goto label_2eadf0;
        case 0x2eadf4u: goto label_2eadf4;
        case 0x2eadf8u: goto label_2eadf8;
        case 0x2eadfcu: goto label_2eadfc;
        case 0x2eae00u: goto label_2eae00;
        case 0x2eae04u: goto label_2eae04;
        case 0x2eae08u: goto label_2eae08;
        case 0x2eae0cu: goto label_2eae0c;
        case 0x2eae10u: goto label_2eae10;
        case 0x2eae14u: goto label_2eae14;
        case 0x2eae18u: goto label_2eae18;
        case 0x2eae1cu: goto label_2eae1c;
        case 0x2eae20u: goto label_2eae20;
        case 0x2eae24u: goto label_2eae24;
        case 0x2eae28u: goto label_2eae28;
        case 0x2eae2cu: goto label_2eae2c;
        case 0x2eae30u: goto label_2eae30;
        case 0x2eae34u: goto label_2eae34;
        case 0x2eae38u: goto label_2eae38;
        case 0x2eae3cu: goto label_2eae3c;
        case 0x2eae40u: goto label_2eae40;
        case 0x2eae44u: goto label_2eae44;
        case 0x2eae48u: goto label_2eae48;
        case 0x2eae4cu: goto label_2eae4c;
        case 0x2eae50u: goto label_2eae50;
        case 0x2eae54u: goto label_2eae54;
        case 0x2eae58u: goto label_2eae58;
        case 0x2eae5cu: goto label_2eae5c;
        case 0x2eae60u: goto label_2eae60;
        case 0x2eae64u: goto label_2eae64;
        case 0x2eae68u: goto label_2eae68;
        case 0x2eae6cu: goto label_2eae6c;
        case 0x2eae70u: goto label_2eae70;
        case 0x2eae74u: goto label_2eae74;
        case 0x2eae78u: goto label_2eae78;
        case 0x2eae7cu: goto label_2eae7c;
        case 0x2eae80u: goto label_2eae80;
        case 0x2eae84u: goto label_2eae84;
        case 0x2eae88u: goto label_2eae88;
        case 0x2eae8cu: goto label_2eae8c;
        case 0x2eae90u: goto label_2eae90;
        case 0x2eae94u: goto label_2eae94;
        case 0x2eae98u: goto label_2eae98;
        case 0x2eae9cu: goto label_2eae9c;
        case 0x2eaea0u: goto label_2eaea0;
        case 0x2eaea4u: goto label_2eaea4;
        case 0x2eaea8u: goto label_2eaea8;
        case 0x2eaeacu: goto label_2eaeac;
        case 0x2eaeb0u: goto label_2eaeb0;
        case 0x2eaeb4u: goto label_2eaeb4;
        case 0x2eaeb8u: goto label_2eaeb8;
        case 0x2eaebcu: goto label_2eaebc;
        case 0x2eaec0u: goto label_2eaec0;
        case 0x2eaec4u: goto label_2eaec4;
        case 0x2eaec8u: goto label_2eaec8;
        case 0x2eaeccu: goto label_2eaecc;
        case 0x2eaed0u: goto label_2eaed0;
        case 0x2eaed4u: goto label_2eaed4;
        case 0x2eaed8u: goto label_2eaed8;
        case 0x2eaedcu: goto label_2eaedc;
        case 0x2eaee0u: goto label_2eaee0;
        case 0x2eaee4u: goto label_2eaee4;
        case 0x2eaee8u: goto label_2eaee8;
        case 0x2eaeecu: goto label_2eaeec;
        case 0x2eaef0u: goto label_2eaef0;
        case 0x2eaef4u: goto label_2eaef4;
        case 0x2eaef8u: goto label_2eaef8;
        case 0x2eaefcu: goto label_2eaefc;
        case 0x2eaf00u: goto label_2eaf00;
        case 0x2eaf04u: goto label_2eaf04;
        case 0x2eaf08u: goto label_2eaf08;
        case 0x2eaf0cu: goto label_2eaf0c;
        case 0x2eaf10u: goto label_2eaf10;
        case 0x2eaf14u: goto label_2eaf14;
        case 0x2eaf18u: goto label_2eaf18;
        case 0x2eaf1cu: goto label_2eaf1c;
        case 0x2eaf20u: goto label_2eaf20;
        case 0x2eaf24u: goto label_2eaf24;
        case 0x2eaf28u: goto label_2eaf28;
        case 0x2eaf2cu: goto label_2eaf2c;
        case 0x2eaf30u: goto label_2eaf30;
        case 0x2eaf34u: goto label_2eaf34;
        case 0x2eaf38u: goto label_2eaf38;
        case 0x2eaf3cu: goto label_2eaf3c;
        case 0x2eaf40u: goto label_2eaf40;
        case 0x2eaf44u: goto label_2eaf44;
        case 0x2eaf48u: goto label_2eaf48;
        case 0x2eaf4cu: goto label_2eaf4c;
        case 0x2eaf50u: goto label_2eaf50;
        case 0x2eaf54u: goto label_2eaf54;
        case 0x2eaf58u: goto label_2eaf58;
        case 0x2eaf5cu: goto label_2eaf5c;
        case 0x2eaf60u: goto label_2eaf60;
        case 0x2eaf64u: goto label_2eaf64;
        case 0x2eaf68u: goto label_2eaf68;
        case 0x2eaf6cu: goto label_2eaf6c;
        case 0x2eaf70u: goto label_2eaf70;
        case 0x2eaf74u: goto label_2eaf74;
        case 0x2eaf78u: goto label_2eaf78;
        case 0x2eaf7cu: goto label_2eaf7c;
        case 0x2eaf80u: goto label_2eaf80;
        case 0x2eaf84u: goto label_2eaf84;
        case 0x2eaf88u: goto label_2eaf88;
        case 0x2eaf8cu: goto label_2eaf8c;
        case 0x2eaf90u: goto label_2eaf90;
        case 0x2eaf94u: goto label_2eaf94;
        case 0x2eaf98u: goto label_2eaf98;
        case 0x2eaf9cu: goto label_2eaf9c;
        case 0x2eafa0u: goto label_2eafa0;
        case 0x2eafa4u: goto label_2eafa4;
        case 0x2eafa8u: goto label_2eafa8;
        case 0x2eafacu: goto label_2eafac;
        case 0x2eafb0u: goto label_2eafb0;
        case 0x2eafb4u: goto label_2eafb4;
        case 0x2eafb8u: goto label_2eafb8;
        case 0x2eafbcu: goto label_2eafbc;
        case 0x2eafc0u: goto label_2eafc0;
        case 0x2eafc4u: goto label_2eafc4;
        case 0x2eafc8u: goto label_2eafc8;
        case 0x2eafccu: goto label_2eafcc;
        case 0x2eafd0u: goto label_2eafd0;
        case 0x2eafd4u: goto label_2eafd4;
        case 0x2eafd8u: goto label_2eafd8;
        case 0x2eafdcu: goto label_2eafdc;
        case 0x2eafe0u: goto label_2eafe0;
        case 0x2eafe4u: goto label_2eafe4;
        case 0x2eafe8u: goto label_2eafe8;
        case 0x2eafecu: goto label_2eafec;
        case 0x2eaff0u: goto label_2eaff0;
        case 0x2eaff4u: goto label_2eaff4;
        case 0x2eaff8u: goto label_2eaff8;
        case 0x2eaffcu: goto label_2eaffc;
        case 0x2eb000u: goto label_2eb000;
        case 0x2eb004u: goto label_2eb004;
        case 0x2eb008u: goto label_2eb008;
        case 0x2eb00cu: goto label_2eb00c;
        case 0x2eb010u: goto label_2eb010;
        case 0x2eb014u: goto label_2eb014;
        case 0x2eb018u: goto label_2eb018;
        case 0x2eb01cu: goto label_2eb01c;
        case 0x2eb020u: goto label_2eb020;
        case 0x2eb024u: goto label_2eb024;
        case 0x2eb028u: goto label_2eb028;
        case 0x2eb02cu: goto label_2eb02c;
        case 0x2eb030u: goto label_2eb030;
        case 0x2eb034u: goto label_2eb034;
        case 0x2eb038u: goto label_2eb038;
        case 0x2eb03cu: goto label_2eb03c;
        case 0x2eb040u: goto label_2eb040;
        case 0x2eb044u: goto label_2eb044;
        case 0x2eb048u: goto label_2eb048;
        case 0x2eb04cu: goto label_2eb04c;
        case 0x2eb050u: goto label_2eb050;
        case 0x2eb054u: goto label_2eb054;
        case 0x2eb058u: goto label_2eb058;
        case 0x2eb05cu: goto label_2eb05c;
        case 0x2eb060u: goto label_2eb060;
        case 0x2eb064u: goto label_2eb064;
        case 0x2eb068u: goto label_2eb068;
        case 0x2eb06cu: goto label_2eb06c;
        case 0x2eb070u: goto label_2eb070;
        case 0x2eb074u: goto label_2eb074;
        case 0x2eb078u: goto label_2eb078;
        case 0x2eb07cu: goto label_2eb07c;
        case 0x2eb080u: goto label_2eb080;
        case 0x2eb084u: goto label_2eb084;
        case 0x2eb088u: goto label_2eb088;
        case 0x2eb08cu: goto label_2eb08c;
        case 0x2eb090u: goto label_2eb090;
        case 0x2eb094u: goto label_2eb094;
        case 0x2eb098u: goto label_2eb098;
        case 0x2eb09cu: goto label_2eb09c;
        case 0x2eb0a0u: goto label_2eb0a0;
        case 0x2eb0a4u: goto label_2eb0a4;
        case 0x2eb0a8u: goto label_2eb0a8;
        case 0x2eb0acu: goto label_2eb0ac;
        case 0x2eb0b0u: goto label_2eb0b0;
        case 0x2eb0b4u: goto label_2eb0b4;
        case 0x2eb0b8u: goto label_2eb0b8;
        case 0x2eb0bcu: goto label_2eb0bc;
        case 0x2eb0c0u: goto label_2eb0c0;
        case 0x2eb0c4u: goto label_2eb0c4;
        case 0x2eb0c8u: goto label_2eb0c8;
        case 0x2eb0ccu: goto label_2eb0cc;
        case 0x2eb0d0u: goto label_2eb0d0;
        case 0x2eb0d4u: goto label_2eb0d4;
        case 0x2eb0d8u: goto label_2eb0d8;
        case 0x2eb0dcu: goto label_2eb0dc;
        case 0x2eb0e0u: goto label_2eb0e0;
        case 0x2eb0e4u: goto label_2eb0e4;
        case 0x2eb0e8u: goto label_2eb0e8;
        case 0x2eb0ecu: goto label_2eb0ec;
        case 0x2eb0f0u: goto label_2eb0f0;
        case 0x2eb0f4u: goto label_2eb0f4;
        case 0x2eb0f8u: goto label_2eb0f8;
        case 0x2eb0fcu: goto label_2eb0fc;
        case 0x2eb100u: goto label_2eb100;
        case 0x2eb104u: goto label_2eb104;
        case 0x2eb108u: goto label_2eb108;
        case 0x2eb10cu: goto label_2eb10c;
        case 0x2eb110u: goto label_2eb110;
        case 0x2eb114u: goto label_2eb114;
        case 0x2eb118u: goto label_2eb118;
        case 0x2eb11cu: goto label_2eb11c;
        case 0x2eb120u: goto label_2eb120;
        case 0x2eb124u: goto label_2eb124;
        case 0x2eb128u: goto label_2eb128;
        case 0x2eb12cu: goto label_2eb12c;
        case 0x2eb130u: goto label_2eb130;
        case 0x2eb134u: goto label_2eb134;
        case 0x2eb138u: goto label_2eb138;
        case 0x2eb13cu: goto label_2eb13c;
        case 0x2eb140u: goto label_2eb140;
        case 0x2eb144u: goto label_2eb144;
        case 0x2eb148u: goto label_2eb148;
        case 0x2eb14cu: goto label_2eb14c;
        case 0x2eb150u: goto label_2eb150;
        case 0x2eb154u: goto label_2eb154;
        case 0x2eb158u: goto label_2eb158;
        case 0x2eb15cu: goto label_2eb15c;
        case 0x2eb160u: goto label_2eb160;
        case 0x2eb164u: goto label_2eb164;
        case 0x2eb168u: goto label_2eb168;
        case 0x2eb16cu: goto label_2eb16c;
        case 0x2eb170u: goto label_2eb170;
        case 0x2eb174u: goto label_2eb174;
        case 0x2eb178u: goto label_2eb178;
        case 0x2eb17cu: goto label_2eb17c;
        case 0x2eb180u: goto label_2eb180;
        case 0x2eb184u: goto label_2eb184;
        case 0x2eb188u: goto label_2eb188;
        case 0x2eb18cu: goto label_2eb18c;
        case 0x2eb190u: goto label_2eb190;
        case 0x2eb194u: goto label_2eb194;
        case 0x2eb198u: goto label_2eb198;
        case 0x2eb19cu: goto label_2eb19c;
        case 0x2eb1a0u: goto label_2eb1a0;
        case 0x2eb1a4u: goto label_2eb1a4;
        case 0x2eb1a8u: goto label_2eb1a8;
        case 0x2eb1acu: goto label_2eb1ac;
        case 0x2eb1b0u: goto label_2eb1b0;
        case 0x2eb1b4u: goto label_2eb1b4;
        case 0x2eb1b8u: goto label_2eb1b8;
        case 0x2eb1bcu: goto label_2eb1bc;
        case 0x2eb1c0u: goto label_2eb1c0;
        case 0x2eb1c4u: goto label_2eb1c4;
        case 0x2eb1c8u: goto label_2eb1c8;
        case 0x2eb1ccu: goto label_2eb1cc;
        case 0x2eb1d0u: goto label_2eb1d0;
        case 0x2eb1d4u: goto label_2eb1d4;
        case 0x2eb1d8u: goto label_2eb1d8;
        case 0x2eb1dcu: goto label_2eb1dc;
        case 0x2eb1e0u: goto label_2eb1e0;
        case 0x2eb1e4u: goto label_2eb1e4;
        case 0x2eb1e8u: goto label_2eb1e8;
        case 0x2eb1ecu: goto label_2eb1ec;
        case 0x2eb1f0u: goto label_2eb1f0;
        case 0x2eb1f4u: goto label_2eb1f4;
        case 0x2eb1f8u: goto label_2eb1f8;
        case 0x2eb1fcu: goto label_2eb1fc;
        case 0x2eb200u: goto label_2eb200;
        case 0x2eb204u: goto label_2eb204;
        case 0x2eb208u: goto label_2eb208;
        case 0x2eb20cu: goto label_2eb20c;
        case 0x2eb210u: goto label_2eb210;
        case 0x2eb214u: goto label_2eb214;
        case 0x2eb218u: goto label_2eb218;
        case 0x2eb21cu: goto label_2eb21c;
        case 0x2eb220u: goto label_2eb220;
        case 0x2eb224u: goto label_2eb224;
        case 0x2eb228u: goto label_2eb228;
        case 0x2eb22cu: goto label_2eb22c;
        case 0x2eb230u: goto label_2eb230;
        case 0x2eb234u: goto label_2eb234;
        case 0x2eb238u: goto label_2eb238;
        case 0x2eb23cu: goto label_2eb23c;
        case 0x2eb240u: goto label_2eb240;
        case 0x2eb244u: goto label_2eb244;
        case 0x2eb248u: goto label_2eb248;
        case 0x2eb24cu: goto label_2eb24c;
        case 0x2eb250u: goto label_2eb250;
        case 0x2eb254u: goto label_2eb254;
        case 0x2eb258u: goto label_2eb258;
        case 0x2eb25cu: goto label_2eb25c;
        case 0x2eb260u: goto label_2eb260;
        case 0x2eb264u: goto label_2eb264;
        case 0x2eb268u: goto label_2eb268;
        case 0x2eb26cu: goto label_2eb26c;
        case 0x2eb270u: goto label_2eb270;
        case 0x2eb274u: goto label_2eb274;
        case 0x2eb278u: goto label_2eb278;
        case 0x2eb27cu: goto label_2eb27c;
        case 0x2eb280u: goto label_2eb280;
        case 0x2eb284u: goto label_2eb284;
        case 0x2eb288u: goto label_2eb288;
        case 0x2eb28cu: goto label_2eb28c;
        case 0x2eb290u: goto label_2eb290;
        case 0x2eb294u: goto label_2eb294;
        case 0x2eb298u: goto label_2eb298;
        case 0x2eb29cu: goto label_2eb29c;
        case 0x2eb2a0u: goto label_2eb2a0;
        case 0x2eb2a4u: goto label_2eb2a4;
        case 0x2eb2a8u: goto label_2eb2a8;
        case 0x2eb2acu: goto label_2eb2ac;
        case 0x2eb2b0u: goto label_2eb2b0;
        case 0x2eb2b4u: goto label_2eb2b4;
        case 0x2eb2b8u: goto label_2eb2b8;
        case 0x2eb2bcu: goto label_2eb2bc;
        case 0x2eb2c0u: goto label_2eb2c0;
        case 0x2eb2c4u: goto label_2eb2c4;
        case 0x2eb2c8u: goto label_2eb2c8;
        case 0x2eb2ccu: goto label_2eb2cc;
        case 0x2eb2d0u: goto label_2eb2d0;
        case 0x2eb2d4u: goto label_2eb2d4;
        case 0x2eb2d8u: goto label_2eb2d8;
        case 0x2eb2dcu: goto label_2eb2dc;
        case 0x2eb2e0u: goto label_2eb2e0;
        case 0x2eb2e4u: goto label_2eb2e4;
        case 0x2eb2e8u: goto label_2eb2e8;
        case 0x2eb2ecu: goto label_2eb2ec;
        case 0x2eb2f0u: goto label_2eb2f0;
        case 0x2eb2f4u: goto label_2eb2f4;
        case 0x2eb2f8u: goto label_2eb2f8;
        case 0x2eb2fcu: goto label_2eb2fc;
        case 0x2eb300u: goto label_2eb300;
        case 0x2eb304u: goto label_2eb304;
        case 0x2eb308u: goto label_2eb308;
        case 0x2eb30cu: goto label_2eb30c;
        case 0x2eb310u: goto label_2eb310;
        case 0x2eb314u: goto label_2eb314;
        case 0x2eb318u: goto label_2eb318;
        case 0x2eb31cu: goto label_2eb31c;
        case 0x2eb320u: goto label_2eb320;
        case 0x2eb324u: goto label_2eb324;
        case 0x2eb328u: goto label_2eb328;
        case 0x2eb32cu: goto label_2eb32c;
        case 0x2eb330u: goto label_2eb330;
        case 0x2eb334u: goto label_2eb334;
        case 0x2eb338u: goto label_2eb338;
        case 0x2eb33cu: goto label_2eb33c;
        case 0x2eb340u: goto label_2eb340;
        case 0x2eb344u: goto label_2eb344;
        case 0x2eb348u: goto label_2eb348;
        case 0x2eb34cu: goto label_2eb34c;
        case 0x2eb350u: goto label_2eb350;
        case 0x2eb354u: goto label_2eb354;
        case 0x2eb358u: goto label_2eb358;
        case 0x2eb35cu: goto label_2eb35c;
        case 0x2eb360u: goto label_2eb360;
        case 0x2eb364u: goto label_2eb364;
        case 0x2eb368u: goto label_2eb368;
        case 0x2eb36cu: goto label_2eb36c;
        case 0x2eb370u: goto label_2eb370;
        case 0x2eb374u: goto label_2eb374;
        case 0x2eb378u: goto label_2eb378;
        case 0x2eb37cu: goto label_2eb37c;
        case 0x2eb380u: goto label_2eb380;
        case 0x2eb384u: goto label_2eb384;
        case 0x2eb388u: goto label_2eb388;
        case 0x2eb38cu: goto label_2eb38c;
        case 0x2eb390u: goto label_2eb390;
        case 0x2eb394u: goto label_2eb394;
        case 0x2eb398u: goto label_2eb398;
        case 0x2eb39cu: goto label_2eb39c;
        case 0x2eb3a0u: goto label_2eb3a0;
        case 0x2eb3a4u: goto label_2eb3a4;
        case 0x2eb3a8u: goto label_2eb3a8;
        case 0x2eb3acu: goto label_2eb3ac;
        case 0x2eb3b0u: goto label_2eb3b0;
        case 0x2eb3b4u: goto label_2eb3b4;
        case 0x2eb3b8u: goto label_2eb3b8;
        case 0x2eb3bcu: goto label_2eb3bc;
        case 0x2eb3c0u: goto label_2eb3c0;
        case 0x2eb3c4u: goto label_2eb3c4;
        case 0x2eb3c8u: goto label_2eb3c8;
        case 0x2eb3ccu: goto label_2eb3cc;
        case 0x2eb3d0u: goto label_2eb3d0;
        case 0x2eb3d4u: goto label_2eb3d4;
        case 0x2eb3d8u: goto label_2eb3d8;
        case 0x2eb3dcu: goto label_2eb3dc;
        case 0x2eb3e0u: goto label_2eb3e0;
        case 0x2eb3e4u: goto label_2eb3e4;
        case 0x2eb3e8u: goto label_2eb3e8;
        case 0x2eb3ecu: goto label_2eb3ec;
        case 0x2eb3f0u: goto label_2eb3f0;
        case 0x2eb3f4u: goto label_2eb3f4;
        case 0x2eb3f8u: goto label_2eb3f8;
        case 0x2eb3fcu: goto label_2eb3fc;
        case 0x2eb400u: goto label_2eb400;
        case 0x2eb404u: goto label_2eb404;
        case 0x2eb408u: goto label_2eb408;
        case 0x2eb40cu: goto label_2eb40c;
        case 0x2eb410u: goto label_2eb410;
        case 0x2eb414u: goto label_2eb414;
        case 0x2eb418u: goto label_2eb418;
        case 0x2eb41cu: goto label_2eb41c;
        case 0x2eb420u: goto label_2eb420;
        case 0x2eb424u: goto label_2eb424;
        case 0x2eb428u: goto label_2eb428;
        case 0x2eb42cu: goto label_2eb42c;
        case 0x2eb430u: goto label_2eb430;
        case 0x2eb434u: goto label_2eb434;
        case 0x2eb438u: goto label_2eb438;
        case 0x2eb43cu: goto label_2eb43c;
        case 0x2eb440u: goto label_2eb440;
        case 0x2eb444u: goto label_2eb444;
        case 0x2eb448u: goto label_2eb448;
        case 0x2eb44cu: goto label_2eb44c;
        case 0x2eb450u: goto label_2eb450;
        case 0x2eb454u: goto label_2eb454;
        case 0x2eb458u: goto label_2eb458;
        case 0x2eb45cu: goto label_2eb45c;
        case 0x2eb460u: goto label_2eb460;
        case 0x2eb464u: goto label_2eb464;
        case 0x2eb468u: goto label_2eb468;
        case 0x2eb46cu: goto label_2eb46c;
        case 0x2eb470u: goto label_2eb470;
        case 0x2eb474u: goto label_2eb474;
        case 0x2eb478u: goto label_2eb478;
        case 0x2eb47cu: goto label_2eb47c;
        case 0x2eb480u: goto label_2eb480;
        case 0x2eb484u: goto label_2eb484;
        case 0x2eb488u: goto label_2eb488;
        case 0x2eb48cu: goto label_2eb48c;
        case 0x2eb490u: goto label_2eb490;
        case 0x2eb494u: goto label_2eb494;
        case 0x2eb498u: goto label_2eb498;
        case 0x2eb49cu: goto label_2eb49c;
        case 0x2eb4a0u: goto label_2eb4a0;
        case 0x2eb4a4u: goto label_2eb4a4;
        case 0x2eb4a8u: goto label_2eb4a8;
        case 0x2eb4acu: goto label_2eb4ac;
        case 0x2eb4b0u: goto label_2eb4b0;
        case 0x2eb4b4u: goto label_2eb4b4;
        case 0x2eb4b8u: goto label_2eb4b8;
        case 0x2eb4bcu: goto label_2eb4bc;
        case 0x2eb4c0u: goto label_2eb4c0;
        case 0x2eb4c4u: goto label_2eb4c4;
        case 0x2eb4c8u: goto label_2eb4c8;
        case 0x2eb4ccu: goto label_2eb4cc;
        case 0x2eb4d0u: goto label_2eb4d0;
        case 0x2eb4d4u: goto label_2eb4d4;
        case 0x2eb4d8u: goto label_2eb4d8;
        case 0x2eb4dcu: goto label_2eb4dc;
        case 0x2eb4e0u: goto label_2eb4e0;
        case 0x2eb4e4u: goto label_2eb4e4;
        case 0x2eb4e8u: goto label_2eb4e8;
        case 0x2eb4ecu: goto label_2eb4ec;
        case 0x2eb4f0u: goto label_2eb4f0;
        case 0x2eb4f4u: goto label_2eb4f4;
        case 0x2eb4f8u: goto label_2eb4f8;
        case 0x2eb4fcu: goto label_2eb4fc;
        case 0x2eb500u: goto label_2eb500;
        case 0x2eb504u: goto label_2eb504;
        case 0x2eb508u: goto label_2eb508;
        case 0x2eb50cu: goto label_2eb50c;
        case 0x2eb510u: goto label_2eb510;
        case 0x2eb514u: goto label_2eb514;
        case 0x2eb518u: goto label_2eb518;
        case 0x2eb51cu: goto label_2eb51c;
        case 0x2eb520u: goto label_2eb520;
        case 0x2eb524u: goto label_2eb524;
        case 0x2eb528u: goto label_2eb528;
        case 0x2eb52cu: goto label_2eb52c;
        case 0x2eb530u: goto label_2eb530;
        case 0x2eb534u: goto label_2eb534;
        case 0x2eb538u: goto label_2eb538;
        case 0x2eb53cu: goto label_2eb53c;
        case 0x2eb540u: goto label_2eb540;
        case 0x2eb544u: goto label_2eb544;
        case 0x2eb548u: goto label_2eb548;
        case 0x2eb54cu: goto label_2eb54c;
        case 0x2eb550u: goto label_2eb550;
        case 0x2eb554u: goto label_2eb554;
        case 0x2eb558u: goto label_2eb558;
        case 0x2eb55cu: goto label_2eb55c;
        case 0x2eb560u: goto label_2eb560;
        case 0x2eb564u: goto label_2eb564;
        case 0x2eb568u: goto label_2eb568;
        case 0x2eb56cu: goto label_2eb56c;
        case 0x2eb570u: goto label_2eb570;
        case 0x2eb574u: goto label_2eb574;
        case 0x2eb578u: goto label_2eb578;
        case 0x2eb57cu: goto label_2eb57c;
        case 0x2eb580u: goto label_2eb580;
        case 0x2eb584u: goto label_2eb584;
        case 0x2eb588u: goto label_2eb588;
        case 0x2eb58cu: goto label_2eb58c;
        case 0x2eb590u: goto label_2eb590;
        case 0x2eb594u: goto label_2eb594;
        case 0x2eb598u: goto label_2eb598;
        case 0x2eb59cu: goto label_2eb59c;
        case 0x2eb5a0u: goto label_2eb5a0;
        case 0x2eb5a4u: goto label_2eb5a4;
        case 0x2eb5a8u: goto label_2eb5a8;
        case 0x2eb5acu: goto label_2eb5ac;
        case 0x2eb5b0u: goto label_2eb5b0;
        case 0x2eb5b4u: goto label_2eb5b4;
        case 0x2eb5b8u: goto label_2eb5b8;
        case 0x2eb5bcu: goto label_2eb5bc;
        case 0x2eb5c0u: goto label_2eb5c0;
        case 0x2eb5c4u: goto label_2eb5c4;
        case 0x2eb5c8u: goto label_2eb5c8;
        case 0x2eb5ccu: goto label_2eb5cc;
        case 0x2eb5d0u: goto label_2eb5d0;
        case 0x2eb5d4u: goto label_2eb5d4;
        case 0x2eb5d8u: goto label_2eb5d8;
        case 0x2eb5dcu: goto label_2eb5dc;
        case 0x2eb5e0u: goto label_2eb5e0;
        case 0x2eb5e4u: goto label_2eb5e4;
        case 0x2eb5e8u: goto label_2eb5e8;
        case 0x2eb5ecu: goto label_2eb5ec;
        case 0x2eb5f0u: goto label_2eb5f0;
        case 0x2eb5f4u: goto label_2eb5f4;
        case 0x2eb5f8u: goto label_2eb5f8;
        case 0x2eb5fcu: goto label_2eb5fc;
        case 0x2eb600u: goto label_2eb600;
        case 0x2eb604u: goto label_2eb604;
        case 0x2eb608u: goto label_2eb608;
        case 0x2eb60cu: goto label_2eb60c;
        case 0x2eb610u: goto label_2eb610;
        case 0x2eb614u: goto label_2eb614;
        case 0x2eb618u: goto label_2eb618;
        case 0x2eb61cu: goto label_2eb61c;
        case 0x2eb620u: goto label_2eb620;
        case 0x2eb624u: goto label_2eb624;
        case 0x2eb628u: goto label_2eb628;
        case 0x2eb62cu: goto label_2eb62c;
        case 0x2eb630u: goto label_2eb630;
        case 0x2eb634u: goto label_2eb634;
        case 0x2eb638u: goto label_2eb638;
        case 0x2eb63cu: goto label_2eb63c;
        case 0x2eb640u: goto label_2eb640;
        case 0x2eb644u: goto label_2eb644;
        case 0x2eb648u: goto label_2eb648;
        case 0x2eb64cu: goto label_2eb64c;
        case 0x2eb650u: goto label_2eb650;
        case 0x2eb654u: goto label_2eb654;
        case 0x2eb658u: goto label_2eb658;
        case 0x2eb65cu: goto label_2eb65c;
        case 0x2eb660u: goto label_2eb660;
        case 0x2eb664u: goto label_2eb664;
        case 0x2eb668u: goto label_2eb668;
        case 0x2eb66cu: goto label_2eb66c;
        case 0x2eb670u: goto label_2eb670;
        case 0x2eb674u: goto label_2eb674;
        case 0x2eb678u: goto label_2eb678;
        case 0x2eb67cu: goto label_2eb67c;
        case 0x2eb680u: goto label_2eb680;
        case 0x2eb684u: goto label_2eb684;
        case 0x2eb688u: goto label_2eb688;
        case 0x2eb68cu: goto label_2eb68c;
        case 0x2eb690u: goto label_2eb690;
        case 0x2eb694u: goto label_2eb694;
        case 0x2eb698u: goto label_2eb698;
        case 0x2eb69cu: goto label_2eb69c;
        case 0x2eb6a0u: goto label_2eb6a0;
        case 0x2eb6a4u: goto label_2eb6a4;
        case 0x2eb6a8u: goto label_2eb6a8;
        case 0x2eb6acu: goto label_2eb6ac;
        case 0x2eb6b0u: goto label_2eb6b0;
        case 0x2eb6b4u: goto label_2eb6b4;
        case 0x2eb6b8u: goto label_2eb6b8;
        case 0x2eb6bcu: goto label_2eb6bc;
        case 0x2eb6c0u: goto label_2eb6c0;
        case 0x2eb6c4u: goto label_2eb6c4;
        case 0x2eb6c8u: goto label_2eb6c8;
        case 0x2eb6ccu: goto label_2eb6cc;
        case 0x2eb6d0u: goto label_2eb6d0;
        case 0x2eb6d4u: goto label_2eb6d4;
        case 0x2eb6d8u: goto label_2eb6d8;
        case 0x2eb6dcu: goto label_2eb6dc;
        case 0x2eb6e0u: goto label_2eb6e0;
        case 0x2eb6e4u: goto label_2eb6e4;
        case 0x2eb6e8u: goto label_2eb6e8;
        case 0x2eb6ecu: goto label_2eb6ec;
        case 0x2eb6f0u: goto label_2eb6f0;
        case 0x2eb6f4u: goto label_2eb6f4;
        case 0x2eb6f8u: goto label_2eb6f8;
        case 0x2eb6fcu: goto label_2eb6fc;
        case 0x2eb700u: goto label_2eb700;
        case 0x2eb704u: goto label_2eb704;
        case 0x2eb708u: goto label_2eb708;
        case 0x2eb70cu: goto label_2eb70c;
        case 0x2eb710u: goto label_2eb710;
        case 0x2eb714u: goto label_2eb714;
        case 0x2eb718u: goto label_2eb718;
        case 0x2eb71cu: goto label_2eb71c;
        case 0x2eb720u: goto label_2eb720;
        case 0x2eb724u: goto label_2eb724;
        case 0x2eb728u: goto label_2eb728;
        case 0x2eb72cu: goto label_2eb72c;
        case 0x2eb730u: goto label_2eb730;
        case 0x2eb734u: goto label_2eb734;
        case 0x2eb738u: goto label_2eb738;
        case 0x2eb73cu: goto label_2eb73c;
        case 0x2eb740u: goto label_2eb740;
        case 0x2eb744u: goto label_2eb744;
        case 0x2eb748u: goto label_2eb748;
        case 0x2eb74cu: goto label_2eb74c;
        case 0x2eb750u: goto label_2eb750;
        case 0x2eb754u: goto label_2eb754;
        case 0x2eb758u: goto label_2eb758;
        case 0x2eb75cu: goto label_2eb75c;
        case 0x2eb760u: goto label_2eb760;
        case 0x2eb764u: goto label_2eb764;
        case 0x2eb768u: goto label_2eb768;
        case 0x2eb76cu: goto label_2eb76c;
        case 0x2eb770u: goto label_2eb770;
        case 0x2eb774u: goto label_2eb774;
        case 0x2eb778u: goto label_2eb778;
        case 0x2eb77cu: goto label_2eb77c;
        case 0x2eb780u: goto label_2eb780;
        case 0x2eb784u: goto label_2eb784;
        case 0x2eb788u: goto label_2eb788;
        case 0x2eb78cu: goto label_2eb78c;
        case 0x2eb790u: goto label_2eb790;
        case 0x2eb794u: goto label_2eb794;
        case 0x2eb798u: goto label_2eb798;
        case 0x2eb79cu: goto label_2eb79c;
        case 0x2eb7a0u: goto label_2eb7a0;
        case 0x2eb7a4u: goto label_2eb7a4;
        case 0x2eb7a8u: goto label_2eb7a8;
        case 0x2eb7acu: goto label_2eb7ac;
        case 0x2eb7b0u: goto label_2eb7b0;
        case 0x2eb7b4u: goto label_2eb7b4;
        case 0x2eb7b8u: goto label_2eb7b8;
        case 0x2eb7bcu: goto label_2eb7bc;
        case 0x2eb7c0u: goto label_2eb7c0;
        case 0x2eb7c4u: goto label_2eb7c4;
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb7ccu: goto label_2eb7cc;
        case 0x2eb7d0u: goto label_2eb7d0;
        case 0x2eb7d4u: goto label_2eb7d4;
        case 0x2eb7d8u: goto label_2eb7d8;
        case 0x2eb7dcu: goto label_2eb7dc;
        case 0x2eb7e0u: goto label_2eb7e0;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb7e8u: goto label_2eb7e8;
        case 0x2eb7ecu: goto label_2eb7ec;
        case 0x2eb7f0u: goto label_2eb7f0;
        case 0x2eb7f4u: goto label_2eb7f4;
        case 0x2eb7f8u: goto label_2eb7f8;
        case 0x2eb7fcu: goto label_2eb7fc;
        case 0x2eb800u: goto label_2eb800;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb808u: goto label_2eb808;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb810u: goto label_2eb810;
        case 0x2eb814u: goto label_2eb814;
        case 0x2eb818u: goto label_2eb818;
        case 0x2eb81cu: goto label_2eb81c;
        case 0x2eb820u: goto label_2eb820;
        case 0x2eb824u: goto label_2eb824;
        case 0x2eb828u: goto label_2eb828;
        case 0x2eb82cu: goto label_2eb82c;
        case 0x2eb830u: goto label_2eb830;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb838u: goto label_2eb838;
        case 0x2eb83cu: goto label_2eb83c;
        case 0x2eb840u: goto label_2eb840;
        case 0x2eb844u: goto label_2eb844;
        case 0x2eb848u: goto label_2eb848;
        case 0x2eb84cu: goto label_2eb84c;
        case 0x2eb850u: goto label_2eb850;
        case 0x2eb854u: goto label_2eb854;
        case 0x2eb858u: goto label_2eb858;
        case 0x2eb85cu: goto label_2eb85c;
        case 0x2eb860u: goto label_2eb860;
        case 0x2eb864u: goto label_2eb864;
        case 0x2eb868u: goto label_2eb868;
        case 0x2eb86cu: goto label_2eb86c;
        case 0x2eb870u: goto label_2eb870;
        case 0x2eb874u: goto label_2eb874;
        case 0x2eb878u: goto label_2eb878;
        case 0x2eb87cu: goto label_2eb87c;
        case 0x2eb880u: goto label_2eb880;
        case 0x2eb884u: goto label_2eb884;
        case 0x2eb888u: goto label_2eb888;
        case 0x2eb88cu: goto label_2eb88c;
        case 0x2eb890u: goto label_2eb890;
        case 0x2eb894u: goto label_2eb894;
        case 0x2eb898u: goto label_2eb898;
        case 0x2eb89cu: goto label_2eb89c;
        case 0x2eb8a0u: goto label_2eb8a0;
        case 0x2eb8a4u: goto label_2eb8a4;
        case 0x2eb8a8u: goto label_2eb8a8;
        case 0x2eb8acu: goto label_2eb8ac;
        case 0x2eb8b0u: goto label_2eb8b0;
        case 0x2eb8b4u: goto label_2eb8b4;
        case 0x2eb8b8u: goto label_2eb8b8;
        case 0x2eb8bcu: goto label_2eb8bc;
        case 0x2eb8c0u: goto label_2eb8c0;
        case 0x2eb8c4u: goto label_2eb8c4;
        case 0x2eb8c8u: goto label_2eb8c8;
        case 0x2eb8ccu: goto label_2eb8cc;
        case 0x2eb8d0u: goto label_2eb8d0;
        case 0x2eb8d4u: goto label_2eb8d4;
        case 0x2eb8d8u: goto label_2eb8d8;
        case 0x2eb8dcu: goto label_2eb8dc;
        case 0x2eb8e0u: goto label_2eb8e0;
        case 0x2eb8e4u: goto label_2eb8e4;
        case 0x2eb8e8u: goto label_2eb8e8;
        case 0x2eb8ecu: goto label_2eb8ec;
        case 0x2eb8f0u: goto label_2eb8f0;
        case 0x2eb8f4u: goto label_2eb8f4;
        case 0x2eb8f8u: goto label_2eb8f8;
        case 0x2eb8fcu: goto label_2eb8fc;
        case 0x2eb900u: goto label_2eb900;
        case 0x2eb904u: goto label_2eb904;
        case 0x2eb908u: goto label_2eb908;
        case 0x2eb90cu: goto label_2eb90c;
        case 0x2eb910u: goto label_2eb910;
        case 0x2eb914u: goto label_2eb914;
        case 0x2eb918u: goto label_2eb918;
        case 0x2eb91cu: goto label_2eb91c;
        case 0x2eb920u: goto label_2eb920;
        case 0x2eb924u: goto label_2eb924;
        case 0x2eb928u: goto label_2eb928;
        case 0x2eb92cu: goto label_2eb92c;
        case 0x2eb930u: goto label_2eb930;
        case 0x2eb934u: goto label_2eb934;
        case 0x2eb938u: goto label_2eb938;
        case 0x2eb93cu: goto label_2eb93c;
        case 0x2eb940u: goto label_2eb940;
        case 0x2eb944u: goto label_2eb944;
        case 0x2eb948u: goto label_2eb948;
        case 0x2eb94cu: goto label_2eb94c;
        case 0x2eb950u: goto label_2eb950;
        case 0x2eb954u: goto label_2eb954;
        case 0x2eb958u: goto label_2eb958;
        case 0x2eb95cu: goto label_2eb95c;
        case 0x2eb960u: goto label_2eb960;
        case 0x2eb964u: goto label_2eb964;
        case 0x2eb968u: goto label_2eb968;
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb970u: goto label_2eb970;
        case 0x2eb974u: goto label_2eb974;
        case 0x2eb978u: goto label_2eb978;
        case 0x2eb97cu: goto label_2eb97c;
        case 0x2eb980u: goto label_2eb980;
        case 0x2eb984u: goto label_2eb984;
        case 0x2eb988u: goto label_2eb988;
        case 0x2eb98cu: goto label_2eb98c;
        case 0x2eb990u: goto label_2eb990;
        case 0x2eb994u: goto label_2eb994;
        case 0x2eb998u: goto label_2eb998;
        case 0x2eb99cu: goto label_2eb99c;
        case 0x2eb9a0u: goto label_2eb9a0;
        case 0x2eb9a4u: goto label_2eb9a4;
        case 0x2eb9a8u: goto label_2eb9a8;
        case 0x2eb9acu: goto label_2eb9ac;
        case 0x2eb9b0u: goto label_2eb9b0;
        case 0x2eb9b4u: goto label_2eb9b4;
        case 0x2eb9b8u: goto label_2eb9b8;
        case 0x2eb9bcu: goto label_2eb9bc;
        case 0x2eb9c0u: goto label_2eb9c0;
        case 0x2eb9c4u: goto label_2eb9c4;
        case 0x2eb9c8u: goto label_2eb9c8;
        case 0x2eb9ccu: goto label_2eb9cc;
        case 0x2eb9d0u: goto label_2eb9d0;
        case 0x2eb9d4u: goto label_2eb9d4;
        case 0x2eb9d8u: goto label_2eb9d8;
        case 0x2eb9dcu: goto label_2eb9dc;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eb9e4u: goto label_2eb9e4;
        case 0x2eb9e8u: goto label_2eb9e8;
        case 0x2eb9ecu: goto label_2eb9ec;
        case 0x2eb9f0u: goto label_2eb9f0;
        case 0x2eb9f4u: goto label_2eb9f4;
        case 0x2eb9f8u: goto label_2eb9f8;
        case 0x2eb9fcu: goto label_2eb9fc;
        case 0x2eba00u: goto label_2eba00;
        case 0x2eba04u: goto label_2eba04;
        case 0x2eba08u: goto label_2eba08;
        case 0x2eba0cu: goto label_2eba0c;
        case 0x2eba10u: goto label_2eba10;
        case 0x2eba14u: goto label_2eba14;
        case 0x2eba18u: goto label_2eba18;
        case 0x2eba1cu: goto label_2eba1c;
        case 0x2eba20u: goto label_2eba20;
        case 0x2eba24u: goto label_2eba24;
        case 0x2eba28u: goto label_2eba28;
        case 0x2eba2cu: goto label_2eba2c;
        case 0x2eba30u: goto label_2eba30;
        case 0x2eba34u: goto label_2eba34;
        case 0x2eba38u: goto label_2eba38;
        case 0x2eba3cu: goto label_2eba3c;
        case 0x2eba40u: goto label_2eba40;
        case 0x2eba44u: goto label_2eba44;
        case 0x2eba48u: goto label_2eba48;
        case 0x2eba4cu: goto label_2eba4c;
        case 0x2eba50u: goto label_2eba50;
        case 0x2eba54u: goto label_2eba54;
        case 0x2eba58u: goto label_2eba58;
        case 0x2eba5cu: goto label_2eba5c;
        case 0x2eba60u: goto label_2eba60;
        case 0x2eba64u: goto label_2eba64;
        case 0x2eba68u: goto label_2eba68;
        case 0x2eba6cu: goto label_2eba6c;
        case 0x2eba70u: goto label_2eba70;
        case 0x2eba74u: goto label_2eba74;
        case 0x2eba78u: goto label_2eba78;
        case 0x2eba7cu: goto label_2eba7c;
        case 0x2eba80u: goto label_2eba80;
        case 0x2eba84u: goto label_2eba84;
        case 0x2eba88u: goto label_2eba88;
        case 0x2eba8cu: goto label_2eba8c;
        case 0x2eba90u: goto label_2eba90;
        case 0x2eba94u: goto label_2eba94;
        case 0x2eba98u: goto label_2eba98;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebaa0u: goto label_2ebaa0;
        case 0x2ebaa4u: goto label_2ebaa4;
        case 0x2ebaa8u: goto label_2ebaa8;
        case 0x2ebaacu: goto label_2ebaac;
        case 0x2ebab0u: goto label_2ebab0;
        case 0x2ebab4u: goto label_2ebab4;
        case 0x2ebab8u: goto label_2ebab8;
        case 0x2ebabcu: goto label_2ebabc;
        case 0x2ebac0u: goto label_2ebac0;
        case 0x2ebac4u: goto label_2ebac4;
        case 0x2ebac8u: goto label_2ebac8;
        case 0x2ebaccu: goto label_2ebacc;
        case 0x2ebad0u: goto label_2ebad0;
        case 0x2ebad4u: goto label_2ebad4;
        case 0x2ebad8u: goto label_2ebad8;
        case 0x2ebadcu: goto label_2ebadc;
        case 0x2ebae0u: goto label_2ebae0;
        case 0x2ebae4u: goto label_2ebae4;
        case 0x2ebae8u: goto label_2ebae8;
        case 0x2ebaecu: goto label_2ebaec;
        case 0x2ebaf0u: goto label_2ebaf0;
        case 0x2ebaf4u: goto label_2ebaf4;
        case 0x2ebaf8u: goto label_2ebaf8;
        case 0x2ebafcu: goto label_2ebafc;
        case 0x2ebb00u: goto label_2ebb00;
        case 0x2ebb04u: goto label_2ebb04;
        case 0x2ebb08u: goto label_2ebb08;
        case 0x2ebb0cu: goto label_2ebb0c;
        case 0x2ebb10u: goto label_2ebb10;
        case 0x2ebb14u: goto label_2ebb14;
        case 0x2ebb18u: goto label_2ebb18;
        case 0x2ebb1cu: goto label_2ebb1c;
        case 0x2ebb20u: goto label_2ebb20;
        case 0x2ebb24u: goto label_2ebb24;
        case 0x2ebb28u: goto label_2ebb28;
        case 0x2ebb2cu: goto label_2ebb2c;
        case 0x2ebb30u: goto label_2ebb30;
        case 0x2ebb34u: goto label_2ebb34;
        default: break;
    }

    ctx->pc = 0x2eabc8u;

label_2eabc8:
    // 0x2eabc8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2eabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2eabcc:
    // 0x2eabcc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2eabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_2eabd0:
    // 0x2eabd0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2eabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2eabd4:
    // 0x2eabd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eabd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eabd8:
    // 0x2eabd8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2eabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_2eabdc:
    // 0x2eabdc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2eabdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_2eabe0:
    // 0x2eabe0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2eabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2eabe4:
    // 0x2eabe4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2eabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_2eabe8:
    // 0x2eabe8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2eabe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_2eabec:
    // 0x2eabec: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2eabecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2eabf0:
    // 0x2eabf0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2eabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2eabf4:
    // 0x2eabf4: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2eabf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2eabf8:
    // 0x2eabf8: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2eabf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2eabfc:
    // 0x2eabfc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2eabfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2eac00:
    // 0x2eac00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2eac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eac04:
    // 0x2eac04: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2eac04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2eac08:
    // 0x2eac08: 0x1c4003bb  bgtz        $v0, . + 4 + (0x3BB << 2)
label_2eac0c:
    if (ctx->pc == 0x2EAC0Cu) {
        ctx->pc = 0x2EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC08u;
        // 0x2eac0c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC10u;
        goto label_2eac10;
    }
    ctx->pc = 0x2EAC08u;
    {
        const bool branch_taken_0x2eac08 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC08u;
        // 0x2eac0c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac08) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAC10u;
label_2eac10:
    // 0x2eac10: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x2eac10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_2eac14:
    // 0x2eac14: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2eac14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eac18:
    // 0x2eac18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2eac1c:
    // 0x2eac1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2eac1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eac20:
    // 0x2eac20: 0x105403b6  beq         $v0, $s4, . + 4 + (0x3B6 << 2)
label_2eac24:
    if (ctx->pc == 0x2EAC24u) {
        ctx->pc = 0x2EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC20u;
        // 0x2eac24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC28u;
        goto label_2eac28;
    }
    ctx->pc = 0x2EAC20u;
    {
        const bool branch_taken_0x2eac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC20u;
        // 0x2eac24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac20) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EAC28u;
label_2eac28:
    // 0x2eac28: 0xc0baa6e  jal         func_2EA9B8
label_2eac2c:
    if (ctx->pc == 0x2EAC2Cu) {
        ctx->pc = 0x2EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC28u;
        // 0x2eac2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC30u;
        goto label_2eac30;
    }
    ctx->pc = 0x2EAC28u;
    SET_GPR_U32(ctx, 31, 0x2EAC30u);
    ctx->pc = 0x2EAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC28u;
    // 0x2eac2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA9B8u, 0x2EAC28u, 0x2EAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC30u;
label_2eac30:
    // 0x2eac30: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x2eac30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2eac34:
    // 0x2eac34: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_2eac38:
    if (ctx->pc == 0x2EAC38u) {
        ctx->pc = 0x2EAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC34u;
        // 0x2eac38: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC3Cu;
        goto label_2eac3c;
    }
    ctx->pc = 0x2EAC34u;
    {
        const bool branch_taken_0x2eac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac34) {
            ctx->pc = 0x2EAC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAC34u;
            // 0x2eac38: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAD0Cu;
            goto label_2ead0c;
        }
    }
    ctx->pc = 0x2EAC3Cu;
label_2eac3c:
    // 0x2eac3c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2eac40:
    // 0x2eac40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eac44:
    // 0x2eac44: 0xc089998  jal         func_226660
label_2eac48:
    if (ctx->pc == 0x2EAC48u) {
        ctx->pc = 0x2EAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC44u;
        // 0x2eac48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC4Cu;
        goto label_2eac4c;
    }
    ctx->pc = 0x2EAC44u;
    SET_GPR_U32(ctx, 31, 0x2EAC4Cu);
    ctx->pc = 0x2EAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC44u;
    // 0x2eac48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EAC44u, 0x2EAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC4Cu;
label_2eac4c:
    // 0x2eac4c: 0x144003ab  bnez        $v0, . + 4 + (0x3AB << 2)
label_2eac50:
    if (ctx->pc == 0x2EAC50u) {
        ctx->pc = 0x2EAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC4Cu;
        // 0x2eac50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC54u;
        goto label_2eac54;
    }
    ctx->pc = 0x2EAC4Cu;
    {
        const bool branch_taken_0x2eac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC4Cu;
        // 0x2eac50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac4c) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EAC54u;
label_2eac54:
    // 0x2eac54: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2eac54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2eac58:
    // 0x2eac58: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2eac58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2eac5c:
    // 0x2eac5c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2eac5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2eac60:
    // 0x2eac60: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2eac60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2eac64:
    // 0x2eac64: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2eac64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2eac68:
    // 0x2eac68: 0xc08997c  jal         func_2265F0
label_2eac6c:
    if (ctx->pc == 0x2EAC6Cu) {
        ctx->pc = 0x2EAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC68u;
        // 0x2eac6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC70u;
        goto label_2eac70;
    }
    ctx->pc = 0x2EAC68u;
    SET_GPR_U32(ctx, 31, 0x2EAC70u);
    ctx->pc = 0x2EAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC68u;
    // 0x2eac6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2EAC68u, 0x2EAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC70u;
label_2eac70:
    // 0x2eac70: 0x144003a2  bnez        $v0, . + 4 + (0x3A2 << 2)
label_2eac74:
    if (ctx->pc == 0x2EAC74u) {
        ctx->pc = 0x2EAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC70u;
        // 0x2eac74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC78u;
        goto label_2eac78;
    }
    ctx->pc = 0x2EAC70u;
    {
        const bool branch_taken_0x2eac70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC70u;
        // 0x2eac74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac70) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EAC78u;
label_2eac78:
    // 0x2eac78: 0xc0a47b4  jal         func_291ED0
label_2eac7c:
    if (ctx->pc == 0x2EAC7Cu) {
        ctx->pc = 0x2EAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC78u;
        // 0x2eac7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC80u;
        goto label_2eac80;
    }
    ctx->pc = 0x2EAC78u;
    SET_GPR_U32(ctx, 31, 0x2EAC80u);
    ctx->pc = 0x2EAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC78u;
    // 0x2eac7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2EAC78u, 0x2EAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC80u;
label_2eac80:
    // 0x2eac80: 0x14540011  bne         $v0, $s4, . + 4 + (0x11 << 2)
label_2eac84:
    if (ctx->pc == 0x2EAC84u) {
        ctx->pc = 0x2EAC88u;
        goto label_2eac88;
    }
    ctx->pc = 0x2EAC80u;
    {
        const bool branch_taken_0x2eac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2eac80) {
            ctx->pc = 0x2EACC8u;
            goto label_2eacc8;
        }
    }
    ctx->pc = 0x2EAC88u;
label_2eac88:
    // 0x2eac88: 0xc0baac2  jal         func_2EAB08
label_2eac8c:
    if (ctx->pc == 0x2EAC8Cu) {
        ctx->pc = 0x2EAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC88u;
        // 0x2eac8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC90u;
        goto label_2eac90;
    }
    ctx->pc = 0x2EAC88u;
    SET_GPR_U32(ctx, 31, 0x2EAC90u);
    ctx->pc = 0x2EAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC88u;
    // 0x2eac8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EAC88u, 0x2EAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC90u;
label_2eac90:
    // 0x2eac90: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2eac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2eac94:
    // 0x2eac94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2eac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2eac98:
    // 0x2eac98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2eac9c:
    // 0x2eac9c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x2eac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2eaca0:
    // 0x2eaca0: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x2eaca0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2eaca4:
    // 0x2eaca4: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2eaca4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2eaca8:
    // 0x2eaca8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2eaca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2eacac:
    // 0x2eacac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eacacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eacb0:
    // 0x2eacb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eacb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eacb4:
    // 0x2eacb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eacb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eacb8:
    // 0x2eacb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eacb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eacbc:
    // 0x2eacbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eacbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eacc0:
    // 0x2eacc0: 0xc088178  jal         func_2205E0
label_2eacc4:
    if (ctx->pc == 0x2EACC4u) {
        ctx->pc = 0x2EACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACC0u;
        // 0x2eacc4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACC8u;
        goto label_2eacc8;
    }
    ctx->pc = 0x2EACC0u;
    SET_GPR_U32(ctx, 31, 0x2EACC8u);
    ctx->pc = 0x2EACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACC0u;
    // 0x2eacc4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EACC0u, 0x2EACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACC8u;
label_2eacc8:
    // 0x2eacc8: 0xc0a367c  jal         func_28D9F0
label_2eaccc:
    if (ctx->pc == 0x2EACCCu) {
        ctx->pc = 0x2EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACC8u;
        // 0x2eaccc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACD0u;
        goto label_2eacd0;
    }
    ctx->pc = 0x2EACC8u;
    SET_GPR_U32(ctx, 31, 0x2EACD0u);
    ctx->pc = 0x2EACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACC8u;
    // 0x2eaccc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EACC8u, 0x2EACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACD0u;
label_2eacd0:
    // 0x2eacd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2eacd4:
    if (ctx->pc == 0x2EACD4u) {
        ctx->pc = 0x2EACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACD0u;
        // 0x2eacd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EACD8u;
        goto label_2eacd8;
    }
    ctx->pc = 0x2EACD0u;
    {
        const bool branch_taken_0x2eacd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACD0u;
        // 0x2eacd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacd0) {
            ctx->pc = 0x2EAD00u;
            goto label_2ead00;
        }
    }
    ctx->pc = 0x2EACD8u;
label_2eacd8:
    // 0x2eacd8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2eacd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2eacdc:
    // 0x2eacdc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2eacdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2eace0:
    // 0x2eace0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eace0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eace4:
    // 0x2eace4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eace4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eace8:
    // 0x2eace8: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2eace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2eacec:
    // 0x2eacec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eacecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eacf0:
    // 0x2eacf0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2eacf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2eacf4:
    // 0x2eacf4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eacf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eacf8:
    // 0x2eacf8: 0xc0be968  jal         func_2FA5A0
label_2eacfc:
    if (ctx->pc == 0x2EACFCu) {
        ctx->pc = 0x2EACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACF8u;
        // 0x2eacfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD00u;
        goto label_2ead00;
    }
    ctx->pc = 0x2EACF8u;
    SET_GPR_U32(ctx, 31, 0x2EAD00u);
    ctx->pc = 0x2EACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACF8u;
    // 0x2eacfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EACF8u, 0x2EAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD00u;
label_2ead00:
    // 0x2ead00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ead00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ead04:
    // 0x2ead04: 0x1000037c  b           . + 4 + (0x37C << 2)
label_2ead08:
    if (ctx->pc == 0x2EAD08u) {
        ctx->pc = 0x2EAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD04u;
        // 0x2ead08: 0xa2220024  sb          $v0, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD0Cu;
        goto label_2ead0c;
    }
    ctx->pc = 0x2EAD04u;
    {
        const bool branch_taken_0x2ead04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD04u;
        // 0x2ead08: 0xa2220024  sb          $v0, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead04) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAD0Cu;
label_2ead0c:
    // 0x2ead0c: 0xc0e409a  jal         func_390268
label_2ead10:
    if (ctx->pc == 0x2EAD10u) {
        ctx->pc = 0x2EAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD0Cu;
        // 0x2ead10: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD14u;
        goto label_2ead14;
    }
    ctx->pc = 0x2EAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2EAD14u);
    ctx->pc = 0x2EAD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD0Cu;
    // 0x2ead10: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EAD0Cu, 0x2EAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD14u;
label_2ead14:
    // 0x2ead14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ead14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ead18:
    // 0x2ead18: 0xc0a34d6  jal         func_28D358
label_2ead1c:
    if (ctx->pc == 0x2EAD1Cu) {
        ctx->pc = 0x2EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD18u;
        // 0x2ead1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD20u;
        goto label_2ead20;
    }
    ctx->pc = 0x2EAD18u;
    SET_GPR_U32(ctx, 31, 0x2EAD20u);
    ctx->pc = 0x2EAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD18u;
    // 0x2ead1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EAD18u, 0x2EAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD20u;
label_2ead20:
    // 0x2ead20: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x2ead20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2ead24:
    // 0x2ead24: 0x147400a9  bne         $v1, $s4, . + 4 + (0xA9 << 2)
label_2ead28:
    if (ctx->pc == 0x2EAD28u) {
        ctx->pc = 0x2EAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD24u;
        // 0x2ead28: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD2Cu;
        goto label_2ead2c;
    }
    ctx->pc = 0x2EAD24u;
    {
        const bool branch_taken_0x2ead24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2EAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD24u;
        // 0x2ead28: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead24) {
            ctx->pc = 0x2EAFCCu;
            goto label_2eafcc;
        }
    }
    ctx->pc = 0x2EAD2Cu;
label_2ead2c:
    // 0x2ead2c: 0xc088eb4  jal         func_223AD0
label_2ead30:
    if (ctx->pc == 0x2EAD30u) {
        ctx->pc = 0x2EAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD2Cu;
        // 0x2ead30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD34u;
        goto label_2ead34;
    }
    ctx->pc = 0x2EAD2Cu;
    SET_GPR_U32(ctx, 31, 0x2EAD34u);
    ctx->pc = 0x2EAD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD2Cu;
    // 0x2ead30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2EAD2Cu, 0x2EAD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD34u;
label_2ead34:
    // 0x2ead34: 0x54540006  bnel        $v0, $s4, . + 4 + (0x6 << 2)
label_2ead38:
    if (ctx->pc == 0x2EAD38u) {
        ctx->pc = 0x2EAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD34u;
        // 0x2ead38: 0x92220028  lbu         $v0, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD3Cu;
        goto label_2ead3c;
    }
    ctx->pc = 0x2EAD34u;
    {
        const bool branch_taken_0x2ead34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ead34) {
            ctx->pc = 0x2EAD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAD34u;
            // 0x2ead38: 0x92220028  lbu         $v0, 0x28($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAD50u;
            goto label_2ead50;
        }
    }
    ctx->pc = 0x2EAD3Cu;
label_2ead3c:
    // 0x2ead3c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ead3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ead40:
    // 0x2ead40: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2ead40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2ead44:
    // 0x2ead44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ead44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ead48:
    // 0x2ead48: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2ead48u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2ead4c:
    // 0x2ead4c: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2ead4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2ead50:
    // 0x2ead50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2ead54:
    if (ctx->pc == 0x2EAD54u) {
        ctx->pc = 0x2EAD58u;
        goto label_2ead58;
    }
    ctx->pc = 0x2EAD50u;
    {
        const bool branch_taken_0x2ead50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ead50) {
            ctx->pc = 0x2EAD78u;
            goto label_2ead78;
        }
    }
    ctx->pc = 0x2EAD58u;
label_2ead58:
    // 0x2ead58: 0xc088eb4  jal         func_223AD0
label_2ead5c:
    if (ctx->pc == 0x2EAD5Cu) {
        ctx->pc = 0x2EAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD58u;
        // 0x2ead5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD60u;
        goto label_2ead60;
    }
    ctx->pc = 0x2EAD58u;
    SET_GPR_U32(ctx, 31, 0x2EAD60u);
    ctx->pc = 0x2EAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD58u;
    // 0x2ead5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2EAD58u, 0x2EAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD60u;
label_2ead60:
    // 0x2ead60: 0x10540365  beq         $v0, $s4, . + 4 + (0x365 << 2)
label_2ead64:
    if (ctx->pc == 0x2EAD64u) {
        ctx->pc = 0x2EAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD60u;
        // 0x2ead64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD68u;
        goto label_2ead68;
    }
    ctx->pc = 0x2EAD60u;
    {
        const bool branch_taken_0x2ead60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD60u;
        // 0x2ead64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead60) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAD68u;
label_2ead68:
    // 0x2ead68: 0xc0ba8f2  jal         func_2EA3C8
label_2ead6c:
    if (ctx->pc == 0x2EAD6Cu) {
        ctx->pc = 0x2EAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD68u;
        // 0x2ead6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD70u;
        goto label_2ead70;
    }
    ctx->pc = 0x2EAD68u;
    SET_GPR_U32(ctx, 31, 0x2EAD70u);
    ctx->pc = 0x2EAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD68u;
    // 0x2ead6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA3C8u, 0x2EAD68u, 0x2EAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD70u;
label_2ead70:
    // 0x2ead70: 0x10000362  b           . + 4 + (0x362 << 2)
label_2ead74:
    if (ctx->pc == 0x2EAD74u) {
        ctx->pc = 0x2EAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD70u;
        // 0x2ead74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD78u;
        goto label_2ead78;
    }
    ctx->pc = 0x2EAD70u;
    {
        const bool branch_taken_0x2ead70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD70u;
        // 0x2ead74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead70) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EAD78u;
label_2ead78:
    // 0x2ead78: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_2ead7c:
    if (ctx->pc == 0x2EAD7Cu) {
        ctx->pc = 0x2EAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD78u;
        // 0x2ead7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD80u;
        goto label_2ead80;
    }
    ctx->pc = 0x2EAD78u;
    {
        const bool branch_taken_0x2ead78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD78u;
        // 0x2ead7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead78) {
            ctx->pc = 0x2EADE4u;
            goto label_2eade4;
        }
    }
    ctx->pc = 0x2EAD80u;
label_2ead80:
    // 0x2ead80: 0xc08a158  jal         func_228560
label_2ead84:
    if (ctx->pc == 0x2EAD84u) {
        ctx->pc = 0x2EAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD80u;
        // 0x2ead84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD88u;
        goto label_2ead88;
    }
    ctx->pc = 0x2EAD80u;
    SET_GPR_U32(ctx, 31, 0x2EAD88u);
    ctx->pc = 0x2EAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD80u;
    // 0x2ead84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2EAD80u, 0x2EAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD88u;
label_2ead88:
    // 0x2ead88: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
label_2ead8c:
    if (ctx->pc == 0x2EAD8Cu) {
        ctx->pc = 0x2EAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD88u;
        // 0x2ead8c: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD90u;
        goto label_2ead90;
    }
    ctx->pc = 0x2EAD88u;
    {
        const bool branch_taken_0x2ead88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ead88) {
            ctx->pc = 0x2EAD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAD88u;
            // 0x2ead8c: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAD90u;
            goto label_2ead90;
        }
    }
    ctx->pc = 0x2EAD90u;
label_2ead90:
    // 0x2ead90: 0xc08a08a  jal         func_228228
label_2ead94:
    if (ctx->pc == 0x2EAD94u) {
        ctx->pc = 0x2EAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD90u;
        // 0x2ead94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAD98u;
        goto label_2ead98;
    }
    ctx->pc = 0x2EAD90u;
    SET_GPR_U32(ctx, 31, 0x2EAD98u);
    ctx->pc = 0x2EAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD90u;
    // 0x2ead94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2EAD90u, 0x2EAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD98u;
label_2ead98:
    // 0x2ead98: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
label_2ead9c:
    if (ctx->pc == 0x2EAD9Cu) {
        ctx->pc = 0x2EAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD98u;
        // 0x2ead9c: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADA0u;
        goto label_2eada0;
    }
    ctx->pc = 0x2EAD98u;
    {
        const bool branch_taken_0x2ead98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ead98) {
            ctx->pc = 0x2EAD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAD98u;
            // 0x2ead9c: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EADA0u;
            goto label_2eada0;
        }
    }
    ctx->pc = 0x2EADA0u;
label_2eada0:
    // 0x2eada0: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2eada4:
    // 0x2eada4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2eada8:
    // 0x2eada8: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2eada8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2eadac:
    // 0x2eadac: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2eadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2eadb0:
    // 0x2eadb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2eadb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eadb4:
    // 0x2eadb4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2eadb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2eadb8:
    // 0x2eadb8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2eadb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2eadbc:
    // 0x2eadbc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2eadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2eadc0:
    // 0x2eadc0: 0xc474013c  lwc1        $f20, 0x13C($v1)
    ctx->pc = 0x2eadc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2eadc4:
    // 0x2eadc4: 0xc0cdb38  jal         func_336CE0
label_2eadc8:
    if (ctx->pc == 0x2EADC8u) {
        ctx->pc = 0x2EADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADC4u;
        // 0x2eadc8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADCCu;
        goto label_2eadcc;
    }
    ctx->pc = 0x2EADC4u;
    SET_GPR_U32(ctx, 31, 0x2EADCCu);
    ctx->pc = 0x2EADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADC4u;
    // 0x2eadc8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EADC4u, 0x2EADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADCCu;
label_2eadcc:
    // 0x2eadcc: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2eadccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2eadd0:
    // 0x2eadd0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2eadd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eadd4:
    // 0x2eadd4: 0x0  nop
    ctx->pc = 0x2eadd4u;
    // NOP
label_2eadd8:
    // 0x2eadd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2eaddc:
    if (ctx->pc == 0x2EADDCu) {
        ctx->pc = 0x2EADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADD8u;
        // 0x2eaddc: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADE0u;
        goto label_2eade0;
    }
    ctx->pc = 0x2EADD8u;
    {
        const bool branch_taken_0x2eadd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eadd8) {
            ctx->pc = 0x2EADDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADD8u;
            // 0x2eaddc: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EADE0u;
            goto label_2eade0;
        }
    }
    ctx->pc = 0x2EADE0u;
label_2eade0:
    // 0x2eade0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2eade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2eade4:
    // 0x2eade4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2eade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eade8:
    // 0x2eade8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2eade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2eadec:
    // 0x2eadec: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2eadecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2eadf0:
    // 0x2eadf0: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x2eadf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2eadf4:
    // 0x2eadf4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2eadf8:
    if (ctx->pc == 0x2EADF8u) {
        ctx->pc = 0x2EADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADF4u;
        // 0x2eadf8: 0x92220029  lbu         $v0, 0x29($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EADFCu;
        goto label_2eadfc;
    }
    ctx->pc = 0x2EADF4u;
    {
        const bool branch_taken_0x2eadf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eadf4) {
            ctx->pc = 0x2EADF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADF4u;
            // 0x2eadf8: 0x92220029  lbu         $v0, 0x29($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAE50u;
            goto label_2eae50;
        }
    }
    ctx->pc = 0x2EADFCu;
label_2eadfc:
    // 0x2eadfc: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_2eae00:
    if (ctx->pc == 0x2EAE00u) {
        ctx->pc = 0x2EAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADFCu;
        // 0x2eae00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE04u;
        goto label_2eae04;
    }
    ctx->pc = 0x2EADFCu;
    {
        const bool branch_taken_0x2eadfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADFCu;
        // 0x2eae00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadfc) {
            ctx->pc = 0x2EAE44u;
            goto label_2eae44;
        }
    }
    ctx->pc = 0x2EAE04u;
label_2eae04:
    // 0x2eae04: 0xc08a10a  jal         func_228428
label_2eae08:
    if (ctx->pc == 0x2EAE08u) {
        ctx->pc = 0x2EAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE04u;
        // 0x2eae08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE0Cu;
        goto label_2eae0c;
    }
    ctx->pc = 0x2EAE04u;
    SET_GPR_U32(ctx, 31, 0x2EAE0Cu);
    ctx->pc = 0x2EAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE04u;
    // 0x2eae08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2EAE04u, 0x2EAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE0Cu;
label_2eae0c:
    // 0x2eae0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eae0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eae10:
    // 0x2eae10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eae14:
    // 0x2eae14: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
label_2eae18:
    if (ctx->pc == 0x2EAE18u) {
        ctx->pc = 0x2EAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE14u;
        // 0x2eae18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE1Cu;
        goto label_2eae1c;
    }
    ctx->pc = 0x2EAE14u;
    {
        const bool branch_taken_0x2eae14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE14u;
        // 0x2eae18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae14) {
            ctx->pc = 0x2EAE44u;
            goto label_2eae44;
        }
    }
    ctx->pc = 0x2EAE1Cu;
label_2eae1c:
    // 0x2eae1c: 0xc087502  jal         func_21D408
label_2eae20:
    if (ctx->pc == 0x2EAE20u) {
        ctx->pc = 0x2EAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE1Cu;
        // 0x2eae20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE24u;
        goto label_2eae24;
    }
    ctx->pc = 0x2EAE1Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE24u);
    ctx->pc = 0x2EAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE1Cu;
    // 0x2eae20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EAE1Cu, 0x2EAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE24u;
label_2eae24:
    // 0x2eae24: 0xc0e409a  jal         func_390268
label_2eae28:
    if (ctx->pc == 0x2EAE28u) {
        ctx->pc = 0x2EAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE24u;
        // 0x2eae28: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE2Cu;
        goto label_2eae2c;
    }
    ctx->pc = 0x2EAE24u;
    SET_GPR_U32(ctx, 31, 0x2EAE2Cu);
    ctx->pc = 0x2EAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE24u;
    // 0x2eae28: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EAE24u, 0x2EAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE2Cu;
label_2eae2c:
    // 0x2eae2c: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2eae30:
    if (ctx->pc == 0x2EAE30u) {
        ctx->pc = 0x2EAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE2Cu;
        // 0x2eae30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE34u;
        goto label_2eae34;
    }
    ctx->pc = 0x2EAE2Cu;
    {
        const bool branch_taken_0x2eae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE2Cu;
        // 0x2eae30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae2c) {
            ctx->pc = 0x2EAE44u;
            goto label_2eae44;
        }
    }
    ctx->pc = 0x2EAE34u;
label_2eae34:
    // 0x2eae34: 0x260204e2  addiu       $v0, $s0, 0x4E2
    ctx->pc = 0x2eae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1250));
label_2eae38:
    // 0x2eae38: 0xa2340029  sb          $s4, 0x29($s1)
    ctx->pc = 0x2eae38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 20));
label_2eae3c:
    // 0x2eae3c: 0x1000032e  b           . + 4 + (0x32E << 2)
label_2eae40:
    if (ctx->pc == 0x2EAE40u) {
        ctx->pc = 0x2EAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE3Cu;
        // 0x2eae40: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE44u;
        goto label_2eae44;
    }
    ctx->pc = 0x2EAE3Cu;
    {
        const bool branch_taken_0x2eae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE3Cu;
        // 0x2eae40: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae3c) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAE44u;
label_2eae44:
    // 0x2eae44: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x2eae44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_2eae48:
    // 0x2eae48: 0x1000032b  b           . + 4 + (0x32B << 2)
label_2eae4c:
    if (ctx->pc == 0x2EAE4Cu) {
        ctx->pc = 0x2EAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE48u;
        // 0x2eae4c: 0xa222002b  sb          $v0, 0x2B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE50u;
        goto label_2eae50;
    }
    ctx->pc = 0x2EAE48u;
    {
        const bool branch_taken_0x2eae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE48u;
        // 0x2eae4c: 0xa222002b  sb          $v0, 0x2B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae48) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAE50u;
label_2eae50:
    // 0x2eae50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eae54:
    // 0x2eae54: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2eae58:
    if (ctx->pc == 0x2EAE58u) {
        ctx->pc = 0x2EAE5Cu;
        goto label_2eae5c;
    }
    ctx->pc = 0x2EAE54u;
    {
        const bool branch_taken_0x2eae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eae54) {
            ctx->pc = 0x2EAE74u;
            goto label_2eae74;
        }
    }
    ctx->pc = 0x2EAE5Cu;
label_2eae5c:
    // 0x2eae5c: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2eae5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2eae60:
    // 0x2eae60: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
label_2eae64:
    if (ctx->pc == 0x2EAE64u) {
        ctx->pc = 0x2EAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE60u;
        // 0x2eae64: 0x901023  subu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE68u;
        goto label_2eae68;
    }
    ctx->pc = 0x2EAE60u;
    {
        const bool branch_taken_0x2eae60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE60u;
        // 0x2eae64: 0x901023  subu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae60) {
            ctx->pc = 0x2EAF58u;
            goto label_2eaf58;
        }
    }
    ctx->pc = 0x2EAE68u;
label_2eae68:
    // 0x2eae68: 0x2c4201f4  sltiu       $v0, $v0, 0x1F4
    ctx->pc = 0x2eae68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
label_2eae6c:
    // 0x2eae6c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2eae70:
    if (ctx->pc == 0x2EAE70u) {
        ctx->pc = 0x2EAE74u;
        goto label_2eae74;
    }
    ctx->pc = 0x2EAE6Cu;
    {
        const bool branch_taken_0x2eae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae6c) {
            ctx->pc = 0x2EAF58u;
            goto label_2eaf58;
        }
    }
    ctx->pc = 0x2EAE74u;
label_2eae74:
    // 0x2eae74: 0x1260004e  beqz        $s3, . + 4 + (0x4E << 2)
label_2eae78:
    if (ctx->pc == 0x2EAE78u) {
        ctx->pc = 0x2EAE7Cu;
        goto label_2eae7c;
    }
    ctx->pc = 0x2EAE74u;
    {
        const bool branch_taken_0x2eae74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae74) {
            ctx->pc = 0x2EAFB0u;
            goto label_2eafb0;
        }
    }
    ctx->pc = 0x2EAE7Cu;
label_2eae7c:
    // 0x2eae7c: 0xc088eca  jal         func_223B28
label_2eae80:
    if (ctx->pc == 0x2EAE80u) {
        ctx->pc = 0x2EAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE7Cu;
        // 0x2eae80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE84u;
        goto label_2eae84;
    }
    ctx->pc = 0x2EAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE84u);
    ctx->pc = 0x2EAE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE7Cu;
    // 0x2eae80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B28u, 0x2EAE7Cu, 0x2EAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE84u;
label_2eae84:
    // 0x2eae84: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_2eae88:
    if (ctx->pc == 0x2EAE88u) {
        ctx->pc = 0x2EAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE84u;
        // 0x2eae88: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAE8Cu;
        goto label_2eae8c;
    }
    ctx->pc = 0x2EAE84u;
    {
        const bool branch_taken_0x2eae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE84u;
        // 0x2eae88: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae84) {
            ctx->pc = 0x2EAF58u;
            goto label_2eaf58;
        }
    }
    ctx->pc = 0x2EAE8Cu;
label_2eae8c:
    // 0x2eae8c: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2eae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2eae90:
    // 0x2eae90: 0x2454b880  addiu       $s4, $v0, -0x4780
    ctx->pc = 0x2eae90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2eae94:
    // 0x2eae94: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2eae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2eae98:
    // 0x2eae98: 0x24687a78  addiu       $t0, $v1, 0x7A78
    ctx->pc = 0x2eae98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
label_2eae9c:
    // 0x2eae9c: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2eae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2eaea0:
    // 0x2eaea0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2eaea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2eaea4:
    // 0x2eaea4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2eaea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2eaea8:
    // 0x2eaea8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2eaea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2eaeac:
    // 0x2eaeac: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2eaeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2eaeb0:
    // 0x2eaeb0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2eaeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_2eaeb4:
    // 0x2eaeb4: 0xc0cd4ee  jal         func_3353B8
label_2eaeb8:
    if (ctx->pc == 0x2EAEB8u) {
        ctx->pc = 0x2EAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB4u;
        // 0x2eaeb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEBCu;
        goto label_2eaebc;
    }
    ctx->pc = 0x2EAEB4u;
    SET_GPR_U32(ctx, 31, 0x2EAEBCu);
    ctx->pc = 0x2EAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEB4u;
    // 0x2eaeb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EAEB4u, 0x2EAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEBCu;
label_2eaebc:
    // 0x2eaebc: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2eaebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2eaec0:
    // 0x2eaec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eaec4:
    if (ctx->pc == 0x2EAEC4u) {
        ctx->pc = 0x2EAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEC0u;
        // 0x2eaec4: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEC8u;
        goto label_2eaec8;
    }
    ctx->pc = 0x2EAEC0u;
    {
        const bool branch_taken_0x2eaec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEC0u;
        // 0x2eaec4: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaec0) {
            ctx->pc = 0x2EAED8u;
            goto label_2eaed8;
        }
    }
    ctx->pc = 0x2EAEC8u;
label_2eaec8:
    // 0x2eaec8: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x2eaec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
label_2eaecc:
    // 0x2eaecc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2eaeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2eaed0:
    // 0x2eaed0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2eaed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2eaed4:
    // 0x2eaed4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2eaed4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2eaed8:
    // 0x2eaed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eaed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2eaedc:
    // 0x2eaedc: 0xc0cd4ee  jal         func_3353B8
label_2eaee0:
    if (ctx->pc == 0x2EAEE0u) {
        ctx->pc = 0x2EAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEDCu;
        // 0x2eaee0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAEE4u;
        goto label_2eaee4;
    }
    ctx->pc = 0x2EAEDCu;
    SET_GPR_U32(ctx, 31, 0x2EAEE4u);
    ctx->pc = 0x2EAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEDCu;
    // 0x2eaee0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EAEDCu, 0x2EAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEE4u;
label_2eaee4:
    // 0x2eaee4: 0x92230025  lbu         $v1, 0x25($s1)
    ctx->pc = 0x2eaee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
label_2eaee8:
    // 0x2eaee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2eaee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2eaeec:
    // 0x2eaeec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2eaef0:
    // 0x2eaef0: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2eaef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_2eaef4:
    // 0x2eaef4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eaef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eaef8:
    // 0x2eaef8: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2eaef8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eaefc:
    // 0x2eaefc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2eaf00:
    if (ctx->pc == 0x2EAF00u) {
        ctx->pc = 0x2EAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEFCu;
        // 0x2eaf00: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF04u;
        goto label_2eaf04;
    }
    ctx->pc = 0x2EAEFCu;
    {
        const bool branch_taken_0x2eaefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaefc) {
            ctx->pc = 0x2EAF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAEFCu;
            // 0x2eaf00: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAF04u;
label_2eaf04:
    // 0x2eaf04: 0xc0baac2  jal         func_2EAB08
label_2eaf08:
    if (ctx->pc == 0x2EAF08u) {
        ctx->pc = 0x2EAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF04u;
        // 0x2eaf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF0Cu;
        goto label_2eaf0c;
    }
    ctx->pc = 0x2EAF04u;
    SET_GPR_U32(ctx, 31, 0x2EAF0Cu);
    ctx->pc = 0x2EAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF04u;
    // 0x2eaf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EAF04u, 0x2EAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF0Cu;
label_2eaf0c:
    // 0x2eaf0c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2eaf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2eaf10:
    // 0x2eaf10: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x2eaf10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_2eaf14:
    // 0x2eaf14: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2eaf14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2eaf18:
    // 0x2eaf18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eaf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf1c:
    // 0x2eaf1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eaf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf20:
    // 0x2eaf20: 0xc2800b  movn        $s0, $a2, $v0
    ctx->pc = 0x2eaf20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_2eaf24:
    // 0x2eaf24: 0xc0891de  jal         func_224778
label_2eaf28:
    if (ctx->pc == 0x2EAF28u) {
        ctx->pc = 0x2EAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF24u;
        // 0x2eaf28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF2Cu;
        goto label_2eaf2c;
    }
    ctx->pc = 0x2EAF24u;
    SET_GPR_U32(ctx, 31, 0x2EAF2Cu);
    ctx->pc = 0x2EAF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF24u;
    // 0x2eaf28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2EAF24u, 0x2EAF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF2Cu;
label_2eaf2c:
    // 0x2eaf2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eaf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaf30:
    // 0x2eaf30: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_2eaf34:
    if (ctx->pc == 0x2EAF34u) {
        ctx->pc = 0x2EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF30u;
        // 0x2eaf34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF38u;
        goto label_2eaf38;
    }
    ctx->pc = 0x2EAF30u;
    {
        const bool branch_taken_0x2eaf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF30u;
        // 0x2eaf34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf30) {
            ctx->pc = 0x2EAF58u;
            goto label_2eaf58;
        }
    }
    ctx->pc = 0x2EAF38u;
label_2eaf38:
    // 0x2eaf38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eaf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eaf3c:
    // 0x2eaf3c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2eaf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2eaf40:
    // 0x2eaf40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eaf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eaf44:
    // 0x2eaf44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eaf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf48:
    // 0x2eaf48: 0xc0a3892  jal         func_28E248
label_2eaf4c:
    if (ctx->pc == 0x2EAF4Cu) {
        ctx->pc = 0x2EAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF48u;
        // 0x2eaf4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF50u;
        goto label_2eaf50;
    }
    ctx->pc = 0x2EAF48u;
    SET_GPR_U32(ctx, 31, 0x2EAF50u);
    ctx->pc = 0x2EAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF48u;
    // 0x2eaf4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2EAF48u, 0x2EAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF50u;
label_2eaf50:
    // 0x2eaf50: 0x100002e9  b           . + 4 + (0x2E9 << 2)
label_2eaf54:
    if (ctx->pc == 0x2EAF54u) {
        ctx->pc = 0x2EAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF50u;
        // 0x2eaf54: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF58u;
        goto label_2eaf58;
    }
    ctx->pc = 0x2EAF50u;
    {
        const bool branch_taken_0x2eaf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF50u;
        // 0x2eaf54: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf50) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAF58u;
label_2eaf58:
    // 0x2eaf58: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_2eaf5c:
    if (ctx->pc == 0x2EAF5Cu) {
        ctx->pc = 0x2EAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF58u;
        // 0x2eaf5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF60u;
        goto label_2eaf60;
    }
    ctx->pc = 0x2EAF58u;
    {
        const bool branch_taken_0x2eaf58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF58u;
        // 0x2eaf5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf58) {
            ctx->pc = 0x2EAFB0u;
            goto label_2eafb0;
        }
    }
    ctx->pc = 0x2EAF60u;
label_2eaf60:
    // 0x2eaf60: 0xc09643e  jal         func_2590F8
label_2eaf64:
    if (ctx->pc == 0x2EAF64u) {
        ctx->pc = 0x2EAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF60u;
        // 0x2eaf64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF68u;
        goto label_2eaf68;
    }
    ctx->pc = 0x2EAF60u;
    SET_GPR_U32(ctx, 31, 0x2EAF68u);
    ctx->pc = 0x2EAF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF60u;
    // 0x2eaf64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2EAF60u, 0x2EAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF68u;
label_2eaf68:
    // 0x2eaf68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eaf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaf6c:
    // 0x2eaf6c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2eaf70:
    if (ctx->pc == 0x2EAF70u) {
        ctx->pc = 0x2EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF6Cu;
        // 0x2eaf70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF74u;
        goto label_2eaf74;
    }
    ctx->pc = 0x2EAF6Cu;
    {
        const bool branch_taken_0x2eaf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF6Cu;
        // 0x2eaf70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf6c) {
            ctx->pc = 0x2EAF84u;
            goto label_2eaf84;
        }
    }
    ctx->pc = 0x2EAF74u;
label_2eaf74:
    // 0x2eaf74: 0xc0963a2  jal         func_258E88
label_2eaf78:
    if (ctx->pc == 0x2EAF78u) {
        ctx->pc = 0x2EAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF74u;
        // 0x2eaf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF7Cu;
        goto label_2eaf7c;
    }
    ctx->pc = 0x2EAF74u;
    SET_GPR_U32(ctx, 31, 0x2EAF7Cu);
    ctx->pc = 0x2EAF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF74u;
    // 0x2eaf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2EAF74u, 0x2EAF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF7Cu;
label_2eaf7c:
    // 0x2eaf7c: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
label_2eaf80:
    if (ctx->pc == 0x2EAF80u) {
        ctx->pc = 0x2EAF84u;
        goto label_2eaf84;
    }
    ctx->pc = 0x2EAF7Cu;
    {
        const bool branch_taken_0x2eaf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2eaf7c) {
            ctx->pc = 0x2EAFB0u;
            goto label_2eafb0;
        }
    }
    ctx->pc = 0x2EAF84u;
label_2eaf84:
    // 0x2eaf84: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2eaf84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2eaf88:
    // 0x2eaf88: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2eaf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2eaf8c:
    // 0x2eaf8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eaf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf90:
    // 0x2eaf90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eaf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eaf94:
    // 0x2eaf94: 0xc0874fa  jal         func_21D3E8
label_2eaf98:
    if (ctx->pc == 0x2EAF98u) {
        ctx->pc = 0x2EAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF94u;
        // 0x2eaf98: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF9Cu;
        goto label_2eaf9c;
    }
    ctx->pc = 0x2EAF94u;
    SET_GPR_U32(ctx, 31, 0x2EAF9Cu);
    ctx->pc = 0x2EAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF94u;
    // 0x2eaf98: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2EAF94u, 0x2EAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF9Cu;
label_2eaf9c:
    // 0x2eaf9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eaf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eafa0:
    // 0x2eafa0: 0xc051fbc  jal         func_147EF0
label_2eafa4:
    if (ctx->pc == 0x2EAFA4u) {
        ctx->pc = 0x2EAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFA0u;
        // 0x2eafa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFA8u;
        goto label_2eafa8;
    }
    ctx->pc = 0x2EAFA0u;
    SET_GPR_U32(ctx, 31, 0x2EAFA8u);
    ctx->pc = 0x2EAFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFA0u;
    // 0x2eafa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2EAFA0u, 0x2EAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFA8u;
label_2eafa8:
    // 0x2eafa8: 0x100002d4  b           . + 4 + (0x2D4 << 2)
label_2eafac:
    if (ctx->pc == 0x2EAFACu) {
        ctx->pc = 0x2EAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFA8u;
        // 0x2eafac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFB0u;
        goto label_2eafb0;
    }
    ctx->pc = 0x2EAFA8u;
    {
        const bool branch_taken_0x2eafa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFA8u;
        // 0x2eafac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafa8) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EAFB0u;
label_2eafb0:
    // 0x2eafb0: 0xc0874fa  jal         func_21D3E8
label_2eafb4:
    if (ctx->pc == 0x2EAFB4u) {
        ctx->pc = 0x2EAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFB0u;
        // 0x2eafb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFB8u;
        goto label_2eafb8;
    }
    ctx->pc = 0x2EAFB0u;
    SET_GPR_U32(ctx, 31, 0x2EAFB8u);
    ctx->pc = 0x2EAFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFB0u;
    // 0x2eafb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2EAFB0u, 0x2EAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFB8u;
label_2eafb8:
    // 0x2eafb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eafb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eafbc:
    // 0x2eafbc: 0xc051fbc  jal         func_147EF0
label_2eafc0:
    if (ctx->pc == 0x2EAFC0u) {
        ctx->pc = 0x2EAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFBCu;
        // 0x2eafc0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFC4u;
        goto label_2eafc4;
    }
    ctx->pc = 0x2EAFBCu;
    SET_GPR_U32(ctx, 31, 0x2EAFC4u);
    ctx->pc = 0x2EAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFBCu;
    // 0x2eafc0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2EAFBCu, 0x2EAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFC4u;
label_2eafc4:
    // 0x2eafc4: 0x100002cd  b           . + 4 + (0x2CD << 2)
label_2eafc8:
    if (ctx->pc == 0x2EAFC8u) {
        ctx->pc = 0x2EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFC4u;
        // 0x2eafc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFCCu;
        goto label_2eafcc;
    }
    ctx->pc = 0x2EAFC4u;
    {
        const bool branch_taken_0x2eafc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFC4u;
        // 0x2eafc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafc4) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EAFCCu;
label_2eafcc:
    // 0x2eafcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eafd0:
    // 0x2eafd0: 0x146201b8  bne         $v1, $v0, . + 4 + (0x1B8 << 2)
label_2eafd4:
    if (ctx->pc == 0x2EAFD4u) {
        ctx->pc = 0x2EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD0u;
        // 0x2eafd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFD8u;
        goto label_2eafd8;
    }
    ctx->pc = 0x2EAFD0u;
    {
        const bool branch_taken_0x2eafd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD0u;
        // 0x2eafd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafd0) {
            ctx->pc = 0x2EB6B4u;
            goto label_2eb6b4;
        }
    }
    ctx->pc = 0x2EAFD8u;
label_2eafd8:
    // 0x2eafd8: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x2eafd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
label_2eafdc:
    // 0x2eafdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eafdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eafe0:
    // 0x2eafe0: 0xc089998  jal         func_226660
label_2eafe4:
    if (ctx->pc == 0x2EAFE4u) {
        ctx->pc = 0x2EAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE0u;
        // 0x2eafe4: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFE8u;
        goto label_2eafe8;
    }
    ctx->pc = 0x2EAFE0u;
    SET_GPR_U32(ctx, 31, 0x2EAFE8u);
    ctx->pc = 0x2EAFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFE0u;
    // 0x2eafe4: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EAFE0u, 0x2EAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFE8u;
label_2eafe8:
    // 0x2eafe8: 0x105402c3  beq         $v0, $s4, . + 4 + (0x2C3 << 2)
label_2eafec:
    if (ctx->pc == 0x2EAFECu) {
        ctx->pc = 0x2EAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE8u;
        // 0x2eafec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFF0u;
        goto label_2eaff0;
    }
    ctx->pc = 0x2EAFE8u;
    {
        const bool branch_taken_0x2eafe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE8u;
        // 0x2eafec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafe8) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EAFF0u;
label_2eaff0:
    // 0x2eaff0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eaff4:
    // 0x2eaff4: 0xc0a337e  jal         func_28CDF8
label_2eaff8:
    if (ctx->pc == 0x2EAFF8u) {
        ctx->pc = 0x2EAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFF4u;
        // 0x2eaff8: 0x8225002f  lb          $a1, 0x2F($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFFCu;
        goto label_2eaffc;
    }
    ctx->pc = 0x2EAFF4u;
    SET_GPR_U32(ctx, 31, 0x2EAFFCu);
    ctx->pc = 0x2EAFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFF4u;
    // 0x2eaff8: 0x8225002f  lb          $a1, 0x2F($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2EAFF4u, 0x2EAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFFCu;
label_2eaffc:
    // 0x2eaffc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2eaffcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2eb000:
    // 0x2eb000: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2eb000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2eb004:
    // 0x2eb004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb008:
    // 0x2eb008: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2eb008u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2eb00c:
    // 0x2eb00c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2eb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb010:
    // 0x2eb010: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2eb014:
    if (ctx->pc == 0x2EB014u) {
        ctx->pc = 0x2EB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB010u;
        // 0x2eb014: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB018u;
        goto label_2eb018;
    }
    ctx->pc = 0x2EB010u;
    {
        const bool branch_taken_0x2eb010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb010) {
            ctx->pc = 0x2EB014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB010u;
            // 0x2eb014: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB02Cu;
            goto label_2eb02c;
        }
    }
    ctx->pc = 0x2EB018u;
label_2eb018:
    // 0x2eb018: 0xc0e4060  jal         func_390180
label_2eb01c:
    if (ctx->pc == 0x2EB01Cu) {
        ctx->pc = 0x2EB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB018u;
        // 0x2eb01c: 0x26440364  addiu       $a0, $s2, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB020u;
        goto label_2eb020;
    }
    ctx->pc = 0x2EB018u;
    SET_GPR_U32(ctx, 31, 0x2EB020u);
    ctx->pc = 0x2EB01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB018u;
    // 0x2eb01c: 0x26440364  addiu       $a0, $s2, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2EB018u, 0x2EB020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB020u;
label_2eb020:
    // 0x2eb020: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2eb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb024:
    // 0x2eb024: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2eb028:
    if (ctx->pc == 0x2EB028u) {
        ctx->pc = 0x2EB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB024u;
        // 0x2eb028: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB02Cu;
        goto label_2eb02c;
    }
    ctx->pc = 0x2EB024u;
    {
        const bool branch_taken_0x2eb024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb024) {
            ctx->pc = 0x2EB028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB024u;
            // 0x2eb028: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB02Cu;
            goto label_2eb02c;
        }
    }
    ctx->pc = 0x2EB02Cu;
label_2eb02c:
    // 0x2eb02c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_2eb030:
    if (ctx->pc == 0x2EB030u) {
        ctx->pc = 0x2EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB02Cu;
        // 0x2eb030: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB034u;
        goto label_2eb034;
    }
    ctx->pc = 0x2EB02Cu;
    {
        const bool branch_taken_0x2eb02c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB02Cu;
        // 0x2eb030: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb02c) {
            ctx->pc = 0x2EB04Cu;
            goto label_2eb04c;
        }
    }
    ctx->pc = 0x2EB034u;
label_2eb034:
    // 0x2eb034: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2eb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2eb038:
    // 0x2eb038: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2eb038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eb03c:
    // 0x2eb03c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2eb03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2eb040:
    // 0x2eb040: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2eb040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2eb044:
    // 0x2eb044: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2eb048:
    if (ctx->pc == 0x2EB048u) {
        ctx->pc = 0x2EB04Cu;
        goto label_2eb04c;
    }
    ctx->pc = 0x2EB044u;
    {
        const bool branch_taken_0x2eb044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb044) {
            ctx->pc = 0x2EB070u;
            goto label_2eb070;
        }
    }
    ctx->pc = 0x2EB04Cu;
label_2eb04c:
    // 0x2eb04c: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2eb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2eb050:
    // 0x2eb050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb054:
    // 0x2eb054: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eb054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2eb058:
    // 0x2eb058: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2eb058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2eb05c:
    // 0x2eb05c: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9
    ctx->pc = 0x2eb05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
label_2eb060:
    // 0x2eb060: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2eb060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_2eb064:
    // 0x2eb064: 0xc0a7c8c  jal         func_29F230
label_2eb068:
    if (ctx->pc == 0x2EB068u) {
        ctx->pc = 0x2EB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB064u;
        // 0x2eb068: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB06Cu;
        goto label_2eb06c;
    }
    ctx->pc = 0x2EB064u;
    SET_GPR_U32(ctx, 31, 0x2EB06Cu);
    ctx->pc = 0x2EB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB064u;
    // 0x2eb068: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2EB064u, 0x2EB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB06Cu;
label_2eb06c:
    // 0x2eb06c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eb06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb070:
    // 0x2eb070: 0x126002a2  beqz        $s3, . + 4 + (0x2A2 << 2)
label_2eb074:
    if (ctx->pc == 0x2EB074u) {
        ctx->pc = 0x2EB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB070u;
        // 0x2eb074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB078u;
        goto label_2eb078;
    }
    ctx->pc = 0x2EB070u;
    {
        const bool branch_taken_0x2eb070 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB070u;
        // 0x2eb074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb070) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB078u;
label_2eb078:
    // 0x2eb078: 0xc087502  jal         func_21D408
label_2eb07c:
    if (ctx->pc == 0x2EB07Cu) {
        ctx->pc = 0x2EB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB078u;
        // 0x2eb07c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB080u;
        goto label_2eb080;
    }
    ctx->pc = 0x2EB078u;
    SET_GPR_U32(ctx, 31, 0x2EB080u);
    ctx->pc = 0x2EB07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB078u;
    // 0x2eb07c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EB078u, 0x2EB080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB080u;
label_2eb080:
    // 0x2eb080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb084:
    // 0x2eb084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb088:
    // 0x2eb088: 0xc0a3792  jal         func_28DE48
label_2eb08c:
    if (ctx->pc == 0x2EB08Cu) {
        ctx->pc = 0x2EB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB088u;
        // 0x2eb08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB090u;
        goto label_2eb090;
    }
    ctx->pc = 0x2EB088u;
    SET_GPR_U32(ctx, 31, 0x2EB090u);
    ctx->pc = 0x2EB08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB088u;
    // 0x2eb08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2EB088u, 0x2EB090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB090u;
label_2eb090:
    // 0x2eb090: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2eb094:
    if (ctx->pc == 0x2EB094u) {
        ctx->pc = 0x2EB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB090u;
        // 0x2eb094: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB098u;
        goto label_2eb098;
    }
    ctx->pc = 0x2EB090u;
    {
        const bool branch_taken_0x2eb090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb090) {
            ctx->pc = 0x2EB094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB090u;
            // 0x2eb094: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB0B4u;
            goto label_2eb0b4;
        }
    }
    ctx->pc = 0x2EB098u;
label_2eb098:
    // 0x2eb098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb09c:
    // 0x2eb09c: 0xc0a445e  jal         func_291178
label_2eb0a0:
    if (ctx->pc == 0x2EB0A0u) {
        ctx->pc = 0x2EB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB09Cu;
        // 0x2eb0a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0A4u;
        goto label_2eb0a4;
    }
    ctx->pc = 0x2EB09Cu;
    SET_GPR_U32(ctx, 31, 0x2EB0A4u);
    ctx->pc = 0x2EB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB09Cu;
    // 0x2eb0a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2EB09Cu, 0x2EB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0A4u;
label_2eb0a4:
    // 0x2eb0a4: 0xc089bdc  jal         func_226F70
label_2eb0a8:
    if (ctx->pc == 0x2EB0A8u) {
        ctx->pc = 0x2EB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0A4u;
        // 0x2eb0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0ACu;
        goto label_2eb0ac;
    }
    ctx->pc = 0x2EB0A4u;
    SET_GPR_U32(ctx, 31, 0x2EB0ACu);
    ctx->pc = 0x2EB0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0A4u;
    // 0x2eb0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2EB0A4u, 0x2EB0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0ACu;
label_2eb0ac:
    // 0x2eb0ac: 0x10000293  b           . + 4 + (0x293 << 2)
label_2eb0b0:
    if (ctx->pc == 0x2EB0B0u) {
        ctx->pc = 0x2EB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0ACu;
        // 0x2eb0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0B4u;
        goto label_2eb0b4;
    }
    ctx->pc = 0x2EB0ACu;
    {
        const bool branch_taken_0x2eb0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0ACu;
        // 0x2eb0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0ac) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB0B4u;
label_2eb0b4:
    // 0x2eb0b4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2eb0b8:
    // 0x2eb0b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2eb0bc:
    if (ctx->pc == 0x2EB0BCu) {
        ctx->pc = 0x2EB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0B8u;
        // 0x2eb0bc: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0C0u;
        goto label_2eb0c0;
    }
    ctx->pc = 0x2EB0B8u;
    {
        const bool branch_taken_0x2eb0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0B8u;
        // 0x2eb0bc: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0b8) {
            ctx->pc = 0x2EB0E0u;
            goto label_2eb0e0;
        }
    }
    ctx->pc = 0x2EB0C0u;
label_2eb0c0:
    // 0x2eb0c0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2eb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2eb0c4:
    // 0x2eb0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb0c8:
    // 0x2eb0c8: 0x68467a6f  ldl         $a2, 0x7A6F($v0)
    ctx->pc = 0x2eb0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2eb0cc:
    // 0x2eb0cc: 0x6c467a68  ldr         $a2, 0x7A68($v0)
    ctx->pc = 0x2eb0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2eb0d0:
    // 0x2eb0d0: 0xc0ba8e8  jal         func_2EA3A0
label_2eb0d4:
    if (ctx->pc == 0x2EB0D4u) {
        ctx->pc = 0x2EB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0D0u;
        // 0x2eb0d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB0D8u;
        goto label_2eb0d8;
    }
    ctx->pc = 0x2EB0D0u;
    SET_GPR_U32(ctx, 31, 0x2EB0D8u);
    ctx->pc = 0x2EB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0D0u;
    // 0x2eb0d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA3A0u, 0x2EB0D0u, 0x2EB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0D8u;
label_2eb0d8:
    // 0x2eb0d8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2eb0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2eb0dc:
    // 0x2eb0dc: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x2eb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2eb0e0:
    // 0x2eb0e0: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2eb0e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2eb0e4:
    // 0x2eb0e4: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2eb0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2eb0e8:
    // 0x2eb0e8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2eb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2eb0ec:
    // 0x2eb0ec: 0x24744b00  addiu       $s4, $v1, 0x4B00
    ctx->pc = 0x2eb0ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2eb0f0:
    // 0x2eb0f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2eb0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2eb0f4:
    // 0x2eb0f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2eb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2eb0f8:
    // 0x2eb0f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2eb0f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb0fc:
    // 0x2eb0fc: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2eb0fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2eb100:
    // 0x2eb100: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2eb100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2eb104:
    // 0x2eb104: 0xc0cdb38  jal         func_336CE0
label_2eb108:
    if (ctx->pc == 0x2EB108u) {
        ctx->pc = 0x2EB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB104u;
        // 0x2eb108: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB10Cu;
        goto label_2eb10c;
    }
    ctx->pc = 0x2EB104u;
    SET_GPR_U32(ctx, 31, 0x2EB10Cu);
    ctx->pc = 0x2EB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB104u;
    // 0x2eb108: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EB104u, 0x2EB10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB10Cu;
label_2eb10c:
    // 0x2eb10c: 0x16c000aa  bnez        $s6, . + 4 + (0xAA << 2)
label_2eb110:
    if (ctx->pc == 0x2EB110u) {
        ctx->pc = 0x2EB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB10Cu;
        // 0x2eb110: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB114u;
        goto label_2eb114;
    }
    ctx->pc = 0x2EB10Cu;
    {
        const bool branch_taken_0x2eb10c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB10Cu;
        // 0x2eb110: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb10c) {
            ctx->pc = 0x2EB3B8u;
            goto label_2eb3b8;
        }
    }
    ctx->pc = 0x2EB114u;
label_2eb114:
    // 0x2eb114: 0xc0e53c8  jal         func_394F20
label_2eb118:
    if (ctx->pc == 0x2EB118u) {
        ctx->pc = 0x2EB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB114u;
        // 0x2eb118: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB11Cu;
        goto label_2eb11c;
    }
    ctx->pc = 0x2EB114u;
    SET_GPR_U32(ctx, 31, 0x2EB11Cu);
    ctx->pc = 0x2EB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB114u;
    // 0x2eb118: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x2EB114u, 0x2EB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB11Cu;
label_2eb11c:
    // 0x2eb11c: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
label_2eb120:
    if (ctx->pc == 0x2EB120u) {
        ctx->pc = 0x2EB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB11Cu;
        // 0x2eb120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB124u;
        goto label_2eb124;
    }
    ctx->pc = 0x2EB11Cu;
    {
        const bool branch_taken_0x2eb11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb11c) {
            ctx->pc = 0x2EB120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB11Cu;
            // 0x2eb120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3C0u;
            goto label_2eb3c0;
        }
    }
    ctx->pc = 0x2EB124u;
label_2eb124:
    // 0x2eb124: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2eb124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb128:
    // 0x2eb128: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2eb128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eb12c:
    // 0x2eb12c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2eb12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2eb130:
    // 0x2eb130: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2eb130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2eb134:
    // 0x2eb134: 0x40f809  jalr        $v0
label_2eb138:
    if (ctx->pc == 0x2EB138u) {
        ctx->pc = 0x2EB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB134u;
        // 0x2eb138: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB13Cu;
        goto label_2eb13c;
    }
    ctx->pc = 0x2EB134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB13Cu);
        ctx->pc = 0x2EB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB134u;
        // 0x2eb138: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB134u, 0x2EB13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB13Cu;
label_2eb13c:
    // 0x2eb13c: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x2eb13cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_2eb140:
    // 0x2eb140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2eb144:
    // 0x2eb144: 0x5440009e  bnel        $v0, $zero, . + 4 + (0x9E << 2)
label_2eb148:
    if (ctx->pc == 0x2EB148u) {
        ctx->pc = 0x2EB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB144u;
        // 0x2eb148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB14Cu;
        goto label_2eb14c;
    }
    ctx->pc = 0x2EB144u;
    {
        const bool branch_taken_0x2eb144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb144) {
            ctx->pc = 0x2EB148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB144u;
            // 0x2eb148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3C0u;
            goto label_2eb3c0;
        }
    }
    ctx->pc = 0x2EB14Cu;
label_2eb14c:
    // 0x2eb14c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2eb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb150:
    // 0x2eb150: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2eb150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eb154:
    // 0x2eb154: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2eb154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2eb158:
    // 0x2eb158: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2eb158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2eb15c:
    // 0x2eb15c: 0x40f809  jalr        $v0
label_2eb160:
    if (ctx->pc == 0x2EB160u) {
        ctx->pc = 0x2EB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB15Cu;
        // 0x2eb160: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB164u;
        goto label_2eb164;
    }
    ctx->pc = 0x2EB15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB164u);
        ctx->pc = 0x2EB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB15Cu;
        // 0x2eb160: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB15Cu, 0x2EB164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB164u;
label_2eb164:
    // 0x2eb164: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2eb164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_2eb168:
    // 0x2eb168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb16c:
    // 0x2eb16c: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_2eb170:
    if (ctx->pc == 0x2EB170u) {
        ctx->pc = 0x2EB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB16Cu;
        // 0x2eb170: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB174u;
        goto label_2eb174;
    }
    ctx->pc = 0x2EB16Cu;
    {
        const bool branch_taken_0x2eb16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB16Cu;
        // 0x2eb170: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb16c) {
            ctx->pc = 0x2EB3BCu;
            goto label_2eb3bc;
        }
    }
    ctx->pc = 0x2EB174u;
label_2eb174:
    // 0x2eb174: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x2eb174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
label_2eb178:
    // 0x2eb178: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2eb178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2eb17c:
    // 0x2eb17c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb180:
    // 0x2eb180: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2eb180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2eb184:
    // 0x2eb184: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2eb184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb188:
    // 0x2eb188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eb18c:
    // 0x2eb18c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2eb190:
    if (ctx->pc == 0x2EB190u) {
        ctx->pc = 0x2EB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB18Cu;
        // 0x2eb190: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB194u;
        goto label_2eb194;
    }
    ctx->pc = 0x2EB18Cu;
    {
        const bool branch_taken_0x2eb18c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB18Cu;
        // 0x2eb190: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb18c) {
            ctx->pc = 0x2EB1A8u;
            goto label_2eb1a8;
        }
    }
    ctx->pc = 0x2EB194u;
label_2eb194:
    // 0x2eb194: 0xc08a08a  jal         func_228228
label_2eb198:
    if (ctx->pc == 0x2EB198u) {
        ctx->pc = 0x2EB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB194u;
        // 0x2eb198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB19Cu;
        goto label_2eb19c;
    }
    ctx->pc = 0x2EB194u;
    SET_GPR_U32(ctx, 31, 0x2EB19Cu);
    ctx->pc = 0x2EB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB194u;
    // 0x2eb198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2EB194u, 0x2EB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB19Cu;
label_2eb19c:
    // 0x2eb19c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb1a0:
    // 0x2eb1a0: 0x54430086  bnel        $v0, $v1, . + 4 + (0x86 << 2)
label_2eb1a4:
    if (ctx->pc == 0x2EB1A4u) {
        ctx->pc = 0x2EB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1A0u;
        // 0x2eb1a4: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1A8u;
        goto label_2eb1a8;
    }
    ctx->pc = 0x2EB1A0u;
    {
        const bool branch_taken_0x2eb1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb1a0) {
            ctx->pc = 0x2EB1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB1A0u;
            // 0x2eb1a4: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3BCu;
            goto label_2eb3bc;
        }
    }
    ctx->pc = 0x2EB1A8u;
label_2eb1a8:
    // 0x2eb1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb1ac:
    // 0x2eb1ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2eb1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2eb1b0:
    // 0x2eb1b0: 0xc08bfa0  jal         func_22FE80
label_2eb1b4:
    if (ctx->pc == 0x2EB1B4u) {
        ctx->pc = 0x2EB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1B0u;
        // 0x2eb1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1B8u;
        goto label_2eb1b8;
    }
    ctx->pc = 0x2EB1B0u;
    SET_GPR_U32(ctx, 31, 0x2EB1B8u);
    ctx->pc = 0x2EB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1B0u;
    // 0x2eb1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2EB1B0u, 0x2EB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1B8u;
label_2eb1b8:
    // 0x2eb1b8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2eb1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb1bc:
    // 0x2eb1bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2eb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2eb1c0:
    // 0x2eb1c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2eb1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1c4:
    // 0x2eb1c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2eb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2eb1c8:
    // 0x2eb1c8: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2eb1c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2eb1cc:
    // 0x2eb1cc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2eb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2eb1d0:
    // 0x2eb1d0: 0x60f809  jalr        $v1
label_2eb1d4:
    if (ctx->pc == 0x2EB1D4u) {
        ctx->pc = 0x2EB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1D0u;
        // 0x2eb1d4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1D8u;
        goto label_2eb1d8;
    }
    ctx->pc = 0x2EB1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EB1D8u);
        ctx->pc = 0x2EB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1D0u;
        // 0x2eb1d4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB1D0u, 0x2EB1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB1D8u;
label_2eb1d8:
    // 0x2eb1d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2eb1d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2eb1dc:
    // 0x2eb1dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2eb1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2eb1e0:
    // 0x2eb1e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eb1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1e4:
    // 0x2eb1e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2eb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2eb1e8:
    // 0x2eb1e8: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x2eb1e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2eb1ec:
    // 0x2eb1ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2eb1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2eb1f0:
    // 0x2eb1f0: 0xc0cdb38  jal         func_336CE0
label_2eb1f4:
    if (ctx->pc == 0x2EB1F4u) {
        ctx->pc = 0x2EB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1F0u;
        // 0x2eb1f4: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB1F8u;
        goto label_2eb1f8;
    }
    ctx->pc = 0x2EB1F0u;
    SET_GPR_U32(ctx, 31, 0x2EB1F8u);
    ctx->pc = 0x2EB1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1F0u;
    // 0x2eb1f4: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EB1F0u, 0x2EB1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1F8u;
label_2eb1f8:
    // 0x2eb1f8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2eb1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb1fc:
    // 0x2eb1fc: 0x0  nop
    ctx->pc = 0x2eb1fcu;
    // NOP
label_2eb200:
    // 0x2eb200: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_2eb204:
    if (ctx->pc == 0x2EB204u) {
        ctx->pc = 0x2EB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB200u;
        // 0x2eb204: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB208u;
        goto label_2eb208;
    }
    ctx->pc = 0x2EB200u;
    {
        const bool branch_taken_0x2eb200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB200u;
        // 0x2eb204: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb200) {
            ctx->pc = 0x2EB298u;
            goto label_2eb298;
        }
    }
    ctx->pc = 0x2EB208u;
label_2eb208:
    // 0x2eb208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2eb208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb20c:
    // 0x2eb20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb210:
    // 0x2eb210: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2eb210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2eb214:
    // 0x2eb214: 0xc094904  jal         func_252410
label_2eb218:
    if (ctx->pc == 0x2EB218u) {
        ctx->pc = 0x2EB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB214u;
        // 0x2eb218: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB21Cu;
        goto label_2eb21c;
    }
    ctx->pc = 0x2EB214u;
    SET_GPR_U32(ctx, 31, 0x2EB21Cu);
    ctx->pc = 0x2EB218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB214u;
    // 0x2eb218: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2EB214u, 0x2EB21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB21Cu;
label_2eb21c:
    // 0x2eb21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb220:
    // 0x2eb220: 0x5443001e  bnel        $v0, $v1, . + 4 + (0x1E << 2)
label_2eb224:
    if (ctx->pc == 0x2EB224u) {
        ctx->pc = 0x2EB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB220u;
        // 0x2eb224: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB228u;
        goto label_2eb228;
    }
    ctx->pc = 0x2EB220u;
    {
        const bool branch_taken_0x2eb220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb220) {
            ctx->pc = 0x2EB224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB220u;
            // 0x2eb224: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB29Cu;
            goto label_2eb29c;
        }
    }
    ctx->pc = 0x2EB228u;
label_2eb228:
    // 0x2eb228: 0x9225002f  lbu         $a1, 0x2F($s1)
    ctx->pc = 0x2eb228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
label_2eb22c:
    // 0x2eb22c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb230:
    // 0x2eb230: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2eb230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2eb234:
    // 0x2eb234: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2eb234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2eb238:
    // 0x2eb238: 0xc0a337e  jal         func_28CDF8
label_2eb23c:
    if (ctx->pc == 0x2EB23Cu) {
        ctx->pc = 0x2EB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB238u;
        // 0x2eb23c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB240u;
        goto label_2eb240;
    }
    ctx->pc = 0x2EB238u;
    SET_GPR_U32(ctx, 31, 0x2EB240u);
    ctx->pc = 0x2EB23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB238u;
    // 0x2eb23c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2EB238u, 0x2EB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB240u;
label_2eb240:
    // 0x2eb240: 0xc0a367c  jal         func_28D9F0
label_2eb244:
    if (ctx->pc == 0x2EB244u) {
        ctx->pc = 0x2EB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB240u;
        // 0x2eb244: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB248u;
        goto label_2eb248;
    }
    ctx->pc = 0x2EB240u;
    SET_GPR_U32(ctx, 31, 0x2EB248u);
    ctx->pc = 0x2EB244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB240u;
    // 0x2eb244: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB240u, 0x2EB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB248u;
label_2eb248:
    // 0x2eb248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb24c:
    // 0x2eb24c: 0x1200022b  beqz        $s0, . + 4 + (0x22B << 2)
label_2eb250:
    if (ctx->pc == 0x2EB250u) {
        ctx->pc = 0x2EB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB24Cu;
        // 0x2eb250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB254u;
        goto label_2eb254;
    }
    ctx->pc = 0x2EB24Cu;
    {
        const bool branch_taken_0x2eb24c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB24Cu;
        // 0x2eb250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb24c) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB254u;
label_2eb254:
    // 0x2eb254: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2eb254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eb258:
    // 0x2eb258: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2eb258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2eb25c:
    // 0x2eb25c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2eb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2eb260:
    // 0x2eb260: 0x40f809  jalr        $v0
label_2eb264:
    if (ctx->pc == 0x2EB264u) {
        ctx->pc = 0x2EB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB260u;
        // 0x2eb264: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB268u;
        goto label_2eb268;
    }
    ctx->pc = 0x2EB260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB268u);
        ctx->pc = 0x2EB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB260u;
        // 0x2eb264: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB260u, 0x2EB268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB268u;
label_2eb268:
    // 0x2eb268: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb26c:
    // 0x2eb26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb270:
    // 0x2eb270: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2eb270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb274:
    // 0x2eb274: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2eb274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2eb278:
    // 0x2eb278: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2eb278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb27c:
    // 0x2eb27c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2eb27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eb280:
    // 0x2eb280: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eb280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb284:
    // 0x2eb284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb288:
    // 0x2eb288: 0xc0bee7a  jal         func_2FB9E8
label_2eb28c:
    if (ctx->pc == 0x2EB28Cu) {
        ctx->pc = 0x2EB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB288u;
        // 0x2eb28c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB290u;
        goto label_2eb290;
    }
    ctx->pc = 0x2EB288u;
    SET_GPR_U32(ctx, 31, 0x2EB290u);
    ctx->pc = 0x2EB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB288u;
    // 0x2eb28c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2EB288u, 0x2EB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB290u;
label_2eb290:
    // 0x2eb290: 0x1000021a  b           . + 4 + (0x21A << 2)
label_2eb294:
    if (ctx->pc == 0x2EB294u) {
        ctx->pc = 0x2EB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB290u;
        // 0x2eb294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB298u;
        goto label_2eb298;
    }
    ctx->pc = 0x2EB290u;
    {
        const bool branch_taken_0x2eb290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB290u;
        // 0x2eb294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb290) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB298u;
label_2eb298:
    // 0x2eb298: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x2eb298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_2eb29c:
    // 0x2eb29c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2eb29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2eb2a0:
    // 0x2eb2a0: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_2eb2a4:
    if (ctx->pc == 0x2EB2A4u) {
        ctx->pc = 0x2EB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A0u;
        // 0x2eb2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2A8u;
        goto label_2eb2a8;
    }
    ctx->pc = 0x2EB2A0u;
    {
        const bool branch_taken_0x2eb2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A0u;
        // 0x2eb2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2a0) {
            ctx->pc = 0x2EB384u;
            goto label_2eb384;
        }
    }
    ctx->pc = 0x2EB2A8u;
label_2eb2a8:
    // 0x2eb2a8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2eb2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb2ac:
    // 0x2eb2ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2eb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2eb2b0:
    // 0x2eb2b0: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2eb2b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2eb2b4:
    // 0x2eb2b4: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2eb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2eb2b8:
    // 0x2eb2b8: 0x60f809  jalr        $v1
label_2eb2bc:
    if (ctx->pc == 0x2EB2BCu) {
        ctx->pc = 0x2EB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2B8u;
        // 0x2eb2bc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2C0u;
        goto label_2eb2c0;
    }
    ctx->pc = 0x2EB2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EB2C0u);
        ctx->pc = 0x2EB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2B8u;
        // 0x2eb2bc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB2B8u, 0x2EB2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB2C0u;
label_2eb2c0:
    // 0x2eb2c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2eb2c4:
    // 0x2eb2c4: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x2eb2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2eb2c8:
    // 0x2eb2c8: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2eb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_2eb2cc:
    // 0x2eb2cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2eb2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2eb2d0:
    // 0x2eb2d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eb2d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eb2d4:
    // 0x2eb2d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb2d8:
    // 0x2eb2d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2eb2d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2eb2dc:
    // 0x2eb2dc: 0x26e54b00  addiu       $a1, $s7, 0x4B00
    ctx->pc = 0x2eb2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2eb2e0:
    // 0x2eb2e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2eb2e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2eb2e4:
    // 0x2eb2e4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2eb2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2eb2e8:
    // 0x2eb2e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2eb2e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2eb2ec:
    // 0x2eb2ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2eb2ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2eb2f0:
    // 0x2eb2f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2eb2f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2eb2f4:
    // 0x2eb2f4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2eb2f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2eb2f8:
    // 0x2eb2f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2eb2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2eb2fc:
    // 0x2eb2fc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2eb2fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2eb300:
    // 0x2eb300: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb304:
    // 0x2eb304: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2eb304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2eb308:
    // 0x2eb308: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2eb308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2eb30c:
    // 0x2eb30c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2eb30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2eb310:
    // 0x2eb310: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2eb310u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2eb314:
    // 0x2eb314: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2eb314u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2eb318:
    // 0x2eb318: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2eb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2eb31c:
    // 0x2eb31c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2eb31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2eb320:
    // 0x2eb320: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2eb320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2eb324:
    // 0x2eb324: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2eb324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2eb328:
    // 0x2eb328: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2eb328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2eb32c:
    // 0x2eb32c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2eb32cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb330:
    // 0x2eb330: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2eb330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2eb334:
    // 0x2eb334: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2eb334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2eb338:
    // 0x2eb338: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2eb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2eb33c:
    // 0x2eb33c: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x2eb33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_2eb340:
    // 0x2eb340: 0x84c40068  lh          $a0, 0x68($a2)
    ctx->pc = 0x2eb340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 104)));
label_2eb344:
    // 0x2eb344: 0x40f809  jalr        $v0
label_2eb348:
    if (ctx->pc == 0x2EB348u) {
        ctx->pc = 0x2EB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB344u;
        // 0x2eb348: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB34Cu;
        goto label_2eb34c;
    }
    ctx->pc = 0x2EB344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB34Cu);
        ctx->pc = 0x2EB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB344u;
        // 0x2eb348: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB344u, 0x2EB34Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB34Cu;
label_2eb34c:
    // 0x2eb34c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2eb34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb350:
    // 0x2eb350: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x2eb350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
label_2eb354:
    // 0x2eb354: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2eb354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2eb358:
    // 0x2eb358: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_2eb35c:
    // 0x2eb35c: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2eb35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_2eb360:
    // 0x2eb360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb364:
    // 0x2eb364: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2eb364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2eb368:
    // 0x2eb368: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x2eb368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
label_2eb36c:
    // 0x2eb36c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2eb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb370:
    // 0x2eb370: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2eb370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2eb374:
    // 0x2eb374: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2eb374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2eb378:
    // 0x2eb378: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x2eb378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_2eb37c:
    // 0x2eb37c: 0x100001df  b           . + 4 + (0x1DF << 2)
label_2eb380:
    if (ctx->pc == 0x2EB380u) {
        ctx->pc = 0x2EB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB37Cu;
        // 0x2eb380: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB384u;
        goto label_2eb384;
    }
    ctx->pc = 0x2EB37Cu;
    {
        const bool branch_taken_0x2eb37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB37Cu;
        // 0x2eb380: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb37c) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB384u;
label_2eb384:
    // 0x2eb384: 0xc0a367c  jal         func_28D9F0
label_2eb388:
    if (ctx->pc == 0x2EB388u) {
        ctx->pc = 0x2EB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB384u;
        // 0x2eb388: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB38Cu;
        goto label_2eb38c;
    }
    ctx->pc = 0x2EB384u;
    SET_GPR_U32(ctx, 31, 0x2EB38Cu);
    ctx->pc = 0x2EB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB384u;
    // 0x2eb388: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB384u, 0x2EB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB38Cu;
label_2eb38c:
    // 0x2eb38c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eb390:
    if (ctx->pc == 0x2EB390u) {
        ctx->pc = 0x2EB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB38Cu;
        // 0x2eb390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB394u;
        goto label_2eb394;
    }
    ctx->pc = 0x2EB38Cu;
    {
        const bool branch_taken_0x2eb38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB38Cu;
        // 0x2eb390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb38c) {
            ctx->pc = 0x2EB3A4u;
            goto label_2eb3a4;
        }
    }
    ctx->pc = 0x2EB394u;
label_2eb394:
    // 0x2eb394: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb398:
    // 0x2eb398: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2eb398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb39c:
    // 0x2eb39c: 0xc0bebe6  jal         func_2FAF98
label_2eb3a0:
    if (ctx->pc == 0x2EB3A0u) {
        ctx->pc = 0x2EB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB39Cu;
        // 0x2eb3a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3A4u;
        goto label_2eb3a4;
    }
    ctx->pc = 0x2EB39Cu;
    SET_GPR_U32(ctx, 31, 0x2EB3A4u);
    ctx->pc = 0x2EB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB39Cu;
    // 0x2eb3a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x2EB39Cu, 0x2EB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3A4u;
label_2eb3a4:
    // 0x2eb3a4: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2eb3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_2eb3a8:
    // 0x2eb3a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb3ac:
    // 0x2eb3ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2eb3b0:
    // 0x2eb3b0: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_2eb3b4:
    if (ctx->pc == 0x2EB3B4u) {
        ctx->pc = 0x2EB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3B0u;
        // 0x2eb3b4: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3B8u;
        goto label_2eb3b8;
    }
    ctx->pc = 0x2EB3B0u;
    {
        const bool branch_taken_0x2eb3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3B0u;
        // 0x2eb3b4: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3b0) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB3B8u;
label_2eb3b8:
    // 0x2eb3b8: 0xa2200030  sb          $zero, 0x30($s1)
    ctx->pc = 0x2eb3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
label_2eb3bc:
    // 0x2eb3bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb3c0:
    // 0x2eb3c0: 0xc08bfa0  jal         func_22FE80
label_2eb3c4:
    if (ctx->pc == 0x2EB3C4u) {
        ctx->pc = 0x2EB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3C0u;
        // 0x2eb3c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3C8u;
        goto label_2eb3c8;
    }
    ctx->pc = 0x2EB3C0u;
    SET_GPR_U32(ctx, 31, 0x2EB3C8u);
    ctx->pc = 0x2EB3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3C0u;
    // 0x2eb3c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2EB3C0u, 0x2EB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3C8u;
label_2eb3c8:
    // 0x2eb3c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb3cc:
    // 0x2eb3cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb3d0:
    // 0x2eb3d0: 0xc0a41ae  jal         func_2906B8
label_2eb3d4:
    if (ctx->pc == 0x2EB3D4u) {
        ctx->pc = 0x2EB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3D0u;
        // 0x2eb3d4: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3D8u;
        goto label_2eb3d8;
    }
    ctx->pc = 0x2EB3D0u;
    SET_GPR_U32(ctx, 31, 0x2EB3D8u);
    ctx->pc = 0x2EB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3D0u;
    // 0x2eb3d4: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2EB3D0u, 0x2EB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3D8u;
label_2eb3d8:
    // 0x2eb3d8: 0x54500069  bnel        $v0, $s0, . + 4 + (0x69 << 2)
label_2eb3dc:
    if (ctx->pc == 0x2EB3DCu) {
        ctx->pc = 0x2EB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3D8u;
        // 0x2eb3dc: 0x9222002c  lbu         $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3E0u;
        goto label_2eb3e0;
    }
    ctx->pc = 0x2EB3D8u;
    {
        const bool branch_taken_0x2eb3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2eb3d8) {
            ctx->pc = 0x2EB3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB3D8u;
            // 0x2eb3dc: 0x9222002c  lbu         $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB580u;
            goto label_2eb580;
        }
    }
    ctx->pc = 0x2EB3E0u;
label_2eb3e0:
    // 0x2eb3e0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2eb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2eb3e4:
    // 0x2eb3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb3e8:
    // 0x2eb3e8: 0xc08c340  jal         func_230D00
label_2eb3ec:
    if (ctx->pc == 0x2EB3ECu) {
        ctx->pc = 0x2EB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3E8u;
        // 0x2eb3ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB3F0u;
        goto label_2eb3f0;
    }
    ctx->pc = 0x2EB3E8u;
    SET_GPR_U32(ctx, 31, 0x2EB3F0u);
    ctx->pc = 0x2EB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3E8u;
    // 0x2eb3ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2EB3E8u, 0x2EB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3F0u;
label_2eb3f0:
    // 0x2eb3f0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2eb3f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2eb3f4:
    // 0x2eb3f4: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x2eb3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb3f8:
    // 0x2eb3f8: 0x0  nop
    ctx->pc = 0x2eb3f8u;
    // NOP
label_2eb3fc:
    // 0x2eb3fc: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_2eb400:
    if (ctx->pc == 0x2EB400u) {
        ctx->pc = 0x2EB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3FCu;
        // 0x2eb400: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB404u;
        goto label_2eb404;
    }
    ctx->pc = 0x2EB3FCu;
    {
        const bool branch_taken_0x2eb3fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3FCu;
        // 0x2eb400: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3fc) {
            ctx->pc = 0x2EB4B4u;
            goto label_2eb4b4;
        }
    }
    ctx->pc = 0x2EB404u;
label_2eb404:
    // 0x2eb404: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb408:
    // 0x2eb408: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2eb408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2eb40c:
    // 0x2eb40c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2eb40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2eb410:
    // 0x2eb410: 0xc0cd4ee  jal         func_3353B8
label_2eb414:
    if (ctx->pc == 0x2EB414u) {
        ctx->pc = 0x2EB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB410u;
        // 0x2eb414: 0xc454013c  lwc1        $f20, 0x13C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB418u;
        goto label_2eb418;
    }
    ctx->pc = 0x2EB410u;
    SET_GPR_U32(ctx, 31, 0x2EB418u);
    ctx->pc = 0x2EB414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB410u;
    // 0x2eb414: 0xc454013c  lwc1        $f20, 0x13C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EB410u, 0x2EB418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB418u;
label_2eb418:
    // 0x2eb418: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2eb418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2eb41c:
    // 0x2eb41c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2eb420:
    if (ctx->pc == 0x2EB420u) {
        ctx->pc = 0x2EB424u;
        goto label_2eb424;
    }
    ctx->pc = 0x2EB41Cu;
    {
        const bool branch_taken_0x2eb41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb41c) {
            ctx->pc = 0x2EB460u;
            goto label_2eb460;
        }
    }
    ctx->pc = 0x2EB424u;
label_2eb424:
    // 0x2eb424: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2eb424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2eb428:
    // 0x2eb428: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2eb428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb42c:
    // 0x2eb42c: 0x0  nop
    ctx->pc = 0x2eb42cu;
    // NOP
label_2eb430:
    // 0x2eb430: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2eb434:
    if (ctx->pc == 0x2EB434u) {
        ctx->pc = 0x2EB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB430u;
        // 0x2eb434: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB438u;
        goto label_2eb438;
    }
    ctx->pc = 0x2EB430u;
    {
        const bool branch_taken_0x2eb430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB430u;
        // 0x2eb434: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb430) {
            ctx->pc = 0x2EB460u;
            goto label_2eb460;
        }
    }
    ctx->pc = 0x2EB438u;
label_2eb438:
    // 0x2eb438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb43c:
    // 0x2eb43c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb440:
    // 0x2eb440: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2eb440u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eb444:
    // 0x2eb444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb448:
    // 0x2eb448: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2eb448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2eb44c:
    // 0x2eb44c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb450:
    // 0x2eb450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb454:
    // 0x2eb454: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eb454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb458:
    // 0x2eb458: 0xc088178  jal         func_2205E0
label_2eb45c:
    if (ctx->pc == 0x2EB45Cu) {
        ctx->pc = 0x2EB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB458u;
        // 0x2eb45c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB460u;
        goto label_2eb460;
    }
    ctx->pc = 0x2EB458u;
    SET_GPR_U32(ctx, 31, 0x2EB460u);
    ctx->pc = 0x2EB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB458u;
    // 0x2eb45c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EB458u, 0x2EB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB460u;
label_2eb460:
    // 0x2eb460: 0xc086618  jal         func_219860
label_2eb464:
    if (ctx->pc == 0x2EB464u) {
        ctx->pc = 0x2EB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB460u;
        // 0x2eb464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB468u;
        goto label_2eb468;
    }
    ctx->pc = 0x2EB460u;
    SET_GPR_U32(ctx, 31, 0x2EB468u);
    ctx->pc = 0x2EB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB460u;
    // 0x2eb464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2EB460u, 0x2EB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB468u;
label_2eb468:
    // 0x2eb468: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2eb468u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2eb46c:
    // 0x2eb46c: 0x0  nop
    ctx->pc = 0x2eb46cu;
    // NOP
label_2eb470:
    // 0x2eb470: 0x0  nop
    ctx->pc = 0x2eb470u;
    // NOP
label_2eb474:
    // 0x2eb474: 0x46160044  c1          0x160044
    ctx->pc = 0x2eb474u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2eb478:
    // 0x2eb478: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2eb478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2eb47c:
    // 0x2eb47c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eb47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eb480:
    // 0x2eb480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb484:
    // 0x2eb484: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb488:
    // 0x2eb488: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2eb488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2eb48c:
    // 0x2eb48c: 0x46000d68  max.s       $f21, $f1, $f0
    ctx->pc = 0x2eb48cu;
    ctx->f[21] = std::max(ctx->f[1], ctx->f[0]);
label_2eb490:
    // 0x2eb490: 0xc0a367c  jal         func_28D9F0
label_2eb494:
    if (ctx->pc == 0x2EB494u) {
        ctx->pc = 0x2EB498u;
        goto label_2eb498;
    }
    ctx->pc = 0x2EB490u;
    SET_GPR_U32(ctx, 31, 0x2EB498u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB490u, 0x2EB498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB498u;
label_2eb498:
    // 0x2eb498: 0x10400197  beqz        $v0, . + 4 + (0x197 << 2)
label_2eb49c:
    if (ctx->pc == 0x2EB49Cu) {
        ctx->pc = 0x2EB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB498u;
        // 0x2eb49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4A0u;
        goto label_2eb4a0;
    }
    ctx->pc = 0x2EB498u;
    {
        const bool branch_taken_0x2eb498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB498u;
        // 0x2eb49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb498) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EB4A0u;
label_2eb4a0:
    // 0x2eb4a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb4a4:
    // 0x2eb4a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2eb4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb4a8:
    // 0x2eb4a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2eb4a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2eb4ac:
    // 0x2eb4ac: 0x1000018f  b           . + 4 + (0x18F << 2)
label_2eb4b0:
    if (ctx->pc == 0x2EB4B0u) {
        ctx->pc = 0x2EB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4ACu;
        // 0x2eb4b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4B4u;
        goto label_2eb4b4;
    }
    ctx->pc = 0x2EB4ACu;
    {
        const bool branch_taken_0x2eb4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4ACu;
        // 0x2eb4b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4ac) {
            ctx->pc = 0x2EBAECu;
            goto label_2ebaec;
        }
    }
    ctx->pc = 0x2EB4B4u;
label_2eb4b4:
    // 0x2eb4b4: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x2eb4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2eb4b8:
    // 0x2eb4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb4bc:
    // 0x2eb4bc: 0xc0891de  jal         func_224778
label_2eb4c0:
    if (ctx->pc == 0x2EB4C0u) {
        ctx->pc = 0x2EB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4BCu;
        // 0x2eb4c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4C4u;
        goto label_2eb4c4;
    }
    ctx->pc = 0x2EB4BCu;
    SET_GPR_U32(ctx, 31, 0x2EB4C4u);
    ctx->pc = 0x2EB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4BCu;
    // 0x2eb4c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2EB4BCu, 0x2EB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4C4u;
label_2eb4c4:
    // 0x2eb4c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2eb4c8:
    if (ctx->pc == 0x2EB4C8u) {
        ctx->pc = 0x2EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4C4u;
        // 0x2eb4c8: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4CCu;
        goto label_2eb4cc;
    }
    ctx->pc = 0x2EB4C4u;
    {
        const bool branch_taken_0x2eb4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4c4) {
            ctx->pc = 0x2EB4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4C4u;
            // 0x2eb4c8: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4ECu;
            goto label_2eb4ec;
        }
    }
    ctx->pc = 0x2EB4CCu;
label_2eb4cc:
    // 0x2eb4cc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2eb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2eb4d0:
    // 0x2eb4d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb4d4:
    // 0x2eb4d4: 0x68467a77  ldl         $a2, 0x7A77($v0)
    ctx->pc = 0x2eb4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2eb4d8:
    // 0x2eb4d8: 0x6c467a70  ldr         $a2, 0x7A70($v0)
    ctx->pc = 0x2eb4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2eb4dc:
    // 0x2eb4dc: 0xc0a39c2  jal         func_28E708
label_2eb4e0:
    if (ctx->pc == 0x2EB4E0u) {
        ctx->pc = 0x2EB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4DCu;
        // 0x2eb4e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4E4u;
        goto label_2eb4e4;
    }
    ctx->pc = 0x2EB4DCu;
    SET_GPR_U32(ctx, 31, 0x2EB4E4u);
    ctx->pc = 0x2EB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4DCu;
    // 0x2eb4e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2EB4DCu, 0x2EB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4E4u;
label_2eb4e4:
    // 0x2eb4e4: 0x10000184  b           . + 4 + (0x184 << 2)
label_2eb4e8:
    if (ctx->pc == 0x2EB4E8u) {
        ctx->pc = 0x2EB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4E4u;
        // 0x2eb4e8: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4ECu;
        goto label_2eb4ec;
    }
    ctx->pc = 0x2EB4E4u;
    {
        const bool branch_taken_0x2eb4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4E4u;
        // 0x2eb4e8: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4e4) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EB4ECu;
label_2eb4ec:
    // 0x2eb4ec: 0x38c2002d  xori        $v0, $a2, 0x2D
    ctx->pc = 0x2eb4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)45);
label_2eb4f0:
    // 0x2eb4f0: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
label_2eb4f4:
    if (ctx->pc == 0x2EB4F4u) {
        ctx->pc = 0x2EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4F0u;
        // 0x2eb4f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB4F8u;
        goto label_2eb4f8;
    }
    ctx->pc = 0x2EB4F0u;
    {
        const bool branch_taken_0x2eb4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB4F0u;
        // 0x2eb4f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb4f0) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EB4F8u;
label_2eb4f8:
    // 0x2eb4f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb4fc:
    // 0x2eb4fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2eb4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2eb500:
    // 0x2eb500: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb504:
    // 0x2eb504: 0xc0a3892  jal         func_28E248
label_2eb508:
    if (ctx->pc == 0x2EB508u) {
        ctx->pc = 0x2EB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB504u;
        // 0x2eb508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB50Cu;
        goto label_2eb50c;
    }
    ctx->pc = 0x2EB504u;
    SET_GPR_U32(ctx, 31, 0x2EB50Cu);
    ctx->pc = 0x2EB508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB504u;
    // 0x2eb508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2EB504u, 0x2EB50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB50Cu;
label_2eb50c:
    // 0x2eb50c: 0xc0baac2  jal         func_2EAB08
label_2eb510:
    if (ctx->pc == 0x2EB510u) {
        ctx->pc = 0x2EB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB50Cu;
        // 0x2eb510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB514u;
        goto label_2eb514;
    }
    ctx->pc = 0x2EB50Cu;
    SET_GPR_U32(ctx, 31, 0x2EB514u);
    ctx->pc = 0x2EB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB50Cu;
    // 0x2eb510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EB50Cu, 0x2EB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB514u;
label_2eb514:
    // 0x2eb514: 0x14500160  bne         $v0, $s0, . + 4 + (0x160 << 2)
label_2eb518:
    if (ctx->pc == 0x2EB518u) {
        ctx->pc = 0x2EB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB514u;
        // 0x2eb518: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB51Cu;
        goto label_2eb51c;
    }
    ctx->pc = 0x2EB514u;
    {
        const bool branch_taken_0x2eb514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB514u;
        // 0x2eb518: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb514) {
            ctx->pc = 0x2EBA98u;
            goto label_2eba98;
        }
    }
    ctx->pc = 0x2EB51Cu;
label_2eb51c:
    // 0x2eb51c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2eb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2eb520:
    // 0x2eb520: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2eb520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2eb524:
    // 0x2eb524: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2eb528:
    if (ctx->pc == 0x2EB528u) {
        ctx->pc = 0x2EB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB524u;
        // 0x2eb528: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB52Cu;
        goto label_2eb52c;
    }
    ctx->pc = 0x2EB524u;
    {
        const bool branch_taken_0x2eb524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB524u;
        // 0x2eb528: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb524) {
            ctx->pc = 0x2EB534u;
            goto label_2eb534;
        }
    }
    ctx->pc = 0x2EB52Cu;
label_2eb52c:
    // 0x2eb52c: 0x1462015a  bne         $v1, $v0, . + 4 + (0x15A << 2)
label_2eb530:
    if (ctx->pc == 0x2EB530u) {
        ctx->pc = 0x2EB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB52Cu;
        // 0x2eb530: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB534u;
        goto label_2eb534;
    }
    ctx->pc = 0x2EB52Cu;
    {
        const bool branch_taken_0x2eb52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB52Cu;
        // 0x2eb530: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb52c) {
            ctx->pc = 0x2EBA98u;
            goto label_2eba98;
        }
    }
    ctx->pc = 0x2EB534u;
label_2eb534:
    // 0x2eb534: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2eb534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2eb538:
    // 0x2eb538: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2eb538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2eb53c:
    // 0x2eb53c: 0xc0cd4ee  jal         func_3353B8
label_2eb540:
    if (ctx->pc == 0x2EB540u) {
        ctx->pc = 0x2EB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB53Cu;
        // 0x2eb540: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB544u;
        goto label_2eb544;
    }
    ctx->pc = 0x2EB53Cu;
    SET_GPR_U32(ctx, 31, 0x2EB544u);
    ctx->pc = 0x2EB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB53Cu;
    // 0x2eb540: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EB53Cu, 0x2EB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB544u;
label_2eb544:
    // 0x2eb544: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2eb544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2eb548:
    // 0x2eb548: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
label_2eb54c:
    if (ctx->pc == 0x2EB54Cu) {
        ctx->pc = 0x2EB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB548u;
        // 0x2eb54c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB550u;
        goto label_2eb550;
    }
    ctx->pc = 0x2EB548u;
    {
        const bool branch_taken_0x2eb548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB548u;
        // 0x2eb54c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb548) {
            ctx->pc = 0x2EBA94u;
            goto label_2eba94;
        }
    }
    ctx->pc = 0x2EB550u;
label_2eb550:
    // 0x2eb550: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2eb550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2eb554:
    // 0x2eb554: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb558:
    // 0x2eb558: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2eb558u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eb55c:
    // 0x2eb55c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb560:
    // 0x2eb560: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2eb564:
    // 0x2eb564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb568:
    // 0x2eb568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb56c:
    // 0x2eb56c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb56cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb570:
    // 0x2eb570: 0xc088178  jal         func_2205E0
label_2eb574:
    if (ctx->pc == 0x2EB574u) {
        ctx->pc = 0x2EB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB570u;
        // 0x2eb574: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB578u;
        goto label_2eb578;
    }
    ctx->pc = 0x2EB570u;
    SET_GPR_U32(ctx, 31, 0x2EB578u);
    ctx->pc = 0x2EB574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB570u;
    // 0x2eb574: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EB570u, 0x2EB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB578u;
label_2eb578:
    // 0x2eb578: 0x10000147  b           . + 4 + (0x147 << 2)
label_2eb57c:
    if (ctx->pc == 0x2EB57Cu) {
        ctx->pc = 0x2EB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB578u;
        // 0x2eb57c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB580u;
        goto label_2eb580;
    }
    ctx->pc = 0x2EB578u;
    {
        const bool branch_taken_0x2eb578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB578u;
        // 0x2eb57c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb578) {
            ctx->pc = 0x2EBA98u;
            goto label_2eba98;
        }
    }
    ctx->pc = 0x2EB580u;
label_2eb580:
    // 0x2eb580: 0x14500019  bne         $v0, $s0, . + 4 + (0x19 << 2)
label_2eb584:
    if (ctx->pc == 0x2EB584u) {
        ctx->pc = 0x2EB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB580u;
        // 0x2eb584: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB588u;
        goto label_2eb588;
    }
    ctx->pc = 0x2EB580u;
    {
        const bool branch_taken_0x2eb580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB580u;
        // 0x2eb584: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb580) {
            ctx->pc = 0x2EB5E8u;
            goto label_2eb5e8;
        }
    }
    ctx->pc = 0x2EB588u;
label_2eb588:
    // 0x2eb588: 0x2684b880  addiu       $a0, $s4, -0x4780
    ctx->pc = 0x2eb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
label_2eb58c:
    // 0x2eb58c: 0xc0cd4ee  jal         func_3353B8
label_2eb590:
    if (ctx->pc == 0x2EB590u) {
        ctx->pc = 0x2EB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB58Cu;
        // 0x2eb590: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB594u;
        goto label_2eb594;
    }
    ctx->pc = 0x2EB58Cu;
    SET_GPR_U32(ctx, 31, 0x2EB594u);
    ctx->pc = 0x2EB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB58Cu;
    // 0x2eb590: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EB58Cu, 0x2EB594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB594u;
label_2eb594:
    // 0x2eb594: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2eb594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2eb598:
    // 0x2eb598: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2eb59c:
    if (ctx->pc == 0x2EB59Cu) {
        ctx->pc = 0x2EB5A0u;
        goto label_2eb5a0;
    }
    ctx->pc = 0x2EB598u;
    {
        const bool branch_taken_0x2eb598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb598) {
            ctx->pc = 0x2EB5E8u;
            goto label_2eb5e8;
        }
    }
    ctx->pc = 0x2EB5A0u;
label_2eb5a0:
    // 0x2eb5a0: 0xc0a367c  jal         func_28D9F0
label_2eb5a4:
    if (ctx->pc == 0x2EB5A4u) {
        ctx->pc = 0x2EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5A0u;
        // 0x2eb5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5A8u;
        goto label_2eb5a8;
    }
    ctx->pc = 0x2EB5A0u;
    SET_GPR_U32(ctx, 31, 0x2EB5A8u);
    ctx->pc = 0x2EB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5A0u;
    // 0x2eb5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB5A0u, 0x2EB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5A8u;
label_2eb5a8:
    // 0x2eb5a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb5ac:
    // 0x2eb5ac: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_2eb5b0:
    if (ctx->pc == 0x2EB5B0u) {
        ctx->pc = 0x2EB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5ACu;
        // 0x2eb5b0: 0x2684b880  addiu       $a0, $s4, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5B4u;
        goto label_2eb5b4;
    }
    ctx->pc = 0x2EB5ACu;
    {
        const bool branch_taken_0x2eb5ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5ac) {
            ctx->pc = 0x2EB5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5ACu;
            // 0x2eb5b0: 0x2684b880  addiu       $a0, $s4, -0x4780 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB638u;
            goto label_2eb638;
        }
    }
    ctx->pc = 0x2EB5B4u;
label_2eb5b4:
    // 0x2eb5b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2eb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eb5b8:
    // 0x2eb5b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2eb5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2eb5bc:
    // 0x2eb5bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2eb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2eb5c0:
    // 0x2eb5c0: 0x40f809  jalr        $v0
label_2eb5c4:
    if (ctx->pc == 0x2EB5C4u) {
        ctx->pc = 0x2EB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5C0u;
        // 0x2eb5c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5C8u;
        goto label_2eb5c8;
    }
    ctx->pc = 0x2EB5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB5C8u);
        ctx->pc = 0x2EB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5C0u;
        // 0x2eb5c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB5C0u, 0x2EB5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB5C8u;
label_2eb5c8:
    // 0x2eb5c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb5cc:
    // 0x2eb5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb5d0:
    // 0x2eb5d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2eb5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb5d4:
    // 0x2eb5d4: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x2eb5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2eb5d8:
    // 0x2eb5d8: 0xc0bfabe  jal         func_2FEAF8
label_2eb5dc:
    if (ctx->pc == 0x2EB5DCu) {
        ctx->pc = 0x2EB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5D8u;
        // 0x2eb5dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5E0u;
        goto label_2eb5e0;
    }
    ctx->pc = 0x2EB5D8u;
    SET_GPR_U32(ctx, 31, 0x2EB5E0u);
    ctx->pc = 0x2EB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5D8u;
    // 0x2eb5dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2EB5D8u, 0x2EB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5E0u;
label_2eb5e0:
    // 0x2eb5e0: 0x10000015  b           . + 4 + (0x15 << 2)
label_2eb5e4:
    if (ctx->pc == 0x2EB5E4u) {
        ctx->pc = 0x2EB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5E0u;
        // 0x2eb5e4: 0x2684b880  addiu       $a0, $s4, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5E8u;
        goto label_2eb5e8;
    }
    ctx->pc = 0x2EB5E0u;
    {
        const bool branch_taken_0x2eb5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5E0u;
        // 0x2eb5e4: 0x2684b880  addiu       $a0, $s4, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5e0) {
            ctx->pc = 0x2EB638u;
            goto label_2eb638;
        }
    }
    ctx->pc = 0x2EB5E8u;
label_2eb5e8:
    // 0x2eb5e8: 0xc086618  jal         func_219860
label_2eb5ec:
    if (ctx->pc == 0x2EB5ECu) {
        ctx->pc = 0x2EB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5E8u;
        // 0x2eb5ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB5F0u;
        goto label_2eb5f0;
    }
    ctx->pc = 0x2EB5E8u;
    SET_GPR_U32(ctx, 31, 0x2EB5F0u);
    ctx->pc = 0x2EB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5E8u;
    // 0x2eb5ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2EB5E8u, 0x2EB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5F0u;
label_2eb5f0:
    // 0x2eb5f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb5f4:
    // 0x2eb5f4: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2eb5f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2eb5f8:
    // 0x2eb5f8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2eb5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2eb5fc:
    // 0x2eb5fc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2eb5fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2eb600:
    // 0x2eb600: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eb600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eb604:
    // 0x2eb604: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2eb604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eb608:
    // 0x2eb608: 0xc0a367c  jal         func_28D9F0
label_2eb60c:
    if (ctx->pc == 0x2EB60Cu) {
        ctx->pc = 0x2EB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB608u;
        // 0x2eb60c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB610u;
        goto label_2eb610;
    }
    ctx->pc = 0x2EB608u;
    SET_GPR_U32(ctx, 31, 0x2EB610u);
    ctx->pc = 0x2EB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB608u;
    // 0x2eb60c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB608u, 0x2EB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB610u;
label_2eb610:
    // 0x2eb610: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2eb614:
    if (ctx->pc == 0x2EB614u) {
        ctx->pc = 0x2EB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB610u;
        // 0x2eb614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB618u;
        goto label_2eb618;
    }
    ctx->pc = 0x2EB610u;
    {
        const bool branch_taken_0x2eb610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB610u;
        // 0x2eb614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb610) {
            ctx->pc = 0x2EB634u;
            goto label_2eb634;
        }
    }
    ctx->pc = 0x2EB618u;
label_2eb618:
    // 0x2eb618: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb61c:
    // 0x2eb61c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2eb61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb620:
    // 0x2eb620: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2eb620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2eb624:
    // 0x2eb624: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2eb624u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2eb628:
    // 0x2eb628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb62c:
    // 0x2eb62c: 0xc0bf3d4  jal         func_2FCF50
label_2eb630:
    if (ctx->pc == 0x2EB630u) {
        ctx->pc = 0x2EB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB62Cu;
        // 0x2eb630: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB634u;
        goto label_2eb634;
    }
    ctx->pc = 0x2EB62Cu;
    SET_GPR_U32(ctx, 31, 0x2EB634u);
    ctx->pc = 0x2EB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB62Cu;
    // 0x2eb630: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2EB62Cu, 0x2EB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB634u;
label_2eb634:
    // 0x2eb634: 0x2684b880  addiu       $a0, $s4, -0x4780
    ctx->pc = 0x2eb634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
label_2eb638:
    // 0x2eb638: 0xc0cd4ee  jal         func_3353B8
label_2eb63c:
    if (ctx->pc == 0x2EB63Cu) {
        ctx->pc = 0x2EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB638u;
        // 0x2eb63c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB640u;
        goto label_2eb640;
    }
    ctx->pc = 0x2EB638u;
    SET_GPR_U32(ctx, 31, 0x2EB640u);
    ctx->pc = 0x2EB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB638u;
    // 0x2eb63c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EB638u, 0x2EB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB640u;
label_2eb640:
    // 0x2eb640: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2eb640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2eb644:
    // 0x2eb644: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
label_2eb648:
    if (ctx->pc == 0x2EB648u) {
        ctx->pc = 0x2EB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB644u;
        // 0x2eb648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB64Cu;
        goto label_2eb64c;
    }
    ctx->pc = 0x2EB644u;
    {
        const bool branch_taken_0x2eb644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB644u;
        // 0x2eb648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb644) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB64Cu;
label_2eb64c:
    // 0x2eb64c: 0xc0a47b4  jal         func_291ED0
label_2eb650:
    if (ctx->pc == 0x2EB650u) {
        ctx->pc = 0x2EB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB64Cu;
        // 0x2eb650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB654u;
        goto label_2eb654;
    }
    ctx->pc = 0x2EB64Cu;
    SET_GPR_U32(ctx, 31, 0x2EB654u);
    ctx->pc = 0x2EB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB64Cu;
    // 0x2eb650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2EB64Cu, 0x2EB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB654u;
label_2eb654:
    // 0x2eb654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb658:
    // 0x2eb658: 0x14430128  bne         $v0, $v1, . + 4 + (0x128 << 2)
label_2eb65c:
    if (ctx->pc == 0x2EB65Cu) {
        ctx->pc = 0x2EB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB658u;
        // 0x2eb65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB660u;
        goto label_2eb660;
    }
    ctx->pc = 0x2EB658u;
    {
        const bool branch_taken_0x2eb658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB658u;
        // 0x2eb65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb658) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB660u;
label_2eb660:
    // 0x2eb660: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2eb660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2eb664:
    // 0x2eb664: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2eb664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2eb668:
    // 0x2eb668: 0xc0cd4ee  jal         func_3353B8
label_2eb66c:
    if (ctx->pc == 0x2EB66Cu) {
        ctx->pc = 0x2EB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB668u;
        // 0x2eb66c: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB670u;
        goto label_2eb670;
    }
    ctx->pc = 0x2EB668u;
    SET_GPR_U32(ctx, 31, 0x2EB670u);
    ctx->pc = 0x2EB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB668u;
    // 0x2eb66c: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EB668u, 0x2EB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB670u;
label_2eb670:
    // 0x2eb670: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2eb670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2eb674:
    // 0x2eb674: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2eb674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2eb678:
    // 0x2eb678: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2eb678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eb67c:
    // 0x2eb67c: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2eb67cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2eb680:
    // 0x2eb680: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2eb680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2eb684:
    // 0x2eb684: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2eb684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2eb688:
    // 0x2eb688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb68c:
    // 0x2eb68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb690:
    // 0x2eb690: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2eb690u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2eb694:
    // 0x2eb694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb698:
    // 0x2eb698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb69c:
    // 0x2eb69c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb6a0:
    // 0x2eb6a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb6a4:
    // 0x2eb6a4: 0xc088178  jal         func_2205E0
label_2eb6a8:
    if (ctx->pc == 0x2EB6A8u) {
        ctx->pc = 0x2EB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6A4u;
        // 0x2eb6a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6ACu;
        goto label_2eb6ac;
    }
    ctx->pc = 0x2EB6A4u;
    SET_GPR_U32(ctx, 31, 0x2EB6ACu);
    ctx->pc = 0x2EB6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6A4u;
    // 0x2eb6a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EB6A4u, 0x2EB6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6ACu;
label_2eb6ac:
    // 0x2eb6ac: 0x10000113  b           . + 4 + (0x113 << 2)
label_2eb6b0:
    if (ctx->pc == 0x2EB6B0u) {
        ctx->pc = 0x2EB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6ACu;
        // 0x2eb6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6B4u;
        goto label_2eb6b4;
    }
    ctx->pc = 0x2EB6ACu;
    {
        const bool branch_taken_0x2eb6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6ACu;
        // 0x2eb6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6ac) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB6B4u;
label_2eb6b4:
    // 0x2eb6b4: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2eb6b8:
    if (ctx->pc == 0x2EB6B8u) {
        ctx->pc = 0x2EB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6B4u;
        // 0x2eb6b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6BCu;
        goto label_2eb6bc;
    }
    ctx->pc = 0x2EB6B4u;
    {
        const bool branch_taken_0x2eb6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6B4u;
        // 0x2eb6b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6b4) {
            ctx->pc = 0x2EB74Cu;
            goto label_2eb74c;
        }
    }
    ctx->pc = 0x2EB6BCu;
label_2eb6bc:
    // 0x2eb6bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2eb6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2eb6c0:
    // 0x2eb6c0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eb6c4:
    // 0x2eb6c4: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2eb6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2eb6c8:
    // 0x2eb6c8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2eb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2eb6cc:
    // 0x2eb6cc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2eb6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2eb6d0:
    // 0x2eb6d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2eb6d4:
    if (ctx->pc == 0x2EB6D4u) {
        ctx->pc = 0x2EB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6D0u;
        // 0x2eb6d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB6D8u;
        goto label_2eb6d8;
    }
    ctx->pc = 0x2EB6D0u;
    {
        const bool branch_taken_0x2eb6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6D0u;
        // 0x2eb6d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6d0) {
            ctx->pc = 0x2EB708u;
            goto label_2eb708;
        }
    }
    ctx->pc = 0x2EB6D8u;
label_2eb6d8:
    // 0x2eb6d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2eb6dc:
    // 0x2eb6dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb6e0:
    // 0x2eb6e0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2eb6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eb6e4:
    // 0x2eb6e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb6e8:
    // 0x2eb6e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2eb6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2eb6ec:
    // 0x2eb6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb6f0:
    // 0x2eb6f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb6f4:
    // 0x2eb6f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eb6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb6f8:
    // 0x2eb6f8: 0xc088178  jal         func_2205E0
label_2eb6fc:
    if (ctx->pc == 0x2EB6FCu) {
        ctx->pc = 0x2EB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6F8u;
        // 0x2eb6fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB700u;
        goto label_2eb700;
    }
    ctx->pc = 0x2EB6F8u;
    SET_GPR_U32(ctx, 31, 0x2EB700u);
    ctx->pc = 0x2EB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6F8u;
    // 0x2eb6fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EB6F8u, 0x2EB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB700u;
label_2eb700:
    // 0x2eb700: 0x100000fe  b           . + 4 + (0xFE << 2)
label_2eb704:
    if (ctx->pc == 0x2EB704u) {
        ctx->pc = 0x2EB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB700u;
        // 0x2eb704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB708u;
        goto label_2eb708;
    }
    ctx->pc = 0x2EB700u;
    {
        const bool branch_taken_0x2eb700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB700u;
        // 0x2eb704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb700) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB708u;
label_2eb708:
    // 0x2eb708: 0xc088ef0  jal         func_223BC0
label_2eb70c:
    if (ctx->pc == 0x2EB70Cu) {
        ctx->pc = 0x2EB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB708u;
        // 0x2eb70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB710u;
        goto label_2eb710;
    }
    ctx->pc = 0x2EB708u;
    SET_GPR_U32(ctx, 31, 0x2EB710u);
    ctx->pc = 0x2EB70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB708u;
    // 0x2eb70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EB708u, 0x2EB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB710u;
label_2eb710:
    // 0x2eb710: 0x1454000a  bne         $v0, $s4, . + 4 + (0xA << 2)
label_2eb714:
    if (ctx->pc == 0x2EB714u) {
        ctx->pc = 0x2EB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB710u;
        // 0x2eb714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB718u;
        goto label_2eb718;
    }
    ctx->pc = 0x2EB710u;
    {
        const bool branch_taken_0x2eb710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2EB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB710u;
        // 0x2eb714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb710) {
            ctx->pc = 0x2EB73Cu;
            goto label_2eb73c;
        }
    }
    ctx->pc = 0x2EB718u;
label_2eb718:
    // 0x2eb718: 0xc08be36  jal         func_22F8D8
label_2eb71c:
    if (ctx->pc == 0x2EB71Cu) {
        ctx->pc = 0x2EB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB718u;
        // 0x2eb71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB720u;
        goto label_2eb720;
    }
    ctx->pc = 0x2EB718u;
    SET_GPR_U32(ctx, 31, 0x2EB720u);
    ctx->pc = 0x2EB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB718u;
    // 0x2eb71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2EB718u, 0x2EB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB720u;
label_2eb720:
    // 0x2eb720: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x2eb720u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2eb724:
    // 0x2eb724: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x2eb724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_2eb728:
    // 0x2eb728: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2eb728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2eb72c:
    // 0x2eb72c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb730:
    // 0x2eb730: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2eb730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2eb734:
    // 0x2eb734: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_2eb738:
    if (ctx->pc == 0x2EB738u) {
        ctx->pc = 0x2EB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB734u;
        // 0x2eb738: 0xfe4300e0  sd          $v1, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB73Cu;
        goto label_2eb73c;
    }
    ctx->pc = 0x2EB734u;
    {
        const bool branch_taken_0x2eb734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB734u;
        // 0x2eb738: 0xfe4300e0  sd          $v1, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb734) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB73Cu;
label_2eb73c:
    // 0x2eb73c: 0xc0ba8f2  jal         func_2EA3C8
label_2eb740:
    if (ctx->pc == 0x2EB740u) {
        ctx->pc = 0x2EB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB73Cu;
        // 0x2eb740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB744u;
        goto label_2eb744;
    }
    ctx->pc = 0x2EB73Cu;
    SET_GPR_U32(ctx, 31, 0x2EB744u);
    ctx->pc = 0x2EB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB73Cu;
    // 0x2eb740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA3C8u, 0x2EB73Cu, 0x2EB744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB744u;
label_2eb744:
    // 0x2eb744: 0x100000ed  b           . + 4 + (0xED << 2)
label_2eb748:
    if (ctx->pc == 0x2EB748u) {
        ctx->pc = 0x2EB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB744u;
        // 0x2eb748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB74Cu;
        goto label_2eb74c;
    }
    ctx->pc = 0x2EB744u;
    {
        const bool branch_taken_0x2eb744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB744u;
        // 0x2eb748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb744) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB74Cu;
label_2eb74c:
    // 0x2eb74c: 0x146200eb  bne         $v1, $v0, . + 4 + (0xEB << 2)
label_2eb750:
    if (ctx->pc == 0x2EB750u) {
        ctx->pc = 0x2EB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB74Cu;
        // 0x2eb750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB754u;
        goto label_2eb754;
    }
    ctx->pc = 0x2EB74Cu;
    {
        const bool branch_taken_0x2eb74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB74Cu;
        // 0x2eb750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb74c) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB754u;
label_2eb754:
    // 0x2eb754: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x2eb754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
label_2eb758:
    // 0x2eb758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb75c:
    // 0x2eb75c: 0xc089998  jal         func_226660
label_2eb760:
    if (ctx->pc == 0x2EB760u) {
        ctx->pc = 0x2EB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB75Cu;
        // 0x2eb760: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB764u;
        goto label_2eb764;
    }
    ctx->pc = 0x2EB75Cu;
    SET_GPR_U32(ctx, 31, 0x2EB764u);
    ctx->pc = 0x2EB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB75Cu;
    // 0x2eb760: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EB75Cu, 0x2EB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB764u;
label_2eb764:
    // 0x2eb764: 0x105400e5  beq         $v0, $s4, . + 4 + (0xE5 << 2)
label_2eb768:
    if (ctx->pc == 0x2EB768u) {
        ctx->pc = 0x2EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB764u;
        // 0x2eb768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB76Cu;
        goto label_2eb76c;
    }
    ctx->pc = 0x2EB764u;
    {
        const bool branch_taken_0x2eb764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB764u;
        // 0x2eb768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb764) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB76Cu;
label_2eb76c:
    // 0x2eb76c: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x2eb76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_2eb770:
    // 0x2eb770: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_2eb774:
    if (ctx->pc == 0x2EB774u) {
        ctx->pc = 0x2EB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB770u;
        // 0x2eb774: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB778u;
        goto label_2eb778;
    }
    ctx->pc = 0x2EB770u;
    {
        const bool branch_taken_0x2eb770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb770) {
            ctx->pc = 0x2EB774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB770u;
            // 0x2eb774: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB878u;
            goto label_2eb878;
        }
    }
    ctx->pc = 0x2EB778u;
label_2eb778:
    // 0x2eb778: 0xc08a08a  jal         func_228228
label_2eb77c:
    if (ctx->pc == 0x2EB77Cu) {
        ctx->pc = 0x2EB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB778u;
        // 0x2eb77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB780u;
        goto label_2eb780;
    }
    ctx->pc = 0x2EB778u;
    SET_GPR_U32(ctx, 31, 0x2EB780u);
    ctx->pc = 0x2EB77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB778u;
    // 0x2eb77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2EB778u, 0x2EB780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB780u;
label_2eb780:
    // 0x2eb780: 0x105400dd  beq         $v0, $s4, . + 4 + (0xDD << 2)
label_2eb784:
    if (ctx->pc == 0x2EB784u) {
        ctx->pc = 0x2EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB780u;
        // 0x2eb784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB788u;
        goto label_2eb788;
    }
    ctx->pc = 0x2EB780u;
    {
        const bool branch_taken_0x2eb780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB780u;
        // 0x2eb784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb780) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EB788u;
label_2eb788:
    // 0x2eb788: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eb788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2eb78c:
    // 0x2eb78c: 0xc089998  jal         func_226660
label_2eb790:
    if (ctx->pc == 0x2EB790u) {
        ctx->pc = 0x2EB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB78Cu;
        // 0x2eb790: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB794u;
        goto label_2eb794;
    }
    ctx->pc = 0x2EB78Cu;
    SET_GPR_U32(ctx, 31, 0x2EB794u);
    ctx->pc = 0x2EB790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB78Cu;
    // 0x2eb790: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EB78Cu, 0x2EB794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB794u;
label_2eb794:
    // 0x2eb794: 0x1454000c  bne         $v0, $s4, . + 4 + (0xC << 2)
label_2eb798:
    if (ctx->pc == 0x2EB798u) {
        ctx->pc = 0x2EB79Cu;
        goto label_2eb79c;
    }
    ctx->pc = 0x2EB794u;
    {
        const bool branch_taken_0x2eb794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2eb794) {
            ctx->pc = 0x2EB7C8u;
            goto label_2eb7c8;
        }
    }
    ctx->pc = 0x2EB79Cu;
label_2eb79c:
    // 0x2eb79c: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x2eb79cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2eb7a0:
    // 0x2eb7a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2eb7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2eb7a4:
    // 0x2eb7a4: 0xc05dc0e  jal         func_177038
label_2eb7a8:
    if (ctx->pc == 0x2EB7A8u) {
        ctx->pc = 0x2EB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7A4u;
        // 0x2eb7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7ACu;
        goto label_2eb7ac;
    }
    ctx->pc = 0x2EB7A4u;
    SET_GPR_U32(ctx, 31, 0x2EB7ACu);
    ctx->pc = 0x2EB7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7A4u;
    // 0x2eb7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2EB7A4u, 0x2EB7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7ACu;
label_2eb7ac:
    // 0x2eb7ac: 0xc05d484  jal         func_175210
label_2eb7b0:
    if (ctx->pc == 0x2EB7B0u) {
        ctx->pc = 0x2EB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7ACu;
        // 0x2eb7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7B4u;
        goto label_2eb7b4;
    }
    ctx->pc = 0x2EB7ACu;
    SET_GPR_U32(ctx, 31, 0x2EB7B4u);
    ctx->pc = 0x2EB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7ACu;
    // 0x2eb7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2EB7ACu, 0x2EB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7B4u;
label_2eb7b4:
    // 0x2eb7b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2eb7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eb7b8:
    // 0x2eb7b8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2eb7bc:
    // 0x2eb7bc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2eb7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2eb7c0:
    // 0x2eb7c0: 0xa0f809  jalr        $a1
label_2eb7c4:
    if (ctx->pc == 0x2EB7C4u) {
        ctx->pc = 0x2EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7C0u;
        // 0x2eb7c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7C8u;
        goto label_2eb7c8;
    }
    ctx->pc = 0x2EB7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EB7C8u);
        ctx->pc = 0x2EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7C0u;
        // 0x2eb7c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB7C0u, 0x2EB7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB7C8u;
label_2eb7c8:
    // 0x2eb7c8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2eb7cc:
    // 0x2eb7cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb7d0:
    // 0x2eb7d0: 0xc089998  jal         func_226660
label_2eb7d4:
    if (ctx->pc == 0x2EB7D4u) {
        ctx->pc = 0x2EB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7D0u;
        // 0x2eb7d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7D8u;
        goto label_2eb7d8;
    }
    ctx->pc = 0x2EB7D0u;
    SET_GPR_U32(ctx, 31, 0x2EB7D8u);
    ctx->pc = 0x2EB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7D0u;
    // 0x2eb7d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EB7D0u, 0x2EB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7D8u;
label_2eb7d8:
    // 0x2eb7d8: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2eb7dc:
    if (ctx->pc == 0x2EB7DCu) {
        ctx->pc = 0x2EB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7D8u;
        // 0x2eb7dc: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7E0u;
        goto label_2eb7e0;
    }
    ctx->pc = 0x2EB7D8u;
    {
        const bool branch_taken_0x2eb7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7d8) {
            ctx->pc = 0x2EB7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7D8u;
            // 0x2eb7dc: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB86Cu;
            goto label_2eb86c;
        }
    }
    ctx->pc = 0x2EB7E0u;
label_2eb7e0:
    // 0x2eb7e0: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2eb7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2eb7e4:
    // 0x2eb7e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2eb7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2eb7e8:
    // 0x2eb7e8: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2eb7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2eb7ec:
    // 0x2eb7ec: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2eb7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2eb7f0:
    // 0x2eb7f0: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2eb7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2eb7f4:
    // 0x2eb7f4: 0xc08997c  jal         func_2265F0
label_2eb7f8:
    if (ctx->pc == 0x2EB7F8u) {
        ctx->pc = 0x2EB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F4u;
        // 0x2eb7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7FCu;
        goto label_2eb7fc;
    }
    ctx->pc = 0x2EB7F4u;
    SET_GPR_U32(ctx, 31, 0x2EB7FCu);
    ctx->pc = 0x2EB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7F4u;
    // 0x2eb7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2EB7F4u, 0x2EB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7FCu;
label_2eb7fc:
    // 0x2eb7fc: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2eb800:
    if (ctx->pc == 0x2EB800u) {
        ctx->pc = 0x2EB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7FCu;
        // 0x2eb800: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB804u;
        goto label_2eb804;
    }
    ctx->pc = 0x2EB7FCu;
    {
        const bool branch_taken_0x2eb7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7fc) {
            ctx->pc = 0x2EB800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7FCu;
            // 0x2eb800: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB86Cu;
            goto label_2eb86c;
        }
    }
    ctx->pc = 0x2EB804u;
label_2eb804:
    // 0x2eb804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2eb804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2eb808:
    // 0x2eb808: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2eb808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2eb80c:
    // 0x2eb80c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb810:
    // 0x2eb810: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2eb810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eb814:
    // 0x2eb814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb818:
    // 0x2eb818: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2eb81c:
    // 0x2eb81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb820:
    // 0x2eb820: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb824:
    // 0x2eb824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb828:
    // 0x2eb828: 0xc088178  jal         func_2205E0
label_2eb82c:
    if (ctx->pc == 0x2EB82Cu) {
        ctx->pc = 0x2EB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB828u;
        // 0x2eb82c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB830u;
        goto label_2eb830;
    }
    ctx->pc = 0x2EB828u;
    SET_GPR_U32(ctx, 31, 0x2EB830u);
    ctx->pc = 0x2EB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB828u;
    // 0x2eb82c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EB828u, 0x2EB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB830u;
label_2eb830:
    // 0x2eb830: 0xc0a367c  jal         func_28D9F0
label_2eb834:
    if (ctx->pc == 0x2EB834u) {
        ctx->pc = 0x2EB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB830u;
        // 0x2eb834: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB838u;
        goto label_2eb838;
    }
    ctx->pc = 0x2EB830u;
    SET_GPR_U32(ctx, 31, 0x2EB838u);
    ctx->pc = 0x2EB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB830u;
    // 0x2eb834: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB830u, 0x2EB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB838u;
label_2eb838:
    // 0x2eb838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2eb83c:
    if (ctx->pc == 0x2EB83Cu) {
        ctx->pc = 0x2EB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB838u;
        // 0x2eb83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB840u;
        goto label_2eb840;
    }
    ctx->pc = 0x2EB838u;
    {
        const bool branch_taken_0x2eb838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB838u;
        // 0x2eb83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb838) {
            ctx->pc = 0x2EB868u;
            goto label_2eb868;
        }
    }
    ctx->pc = 0x2EB840u;
label_2eb840:
    // 0x2eb840: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2eb840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2eb844:
    // 0x2eb844: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eb844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eb848:
    // 0x2eb848: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eb848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eb84c:
    // 0x2eb84c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb850:
    // 0x2eb850: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2eb850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2eb854:
    // 0x2eb854: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb858:
    // 0x2eb858: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2eb858u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2eb85c:
    // 0x2eb85c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb860:
    // 0x2eb860: 0xc0be968  jal         func_2FA5A0
label_2eb864:
    if (ctx->pc == 0x2EB864u) {
        ctx->pc = 0x2EB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB860u;
        // 0x2eb864: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB868u;
        goto label_2eb868;
    }
    ctx->pc = 0x2EB860u;
    SET_GPR_U32(ctx, 31, 0x2EB868u);
    ctx->pc = 0x2EB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB860u;
    // 0x2eb864: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EB860u, 0x2EB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB868u;
label_2eb868:
    // 0x2eb868: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x2eb868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_2eb86c:
    // 0x2eb86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2eb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2eb870:
    // 0x2eb870: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_2eb874:
    if (ctx->pc == 0x2EB874u) {
        ctx->pc = 0x2EB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB870u;
        // 0x2eb874: 0xa2220031  sb          $v0, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB878u;
        goto label_2eb878;
    }
    ctx->pc = 0x2EB870u;
    {
        const bool branch_taken_0x2eb870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB870u;
        // 0x2eb874: 0xa2220031  sb          $v0, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb870) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EB878u;
label_2eb878:
    // 0x2eb878: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2eb878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2eb87c:
    // 0x2eb87c: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x2eb87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2eb880:
    // 0x2eb880: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2eb884:
    // 0x2eb884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eb888:
    // 0x2eb888: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2eb88c:
    // 0x2eb88c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_2eb890:
    if (ctx->pc == 0x2EB890u) {
        ctx->pc = 0x2EB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB88Cu;
        // 0x2eb890: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB894u;
        goto label_2eb894;
    }
    ctx->pc = 0x2EB88Cu;
    {
        const bool branch_taken_0x2eb88c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB88Cu;
        // 0x2eb890: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb88c) {
            ctx->pc = 0x2EB8ACu;
            goto label_2eb8ac;
        }
    }
    ctx->pc = 0x2EB894u;
label_2eb894:
    // 0x2eb894: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2eb894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2eb898:
    // 0x2eb898: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2eb898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eb89c:
    // 0x2eb89c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2eb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2eb8a0:
    // 0x2eb8a0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2eb8a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2eb8a4:
    // 0x2eb8a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2eb8a8:
    if (ctx->pc == 0x2EB8A8u) {
        ctx->pc = 0x2EB8ACu;
        goto label_2eb8ac;
    }
    ctx->pc = 0x2EB8A4u;
    {
        const bool branch_taken_0x2eb8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8a4) {
            ctx->pc = 0x2EB8D0u;
            goto label_2eb8d0;
        }
    }
    ctx->pc = 0x2EB8ACu;
label_2eb8ac:
    // 0x2eb8ac: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2eb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2eb8b0:
    // 0x2eb8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8b4:
    // 0x2eb8b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eb8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2eb8b8:
    // 0x2eb8b8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2eb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2eb8bc:
    // 0x2eb8bc: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9
    ctx->pc = 0x2eb8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
label_2eb8c0:
    // 0x2eb8c0: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2eb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_2eb8c4:
    // 0x2eb8c4: 0xc0a7c8c  jal         func_29F230
label_2eb8c8:
    if (ctx->pc == 0x2EB8C8u) {
        ctx->pc = 0x2EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C4u;
        // 0x2eb8c8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8CCu;
        goto label_2eb8cc;
    }
    ctx->pc = 0x2EB8C4u;
    SET_GPR_U32(ctx, 31, 0x2EB8CCu);
    ctx->pc = 0x2EB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8C4u;
    // 0x2eb8c8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2EB8C4u, 0x2EB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8CCu;
label_2eb8cc:
    // 0x2eb8cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eb8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8d0:
    // 0x2eb8d0: 0x1260008a  beqz        $s3, . + 4 + (0x8A << 2)
label_2eb8d4:
    if (ctx->pc == 0x2EB8D4u) {
        ctx->pc = 0x2EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D0u;
        // 0x2eb8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8D8u;
        goto label_2eb8d8;
    }
    ctx->pc = 0x2EB8D0u;
    {
        const bool branch_taken_0x2eb8d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D0u;
        // 0x2eb8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8d0) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB8D8u;
label_2eb8d8:
    // 0x2eb8d8: 0xc087502  jal         func_21D408
label_2eb8dc:
    if (ctx->pc == 0x2EB8DCu) {
        ctx->pc = 0x2EB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D8u;
        // 0x2eb8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8E0u;
        goto label_2eb8e0;
    }
    ctx->pc = 0x2EB8D8u;
    SET_GPR_U32(ctx, 31, 0x2EB8E0u);
    ctx->pc = 0x2EB8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8D8u;
    // 0x2eb8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EB8D8u, 0x2EB8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8E0u;
label_2eb8e0:
    // 0x2eb8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8e4:
    // 0x2eb8e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8e8:
    // 0x2eb8e8: 0xc0a3792  jal         func_28DE48
label_2eb8ec:
    if (ctx->pc == 0x2EB8ECu) {
        ctx->pc = 0x2EB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8E8u;
        // 0x2eb8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8F0u;
        goto label_2eb8f0;
    }
    ctx->pc = 0x2EB8E8u;
    SET_GPR_U32(ctx, 31, 0x2EB8F0u);
    ctx->pc = 0x2EB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8E8u;
    // 0x2eb8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2EB8E8u, 0x2EB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8F0u;
label_2eb8f0:
    // 0x2eb8f0: 0x1040fde9  beqz        $v0, . + 4 + (-0x217 << 2)
label_2eb8f4:
    if (ctx->pc == 0x2EB8F4u) {
        ctx->pc = 0x2EB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F0u;
        // 0x2eb8f4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8F8u;
        goto label_2eb8f8;
    }
    ctx->pc = 0x2EB8F0u;
    {
        const bool branch_taken_0x2eb8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F0u;
        // 0x2eb8f4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8f0) {
            ctx->pc = 0x2EB098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb098;
        }
    }
    ctx->pc = 0x2EB8F8u;
label_2eb8f8:
    // 0x2eb8f8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2eb8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2eb8fc:
    // 0x2eb8fc: 0x2455b880  addiu       $s5, $v0, -0x4780
    ctx->pc = 0x2eb8fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2eb900:
    // 0x2eb900: 0x2416001d  addiu       $s6, $zero, 0x1D
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2eb904:
    // 0x2eb904: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eb904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2eb908:
    // 0x2eb908: 0xc0cd4ee  jal         func_3353B8
label_2eb90c:
    if (ctx->pc == 0x2EB90Cu) {
        ctx->pc = 0x2EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB908u;
        // 0x2eb90c: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB910u;
        goto label_2eb910;
    }
    ctx->pc = 0x2EB908u;
    SET_GPR_U32(ctx, 31, 0x2EB910u);
    ctx->pc = 0x2EB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB908u;
    // 0x2eb90c: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EB908u, 0x2EB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB910u;
label_2eb910:
    // 0x2eb910: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2eb910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eb914:
    // 0x2eb914: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2eb914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2eb918:
    // 0x2eb918: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x2eb918u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_2eb91c:
    // 0x2eb91c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2eb91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2eb920:
    // 0x2eb920: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eb920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2eb924:
    // 0x2eb924: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2eb924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2eb928:
    // 0x2eb928: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2eb928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2eb92c:
    // 0x2eb92c: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2eb92cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2eb930:
    // 0x2eb930: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2eb930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2eb934:
    // 0x2eb934: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2eb934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2eb938:
    // 0x2eb938: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2eb938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2eb93c:
    // 0x2eb93c: 0xc0cdb38  jal         func_336CE0
label_2eb940:
    if (ctx->pc == 0x2EB940u) {
        ctx->pc = 0x2EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB93Cu;
        // 0x2eb940: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB944u;
        goto label_2eb944;
    }
    ctx->pc = 0x2EB93Cu;
    SET_GPR_U32(ctx, 31, 0x2EB944u);
    ctx->pc = 0x2EB940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB93Cu;
    // 0x2eb940: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EB93Cu, 0x2EB944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB944u;
label_2eb944:
    // 0x2eb944: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2eb944u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2eb948:
    // 0x2eb948: 0xc08bfa0  jal         func_22FE80
label_2eb94c:
    if (ctx->pc == 0x2EB94Cu) {
        ctx->pc = 0x2EB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB948u;
        // 0x2eb94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB950u;
        goto label_2eb950;
    }
    ctx->pc = 0x2EB948u;
    SET_GPR_U32(ctx, 31, 0x2EB950u);
    ctx->pc = 0x2EB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB948u;
    // 0x2eb94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2EB948u, 0x2EB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB950u;
label_2eb950:
    // 0x2eb950: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb954:
    // 0x2eb954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb958:
    // 0x2eb958: 0xc0a41ae  jal         func_2906B8
label_2eb95c:
    if (ctx->pc == 0x2EB95Cu) {
        ctx->pc = 0x2EB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB958u;
        // 0x2eb95c: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB960u;
        goto label_2eb960;
    }
    ctx->pc = 0x2EB958u;
    SET_GPR_U32(ctx, 31, 0x2EB960u);
    ctx->pc = 0x2EB95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB958u;
    // 0x2eb95c: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2EB958u, 0x2EB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB960u;
label_2eb960:
    // 0x2eb960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb964:
    // 0x2eb964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb968:
    // 0x2eb968: 0x1602004f  bne         $s0, $v0, . + 4 + (0x4F << 2)
label_2eb96c:
    if (ctx->pc == 0x2EB96Cu) {
        ctx->pc = 0x2EB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB968u;
        // 0x2eb96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB970u;
        goto label_2eb970;
    }
    ctx->pc = 0x2EB968u;
    {
        const bool branch_taken_0x2eb968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB968u;
        // 0x2eb96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb968) {
            ctx->pc = 0x2EBAA8u;
            goto label_2ebaa8;
        }
    }
    ctx->pc = 0x2EB970u;
label_2eb970:
    // 0x2eb970: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2eb970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2eb974:
    // 0x2eb974: 0xc08c340  jal         func_230D00
label_2eb978:
    if (ctx->pc == 0x2EB978u) {
        ctx->pc = 0x2EB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB974u;
        // 0x2eb978: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB97Cu;
        goto label_2eb97c;
    }
    ctx->pc = 0x2EB974u;
    SET_GPR_U32(ctx, 31, 0x2EB97Cu);
    ctx->pc = 0x2EB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB974u;
    // 0x2eb978: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2EB974u, 0x2EB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB97Cu;
label_2eb97c:
    // 0x2eb97c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2eb97cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2eb980:
    // 0x2eb980: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2eb980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eb984:
    // 0x2eb984: 0x0  nop
    ctx->pc = 0x2eb984u;
    // NOP
label_2eb988:
    // 0x2eb988: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_2eb98c:
    if (ctx->pc == 0x2EB98Cu) {
        ctx->pc = 0x2EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB988u;
        // 0x2eb98c: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB990u;
        goto label_2eb990;
    }
    ctx->pc = 0x2EB988u;
    {
        const bool branch_taken_0x2eb988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb988) {
            ctx->pc = 0x2EB98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB988u;
            // 0x2eb98c: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB9C8u;
            goto label_2eb9c8;
        }
    }
    ctx->pc = 0x2EB990u;
label_2eb990:
    // 0x2eb990: 0xc086618  jal         func_219860
label_2eb994:
    if (ctx->pc == 0x2EB994u) {
        ctx->pc = 0x2EB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB990u;
        // 0x2eb994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB998u;
        goto label_2eb998;
    }
    ctx->pc = 0x2EB990u;
    SET_GPR_U32(ctx, 31, 0x2EB998u);
    ctx->pc = 0x2EB994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB990u;
    // 0x2eb994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2EB990u, 0x2EB998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB998u;
label_2eb998:
    // 0x2eb998: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2eb998u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2eb99c:
    // 0x2eb99c: 0x0  nop
    ctx->pc = 0x2eb99cu;
    // NOP
label_2eb9a0:
    // 0x2eb9a0: 0x0  nop
    ctx->pc = 0x2eb9a0u;
    // NOP
label_2eb9a4:
    // 0x2eb9a4: 0x46140044  c1          0x140044
    ctx->pc = 0x2eb9a4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2eb9a8:
    // 0x2eb9a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2eb9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2eb9ac:
    // 0x2eb9ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eb9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eb9b0:
    // 0x2eb9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eb9b4:
    // 0x2eb9b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb9b8:
    // 0x2eb9b8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2eb9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2eb9bc:
    // 0x2eb9bc: 0x46000d28  max.s       $f20, $f1, $f0
    ctx->pc = 0x2eb9bcu;
    ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
label_2eb9c0:
    // 0x2eb9c0: 0x10000042  b           . + 4 + (0x42 << 2)
label_2eb9c4:
    if (ctx->pc == 0x2EB9C4u) {
        ctx->pc = 0x2EB9C8u;
        goto label_2eb9c8;
    }
    ctx->pc = 0x2EB9C0u;
    {
        const bool branch_taken_0x2eb9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9c0) {
            ctx->pc = 0x2EBACCu;
            goto label_2ebacc;
        }
    }
    ctx->pc = 0x2EB9C8u;
label_2eb9c8:
    // 0x2eb9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9cc:
    // 0x2eb9cc: 0xc0891de  jal         func_224778
label_2eb9d0:
    if (ctx->pc == 0x2EB9D0u) {
        ctx->pc = 0x2EB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9CCu;
        // 0x2eb9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9D4u;
        goto label_2eb9d4;
    }
    ctx->pc = 0x2EB9CCu;
    SET_GPR_U32(ctx, 31, 0x2EB9D4u);
    ctx->pc = 0x2EB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9CCu;
    // 0x2eb9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2EB9CCu, 0x2EB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9D4u;
label_2eb9d4:
    // 0x2eb9d4: 0x14500049  bne         $v0, $s0, . + 4 + (0x49 << 2)
label_2eb9d8:
    if (ctx->pc == 0x2EB9D8u) {
        ctx->pc = 0x2EB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9D4u;
        // 0x2eb9d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9DCu;
        goto label_2eb9dc;
    }
    ctx->pc = 0x2EB9D4u;
    {
        const bool branch_taken_0x2eb9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9D4u;
        // 0x2eb9d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9d4) {
            ctx->pc = 0x2EBAFCu;
            goto label_2ebafc;
        }
    }
    ctx->pc = 0x2EB9DCu;
label_2eb9dc:
    // 0x2eb9dc: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x2eb9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2eb9e0:
    // 0x2eb9e0: 0x54d40027  bnel        $a2, $s4, . + 4 + (0x27 << 2)
label_2eb9e4:
    if (ctx->pc == 0x2EB9E4u) {
        ctx->pc = 0x2EB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9E0u;
        // 0x2eb9e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9E8u;
        goto label_2eb9e8;
    }
    ctx->pc = 0x2EB9E0u;
    {
        const bool branch_taken_0x2eb9e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        if (branch_taken_0x2eb9e0) {
            ctx->pc = 0x2EB9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB9E0u;
            // 0x2eb9e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA80u;
            goto label_2eba80;
        }
    }
    ctx->pc = 0x2EB9E8u;
label_2eb9e8:
    // 0x2eb9e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9ec:
    // 0x2eb9ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9f0:
    // 0x2eb9f0: 0xc088776  jal         func_221DD8
label_2eb9f4:
    if (ctx->pc == 0x2EB9F4u) {
        ctx->pc = 0x2EB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9F0u;
        // 0x2eb9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9F8u;
        goto label_2eb9f8;
    }
    ctx->pc = 0x2EB9F0u;
    SET_GPR_U32(ctx, 31, 0x2EB9F8u);
    ctx->pc = 0x2EB9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9F0u;
    // 0x2eb9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DD8u, 0x2EB9F0u, 0x2EB9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9F8u;
label_2eb9f8:
    // 0x2eb9f8: 0xc0a367c  jal         func_28D9F0
label_2eb9fc:
    if (ctx->pc == 0x2EB9FCu) {
        ctx->pc = 0x2EB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9F8u;
        // 0x2eb9fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA00u;
        goto label_2eba00;
    }
    ctx->pc = 0x2EB9F8u;
    SET_GPR_U32(ctx, 31, 0x2EBA00u);
    ctx->pc = 0x2EB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9F8u;
    // 0x2eb9fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EB9F8u, 0x2EBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA00u;
label_2eba00:
    // 0x2eba00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eba00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eba04:
    // 0x2eba04: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2eba08:
    if (ctx->pc == 0x2EBA08u) {
        ctx->pc = 0x2EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA04u;
        // 0x2eba08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA0Cu;
        goto label_2eba0c;
    }
    ctx->pc = 0x2EBA04u;
    {
        const bool branch_taken_0x2eba04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA04u;
        // 0x2eba08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba04) {
            ctx->pc = 0x2EBA4Cu;
            goto label_2eba4c;
        }
    }
    ctx->pc = 0x2EBA0Cu;
label_2eba0c:
    // 0x2eba0c: 0xc0cd4ee  jal         func_3353B8
label_2eba10:
    if (ctx->pc == 0x2EBA10u) {
        ctx->pc = 0x2EBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA0Cu;
        // 0x2eba10: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA14u;
        goto label_2eba14;
    }
    ctx->pc = 0x2EBA0Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA14u);
    ctx->pc = 0x2EBA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA0Cu;
    // 0x2eba10: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EBA0Cu, 0x2EBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA14u;
label_2eba14:
    // 0x2eba14: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2eba14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2eba18:
    // 0x2eba18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eba18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eba1c:
    // 0x2eba1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eba1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eba20:
    // 0x2eba20: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2eba20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eba24:
    // 0x2eba24: 0x24030285  addiu       $v1, $zero, 0x285
    ctx->pc = 0x2eba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
label_2eba28:
    // 0x2eba28: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2eba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2eba2c:
    // 0x2eba2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eba30:
    // 0x2eba30: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2eba30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_2eba34:
    // 0x2eba34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eba38:
    // 0x2eba38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2eba38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2eba3c:
    // 0x2eba3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eba3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eba40:
    // 0x2eba40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eba40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eba44:
    // 0x2eba44: 0xc0be968  jal         func_2FA5A0
label_2eba48:
    if (ctx->pc == 0x2EBA48u) {
        ctx->pc = 0x2EBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA44u;
        // 0x2eba48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA4Cu;
        goto label_2eba4c;
    }
    ctx->pc = 0x2EBA44u;
    SET_GPR_U32(ctx, 31, 0x2EBA4Cu);
    ctx->pc = 0x2EBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA44u;
    // 0x2eba48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EBA44u, 0x2EBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA4Cu;
label_2eba4c:
    // 0x2eba4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2eba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2eba50:
    // 0x2eba50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2eba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2eba54:
    // 0x2eba54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eba54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eba58:
    // 0x2eba58: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2eba58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eba5c:
    // 0x2eba5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eba60:
    // 0x2eba60: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2eba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2eba64:
    // 0x2eba64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eba64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eba68:
    // 0x2eba68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eba68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eba6c:
    // 0x2eba6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eba6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eba70:
    // 0x2eba70: 0xc088178  jal         func_2205E0
label_2eba74:
    if (ctx->pc == 0x2EBA74u) {
        ctx->pc = 0x2EBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA70u;
        // 0x2eba74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA78u;
        goto label_2eba78;
    }
    ctx->pc = 0x2EBA70u;
    SET_GPR_U32(ctx, 31, 0x2EBA78u);
    ctx->pc = 0x2EBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA70u;
    // 0x2eba74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EBA70u, 0x2EBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA78u;
label_2eba78:
    // 0x2eba78: 0x10000007  b           . + 4 + (0x7 << 2)
label_2eba7c:
    if (ctx->pc == 0x2EBA7Cu) {
        ctx->pc = 0x2EBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA78u;
        // 0x2eba7c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA80u;
        goto label_2eba80;
    }
    ctx->pc = 0x2EBA78u;
    {
        const bool branch_taken_0x2eba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA78u;
        // 0x2eba7c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba78) {
            ctx->pc = 0x2EBA98u;
            goto label_2eba98;
        }
    }
    ctx->pc = 0x2EBA80u;
label_2eba80:
    // 0x2eba80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eba80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eba84:
    // 0x2eba84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2eba84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2eba88:
    // 0x2eba88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eba88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eba8c:
    // 0x2eba8c: 0xc0a3892  jal         func_28E248
label_2eba90:
    if (ctx->pc == 0x2EBA90u) {
        ctx->pc = 0x2EBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA8Cu;
        // 0x2eba90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA94u;
        goto label_2eba94;
    }
    ctx->pc = 0x2EBA8Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA94u);
    ctx->pc = 0x2EBA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA8Cu;
    // 0x2eba90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2EBA8Cu, 0x2EBA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA94u;
label_2eba94:
    // 0x2eba94: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2eba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2eba98:
    // 0x2eba98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eba9c:
    // 0x2eba9c: 0xa222002c  sb          $v0, 0x2C($s1)
    ctx->pc = 0x2eba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
label_2ebaa0:
    // 0x2ebaa0: 0x10000015  b           . + 4 + (0x15 << 2)
label_2ebaa4:
    if (ctx->pc == 0x2EBAA4u) {
        ctx->pc = 0x2EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAA0u;
        // 0x2ebaa4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAA8u;
        goto label_2ebaa8;
    }
    ctx->pc = 0x2EBAA0u;
    {
        const bool branch_taken_0x2ebaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAA0u;
        // 0x2ebaa4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebaa0) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EBAA8u;
label_2ebaa8:
    // 0x2ebaa8: 0xc086618  jal         func_219860
label_2ebaac:
    if (ctx->pc == 0x2EBAACu) {
        ctx->pc = 0x2EBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAA8u;
        // 0x2ebaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAB0u;
        goto label_2ebab0;
    }
    ctx->pc = 0x2EBAA8u;
    SET_GPR_U32(ctx, 31, 0x2EBAB0u);
    ctx->pc = 0x2EBAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBAA8u;
    // 0x2ebaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2EBAA8u, 0x2EBAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAB0u;
label_2ebab0:
    // 0x2ebab0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ebab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebab4:
    // 0x2ebab4: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2ebab4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ebab8:
    // 0x2ebab8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2ebab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2ebabc:
    // 0x2ebabc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2ebabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2ebac0:
    // 0x2ebac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ebac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ebac4:
    // 0x2ebac4: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2ebac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ebac8:
    // 0x2ebac8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2ebac8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ebacc:
    // 0x2ebacc: 0xc0a367c  jal         func_28D9F0
label_2ebad0:
    if (ctx->pc == 0x2EBAD0u) {
        ctx->pc = 0x2EBAD4u;
        goto label_2ebad4;
    }
    ctx->pc = 0x2EBACCu;
    SET_GPR_U32(ctx, 31, 0x2EBAD4u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EBACCu, 0x2EBAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAD4u;
label_2ebad4:
    // 0x2ebad4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ebad8:
    if (ctx->pc == 0x2EBAD8u) {
        ctx->pc = 0x2EBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAD4u;
        // 0x2ebad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBADCu;
        goto label_2ebadc;
    }
    ctx->pc = 0x2EBAD4u;
    {
        const bool branch_taken_0x2ebad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAD4u;
        // 0x2ebad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebad4) {
            ctx->pc = 0x2EBAF8u;
            goto label_2ebaf8;
        }
    }
    ctx->pc = 0x2EBADCu;
label_2ebadc:
    // 0x2ebadc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ebadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebae0:
    // 0x2ebae0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ebae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ebae4:
    // 0x2ebae4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ebae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2ebae8:
    // 0x2ebae8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2ebae8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2ebaec:
    // 0x2ebaec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ebaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebaf0:
    // 0x2ebaf0: 0xc0bf3d4  jal         func_2FCF50
label_2ebaf4:
    if (ctx->pc == 0x2EBAF4u) {
        ctx->pc = 0x2EBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAF0u;
        // 0x2ebaf4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAF8u;
        goto label_2ebaf8;
    }
    ctx->pc = 0x2EBAF0u;
    SET_GPR_U32(ctx, 31, 0x2EBAF8u);
    ctx->pc = 0x2EBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBAF0u;
    // 0x2ebaf4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2EBAF0u, 0x2EBAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAF8u;
label_2ebaf8:
    // 0x2ebaf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ebaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebafc:
    // 0x2ebafc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2ebafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2ebb00:
    // 0x2ebb00: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2ebb00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2ebb04:
    // 0x2ebb04: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2ebb04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2ebb08:
    // 0x2ebb08: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2ebb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2ebb0c:
    // 0x2ebb0c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2ebb0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ebb10:
    // 0x2ebb10: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2ebb10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ebb14:
    // 0x2ebb14: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2ebb14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ebb18:
    // 0x2ebb18: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2ebb18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ebb1c:
    // 0x2ebb1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ebb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ebb20:
    // 0x2ebb20: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2ebb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ebb24:
    // 0x2ebb24: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2ebb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ebb28:
    // 0x2ebb28: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2ebb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ebb2c:
    // 0x2ebb2c: 0x3e00008  jr          $ra
label_2ebb30:
    if (ctx->pc == 0x2EBB30u) {
        ctx->pc = 0x2EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB2Cu;
        // 0x2ebb30: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBB34u;
        goto label_2ebb34;
    }
    ctx->pc = 0x2EBB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB2Cu;
        // 0x2ebb30: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBB34u;
label_2ebb34:
    // 0x2ebb34: 0x0  nop
    ctx->pc = 0x2ebb34u;
    // NOP
    ctx->pc = 0x2ebb38u;
}
