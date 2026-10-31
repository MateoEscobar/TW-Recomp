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

// Function: sub_002FFB30
// Address: 0x2ffb30 - 0x300678
void sub_002FFB30_0x2ffb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFB30_0x2ffb30");
#endif

    switch (ctx->pc) {
        case 0x2ffb30u: goto label_2ffb30;
        case 0x2ffb34u: goto label_2ffb34;
        case 0x2ffb38u: goto label_2ffb38;
        case 0x2ffb3cu: goto label_2ffb3c;
        case 0x2ffb40u: goto label_2ffb40;
        case 0x2ffb44u: goto label_2ffb44;
        case 0x2ffb48u: goto label_2ffb48;
        case 0x2ffb4cu: goto label_2ffb4c;
        case 0x2ffb50u: goto label_2ffb50;
        case 0x2ffb54u: goto label_2ffb54;
        case 0x2ffb58u: goto label_2ffb58;
        case 0x2ffb5cu: goto label_2ffb5c;
        case 0x2ffb60u: goto label_2ffb60;
        case 0x2ffb64u: goto label_2ffb64;
        case 0x2ffb68u: goto label_2ffb68;
        case 0x2ffb6cu: goto label_2ffb6c;
        case 0x2ffb70u: goto label_2ffb70;
        case 0x2ffb74u: goto label_2ffb74;
        case 0x2ffb78u: goto label_2ffb78;
        case 0x2ffb7cu: goto label_2ffb7c;
        case 0x2ffb80u: goto label_2ffb80;
        case 0x2ffb84u: goto label_2ffb84;
        case 0x2ffb88u: goto label_2ffb88;
        case 0x2ffb8cu: goto label_2ffb8c;
        case 0x2ffb90u: goto label_2ffb90;
        case 0x2ffb94u: goto label_2ffb94;
        case 0x2ffb98u: goto label_2ffb98;
        case 0x2ffb9cu: goto label_2ffb9c;
        case 0x2ffba0u: goto label_2ffba0;
        case 0x2ffba4u: goto label_2ffba4;
        case 0x2ffba8u: goto label_2ffba8;
        case 0x2ffbacu: goto label_2ffbac;
        case 0x2ffbb0u: goto label_2ffbb0;
        case 0x2ffbb4u: goto label_2ffbb4;
        case 0x2ffbb8u: goto label_2ffbb8;
        case 0x2ffbbcu: goto label_2ffbbc;
        case 0x2ffbc0u: goto label_2ffbc0;
        case 0x2ffbc4u: goto label_2ffbc4;
        case 0x2ffbc8u: goto label_2ffbc8;
        case 0x2ffbccu: goto label_2ffbcc;
        case 0x2ffbd0u: goto label_2ffbd0;
        case 0x2ffbd4u: goto label_2ffbd4;
        case 0x2ffbd8u: goto label_2ffbd8;
        case 0x2ffbdcu: goto label_2ffbdc;
        case 0x2ffbe0u: goto label_2ffbe0;
        case 0x2ffbe4u: goto label_2ffbe4;
        case 0x2ffbe8u: goto label_2ffbe8;
        case 0x2ffbecu: goto label_2ffbec;
        case 0x2ffbf0u: goto label_2ffbf0;
        case 0x2ffbf4u: goto label_2ffbf4;
        case 0x2ffbf8u: goto label_2ffbf8;
        case 0x2ffbfcu: goto label_2ffbfc;
        case 0x2ffc00u: goto label_2ffc00;
        case 0x2ffc04u: goto label_2ffc04;
        case 0x2ffc08u: goto label_2ffc08;
        case 0x2ffc0cu: goto label_2ffc0c;
        case 0x2ffc10u: goto label_2ffc10;
        case 0x2ffc14u: goto label_2ffc14;
        case 0x2ffc18u: goto label_2ffc18;
        case 0x2ffc1cu: goto label_2ffc1c;
        case 0x2ffc20u: goto label_2ffc20;
        case 0x2ffc24u: goto label_2ffc24;
        case 0x2ffc28u: goto label_2ffc28;
        case 0x2ffc2cu: goto label_2ffc2c;
        case 0x2ffc30u: goto label_2ffc30;
        case 0x2ffc34u: goto label_2ffc34;
        case 0x2ffc38u: goto label_2ffc38;
        case 0x2ffc3cu: goto label_2ffc3c;
        case 0x2ffc40u: goto label_2ffc40;
        case 0x2ffc44u: goto label_2ffc44;
        case 0x2ffc48u: goto label_2ffc48;
        case 0x2ffc4cu: goto label_2ffc4c;
        case 0x2ffc50u: goto label_2ffc50;
        case 0x2ffc54u: goto label_2ffc54;
        case 0x2ffc58u: goto label_2ffc58;
        case 0x2ffc5cu: goto label_2ffc5c;
        case 0x2ffc60u: goto label_2ffc60;
        case 0x2ffc64u: goto label_2ffc64;
        case 0x2ffc68u: goto label_2ffc68;
        case 0x2ffc6cu: goto label_2ffc6c;
        case 0x2ffc70u: goto label_2ffc70;
        case 0x2ffc74u: goto label_2ffc74;
        case 0x2ffc78u: goto label_2ffc78;
        case 0x2ffc7cu: goto label_2ffc7c;
        case 0x2ffc80u: goto label_2ffc80;
        case 0x2ffc84u: goto label_2ffc84;
        case 0x2ffc88u: goto label_2ffc88;
        case 0x2ffc8cu: goto label_2ffc8c;
        case 0x2ffc90u: goto label_2ffc90;
        case 0x2ffc94u: goto label_2ffc94;
        case 0x2ffc98u: goto label_2ffc98;
        case 0x2ffc9cu: goto label_2ffc9c;
        case 0x2ffca0u: goto label_2ffca0;
        case 0x2ffca4u: goto label_2ffca4;
        case 0x2ffca8u: goto label_2ffca8;
        case 0x2ffcacu: goto label_2ffcac;
        case 0x2ffcb0u: goto label_2ffcb0;
        case 0x2ffcb4u: goto label_2ffcb4;
        case 0x2ffcb8u: goto label_2ffcb8;
        case 0x2ffcbcu: goto label_2ffcbc;
        case 0x2ffcc0u: goto label_2ffcc0;
        case 0x2ffcc4u: goto label_2ffcc4;
        case 0x2ffcc8u: goto label_2ffcc8;
        case 0x2ffcccu: goto label_2ffccc;
        case 0x2ffcd0u: goto label_2ffcd0;
        case 0x2ffcd4u: goto label_2ffcd4;
        case 0x2ffcd8u: goto label_2ffcd8;
        case 0x2ffcdcu: goto label_2ffcdc;
        case 0x2ffce0u: goto label_2ffce0;
        case 0x2ffce4u: goto label_2ffce4;
        case 0x2ffce8u: goto label_2ffce8;
        case 0x2ffcecu: goto label_2ffcec;
        case 0x2ffcf0u: goto label_2ffcf0;
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffcf8u: goto label_2ffcf8;
        case 0x2ffcfcu: goto label_2ffcfc;
        case 0x2ffd00u: goto label_2ffd00;
        case 0x2ffd04u: goto label_2ffd04;
        case 0x2ffd08u: goto label_2ffd08;
        case 0x2ffd0cu: goto label_2ffd0c;
        case 0x2ffd10u: goto label_2ffd10;
        case 0x2ffd14u: goto label_2ffd14;
        case 0x2ffd18u: goto label_2ffd18;
        case 0x2ffd1cu: goto label_2ffd1c;
        case 0x2ffd20u: goto label_2ffd20;
        case 0x2ffd24u: goto label_2ffd24;
        case 0x2ffd28u: goto label_2ffd28;
        case 0x2ffd2cu: goto label_2ffd2c;
        case 0x2ffd30u: goto label_2ffd30;
        case 0x2ffd34u: goto label_2ffd34;
        case 0x2ffd38u: goto label_2ffd38;
        case 0x2ffd3cu: goto label_2ffd3c;
        case 0x2ffd40u: goto label_2ffd40;
        case 0x2ffd44u: goto label_2ffd44;
        case 0x2ffd48u: goto label_2ffd48;
        case 0x2ffd4cu: goto label_2ffd4c;
        case 0x2ffd50u: goto label_2ffd50;
        case 0x2ffd54u: goto label_2ffd54;
        case 0x2ffd58u: goto label_2ffd58;
        case 0x2ffd5cu: goto label_2ffd5c;
        case 0x2ffd60u: goto label_2ffd60;
        case 0x2ffd64u: goto label_2ffd64;
        case 0x2ffd68u: goto label_2ffd68;
        case 0x2ffd6cu: goto label_2ffd6c;
        case 0x2ffd70u: goto label_2ffd70;
        case 0x2ffd74u: goto label_2ffd74;
        case 0x2ffd78u: goto label_2ffd78;
        case 0x2ffd7cu: goto label_2ffd7c;
        case 0x2ffd80u: goto label_2ffd80;
        case 0x2ffd84u: goto label_2ffd84;
        case 0x2ffd88u: goto label_2ffd88;
        case 0x2ffd8cu: goto label_2ffd8c;
        case 0x2ffd90u: goto label_2ffd90;
        case 0x2ffd94u: goto label_2ffd94;
        case 0x2ffd98u: goto label_2ffd98;
        case 0x2ffd9cu: goto label_2ffd9c;
        case 0x2ffda0u: goto label_2ffda0;
        case 0x2ffda4u: goto label_2ffda4;
        case 0x2ffda8u: goto label_2ffda8;
        case 0x2ffdacu: goto label_2ffdac;
        case 0x2ffdb0u: goto label_2ffdb0;
        case 0x2ffdb4u: goto label_2ffdb4;
        case 0x2ffdb8u: goto label_2ffdb8;
        case 0x2ffdbcu: goto label_2ffdbc;
        case 0x2ffdc0u: goto label_2ffdc0;
        case 0x2ffdc4u: goto label_2ffdc4;
        case 0x2ffdc8u: goto label_2ffdc8;
        case 0x2ffdccu: goto label_2ffdcc;
        case 0x2ffdd0u: goto label_2ffdd0;
        case 0x2ffdd4u: goto label_2ffdd4;
        case 0x2ffdd8u: goto label_2ffdd8;
        case 0x2ffddcu: goto label_2ffddc;
        case 0x2ffde0u: goto label_2ffde0;
        case 0x2ffde4u: goto label_2ffde4;
        case 0x2ffde8u: goto label_2ffde8;
        case 0x2ffdecu: goto label_2ffdec;
        case 0x2ffdf0u: goto label_2ffdf0;
        case 0x2ffdf4u: goto label_2ffdf4;
        case 0x2ffdf8u: goto label_2ffdf8;
        case 0x2ffdfcu: goto label_2ffdfc;
        case 0x2ffe00u: goto label_2ffe00;
        case 0x2ffe04u: goto label_2ffe04;
        case 0x2ffe08u: goto label_2ffe08;
        case 0x2ffe0cu: goto label_2ffe0c;
        case 0x2ffe10u: goto label_2ffe10;
        case 0x2ffe14u: goto label_2ffe14;
        case 0x2ffe18u: goto label_2ffe18;
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe20u: goto label_2ffe20;
        case 0x2ffe24u: goto label_2ffe24;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe2cu: goto label_2ffe2c;
        case 0x2ffe30u: goto label_2ffe30;
        case 0x2ffe34u: goto label_2ffe34;
        case 0x2ffe38u: goto label_2ffe38;
        case 0x2ffe3cu: goto label_2ffe3c;
        case 0x2ffe40u: goto label_2ffe40;
        case 0x2ffe44u: goto label_2ffe44;
        case 0x2ffe48u: goto label_2ffe48;
        case 0x2ffe4cu: goto label_2ffe4c;
        case 0x2ffe50u: goto label_2ffe50;
        case 0x2ffe54u: goto label_2ffe54;
        case 0x2ffe58u: goto label_2ffe58;
        case 0x2ffe5cu: goto label_2ffe5c;
        case 0x2ffe60u: goto label_2ffe60;
        case 0x2ffe64u: goto label_2ffe64;
        case 0x2ffe68u: goto label_2ffe68;
        case 0x2ffe6cu: goto label_2ffe6c;
        case 0x2ffe70u: goto label_2ffe70;
        case 0x2ffe74u: goto label_2ffe74;
        case 0x2ffe78u: goto label_2ffe78;
        case 0x2ffe7cu: goto label_2ffe7c;
        case 0x2ffe80u: goto label_2ffe80;
        case 0x2ffe84u: goto label_2ffe84;
        case 0x2ffe88u: goto label_2ffe88;
        case 0x2ffe8cu: goto label_2ffe8c;
        case 0x2ffe90u: goto label_2ffe90;
        case 0x2ffe94u: goto label_2ffe94;
        case 0x2ffe98u: goto label_2ffe98;
        case 0x2ffe9cu: goto label_2ffe9c;
        case 0x2ffea0u: goto label_2ffea0;
        case 0x2ffea4u: goto label_2ffea4;
        case 0x2ffea8u: goto label_2ffea8;
        case 0x2ffeacu: goto label_2ffeac;
        case 0x2ffeb0u: goto label_2ffeb0;
        case 0x2ffeb4u: goto label_2ffeb4;
        case 0x2ffeb8u: goto label_2ffeb8;
        case 0x2ffebcu: goto label_2ffebc;
        case 0x2ffec0u: goto label_2ffec0;
        case 0x2ffec4u: goto label_2ffec4;
        case 0x2ffec8u: goto label_2ffec8;
        case 0x2ffeccu: goto label_2ffecc;
        case 0x2ffed0u: goto label_2ffed0;
        case 0x2ffed4u: goto label_2ffed4;
        case 0x2ffed8u: goto label_2ffed8;
        case 0x2ffedcu: goto label_2ffedc;
        case 0x2ffee0u: goto label_2ffee0;
        case 0x2ffee4u: goto label_2ffee4;
        case 0x2ffee8u: goto label_2ffee8;
        case 0x2ffeecu: goto label_2ffeec;
        case 0x2ffef0u: goto label_2ffef0;
        case 0x2ffef4u: goto label_2ffef4;
        case 0x2ffef8u: goto label_2ffef8;
        case 0x2ffefcu: goto label_2ffefc;
        case 0x2fff00u: goto label_2fff00;
        case 0x2fff04u: goto label_2fff04;
        case 0x2fff08u: goto label_2fff08;
        case 0x2fff0cu: goto label_2fff0c;
        case 0x2fff10u: goto label_2fff10;
        case 0x2fff14u: goto label_2fff14;
        case 0x2fff18u: goto label_2fff18;
        case 0x2fff1cu: goto label_2fff1c;
        case 0x2fff20u: goto label_2fff20;
        case 0x2fff24u: goto label_2fff24;
        case 0x2fff28u: goto label_2fff28;
        case 0x2fff2cu: goto label_2fff2c;
        case 0x2fff30u: goto label_2fff30;
        case 0x2fff34u: goto label_2fff34;
        case 0x2fff38u: goto label_2fff38;
        case 0x2fff3cu: goto label_2fff3c;
        case 0x2fff40u: goto label_2fff40;
        case 0x2fff44u: goto label_2fff44;
        case 0x2fff48u: goto label_2fff48;
        case 0x2fff4cu: goto label_2fff4c;
        case 0x2fff50u: goto label_2fff50;
        case 0x2fff54u: goto label_2fff54;
        case 0x2fff58u: goto label_2fff58;
        case 0x2fff5cu: goto label_2fff5c;
        case 0x2fff60u: goto label_2fff60;
        case 0x2fff64u: goto label_2fff64;
        case 0x2fff68u: goto label_2fff68;
        case 0x2fff6cu: goto label_2fff6c;
        case 0x2fff70u: goto label_2fff70;
        case 0x2fff74u: goto label_2fff74;
        case 0x2fff78u: goto label_2fff78;
        case 0x2fff7cu: goto label_2fff7c;
        case 0x2fff80u: goto label_2fff80;
        case 0x2fff84u: goto label_2fff84;
        case 0x2fff88u: goto label_2fff88;
        case 0x2fff8cu: goto label_2fff8c;
        case 0x2fff90u: goto label_2fff90;
        case 0x2fff94u: goto label_2fff94;
        case 0x2fff98u: goto label_2fff98;
        case 0x2fff9cu: goto label_2fff9c;
        case 0x2fffa0u: goto label_2fffa0;
        case 0x2fffa4u: goto label_2fffa4;
        case 0x2fffa8u: goto label_2fffa8;
        case 0x2fffacu: goto label_2fffac;
        case 0x2fffb0u: goto label_2fffb0;
        case 0x2fffb4u: goto label_2fffb4;
        case 0x2fffb8u: goto label_2fffb8;
        case 0x2fffbcu: goto label_2fffbc;
        case 0x2fffc0u: goto label_2fffc0;
        case 0x2fffc4u: goto label_2fffc4;
        case 0x2fffc8u: goto label_2fffc8;
        case 0x2fffccu: goto label_2fffcc;
        case 0x2fffd0u: goto label_2fffd0;
        case 0x2fffd4u: goto label_2fffd4;
        case 0x2fffd8u: goto label_2fffd8;
        case 0x2fffdcu: goto label_2fffdc;
        case 0x2fffe0u: goto label_2fffe0;
        case 0x2fffe4u: goto label_2fffe4;
        case 0x2fffe8u: goto label_2fffe8;
        case 0x2fffecu: goto label_2fffec;
        case 0x2ffff0u: goto label_2ffff0;
        case 0x2ffff4u: goto label_2ffff4;
        case 0x2ffff8u: goto label_2ffff8;
        case 0x2ffffcu: goto label_2ffffc;
        case 0x300000u: goto label_300000;
        case 0x300004u: goto label_300004;
        case 0x300008u: goto label_300008;
        case 0x30000cu: goto label_30000c;
        case 0x300010u: goto label_300010;
        case 0x300014u: goto label_300014;
        case 0x300018u: goto label_300018;
        case 0x30001cu: goto label_30001c;
        case 0x300020u: goto label_300020;
        case 0x300024u: goto label_300024;
        case 0x300028u: goto label_300028;
        case 0x30002cu: goto label_30002c;
        case 0x300030u: goto label_300030;
        case 0x300034u: goto label_300034;
        case 0x300038u: goto label_300038;
        case 0x30003cu: goto label_30003c;
        case 0x300040u: goto label_300040;
        case 0x300044u: goto label_300044;
        case 0x300048u: goto label_300048;
        case 0x30004cu: goto label_30004c;
        case 0x300050u: goto label_300050;
        case 0x300054u: goto label_300054;
        case 0x300058u: goto label_300058;
        case 0x30005cu: goto label_30005c;
        case 0x300060u: goto label_300060;
        case 0x300064u: goto label_300064;
        case 0x300068u: goto label_300068;
        case 0x30006cu: goto label_30006c;
        case 0x300070u: goto label_300070;
        case 0x300074u: goto label_300074;
        case 0x300078u: goto label_300078;
        case 0x30007cu: goto label_30007c;
        case 0x300080u: goto label_300080;
        case 0x300084u: goto label_300084;
        case 0x300088u: goto label_300088;
        case 0x30008cu: goto label_30008c;
        case 0x300090u: goto label_300090;
        case 0x300094u: goto label_300094;
        case 0x300098u: goto label_300098;
        case 0x30009cu: goto label_30009c;
        case 0x3000a0u: goto label_3000a0;
        case 0x3000a4u: goto label_3000a4;
        case 0x3000a8u: goto label_3000a8;
        case 0x3000acu: goto label_3000ac;
        case 0x3000b0u: goto label_3000b0;
        case 0x3000b4u: goto label_3000b4;
        case 0x3000b8u: goto label_3000b8;
        case 0x3000bcu: goto label_3000bc;
        case 0x3000c0u: goto label_3000c0;
        case 0x3000c4u: goto label_3000c4;
        case 0x3000c8u: goto label_3000c8;
        case 0x3000ccu: goto label_3000cc;
        case 0x3000d0u: goto label_3000d0;
        case 0x3000d4u: goto label_3000d4;
        case 0x3000d8u: goto label_3000d8;
        case 0x3000dcu: goto label_3000dc;
        case 0x3000e0u: goto label_3000e0;
        case 0x3000e4u: goto label_3000e4;
        case 0x3000e8u: goto label_3000e8;
        case 0x3000ecu: goto label_3000ec;
        case 0x3000f0u: goto label_3000f0;
        case 0x3000f4u: goto label_3000f4;
        case 0x3000f8u: goto label_3000f8;
        case 0x3000fcu: goto label_3000fc;
        case 0x300100u: goto label_300100;
        case 0x300104u: goto label_300104;
        case 0x300108u: goto label_300108;
        case 0x30010cu: goto label_30010c;
        case 0x300110u: goto label_300110;
        case 0x300114u: goto label_300114;
        case 0x300118u: goto label_300118;
        case 0x30011cu: goto label_30011c;
        case 0x300120u: goto label_300120;
        case 0x300124u: goto label_300124;
        case 0x300128u: goto label_300128;
        case 0x30012cu: goto label_30012c;
        case 0x300130u: goto label_300130;
        case 0x300134u: goto label_300134;
        case 0x300138u: goto label_300138;
        case 0x30013cu: goto label_30013c;
        case 0x300140u: goto label_300140;
        case 0x300144u: goto label_300144;
        case 0x300148u: goto label_300148;
        case 0x30014cu: goto label_30014c;
        case 0x300150u: goto label_300150;
        case 0x300154u: goto label_300154;
        case 0x300158u: goto label_300158;
        case 0x30015cu: goto label_30015c;
        case 0x300160u: goto label_300160;
        case 0x300164u: goto label_300164;
        case 0x300168u: goto label_300168;
        case 0x30016cu: goto label_30016c;
        case 0x300170u: goto label_300170;
        case 0x300174u: goto label_300174;
        case 0x300178u: goto label_300178;
        case 0x30017cu: goto label_30017c;
        case 0x300180u: goto label_300180;
        case 0x300184u: goto label_300184;
        case 0x300188u: goto label_300188;
        case 0x30018cu: goto label_30018c;
        case 0x300190u: goto label_300190;
        case 0x300194u: goto label_300194;
        case 0x300198u: goto label_300198;
        case 0x30019cu: goto label_30019c;
        case 0x3001a0u: goto label_3001a0;
        case 0x3001a4u: goto label_3001a4;
        case 0x3001a8u: goto label_3001a8;
        case 0x3001acu: goto label_3001ac;
        case 0x3001b0u: goto label_3001b0;
        case 0x3001b4u: goto label_3001b4;
        case 0x3001b8u: goto label_3001b8;
        case 0x3001bcu: goto label_3001bc;
        case 0x3001c0u: goto label_3001c0;
        case 0x3001c4u: goto label_3001c4;
        case 0x3001c8u: goto label_3001c8;
        case 0x3001ccu: goto label_3001cc;
        case 0x3001d0u: goto label_3001d0;
        case 0x3001d4u: goto label_3001d4;
        case 0x3001d8u: goto label_3001d8;
        case 0x3001dcu: goto label_3001dc;
        case 0x3001e0u: goto label_3001e0;
        case 0x3001e4u: goto label_3001e4;
        case 0x3001e8u: goto label_3001e8;
        case 0x3001ecu: goto label_3001ec;
        case 0x3001f0u: goto label_3001f0;
        case 0x3001f4u: goto label_3001f4;
        case 0x3001f8u: goto label_3001f8;
        case 0x3001fcu: goto label_3001fc;
        case 0x300200u: goto label_300200;
        case 0x300204u: goto label_300204;
        case 0x300208u: goto label_300208;
        case 0x30020cu: goto label_30020c;
        case 0x300210u: goto label_300210;
        case 0x300214u: goto label_300214;
        case 0x300218u: goto label_300218;
        case 0x30021cu: goto label_30021c;
        case 0x300220u: goto label_300220;
        case 0x300224u: goto label_300224;
        case 0x300228u: goto label_300228;
        case 0x30022cu: goto label_30022c;
        case 0x300230u: goto label_300230;
        case 0x300234u: goto label_300234;
        case 0x300238u: goto label_300238;
        case 0x30023cu: goto label_30023c;
        case 0x300240u: goto label_300240;
        case 0x300244u: goto label_300244;
        case 0x300248u: goto label_300248;
        case 0x30024cu: goto label_30024c;
        case 0x300250u: goto label_300250;
        case 0x300254u: goto label_300254;
        case 0x300258u: goto label_300258;
        case 0x30025cu: goto label_30025c;
        case 0x300260u: goto label_300260;
        case 0x300264u: goto label_300264;
        case 0x300268u: goto label_300268;
        case 0x30026cu: goto label_30026c;
        case 0x300270u: goto label_300270;
        case 0x300274u: goto label_300274;
        case 0x300278u: goto label_300278;
        case 0x30027cu: goto label_30027c;
        case 0x300280u: goto label_300280;
        case 0x300284u: goto label_300284;
        case 0x300288u: goto label_300288;
        case 0x30028cu: goto label_30028c;
        case 0x300290u: goto label_300290;
        case 0x300294u: goto label_300294;
        case 0x300298u: goto label_300298;
        case 0x30029cu: goto label_30029c;
        case 0x3002a0u: goto label_3002a0;
        case 0x3002a4u: goto label_3002a4;
        case 0x3002a8u: goto label_3002a8;
        case 0x3002acu: goto label_3002ac;
        case 0x3002b0u: goto label_3002b0;
        case 0x3002b4u: goto label_3002b4;
        case 0x3002b8u: goto label_3002b8;
        case 0x3002bcu: goto label_3002bc;
        case 0x3002c0u: goto label_3002c0;
        case 0x3002c4u: goto label_3002c4;
        case 0x3002c8u: goto label_3002c8;
        case 0x3002ccu: goto label_3002cc;
        case 0x3002d0u: goto label_3002d0;
        case 0x3002d4u: goto label_3002d4;
        case 0x3002d8u: goto label_3002d8;
        case 0x3002dcu: goto label_3002dc;
        case 0x3002e0u: goto label_3002e0;
        case 0x3002e4u: goto label_3002e4;
        case 0x3002e8u: goto label_3002e8;
        case 0x3002ecu: goto label_3002ec;
        case 0x3002f0u: goto label_3002f0;
        case 0x3002f4u: goto label_3002f4;
        case 0x3002f8u: goto label_3002f8;
        case 0x3002fcu: goto label_3002fc;
        case 0x300300u: goto label_300300;
        case 0x300304u: goto label_300304;
        case 0x300308u: goto label_300308;
        case 0x30030cu: goto label_30030c;
        case 0x300310u: goto label_300310;
        case 0x300314u: goto label_300314;
        case 0x300318u: goto label_300318;
        case 0x30031cu: goto label_30031c;
        case 0x300320u: goto label_300320;
        case 0x300324u: goto label_300324;
        case 0x300328u: goto label_300328;
        case 0x30032cu: goto label_30032c;
        case 0x300330u: goto label_300330;
        case 0x300334u: goto label_300334;
        case 0x300338u: goto label_300338;
        case 0x30033cu: goto label_30033c;
        case 0x300340u: goto label_300340;
        case 0x300344u: goto label_300344;
        case 0x300348u: goto label_300348;
        case 0x30034cu: goto label_30034c;
        case 0x300350u: goto label_300350;
        case 0x300354u: goto label_300354;
        case 0x300358u: goto label_300358;
        case 0x30035cu: goto label_30035c;
        case 0x300360u: goto label_300360;
        case 0x300364u: goto label_300364;
        case 0x300368u: goto label_300368;
        case 0x30036cu: goto label_30036c;
        case 0x300370u: goto label_300370;
        case 0x300374u: goto label_300374;
        case 0x300378u: goto label_300378;
        case 0x30037cu: goto label_30037c;
        case 0x300380u: goto label_300380;
        case 0x300384u: goto label_300384;
        case 0x300388u: goto label_300388;
        case 0x30038cu: goto label_30038c;
        case 0x300390u: goto label_300390;
        case 0x300394u: goto label_300394;
        case 0x300398u: goto label_300398;
        case 0x30039cu: goto label_30039c;
        case 0x3003a0u: goto label_3003a0;
        case 0x3003a4u: goto label_3003a4;
        case 0x3003a8u: goto label_3003a8;
        case 0x3003acu: goto label_3003ac;
        case 0x3003b0u: goto label_3003b0;
        case 0x3003b4u: goto label_3003b4;
        case 0x3003b8u: goto label_3003b8;
        case 0x3003bcu: goto label_3003bc;
        case 0x3003c0u: goto label_3003c0;
        case 0x3003c4u: goto label_3003c4;
        case 0x3003c8u: goto label_3003c8;
        case 0x3003ccu: goto label_3003cc;
        case 0x3003d0u: goto label_3003d0;
        case 0x3003d4u: goto label_3003d4;
        case 0x3003d8u: goto label_3003d8;
        case 0x3003dcu: goto label_3003dc;
        case 0x3003e0u: goto label_3003e0;
        case 0x3003e4u: goto label_3003e4;
        case 0x3003e8u: goto label_3003e8;
        case 0x3003ecu: goto label_3003ec;
        case 0x3003f0u: goto label_3003f0;
        case 0x3003f4u: goto label_3003f4;
        case 0x3003f8u: goto label_3003f8;
        case 0x3003fcu: goto label_3003fc;
        case 0x300400u: goto label_300400;
        case 0x300404u: goto label_300404;
        case 0x300408u: goto label_300408;
        case 0x30040cu: goto label_30040c;
        case 0x300410u: goto label_300410;
        case 0x300414u: goto label_300414;
        case 0x300418u: goto label_300418;
        case 0x30041cu: goto label_30041c;
        case 0x300420u: goto label_300420;
        case 0x300424u: goto label_300424;
        case 0x300428u: goto label_300428;
        case 0x30042cu: goto label_30042c;
        case 0x300430u: goto label_300430;
        case 0x300434u: goto label_300434;
        case 0x300438u: goto label_300438;
        case 0x30043cu: goto label_30043c;
        case 0x300440u: goto label_300440;
        case 0x300444u: goto label_300444;
        case 0x300448u: goto label_300448;
        case 0x30044cu: goto label_30044c;
        case 0x300450u: goto label_300450;
        case 0x300454u: goto label_300454;
        case 0x300458u: goto label_300458;
        case 0x30045cu: goto label_30045c;
        case 0x300460u: goto label_300460;
        case 0x300464u: goto label_300464;
        case 0x300468u: goto label_300468;
        case 0x30046cu: goto label_30046c;
        case 0x300470u: goto label_300470;
        case 0x300474u: goto label_300474;
        case 0x300478u: goto label_300478;
        case 0x30047cu: goto label_30047c;
        case 0x300480u: goto label_300480;
        case 0x300484u: goto label_300484;
        case 0x300488u: goto label_300488;
        case 0x30048cu: goto label_30048c;
        case 0x300490u: goto label_300490;
        case 0x300494u: goto label_300494;
        case 0x300498u: goto label_300498;
        case 0x30049cu: goto label_30049c;
        case 0x3004a0u: goto label_3004a0;
        case 0x3004a4u: goto label_3004a4;
        case 0x3004a8u: goto label_3004a8;
        case 0x3004acu: goto label_3004ac;
        case 0x3004b0u: goto label_3004b0;
        case 0x3004b4u: goto label_3004b4;
        case 0x3004b8u: goto label_3004b8;
        case 0x3004bcu: goto label_3004bc;
        case 0x3004c0u: goto label_3004c0;
        case 0x3004c4u: goto label_3004c4;
        case 0x3004c8u: goto label_3004c8;
        case 0x3004ccu: goto label_3004cc;
        case 0x3004d0u: goto label_3004d0;
        case 0x3004d4u: goto label_3004d4;
        case 0x3004d8u: goto label_3004d8;
        case 0x3004dcu: goto label_3004dc;
        case 0x3004e0u: goto label_3004e0;
        case 0x3004e4u: goto label_3004e4;
        case 0x3004e8u: goto label_3004e8;
        case 0x3004ecu: goto label_3004ec;
        case 0x3004f0u: goto label_3004f0;
        case 0x3004f4u: goto label_3004f4;
        case 0x3004f8u: goto label_3004f8;
        case 0x3004fcu: goto label_3004fc;
        case 0x300500u: goto label_300500;
        case 0x300504u: goto label_300504;
        case 0x300508u: goto label_300508;
        case 0x30050cu: goto label_30050c;
        case 0x300510u: goto label_300510;
        case 0x300514u: goto label_300514;
        case 0x300518u: goto label_300518;
        case 0x30051cu: goto label_30051c;
        case 0x300520u: goto label_300520;
        case 0x300524u: goto label_300524;
        case 0x300528u: goto label_300528;
        case 0x30052cu: goto label_30052c;
        case 0x300530u: goto label_300530;
        case 0x300534u: goto label_300534;
        case 0x300538u: goto label_300538;
        case 0x30053cu: goto label_30053c;
        case 0x300540u: goto label_300540;
        case 0x300544u: goto label_300544;
        case 0x300548u: goto label_300548;
        case 0x30054cu: goto label_30054c;
        case 0x300550u: goto label_300550;
        case 0x300554u: goto label_300554;
        case 0x300558u: goto label_300558;
        case 0x30055cu: goto label_30055c;
        case 0x300560u: goto label_300560;
        case 0x300564u: goto label_300564;
        case 0x300568u: goto label_300568;
        case 0x30056cu: goto label_30056c;
        case 0x300570u: goto label_300570;
        case 0x300574u: goto label_300574;
        case 0x300578u: goto label_300578;
        case 0x30057cu: goto label_30057c;
        case 0x300580u: goto label_300580;
        case 0x300584u: goto label_300584;
        case 0x300588u: goto label_300588;
        case 0x30058cu: goto label_30058c;
        case 0x300590u: goto label_300590;
        case 0x300594u: goto label_300594;
        case 0x300598u: goto label_300598;
        case 0x30059cu: goto label_30059c;
        case 0x3005a0u: goto label_3005a0;
        case 0x3005a4u: goto label_3005a4;
        case 0x3005a8u: goto label_3005a8;
        case 0x3005acu: goto label_3005ac;
        case 0x3005b0u: goto label_3005b0;
        case 0x3005b4u: goto label_3005b4;
        case 0x3005b8u: goto label_3005b8;
        case 0x3005bcu: goto label_3005bc;
        case 0x3005c0u: goto label_3005c0;
        case 0x3005c4u: goto label_3005c4;
        case 0x3005c8u: goto label_3005c8;
        case 0x3005ccu: goto label_3005cc;
        case 0x3005d0u: goto label_3005d0;
        case 0x3005d4u: goto label_3005d4;
        case 0x3005d8u: goto label_3005d8;
        case 0x3005dcu: goto label_3005dc;
        case 0x3005e0u: goto label_3005e0;
        case 0x3005e4u: goto label_3005e4;
        case 0x3005e8u: goto label_3005e8;
        case 0x3005ecu: goto label_3005ec;
        case 0x3005f0u: goto label_3005f0;
        case 0x3005f4u: goto label_3005f4;
        case 0x3005f8u: goto label_3005f8;
        case 0x3005fcu: goto label_3005fc;
        case 0x300600u: goto label_300600;
        case 0x300604u: goto label_300604;
        case 0x300608u: goto label_300608;
        case 0x30060cu: goto label_30060c;
        case 0x300610u: goto label_300610;
        case 0x300614u: goto label_300614;
        case 0x300618u: goto label_300618;
        case 0x30061cu: goto label_30061c;
        case 0x300620u: goto label_300620;
        case 0x300624u: goto label_300624;
        case 0x300628u: goto label_300628;
        case 0x30062cu: goto label_30062c;
        case 0x300630u: goto label_300630;
        case 0x300634u: goto label_300634;
        case 0x300638u: goto label_300638;
        case 0x30063cu: goto label_30063c;
        case 0x300640u: goto label_300640;
        case 0x300644u: goto label_300644;
        case 0x300648u: goto label_300648;
        case 0x30064cu: goto label_30064c;
        case 0x300650u: goto label_300650;
        case 0x300654u: goto label_300654;
        case 0x300658u: goto label_300658;
        case 0x30065cu: goto label_30065c;
        case 0x300660u: goto label_300660;
        case 0x300664u: goto label_300664;
        case 0x300668u: goto label_300668;
        case 0x30066cu: goto label_30066c;
        case 0x300670u: goto label_300670;
        case 0x300674u: goto label_300674;
        default: break;
    }

    ctx->pc = 0x2ffb30u;

