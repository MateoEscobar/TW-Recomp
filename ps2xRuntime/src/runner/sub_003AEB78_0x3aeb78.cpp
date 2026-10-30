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

// Function: sub_003AEB78
// Address: 0x3aeb78 - 0x3af280
void sub_003AEB78_0x3aeb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEB78_0x3aeb78");
#endif

    switch (ctx->pc) {
        case 0x3aeb78u: goto label_3aeb78;
        case 0x3aeb7cu: goto label_3aeb7c;
        case 0x3aeb80u: goto label_3aeb80;
        case 0x3aeb84u: goto label_3aeb84;
        case 0x3aeb88u: goto label_3aeb88;
        case 0x3aeb8cu: goto label_3aeb8c;
        case 0x3aeb90u: goto label_3aeb90;
        case 0x3aeb94u: goto label_3aeb94;
        case 0x3aeb98u: goto label_3aeb98;
        case 0x3aeb9cu: goto label_3aeb9c;
        case 0x3aeba0u: goto label_3aeba0;
        case 0x3aeba4u: goto label_3aeba4;
        case 0x3aeba8u: goto label_3aeba8;
        case 0x3aebacu: goto label_3aebac;
        case 0x3aebb0u: goto label_3aebb0;
        case 0x3aebb4u: goto label_3aebb4;
        case 0x3aebb8u: goto label_3aebb8;
        case 0x3aebbcu: goto label_3aebbc;
        case 0x3aebc0u: goto label_3aebc0;
        case 0x3aebc4u: goto label_3aebc4;
        case 0x3aebc8u: goto label_3aebc8;
        case 0x3aebccu: goto label_3aebcc;
        case 0x3aebd0u: goto label_3aebd0;
        case 0x3aebd4u: goto label_3aebd4;
        case 0x3aebd8u: goto label_3aebd8;
        case 0x3aebdcu: goto label_3aebdc;
        case 0x3aebe0u: goto label_3aebe0;
        case 0x3aebe4u: goto label_3aebe4;
        case 0x3aebe8u: goto label_3aebe8;
        case 0x3aebecu: goto label_3aebec;
        case 0x3aebf0u: goto label_3aebf0;
        case 0x3aebf4u: goto label_3aebf4;
        case 0x3aebf8u: goto label_3aebf8;
        case 0x3aebfcu: goto label_3aebfc;
        case 0x3aec00u: goto label_3aec00;
        case 0x3aec04u: goto label_3aec04;
        case 0x3aec08u: goto label_3aec08;
        case 0x3aec0cu: goto label_3aec0c;
        case 0x3aec10u: goto label_3aec10;
        case 0x3aec14u: goto label_3aec14;
        case 0x3aec18u: goto label_3aec18;
        case 0x3aec1cu: goto label_3aec1c;
        case 0x3aec20u: goto label_3aec20;
        case 0x3aec24u: goto label_3aec24;
        case 0x3aec28u: goto label_3aec28;
        case 0x3aec2cu: goto label_3aec2c;
        case 0x3aec30u: goto label_3aec30;
        case 0x3aec34u: goto label_3aec34;
        case 0x3aec38u: goto label_3aec38;
        case 0x3aec3cu: goto label_3aec3c;
        case 0x3aec40u: goto label_3aec40;
        case 0x3aec44u: goto label_3aec44;
        case 0x3aec48u: goto label_3aec48;
        case 0x3aec4cu: goto label_3aec4c;
        case 0x3aec50u: goto label_3aec50;
        case 0x3aec54u: goto label_3aec54;
        case 0x3aec58u: goto label_3aec58;
        case 0x3aec5cu: goto label_3aec5c;
        case 0x3aec60u: goto label_3aec60;
        case 0x3aec64u: goto label_3aec64;
        case 0x3aec68u: goto label_3aec68;
        case 0x3aec6cu: goto label_3aec6c;
        case 0x3aec70u: goto label_3aec70;
        case 0x3aec74u: goto label_3aec74;
        case 0x3aec78u: goto label_3aec78;
        case 0x3aec7cu: goto label_3aec7c;
        case 0x3aec80u: goto label_3aec80;
        case 0x3aec84u: goto label_3aec84;
        case 0x3aec88u: goto label_3aec88;
        case 0x3aec8cu: goto label_3aec8c;
        case 0x3aec90u: goto label_3aec90;
        case 0x3aec94u: goto label_3aec94;
        case 0x3aec98u: goto label_3aec98;
        case 0x3aec9cu: goto label_3aec9c;
        case 0x3aeca0u: goto label_3aeca0;
        case 0x3aeca4u: goto label_3aeca4;
        case 0x3aeca8u: goto label_3aeca8;
        case 0x3aecacu: goto label_3aecac;
        case 0x3aecb0u: goto label_3aecb0;
        case 0x3aecb4u: goto label_3aecb4;
        case 0x3aecb8u: goto label_3aecb8;
        case 0x3aecbcu: goto label_3aecbc;
        case 0x3aecc0u: goto label_3aecc0;
        case 0x3aecc4u: goto label_3aecc4;
        case 0x3aecc8u: goto label_3aecc8;
        case 0x3aecccu: goto label_3aeccc;
        case 0x3aecd0u: goto label_3aecd0;
        case 0x3aecd4u: goto label_3aecd4;
        case 0x3aecd8u: goto label_3aecd8;
        case 0x3aecdcu: goto label_3aecdc;
        case 0x3aece0u: goto label_3aece0;
        case 0x3aece4u: goto label_3aece4;
        case 0x3aece8u: goto label_3aece8;
        case 0x3aececu: goto label_3aecec;
        case 0x3aecf0u: goto label_3aecf0;
        case 0x3aecf4u: goto label_3aecf4;
        case 0x3aecf8u: goto label_3aecf8;
        case 0x3aecfcu: goto label_3aecfc;
        case 0x3aed00u: goto label_3aed00;
        case 0x3aed04u: goto label_3aed04;
        case 0x3aed08u: goto label_3aed08;
        case 0x3aed0cu: goto label_3aed0c;
        case 0x3aed10u: goto label_3aed10;
        case 0x3aed14u: goto label_3aed14;
        case 0x3aed18u: goto label_3aed18;
        case 0x3aed1cu: goto label_3aed1c;
        case 0x3aed20u: goto label_3aed20;
        case 0x3aed24u: goto label_3aed24;
        case 0x3aed28u: goto label_3aed28;
        case 0x3aed2cu: goto label_3aed2c;
        case 0x3aed30u: goto label_3aed30;
        case 0x3aed34u: goto label_3aed34;
        case 0x3aed38u: goto label_3aed38;
        case 0x3aed3cu: goto label_3aed3c;
        case 0x3aed40u: goto label_3aed40;
        case 0x3aed44u: goto label_3aed44;
        case 0x3aed48u: goto label_3aed48;
        case 0x3aed4cu: goto label_3aed4c;
        case 0x3aed50u: goto label_3aed50;
        case 0x3aed54u: goto label_3aed54;
        case 0x3aed58u: goto label_3aed58;
        case 0x3aed5cu: goto label_3aed5c;
        case 0x3aed60u: goto label_3aed60;
        case 0x3aed64u: goto label_3aed64;
        case 0x3aed68u: goto label_3aed68;
        case 0x3aed6cu: goto label_3aed6c;
        case 0x3aed70u: goto label_3aed70;
        case 0x3aed74u: goto label_3aed74;
        case 0x3aed78u: goto label_3aed78;
        case 0x3aed7cu: goto label_3aed7c;
        case 0x3aed80u: goto label_3aed80;
        case 0x3aed84u: goto label_3aed84;
        case 0x3aed88u: goto label_3aed88;
        case 0x3aed8cu: goto label_3aed8c;
        case 0x3aed90u: goto label_3aed90;
        case 0x3aed94u: goto label_3aed94;
        case 0x3aed98u: goto label_3aed98;
        case 0x3aed9cu: goto label_3aed9c;
        case 0x3aeda0u: goto label_3aeda0;
        case 0x3aeda4u: goto label_3aeda4;
        case 0x3aeda8u: goto label_3aeda8;
        case 0x3aedacu: goto label_3aedac;
        case 0x3aedb0u: goto label_3aedb0;
        case 0x3aedb4u: goto label_3aedb4;
        case 0x3aedb8u: goto label_3aedb8;
        case 0x3aedbcu: goto label_3aedbc;
        case 0x3aedc0u: goto label_3aedc0;
        case 0x3aedc4u: goto label_3aedc4;
        case 0x3aedc8u: goto label_3aedc8;
        case 0x3aedccu: goto label_3aedcc;
        case 0x3aedd0u: goto label_3aedd0;
        case 0x3aedd4u: goto label_3aedd4;
        case 0x3aedd8u: goto label_3aedd8;
        case 0x3aeddcu: goto label_3aeddc;
        case 0x3aede0u: goto label_3aede0;
        case 0x3aede4u: goto label_3aede4;
        case 0x3aede8u: goto label_3aede8;
        case 0x3aedecu: goto label_3aedec;
        case 0x3aedf0u: goto label_3aedf0;
        case 0x3aedf4u: goto label_3aedf4;
        case 0x3aedf8u: goto label_3aedf8;
        case 0x3aedfcu: goto label_3aedfc;
        case 0x3aee00u: goto label_3aee00;
        case 0x3aee04u: goto label_3aee04;
        case 0x3aee08u: goto label_3aee08;
        case 0x3aee0cu: goto label_3aee0c;
        case 0x3aee10u: goto label_3aee10;
        case 0x3aee14u: goto label_3aee14;
        case 0x3aee18u: goto label_3aee18;
        case 0x3aee1cu: goto label_3aee1c;
        case 0x3aee20u: goto label_3aee20;
        case 0x3aee24u: goto label_3aee24;
        case 0x3aee28u: goto label_3aee28;
        case 0x3aee2cu: goto label_3aee2c;
        case 0x3aee30u: goto label_3aee30;
        case 0x3aee34u: goto label_3aee34;
        case 0x3aee38u: goto label_3aee38;
        case 0x3aee3cu: goto label_3aee3c;
        case 0x3aee40u: goto label_3aee40;
        case 0x3aee44u: goto label_3aee44;
        case 0x3aee48u: goto label_3aee48;
        case 0x3aee4cu: goto label_3aee4c;
        case 0x3aee50u: goto label_3aee50;
        case 0x3aee54u: goto label_3aee54;
        case 0x3aee58u: goto label_3aee58;
        case 0x3aee5cu: goto label_3aee5c;
        case 0x3aee60u: goto label_3aee60;
        case 0x3aee64u: goto label_3aee64;
        case 0x3aee68u: goto label_3aee68;
        case 0x3aee6cu: goto label_3aee6c;
        case 0x3aee70u: goto label_3aee70;
        case 0x3aee74u: goto label_3aee74;
        case 0x3aee78u: goto label_3aee78;
        case 0x3aee7cu: goto label_3aee7c;
        case 0x3aee80u: goto label_3aee80;
        case 0x3aee84u: goto label_3aee84;
        case 0x3aee88u: goto label_3aee88;
        case 0x3aee8cu: goto label_3aee8c;
        case 0x3aee90u: goto label_3aee90;
        case 0x3aee94u: goto label_3aee94;
        case 0x3aee98u: goto label_3aee98;
        case 0x3aee9cu: goto label_3aee9c;
        case 0x3aeea0u: goto label_3aeea0;
        case 0x3aeea4u: goto label_3aeea4;
        case 0x3aeea8u: goto label_3aeea8;
        case 0x3aeeacu: goto label_3aeeac;
        case 0x3aeeb0u: goto label_3aeeb0;
        case 0x3aeeb4u: goto label_3aeeb4;
        case 0x3aeeb8u: goto label_3aeeb8;
        case 0x3aeebcu: goto label_3aeebc;
        case 0x3aeec0u: goto label_3aeec0;
        case 0x3aeec4u: goto label_3aeec4;
        case 0x3aeec8u: goto label_3aeec8;
        case 0x3aeeccu: goto label_3aeecc;
        case 0x3aeed0u: goto label_3aeed0;
        case 0x3aeed4u: goto label_3aeed4;
        case 0x3aeed8u: goto label_3aeed8;
        case 0x3aeedcu: goto label_3aeedc;
        case 0x3aeee0u: goto label_3aeee0;
        case 0x3aeee4u: goto label_3aeee4;
        case 0x3aeee8u: goto label_3aeee8;
        case 0x3aeeecu: goto label_3aeeec;
        case 0x3aeef0u: goto label_3aeef0;
        case 0x3aeef4u: goto label_3aeef4;
        case 0x3aeef8u: goto label_3aeef8;
        case 0x3aeefcu: goto label_3aeefc;
        case 0x3aef00u: goto label_3aef00;
        case 0x3aef04u: goto label_3aef04;
        case 0x3aef08u: goto label_3aef08;
        case 0x3aef0cu: goto label_3aef0c;
        case 0x3aef10u: goto label_3aef10;
        case 0x3aef14u: goto label_3aef14;
        case 0x3aef18u: goto label_3aef18;
        case 0x3aef1cu: goto label_3aef1c;
        case 0x3aef20u: goto label_3aef20;
        case 0x3aef24u: goto label_3aef24;
        case 0x3aef28u: goto label_3aef28;
        case 0x3aef2cu: goto label_3aef2c;
        case 0x3aef30u: goto label_3aef30;
        case 0x3aef34u: goto label_3aef34;
        case 0x3aef38u: goto label_3aef38;
        case 0x3aef3cu: goto label_3aef3c;
        case 0x3aef40u: goto label_3aef40;
        case 0x3aef44u: goto label_3aef44;
        case 0x3aef48u: goto label_3aef48;
        case 0x3aef4cu: goto label_3aef4c;
        case 0x3aef50u: goto label_3aef50;
        case 0x3aef54u: goto label_3aef54;
        case 0x3aef58u: goto label_3aef58;
        case 0x3aef5cu: goto label_3aef5c;
        case 0x3aef60u: goto label_3aef60;
        case 0x3aef64u: goto label_3aef64;
        case 0x3aef68u: goto label_3aef68;
        case 0x3aef6cu: goto label_3aef6c;
        case 0x3aef70u: goto label_3aef70;
        case 0x3aef74u: goto label_3aef74;
        case 0x3aef78u: goto label_3aef78;
        case 0x3aef7cu: goto label_3aef7c;
        case 0x3aef80u: goto label_3aef80;
        case 0x3aef84u: goto label_3aef84;
        case 0x3aef88u: goto label_3aef88;
        case 0x3aef8cu: goto label_3aef8c;
        case 0x3aef90u: goto label_3aef90;
        case 0x3aef94u: goto label_3aef94;
        case 0x3aef98u: goto label_3aef98;
        case 0x3aef9cu: goto label_3aef9c;
        case 0x3aefa0u: goto label_3aefa0;
        case 0x3aefa4u: goto label_3aefa4;
        case 0x3aefa8u: goto label_3aefa8;
        case 0x3aefacu: goto label_3aefac;
        case 0x3aefb0u: goto label_3aefb0;
        case 0x3aefb4u: goto label_3aefb4;
        case 0x3aefb8u: goto label_3aefb8;
        case 0x3aefbcu: goto label_3aefbc;
        case 0x3aefc0u: goto label_3aefc0;
        case 0x3aefc4u: goto label_3aefc4;
        case 0x3aefc8u: goto label_3aefc8;
        case 0x3aefccu: goto label_3aefcc;
        case 0x3aefd0u: goto label_3aefd0;
        case 0x3aefd4u: goto label_3aefd4;
        case 0x3aefd8u: goto label_3aefd8;
        case 0x3aefdcu: goto label_3aefdc;
        case 0x3aefe0u: goto label_3aefe0;
        case 0x3aefe4u: goto label_3aefe4;
        case 0x3aefe8u: goto label_3aefe8;
        case 0x3aefecu: goto label_3aefec;
        case 0x3aeff0u: goto label_3aeff0;
        case 0x3aeff4u: goto label_3aeff4;
        case 0x3aeff8u: goto label_3aeff8;
        case 0x3aeffcu: goto label_3aeffc;
        case 0x3af000u: goto label_3af000;
        case 0x3af004u: goto label_3af004;
        case 0x3af008u: goto label_3af008;
        case 0x3af00cu: goto label_3af00c;
        case 0x3af010u: goto label_3af010;
        case 0x3af014u: goto label_3af014;
        case 0x3af018u: goto label_3af018;
        case 0x3af01cu: goto label_3af01c;
        case 0x3af020u: goto label_3af020;
        case 0x3af024u: goto label_3af024;
        case 0x3af028u: goto label_3af028;
        case 0x3af02cu: goto label_3af02c;
        case 0x3af030u: goto label_3af030;
        case 0x3af034u: goto label_3af034;
        case 0x3af038u: goto label_3af038;
        case 0x3af03cu: goto label_3af03c;
        case 0x3af040u: goto label_3af040;
        case 0x3af044u: goto label_3af044;
        case 0x3af048u: goto label_3af048;
        case 0x3af04cu: goto label_3af04c;
        case 0x3af050u: goto label_3af050;
        case 0x3af054u: goto label_3af054;
        case 0x3af058u: goto label_3af058;
        case 0x3af05cu: goto label_3af05c;
        case 0x3af060u: goto label_3af060;
        case 0x3af064u: goto label_3af064;
        case 0x3af068u: goto label_3af068;
        case 0x3af06cu: goto label_3af06c;
        case 0x3af070u: goto label_3af070;
        case 0x3af074u: goto label_3af074;
        case 0x3af078u: goto label_3af078;
        case 0x3af07cu: goto label_3af07c;
        case 0x3af080u: goto label_3af080;
        case 0x3af084u: goto label_3af084;
        case 0x3af088u: goto label_3af088;
        case 0x3af08cu: goto label_3af08c;
        case 0x3af090u: goto label_3af090;
        case 0x3af094u: goto label_3af094;
        case 0x3af098u: goto label_3af098;
        case 0x3af09cu: goto label_3af09c;
        case 0x3af0a0u: goto label_3af0a0;
        case 0x3af0a4u: goto label_3af0a4;
        case 0x3af0a8u: goto label_3af0a8;
        case 0x3af0acu: goto label_3af0ac;
        case 0x3af0b0u: goto label_3af0b0;
        case 0x3af0b4u: goto label_3af0b4;
        case 0x3af0b8u: goto label_3af0b8;
        case 0x3af0bcu: goto label_3af0bc;
        case 0x3af0c0u: goto label_3af0c0;
        case 0x3af0c4u: goto label_3af0c4;
        case 0x3af0c8u: goto label_3af0c8;
        case 0x3af0ccu: goto label_3af0cc;
        case 0x3af0d0u: goto label_3af0d0;
        case 0x3af0d4u: goto label_3af0d4;
        case 0x3af0d8u: goto label_3af0d8;
        case 0x3af0dcu: goto label_3af0dc;
        case 0x3af0e0u: goto label_3af0e0;
        case 0x3af0e4u: goto label_3af0e4;
        case 0x3af0e8u: goto label_3af0e8;
        case 0x3af0ecu: goto label_3af0ec;
        case 0x3af0f0u: goto label_3af0f0;
        case 0x3af0f4u: goto label_3af0f4;
        case 0x3af0f8u: goto label_3af0f8;
        case 0x3af0fcu: goto label_3af0fc;
        case 0x3af100u: goto label_3af100;
        case 0x3af104u: goto label_3af104;
        case 0x3af108u: goto label_3af108;
        case 0x3af10cu: goto label_3af10c;
        case 0x3af110u: goto label_3af110;
        case 0x3af114u: goto label_3af114;
        case 0x3af118u: goto label_3af118;
        case 0x3af11cu: goto label_3af11c;
        case 0x3af120u: goto label_3af120;
        case 0x3af124u: goto label_3af124;
        case 0x3af128u: goto label_3af128;
        case 0x3af12cu: goto label_3af12c;
        case 0x3af130u: goto label_3af130;
        case 0x3af134u: goto label_3af134;
        case 0x3af138u: goto label_3af138;
        case 0x3af13cu: goto label_3af13c;
        case 0x3af140u: goto label_3af140;
        case 0x3af144u: goto label_3af144;
        case 0x3af148u: goto label_3af148;
        case 0x3af14cu: goto label_3af14c;
        case 0x3af150u: goto label_3af150;
        case 0x3af154u: goto label_3af154;
        case 0x3af158u: goto label_3af158;
        case 0x3af15cu: goto label_3af15c;
        case 0x3af160u: goto label_3af160;
        case 0x3af164u: goto label_3af164;
        case 0x3af168u: goto label_3af168;
        case 0x3af16cu: goto label_3af16c;
        case 0x3af170u: goto label_3af170;
        case 0x3af174u: goto label_3af174;
        case 0x3af178u: goto label_3af178;
        case 0x3af17cu: goto label_3af17c;
        case 0x3af180u: goto label_3af180;
        case 0x3af184u: goto label_3af184;
        case 0x3af188u: goto label_3af188;
        case 0x3af18cu: goto label_3af18c;
        case 0x3af190u: goto label_3af190;
        case 0x3af194u: goto label_3af194;
        case 0x3af198u: goto label_3af198;
        case 0x3af19cu: goto label_3af19c;
        case 0x3af1a0u: goto label_3af1a0;
        case 0x3af1a4u: goto label_3af1a4;
        case 0x3af1a8u: goto label_3af1a8;
        case 0x3af1acu: goto label_3af1ac;
        case 0x3af1b0u: goto label_3af1b0;
        case 0x3af1b4u: goto label_3af1b4;
        case 0x3af1b8u: goto label_3af1b8;
        case 0x3af1bcu: goto label_3af1bc;
        case 0x3af1c0u: goto label_3af1c0;
        case 0x3af1c4u: goto label_3af1c4;
        case 0x3af1c8u: goto label_3af1c8;
        case 0x3af1ccu: goto label_3af1cc;
        case 0x3af1d0u: goto label_3af1d0;
        case 0x3af1d4u: goto label_3af1d4;
        case 0x3af1d8u: goto label_3af1d8;
        case 0x3af1dcu: goto label_3af1dc;
        case 0x3af1e0u: goto label_3af1e0;
        case 0x3af1e4u: goto label_3af1e4;
        case 0x3af1e8u: goto label_3af1e8;
        case 0x3af1ecu: goto label_3af1ec;
        case 0x3af1f0u: goto label_3af1f0;
        case 0x3af1f4u: goto label_3af1f4;
        case 0x3af1f8u: goto label_3af1f8;
        case 0x3af1fcu: goto label_3af1fc;
        case 0x3af200u: goto label_3af200;
        case 0x3af204u: goto label_3af204;
        case 0x3af208u: goto label_3af208;
        case 0x3af20cu: goto label_3af20c;
        case 0x3af210u: goto label_3af210;
        case 0x3af214u: goto label_3af214;
        case 0x3af218u: goto label_3af218;
        case 0x3af21cu: goto label_3af21c;
        case 0x3af220u: goto label_3af220;
        case 0x3af224u: goto label_3af224;
        case 0x3af228u: goto label_3af228;
        case 0x3af22cu: goto label_3af22c;
        case 0x3af230u: goto label_3af230;
        case 0x3af234u: goto label_3af234;
        case 0x3af238u: goto label_3af238;
        case 0x3af23cu: goto label_3af23c;
        case 0x3af240u: goto label_3af240;
        case 0x3af244u: goto label_3af244;
        case 0x3af248u: goto label_3af248;
        case 0x3af24cu: goto label_3af24c;
        case 0x3af250u: goto label_3af250;
        case 0x3af254u: goto label_3af254;
        case 0x3af258u: goto label_3af258;
        case 0x3af25cu: goto label_3af25c;
        case 0x3af260u: goto label_3af260;
        case 0x3af264u: goto label_3af264;
        case 0x3af268u: goto label_3af268;
        case 0x3af26cu: goto label_3af26c;
        case 0x3af270u: goto label_3af270;
        case 0x3af274u: goto label_3af274;
        case 0x3af278u: goto label_3af278;
        case 0x3af27cu: goto label_3af27c;
        default: break;
    }

    ctx->pc = 0x3aeb78u;