label_2ffb30:
    // 0x2ffb30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ffb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2ffb34:
    // 0x2ffb34: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2ffb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2ffb38:
    // 0x2ffb38: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2ffb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2ffb3c:
    // 0x2ffb3c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2ffb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2ffb40:
    // 0x2ffb40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ffb40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb44:
    // 0x2ffb44: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2ffb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2ffb48:
    // 0x2ffb48: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2ffb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2ffb4c:
    // 0x2ffb4c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2ffb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2ffb50:
    // 0x2ffb50: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2ffb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2ffb54:
    // 0x2ffb54: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ffb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ffb58:
    // 0x2ffb58: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2ffb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2ffb5c:
    // 0x2ffb5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ffb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ffb60:
    // 0x2ffb60: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2ffb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2ffb64:
    // 0x2ffb64: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x2ffb64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_2ffb68:
    // 0x2ffb68: 0x104002b4  beqz        $v0, . + 4 + (0x2B4 << 2)
label_2ffb6c:
    if (ctx->pc == 0x2FFB6Cu) {
        ctx->pc = 0x2FFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB68u;
        // 0x2ffb6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB70u;
        goto label_2ffb70;
    }
    ctx->pc = 0x2FFB68u;
    {
        const bool branch_taken_0x2ffb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB68u;
        // 0x2ffb6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb68) {
            ctx->pc = 0x30063Cu;
            goto label_30063c;
        }
    }
    ctx->pc = 0x2FFB70u;