label_3aeb78:
    // 0x3aeb78: 0x27bdf630  addiu       $sp, $sp, -0x9D0
    ctx->pc = 0x3aeb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964784));
label_3aeb7c:
    // 0x3aeb7c: 0x7fb00960  sq          $s0, 0x960($sp)
    ctx->pc = 0x3aeb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 16));
label_3aeb80:
    // 0x3aeb80: 0x7fb20940  sq          $s2, 0x940($sp)
    ctx->pc = 0x3aeb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 18));
label_3aeb84:
    // 0x3aeb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aeb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aeb88:
    // 0x3aeb88: 0x7fb10950  sq          $s1, 0x950($sp)
    ctx->pc = 0x3aeb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 17));
label_3aeb8c:
    // 0x3aeb8c: 0x7fb30930  sq          $s3, 0x930($sp)
    ctx->pc = 0x3aeb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 19));
label_3aeb90:
    // 0x3aeb90: 0x7fb40920  sq          $s4, 0x920($sp)
    ctx->pc = 0x3aeb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 20));
label_3aeb94:
    // 0x3aeb94: 0x7fb50910  sq          $s5, 0x910($sp)
    ctx->pc = 0x3aeb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 21));
label_3aeb98:
    // 0x3aeb98: 0x7fb60900  sq          $s6, 0x900($sp)
    ctx->pc = 0x3aeb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 22));
label_3aeb9c:
    // 0x3aeb9c: 0x7fb708f0  sq          $s7, 0x8F0($sp)
    ctx->pc = 0x3aeb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 23));
label_3aeba0:
    // 0x3aeba0: 0x7fbe08e0  sq          $fp, 0x8E0($sp)
    ctx->pc = 0x3aeba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 30));
label_3aeba4:
    // 0x3aeba4: 0xffbf08d0  sd          $ra, 0x8D0($sp)
    ctx->pc = 0x3aeba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 31));
label_3aeba8:
    // 0x3aeba8: 0xe7be09c0  swc1        $f30, 0x9C0($sp)
    ctx->pc = 0x3aeba8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2496), bits); }
label_3aebac:
    // 0x3aebac: 0xe7bd09b8  swc1        $f29, 0x9B8($sp)
    ctx->pc = 0x3aebacu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2488), bits); }
label_3aebb0:
    // 0x3aebb0: 0xe7bc09b0  swc1        $f28, 0x9B0($sp)
    ctx->pc = 0x3aebb0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2480), bits); }
label_3aebb4:
    // 0x3aebb4: 0xe7bb09a8  swc1        $f27, 0x9A8($sp)
    ctx->pc = 0x3aebb4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2472), bits); }
label_3aebb8:
    // 0x3aebb8: 0xe7ba09a0  swc1        $f26, 0x9A0($sp)
    ctx->pc = 0x3aebb8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2464), bits); }
label_3aebbc:
    // 0x3aebbc: 0xe7b90998  swc1        $f25, 0x998($sp)
    ctx->pc = 0x3aebbcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2456), bits); }
label_3aebc0:
    // 0x3aebc0: 0xe7b80990  swc1        $f24, 0x990($sp)
    ctx->pc = 0x3aebc0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2448), bits); }
label_3aebc4:
    // 0x3aebc4: 0xe7b70988  swc1        $f23, 0x988($sp)
    ctx->pc = 0x3aebc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2440), bits); }
label_3aebc8:
    // 0x3aebc8: 0xe7b60980  swc1        $f22, 0x980($sp)
    ctx->pc = 0x3aebc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2432), bits); }
label_3aebcc:
    // 0x3aebcc: 0xe7b50978  swc1        $f21, 0x978($sp)
    ctx->pc = 0x3aebccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2424), bits); }
label_3aebd0:
    // 0x3aebd0: 0xe7b40970  swc1        $f20, 0x970($sp)
    ctx->pc = 0x3aebd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3aebd4:
    // 0x3aebd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3aebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aebd8:
    // 0x3aebd8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aebd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aebdc:
    // 0x3aebdc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aebe0:
    // 0x3aebe0: 0x40f809  jalr        $v0
label_3aebe4:
    if (ctx->pc == 0x3AEBE4u) {
        ctx->pc = 0x3AEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBE0u;
        // 0x3aebe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBE8u;
        goto label_3aebe8;
    }
    ctx->pc = 0x3AEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AEBE8u);
        ctx->pc = 0x3AEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBE0u;
        // 0x3aebe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEBE0u, 0x3AEBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEBE8u;
label_3aebe8:
    // 0x3aebe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3aebe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aebec:
    // 0x3aebec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3aebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3aebf0:
    // 0x3aebf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aebf4:
    // 0x3aebf4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3aebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3aebf8:
    // 0x3aebf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aebfc:
    // 0x3aebfc: 0x0  nop
    ctx->pc = 0x3aebfcu;
    // NOP
label_3aec00:
    // 0x3aec00: 0x0  nop
    ctx->pc = 0x3aec00u;
    // NOP
label_3aec04:
    // 0x3aec04: 0x0  nop
    ctx->pc = 0x3aec04u;
    // NOP
label_3aec08:
    // 0x3aec08: 0x0  nop
    ctx->pc = 0x3aec08u;
    // NOP