label_2ffb70:
    // 0x2ffb70: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ffb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2ffb74:
    // 0x2ffb74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ffb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ffb78:
    // 0x2ffb78: 0x24428cd0  addiu       $v0, $v0, -0x7330
    ctx->pc = 0x2ffb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
label_2ffb7c:
    // 0x2ffb7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ffb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ffb80:
    // 0x2ffb80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ffb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ffb84:
    // 0x2ffb84: 0x800008  jr          $a0
label_2ffb88:
    if (ctx->pc == 0x2FFB88u) {
        ctx->pc = 0x2FFB8Cu;
        goto label_2ffb8c;
    }
    ctx->pc = 0x2FFB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFB8Cu: goto label_2ffb8c;
            case 0x2FFC60u: goto label_2ffc60;
            case 0x2FFC6Cu: goto label_2ffc6c;
            case 0x2FFC74u: goto label_2ffc74;
            case 0x300358u: goto label_300358;
            case 0x3003C8u: goto label_3003c8;
            case 0x3005C0u: goto label_3005c0;
            case 0x30063Cu: goto label_30063c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FFB8Cu;
label_2ffb8c:
    // 0x2ffb8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ffb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ffb90:
    // 0x2ffb90: 0xc08a200  jal         func_228800
label_2ffb94:
    if (ctx->pc == 0x2FFB94u) {
        ctx->pc = 0x2FFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB90u;
        // 0x2ffb94: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB98u;
        goto label_2ffb98;
    }
    ctx->pc = 0x2FFB90u;
    SET_GPR_U32(ctx, 31, 0x2FFB98u);
    ctx->pc = 0x2FFB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB90u;
    // 0x2ffb94: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2FFB90u, 0x2FFB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB98u;
label_2ffb98:
    // 0x2ffb98: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2ffb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2ffb9c:
    // 0x2ffb9c: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x2ffb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2ffba0:
    // 0x2ffba0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2ffba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ffba4:
    // 0x2ffba4: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_2ffba8:
    if (ctx->pc == 0x2FFBA8u) {
        ctx->pc = 0x2FFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBA4u;
        // 0x2ffba8: 0x92430011  lbu         $v1, 0x11($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBACu;
        goto label_2ffbac;
    }
    ctx->pc = 0x2FFBA4u;
    {
        const bool branch_taken_0x2ffba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffba4) {
            ctx->pc = 0x2FFBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFBA4u;
            // 0x2ffba8: 0x92430011  lbu         $v1, 0x11($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC40u;
            goto label_2ffc40;
        }
    }
    ctx->pc = 0x2FFBACu;
label_2ffbac:
    // 0x2ffbac: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2ffbacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2ffbb0:
    // 0x2ffbb0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ffbb4:
    if (ctx->pc == 0x2FFBB4u) {
        ctx->pc = 0x2FFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBB0u;
        // 0x2ffbb4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBB8u;
        goto label_2ffbb8;
    }
    ctx->pc = 0x2FFBB0u;
    {
        const bool branch_taken_0x2ffbb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBB0u;
        // 0x2ffbb4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbb0) {
            ctx->pc = 0x2FFBC4u;
            goto label_2ffbc4;
        }
    }
    ctx->pc = 0x2FFBB8u;
label_2ffbb8:
    // 0x2ffbb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ffbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ffbbc:
    // 0x2ffbbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffbc0:
    if (ctx->pc == 0x2FFBC0u) {
        ctx->pc = 0x2FFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBBCu;
        // 0x2ffbc0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBC4u;
        goto label_2ffbc4;
    }
    ctx->pc = 0x2FFBBCu;
    {
        const bool branch_taken_0x2ffbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBBCu;
        // 0x2ffbc0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbbc) {
            ctx->pc = 0x2FFBC8u;
            goto label_2ffbc8;
        }
    }
    ctx->pc = 0x2FFBC4u;
label_2ffbc4:
    // 0x2ffbc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ffbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffbc8:
    // 0x2ffbc8: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_2ffbcc:
    if (ctx->pc == 0x2FFBCCu) {
        ctx->pc = 0x2FFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBC8u;
        // 0x2ffbcc: 0x92430011  lbu         $v1, 0x11($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBD0u;
        goto label_2ffbd0;
    }
    ctx->pc = 0x2FFBC8u;
    {
        const bool branch_taken_0x2ffbc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffbc8) {
            ctx->pc = 0x2FFBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFBC8u;
            // 0x2ffbcc: 0x92430011  lbu         $v1, 0x11($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC40u;
            goto label_2ffc40;
        }
    }
    ctx->pc = 0x2FFBD0u;
label_2ffbd0:
    // 0x2ffbd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ffbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ffbd4:
    // 0x2ffbd4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ffbd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ffbd8:
    // 0x2ffbd8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ffbdc:
    // 0x2ffbdc: 0x40f809  jalr        $v0
label_2ffbe0:
    if (ctx->pc == 0x2FFBE0u) {
        ctx->pc = 0x2FFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBDCu;
        // 0x2ffbe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBE4u;
        goto label_2ffbe4;
    }
    ctx->pc = 0x2FFBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFBE4u);
        ctx->pc = 0x2FFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBDCu;
        // 0x2ffbe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFBDCu, 0x2FFBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFBE4u;
label_2ffbe4:
    // 0x2ffbe4: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2ffbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2ffbe8:
    // 0x2ffbe8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2ffbec:
    if (ctx->pc == 0x2FFBECu) {
        ctx->pc = 0x2FFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBE8u;
        // 0x2ffbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBF0u;
        goto label_2ffbf0;
    }
    ctx->pc = 0x2FFBE8u;
    {
        const bool branch_taken_0x2ffbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBE8u;
        // 0x2ffbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbe8) {
            ctx->pc = 0x2FFC04u;
            goto label_2ffc04;
        }
    }
    ctx->pc = 0x2FFBF0u;
label_2ffbf0:
    // 0x2ffbf0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2ffbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ffbf4:
    // 0x2ffbf4: 0xc0ab116  jal         func_2AC458
label_2ffbf8:
    if (ctx->pc == 0x2FFBF8u) {
        ctx->pc = 0x2FFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBF4u;
        // 0x2ffbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBFCu;
        goto label_2ffbfc;
    }
    ctx->pc = 0x2FFBF4u;
    SET_GPR_U32(ctx, 31, 0x2FFBFCu);
    ctx->pc = 0x2FFBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFBF4u;
    // 0x2ffbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC458u, 0x2FFBF4u, 0x2FFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBFCu;
label_2ffbfc:
    // 0x2ffbfc: 0x10000019  b           . + 4 + (0x19 << 2)
label_2ffc00:
    if (ctx->pc == 0x2FFC00u) {
        ctx->pc = 0x2FFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBFCu;
        // 0x2ffc00: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC04u;
        goto label_2ffc04;
    }
    ctx->pc = 0x2FFBFCu;
    {
        const bool branch_taken_0x2ffbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBFCu;
        // 0x2ffc00: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbfc) {
            ctx->pc = 0x2FFC64u;
            goto label_2ffc64;
        }
    }
    ctx->pc = 0x2FFC04u;
label_2ffc04:
    // 0x2ffc04: 0xc0a3658  jal         func_28D960
label_2ffc08:
    if (ctx->pc == 0x2FFC08u) {
        ctx->pc = 0x2FFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC04u;
        // 0x2ffc08: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC0Cu;
        goto label_2ffc0c;
    }
    ctx->pc = 0x2FFC04u;
    SET_GPR_U32(ctx, 31, 0x2FFC0Cu);
    ctx->pc = 0x2FFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC04u;
    // 0x2ffc08: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2FFC04u, 0x2FFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC0Cu;
label_2ffc0c:
    // 0x2ffc0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ffc0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffc10:
    // 0x2ffc10: 0x462000b  bltzl       $v1, . + 4 + (0xB << 2)
label_2ffc14:
    if (ctx->pc == 0x2FFC14u) {
        ctx->pc = 0x2FFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC10u;
        // 0x2ffc14: 0x92430011  lbu         $v1, 0x11($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC18u;
        goto label_2ffc18;
    }
    ctx->pc = 0x2FFC10u;
    {
        const bool branch_taken_0x2ffc10 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2ffc10) {
            ctx->pc = 0x2FFC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFC10u;
            // 0x2ffc14: 0x92430011  lbu         $v1, 0x11($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC40u;
            goto label_2ffc40;
        }
    }
    ctx->pc = 0x2FFC18u;
label_2ffc18:
    // 0x2ffc18: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2ffc18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2ffc1c:
    // 0x2ffc1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ffc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ffc20:
    // 0x2ffc20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ffc24:
    if (ctx->pc == 0x2FFC24u) {
        ctx->pc = 0x2FFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC20u;
        // 0x2ffc24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC28u;
        goto label_2ffc28;
    }
    ctx->pc = 0x2FFC20u;
    {
        const bool branch_taken_0x2ffc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC20u;
        // 0x2ffc24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc20) {
            ctx->pc = 0x2FFC34u;
            goto label_2ffc34;
        }
    }
    ctx->pc = 0x2FFC28u;
label_2ffc28:
    // 0x2ffc28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ffc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ffc2c:
    // 0x2ffc2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ffc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ffc30:
    // 0x2ffc30: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2ffc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ffc34:
    // 0x2ffc34: 0xc0ab116  jal         func_2AC458
label_2ffc38:
    if (ctx->pc == 0x2FFC38u) {
        ctx->pc = 0x2FFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC34u;
        // 0x2ffc38: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC3Cu;
        goto label_2ffc3c;
    }
    ctx->pc = 0x2FFC34u;
    SET_GPR_U32(ctx, 31, 0x2FFC3Cu);
    ctx->pc = 0x2FFC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC34u;
    // 0x2ffc38: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC458u, 0x2FFC34u, 0x2FFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC3Cu;
label_2ffc3c:
    // 0x2ffc3c: 0x92430011  lbu         $v1, 0x11($s2)
    ctx->pc = 0x2ffc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_2ffc40:
    // 0x2ffc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffc44:
    // 0x2ffc44: 0x14620281  bne         $v1, $v0, . + 4 + (0x281 << 2)
label_2ffc48:
    if (ctx->pc == 0x2FFC48u) {
        ctx->pc = 0x2FFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC44u;
        // 0x2ffc48: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC4Cu;
        goto label_2ffc4c;
    }
    ctx->pc = 0x2FFC44u;
    {
        const bool branch_taken_0x2ffc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC44u;
        // 0x2ffc48: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc44) {
            ctx->pc = 0x30064Cu;
            goto label_30064c;
        }
    }
    ctx->pc = 0x2FFC4Cu;
label_2ffc4c:
    // 0x2ffc4c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ffc50:
    // 0x2ffc50: 0xc0bfe26  jal         func_2FF898
label_2ffc54:
    if (ctx->pc == 0x2FFC54u) {
        ctx->pc = 0x2FFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC50u;
        // 0x2ffc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC58u;
        goto label_2ffc58;
    }
    ctx->pc = 0x2FFC50u;
    SET_GPR_U32(ctx, 31, 0x2FFC58u);
    ctx->pc = 0x2FFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC50u;
    // 0x2ffc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF898u, 0x2FFC50u, 0x2FFC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC58u;
label_2ffc58:
    // 0x2ffc58: 0x1000027b  b           . + 4 + (0x27B << 2)
label_2ffc5c:
    if (ctx->pc == 0x2FFC5Cu) {
        ctx->pc = 0x2FFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC58u;
        // 0x2ffc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC60u;
        goto label_2ffc60;
    }
    ctx->pc = 0x2FFC58u;
    {
        const bool branch_taken_0x2ffc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC58u;
        // 0x2ffc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc58) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x2FFC60u;
label_2ffc60:
    // 0x2ffc60: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ffc64:
    // 0x2ffc64: 0xc0bfe26  jal         func_2FF898
label_2ffc68:
    if (ctx->pc == 0x2FFC68u) {
        ctx->pc = 0x2FFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC64u;
        // 0x2ffc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC6Cu;
        goto label_2ffc6c;
    }
    ctx->pc = 0x2FFC64u;
    SET_GPR_U32(ctx, 31, 0x2FFC6Cu);
    ctx->pc = 0x2FFC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC64u;
    // 0x2ffc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF898u, 0x2FFC64u, 0x2FFC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC6Cu;
label_2ffc6c:
    // 0x2ffc6c: 0x10000276  b           . + 4 + (0x276 << 2)
label_2ffc70:
    if (ctx->pc == 0x2FFC70u) {
        ctx->pc = 0x2FFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC6Cu;
        // 0x2ffc70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC74u;
        goto label_2ffc74;
    }
    ctx->pc = 0x2FFC6Cu;
    {
        const bool branch_taken_0x2ffc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC6Cu;
        // 0x2ffc70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc6c) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x2FFC74u;
label_2ffc74:
    // 0x2ffc74: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x2ffc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_2ffc78:
    // 0x2ffc78: 0x0  nop
    ctx->pc = 0x2ffc78u;
    // NOP
label_2ffc7c:
    // 0x2ffc7c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2ffc80:
    if (ctx->pc == 0x2FFC80u) {
        ctx->pc = 0x2FFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC7Cu;
        // 0x2ffc80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC84u;
        goto label_2ffc84;
    }
    ctx->pc = 0x2FFC7Cu;
    {
        const bool branch_taken_0x2ffc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC7Cu;
        // 0x2ffc80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc7c) {
            ctx->pc = 0x2FFC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc6c;
        }
    }
    ctx->pc = 0x2FFC84u;
label_2ffc84:
    // 0x2ffc84: 0x92220267  lbu         $v0, 0x267($s1)
    ctx->pc = 0x2ffc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 615)));
label_2ffc88:
    // 0x2ffc88: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_2ffc8c:
    if (ctx->pc == 0x2FFC8Cu) {
        ctx->pc = 0x2FFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC88u;
        // 0x2ffc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC90u;
        goto label_2ffc90;
    }
    ctx->pc = 0x2FFC88u;
    {
        const bool branch_taken_0x2ffc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC88u;
        // 0x2ffc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc88) {
            ctx->pc = 0x2FFC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc6c;
        }
    }
    ctx->pc = 0x2FFC90u;
label_2ffc90:
    // 0x2ffc90: 0x8e530024  lw          $s3, 0x24($s2)
    ctx->pc = 0x2ffc90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2ffc94:
    // 0x2ffc94: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ffc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ffc98:
    // 0x2ffc98: 0xc0a44ac  jal         func_2912B0
label_2ffc9c:
    if (ctx->pc == 0x2FFC9Cu) {
        ctx->pc = 0x2FFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC98u;
        // 0x2ffc9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCA0u;
        goto label_2ffca0;
    }
    ctx->pc = 0x2FFC98u;
    SET_GPR_U32(ctx, 31, 0x2FFCA0u);
    ctx->pc = 0x2FFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC98u;
    // 0x2ffc9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x2FFC98u, 0x2FFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCA0u;
label_2ffca0:
    // 0x2ffca0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ffca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffca4:
    // 0x2ffca4: 0x52800170  beql        $s4, $zero, . + 4 + (0x170 << 2)
label_2ffca8:
    if (ctx->pc == 0x2FFCA8u) {
        ctx->pc = 0x2FFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCA4u;
        // 0x2ffca8: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCACu;
        goto label_2ffcac;
    }
    ctx->pc = 0x2FFCA4u;
    {
        const bool branch_taken_0x2ffca4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffca4) {
            ctx->pc = 0x2FFCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFCA4u;
            // 0x2ffca8: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300268u;
            goto label_300268;
        }
    }
    ctx->pc = 0x2FFCACu;
label_2ffcac:
    // 0x2ffcac: 0x16930002  bne         $s4, $s3, . + 4 + (0x2 << 2)
label_2ffcb0:
    if (ctx->pc == 0x2FFCB0u) {
        ctx->pc = 0x2FFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCACu;
        // 0x2ffcb0: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCB4u;
        goto label_2ffcb4;
    }
    ctx->pc = 0x2FFCACu;
    {
        const bool branch_taken_0x2ffcac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x2FFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCACu;
        // 0x2ffcb0: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcac) {
            ctx->pc = 0x2FFCB8u;
            goto label_2ffcb8;
        }
    }
    ctx->pc = 0x2FFCB4u;
label_2ffcb4:
    // 0x2ffcb4: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x2ffcb4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ffcb8:
    // 0x2ffcb8: 0xc087502  jal         func_21D408
label_2ffcbc:
    if (ctx->pc == 0x2FFCBCu) {
        ctx->pc = 0x2FFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCB8u;
        // 0x2ffcbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCC0u;
        goto label_2ffcc0;
    }
    ctx->pc = 0x2FFCB8u;
    SET_GPR_U32(ctx, 31, 0x2FFCC0u);
    ctx->pc = 0x2FFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCB8u;
    // 0x2ffcbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FFCB8u, 0x2FFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCC0u;
label_2ffcc0:
    // 0x2ffcc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffcc4:
    // 0x2ffcc4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2ffcc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2ffcc8:
    // 0x2ffcc8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ffccc:
    if (ctx->pc == 0x2FFCCCu) {
        ctx->pc = 0x2FFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCC8u;
        // 0x2ffccc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCD0u;
        goto label_2ffcd0;
    }
    ctx->pc = 0x2FFCC8u;
    {
        const bool branch_taken_0x2ffcc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCC8u;
        // 0x2ffccc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcc8) {
            ctx->pc = 0x2FFCDCu;
            goto label_2ffcdc;
        }
    }
    ctx->pc = 0x2FFCD0u;
label_2ffcd0:
    // 0x2ffcd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ffcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ffcd4:
    // 0x2ffcd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffcd8:
    if (ctx->pc == 0x2FFCD8u) {
        ctx->pc = 0x2FFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCD4u;
        // 0x2ffcd8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCDCu;
        goto label_2ffcdc;
    }
    ctx->pc = 0x2FFCD4u;
    {
        const bool branch_taken_0x2ffcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCD4u;
        // 0x2ffcd8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcd4) {
            ctx->pc = 0x2FFCE0u;
            goto label_2ffce0;
        }
    }
    ctx->pc = 0x2FFCDCu;
label_2ffcdc:
    // 0x2ffcdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffce0:
    // 0x2ffce0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_2ffce4:
    if (ctx->pc == 0x2FFCE4u) {
        ctx->pc = 0x2FFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCE0u;
        // 0x2ffce4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCE8u;
        goto label_2ffce8;
    }
    ctx->pc = 0x2FFCE0u;
    {
        const bool branch_taken_0x2ffce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCE0u;
        // 0x2ffce4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffce0) {
            ctx->pc = 0x2FFD08u;
            goto label_2ffd08;
        }
    }
    ctx->pc = 0x2FFCE8u;
label_2ffce8:
    // 0x2ffce8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ffce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ffcec:
    // 0x2ffcec: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ffcecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ffcf0:
    // 0x2ffcf0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ffcf4:
    // 0x2ffcf4: 0x40f809  jalr        $v0
label_2ffcf8:
    if (ctx->pc == 0x2FFCF8u) {
        ctx->pc = 0x2FFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCF4u;
        // 0x2ffcf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCFCu;
        goto label_2ffcfc;
    }
    ctx->pc = 0x2FFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFCFCu);
        ctx->pc = 0x2FFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCF4u;
        // 0x2ffcf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFCF4u, 0x2FFCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFCFCu;
label_2ffcfc:
    // 0x2ffcfc: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2ffcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2ffd00:
    // 0x2ffd00: 0x1043ffda  beq         $v0, $v1, . + 4 + (-0x26 << 2)
label_2ffd04:
    if (ctx->pc == 0x2FFD04u) {
        ctx->pc = 0x2FFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD00u;
        // 0x2ffd04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD08u;
        goto label_2ffd08;
    }
    ctx->pc = 0x2FFD00u;
    {
        const bool branch_taken_0x2ffd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD00u;
        // 0x2ffd04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd00) {
            ctx->pc = 0x2FFC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc6c;
        }
    }
    ctx->pc = 0x2FFD08u;
label_2ffd08:
    // 0x2ffd08: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x2ffd08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ffd0c:
    // 0x2ffd0c: 0x905e0adf  lbu         $fp, 0xADF($v0)
    ctx->pc = 0x2ffd0cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2783)));
label_2ffd10:
    // 0x2ffd10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ffd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ffd14:
    // 0x2ffd14: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_2ffd18:
    if (ctx->pc == 0x2FFD18u) {
        ctx->pc = 0x2FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD14u;
        // 0x2ffd18: 0x2415000e  addiu       $s5, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD1Cu;
        goto label_2ffd1c;
    }
    ctx->pc = 0x2FFD14u;
    {
        const bool branch_taken_0x2ffd14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD14u;
        // 0x2ffd18: 0x2415000e  addiu       $s5, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd14) {
            ctx->pc = 0x2FFD38u;
            goto label_2ffd38;
        }
    }
    ctx->pc = 0x2FFD1Cu;
label_2ffd1c:
    // 0x2ffd1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ffd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ffd20:
    // 0x2ffd20: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_2ffd24:
    if (ctx->pc == 0x2FFD24u) {
        ctx->pc = 0x2FFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD20u;
        // 0x2ffd24: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD28u;
        goto label_2ffd28;
    }
    ctx->pc = 0x2FFD20u;
    {
        const bool branch_taken_0x2ffd20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD20u;
        // 0x2ffd24: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd20) {
            ctx->pc = 0x2FFD38u;
            goto label_2ffd38;
        }
    }
    ctx->pc = 0x2FFD28u;
label_2ffd28:
    // 0x2ffd28: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_2ffd2c:
    if (ctx->pc == 0x2FFD2Cu) {
        ctx->pc = 0x2FFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD28u;
        // 0x2ffd2c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD30u;
        goto label_2ffd30;
    }
    ctx->pc = 0x2FFD28u;
    {
        const bool branch_taken_0x2ffd28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD28u;
        // 0x2ffd2c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd28) {
            ctx->pc = 0x2FFD38u;
            goto label_2ffd38;
        }
    }
    ctx->pc = 0x2FFD30u;
label_2ffd30:
    // 0x2ffd30: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
label_2ffd34:
    if (ctx->pc == 0x2FFD34u) {
        ctx->pc = 0x2FFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD30u;
        // 0x2ffd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD38u;
        goto label_2ffd38;
    }
    ctx->pc = 0x2FFD30u;
    {
        const bool branch_taken_0x2ffd30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD30u;
        // 0x2ffd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd30) {
            ctx->pc = 0x2FFD54u;
            goto label_2ffd54;
        }
    }
    ctx->pc = 0x2FFD38u;
label_2ffd38:
    // 0x2ffd38: 0xc08a01c  jal         func_228070
label_2ffd3c:
    if (ctx->pc == 0x2FFD3Cu) {
        ctx->pc = 0x2FFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD38u;
        // 0x2ffd3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD40u;
        goto label_2ffd40;
    }
    ctx->pc = 0x2FFD38u;
    SET_GPR_U32(ctx, 31, 0x2FFD40u);
    ctx->pc = 0x2FFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD38u;
    // 0x2ffd3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2FFD38u, 0x2FFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD40u;
label_2ffd40:
    // 0x2ffd40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffd44:
    // 0x2ffd44: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_2ffd48:
    if (ctx->pc == 0x2FFD48u) {
        ctx->pc = 0x2FFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD44u;
        // 0x2ffd48: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD4Cu;
        goto label_2ffd4c;
    }
    ctx->pc = 0x2FFD44u;
    {
        const bool branch_taken_0x2ffd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD44u;
        // 0x2ffd48: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd44) {
            ctx->pc = 0x2FFD6Cu;
            goto label_2ffd6c;
        }
    }
    ctx->pc = 0x2FFD4Cu;
label_2ffd4c:
    // 0x2ffd4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ffd50:
    if (ctx->pc == 0x2FFD50u) {
        ctx->pc = 0x2FFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD4Cu;
        // 0x2ffd50: 0x24150008  addiu       $s5, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD54u;
        goto label_2ffd54;
    }
    ctx->pc = 0x2FFD4Cu;
    {
        const bool branch_taken_0x2ffd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD4Cu;
        // 0x2ffd50: 0x24150008  addiu       $s5, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd4c) {
            ctx->pc = 0x2FFD6Cu;
            goto label_2ffd6c;
        }
    }
    ctx->pc = 0x2FFD54u;
label_2ffd54:
    // 0x2ffd54: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
label_2ffd58:
    if (ctx->pc == 0x2FFD58u) {
        ctx->pc = 0x2FFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD54u;
        // 0x2ffd58: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD5Cu;
        goto label_2ffd5c;
    }
    ctx->pc = 0x2FFD54u;
    {
        const bool branch_taken_0x2ffd54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ffd54) {
            ctx->pc = 0x2FFD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD54u;
            // 0x2ffd58: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFD70u;
            goto label_2ffd70;
        }
    }
    ctx->pc = 0x2FFD5Cu;
label_2ffd5c:
    // 0x2ffd5c: 0x52930004  beql        $s4, $s3, . + 4 + (0x4 << 2)
label_2ffd60:
    if (ctx->pc == 0x2FFD60u) {
        ctx->pc = 0x2FFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD5Cu;
        // 0x2ffd60: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD64u;
        goto label_2ffd64;
    }
    ctx->pc = 0x2FFD5Cu;
    {
        const bool branch_taken_0x2ffd5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        if (branch_taken_0x2ffd5c) {
            ctx->pc = 0x2FFD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD5Cu;
            // 0x2ffd60: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFD70u;
            goto label_2ffd70;
        }
    }
    ctx->pc = 0x2FFD64u;
label_2ffd64:
    // 0x2ffd64: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2ffd64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ffd68:
    // 0x2ffd68: 0x241e0064  addiu       $fp, $zero, 0x64
    ctx->pc = 0x2ffd68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ffd6c:
    // 0x2ffd6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ffd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ffd70:
    // 0x2ffd70: 0x26820090  addiu       $v0, $s4, 0x90
    ctx->pc = 0x2ffd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2ffd74:
    // 0x2ffd74: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2ffd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2ffd78:
    // 0x2ffd78: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2ffd78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2ffd7c:
    // 0x2ffd7c: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x2ffd7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2ffd80:
    // 0x2ffd80: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x2ffd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2ffd84:
    // 0x2ffd84: 0x24c24b00  addiu       $v0, $a2, 0x4B00
    ctx->pc = 0x2ffd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2ffd88:
    // 0x2ffd88: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ffd88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ffd8c:
    // 0x2ffd8c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ffd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ffd90:
    // 0x2ffd90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2ffd94:
    // 0x2ffd94: 0xc0cdb38  jal         func_336CE0
label_2ffd98:
    if (ctx->pc == 0x2FFD98u) {
        ctx->pc = 0x2FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD94u;
        // 0x2ffd98: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD9Cu;
        goto label_2ffd9c;
    }
    ctx->pc = 0x2FFD94u;
    SET_GPR_U32(ctx, 31, 0x2FFD9Cu);
    ctx->pc = 0x2FFD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD94u;
    // 0x2ffd98: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FFD94u, 0x2FFD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD9Cu;
label_2ffd9c:
    // 0x2ffd9c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2ffd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2ffda0:
    // 0x2ffda0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ffda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ffda4:
    // 0x2ffda4: 0x0  nop
    ctx->pc = 0x2ffda4u;
    // NOP
label_2ffda8:
    // 0x2ffda8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ffda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ffdac:
    // 0x2ffdac: 0x0  nop
    ctx->pc = 0x2ffdacu;
    // NOP
label_2ffdb0:
    // 0x2ffdb0: 0x45000225  bc1f        . + 4 + (0x225 << 2)
label_2ffdb4:
    if (ctx->pc == 0x2FFDB4u) {
        ctx->pc = 0x2FFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDB0u;
        // 0x2ffdb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDB8u;
        goto label_2ffdb8;
    }
    ctx->pc = 0x2FFDB0u;
    {
        const bool branch_taken_0x2ffdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDB0u;
        // 0x2ffdb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdb0) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x2FFDB8u;
label_2ffdb8:
    // 0x2ffdb8: 0xc0bfc66  jal         func_2FF198
label_2ffdbc:
    if (ctx->pc == 0x2FFDBCu) {
        ctx->pc = 0x2FFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDB8u;
        // 0x2ffdbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDC0u;
        goto label_2ffdc0;
    }
    ctx->pc = 0x2FFDB8u;
    SET_GPR_U32(ctx, 31, 0x2FFDC0u);
    ctx->pc = 0x2FFDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFDB8u;
    // 0x2ffdbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF198u, 0x2FFDB8u, 0x2FFDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDC0u;
label_2ffdc0:
    // 0x2ffdc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffdc4:
    // 0x2ffdc4: 0x14430220  bne         $v0, $v1, . + 4 + (0x220 << 2)
label_2ffdc8:
    if (ctx->pc == 0x2FFDC8u) {
        ctx->pc = 0x2FFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDC4u;
        // 0x2ffdc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDCCu;
        goto label_2ffdcc;
    }
    ctx->pc = 0x2FFDC4u;
    {
        const bool branch_taken_0x2ffdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDC4u;
        // 0x2ffdc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdc4) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x2FFDCCu;
label_2ffdcc:
    // 0x2ffdcc: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x2ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_2ffdd0:
    // 0x2ffdd0: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x2ffdd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2ffdd4:
    // 0x2ffdd4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ffdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ffdd8:
    // 0x2ffdd8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2ffddc:
    if (ctx->pc == 0x2FFDDCu) {
        ctx->pc = 0x2FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD8u;
        // 0x2ffddc: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDE0u;
        goto label_2ffde0;
    }
    ctx->pc = 0x2FFDD8u;
    {
        const bool branch_taken_0x2ffdd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD8u;
        // 0x2ffddc: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdd8) {
            ctx->pc = 0x2FFDF0u;
            goto label_2ffdf0;
        }
    }
    ctx->pc = 0x2FFDE0u;
label_2ffde0:
    // 0x2ffde0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ffde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ffde4:
    // 0x2ffde4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ffde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ffde8:
    // 0x2ffde8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffdec:
    if (ctx->pc == 0x2FFDECu) {
        ctx->pc = 0x2FFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDE8u;
        // 0x2ffdec: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDF0u;
        goto label_2ffdf0;
    }
    ctx->pc = 0x2FFDE8u;
    {
        const bool branch_taken_0x2ffde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDE8u;
        // 0x2ffdec: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffde8) {
            ctx->pc = 0x2FFDF4u;
            goto label_2ffdf4;
        }
    }
    ctx->pc = 0x2FFDF0u;
label_2ffdf0:
    // 0x2ffdf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffdf4:
    // 0x2ffdf4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_2ffdf8:
    if (ctx->pc == 0x2FFDF8u) {
        ctx->pc = 0x2FFDFCu;
        goto label_2ffdfc;
    }
    ctx->pc = 0x2FFDF4u;
    {
        const bool branch_taken_0x2ffdf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdf4) {
            ctx->pc = 0x2FFE24u;
            goto label_2ffe24;
        }
    }
    ctx->pc = 0x2FFDFCu;
label_2ffdfc:
    // 0x2ffdfc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ffdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ffe00:
    // 0x2ffe00: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ffe00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ffe04:
    // 0x2ffe04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ffe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ffe08:
    // 0x2ffe08: 0x40f809  jalr        $v0
label_2ffe0c:
    if (ctx->pc == 0x2FFE0Cu) {
        ctx->pc = 0x2FFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE08u;
        // 0x2ffe0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE10u;
        goto label_2ffe10;
    }
    ctx->pc = 0x2FFE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FFE10u);
        ctx->pc = 0x2FFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE08u;
        // 0x2ffe0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFE08u, 0x2FFE10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFE10u;
label_2ffe10:
    // 0x2ffe10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ffe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ffe14:
    // 0x2ffe14: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2ffe18:
    if (ctx->pc == 0x2FFE18u) {
        ctx->pc = 0x2FFE1Cu;
        goto label_2ffe1c;
    }
    ctx->pc = 0x2FFE14u;
    {
        const bool branch_taken_0x2ffe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ffe14) {
            ctx->pc = 0x2FFE24u;
            goto label_2ffe24;
        }
    }
    ctx->pc = 0x2FFE1Cu;
label_2ffe1c:
    // 0x2ffe1c: 0xc0a35f6  jal         func_28D7D8
label_2ffe20:
    if (ctx->pc == 0x2FFE20u) {
        ctx->pc = 0x2FFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE1Cu;
        // 0x2ffe20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE24u;
        goto label_2ffe24;
    }
    ctx->pc = 0x2FFE1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFE24u);
    ctx->pc = 0x2FFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE1Cu;
    // 0x2ffe20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2FFE1Cu, 0x2FFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE24u;
label_2ffe24:
    // 0x2ffe24: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2ffe28:
    if (ctx->pc == 0x2FFE28u) {
        ctx->pc = 0x2FFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE24u;
        // 0x2ffe28: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE2Cu;
        goto label_2ffe2c;
    }
    ctx->pc = 0x2FFE24u;
    {
        const bool branch_taken_0x2ffe24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE24u;
        // 0x2ffe28: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe24) {
            ctx->pc = 0x2FFE3Cu;
            goto label_2ffe3c;
        }
    }
    ctx->pc = 0x2FFE2Cu;
label_2ffe2c:
    // 0x2ffe2c: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x2ffe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2ffe30:
    // 0x2ffe30: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2ffe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ffe34:
    // 0x2ffe34: 0x546400f7  bnel        $v1, $a0, . + 4 + (0xF7 << 2)
label_2ffe38:
    if (ctx->pc == 0x2FFE38u) {
        ctx->pc = 0x2FFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE34u;
        // 0x2ffe38: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE3Cu;
        goto label_2ffe3c;
    }
    ctx->pc = 0x2FFE34u;
    {
        const bool branch_taken_0x2ffe34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ffe34) {
            ctx->pc = 0x2FFE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFE34u;
            // 0x2ffe38: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x2FFE3Cu;
label_2ffe3c:
    // 0x2ffe3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffe40:
    // 0x2ffe40: 0x16020026  bne         $s0, $v0, . + 4 + (0x26 << 2)
label_2ffe44:
    if (ctx->pc == 0x2FFE44u) {
        ctx->pc = 0x2FFE48u;
        goto label_2ffe48;
    }
    ctx->pc = 0x2FFE40u;
    {
        const bool branch_taken_0x2ffe40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ffe40) {
            ctx->pc = 0x2FFEDCu;
            goto label_2ffedc;
        }
    }
    ctx->pc = 0x2FFE48u;
label_2ffe48:
    // 0x2ffe48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ffe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ffe4c:
    // 0x2ffe4c: 0x808203b8  lb          $v0, 0x3B8($a0)
    ctx->pc = 0x2ffe4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 952)));