label_3aec0c:
    // 0x3aec0c: 0x0  nop
    ctx->pc = 0x3aec0cu;
    // NOP
label_3aec10:
    // 0x3aec10: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3aec14:
    if (ctx->pc == 0x3AEC14u) {
        ctx->pc = 0x3AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC10u;
        // 0x3aec14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC18u;
        goto label_3aec18;
    }
    ctx->pc = 0x3AEC10u;
    {
        const bool branch_taken_0x3aec10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC10u;
        // 0x3aec14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec10) {
            ctx->pc = 0x3AEC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aec00;
        }
    }
    ctx->pc = 0x3AEC18u;
label_3aec18:
    // 0x3aec18: 0xc138ddc  jal         func_4E3770
label_3aec1c:
    if (ctx->pc == 0x3AEC1Cu) {
        ctx->pc = 0x3AEC20u;
        goto label_3aec20;
    }
    ctx->pc = 0x3AEC18u;
    SET_GPR_U32(ctx, 31, 0x3AEC20u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AEC18u, 0x3AEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC20u;
label_3aec20:
    // 0x3aec20: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3aec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3aec24:
    // 0x3aec24: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x3aec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_3aec28:
    // 0x3aec28: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_3aec2c:
    if (ctx->pc == 0x3AEC2Cu) {
        ctx->pc = 0x3AEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC28u;
        // 0x3aec2c: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC30u;
        goto label_3aec30;
    }
    ctx->pc = 0x3AEC28u;
    {
        const bool branch_taken_0x3aec28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC28u;
        // 0x3aec2c: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec28) {
            ctx->pc = 0x3AEC68u;
            goto label_3aec68;
        }
    }
    ctx->pc = 0x3AEC30u;
label_3aec30:
    // 0x3aec30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aec34:
    // 0x3aec34: 0xc0e858c  jal         func_3A1630
label_3aec38:
    if (ctx->pc == 0x3AEC38u) {
        ctx->pc = 0x3AEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC34u;
        // 0x3aec38: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC3Cu;
        goto label_3aec3c;
    }
    ctx->pc = 0x3AEC34u;
    SET_GPR_U32(ctx, 31, 0x3AEC3Cu);
    ctx->pc = 0x3AEC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC34u;
    // 0x3aec38: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AEC34u, 0x3AEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC3Cu;
label_3aec3c:
    // 0x3aec3c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x3aec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3aec40:
    // 0x3aec40: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3aec40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3aec44:
    // 0x3aec44: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3aec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3aec48:
    // 0x3aec48: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3aec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3aec4c:
    // 0x3aec4c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3aec4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3aec50:
    // 0x3aec50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aec50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aec54:
    // 0x3aec54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3aec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3aec58:
    // 0x3aec58: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3aec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3aec5c:
    // 0x3aec5c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3aec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3aec60:
    // 0x3aec60: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3aec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3aec64:
    // 0x3aec64: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x3aec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3aec68:
    // 0x3aec68: 0x1062016e  beq         $v1, $v0, . + 4 + (0x16E << 2)
label_3aec6c:
    if (ctx->pc == 0x3AEC6Cu) {
        ctx->pc = 0x3AEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC68u;
        // 0x3aec6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC70u;
        goto label_3aec70;
    }
    ctx->pc = 0x3AEC68u;
    {
        const bool branch_taken_0x3aec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC68u;
        // 0x3aec6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec68) {
            ctx->pc = 0x3AF224u;
            goto label_3af224;
        }
    }
    ctx->pc = 0x3AEC70u;
label_3aec70:
    // 0x3aec70: 0xc0e9694  jal         func_3A5A50
label_3aec74:
    if (ctx->pc == 0x3AEC74u) {
        ctx->pc = 0x3AEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC70u;
        // 0x3aec74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC78u;
        goto label_3aec78;
    }
    ctx->pc = 0x3AEC70u;
    SET_GPR_U32(ctx, 31, 0x3AEC78u);
    ctx->pc = 0x3AEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC70u;
    // 0x3aec74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AEC70u, 0x3AEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC78u;
label_3aec78:
    // 0x3aec78: 0x1040016a  beqz        $v0, . + 4 + (0x16A << 2)
label_3aec7c:
    if (ctx->pc == 0x3AEC7Cu) {
        ctx->pc = 0x3AEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC78u;
        // 0x3aec7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC80u;
        goto label_3aec80;
    }
    ctx->pc = 0x3AEC78u;
    {
        const bool branch_taken_0x3aec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC78u;
        // 0x3aec7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec78) {
            ctx->pc = 0x3AF224u;
            goto label_3af224;
        }
    }
    ctx->pc = 0x3AEC80u;
label_3aec80:
    // 0x3aec80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3aec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aec84:
    // 0x3aec84: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3aec84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3aec88:
    // 0x3aec88: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3aec8c:
    // 0x3aec8c: 0x40f809  jalr        $v0
label_3aec90:
    if (ctx->pc == 0x3AEC90u) {
        ctx->pc = 0x3AEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC8Cu;
        // 0x3aec90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC94u;
        goto label_3aec94;
    }
    ctx->pc = 0x3AEC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AEC94u);
        ctx->pc = 0x3AEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC8Cu;
        // 0x3aec90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC8Cu, 0x3AEC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEC94u;
label_3aec94:
    // 0x3aec94: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3aec94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3aec98:
    // 0x3aec98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3aec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3aec9c:
    // 0x3aec9c: 0x1040015d  beqz        $v0, . + 4 + (0x15D << 2)
label_3aeca0:
    if (ctx->pc == 0x3AECA0u) {
        ctx->pc = 0x3AECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC9Cu;
        // 0x3aeca0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AECA4u;
        goto label_3aeca4;
    }
    ctx->pc = 0x3AEC9Cu;
    {
        const bool branch_taken_0x3aec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC9Cu;
        // 0x3aeca0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec9c) {
            ctx->pc = 0x3AF214u;
            goto label_3af214;
        }
    }
    ctx->pc = 0x3AECA4u;
label_3aeca4:
    // 0x3aeca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aeca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aeca8:
    // 0x3aeca8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3aeca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3aecac:
    // 0x3aecac: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3aecacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3aecb0:
    // 0x3aecb0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3aecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3aecb4:
    // 0x3aecb4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x3aecb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3aecb8:
    // 0x3aecb8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3aecb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_3aecbc:
    // 0x3aecbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aecc0:
    // 0x3aecc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3aecc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3aecc4:
    // 0x3aecc4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3aecc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3aecc8:
    // 0x3aecc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3aecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aeccc:
    // 0x3aeccc: 0xc043f52  jal         func_10FD48
label_3aecd0:
    if (ctx->pc == 0x3AECD0u) {
        ctx->pc = 0x3AECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECCCu;
        // 0x3aecd0: 0x24a51f68  addiu       $a1, $a1, 0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AECD4u;
        goto label_3aecd4;
    }
    ctx->pc = 0x3AECCCu;
    SET_GPR_U32(ctx, 31, 0x3AECD4u);
    ctx->pc = 0x3AECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AECCCu;
    // 0x3aecd0: 0x24a51f68  addiu       $a1, $a1, 0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FD48u, 0x3AECCCu, 0x3AECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AECD4u;
label_3aecd4:
    // 0x3aecd4: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3aecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3aecd8:
    // 0x3aecd8: 0xc0e92f4  jal         func_3A4BD0
label_3aecdc:
    if (ctx->pc == 0x3AECDCu) {
        ctx->pc = 0x3AECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECD8u;
        // 0x3aecdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AECE0u;
        goto label_3aece0;
    }
    ctx->pc = 0x3AECD8u;
    SET_GPR_U32(ctx, 31, 0x3AECE0u);
    ctx->pc = 0x3AECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AECD8u;
    // 0x3aecdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3AECD8u, 0x3AECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AECE0u;
label_3aece0:
    // 0x3aece0: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3aece0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3aece4:
    // 0x3aece4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3aece4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3aece8:
    // 0x3aece8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3aece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aecec:
    // 0x3aecec: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3aececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3aecf0:
    // 0x3aecf0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3aecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3aecf4:
    // 0x3aecf4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3aecf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3aecf8:
    // 0x3aecf8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3aecfc:
    // 0x3aecfc: 0x40f809  jalr        $v0
label_3aed00:
    if (ctx->pc == 0x3AED00u) {
        ctx->pc = 0x3AED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECFCu;
        // 0x3aed00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AED04u;
        goto label_3aed04;
    }
    ctx->pc = 0x3AECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AED04u);
        ctx->pc = 0x3AED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECFCu;
        // 0x3aed00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AECFCu, 0x3AED04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AED04u;
label_3aed04:
    // 0x3aed04: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3aed04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3aed08:
    // 0x3aed08: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3aed08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3aed0c:
    // 0x3aed0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3aed0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aed10:
    // 0x3aed10: 0x3c04dbff  lui         $a0, 0xDBFF
    ctx->pc = 0x3aed10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56319 << 16));
label_3aed14:
    // 0x3aed14: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3aed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3aed18:
    // 0x3aed18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3aed18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3aed1c:
    // 0x3aed1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3aed1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3aed20:
    // 0x3aed20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aed20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aed24:
    // 0x3aed24: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3aed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_3aed28:
    // 0x3aed28: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x3aed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3aed2c:
    // 0x3aed2c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3aed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3aed30:
    // 0x3aed30: 0xe7a10460  swc1        $f1, 0x460($sp)
    ctx->pc = 0x3aed30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3aed34:
    // 0x3aed34: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x3aed34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_3aed38:
    // 0x3aed38: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3aed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3aed3c:
    // 0x3aed3c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x3aed3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3aed40:
    // 0x3aed40: 0xe7a10468  swc1        $f1, 0x468($sp)
    ctx->pc = 0x3aed40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3aed44:
    // 0x3aed44: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3aed44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3aed48:
    // 0x3aed48: 0xe4d4000c  swc1        $f20, 0xC($a2)
    ctx->pc = 0x3aed48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3aed4c:
    // 0x3aed4c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3aed4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