label_2ffe50:
    // 0x2ffe50: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2ffe54:
    if (ctx->pc == 0x2FFE54u) {
        ctx->pc = 0x2FFE58u;
        goto label_2ffe58;
    }
    ctx->pc = 0x2FFE50u;
    {
        const bool branch_taken_0x2ffe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe50) {
            ctx->pc = 0x2FFEDCu;
            goto label_2ffedc;
        }
    }
    ctx->pc = 0x2FFE58u;
label_2ffe58:
    // 0x2ffe58: 0x826203b8  lb          $v0, 0x3B8($s3)
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_2ffe5c:
    // 0x2ffe5c: 0x1450001f  bne         $v0, $s0, . + 4 + (0x1F << 2)
label_2ffe60:
    if (ctx->pc == 0x2FFE60u) {
        ctx->pc = 0x2FFE64u;
        goto label_2ffe64;
    }
    ctx->pc = 0x2FFE5Cu;
    {
        const bool branch_taken_0x2ffe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ffe5c) {
            ctx->pc = 0x2FFEDCu;
            goto label_2ffedc;
        }
    }
    ctx->pc = 0x2FFE64u;
label_2ffe64:
    // 0x2ffe64: 0xc088a92  jal         func_222A48
label_2ffe68:
    if (ctx->pc == 0x2FFE68u) {
        ctx->pc = 0x2FFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE64u;
        // 0x2ffe68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE6Cu;
        goto label_2ffe6c;
    }
    ctx->pc = 0x2FFE64u;
    SET_GPR_U32(ctx, 31, 0x2FFE6Cu);
    ctx->pc = 0x2FFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE64u;
    // 0x2ffe68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x2FFE64u, 0x2FFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE6Cu;
label_2ffe6c:
    // 0x2ffe6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ffe70:
    if (ctx->pc == 0x2FFE70u) {
        ctx->pc = 0x2FFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE6Cu;
        // 0x2ffe70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE74u;
        goto label_2ffe74;
    }
    ctx->pc = 0x2FFE6Cu;
    {
        const bool branch_taken_0x2ffe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE6Cu;
        // 0x2ffe70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe6c) {
            ctx->pc = 0x2FFE8Cu;
            goto label_2ffe8c;
        }
    }
    ctx->pc = 0x2FFE74u;
label_2ffe74:
    // 0x2ffe74: 0xc087502  jal         func_21D408
label_2ffe78:
    if (ctx->pc == 0x2FFE78u) {
        ctx->pc = 0x2FFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE74u;
        // 0x2ffe78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE7Cu;
        goto label_2ffe7c;
    }
    ctx->pc = 0x2FFE74u;
    SET_GPR_U32(ctx, 31, 0x2FFE7Cu);
    ctx->pc = 0x2FFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE74u;
    // 0x2ffe78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FFE74u, 0x2FFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE7Cu;
label_2ffe7c:
    // 0x2ffe7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ffe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe80:
    // 0x2ffe80: 0xc0a40ca  jal         func_290328
label_2ffe84:
    if (ctx->pc == 0x2FFE84u) {
        ctx->pc = 0x2FFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE80u;
        // 0x2ffe84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE88u;
        goto label_2ffe88;
    }
    ctx->pc = 0x2FFE80u;
    SET_GPR_U32(ctx, 31, 0x2FFE88u);
    ctx->pc = 0x2FFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE80u;
    // 0x2ffe84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x2FFE80u, 0x2FFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE88u;
label_2ffe88:
    // 0x2ffe88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ffe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ffe8c:
    // 0x2ffe8c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2ffe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2ffe90:
    // 0x2ffe90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ffe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe94:
    // 0x2ffe94: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x2ffe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
label_2ffe98:
    // 0x2ffe98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe9c:
    // 0x2ffe9c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2ffe9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2ffea0:
    // 0x2ffea0: 0xc0a34ba  jal         func_28D2E8
label_2ffea4:
    if (ctx->pc == 0x2FFEA4u) {
        ctx->pc = 0x2FFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEA0u;
        // 0x2ffea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEA8u;
        goto label_2ffea8;
    }
    ctx->pc = 0x2FFEA0u;
    SET_GPR_U32(ctx, 31, 0x2FFEA8u);
    ctx->pc = 0x2FFEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFEA0u;
    // 0x2ffea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2FFEA0u, 0x2FFEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEA8u;
label_2ffea8:
    // 0x2ffea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ffea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ffeac:
    // 0x2ffeac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ffeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ffeb0:
    // 0x2ffeb0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ffeb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ffeb4:
    // 0x2ffeb4: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x2ffeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_2ffeb8:
    // 0x2ffeb8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ffeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2ffebc:
    // 0x2ffebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ffebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffec0:
    // 0x2ffec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ffec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffec4:
    // 0x2ffec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ffec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffec8:
    // 0x2ffec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ffec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffecc:
    // 0x2ffecc: 0xc088178  jal         func_2205E0
label_2ffed0:
    if (ctx->pc == 0x2FFED0u) {
        ctx->pc = 0x2FFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFECCu;
        // 0x2ffed0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFED4u;
        goto label_2ffed4;
    }
    ctx->pc = 0x2FFECCu;
    SET_GPR_U32(ctx, 31, 0x2FFED4u);
    ctx->pc = 0x2FFED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFECCu;
    // 0x2ffed0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2FFECCu, 0x2FFED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFED4u;
label_2ffed4:
    // 0x2ffed4: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_2ffed8:
    if (ctx->pc == 0x2FFED8u) {
        ctx->pc = 0x2FFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFED4u;
        // 0x2ffed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEDCu;
        goto label_2ffedc;
    }
    ctx->pc = 0x2FFED4u;
    {
        const bool branch_taken_0x2ffed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFED4u;
        // 0x2ffed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffed4) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x2FFEDCu;
label_2ffedc:
    // 0x2ffedc: 0x560000cd  bnel        $s0, $zero, . + 4 + (0xCD << 2)
label_2ffee0:
    if (ctx->pc == 0x2FFEE0u) {
        ctx->pc = 0x2FFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEDCu;
        // 0x2ffee0: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEE4u;
        goto label_2ffee4;
    }
    ctx->pc = 0x2FFEDCu;
    {
        const bool branch_taken_0x2ffedc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffedc) {
            ctx->pc = 0x2FFEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFEDCu;
            // 0x2ffee0: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x2FFEE4u;
label_2ffee4:
    // 0x2ffee4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ffee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ffee8:
    // 0x2ffee8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ffee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ffeec:
    // 0x2ffeec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2ffeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2ffef0:
    // 0x2ffef0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ffef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ffef4:
    // 0x2ffef4: 0xc1073e0  jal         func_41CF80
label_2ffef8:
    if (ctx->pc == 0x2FFEF8u) {
        ctx->pc = 0x2FFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEF4u;
        // 0x2ffef8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEFCu;
        goto label_2ffefc;
    }
    ctx->pc = 0x2FFEF4u;
    SET_GPR_U32(ctx, 31, 0x2FFEFCu);
    ctx->pc = 0x2FFEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFEF4u;
    // 0x2ffef8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF80u, 0x2FFEF4u, 0x2FFEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEFCu;
label_2ffefc:
    // 0x2ffefc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fff00:
    // 0x2fff00: 0x544300c4  bnel        $v0, $v1, . + 4 + (0xC4 << 2)
label_2fff04:
    if (ctx->pc == 0x2FFF04u) {
        ctx->pc = 0x2FFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF00u;
        // 0x2fff04: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF08u;
        goto label_2fff08;
    }
    ctx->pc = 0x2FFF00u;
    {
        const bool branch_taken_0x2fff00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fff00) {
            ctx->pc = 0x2FFF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF00u;
            // 0x2fff04: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x2FFF08u;
label_2fff08:
    // 0x2fff08: 0x3aa2000e  xori        $v0, $s5, 0xE
    ctx->pc = 0x2fff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)14);
label_2fff0c:
    // 0x2fff0c: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
label_2fff10:
    if (ctx->pc == 0x2FFF10u) {
        ctx->pc = 0x2FFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF0Cu;
        // 0x2fff10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF14u;
        goto label_2fff14;
    }
    ctx->pc = 0x2FFF0Cu;
    {
        const bool branch_taken_0x2fff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF0Cu;
        // 0x2fff10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff0c) {
            ctx->pc = 0x300210u;
            goto label_300210;
        }
    }
    ctx->pc = 0x2FFF14u;
label_2fff14:
    // 0x2fff14: 0xc087502  jal         func_21D408
label_2fff18:
    if (ctx->pc == 0x2FFF18u) {
        ctx->pc = 0x2FFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF14u;
        // 0x2fff18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF1Cu;
        goto label_2fff1c;
    }
    ctx->pc = 0x2FFF14u;
    SET_GPR_U32(ctx, 31, 0x2FFF1Cu);
    ctx->pc = 0x2FFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF14u;
    // 0x2fff18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FFF14u, 0x2FFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF1Cu;
label_2fff1c:
    // 0x2fff1c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2fff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2fff20:
    // 0x2fff20: 0x8c6505f4  lw          $a1, 0x5F4($v1)
    ctx->pc = 0x2fff20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_2fff24:
    // 0x2fff24: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2fff28:
    if (ctx->pc == 0x2FFF28u) {
        ctx->pc = 0x2FFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF24u;
        // 0x2fff28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF2Cu;
        goto label_2fff2c;
    }
    ctx->pc = 0x2FFF24u;
    {
        const bool branch_taken_0x2fff24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF24u;
        // 0x2fff28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff24) {
            ctx->pc = 0x2FFF48u;
            goto label_2fff48;
        }
    }
    ctx->pc = 0x2FFF2Cu;
label_2fff2c:
    // 0x2fff2c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2fff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2fff30:
    // 0x2fff30: 0x34029c40  ori         $v0, $zero, 0x9C40
    ctx->pc = 0x2fff30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
label_2fff34:
    // 0x2fff34: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2fff38:
    // 0x2fff38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2fff38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fff3c:
    // 0x2fff3c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2fff3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2fff40:
    // 0x2fff40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fff44:
    if (ctx->pc == 0x2FFF44u) {
        ctx->pc = 0x2FFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF40u;
        // 0x2fff44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF48u;
        goto label_2fff48;
    }
    ctx->pc = 0x2FFF40u;
    {
        const bool branch_taken_0x2fff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF40u;
        // 0x2fff44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff40) {
            ctx->pc = 0x2FFF50u;
            goto label_2fff50;
        }
    }
    ctx->pc = 0x2FFF48u;
label_2fff48:
    // 0x2fff48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2fff48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fff4c:
    // 0x2fff4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fff50:
    // 0x2fff50: 0x560200b0  bnel        $s0, $v0, . + 4 + (0xB0 << 2)
label_2fff54:
    if (ctx->pc == 0x2FFF54u) {
        ctx->pc = 0x2FFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF50u;
        // 0x2fff54: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF58u;
        goto label_2fff58;
    }
    ctx->pc = 0x2FFF50u;
    {
        const bool branch_taken_0x2fff50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fff50) {
            ctx->pc = 0x2FFF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF50u;
            // 0x2fff54: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x2FFF58u;
label_2fff58:
    // 0x2fff58: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2fff58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2fff5c:
    // 0x2fff5c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2fff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2fff60:
    // 0x2fff60: 0xc0cd4ee  jal         func_3353B8
label_2fff64:
    if (ctx->pc == 0x2FFF64u) {
        ctx->pc = 0x2FFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF60u;
        // 0x2fff64: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF68u;
        goto label_2fff68;
    }
    ctx->pc = 0x2FFF60u;
    SET_GPR_U32(ctx, 31, 0x2FFF68u);
    ctx->pc = 0x2FFF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF60u;
    // 0x2fff64: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2FFF60u, 0x2FFF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF68u;
label_2fff68:
    // 0x2fff68: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x2fff68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fff6c:
    // 0x2fff6c: 0x544000a9  bnel        $v0, $zero, . + 4 + (0xA9 << 2)
label_2fff70:
    if (ctx->pc == 0x2FFF70u) {
        ctx->pc = 0x2FFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF6Cu;
        // 0x2fff70: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF74u;
        goto label_2fff74;
    }
    ctx->pc = 0x2FFF6Cu;
    {
        const bool branch_taken_0x2fff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fff6c) {
            ctx->pc = 0x2FFF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF6Cu;
            // 0x2fff70: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x2FFF74u;
label_2fff74:
    // 0x2fff74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fff78:
    // 0x2fff78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fff78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fff7c:
    // 0x2fff7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fff7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fff80:
    // 0x2fff80: 0xc0888a2  jal         func_222288
label_2fff84:
    if (ctx->pc == 0x2FFF84u) {
        ctx->pc = 0x2FFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF80u;
        // 0x2fff84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF88u;
        goto label_2fff88;
    }
    ctx->pc = 0x2FFF80u;
    SET_GPR_U32(ctx, 31, 0x2FFF88u);
    ctx->pc = 0x2FFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF80u;
    // 0x2fff84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2FFF80u, 0x2FFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF88u;
label_2fff88:
    // 0x2fff88: 0x545000a2  bnel        $v0, $s0, . + 4 + (0xA2 << 2)
label_2fff8c:
    if (ctx->pc == 0x2FFF8Cu) {
        ctx->pc = 0x2FFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF88u;
        // 0x2fff8c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF90u;
        goto label_2fff90;
    }
    ctx->pc = 0x2FFF88u;
    {
        const bool branch_taken_0x2fff88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2fff88) {
            ctx->pc = 0x2FFF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF88u;
            // 0x2fff8c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x2FFF90u;
label_2fff90:
    // 0x2fff90: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
label_2fff94:
    if (ctx->pc == 0x2FFF94u) {
        ctx->pc = 0x2FFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF90u;
        // 0x2fff94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF98u;
        goto label_2fff98;
    }
    ctx->pc = 0x2FFF90u;
    {
        const bool branch_taken_0x2fff90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF90u;
        // 0x2fff94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff90) {
            ctx->pc = 0x2FFFCCu;
            goto label_2fffcc;
        }
    }
    ctx->pc = 0x2FFF98u;
label_2fff98:
    // 0x2fff98: 0x3a420004  xori        $v0, $s2, 0x4
    ctx->pc = 0x2fff98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)4);
label_2fff9c:
    // 0x2fff9c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2fffa0:
    if (ctx->pc == 0x2FFFA0u) {
        ctx->pc = 0x2FFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF9Cu;
        // 0x2fffa0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFA4u;
        goto label_2fffa4;
    }
    ctx->pc = 0x2FFF9Cu;
    {
        const bool branch_taken_0x2fff9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fff9c) {
            ctx->pc = 0x2FFFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF9Cu;
            // 0x2fffa0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFFD0u;
            goto label_2fffd0;
        }
    }
    ctx->pc = 0x2FFFA4u;
label_2fffa4:
    // 0x2fffa4: 0x86c50092  lh          $a1, 0x92($s6)
    ctx->pc = 0x2fffa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2fffa8:
    // 0x2fffa8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2fffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2fffac:
    // 0x2fffac: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2fffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2fffb0:
    // 0x2fffb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fffb4:
    // 0x2fffb4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2fffb8:
    // 0x2fffb8: 0xc62c0140  lwc1        $f12, 0x140($s1)
    ctx->pc = 0x2fffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fffbc:
    // 0x2fffbc: 0xc0a785a  jal         func_29E168
label_2fffc0:
    if (ctx->pc == 0x2FFFC0u) {
        ctx->pc = 0x2FFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFBCu;
        // 0x2fffc0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFC4u;
        goto label_2fffc4;
    }
    ctx->pc = 0x2FFFBCu;
    SET_GPR_U32(ctx, 31, 0x2FFFC4u);
    ctx->pc = 0x2FFFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFBCu;
    // 0x2fffc0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E168u, 0x2FFFBCu, 0x2FFFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFC4u;
label_2fffc4:
    // 0x2fffc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2fffc8:
    if (ctx->pc == 0x2FFFC8u) {
        ctx->pc = 0x2FFFCCu;
        goto label_2fffcc;
    }
    ctx->pc = 0x2FFFC4u;
    {
        const bool branch_taken_0x2fffc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fffc4) {
            ctx->pc = 0x2FFFD0u;
            goto label_2fffd0;
        }
    }
    ctx->pc = 0x2FFFCCu;
label_2fffcc:
    // 0x2fffcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2fffccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fffd0:
    // 0x2fffd0: 0x1200008f  beqz        $s0, . + 4 + (0x8F << 2)
label_2fffd4:
    if (ctx->pc == 0x2FFFD4u) {
        ctx->pc = 0x2FFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD0u;
        // 0x2fffd4: 0x8ee2489c  lw          $v0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFD8u;
        goto label_2fffd8;
    }
    ctx->pc = 0x2FFFD0u;
    {
        const bool branch_taken_0x2fffd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD0u;
        // 0x2fffd4: 0x8ee2489c  lw          $v0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffd0) {
            ctx->pc = 0x300210u;
            goto label_300210;
        }
    }
    ctx->pc = 0x2FFFD8u;
label_2fffd8:
    // 0x2fffd8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2fffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2fffdc:
    // 0x2fffdc: 0x90430294  lbu         $v1, 0x294($v0)
    ctx->pc = 0x2fffdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 660)));
label_2fffe0:
    // 0x2fffe0: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_2fffe4:
    if (ctx->pc == 0x2FFFE4u) {
        ctx->pc = 0x2FFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFE0u;
        // 0x2fffe4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFE8u;
        goto label_2fffe8;
    }
    ctx->pc = 0x2FFFE0u;
    {
        const bool branch_taken_0x2fffe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFE0u;
        // 0x2fffe4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffe0) {
            ctx->pc = 0x300210u;
            goto label_300210;
        }
    }
    ctx->pc = 0x2FFFE8u;
label_2fffe8:
    // 0x2fffe8: 0xc05b2de  jal         func_16CB78
label_2fffec:
    if (ctx->pc == 0x2FFFECu) {
        ctx->pc = 0x2FFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFE8u;
        // 0x2fffec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFF0u;
        goto label_2ffff0;
    }
    ctx->pc = 0x2FFFE8u;
    SET_GPR_U32(ctx, 31, 0x2FFFF0u);
    ctx->pc = 0x2FFFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFE8u;
    // 0x2fffec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x2FFFE8u, 0x2FFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFF0u;
label_2ffff0:
    // 0x2ffff0: 0x14500064  bne         $v0, $s0, . + 4 + (0x64 << 2)
label_2ffff4:
    if (ctx->pc == 0x2FFFF4u) {
        ctx->pc = 0x2FFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFF0u;
        // 0x2ffff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFF8u;
        goto label_2ffff8;
    }
    ctx->pc = 0x2FFFF0u;
    {
        const bool branch_taken_0x2ffff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFF0u;
        // 0x2ffff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffff0) {
            ctx->pc = 0x300184u;
            goto label_300184;
        }
    }
    ctx->pc = 0x2FFFF8u;
label_2ffff8:
    // 0x2ffff8: 0x56a2001a  bnel        $s5, $v0, . + 4 + (0x1A << 2)
label_2ffffc:
    if (ctx->pc == 0x2FFFFCu) {
        ctx->pc = 0x2FFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFF8u;
        // 0x2ffffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300000u;
        goto label_300000;
    }
    ctx->pc = 0x2FFFF8u;
    {
        const bool branch_taken_0x2ffff8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ffff8) {
            ctx->pc = 0x2FFFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFFF8u;
            // 0x2ffffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300064u;
            goto label_300064;
        }
    }
    ctx->pc = 0x300000u;
label_300000:
    // 0x300000: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x300000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_300004:
    // 0x300004: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x300004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_300008:
    // 0x300008: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x300008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30000c:
    // 0x30000c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_300010:
    // 0x300010: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x300010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300014:
    // 0x300014: 0x0  nop
    ctx->pc = 0x300014u;
    // NOP
label_300018:
    // 0x300018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x300018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_30001c:
    // 0x30001c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_300020:
    // 0x300020: 0x0  nop
    ctx->pc = 0x300020u;
    // NOP
label_300024:
    // 0x300024: 0x0  nop
    ctx->pc = 0x300024u;
    // NOP
label_300028:
    // 0x300028: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_30002c:
    if (ctx->pc == 0x30002Cu) {
        ctx->pc = 0x30002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300028u;
        // 0x30002c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300030u;
        goto label_300030;
    }
    ctx->pc = 0x300028u;
    {
        const bool branch_taken_0x300028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x30002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300028u;
        // 0x30002c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300028) {
            ctx->pc = 0x300018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300018;
        }
    }
    ctx->pc = 0x300030u;
label_300030:
    // 0x300030: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x300030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_300034:
    // 0x300034: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x300034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300038:
    // 0x300038: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x300038u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_30003c:
    // 0x30003c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_300040:
    // 0x300040: 0x24e7c2e8  addiu       $a3, $a3, -0x3D18
    ctx->pc = 0x300040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951656));
label_300044:
    // 0x300044: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x300044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300048:
    // 0x300048: 0xc0a71b4  jal         func_29C6D0
label_30004c:
    if (ctx->pc == 0x30004Cu) {
        ctx->pc = 0x30004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300048u;
        // 0x30004c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300050u;
        goto label_300050;
    }
    ctx->pc = 0x300048u;
    SET_GPR_U32(ctx, 31, 0x300050u);
    ctx->pc = 0x30004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300048u;
    // 0x30004c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x300048u, 0x300050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300050u;
label_300050:
    // 0x300050: 0xc136b80  jal         func_4DAE00
label_300054:
    if (ctx->pc == 0x300054u) {
        ctx->pc = 0x300054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300050u;
        // 0x300054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300058u;
        goto label_300058;
    }
    ctx->pc = 0x300050u;
    SET_GPR_U32(ctx, 31, 0x300058u);
    ctx->pc = 0x300054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300050u;
    // 0x300054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x300050u, 0x300058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300058u;
label_300058:
    // 0x300058: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x300058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_30005c:
    // 0x30005c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x30005cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_300060:
    // 0x300060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300064:
    // 0x300064: 0x5602006b  bnel        $s0, $v0, . + 4 + (0x6B << 2)
label_300068:
    if (ctx->pc == 0x300068u) {
        ctx->pc = 0x300068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300064u;
        // 0x300068: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30006Cu;
        goto label_30006c;
    }
    ctx->pc = 0x300064u;
    {
        const bool branch_taken_0x300064 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x300064) {
            ctx->pc = 0x300068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300064u;
            // 0x300068: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x30006Cu;
label_30006c:
    // 0x30006c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30006cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300070:
    // 0x300070: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300074:
    // 0x300074: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300078:
    // 0x300078: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30007c:
    // 0x30007c: 0x40f809  jalr        $v0
label_300080:
    if (ctx->pc == 0x300080u) {
        ctx->pc = 0x300080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30007Cu;
        // 0x300080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300084u;
        goto label_300084;
    }
    ctx->pc = 0x30007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300084u);
        ctx->pc = 0x300080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30007Cu;
        // 0x300080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30007Cu, 0x300084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300084u;
label_300084:
    // 0x300084: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x300084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_300088:
    // 0x300088: 0xc1073fa  jal         func_41CFE8
label_30008c:
    if (ctx->pc == 0x30008Cu) {
        ctx->pc = 0x30008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300088u;
        // 0x30008c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300090u;
        goto label_300090;
    }
    ctx->pc = 0x300088u;
    SET_GPR_U32(ctx, 31, 0x300090u);
    ctx->pc = 0x30008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300088u;
    // 0x30008c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x300088u, 0x300090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300090u;
label_300090:
    // 0x300090: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x300090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_300094:
    // 0x300094: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x300094u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_300098:
    // 0x300098: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_30009c:
    if (ctx->pc == 0x30009Cu) {
        ctx->pc = 0x30009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300098u;
        // 0x30009c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000A0u;
        goto label_3000a0;
    }
    ctx->pc = 0x300098u;
    {
        const bool branch_taken_0x300098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300098) {
            ctx->pc = 0x30009Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300098u;
            // 0x30009c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300108u;
            goto label_300108;
        }
    }
    ctx->pc = 0x3000A0u;
label_3000a0:
    // 0x3000a0: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x3000a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_3000a4:
    // 0x3000a4: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x3000a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_3000a8:
    // 0x3000a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3000ac:
    if (ctx->pc == 0x3000ACu) {
        ctx->pc = 0x3000ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000A8u;
        // 0x3000ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000B0u;
        goto label_3000b0;
    }
    ctx->pc = 0x3000A8u;
    {
        const bool branch_taken_0x3000a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000A8u;
        // 0x3000ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000a8) {
            ctx->pc = 0x3000C0u;
            goto label_3000c0;
        }
    }
    ctx->pc = 0x3000B0u;
label_3000b0:
    // 0x3000b0: 0xc107444  jal         func_41D110
label_3000b4:
    if (ctx->pc == 0x3000B4u) {
        ctx->pc = 0x3000B8u;
        goto label_3000b8;
    }
    ctx->pc = 0x3000B0u;
    SET_GPR_U32(ctx, 31, 0x3000B8u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x3000B0u, 0x3000B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000B8u;
label_3000b8:
    // 0x3000b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3000b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3000bc:
    // 0x3000bc: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x3000bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_3000c0:
    // 0x3000c0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_3000c4:
    if (ctx->pc == 0x3000C4u) {
        ctx->pc = 0x3000C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000C0u;
        // 0x3000c4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000C8u;
        goto label_3000c8;
    }
    ctx->pc = 0x3000C0u;
    {
        const bool branch_taken_0x3000c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3000c0) {
            ctx->pc = 0x3000C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3000C0u;
            // 0x3000c4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300108u;
            goto label_300108;
        }
    }
    ctx->pc = 0x3000C8u;
label_3000c8:
    // 0x3000c8: 0xc073a8e  jal         func_1CEA38
label_3000cc:
    if (ctx->pc == 0x3000CCu) {
        ctx->pc = 0x3000CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000C8u;
        // 0x3000cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000D0u;
        goto label_3000d0;
    }
    ctx->pc = 0x3000C8u;
    SET_GPR_U32(ctx, 31, 0x3000D0u);
    ctx->pc = 0x3000CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000C8u;
    // 0x3000cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x3000C8u, 0x3000D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000D0u;
label_3000d0:
    // 0x3000d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3000d4:
    if (ctx->pc == 0x3000D4u) {
        ctx->pc = 0x3000D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000D0u;
        // 0x3000d4: 0x8ee5489c  lw          $a1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000D8u;
        goto label_3000d8;
    }
    ctx->pc = 0x3000D0u;
    {
        const bool branch_taken_0x3000d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000D0u;
        // 0x3000d4: 0x8ee5489c  lw          $a1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000d0) {
            ctx->pc = 0x300104u;
            goto label_300104;
        }
    }
    ctx->pc = 0x3000D8u;
label_3000d8:
    // 0x3000d8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3000d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3000dc:
    // 0x3000dc: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x3000dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_3000e0:
    // 0x3000e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3000e4:
    if (ctx->pc == 0x3000E4u) {
        ctx->pc = 0x3000E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000E0u;
        // 0x3000e4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000E8u;
        goto label_3000e8;
    }
    ctx->pc = 0x3000E0u;
    {
        const bool branch_taken_0x3000e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3000e0) {
            ctx->pc = 0x3000E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3000E0u;
            // 0x3000e4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300108u;
            goto label_300108;
        }
    }
    ctx->pc = 0x3000E8u;
label_3000e8:
    // 0x3000e8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3000e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3000ec:
    // 0x3000ec: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3000ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3000f0:
    // 0x3000f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3000f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3000f4:
    // 0x3000f4: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x3000f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
label_3000f8:
    // 0x3000f8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x3000f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_3000fc:
    // 0x3000fc: 0xc07387a  jal         func_1CE1E8
label_300100:
    if (ctx->pc == 0x300100u) {
        ctx->pc = 0x300100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000FCu;
        // 0x300100: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300104u;
        goto label_300104;
    }
    ctx->pc = 0x3000FCu;
    SET_GPR_U32(ctx, 31, 0x300104u);
    ctx->pc = 0x300100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000FCu;
    // 0x300100: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x3000FCu, 0x300104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300104u;
label_300104:
    // 0x300104: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300108:
    // 0x300108: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x300108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30010c:
    // 0x30010c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300110:
    // 0x300110: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300114:
    // 0x300114: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300118:
    // 0x300118: 0x40f809  jalr        $v0
label_30011c:
    if (ctx->pc == 0x30011Cu) {
        ctx->pc = 0x30011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300118u;
        // 0x30011c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300120u;
        goto label_300120;
    }
    ctx->pc = 0x300118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300120u);
        ctx->pc = 0x30011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300118u;
        // 0x30011c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300118u, 0x300120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300120u;
label_300120:
    // 0x300120: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x300120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_300124:
    // 0x300124: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x300124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_300128:
    // 0x300128: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_30012c:
    // 0x30012c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30012cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300130:
    // 0x300130: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x300130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_300134:
    // 0x300134: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300138:
    // 0x300138: 0x84900002  lh          $s0, 0x2($a0)
    ctx->pc = 0x300138u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_30013c:
    // 0x30013c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30013cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300140:
    // 0x300140: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x300140u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_300144:
    // 0x300144: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x300144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_300148:
    // 0x300148: 0x40f809  jalr        $v0
label_30014c:
    if (ctx->pc == 0x30014Cu) {
        ctx->pc = 0x30014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300148u;
        // 0x30014c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300150u;
        goto label_300150;
    }
    ctx->pc = 0x300148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300150u);
        ctx->pc = 0x30014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300148u;
        // 0x30014c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300148u, 0x300150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300150u;
label_300150:
    // 0x300150: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x300150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300154:
    // 0x300154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300158:
    // 0x300158: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30015c:
    // 0x30015c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300160:
    // 0x300160: 0x40f809  jalr        $v0
label_300164:
    if (ctx->pc == 0x300164u) {
        ctx->pc = 0x300164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300160u;
        // 0x300164: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300168u;
        goto label_300168;
    }
    ctx->pc = 0x300160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300168u);
        ctx->pc = 0x300164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300160u;
        // 0x300164: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300160u, 0x300168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300168u;
label_300168:
    // 0x300168: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x300168u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_30016c:
    // 0x30016c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30016cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300170:
    // 0x300170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300174:
    // 0x300174: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x300174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300178:
    // 0x300178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x300178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30017c:
    // 0x30017c: 0x1000010c  b           . + 4 + (0x10C << 2)
label_300180:
    if (ctx->pc == 0x300180u) {
        ctx->pc = 0x300180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30017Cu;
        // 0x300180: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300184u;
        goto label_300184;
    }
    ctx->pc = 0x30017Cu;
    {
        const bool branch_taken_0x30017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30017Cu;
        // 0x300180: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30017c) {
            ctx->pc = 0x3005B0u;
            goto label_3005b0;
        }
    }
    ctx->pc = 0x300184u;
label_300184:
    // 0x300184: 0xc05b2de  jal         func_16CB78
label_300188:
    if (ctx->pc == 0x300188u) {
        ctx->pc = 0x300188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300184u;
        // 0x300188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30018Cu;
        goto label_30018c;
    }
    ctx->pc = 0x300184u;
    SET_GPR_U32(ctx, 31, 0x30018Cu);
    ctx->pc = 0x300188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300184u;
    // 0x300188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x300184u, 0x30018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30018Cu;
label_30018c:
    // 0x30018c: 0x54500021  bnel        $v0, $s0, . + 4 + (0x21 << 2)
label_300190:
    if (ctx->pc == 0x300190u) {
        ctx->pc = 0x300190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30018Cu;
        // 0x300190: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300194u;
        goto label_300194;
    }
    ctx->pc = 0x30018Cu;
    {
        const bool branch_taken_0x30018c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x30018c) {
            ctx->pc = 0x300190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30018Cu;
            // 0x300190: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x300194u;
label_300194:
    // 0x300194: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300198:
    // 0x300198: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30019c:
    // 0x30019c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30019cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3001a0:
    // 0x3001a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3001a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3001a4:
    // 0x3001a4: 0x40f809  jalr        $v0
label_3001a8:
    if (ctx->pc == 0x3001A8u) {
        ctx->pc = 0x3001A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001A4u;
        // 0x3001a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001ACu;
        goto label_3001ac;
    }
    ctx->pc = 0x3001A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3001ACu);
        ctx->pc = 0x3001A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001A4u;
        // 0x3001a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001A4u, 0x3001ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3001ACu;
label_3001ac:
    // 0x3001ac: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x3001acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_3001b0:
    // 0x3001b0: 0xc1073fa  jal         func_41CFE8
label_3001b4:
    if (ctx->pc == 0x3001B4u) {
        ctx->pc = 0x3001B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001B0u;
        // 0x3001b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001B8u;
        goto label_3001b8;
    }
    ctx->pc = 0x3001B0u;
    SET_GPR_U32(ctx, 31, 0x3001B8u);
    ctx->pc = 0x3001B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001B0u;
    // 0x3001b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x3001B0u, 0x3001B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001B8u;
label_3001b8:
    // 0x3001b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3001b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3001bc:
    // 0x3001bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3001bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3001c0:
    // 0x3001c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3001c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3001c4:
    // 0x3001c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3001c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3001c8:
    // 0x3001c8: 0x40f809  jalr        $v0
label_3001cc:
    if (ctx->pc == 0x3001CCu) {
        ctx->pc = 0x3001CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001C8u;
        // 0x3001cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001D0u;
        goto label_3001d0;
    }
    ctx->pc = 0x3001C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3001D0u);
        ctx->pc = 0x3001CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001C8u;
        // 0x3001cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001C8u, 0x3001D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3001D0u;
label_3001d0:
    // 0x3001d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3001d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3001d4:
    // 0x3001d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3001d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3001d8:
    // 0x3001d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3001d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3001dc:
    // 0x3001dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3001dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3001e0:
    // 0x3001e0: 0x40f809  jalr        $v0
label_3001e4:
    if (ctx->pc == 0x3001E4u) {
        ctx->pc = 0x3001E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001E0u;
        // 0x3001e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001E8u;
        goto label_3001e8;
    }
    ctx->pc = 0x3001E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3001E8u);
        ctx->pc = 0x3001E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001E0u;
        // 0x3001e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001E0u, 0x3001E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3001E8u;
label_3001e8:
    // 0x3001e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3001e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3001ec:
    // 0x3001ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3001ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3001f0:
    // 0x3001f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3001f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3001f4:
    // 0x3001f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3001f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3001f8:
    // 0x3001f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3001f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3001fc:
    // 0x3001fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3001fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300200:
    // 0x300200: 0xc0b570a  jal         func_2D5C28
label_300204:
    if (ctx->pc == 0x300204u) {
        ctx->pc = 0x300204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300200u;
        // 0x300204: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300208u;
        goto label_300208;
    }
    ctx->pc = 0x300200u;
    SET_GPR_U32(ctx, 31, 0x300208u);
    ctx->pc = 0x300204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300200u;
    // 0x300204: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C28u, 0x300200u, 0x300208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300208u;
label_300208:
    // 0x300208: 0x1000010f  b           . + 4 + (0x10F << 2)
label_30020c:
    if (ctx->pc == 0x30020Cu) {
        ctx->pc = 0x30020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300208u;
        // 0x30020c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300210u;
        goto label_300210;
    }
    ctx->pc = 0x300208u;
    {
        const bool branch_taken_0x300208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300208u;
        // 0x30020c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300208) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x300210u;
label_300210:
    // 0x300210: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_300214:
    // 0x300214: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x300214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_300218:
    // 0x300218: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
label_30021c:
    if (ctx->pc == 0x30021Cu) {
        ctx->pc = 0x30021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300218u;
        // 0x30021c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300220u;
        goto label_300220;
    }
    ctx->pc = 0x300218u;
    {
        const bool branch_taken_0x300218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300218u;
        // 0x30021c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300218) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x300220u;
label_300220:
    // 0x300220: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300224:
    // 0x300224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300228:
    // 0x300228: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30022c:
    // 0x30022c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300230:
    // 0x300230: 0x40f809  jalr        $v0
label_300234:
    if (ctx->pc == 0x300234u) {
        ctx->pc = 0x300234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300230u;
        // 0x300234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300238u;
        goto label_300238;
    }
    ctx->pc = 0x300230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300238u);
        ctx->pc = 0x300234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300230u;
        // 0x300234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300230u, 0x300238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300238u;
label_300238:
    // 0x300238: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x300238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_30023c:
    // 0x30023c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30023cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300240:
    // 0x300240: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300244:
    // 0x300244: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300248:
    // 0x300248: 0x40f809  jalr        $v0
label_30024c:
    if (ctx->pc == 0x30024Cu) {
        ctx->pc = 0x30024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300248u;
        // 0x30024c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300250u;
        goto label_300250;
    }
    ctx->pc = 0x300248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300250u);
        ctx->pc = 0x30024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300248u;
        // 0x30024c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300248u, 0x300250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300250u;