label_3aed50:
    // 0x3aed50: 0xc7a00414  lwc1        $f0, 0x414($sp)
    ctx->pc = 0x3aed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aed54:
    // 0x3aed54: 0x7ba40460  lq          $a0, 0x460($sp)
    ctx->pc = 0x3aed54u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3aed58:
    // 0x3aed58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3aed58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3aed5c:
    // 0x3aed5c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3aed5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3aed60:
    // 0x3aed60: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x3aed60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_3aed64:
    // 0x3aed64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aed64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aed68:
    // 0x3aed68: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3aed68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3aed6c:
    // 0x3aed6c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3aed6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3aed70:
    // 0x3aed70: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3aed70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aed74:
    // 0x3aed74: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3aed74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aed78:
    // 0x3aed78: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3aed78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3aed7c:
    // 0x3aed7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aed7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aed80:
    // 0x3aed80: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3aed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3aed84:
    // 0x3aed84: 0x0  nop
    ctx->pc = 0x3aed84u;
    // NOP
label_3aed88:
    // 0x3aed88: 0x0  nop
    ctx->pc = 0x3aed88u;
    // NOP
label_3aed8c:
    // 0x3aed8c: 0x460000c4  c1          0xC4
    ctx->pc = 0x3aed8cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_3aed90:
    // 0x3aed90: 0x7fa40450  sq          $a0, 0x450($sp)
    ctx->pc = 0x3aed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 4));
label_3aed94:
    // 0x3aed94: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x3aed94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3aed98:
    // 0x3aed98: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3aed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3aed9c:
    // 0x3aed9c: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3aed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3aeda0:
    // 0x3aeda0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3aeda4:
    if (ctx->pc == 0x3AEDA4u) {
        ctx->pc = 0x3AEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDA0u;
        // 0x3aeda4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEDA8u;
        goto label_3aeda8;
    }
    ctx->pc = 0x3AEDA0u;
    {
        const bool branch_taken_0x3aeda0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDA0u;
        // 0x3aeda4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeda0) {
            ctx->pc = 0x3AEDB0u;
            goto label_3aedb0;
        }
    }
    ctx->pc = 0x3AEDA8u;
label_3aeda8:
    // 0x3aeda8: 0x1000011e  b           . + 4 + (0x11E << 2)
label_3aedac:
    if (ctx->pc == 0x3AEDACu) {
        ctx->pc = 0x3AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDA8u;
        // 0x3aedac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEDB0u;
        goto label_3aedb0;
    }
    ctx->pc = 0x3AEDA8u;
    {
        const bool branch_taken_0x3aeda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDA8u;
        // 0x3aedac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeda8) {
            ctx->pc = 0x3AF224u;
            goto label_3af224;
        }
    }
    ctx->pc = 0x3AEDB0u;
label_3aedb0:
    // 0x3aedb0: 0xc7a00420  lwc1        $f0, 0x420($sp)
    ctx->pc = 0x3aedb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aedb4:
    // 0x3aedb4: 0xc7a10424  lwc1        $f1, 0x424($sp)
    ctx->pc = 0x3aedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3aedb8:
    // 0x3aedb8: 0xc7a20428  lwc1        $f2, 0x428($sp)
    ctx->pc = 0x3aedb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3aedbc:
    // 0x3aedbc: 0x0  nop
    ctx->pc = 0x3aedbcu;
    // NOP
label_3aedc0:
    // 0x3aedc0: 0x0  nop
    ctx->pc = 0x3aedc0u;
    // NOP
label_3aedc4:
    // 0x3aedc4: 0x46030643  div.s       $f25, $f0, $f3
    ctx->pc = 0x3aedc4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_3aedc8:
    // 0x3aedc8: 0x0  nop
    ctx->pc = 0x3aedc8u;
    // NOP
label_3aedcc:
    // 0x3aedcc: 0x0  nop
    ctx->pc = 0x3aedccu;
    // NOP
label_3aedd0:
    // 0x3aedd0: 0x46030e03  div.s       $f24, $f1, $f3
    ctx->pc = 0x3aedd0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
label_3aedd4:
    // 0x3aedd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3aedd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3aedd8:
    // 0x3aedd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aedd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aeddc:
    // 0x3aeddc: 0x0  nop
    ctx->pc = 0x3aeddcu;
    // NOP
label_3aede0:
    // 0x3aede0: 0x0  nop
    ctx->pc = 0x3aede0u;
    // NOP
label_3aede4:
    // 0x3aede4: 0x460315c3  div.s       $f23, $f2, $f3
    ctx->pc = 0x3aede4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_3aede8:
    // 0x3aede8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3aede8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3aedec:
    // 0x3aedec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3aedecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3aedf0:
    // 0x3aedf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aedf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aedf4:
    // 0x3aedf4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3aedf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3aedf8:
    // 0x3aedf8: 0xe7b90440  swc1        $f25, 0x440($sp)
    ctx->pc = 0x3aedf8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3aedfc:
    // 0x3aedfc: 0xe7a0044c  swc1        $f0, 0x44C($sp)
    ctx->pc = 0x3aedfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1100), bits); }
label_3aee00:
    // 0x3aee00: 0xe7b80444  swc1        $f24, 0x444($sp)
    ctx->pc = 0x3aee00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3aee04:
    // 0x3aee04: 0xe7b70448  swc1        $f23, 0x448($sp)
    ctx->pc = 0x3aee04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3aee08:
    // 0x3aee08: 0xe7a0045c  swc1        $f0, 0x45C($sp)
    ctx->pc = 0x3aee08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1116), bits); }
label_3aee0c:
    // 0x3aee0c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3aee0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3aee10:
    // 0x3aee10: 0xe7b90450  swc1        $f25, 0x450($sp)
    ctx->pc = 0x3aee10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3aee14:
    // 0x3aee14: 0xe7b80454  swc1        $f24, 0x454($sp)
    ctx->pc = 0x3aee14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3aee18:
    // 0x3aee18: 0xe7b70458  swc1        $f23, 0x458($sp)
    ctx->pc = 0x3aee18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3aee1c:
    // 0x3aee1c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3aee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3aee20:
    // 0x3aee20: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3aee20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3aee24:
    // 0x3aee24: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3aee24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3aee28:
    // 0x3aee28: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3aee28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3aee2c:
    // 0x3aee2c: 0xc7a00418  lwc1        $f0, 0x418($sp)
    ctx->pc = 0x3aee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aee30:
    // 0x3aee30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3aee30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3aee34:
    // 0x3aee34: 0x0  nop
    ctx->pc = 0x3aee34u;
    // NOP
label_3aee38:
    // 0x3aee38: 0x450000af  bc1f        . + 4 + (0xAF << 2)
label_3aee3c:
    if (ctx->pc == 0x3AEE3Cu) {
        ctx->pc = 0x3AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE38u;
        // 0x3aee3c: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEE40u;
        goto label_3aee40;
    }
    ctx->pc = 0x3AEE38u;
    {
        const bool branch_taken_0x3aee38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE38u;
        // 0x3aee3c: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee38) {
            ctx->pc = 0x3AF0F8u;
            goto label_3af0f8;
        }
    }
    ctx->pc = 0x3AEE40u;
label_3aee40:
    // 0x3aee40: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x3aee40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3aee44:
    // 0x3aee44: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3aee44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3aee48:
    // 0x3aee48: 0x24b5b8b8  addiu       $s5, $a1, -0x4748
    ctx->pc = 0x3aee48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_3aee4c:
    // 0x3aee4c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3aee4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3aee50:
    // 0x3aee50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aee50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aee54:
    // 0x3aee54: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3aee54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3aee58:
    // 0x3aee58: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3aee58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aee5c:
    // 0x3aee5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3aee5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aee60:
    // 0x3aee60: 0x7fa40450  sq          $a0, 0x450($sp)
    ctx->pc = 0x3aee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 4));
label_3aee64:
    // 0x3aee64: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3aee64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3aee68:
    // 0x3aee68: 0x4600a746  mov.s       $f29, $f20
    ctx->pc = 0x3aee68u;
    ctx->f[29] = FPU_MOV_S(ctx->f[20]);
label_3aee6c:
    // 0x3aee6c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3aee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3aee70:
    // 0x3aee70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3aee70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aee74:
    // 0x3aee74: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3aee74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3aee78:
    // 0x3aee78: 0x27b60440  addiu       $s6, $sp, 0x440
    ctx->pc = 0x3aee78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3aee7c:
    // 0x3aee7c: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3aee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3aee80:
    // 0x3aee80: 0x27be0850  addiu       $fp, $sp, 0x850
    ctx->pc = 0x3aee80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3aee84:
    // 0x3aee84: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3aee84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3aee88:
    // 0x3aee88: 0x27b70890  addiu       $s7, $sp, 0x890
    ctx->pc = 0x3aee88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3aee8c:
    // 0x3aee8c: 0x27a20480  addiu       $v0, $sp, 0x480
    ctx->pc = 0x3aee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3aee90:
    // 0x3aee90: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3aee90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3aee94:
    // 0x3aee94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aee94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aee98:
    // 0x3aee98: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3aee98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3aee9c:
    // 0x3aee9c: 0xafa208c0  sw          $v0, 0x8C0($sp)
    ctx->pc = 0x3aee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 2));
label_3aeea0:
    // 0x3aeea0: 0x27b404b0  addiu       $s4, $sp, 0x4B0
    ctx->pc = 0x3aeea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3aeea4:
    // 0x3aeea4: 0x27a20880  addiu       $v0, $sp, 0x880
    ctx->pc = 0x3aeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3aeea8:
    // 0x3aeea8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3aeea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3aeeac:
    // 0x3aeeac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aeeacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aeeb0:
    // 0x3aeeb0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3aeeb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3aeeb4:
    // 0x3aeeb4: 0xafa208c4  sw          $v0, 0x8C4($sp)
    ctx->pc = 0x3aeeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2244), GPR_U32(ctx, 2));
label_3aeeb8:
    // 0x3aeeb8: 0x27b30470  addiu       $s3, $sp, 0x470
    ctx->pc = 0x3aeeb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3aeebc:
    // 0x3aeebc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3aeebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3aeec0:
    // 0x3aeec0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3aeec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3aeec4:
    // 0x3aeec4: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3aeec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3aeec8:
    // 0x3aeec8: 0xc6590000  lwc1        $f25, 0x0($s2)
    ctx->pc = 0x3aeec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3aeecc:
    // 0x3aeecc: 0xc6580004  lwc1        $f24, 0x4($s2)
    ctx->pc = 0x3aeeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3aeed0:
    // 0x3aeed0: 0xc6570008  lwc1        $f23, 0x8($s2)
    ctx->pc = 0x3aeed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3aeed4:
    // 0x3aeed4: 0x0  nop
    ctx->pc = 0x3aeed4u;
    // NOP
label_3aeed8:
    // 0x3aeed8: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x3aeed8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3aeedc:
    // 0x3aeedc: 0x0  nop
    ctx->pc = 0x3aeedcu;
    // NOP
label_3aeee0:
    // 0x3aeee0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3aeee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3aeee4:
    // 0x3aeee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aeee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aeee8:
    // 0x3aeee8: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x3aeee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_3aeeec:
    // 0x3aeeec: 0xc0cd518  jal         func_335460
label_3aeef0:
    if (ctx->pc == 0x3AEEF0u) {
        ctx->pc = 0x3AEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEECu;
        // 0x3aeef0: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEEF4u;
        goto label_3aeef4;
    }
    ctx->pc = 0x3AEEECu;
    SET_GPR_U32(ctx, 31, 0x3AEEF4u);
    ctx->pc = 0x3AEEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEEECu;
    // 0x3aeef0: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AEEECu, 0x3AEEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEEF4u;
label_3aeef4:
    // 0x3aeef4: 0x461aa502  mul.s       $f20, $f20, $f26
    ctx->pc = 0x3aeef4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
label_3aeef8:
    // 0x3aeef8: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3aeef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3aeefc:
    // 0x3aeefc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aeefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aef00:
    // 0x3aef00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aef00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aef04:
    // 0x3aef04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aef08:
    // 0x3aef08: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3aef08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3aef0c:
    // 0x3aef0c: 0xc0cd518  jal         func_335460
label_3aef10:
    if (ctx->pc == 0x3AEF10u) {
        ctx->pc = 0x3AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF0Cu;
        // 0x3aef10: 0x4600a580  add.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF14u;
        goto label_3aef14;
    }
    ctx->pc = 0x3AEF0Cu;
    SET_GPR_U32(ctx, 31, 0x3AEF14u);
    ctx->pc = 0x3AEF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF0Cu;
    // 0x3aef10: 0x4600a580  add.s       $f22, $f20, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AEF0Cu, 0x3AEF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF14u;
label_3aef14:
    // 0x3aef14: 0x461c0542  mul.s       $f21, $f0, $f28
    ctx->pc = 0x3aef14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_3aef18:
    // 0x3aef18: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3aef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3aef1c:
    // 0x3aef1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aef1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aef20:
    // 0x3aef20: 0x4619b502  mul.s       $f20, $f22, $f25
    ctx->pc = 0x3aef20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
label_3aef24:
    // 0x3aef24: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x3aef24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
label_3aef28:
    // 0x3aef28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aef2c:
    // 0x3aef2c: 0xc0cd518  jal         func_335460
label_3aef30:
    if (ctx->pc == 0x3AEF30u) {
        ctx->pc = 0x3AEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF2Cu;
        // 0x3aef30: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF34u;
        goto label_3aef34;
    }
    ctx->pc = 0x3AEF2Cu;
    SET_GPR_U32(ctx, 31, 0x3AEF34u);
    ctx->pc = 0x3AEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF2Cu;
    // 0x3aef30: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AEF2Cu, 0x3AEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF34u;
label_3aef34:
    // 0x3aef34: 0x4618b042  mul.s       $f1, $f22, $f24
    ctx->pc = 0x3aef34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
label_3aef38:
    // 0x3aef38: 0x8fa708c0  lw          $a3, 0x8C0($sp)
    ctx->pc = 0x3aef38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2240)));
label_3aef3c:
    // 0x3aef3c: 0x4617b082  mul.s       $f2, $f22, $f23
    ctx->pc = 0x3aef3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
label_3aef40:
    // 0x3aef40: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3aef40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3aef44:
    // 0x3aef44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aef44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aef48:
    // 0x3aef48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3aef48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aef4c:
    // 0x3aef4c: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x3aef4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3aef50:
    // 0x3aef50: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3aef50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3aef54:
    // 0x3aef54: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x3aef54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_3aef58:
    // 0x3aef58: 0x7a080020  lq          $t0, 0x20($s0)
    ctx->pc = 0x3aef58u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3aef5c:
    // 0x3aef5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3aef5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aef60:
    // 0x3aef60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3aef60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3aef64:
    // 0x3aef64: 0xe7a20478  swc1        $f2, 0x478($sp)
    ctx->pc = 0x3aef64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
label_3aef68:
    // 0x3aef68: 0xe7a10474  swc1        $f1, 0x474($sp)
    ctx->pc = 0x3aef68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1140), bits); }
label_3aef6c:
    // 0x3aef6c: 0xe67d000c  swc1        $f29, 0xC($s3)
    ctx->pc = 0x3aef6cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3aef70:
    // 0x3aef70: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3aef70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3aef74:
    // 0x3aef74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aef74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aef78:
    // 0x3aef78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aef78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aef7c:
    // 0x3aef7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3aef7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aef80:
    // 0x3aef80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3aef80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aef84:
    // 0x3aef84: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3aef84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aef88:
    // 0x3aef88: 0x7fa80470  sq          $t0, 0x470($sp)
    ctx->pc = 0x3aef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 8));
label_3aef8c:
    // 0x3aef8c: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3aef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3aef90:
    // 0x3aef90: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3aef90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3aef94:
    // 0x3aef94: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3aef94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3aef98:
    // 0x3aef98: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3aef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3aef9c:
    // 0x3aef9c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3aef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3aefa0:
    // 0x3aefa0: 0xc0e9fa6  jal         func_3A7E98
label_3aefa4:
    if (ctx->pc == 0x3AEFA4u) {
        ctx->pc = 0x3AEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFA0u;
        // 0x3aefa4: 0xafa20480  sw          $v0, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEFA8u;
        goto label_3aefa8;
    }
    ctx->pc = 0x3AEFA0u;
    SET_GPR_U32(ctx, 31, 0x3AEFA8u);
    ctx->pc = 0x3AEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEFA0u;
    // 0x3aefa4: 0xafa20480  sw          $v0, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AEFA0u, 0x3AEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEFA8u;
label_3aefa8:
    // 0x3aefa8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3aefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3aefac:
    // 0x3aefac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aefacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aefb0:
    // 0x3aefb0: 0xc0f15bc  jal         func_3C56F0
label_3aefb4:
    if (ctx->pc == 0x3AEFB4u) {
        ctx->pc = 0x3AEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFB0u;
        // 0x3aefb4: 0x24441f80  addiu       $a0, $v0, 0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEFB8u;
        goto label_3aefb8;
    }
    ctx->pc = 0x3AEFB0u;
    SET_GPR_U32(ctx, 31, 0x3AEFB8u);
    ctx->pc = 0x3AEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEFB0u;
    // 0x3aefb4: 0x24441f80  addiu       $a0, $v0, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AEFB0u, 0x3AEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEFB8u;
label_3aefb8:
    // 0x3aefb8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x3aefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3aefbc:
    // 0x3aefbc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3aefbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3aefc0:
    // 0x3aefc0: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x3aefc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3aefc4:
    // 0x3aefc4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_3aefc8:
    if (ctx->pc == 0x3AEFC8u) {
        ctx->pc = 0x3AEFCCu;
        goto label_3aefcc;
    }
    ctx->pc = 0x3AEFC4u;
    {
        const bool branch_taken_0x3aefc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aefc4) {
            ctx->pc = 0x3AEED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aeed8;
        }
    }
    ctx->pc = 0x3AEFCCu;
label_3aefcc:
    // 0x3aefcc: 0x4600df06  mov.s       $f28, $f27
    ctx->pc = 0x3aefccu;
    ctx->f[28] = FPU_MOV_S(ctx->f[27]);
label_3aefd0:
    // 0x3aefd0: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3aefd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aefd4:
    // 0x3aefd4: 0x4600d6c6  mov.s       $f27, $f26
    ctx->pc = 0x3aefd4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[26]);
label_3aefd8:
    // 0x3aefd8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3aefd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3aefdc:
    // 0x3aefdc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3aefdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3aefe0:
    // 0x3aefe0: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3aefe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3aefe4:
    // 0x3aefe4: 0x8fb308c4  lw          $s3, 0x8C4($sp)
    ctx->pc = 0x3aefe4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2244)));
label_3aefe8:
    // 0x3aefe8: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x3aefe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aefec:
    // 0x3aefec: 0x4600ee86  mov.s       $f26, $f29
    ctx->pc = 0x3aefecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[29]);
label_3aeff0:
    // 0x3aeff0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3aeff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aeff4:
    // 0x3aeff4: 0x0  nop
    ctx->pc = 0x3aeff4u;
    // NOP
label_3aeff8:
    // 0x3aeff8: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x3aeff8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3aeffc:
    // 0x3aeffc: 0x0  nop
    ctx->pc = 0x3aeffcu;
    // NOP