label_300250:
    // 0x300250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300254:
    // 0x300254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300258:
    // 0x300258: 0xc0aa924  jal         func_2AA490
label_30025c:
    if (ctx->pc == 0x30025Cu) {
        ctx->pc = 0x30025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300258u;
        // 0x30025c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300260u;
        goto label_300260;
    }
    ctx->pc = 0x300258u;
    SET_GPR_U32(ctx, 31, 0x300260u);
    ctx->pc = 0x30025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300258u;
    // 0x30025c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x300258u, 0x300260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300260u;
label_300260:
    // 0x300260: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_300264:
    if (ctx->pc == 0x300264u) {
        ctx->pc = 0x300264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300260u;
        // 0x300264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300268u;
        goto label_300268;
    }
    ctx->pc = 0x300260u;
    {
        const bool branch_taken_0x300260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300260u;
        // 0x300264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300260) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x300268u;
label_300268:
    // 0x300268: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x300268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_30026c:
    // 0x30026c: 0x1040fe7f  beqz        $v0, . + 4 + (-0x181 << 2)
label_300270:
    if (ctx->pc == 0x300270u) {
        ctx->pc = 0x300270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30026Cu;
        // 0x300270: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300274u;
        goto label_300274;
    }
    ctx->pc = 0x30026Cu;
    {
        const bool branch_taken_0x30026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30026Cu;
        // 0x300270: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30026c) {
            ctx->pc = 0x2FFC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc6c;
        }
    }
    ctx->pc = 0x300274u;
label_300274:
    // 0x300274: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300278:
    // 0x300278: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x300278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_30027c:
    // 0x30027c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x30027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_300280:
    // 0x300280: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x300280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_300284:
    // 0x300284: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x300284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_300288:
    // 0x300288: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x300288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_30028c:
    // 0x30028c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_300290:
    // 0x300290: 0xc0cdb38  jal         func_336CE0
label_300294:
    if (ctx->pc == 0x300294u) {
        ctx->pc = 0x300294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300290u;
        // 0x300294: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300298u;
        goto label_300298;
    }
    ctx->pc = 0x300290u;
    SET_GPR_U32(ctx, 31, 0x300298u);
    ctx->pc = 0x300294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300290u;
    // 0x300294: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x300290u, 0x300298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300298u;
label_300298:
    // 0x300298: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x300298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_30029c:
    // 0x30029c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30029cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3002a0:
    // 0x3002a0: 0x0  nop
    ctx->pc = 0x3002a0u;
    // NOP
label_3002a4:
    // 0x3002a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3002a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3002a8:
    // 0x3002a8: 0x0  nop
    ctx->pc = 0x3002a8u;
    // NOP
label_3002ac:
    // 0x3002ac: 0x450000e6  bc1f        . + 4 + (0xE6 << 2)
label_3002b0:
    if (ctx->pc == 0x3002B0u) {
        ctx->pc = 0x3002B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002ACu;
        // 0x3002b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002B4u;
        goto label_3002b4;
    }
    ctx->pc = 0x3002ACu;
    {
        const bool branch_taken_0x3002ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3002B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002ACu;
        // 0x3002b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002ac) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3002B4u;
label_3002b4:
    // 0x3002b4: 0xc0bfc66  jal         func_2FF198
label_3002b8:
    if (ctx->pc == 0x3002B8u) {
        ctx->pc = 0x3002B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002B4u;
        // 0x3002b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002BCu;
        goto label_3002bc;
    }
    ctx->pc = 0x3002B4u;
    SET_GPR_U32(ctx, 31, 0x3002BCu);
    ctx->pc = 0x3002B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002B4u;
    // 0x3002b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF198u, 0x3002B4u, 0x3002BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002BCu;
label_3002bc:
    // 0x3002bc: 0x145000e2  bne         $v0, $s0, . + 4 + (0xE2 << 2)
label_3002c0:
    if (ctx->pc == 0x3002C0u) {
        ctx->pc = 0x3002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002BCu;
        // 0x3002c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002C4u;
        goto label_3002c4;
    }
    ctx->pc = 0x3002BCu;
    {
        const bool branch_taken_0x3002bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002BCu;
        // 0x3002c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002bc) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3002C4u;
label_3002c4:
    // 0x3002c4: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3002c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3002c8:
    // 0x3002c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3002cc:
    if (ctx->pc == 0x3002CCu) {
        ctx->pc = 0x3002CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002C8u;
        // 0x3002cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002D0u;
        goto label_3002d0;
    }
    ctx->pc = 0x3002C8u;
    {
        const bool branch_taken_0x3002c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3002CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002C8u;
        // 0x3002cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002c8) {
            ctx->pc = 0x3002DCu;
            goto label_3002dc;
        }
    }
    ctx->pc = 0x3002D0u;
label_3002d0:
    // 0x3002d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3002d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3002d4:
    // 0x3002d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3002d8:
    if (ctx->pc == 0x3002D8u) {
        ctx->pc = 0x3002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D4u;
        // 0x3002d8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002DCu;
        goto label_3002dc;
    }
    ctx->pc = 0x3002D4u;
    {
        const bool branch_taken_0x3002d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D4u;
        // 0x3002d8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002d4) {
            ctx->pc = 0x3002E0u;
            goto label_3002e0;
        }
    }
    ctx->pc = 0x3002DCu;
label_3002dc:
    // 0x3002dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3002dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3002e0:
    // 0x3002e0: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_3002e4:
    if (ctx->pc == 0x3002E4u) {
        ctx->pc = 0x3002E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002E0u;
        // 0x3002e4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002E8u;
        goto label_3002e8;
    }
    ctx->pc = 0x3002E0u;
    {
        const bool branch_taken_0x3002e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3002e0) {
            ctx->pc = 0x3002E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3002E0u;
            // 0x3002e4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300314u;
            goto label_300314;
        }
    }
    ctx->pc = 0x3002E8u;
label_3002e8:
    // 0x3002e8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3002e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3002ec:
    // 0x3002ec: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3002ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3002f0:
    // 0x3002f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3002f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3002f4:
    // 0x3002f4: 0x40f809  jalr        $v0
label_3002f8:
    if (ctx->pc == 0x3002F8u) {
        ctx->pc = 0x3002F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002F4u;
        // 0x3002f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002FCu;
        goto label_3002fc;
    }
    ctx->pc = 0x3002F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3002FCu);
        ctx->pc = 0x3002F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002F4u;
        // 0x3002f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3002F4u, 0x3002FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3002FCu;
label_3002fc:
    // 0x3002fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3002fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300300:
    // 0x300300: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_300304:
    if (ctx->pc == 0x300304u) {
        ctx->pc = 0x300304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300300u;
        // 0x300304: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300308u;
        goto label_300308;
    }
    ctx->pc = 0x300300u;
    {
        const bool branch_taken_0x300300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x300300) {
            ctx->pc = 0x300304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300300u;
            // 0x300304: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300314u;
            goto label_300314;
        }
    }
    ctx->pc = 0x300308u;
label_300308:
    // 0x300308: 0xc0a35f6  jal         func_28D7D8
label_30030c:
    if (ctx->pc == 0x30030Cu) {
        ctx->pc = 0x30030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300308u;
        // 0x30030c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300310u;
        goto label_300310;
    }
    ctx->pc = 0x300308u;
    SET_GPR_U32(ctx, 31, 0x300310u);
    ctx->pc = 0x30030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300308u;
    // 0x30030c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x300308u, 0x300310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300310u;
label_300310:
    // 0x300310: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300314:
    // 0x300314: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300318:
    // 0x300318: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30031c:
    // 0x30031c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300320:
    // 0x300320: 0x40f809  jalr        $v0
label_300324:
    if (ctx->pc == 0x300324u) {
        ctx->pc = 0x300324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300320u;
        // 0x300324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300328u;
        goto label_300328;
    }
    ctx->pc = 0x300320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300328u);
        ctx->pc = 0x300324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300320u;
        // 0x300324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300320u, 0x300328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300328u;
label_300328:
    // 0x300328: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x300328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30032c:
    // 0x30032c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30032cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300330:
    // 0x300330: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300334:
    // 0x300334: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300338:
    // 0x300338: 0x40f809  jalr        $v0
label_30033c:
    if (ctx->pc == 0x30033Cu) {
        ctx->pc = 0x30033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300338u;
        // 0x30033c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300340u;
        goto label_300340;
    }
    ctx->pc = 0x300338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300340u);
        ctx->pc = 0x30033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300338u;
        // 0x30033c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300338u, 0x300340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300340u;
label_300340:
    // 0x300340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300344:
    // 0x300344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300348:
    // 0x300348: 0xc0aa924  jal         func_2AA490
label_30034c:
    if (ctx->pc == 0x30034Cu) {
        ctx->pc = 0x30034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300348u;
        // 0x30034c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300350u;
        goto label_300350;
    }
    ctx->pc = 0x300348u;
    SET_GPR_U32(ctx, 31, 0x300350u);
    ctx->pc = 0x30034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300348u;
    // 0x30034c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x300348u, 0x300350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300350u;
label_300350:
    // 0x300350: 0x100000bd  b           . + 4 + (0xBD << 2)
label_300354:
    if (ctx->pc == 0x300354u) {
        ctx->pc = 0x300354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300350u;
        // 0x300354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300358u;
        goto label_300358;
    }
    ctx->pc = 0x300350u;
    {
        const bool branch_taken_0x300350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300350u;
        // 0x300354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300350) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x300358u;
label_300358:
    // 0x300358: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x300358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30035c:
    // 0x30035c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x30035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_300360:
    // 0x300360: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300364:
    // 0x300364: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x300364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_300368:
    // 0x300368: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x300368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_30036c:
    // 0x30036c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_300370:
    // 0x300370: 0x84700092  lh          $s0, 0x92($v1)
    ctx->pc = 0x300370u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_300374:
    // 0x300374: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x300374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_300378:
    // 0x300378: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x300378u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_30037c:
    // 0x30037c: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x30037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_300380:
    // 0x300380: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x300380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_300384:
    // 0x300384: 0x60f809  jalr        $v1
label_300388:
    if (ctx->pc == 0x300388u) {
        ctx->pc = 0x300388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300384u;
        // 0x300388: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30038Cu;
        goto label_30038c;
    }
    ctx->pc = 0x300384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30038Cu);
        ctx->pc = 0x300388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300384u;
        // 0x300388: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300384u, 0x30038Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30038Cu;
label_30038c:
    // 0x30038c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30038cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300390:
    // 0x300390: 0xc0cdb38  jal         func_336CE0
label_300394:
    if (ctx->pc == 0x300394u) {
        ctx->pc = 0x300394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300390u;
        // 0x300394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300398u;
        goto label_300398;
    }
    ctx->pc = 0x300390u;
    SET_GPR_U32(ctx, 31, 0x300398u);
    ctx->pc = 0x300394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300390u;
    // 0x300394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x300390u, 0x300398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300398u;
label_300398:
    // 0x300398: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x300398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_30039c:
    // 0x30039c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30039cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3003a0:
    // 0x3003a0: 0x0  nop
    ctx->pc = 0x3003a0u;
    // NOP
label_3003a4:
    // 0x3003a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3003a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3003a8:
    // 0x3003a8: 0x0  nop
    ctx->pc = 0x3003a8u;
    // NOP
label_3003ac:
    // 0x3003ac: 0x450000a3  bc1f        . + 4 + (0xA3 << 2)
label_3003b0:
    if (ctx->pc == 0x3003B0u) {
        ctx->pc = 0x3003B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003ACu;
        // 0x3003b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003B4u;
        goto label_3003b4;
    }
    ctx->pc = 0x3003ACu;
    {
        const bool branch_taken_0x3003ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3003B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003ACu;
        // 0x3003b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003ac) {
            ctx->pc = 0x30063Cu;
            goto label_30063c;
        }
    }
    ctx->pc = 0x3003B4u;
label_3003b4:
    // 0x3003b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3003b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3003b8:
    // 0x3003b8: 0xc0a459a  jal         func_291668
label_3003bc:
    if (ctx->pc == 0x3003BCu) {
        ctx->pc = 0x3003BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003B8u;
        // 0x3003bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003C0u;
        goto label_3003c0;
    }
    ctx->pc = 0x3003B8u;
    SET_GPR_U32(ctx, 31, 0x3003C0u);
    ctx->pc = 0x3003BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003B8u;
    // 0x3003bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291668u, 0x3003B8u, 0x3003C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003C0u;
label_3003c0:
    // 0x3003c0: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_3003c4:
    if (ctx->pc == 0x3003C4u) {
        ctx->pc = 0x3003C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003C0u;
        // 0x3003c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003C8u;
        goto label_3003c8;
    }
    ctx->pc = 0x3003C0u;
    {
        const bool branch_taken_0x3003c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003C0u;
        // 0x3003c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003c0) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3003C8u;
label_3003c8:
    // 0x3003c8: 0xc08a61a  jal         func_229868
label_3003cc:
    if (ctx->pc == 0x3003CCu) {
        ctx->pc = 0x3003CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003C8u;
        // 0x3003cc: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003D0u;
        goto label_3003d0;
    }
    ctx->pc = 0x3003C8u;
    SET_GPR_U32(ctx, 31, 0x3003D0u);
    ctx->pc = 0x3003CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003C8u;
    // 0x3003cc: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3003C8u, 0x3003D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003D0u;
label_3003d0:
    // 0x3003d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3003d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3003d4:
    // 0x3003d4: 0x1280fe25  beqz        $s4, . + 4 + (-0x1DB << 2)
label_3003d8:
    if (ctx->pc == 0x3003D8u) {
        ctx->pc = 0x3003D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D4u;
        // 0x3003d8: 0x26820090  addiu       $v0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003DCu;
        goto label_3003dc;
    }
    ctx->pc = 0x3003D4u;
    {
        const bool branch_taken_0x3003d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D4u;
        // 0x3003d8: 0x26820090  addiu       $v0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003d4) {
            ctx->pc = 0x2FFC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc6c;
        }
    }
    ctx->pc = 0x3003DCu;
label_3003dc:
    // 0x3003dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3003dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3003e0:
    // 0x3003e0: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x3003e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3003e4:
    // 0x3003e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3003e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3003e8:
    // 0x3003e8: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x3003e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_3003ec:
    // 0x3003ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3003ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3003f0:
    // 0x3003f0: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x3003f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3003f4:
    // 0x3003f4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3003f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3003f8:
    // 0x3003f8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3003f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3003fc:
    // 0x3003fc: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_300400:
    // 0x300400: 0xc0cdb38  jal         func_336CE0
label_300404:
    if (ctx->pc == 0x300404u) {
        ctx->pc = 0x300404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300400u;
        // 0x300404: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300408u;
        goto label_300408;
    }
    ctx->pc = 0x300400u;
    SET_GPR_U32(ctx, 31, 0x300408u);
    ctx->pc = 0x300404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300400u;
    // 0x300404: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x300400u, 0x300408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300408u;
label_300408:
    // 0x300408: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x300408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_30040c:
    // 0x30040c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30040cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300410:
    // 0x300410: 0x0  nop
    ctx->pc = 0x300410u;
    // NOP
label_300414:
    // 0x300414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x300414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300418:
    // 0x300418: 0x0  nop
    ctx->pc = 0x300418u;
    // NOP
label_30041c:
    // 0x30041c: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