label_3af000:
    // 0x3af000: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3af000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3af004:
    // 0x3af004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3af004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3af008:
    // 0x3af008: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x3af008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_3af00c:
    // 0x3af00c: 0xc0cd518  jal         func_335460
label_3af010:
    if (ctx->pc == 0x3AF010u) {
        ctx->pc = 0x3AF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF00Cu;
        // 0x3af010: 0x4600db46  mov.s       $f13, $f27 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF014u;
        goto label_3af014;
    }
    ctx->pc = 0x3AF00Cu;
    SET_GPR_U32(ctx, 31, 0x3AF014u);
    ctx->pc = 0x3AF010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF00Cu;
    // 0x3af010: 0x4600db46  mov.s       $f13, $f27 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF00Cu, 0x3AF014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF014u;
label_3af014:
    // 0x3af014: 0x461ba502  mul.s       $f20, $f20, $f27
    ctx->pc = 0x3af014u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
label_3af018:
    // 0x3af018: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3af018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3af01c:
    // 0x3af01c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3af01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3af020:
    // 0x3af020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3af020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3af024:
    // 0x3af024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3af024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3af028:
    // 0x3af028: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x3af028u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
label_3af02c:
    // 0x3af02c: 0xc0cd518  jal         func_335460
label_3af030:
    if (ctx->pc == 0x3AF030u) {
        ctx->pc = 0x3AF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF02Cu;
        // 0x3af030: 0x4600a580  add.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF034u;
        goto label_3af034;
    }
    ctx->pc = 0x3AF02Cu;
    SET_GPR_U32(ctx, 31, 0x3AF034u);
    ctx->pc = 0x3AF030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF02Cu;
    // 0x3af030: 0x4600a580  add.s       $f22, $f20, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF02Cu, 0x3AF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF034u;
label_3af034:
    // 0x3af034: 0x461e0542  mul.s       $f21, $f0, $f30
    ctx->pc = 0x3af034u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
label_3af038:
    // 0x3af038: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3af038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3af03c:
    // 0x3af03c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3af03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3af040:
    // 0x3af040: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x3af040u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_3af044:
    // 0x3af044: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3af044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3af048:
    // 0x3af048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3af048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3af04c:
    // 0x3af04c: 0x4619b502  mul.s       $f20, $f22, $f25
    ctx->pc = 0x3af04cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
label_3af050:
    // 0x3af050: 0xc0cd518  jal         func_335460
label_3af054:
    if (ctx->pc == 0x3AF054u) {
        ctx->pc = 0x3AF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF050u;
        // 0x3af054: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF058u;
        goto label_3af058;
    }
    ctx->pc = 0x3AF050u;
    SET_GPR_U32(ctx, 31, 0x3AF058u);
    ctx->pc = 0x3AF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF050u;
    // 0x3af054: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF050u, 0x3AF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF058u;
label_3af058:
    // 0x3af058: 0x4618b042  mul.s       $f1, $f22, $f24
    ctx->pc = 0x3af058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
label_3af05c:
    // 0x3af05c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3af05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af060:
    // 0x3af060: 0x4617b082  mul.s       $f2, $f22, $f23
    ctx->pc = 0x3af060u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
label_3af064:
    // 0x3af064: 0xe7b40880  swc1        $f20, 0x880($sp)
    ctx->pc = 0x3af064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2176), bits); }
label_3af068:
    // 0x3af068: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3af068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3af06c:
    // 0x3af06c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3af070:
    // 0x3af070: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x3af070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3af074:
    // 0x3af074: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3af074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3af078:
    // 0x3af078: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x3af078u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_3af07c:
    // 0x3af07c: 0x7a080020  lq          $t0, 0x20($s0)
    ctx->pc = 0x3af07cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3af080:
    // 0x3af080: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3af080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3af084:
    // 0x3af084: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3af084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3af088:
    // 0x3af088: 0xe7a20888  swc1        $f2, 0x888($sp)
    ctx->pc = 0x3af088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2184), bits); }
label_3af08c:
    // 0x3af08c: 0xe7a10884  swc1        $f1, 0x884($sp)
    ctx->pc = 0x3af08cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2180), bits); }
label_3af090:
    // 0x3af090: 0xe67a000c  swc1        $f26, 0xC($s3)
    ctx->pc = 0x3af090u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3af094:
    // 0x3af094: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3af094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3af098:
    // 0x3af098: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3af098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3af09c:
    // 0x3af09c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3af09cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3af0a0:
    // 0x3af0a0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3af0a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3af0a4:
    // 0x3af0a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3af0a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3af0a8:
    // 0x3af0a8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3af0a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3af0ac:
    // 0x3af0ac: 0x7fa80880  sq          $t0, 0x880($sp)
    ctx->pc = 0x3af0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 8));
label_3af0b0:
    // 0x3af0b0: 0x7fa30890  sq          $v1, 0x890($sp)
    ctx->pc = 0x3af0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 3));
label_3af0b4:
    // 0x3af0b4: 0x7fa30850  sq          $v1, 0x850($sp)
    ctx->pc = 0x3af0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 3));
label_3af0b8:
    // 0x3af0b8: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3af0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3af0bc:
    // 0x3af0bc: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3af0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3af0c0:
    // 0x3af0c0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3af0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3af0c4:
    // 0x3af0c4: 0xc0e9fa6  jal         func_3A7E98
label_3af0c8:
    if (ctx->pc == 0x3AF0C8u) {
        ctx->pc = 0x3AF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0C4u;
        // 0x3af0c8: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0CCu;
        goto label_3af0cc;
    }
    ctx->pc = 0x3AF0C4u;
    SET_GPR_U32(ctx, 31, 0x3AF0CCu);
    ctx->pc = 0x3AF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF0C4u;
    // 0x3af0c8: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AF0C4u, 0x3AF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF0CCu;
label_3af0cc:
    // 0x3af0cc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3af0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3af0d0:
    // 0x3af0d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3af0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af0d4:
    // 0x3af0d4: 0xc0f15bc  jal         func_3C56F0
label_3af0d8:
    if (ctx->pc == 0x3AF0D8u) {
        ctx->pc = 0x3AF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0D4u;
        // 0x3af0d8: 0x24441f80  addiu       $a0, $v0, 0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0DCu;
        goto label_3af0dc;
    }
    ctx->pc = 0x3AF0D4u;
    SET_GPR_U32(ctx, 31, 0x3AF0DCu);
    ctx->pc = 0x3AF0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF0D4u;
    // 0x3af0d8: 0x24441f80  addiu       $a0, $v0, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AF0D4u, 0x3AF0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF0DCu;
label_3af0dc:
    // 0x3af0dc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x3af0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3af0e0:
    // 0x3af0e0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3af0e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3af0e4:
    // 0x3af0e4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x3af0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3af0e8:
    // 0x3af0e8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_3af0ec:
    if (ctx->pc == 0x3AF0ECu) {
        ctx->pc = 0x3AF0F0u;
        goto label_3af0f0;
    }
    ctx->pc = 0x3AF0E8u;
    {
        const bool branch_taken_0x3af0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af0e8) {
            ctx->pc = 0x3AEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aeff8;
        }
    }
    ctx->pc = 0x3AF0F0u;
label_3af0f0:
    // 0x3af0f0: 0x10000049  b           . + 4 + (0x49 << 2)
label_3af0f4:
    if (ctx->pc == 0x3AF0F4u) {
        ctx->pc = 0x3AF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0F0u;
        // 0x3af0f4: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF0F8u;
        goto label_3af0f8;
    }
    ctx->pc = 0x3AF0F0u;
    {
        const bool branch_taken_0x3af0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0F0u;
        // 0x3af0f4: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0f0) {
            ctx->pc = 0x3AF218u;
            goto label_3af218;
        }
    }
    ctx->pc = 0x3AF0F8u;
label_3af0f8:
    // 0x3af0f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3af0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3af0fc:
    // 0x3af0fc: 0xc6590000  lwc1        $f25, 0x0($s2)
    ctx->pc = 0x3af0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3af100:
    // 0x3af100: 0xc6580004  lwc1        $f24, 0x4($s2)
    ctx->pc = 0x3af100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3af104:
    // 0x3af104: 0x2455b8b8  addiu       $s5, $v0, -0x4748
    ctx->pc = 0x3af104u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3af108:
    // 0x3af108: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3af108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3af10c:
    // 0x3af10c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3af10cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3af110:
    // 0x3af110: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3af110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3af114:
    // 0x3af114: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x3af114u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_3af118:
    // 0x3af118: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3af118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af11c:
    // 0x3af11c: 0x27be0850  addiu       $fp, $sp, 0x850
    ctx->pc = 0x3af11cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3af120:
    // 0x3af120: 0x27b70890  addiu       $s7, $sp, 0x890
    ctx->pc = 0x3af120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3af124:
    // 0x3af124: 0x27b40440  addiu       $s4, $sp, 0x440
    ctx->pc = 0x3af124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3af128:
    // 0x3af128: 0x27b30880  addiu       $s3, $sp, 0x880
    ctx->pc = 0x3af128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3af12c:
    // 0x3af12c: 0x0  nop
    ctx->pc = 0x3af12cu;
    // NOP
label_3af130:
    // 0x3af130: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x3af130u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3af134:
    // 0x3af134: 0x0  nop
    ctx->pc = 0x3af134u;
    // NOP
label_3af138:
    // 0x3af138: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3af138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3af13c:
    // 0x3af13c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3af13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3af140:
    // 0x3af140: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3af140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3af144:
    // 0x3af144: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3af144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3af148:
    // 0x3af148: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3af148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3af14c:
    // 0x3af14c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3af14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3af150:
    // 0x3af150: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3af150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3af154:
    // 0x3af154: 0xc0cd518  jal         func_335460