label_300420:
    if (ctx->pc == 0x300420u) {
        ctx->pc = 0x300420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30041Cu;
        // 0x300420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300424u;
        goto label_300424;
    }
    ctx->pc = 0x30041Cu;
    {
        const bool branch_taken_0x30041c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x300420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30041Cu;
        // 0x300420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30041c) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x300424u;
label_300424:
    // 0x300424: 0xc0bfc66  jal         func_2FF198
label_300428:
    if (ctx->pc == 0x300428u) {
        ctx->pc = 0x300428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300424u;
        // 0x300428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30042Cu;
        goto label_30042c;
    }
    ctx->pc = 0x300424u;
    SET_GPR_U32(ctx, 31, 0x30042Cu);
    ctx->pc = 0x300428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300424u;
    // 0x300428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF198u, 0x300424u, 0x30042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30042Cu;
label_30042c:
    // 0x30042c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30042cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300430:
    // 0x300430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300434:
    // 0x300434: 0x16020084  bne         $s0, $v0, . + 4 + (0x84 << 2)
label_300438:
    if (ctx->pc == 0x300438u) {
        ctx->pc = 0x300438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300434u;
        // 0x300438: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30043Cu;
        goto label_30043c;
    }
    ctx->pc = 0x300434u;
    {
        const bool branch_taken_0x300434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x300438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300434u;
        // 0x300438: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300434) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x30043Cu;
label_30043c:
    // 0x30043c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_300440:
    // 0x300440: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300444:
    // 0x300444: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x300444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_300448:
    // 0x300448: 0xc1073e0  jal         func_41CF80
label_30044c:
    if (ctx->pc == 0x30044Cu) {
        ctx->pc = 0x30044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300448u;
        // 0x30044c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300450u;
        goto label_300450;
    }
    ctx->pc = 0x300448u;
    SET_GPR_U32(ctx, 31, 0x300450u);
    ctx->pc = 0x30044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300448u;
    // 0x30044c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF80u, 0x300448u, 0x300450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300450u;
label_300450:
    // 0x300450: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300454:
    // 0x300454: 0x1670007c  bne         $s3, $s0, . + 4 + (0x7C << 2)
label_300458:
    if (ctx->pc == 0x300458u) {
        ctx->pc = 0x300458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300454u;
        // 0x300458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30045Cu;
        goto label_30045c;
    }
    ctx->pc = 0x300454u;
    {
        const bool branch_taken_0x300454 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x300458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300454u;
        // 0x300458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300454) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x30045Cu;
label_30045c:
    // 0x30045c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x30045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_300460:
    // 0x300460: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x300460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_300464:
    // 0x300464: 0xc0cd4ee  jal         func_3353B8
label_300468:
    if (ctx->pc == 0x300468u) {
        ctx->pc = 0x300468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300464u;
        // 0x300468: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30046Cu;
        goto label_30046c;
    }
    ctx->pc = 0x300464u;
    SET_GPR_U32(ctx, 31, 0x30046Cu);
    ctx->pc = 0x300468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300464u;
    // 0x300468: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x300464u, 0x30046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30046Cu;
label_30046c:
    // 0x30046c: 0x2c42003d  sltiu       $v0, $v0, 0x3D
    ctx->pc = 0x30046cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_300470:
    // 0x300470: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_300474:
    if (ctx->pc == 0x300474u) {
        ctx->pc = 0x300474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300470u;
        // 0x300474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300478u;
        goto label_300478;
    }
    ctx->pc = 0x300470u;
    {
        const bool branch_taken_0x300470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300470u;
        // 0x300474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300470) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x300478u;
label_300478:
    // 0x300478: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x300478u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_30047c:
    // 0x30047c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300480:
    // 0x300480: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x300480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_300484:
    // 0x300484: 0xc62c012c  lwc1        $f12, 0x12C($s1)
    ctx->pc = 0x300484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_300488:
    // 0x300488: 0xc0889c4  jal         func_222710
label_30048c:
    if (ctx->pc == 0x30048Cu) {
        ctx->pc = 0x30048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300488u;
        // 0x30048c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300490u;
        goto label_300490;
    }
    ctx->pc = 0x300488u;
    SET_GPR_U32(ctx, 31, 0x300490u);
    ctx->pc = 0x30048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300488u;
    // 0x30048c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x300488u, 0x300490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300490u;
label_300490:
    // 0x300490: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300494:
    // 0x300494: 0x1653006c  bne         $s2, $s3, . + 4 + (0x6C << 2)
label_300498:
    if (ctx->pc == 0x300498u) {
        ctx->pc = 0x300498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300494u;
        // 0x300498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30049Cu;
        goto label_30049c;
    }
    ctx->pc = 0x300494u;
    {
        const bool branch_taken_0x300494 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x300498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300494u;
        // 0x300498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300494) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x30049Cu;
label_30049c:
    // 0x30049c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3004a0:
    // 0x3004a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3004a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3004a4:
    // 0x3004a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3004a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3004a8:
    // 0x3004a8: 0xc0888a2  jal         func_222288
label_3004ac:
    if (ctx->pc == 0x3004ACu) {
        ctx->pc = 0x3004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004A8u;
        // 0x3004ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004B0u;
        goto label_3004b0;
    }
    ctx->pc = 0x3004A8u;
    SET_GPR_U32(ctx, 31, 0x3004B0u);
    ctx->pc = 0x3004ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004A8u;
    // 0x3004ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x3004A8u, 0x3004B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3004B0u;
label_3004b0:
    // 0x3004b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3004b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3004b4:
    // 0x3004b4: 0x16120064  bne         $s0, $s2, . + 4 + (0x64 << 2)
label_3004b8:
    if (ctx->pc == 0x3004B8u) {
        ctx->pc = 0x3004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004B4u;
        // 0x3004b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004BCu;
        goto label_3004bc;
    }
    ctx->pc = 0x3004B4u;
    {
        const bool branch_taken_0x3004b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004B4u;
        // 0x3004b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004b4) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3004BCu;
label_3004bc:
    // 0x3004bc: 0xc05b2de  jal         func_16CB78
label_3004c0:
    if (ctx->pc == 0x3004C0u) {
        ctx->pc = 0x3004C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004BCu;
        // 0x3004c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004C4u;
        goto label_3004c4;
    }
    ctx->pc = 0x3004BCu;
    SET_GPR_U32(ctx, 31, 0x3004C4u);
    ctx->pc = 0x3004C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004BCu;
    // 0x3004c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x3004BCu, 0x3004C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3004C4u;
label_3004c4:
    // 0x3004c4: 0x14500060  bne         $v0, $s0, . + 4 + (0x60 << 2)
label_3004c8:
    if (ctx->pc == 0x3004C8u) {
        ctx->pc = 0x3004C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004C4u;
        // 0x3004c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004CCu;
        goto label_3004cc;
    }
    ctx->pc = 0x3004C4u;
    {
        const bool branch_taken_0x3004c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3004C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004C4u;
        // 0x3004c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004c4) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3004CCu;
label_3004cc:
    // 0x3004cc: 0x8ee2489c  lw          $v0, 0x489C($s7)
    ctx->pc = 0x3004ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_3004d0:
    // 0x3004d0: 0x9043029f  lbu         $v1, 0x29F($v0)
    ctx->pc = 0x3004d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 671)));
label_3004d4:
    // 0x3004d4: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_3004d8:
    if (ctx->pc == 0x3004D8u) {
        ctx->pc = 0x3004D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004D4u;
        // 0x3004d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004DCu;
        goto label_3004dc;
    }
    ctx->pc = 0x3004D4u;
    {
        const bool branch_taken_0x3004d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004D4u;
        // 0x3004d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004d4) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3004DCu;
label_3004dc:
    // 0x3004dc: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3004dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3004e0:
    // 0x3004e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3004e4:
    if (ctx->pc == 0x3004E4u) {
        ctx->pc = 0x3004E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004E0u;
        // 0x3004e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004E8u;
        goto label_3004e8;
    }
    ctx->pc = 0x3004E0u;
    {
        const bool branch_taken_0x3004e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3004E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004E0u;
        // 0x3004e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004e0) {
            ctx->pc = 0x3004F4u;
            goto label_3004f4;
        }
    }
    ctx->pc = 0x3004E8u;
label_3004e8:
    // 0x3004e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3004e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3004ec:
    // 0x3004ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_3004f0:
    if (ctx->pc == 0x3004F0u) {
        ctx->pc = 0x3004F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004ECu;
        // 0x3004f0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004F4u;
        goto label_3004f4;
    }
    ctx->pc = 0x3004ECu;
    {
        const bool branch_taken_0x3004ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004ECu;
        // 0x3004f0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004ec) {
            ctx->pc = 0x3004F8u;
            goto label_3004f8;
        }
    }
    ctx->pc = 0x3004F4u;
label_3004f4:
    // 0x3004f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3004f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3004f8:
    // 0x3004f8: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_3004fc:
    if (ctx->pc == 0x3004FCu) {
        ctx->pc = 0x3004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F8u;
        // 0x3004fc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300500u;
        goto label_300500;
    }
    ctx->pc = 0x3004F8u;
    {
        const bool branch_taken_0x3004f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3004f8) {
            ctx->pc = 0x3004FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3004F8u;
            // 0x3004fc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30052Cu;
            goto label_30052c;
        }
    }
    ctx->pc = 0x300500u;
label_300500:
    // 0x300500: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_300504:
    // 0x300504: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x300504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_300508:
    // 0x300508: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30050c:
    // 0x30050c: 0x40f809  jalr        $v0
label_300510:
    if (ctx->pc == 0x300510u) {
        ctx->pc = 0x300510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30050Cu;
        // 0x300510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300514u;
        goto label_300514;
    }
    ctx->pc = 0x30050Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300514u);
        ctx->pc = 0x300510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30050Cu;
        // 0x300510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30050Cu, 0x300514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300514u;
label_300514:
    // 0x300514: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300518:
    // 0x300518: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_30051c:
    if (ctx->pc == 0x30051Cu) {
        ctx->pc = 0x30051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300518u;
        // 0x30051c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300520u;
        goto label_300520;
    }
    ctx->pc = 0x300518u;
    {
        const bool branch_taken_0x300518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x300518) {
            ctx->pc = 0x30051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300518u;
            // 0x30051c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30052Cu;
            goto label_30052c;
        }
    }
    ctx->pc = 0x300520u;
label_300520:
    // 0x300520: 0xc0a35f6  jal         func_28D7D8
label_300524:
    if (ctx->pc == 0x300524u) {
        ctx->pc = 0x300524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300520u;
        // 0x300524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300528u;
        goto label_300528;
    }
    ctx->pc = 0x300520u;
    SET_GPR_U32(ctx, 31, 0x300528u);
    ctx->pc = 0x300524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300520u;
    // 0x300524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x300520u, 0x300528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300528u;
label_300528:
    // 0x300528: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30052c:
    // 0x30052c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300530:
    // 0x300530: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300534:
    // 0x300534: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300538:
    // 0x300538: 0x40f809  jalr        $v0
label_30053c:
    if (ctx->pc == 0x30053Cu) {
        ctx->pc = 0x30053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300538u;
        // 0x30053c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300540u;
        goto label_300540;
    }
    ctx->pc = 0x300538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300540u);
        ctx->pc = 0x30053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300538u;
        // 0x30053c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300538u, 0x300540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300540u;
label_300540:
    // 0x300540: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_300544:
    // 0x300544: 0xc1073fa  jal         func_41CFE8
label_300548:
    if (ctx->pc == 0x300548u) {
        ctx->pc = 0x300548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300544u;
        // 0x300548: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30054Cu;
        goto label_30054c;
    }
    ctx->pc = 0x300544u;
    SET_GPR_U32(ctx, 31, 0x30054Cu);
    ctx->pc = 0x300548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300544u;
    // 0x300548: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x300544u, 0x30054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30054Cu;
label_30054c:
    // 0x30054c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30054cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300550:
    // 0x300550: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300554:
    // 0x300554: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300558:
    // 0x300558: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30055c:
    // 0x30055c: 0x40f809  jalr        $v0
label_300560:
    if (ctx->pc == 0x300560u) {
        ctx->pc = 0x300560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30055Cu;
        // 0x300560: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300564u;
        goto label_300564;
    }
    ctx->pc = 0x30055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300564u);
        ctx->pc = 0x300560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30055Cu;
        // 0x300560: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30055Cu, 0x300564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300564u;
label_300564:
    // 0x300564: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x300564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300568:
    // 0x300568: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x300568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_30056c:
    // 0x30056c: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x30056cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_300570:
    // 0x300570: 0x86b00002  lh          $s0, 0x2($s5)
    ctx->pc = 0x300570u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_300574:
    // 0x300574: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300578:
    // 0x300578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30057c:
    // 0x30057c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x30057cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_300580:
    // 0x300580: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x300580u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_300584:
    // 0x300584: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300588:
    // 0x300588: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x300588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_30058c:
    // 0x30058c: 0x8cd1bd30  lw          $s1, -0x42D0($a2)
    ctx->pc = 0x30058cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_300590:
    // 0x300590: 0x40f809  jalr        $v0
label_300594:
    if (ctx->pc == 0x300594u) {
        ctx->pc = 0x300594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300590u;
        // 0x300594: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300598u;
        goto label_300598;
    }
    ctx->pc = 0x300590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300598u);
        ctx->pc = 0x300594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300590u;
        // 0x300594: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300590u, 0x300598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300598u;
label_300598:
    // 0x300598: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x300598u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_30059c:
    // 0x30059c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30059cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3005a0:
    // 0x3005a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3005a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3005a4:
    // 0x3005a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3005a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3005a8:
    // 0x3005a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3005a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3005ac:
    // 0x3005ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3005acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3005b0:
    // 0x3005b0: 0xc0a9f56  jal         func_2A7D58
label_3005b4:
    if (ctx->pc == 0x3005B4u) {
        ctx->pc = 0x3005B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005B0u;
        // 0x3005b4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005B8u;
        goto label_3005b8;
    }
    ctx->pc = 0x3005B0u;
    SET_GPR_U32(ctx, 31, 0x3005B8u);
    ctx->pc = 0x3005B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005B0u;
    // 0x3005b4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D58u, 0x3005B0u, 0x3005B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005B8u;
label_3005b8:
    // 0x3005b8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3005bc:
    if (ctx->pc == 0x3005BCu) {
        ctx->pc = 0x3005BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005B8u;
        // 0x3005bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005C0u;
        goto label_3005c0;
    }
    ctx->pc = 0x3005B8u;
    {
        const bool branch_taken_0x3005b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005B8u;
        // 0x3005bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005b8) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x3005C0u;
label_3005c0:
    // 0x3005c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3005c4:
    // 0x3005c4: 0xc08a200  jal         func_228800
label_3005c8:
    if (ctx->pc == 0x3005C8u) {
        ctx->pc = 0x3005C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005C4u;
        // 0x3005c8: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005CCu;
        goto label_3005cc;
    }
    ctx->pc = 0x3005C4u;
    SET_GPR_U32(ctx, 31, 0x3005CCu);
    ctx->pc = 0x3005C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005C4u;
    // 0x3005c8: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3005C4u, 0x3005CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005CCu;
label_3005cc:
    // 0x3005cc: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x3005ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_3005d0:
    // 0x3005d0: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x3005d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_3005d4:
    // 0x3005d4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3005d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3005d8:
    // 0x3005d8: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_3005dc:
    if (ctx->pc == 0x3005DCu) {
        ctx->pc = 0x3005DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005D8u;
        // 0x3005dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005E0u;
        goto label_3005e0;
    }
    ctx->pc = 0x3005D8u;
    {
        const bool branch_taken_0x3005d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3005d8) {
            ctx->pc = 0x3005DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3005D8u;
            // 0x3005dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300640u;
            goto label_300640;
        }
    }
    ctx->pc = 0x3005E0u;
label_3005e0:
    // 0x3005e0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3005e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3005e4:
    // 0x3005e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3005e8:
    if (ctx->pc == 0x3005E8u) {
        ctx->pc = 0x3005E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005E4u;
        // 0x3005e8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005ECu;
        goto label_3005ec;
    }
    ctx->pc = 0x3005E4u;
    {
        const bool branch_taken_0x3005e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3005E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005E4u;
        // 0x3005e8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005e4) {
            ctx->pc = 0x3005F8u;
            goto label_3005f8;
        }
    }
    ctx->pc = 0x3005ECu;
label_3005ec:
    // 0x3005ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3005ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3005f0:
    // 0x3005f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3005f4:
    if (ctx->pc == 0x3005F4u) {
        ctx->pc = 0x3005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005F0u;
        // 0x3005f4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005F8u;
        goto label_3005f8;
    }
    ctx->pc = 0x3005F0u;
    {
        const bool branch_taken_0x3005f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005F0u;
        // 0x3005f4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005f0) {
            ctx->pc = 0x3005FCu;
            goto label_3005fc;
        }
    }
    ctx->pc = 0x3005F8u;
label_3005f8:
    // 0x3005f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3005f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3005fc:
    // 0x3005fc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_300600:
    if (ctx->pc == 0x300600u) {
        ctx->pc = 0x300600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005FCu;
        // 0x300600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300604u;
        goto label_300604;
    }
    ctx->pc = 0x3005FCu;
    {
        const bool branch_taken_0x3005fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3005fc) {
            ctx->pc = 0x300600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3005FCu;
            // 0x300600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300640u;
            goto label_300640;
        }
    }
    ctx->pc = 0x300604u;
label_300604:
    // 0x300604: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x300604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_300608:
    // 0x300608: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x300608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30060c:
    // 0x30060c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_300610:
    // 0x300610: 0x40f809  jalr        $v0
label_300614:
    if (ctx->pc == 0x300614u) {
        ctx->pc = 0x300614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300610u;
        // 0x300614: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300618u;
        goto label_300618;
    }
    ctx->pc = 0x300610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300618u);
        ctx->pc = 0x300614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300610u;
        // 0x300614: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300610u, 0x300618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300618u;
label_300618:
    // 0x300618: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x300618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30061c:
    // 0x30061c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_300620:
    if (ctx->pc == 0x300620u) {
        ctx->pc = 0x300620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30061Cu;
        // 0x300620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300624u;
        goto label_300624;
    }
    ctx->pc = 0x30061Cu;
    {
        const bool branch_taken_0x30061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x300620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30061Cu;
        // 0x300620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30061c) {
            ctx->pc = 0x300640u;
            goto label_300640;
        }
    }
    ctx->pc = 0x300624u;
label_300624:
    // 0x300624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300628:
    // 0x300628: 0xc0ab178  jal         func_2AC5E0
label_30062c:
    if (ctx->pc == 0x30062Cu) {
        ctx->pc = 0x30062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300628u;
        // 0x30062c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300630u;
        goto label_300630;
    }
    ctx->pc = 0x300628u;
    SET_GPR_U32(ctx, 31, 0x300630u);
    ctx->pc = 0x30062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300628u;
    // 0x30062c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC5E0u, 0x300628u, 0x300630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300630u;
label_300630:
    // 0x300630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300634:
    // 0x300634: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_300638:
    if (ctx->pc == 0x300638u) {
        ctx->pc = 0x300638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300634u;
        // 0x300638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30063Cu;
        goto label_30063c;
    }
    ctx->pc = 0x300634u;
    {
        const bool branch_taken_0x300634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x300638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300634u;
        // 0x300638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300634) {
            ctx->pc = 0x300648u;
            goto label_300648;
        }
    }
    ctx->pc = 0x30063Cu;
label_30063c:
    // 0x30063c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300640:
    // 0x300640: 0xc0a4b60  jal         func_292D80
label_300644:
    if (ctx->pc == 0x300644u) {
        ctx->pc = 0x300644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300640u;
        // 0x300644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300648u;
        goto label_300648;
    }
    ctx->pc = 0x300640u;
    SET_GPR_U32(ctx, 31, 0x300648u);
    ctx->pc = 0x300644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300640u;
    // 0x300644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x300640u, 0x300648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300648u;
label_300648:
    // 0x300648: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x300648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_30064c:
    // 0x30064c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x30064cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_300650:
    // 0x300650: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x300650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_300654:
    // 0x300654: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x300654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_300658:
    // 0x300658: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x300658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30065c:
    // 0x30065c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x30065cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_300660:
    // 0x300660: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x300660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_300664:
    // 0x300664: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x300664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300668:
    // 0x300668: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x300668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30066c:
    // 0x30066c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_300670:
    // 0x300670: 0x3e00008  jr          $ra
label_300674:
    if (ctx->pc == 0x300674u) {
        ctx->pc = 0x300674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300670u;
        // 0x300674: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300678u;
        goto label_fallthrough_0x300670;
    }
    ctx->pc = 0x300670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300670u;
        // 0x300674: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x300670:
    ctx->pc = 0x300678u;
}