label_3af158:
    if (ctx->pc == 0x3AF158u) {
        ctx->pc = 0x3AF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF154u;
        // 0x3af158: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF15Cu;
        goto label_3af15c;
    }
    ctx->pc = 0x3AF154u;
    SET_GPR_U32(ctx, 31, 0x3AF15Cu);
    ctx->pc = 0x3AF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF154u;
    // 0x3af158: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF154u, 0x3AF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF15Cu;
label_3af15c:
    // 0x3af15c: 0x461aa502  mul.s       $f20, $f20, $f26
    ctx->pc = 0x3af15cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
label_3af160:
    // 0x3af160: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3af160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af164:
    // 0x3af164: 0x4600a580  add.s       $f22, $f20, $f0
    ctx->pc = 0x3af164u;
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3af168:
    // 0x3af168: 0x4600b547  neg.s       $f21, $f22
    ctx->pc = 0x3af168u;
    ctx->f[21] = FPU_NEG_S(ctx->f[22]);
label_3af16c:
    // 0x3af16c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3af16cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3af170:
    // 0x3af170: 0xc0cd518  jal         func_335460
label_3af174:
    if (ctx->pc == 0x3AF174u) {
        ctx->pc = 0x3AF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF170u;
        // 0x3af174: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF178u;
        goto label_3af178;
    }
    ctx->pc = 0x3AF170u;
    SET_GPR_U32(ctx, 31, 0x3AF178u);
    ctx->pc = 0x3AF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF170u;
    // 0x3af174: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF170u, 0x3AF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF178u;
label_3af178:
    // 0x3af178: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3af178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3af17c:
    // 0x3af17c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3af17cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3af180:
    // 0x3af180: 0x46190502  mul.s       $f20, $f0, $f25
    ctx->pc = 0x3af180u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_3af184:
    // 0x3af184: 0xc0cd518  jal         func_335460
label_3af188:
    if (ctx->pc == 0x3AF188u) {
        ctx->pc = 0x3AF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF184u;
        // 0x3af188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF18Cu;
        goto label_3af18c;
    }
    ctx->pc = 0x3AF184u;
    SET_GPR_U32(ctx, 31, 0x3AF18Cu);
    ctx->pc = 0x3AF188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF184u;
    // 0x3af188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF184u, 0x3AF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF18Cu;
label_3af18c:
    // 0x3af18c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x3af18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3af190:
    // 0x3af190: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x3af190u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3af194:
    // 0x3af194: 0xe7b40880  swc1        $f20, 0x880($sp)
    ctx->pc = 0x3af194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2176), bits); }
label_3af198:
    // 0x3af198: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3af198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3af19c:
    // 0x3af19c: 0xafa00888  sw          $zero, 0x888($sp)
    ctx->pc = 0x3af19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2184), GPR_U32(ctx, 0));
label_3af1a0:
    // 0x3af1a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3af1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3af1a4:
    // 0x3af1a4: 0xe7a00884  swc1        $f0, 0x884($sp)
    ctx->pc = 0x3af1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2180), bits); }
label_3af1a8:
    // 0x3af1a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3af1ac:
    // 0x3af1ac: 0xe677000c  swc1        $f23, 0xC($s3)
    ctx->pc = 0x3af1acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3af1b0:
    // 0x3af1b0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3af1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3af1b4:
    // 0x3af1b4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3af1b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3af1b8:
    // 0x3af1b8: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3af1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3af1bc:
    // 0x3af1bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3af1bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3af1c0:
    // 0x3af1c0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3af1c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3af1c4:
    // 0x3af1c4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3af1c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3af1c8:
    // 0x3af1c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3af1c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3af1cc:
    // 0x3af1cc: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x3af1ccu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_3af1d0:
    // 0x3af1d0: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3af1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3af1d4:
    // 0x3af1d4: 0x7fa80890  sq          $t0, 0x890($sp)
    ctx->pc = 0x3af1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 8));
label_3af1d8:
    // 0x3af1d8: 0x7fa80850  sq          $t0, 0x850($sp)
    ctx->pc = 0x3af1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 8));
label_3af1dc:
    // 0x3af1dc: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3af1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3af1e0:
    // 0x3af1e0: 0x7fa80860  sq          $t0, 0x860($sp)
    ctx->pc = 0x3af1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 8));
label_3af1e4:
    // 0x3af1e4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3af1e8:
    // 0x3af1e8: 0xc0e9fa6  jal         func_3A7E98
label_3af1ec:
    if (ctx->pc == 0x3AF1ECu) {
        ctx->pc = 0x3AF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1E8u;
        // 0x3af1ec: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF1F0u;
        goto label_3af1f0;
    }
    ctx->pc = 0x3AF1E8u;
    SET_GPR_U32(ctx, 31, 0x3AF1F0u);
    ctx->pc = 0x3AF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1E8u;
    // 0x3af1ec: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AF1E8u, 0x3AF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1F0u;
label_3af1f0:
    // 0x3af1f0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3af1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3af1f4:
    // 0x3af1f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3af1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3af1f8:
    // 0x3af1f8: 0xc0f15bc  jal         func_3C56F0
label_3af1fc:
    if (ctx->pc == 0x3AF1FCu) {
        ctx->pc = 0x3AF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1F8u;
        // 0x3af1fc: 0x24441f80  addiu       $a0, $v0, 0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF200u;
        goto label_3af200;
    }
    ctx->pc = 0x3AF1F8u;
    SET_GPR_U32(ctx, 31, 0x3AF200u);
    ctx->pc = 0x3AF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1F8u;
    // 0x3af1fc: 0x24441f80  addiu       $a0, $v0, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AF1F8u, 0x3AF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF200u;
label_3af200:
    // 0x3af200: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x3af200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3af204:
    // 0x3af204: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3af204u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3af208:
    // 0x3af208: 0x2e220011  sltiu       $v0, $s1, 0x11
    ctx->pc = 0x3af208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_3af20c:
    // 0x3af20c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_3af210:
    if (ctx->pc == 0x3AF210u) {
        ctx->pc = 0x3AF214u;
        goto label_3af214;
    }
    ctx->pc = 0x3AF20Cu;
    {
        const bool branch_taken_0x3af20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af20c) {
            ctx->pc = 0x3AF130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af130;
        }
    }
    ctx->pc = 0x3AF214u;
label_3af214:
    // 0x3af214: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3af214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3af218:
    // 0x3af218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3af218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af21c:
    // 0x3af21c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3af21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3af220:
    // 0x3af220: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3af220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_3af224:
    // 0x3af224: 0x7bb00960  lq          $s0, 0x960($sp)
    ctx->pc = 0x3af224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_3af228:
    // 0x3af228: 0x7bb10950  lq          $s1, 0x950($sp)
    ctx->pc = 0x3af228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3af22c:
    // 0x3af22c: 0x7bb20940  lq          $s2, 0x940($sp)
    ctx->pc = 0x3af22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3af230:
    // 0x3af230: 0x7bb30930  lq          $s3, 0x930($sp)
    ctx->pc = 0x3af230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3af234:
    // 0x3af234: 0x7bb40920  lq          $s4, 0x920($sp)
    ctx->pc = 0x3af234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3af238:
    // 0x3af238: 0x7bb50910  lq          $s5, 0x910($sp)
    ctx->pc = 0x3af238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3af23c:
    // 0x3af23c: 0x7bb60900  lq          $s6, 0x900($sp)
    ctx->pc = 0x3af23cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3af240:
    // 0x3af240: 0x7bb708f0  lq          $s7, 0x8F0($sp)
    ctx->pc = 0x3af240u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3af244:
    // 0x3af244: 0x7bbe08e0  lq          $fp, 0x8E0($sp)
    ctx->pc = 0x3af244u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3af248:
    // 0x3af248: 0xdfbf08d0  ld          $ra, 0x8D0($sp)
    ctx->pc = 0x3af248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
label_3af24c:
    // 0x3af24c: 0xc7be09c0  lwc1        $f30, 0x9C0($sp)
    ctx->pc = 0x3af24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3af250:
    // 0x3af250: 0xc7bd09b8  lwc1        $f29, 0x9B8($sp)
    ctx->pc = 0x3af250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3af254:
    // 0x3af254: 0xc7bc09b0  lwc1        $f28, 0x9B0($sp)
    ctx->pc = 0x3af254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3af258:
    // 0x3af258: 0xc7bb09a8  lwc1        $f27, 0x9A8($sp)
    ctx->pc = 0x3af258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3af25c:
    // 0x3af25c: 0xc7ba09a0  lwc1        $f26, 0x9A0($sp)
    ctx->pc = 0x3af25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3af260:
    // 0x3af260: 0xc7b90998  lwc1        $f25, 0x998($sp)
    ctx->pc = 0x3af260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3af264:
    // 0x3af264: 0xc7b80990  lwc1        $f24, 0x990($sp)
    ctx->pc = 0x3af264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3af268:
    // 0x3af268: 0xc7b70988  lwc1        $f23, 0x988($sp)
    ctx->pc = 0x3af268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3af26c:
    // 0x3af26c: 0xc7b60980  lwc1        $f22, 0x980($sp)
    ctx->pc = 0x3af26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3af270:
    // 0x3af270: 0xc7b50978  lwc1        $f21, 0x978($sp)
    ctx->pc = 0x3af270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3af274:
    // 0x3af274: 0xc7b40970  lwc1        $f20, 0x970($sp)
    ctx->pc = 0x3af274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3af278:
    // 0x3af278: 0x3e00008  jr          $ra
label_3af27c:
    if (ctx->pc == 0x3AF27Cu) {
        ctx->pc = 0x3AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF278u;
        // 0x3af27c: 0x27bd09d0  addiu       $sp, $sp, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF280u;
        goto label_fallthrough_0x3af278;
    }
    ctx->pc = 0x3AF278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF278u;
        // 0x3af27c: 0x27bd09d0  addiu       $sp, $sp, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3af278:
    ctx->pc = 0x3AF280u;
}
