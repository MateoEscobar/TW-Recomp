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

// Function: sub_0039CBF0
// Address: 0x39cbf0 - 0x39d278
void sub_0039CBF0_0x39cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CBF0_0x39cbf0");
#endif

    switch (ctx->pc) {
        case 0x39cbf0u: goto label_39cbf0;
        case 0x39cbf4u: goto label_39cbf4;
        case 0x39cbf8u: goto label_39cbf8;
        case 0x39cbfcu: goto label_39cbfc;
        case 0x39cc00u: goto label_39cc00;
        case 0x39cc04u: goto label_39cc04;
        case 0x39cc08u: goto label_39cc08;
        case 0x39cc0cu: goto label_39cc0c;
        case 0x39cc10u: goto label_39cc10;
        case 0x39cc14u: goto label_39cc14;
        case 0x39cc18u: goto label_39cc18;
        case 0x39cc1cu: goto label_39cc1c;
        case 0x39cc20u: goto label_39cc20;
        case 0x39cc24u: goto label_39cc24;
        case 0x39cc28u: goto label_39cc28;
        case 0x39cc2cu: goto label_39cc2c;
        case 0x39cc30u: goto label_39cc30;
        case 0x39cc34u: goto label_39cc34;
        case 0x39cc38u: goto label_39cc38;
        case 0x39cc3cu: goto label_39cc3c;
        case 0x39cc40u: goto label_39cc40;
        case 0x39cc44u: goto label_39cc44;
        case 0x39cc48u: goto label_39cc48;
        case 0x39cc4cu: goto label_39cc4c;
        case 0x39cc50u: goto label_39cc50;
        case 0x39cc54u: goto label_39cc54;
        case 0x39cc58u: goto label_39cc58;
        case 0x39cc5cu: goto label_39cc5c;
        case 0x39cc60u: goto label_39cc60;
        case 0x39cc64u: goto label_39cc64;
        case 0x39cc68u: goto label_39cc68;
        case 0x39cc6cu: goto label_39cc6c;
        case 0x39cc70u: goto label_39cc70;
        case 0x39cc74u: goto label_39cc74;
        case 0x39cc78u: goto label_39cc78;
        case 0x39cc7cu: goto label_39cc7c;
        case 0x39cc80u: goto label_39cc80;
        case 0x39cc84u: goto label_39cc84;
        case 0x39cc88u: goto label_39cc88;
        case 0x39cc8cu: goto label_39cc8c;
        case 0x39cc90u: goto label_39cc90;
        case 0x39cc94u: goto label_39cc94;
        case 0x39cc98u: goto label_39cc98;
        case 0x39cc9cu: goto label_39cc9c;
        case 0x39cca0u: goto label_39cca0;
        case 0x39cca4u: goto label_39cca4;
        case 0x39cca8u: goto label_39cca8;
        case 0x39ccacu: goto label_39ccac;
        case 0x39ccb0u: goto label_39ccb0;
        case 0x39ccb4u: goto label_39ccb4;
        case 0x39ccb8u: goto label_39ccb8;
        case 0x39ccbcu: goto label_39ccbc;
        case 0x39ccc0u: goto label_39ccc0;
        case 0x39ccc4u: goto label_39ccc4;
        case 0x39ccc8u: goto label_39ccc8;
        case 0x39ccccu: goto label_39cccc;
        case 0x39ccd0u: goto label_39ccd0;
        case 0x39ccd4u: goto label_39ccd4;
        case 0x39ccd8u: goto label_39ccd8;
        case 0x39ccdcu: goto label_39ccdc;
        case 0x39cce0u: goto label_39cce0;
        case 0x39cce4u: goto label_39cce4;
        case 0x39cce8u: goto label_39cce8;
        case 0x39ccecu: goto label_39ccec;
        case 0x39ccf0u: goto label_39ccf0;
        case 0x39ccf4u: goto label_39ccf4;
        case 0x39ccf8u: goto label_39ccf8;
        case 0x39ccfcu: goto label_39ccfc;
        case 0x39cd00u: goto label_39cd00;
        case 0x39cd04u: goto label_39cd04;
        case 0x39cd08u: goto label_39cd08;
        case 0x39cd0cu: goto label_39cd0c;
        case 0x39cd10u: goto label_39cd10;
        case 0x39cd14u: goto label_39cd14;
        case 0x39cd18u: goto label_39cd18;
        case 0x39cd1cu: goto label_39cd1c;
        case 0x39cd20u: goto label_39cd20;
        case 0x39cd24u: goto label_39cd24;
        case 0x39cd28u: goto label_39cd28;
        case 0x39cd2cu: goto label_39cd2c;
        case 0x39cd30u: goto label_39cd30;
        case 0x39cd34u: goto label_39cd34;
        case 0x39cd38u: goto label_39cd38;
        case 0x39cd3cu: goto label_39cd3c;
        case 0x39cd40u: goto label_39cd40;
        case 0x39cd44u: goto label_39cd44;
        case 0x39cd48u: goto label_39cd48;
        case 0x39cd4cu: goto label_39cd4c;
        case 0x39cd50u: goto label_39cd50;
        case 0x39cd54u: goto label_39cd54;
        case 0x39cd58u: goto label_39cd58;
        case 0x39cd5cu: goto label_39cd5c;
        case 0x39cd60u: goto label_39cd60;
        case 0x39cd64u: goto label_39cd64;
        case 0x39cd68u: goto label_39cd68;
        case 0x39cd6cu: goto label_39cd6c;
        case 0x39cd70u: goto label_39cd70;
        case 0x39cd74u: goto label_39cd74;
        case 0x39cd78u: goto label_39cd78;
        case 0x39cd7cu: goto label_39cd7c;
        case 0x39cd80u: goto label_39cd80;
        case 0x39cd84u: goto label_39cd84;
        case 0x39cd88u: goto label_39cd88;
        case 0x39cd8cu: goto label_39cd8c;
        case 0x39cd90u: goto label_39cd90;
        case 0x39cd94u: goto label_39cd94;
        case 0x39cd98u: goto label_39cd98;
        case 0x39cd9cu: goto label_39cd9c;
        case 0x39cda0u: goto label_39cda0;
        case 0x39cda4u: goto label_39cda4;
        case 0x39cda8u: goto label_39cda8;
        case 0x39cdacu: goto label_39cdac;
        case 0x39cdb0u: goto label_39cdb0;
        case 0x39cdb4u: goto label_39cdb4;
        case 0x39cdb8u: goto label_39cdb8;
        case 0x39cdbcu: goto label_39cdbc;
        case 0x39cdc0u: goto label_39cdc0;
        case 0x39cdc4u: goto label_39cdc4;
        case 0x39cdc8u: goto label_39cdc8;
        case 0x39cdccu: goto label_39cdcc;
        case 0x39cdd0u: goto label_39cdd0;
        case 0x39cdd4u: goto label_39cdd4;
        case 0x39cdd8u: goto label_39cdd8;
        case 0x39cddcu: goto label_39cddc;
        case 0x39cde0u: goto label_39cde0;
        case 0x39cde4u: goto label_39cde4;
        case 0x39cde8u: goto label_39cde8;
        case 0x39cdecu: goto label_39cdec;
        case 0x39cdf0u: goto label_39cdf0;
        case 0x39cdf4u: goto label_39cdf4;
        case 0x39cdf8u: goto label_39cdf8;
        case 0x39cdfcu: goto label_39cdfc;
        case 0x39ce00u: goto label_39ce00;
        case 0x39ce04u: goto label_39ce04;
        case 0x39ce08u: goto label_39ce08;
        case 0x39ce0cu: goto label_39ce0c;
        case 0x39ce10u: goto label_39ce10;
        case 0x39ce14u: goto label_39ce14;
        case 0x39ce18u: goto label_39ce18;
        case 0x39ce1cu: goto label_39ce1c;
        case 0x39ce20u: goto label_39ce20;
        case 0x39ce24u: goto label_39ce24;
        case 0x39ce28u: goto label_39ce28;
        case 0x39ce2cu: goto label_39ce2c;
        case 0x39ce30u: goto label_39ce30;
        case 0x39ce34u: goto label_39ce34;
        case 0x39ce38u: goto label_39ce38;
        case 0x39ce3cu: goto label_39ce3c;
        case 0x39ce40u: goto label_39ce40;
        case 0x39ce44u: goto label_39ce44;
        case 0x39ce48u: goto label_39ce48;
        case 0x39ce4cu: goto label_39ce4c;
        case 0x39ce50u: goto label_39ce50;
        case 0x39ce54u: goto label_39ce54;
        case 0x39ce58u: goto label_39ce58;
        case 0x39ce5cu: goto label_39ce5c;
        case 0x39ce60u: goto label_39ce60;
        case 0x39ce64u: goto label_39ce64;
        case 0x39ce68u: goto label_39ce68;
        case 0x39ce6cu: goto label_39ce6c;
        case 0x39ce70u: goto label_39ce70;
        case 0x39ce74u: goto label_39ce74;
        case 0x39ce78u: goto label_39ce78;
        case 0x39ce7cu: goto label_39ce7c;
        case 0x39ce80u: goto label_39ce80;
        case 0x39ce84u: goto label_39ce84;
        case 0x39ce88u: goto label_39ce88;
        case 0x39ce8cu: goto label_39ce8c;
        case 0x39ce90u: goto label_39ce90;
        case 0x39ce94u: goto label_39ce94;
        case 0x39ce98u: goto label_39ce98;
        case 0x39ce9cu: goto label_39ce9c;
        case 0x39cea0u: goto label_39cea0;
        case 0x39cea4u: goto label_39cea4;
        case 0x39cea8u: goto label_39cea8;
        case 0x39ceacu: goto label_39ceac;
        case 0x39ceb0u: goto label_39ceb0;
        case 0x39ceb4u: goto label_39ceb4;
        case 0x39ceb8u: goto label_39ceb8;
        case 0x39cebcu: goto label_39cebc;
        case 0x39cec0u: goto label_39cec0;
        case 0x39cec4u: goto label_39cec4;
        case 0x39cec8u: goto label_39cec8;
        case 0x39ceccu: goto label_39cecc;
        case 0x39ced0u: goto label_39ced0;
        case 0x39ced4u: goto label_39ced4;
        case 0x39ced8u: goto label_39ced8;
        case 0x39cedcu: goto label_39cedc;
        case 0x39cee0u: goto label_39cee0;
        case 0x39cee4u: goto label_39cee4;
        case 0x39cee8u: goto label_39cee8;
        case 0x39ceecu: goto label_39ceec;
        case 0x39cef0u: goto label_39cef0;
        case 0x39cef4u: goto label_39cef4;
        case 0x39cef8u: goto label_39cef8;
        case 0x39cefcu: goto label_39cefc;
        case 0x39cf00u: goto label_39cf00;
        case 0x39cf04u: goto label_39cf04;
        case 0x39cf08u: goto label_39cf08;
        case 0x39cf0cu: goto label_39cf0c;
        case 0x39cf10u: goto label_39cf10;
        case 0x39cf14u: goto label_39cf14;
        case 0x39cf18u: goto label_39cf18;
        case 0x39cf1cu: goto label_39cf1c;
        case 0x39cf20u: goto label_39cf20;
        case 0x39cf24u: goto label_39cf24;
        case 0x39cf28u: goto label_39cf28;
        case 0x39cf2cu: goto label_39cf2c;
        case 0x39cf30u: goto label_39cf30;
        case 0x39cf34u: goto label_39cf34;
        case 0x39cf38u: goto label_39cf38;
        case 0x39cf3cu: goto label_39cf3c;
        case 0x39cf40u: goto label_39cf40;
        case 0x39cf44u: goto label_39cf44;
        case 0x39cf48u: goto label_39cf48;
        case 0x39cf4cu: goto label_39cf4c;
        case 0x39cf50u: goto label_39cf50;
        case 0x39cf54u: goto label_39cf54;
        case 0x39cf58u: goto label_39cf58;
        case 0x39cf5cu: goto label_39cf5c;
        case 0x39cf60u: goto label_39cf60;
        case 0x39cf64u: goto label_39cf64;
        case 0x39cf68u: goto label_39cf68;
        case 0x39cf6cu: goto label_39cf6c;
        case 0x39cf70u: goto label_39cf70;
        case 0x39cf74u: goto label_39cf74;
        case 0x39cf78u: goto label_39cf78;
        case 0x39cf7cu: goto label_39cf7c;
        case 0x39cf80u: goto label_39cf80;
        case 0x39cf84u: goto label_39cf84;
        case 0x39cf88u: goto label_39cf88;
        case 0x39cf8cu: goto label_39cf8c;
        case 0x39cf90u: goto label_39cf90;
        case 0x39cf94u: goto label_39cf94;
        case 0x39cf98u: goto label_39cf98;
        case 0x39cf9cu: goto label_39cf9c;
        case 0x39cfa0u: goto label_39cfa0;
        case 0x39cfa4u: goto label_39cfa4;
        case 0x39cfa8u: goto label_39cfa8;
        case 0x39cfacu: goto label_39cfac;
        case 0x39cfb0u: goto label_39cfb0;
        case 0x39cfb4u: goto label_39cfb4;
        case 0x39cfb8u: goto label_39cfb8;
        case 0x39cfbcu: goto label_39cfbc;
        case 0x39cfc0u: goto label_39cfc0;
        case 0x39cfc4u: goto label_39cfc4;
        case 0x39cfc8u: goto label_39cfc8;
        case 0x39cfccu: goto label_39cfcc;
        case 0x39cfd0u: goto label_39cfd0;
        case 0x39cfd4u: goto label_39cfd4;
        case 0x39cfd8u: goto label_39cfd8;
        case 0x39cfdcu: goto label_39cfdc;
        case 0x39cfe0u: goto label_39cfe0;
        case 0x39cfe4u: goto label_39cfe4;
        case 0x39cfe8u: goto label_39cfe8;
        case 0x39cfecu: goto label_39cfec;
        case 0x39cff0u: goto label_39cff0;
        case 0x39cff4u: goto label_39cff4;
        case 0x39cff8u: goto label_39cff8;
        case 0x39cffcu: goto label_39cffc;
        case 0x39d000u: goto label_39d000;
        case 0x39d004u: goto label_39d004;
        case 0x39d008u: goto label_39d008;
        case 0x39d00cu: goto label_39d00c;
        case 0x39d010u: goto label_39d010;
        case 0x39d014u: goto label_39d014;
        case 0x39d018u: goto label_39d018;
        case 0x39d01cu: goto label_39d01c;
        case 0x39d020u: goto label_39d020;
        case 0x39d024u: goto label_39d024;
        case 0x39d028u: goto label_39d028;
        case 0x39d02cu: goto label_39d02c;
        case 0x39d030u: goto label_39d030;
        case 0x39d034u: goto label_39d034;
        case 0x39d038u: goto label_39d038;
        case 0x39d03cu: goto label_39d03c;
        case 0x39d040u: goto label_39d040;
        case 0x39d044u: goto label_39d044;
        case 0x39d048u: goto label_39d048;
        case 0x39d04cu: goto label_39d04c;
        case 0x39d050u: goto label_39d050;
        case 0x39d054u: goto label_39d054;
        case 0x39d058u: goto label_39d058;
        case 0x39d05cu: goto label_39d05c;
        case 0x39d060u: goto label_39d060;
        case 0x39d064u: goto label_39d064;
        case 0x39d068u: goto label_39d068;
        case 0x39d06cu: goto label_39d06c;
        case 0x39d070u: goto label_39d070;
        case 0x39d074u: goto label_39d074;
        case 0x39d078u: goto label_39d078;
        case 0x39d07cu: goto label_39d07c;
        case 0x39d080u: goto label_39d080;
        case 0x39d084u: goto label_39d084;
        case 0x39d088u: goto label_39d088;
        case 0x39d08cu: goto label_39d08c;
        case 0x39d090u: goto label_39d090;
        case 0x39d094u: goto label_39d094;
        case 0x39d098u: goto label_39d098;
        case 0x39d09cu: goto label_39d09c;
        case 0x39d0a0u: goto label_39d0a0;
        case 0x39d0a4u: goto label_39d0a4;
        case 0x39d0a8u: goto label_39d0a8;
        case 0x39d0acu: goto label_39d0ac;
        case 0x39d0b0u: goto label_39d0b0;
        case 0x39d0b4u: goto label_39d0b4;
        case 0x39d0b8u: goto label_39d0b8;
        case 0x39d0bcu: goto label_39d0bc;
        case 0x39d0c0u: goto label_39d0c0;
        case 0x39d0c4u: goto label_39d0c4;
        case 0x39d0c8u: goto label_39d0c8;
        case 0x39d0ccu: goto label_39d0cc;
        case 0x39d0d0u: goto label_39d0d0;
        case 0x39d0d4u: goto label_39d0d4;
        case 0x39d0d8u: goto label_39d0d8;
        case 0x39d0dcu: goto label_39d0dc;
        case 0x39d0e0u: goto label_39d0e0;
        case 0x39d0e4u: goto label_39d0e4;
        case 0x39d0e8u: goto label_39d0e8;
        case 0x39d0ecu: goto label_39d0ec;
        case 0x39d0f0u: goto label_39d0f0;
        case 0x39d0f4u: goto label_39d0f4;
        case 0x39d0f8u: goto label_39d0f8;
        case 0x39d0fcu: goto label_39d0fc;
        case 0x39d100u: goto label_39d100;
        case 0x39d104u: goto label_39d104;
        case 0x39d108u: goto label_39d108;
        case 0x39d10cu: goto label_39d10c;
        case 0x39d110u: goto label_39d110;
        case 0x39d114u: goto label_39d114;
        case 0x39d118u: goto label_39d118;
        case 0x39d11cu: goto label_39d11c;
        case 0x39d120u: goto label_39d120;
        case 0x39d124u: goto label_39d124;
        case 0x39d128u: goto label_39d128;
        case 0x39d12cu: goto label_39d12c;
        case 0x39d130u: goto label_39d130;
        case 0x39d134u: goto label_39d134;
        case 0x39d138u: goto label_39d138;
        case 0x39d13cu: goto label_39d13c;
        case 0x39d140u: goto label_39d140;
        case 0x39d144u: goto label_39d144;
        case 0x39d148u: goto label_39d148;
        case 0x39d14cu: goto label_39d14c;
        case 0x39d150u: goto label_39d150;
        case 0x39d154u: goto label_39d154;
        case 0x39d158u: goto label_39d158;
        case 0x39d15cu: goto label_39d15c;
        case 0x39d160u: goto label_39d160;
        case 0x39d164u: goto label_39d164;
        case 0x39d168u: goto label_39d168;
        case 0x39d16cu: goto label_39d16c;
        case 0x39d170u: goto label_39d170;
        case 0x39d174u: goto label_39d174;
        case 0x39d178u: goto label_39d178;
        case 0x39d17cu: goto label_39d17c;
        case 0x39d180u: goto label_39d180;
        case 0x39d184u: goto label_39d184;
        case 0x39d188u: goto label_39d188;
        case 0x39d18cu: goto label_39d18c;
        case 0x39d190u: goto label_39d190;
        case 0x39d194u: goto label_39d194;
        case 0x39d198u: goto label_39d198;
        case 0x39d19cu: goto label_39d19c;
        case 0x39d1a0u: goto label_39d1a0;
        case 0x39d1a4u: goto label_39d1a4;
        case 0x39d1a8u: goto label_39d1a8;
        case 0x39d1acu: goto label_39d1ac;
        case 0x39d1b0u: goto label_39d1b0;
        case 0x39d1b4u: goto label_39d1b4;
        case 0x39d1b8u: goto label_39d1b8;
        case 0x39d1bcu: goto label_39d1bc;
        case 0x39d1c0u: goto label_39d1c0;
        case 0x39d1c4u: goto label_39d1c4;
        case 0x39d1c8u: goto label_39d1c8;
        case 0x39d1ccu: goto label_39d1cc;
        case 0x39d1d0u: goto label_39d1d0;
        case 0x39d1d4u: goto label_39d1d4;
        case 0x39d1d8u: goto label_39d1d8;
        case 0x39d1dcu: goto label_39d1dc;
        case 0x39d1e0u: goto label_39d1e0;
        case 0x39d1e4u: goto label_39d1e4;
        case 0x39d1e8u: goto label_39d1e8;
        case 0x39d1ecu: goto label_39d1ec;
        case 0x39d1f0u: goto label_39d1f0;
        case 0x39d1f4u: goto label_39d1f4;
        case 0x39d1f8u: goto label_39d1f8;
        case 0x39d1fcu: goto label_39d1fc;
        case 0x39d200u: goto label_39d200;
        case 0x39d204u: goto label_39d204;
        case 0x39d208u: goto label_39d208;
        case 0x39d20cu: goto label_39d20c;
        case 0x39d210u: goto label_39d210;
        case 0x39d214u: goto label_39d214;
        case 0x39d218u: goto label_39d218;
        case 0x39d21cu: goto label_39d21c;
        case 0x39d220u: goto label_39d220;
        case 0x39d224u: goto label_39d224;
        case 0x39d228u: goto label_39d228;
        case 0x39d22cu: goto label_39d22c;
        case 0x39d230u: goto label_39d230;
        case 0x39d234u: goto label_39d234;
        case 0x39d238u: goto label_39d238;
        case 0x39d23cu: goto label_39d23c;
        case 0x39d240u: goto label_39d240;
        case 0x39d244u: goto label_39d244;
        case 0x39d248u: goto label_39d248;
        case 0x39d24cu: goto label_39d24c;
        case 0x39d250u: goto label_39d250;
        case 0x39d254u: goto label_39d254;
        case 0x39d258u: goto label_39d258;
        case 0x39d25cu: goto label_39d25c;
        case 0x39d260u: goto label_39d260;
        case 0x39d264u: goto label_39d264;
        case 0x39d268u: goto label_39d268;
        case 0x39d26cu: goto label_39d26c;
        case 0x39d270u: goto label_39d270;
        case 0x39d274u: goto label_39d274;
        default: break;
    }

    ctx->pc = 0x39cbf0u;

label_39cbf0:
    // 0x39cbf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x39cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_39cbf4:
    // 0x39cbf4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x39cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_39cbf8:
    // 0x39cbf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39cbf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cbfc:
    // 0x39cbfc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x39cbfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_39cc00:
    // 0x39cc00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x39cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_39cc04:
    // 0x39cc04: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x39cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_39cc08:
    // 0x39cc08: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x39cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_39cc0c:
    // 0x39cc0c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x39cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_39cc10:
    // 0x39cc10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39cc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39cc14:
    // 0x39cc14: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x39cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_39cc18:
    // 0x39cc18: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x39cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_39cc1c:
    // 0x39cc1c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x39cc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_39cc20:
    // 0x39cc20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39cc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39cc24:
    // 0x39cc24: 0xc0e85a2  jal         func_3A1688
label_39cc28:
    if (ctx->pc == 0x39CC28u) {
        ctx->pc = 0x39CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC24u;
        // 0x39cc28: 0xe7b500b8  swc1        $f21, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC2Cu;
        goto label_39cc2c;
    }
    ctx->pc = 0x39CC24u;
    SET_GPR_U32(ctx, 31, 0x39CC2Cu);
    ctx->pc = 0x39CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC24u;
    // 0x39cc28: 0xe7b500b8  swc1        $f21, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x39CC24u, 0x39CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC2Cu;
label_39cc2c:
    // 0x39cc2c: 0xc0e8568  jal         func_3A15A0
label_39cc30:
    if (ctx->pc == 0x39CC30u) {
        ctx->pc = 0x39CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC2Cu;
        // 0x39cc30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC34u;
        goto label_39cc34;
    }
    ctx->pc = 0x39CC2Cu;
    SET_GPR_U32(ctx, 31, 0x39CC34u);
    ctx->pc = 0x39CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC2Cu;
    // 0x39cc30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x39CC2Cu, 0x39CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC34u;
label_39cc34:
    // 0x39cc34: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x39cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39cc38:
    // 0x39cc38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39cc3c:
    // 0x39cc3c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x39cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_39cc40:
    // 0x39cc40: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x39cc40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
label_39cc44:
    // 0x39cc44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_39cc48:
    if (ctx->pc == 0x39CC48u) {
        ctx->pc = 0x39CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC44u;
        // 0x39cc48: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC4Cu;
        goto label_39cc4c;
    }
    ctx->pc = 0x39CC44u;
    {
        const bool branch_taken_0x39cc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC44u;
        // 0x39cc48: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc44) {
            ctx->pc = 0x39CC5Cu;
            goto label_39cc5c;
        }
    }
    ctx->pc = 0x39CC4Cu;
label_39cc4c:
    // 0x39cc4c: 0xc0e829a  jal         func_3A0A68
label_39cc50:
    if (ctx->pc == 0x39CC50u) {
        ctx->pc = 0x39CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC4Cu;
        // 0x39cc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC54u;
        goto label_39cc54;
    }
    ctx->pc = 0x39CC4Cu;
    SET_GPR_U32(ctx, 31, 0x39CC54u);
    ctx->pc = 0x39CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC4Cu;
    // 0x39cc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A68u, 0x39CC4Cu, 0x39CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC54u;
label_39cc54:
    // 0x39cc54: 0x1000017a  b           . + 4 + (0x17A << 2)
label_39cc58:
    if (ctx->pc == 0x39CC58u) {
        ctx->pc = 0x39CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC54u;
        // 0x39cc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC5Cu;
        goto label_39cc5c;
    }
    ctx->pc = 0x39CC54u;
    {
        const bool branch_taken_0x39cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC54u;
        // 0x39cc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc54) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39CC5Cu;
label_39cc5c:
    // 0x39cc5c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_39cc60:
    if (ctx->pc == 0x39CC60u) {
        ctx->pc = 0x39CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC5Cu;
        // 0x39cc60: 0x922200e9  lbu         $v0, 0xE9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 233)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC64u;
        goto label_39cc64;
    }
    ctx->pc = 0x39CC5Cu;
    {
        const bool branch_taken_0x39cc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39cc5c) {
            ctx->pc = 0x39CC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CC5Cu;
            // 0x39cc60: 0x922200e9  lbu         $v0, 0xE9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 233)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CC94u;
            goto label_39cc94;
        }
    }
    ctx->pc = 0x39CC64u;
label_39cc64:
    // 0x39cc64: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x39cc64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_39cc68:
    // 0x39cc68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39cc6c:
    // 0x39cc6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39cc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_39cc70:
    // 0x39cc70: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x39cc70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_39cc74:
    // 0x39cc74: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x39cc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
label_39cc78:
    // 0x39cc78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39cc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39cc7c:
    // 0x39cc7c: 0x5444000e  bnel        $v0, $a0, . + 4 + (0xE << 2)
label_39cc80:
    if (ctx->pc == 0x39CC80u) {
        ctx->pc = 0x39CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC7Cu;
        // 0x39cc80: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC84u;
        goto label_39cc84;
    }
    ctx->pc = 0x39CC7Cu;
    {
        const bool branch_taken_0x39cc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x39cc7c) {
            ctx->pc = 0x39CC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CC7Cu;
            // 0x39cc80: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CCB8u;
            goto label_39ccb8;
        }
    }
    ctx->pc = 0x39CC84u;
label_39cc84:
    // 0x39cc84: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39cc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_39cc88:
    // 0x39cc88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39cc8c:
    if (ctx->pc == 0x39CC8Cu) {
        ctx->pc = 0x39CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC88u;
        // 0x39cc8c: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC90u;
        goto label_39cc90;
    }
    ctx->pc = 0x39CC88u;
    {
        const bool branch_taken_0x39cc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cc88) {
            ctx->pc = 0x39CC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CC88u;
            // 0x39cc8c: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CCB8u;
            goto label_39ccb8;
        }
    }
    ctx->pc = 0x39CC90u;
label_39cc90:
    // 0x39cc90: 0x922200e9  lbu         $v0, 0xE9($s1)
    ctx->pc = 0x39cc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 233)));
label_39cc94:
    // 0x39cc94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39cc98:
    if (ctx->pc == 0x39CC98u) {
        ctx->pc = 0x39CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC94u;
        // 0x39cc98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CC9Cu;
        goto label_39cc9c;
    }
    ctx->pc = 0x39CC94u;
    {
        const bool branch_taken_0x39cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC94u;
        // 0x39cc98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc94) {
            ctx->pc = 0x39CCA8u;
            goto label_39cca8;
        }
    }
    ctx->pc = 0x39CC9Cu;
label_39cc9c:
    // 0x39cc9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cca0:
    // 0x39cca0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x39cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39cca4:
    // 0x39cca4: 0xa06456e4  sb          $a0, 0x56E4($v1)
    ctx->pc = 0x39cca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22244), (uint8_t)GPR_U32(ctx, 4));
label_39cca8:
    // 0x39cca8: 0xc0e7d14  jal         func_39F450
label_39ccac:
    if (ctx->pc == 0x39CCACu) {
        ctx->pc = 0x39CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCA8u;
        // 0x39ccac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CCB0u;
        goto label_39ccb0;
    }
    ctx->pc = 0x39CCA8u;
    SET_GPR_U32(ctx, 31, 0x39CCB0u);
    ctx->pc = 0x39CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CCA8u;
    // 0x39ccac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F450u, 0x39CCA8u, 0x39CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CCB0u;
label_39ccb0:
    // 0x39ccb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_39ccb4:
    if (ctx->pc == 0x39CCB4u) {
        ctx->pc = 0x39CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCB0u;
        // 0x39ccb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CCB8u;
        goto label_39ccb8;
    }
    ctx->pc = 0x39CCB0u;
    {
        const bool branch_taken_0x39ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCB0u;
        // 0x39ccb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ccb0) {
            ctx->pc = 0x39CCE8u;
            goto label_39cce8;
        }
    }
    ctx->pc = 0x39CCB8u;
label_39ccb8:
    // 0x39ccb8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x39ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39ccbc:
    // 0x39ccbc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x39ccbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_39ccc0:
    // 0x39ccc0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x39ccc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_39ccc4:
    // 0x39ccc4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x39ccc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
label_39ccc8:
    // 0x39ccc8: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x39ccc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_39cccc:
    // 0x39cccc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x39ccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_39ccd0:
    // 0x39ccd0: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_39ccd4:
    if (ctx->pc == 0x39CCD4u) {
        ctx->pc = 0x39CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCD0u;
        // 0x39ccd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CCD8u;
        goto label_39ccd8;
    }
    ctx->pc = 0x39CCD0u;
    {
        const bool branch_taken_0x39ccd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x39CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCD0u;
        // 0x39ccd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ccd0) {
            ctx->pc = 0x39CCE8u;
            goto label_39cce8;
        }
    }
    ctx->pc = 0x39CCD8u;
label_39ccd8:
    // 0x39ccd8: 0xc0d4efc  jal         func_353BF0
label_39ccdc:
    if (ctx->pc == 0x39CCDCu) {
        ctx->pc = 0x39CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCD8u;
        // 0x39ccdc: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CCE0u;
        goto label_39cce0;
    }
    ctx->pc = 0x39CCD8u;
    SET_GPR_U32(ctx, 31, 0x39CCE0u);
    ctx->pc = 0x39CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CCD8u;
    // 0x39ccdc: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x39CCD8u, 0x39CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CCE0u;
label_39cce0:
    // 0x39cce0: 0x10000157  b           . + 4 + (0x157 << 2)
label_39cce4:
    if (ctx->pc == 0x39CCE4u) {
        ctx->pc = 0x39CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCE0u;
        // 0x39cce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CCE8u;
        goto label_39cce8;
    }
    ctx->pc = 0x39CCE0u;
    {
        const bool branch_taken_0x39cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCE0u;
        // 0x39cce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cce0) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39CCE8u;
label_39cce8:
    // 0x39cce8: 0xc0e858c  jal         func_3A1630
label_39ccec:
    if (ctx->pc == 0x39CCECu) {
        ctx->pc = 0x39CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCE8u;
        // 0x39ccec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CCF0u;
        goto label_39ccf0;
    }
    ctx->pc = 0x39CCE8u;
    SET_GPR_U32(ctx, 31, 0x39CCF0u);
    ctx->pc = 0x39CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CCE8u;
    // 0x39ccec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x39CCE8u, 0x39CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CCF0u;
label_39ccf0:
    // 0x39ccf0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x39ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39ccf4:
    // 0x39ccf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39ccf8:
    // 0x39ccf8: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x39ccf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_39ccfc:
    // 0x39ccfc: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_39cd00:
    if (ctx->pc == 0x39CD00u) {
        ctx->pc = 0x39CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCFCu;
        // 0x39cd00: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD04u;
        goto label_39cd04;
    }
    ctx->pc = 0x39CCFCu;
    {
        const bool branch_taken_0x39ccfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCFCu;
        // 0x39cd00: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ccfc) {
            ctx->pc = 0x39CD74u;
            goto label_39cd74;
        }
    }
    ctx->pc = 0x39CD04u;
label_39cd04:
    // 0x39cd04: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x39cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39cd08:
    // 0x39cd08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39cd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cd0c:
    // 0x39cd0c: 0x0  nop
    ctx->pc = 0x39cd0cu;
    // NOP
label_39cd10:
    // 0x39cd10: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x39cd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39cd14:
    // 0x39cd14: 0x0  nop
    ctx->pc = 0x39cd14u;
    // NOP
label_39cd18:
    // 0x39cd18: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_39cd1c:
    if (ctx->pc == 0x39CD1Cu) {
        ctx->pc = 0x39CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD18u;
        // 0x39cd1c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD20u;
        goto label_39cd20;
    }
    ctx->pc = 0x39CD18u;
    {
        const bool branch_taken_0x39cd18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD18u;
        // 0x39cd1c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd18) {
            ctx->pc = 0x39CD34u;
            goto label_39cd34;
        }
    }
    ctx->pc = 0x39CD20u;
label_39cd20:
    // 0x39cd20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39cd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39cd24:
    // 0x39cd24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39cd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39cd28:
    // 0x39cd28: 0x0  nop
    ctx->pc = 0x39cd28u;
    // NOP
label_39cd2c:
    // 0x39cd2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x39cd2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39cd30:
    // 0x39cd30: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x39cd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_39cd34:
    // 0x39cd34: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x39cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_39cd38:
    // 0x39cd38: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x39cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_39cd3c:
    // 0x39cd3c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x39cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_39cd40:
    // 0x39cd40: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x39cd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39cd44:
    // 0x39cd44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39cd48:
    if (ctx->pc == 0x39CD48u) {
        ctx->pc = 0x39CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD44u;
        // 0x39cd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD4Cu;
        goto label_39cd4c;
    }
    ctx->pc = 0x39CD44u;
    {
        const bool branch_taken_0x39cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD44u;
        // 0x39cd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd44) {
            ctx->pc = 0x39CD5Cu;
            goto label_39cd5c;
        }
    }
    ctx->pc = 0x39CD4Cu;
label_39cd4c:
    // 0x39cd4c: 0xc0e7b18  jal         func_39EC60
label_39cd50:
    if (ctx->pc == 0x39CD50u) {
        ctx->pc = 0x39CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD4Cu;
        // 0x39cd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD54u;
        goto label_39cd54;
    }
    ctx->pc = 0x39CD4Cu;
    SET_GPR_U32(ctx, 31, 0x39CD54u);
    ctx->pc = 0x39CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD4Cu;
    // 0x39cd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EC60u, 0x39CD4Cu, 0x39CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD54u;
label_39cd54:
    // 0x39cd54: 0x1000013a  b           . + 4 + (0x13A << 2)
label_39cd58:
    if (ctx->pc == 0x39CD58u) {
        ctx->pc = 0x39CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD54u;
        // 0x39cd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD5Cu;
        goto label_39cd5c;
    }
    ctx->pc = 0x39CD54u;
    {
        const bool branch_taken_0x39cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD54u;
        // 0x39cd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd54) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39CD5Cu;
label_39cd5c:
    // 0x39cd5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39cd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39cd60:
    // 0x39cd60: 0x248500c0  addiu       $a1, $a0, 0xC0
    ctx->pc = 0x39cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_39cd64:
    // 0x39cd64: 0xc0e761c  jal         func_39D870
label_39cd68:
    if (ctx->pc == 0x39CD68u) {
        ctx->pc = 0x39CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD64u;
        // 0x39cd68: 0x248600b0  addiu       $a2, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD6Cu;
        goto label_39cd6c;
    }
    ctx->pc = 0x39CD64u;
    SET_GPR_U32(ctx, 31, 0x39CD6Cu);
    ctx->pc = 0x39CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD64u;
    // 0x39cd68: 0x248600b0  addiu       $a2, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D870u, 0x39CD64u, 0x39CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD6Cu;
label_39cd6c:
    // 0x39cd6c: 0x10000134  b           . + 4 + (0x134 << 2)
label_39cd70:
    if (ctx->pc == 0x39CD70u) {
        ctx->pc = 0x39CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD6Cu;
        // 0x39cd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD74u;
        goto label_39cd74;
    }
    ctx->pc = 0x39CD6Cu;
    {
        const bool branch_taken_0x39cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD6Cu;
        // 0x39cd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd6c) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39CD74u;
label_39cd74:
    // 0x39cd74: 0x14820132  bne         $a0, $v0, . + 4 + (0x132 << 2)
label_39cd78:
    if (ctx->pc == 0x39CD78u) {
        ctx->pc = 0x39CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD74u;
        // 0x39cd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD7Cu;
        goto label_39cd7c;
    }
    ctx->pc = 0x39CD74u;
    {
        const bool branch_taken_0x39cd74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD74u;
        // 0x39cd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd74) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39CD7Cu;
label_39cd7c:
    // 0x39cd7c: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x39cd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_39cd80:
    // 0x39cd80: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_39cd84:
    if (ctx->pc == 0x39CD84u) {
        ctx->pc = 0x39CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD80u;
        // 0x39cd84: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD88u;
        goto label_39cd88;
    }
    ctx->pc = 0x39CD80u;
    {
        const bool branch_taken_0x39cd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD80u;
        // 0x39cd84: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd80) {
            ctx->pc = 0x39CF48u;
            goto label_39cf48;
        }
    }
    ctx->pc = 0x39CD88u;
label_39cd88:
    // 0x39cd88: 0x8c63489c  lw          $v1, 0x489C($v1)
    ctx->pc = 0x39cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39cd8c:
    // 0x39cd8c: 0x906256e4  lbu         $v0, 0x56E4($v1)
    ctx->pc = 0x39cd8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22244)));
label_39cd90:
    // 0x39cd90: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_39cd94:
    if (ctx->pc == 0x39CD94u) {
        ctx->pc = 0x39CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD90u;
        // 0x39cd94: 0x8e2200e0  lw          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CD98u;
        goto label_39cd98;
    }
    ctx->pc = 0x39CD90u;
    {
        const bool branch_taken_0x39cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cd90) {
            ctx->pc = 0x39CD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CD90u;
            // 0x39cd94: 0x8e2200e0  lw          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CDDCu;
            goto label_39cddc;
        }
    }
    ctx->pc = 0x39CD98u;
label_39cd98:
    // 0x39cd98: 0x922200e4  lbu         $v0, 0xE4($s1)
    ctx->pc = 0x39cd98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_39cd9c:
    // 0x39cd9c: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
label_39cda0:
    if (ctx->pc == 0x39CDA0u) {
        ctx->pc = 0x39CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD9Cu;
        // 0x39cda0: 0x922200e6  lbu         $v0, 0xE6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CDA4u;
        goto label_39cda4;
    }
    ctx->pc = 0x39CD9Cu;
    {
        const bool branch_taken_0x39cd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cd9c) {
            ctx->pc = 0x39CDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CD9Cu;
            // 0x39cda0: 0x922200e6  lbu         $v0, 0xE6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CF0Cu;
            goto label_39cf0c;
        }
    }
    ctx->pc = 0x39CDA4u;
label_39cda4:
    // 0x39cda4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x39cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_39cda8:
    // 0x39cda8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x39cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39cdac:
    // 0x39cdac: 0xc072c04  jal         func_1CB010
label_39cdb0:
    if (ctx->pc == 0x39CDB0u) {
        ctx->pc = 0x39CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDACu;
        // 0x39cdb0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CDB4u;
        goto label_39cdb4;
    }
    ctx->pc = 0x39CDACu;
    SET_GPR_U32(ctx, 31, 0x39CDB4u);
    ctx->pc = 0x39CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDACu;
    // 0x39cdb0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x39CDACu, 0x39CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDB4u;
label_39cdb4:
    // 0x39cdb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39cdb8:
    // 0x39cdb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39cdb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cdbc:
    // 0x39cdbc: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x39cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_39cdc0:
    // 0x39cdc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cdc4:
    // 0x39cdc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39cdc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39cdc8:
    // 0x39cdc8: 0xc063514  jal         func_18D450
label_39cdcc:
    if (ctx->pc == 0x39CDCCu) {
        ctx->pc = 0x39CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDC8u;
        // 0x39cdcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CDD0u;
        goto label_39cdd0;
    }
    ctx->pc = 0x39CDC8u;
    SET_GPR_U32(ctx, 31, 0x39CDD0u);
    ctx->pc = 0x39CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDC8u;
    // 0x39cdcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x39CDC8u, 0x39CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDD0u;
label_39cdd0:
    // 0x39cdd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cdd4:
    // 0x39cdd4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_39cdd8:
    if (ctx->pc == 0x39CDD8u) {
        ctx->pc = 0x39CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDD4u;
        // 0x39cdd8: 0xa22200e4  sb          $v0, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CDDCu;
        goto label_39cddc;
    }
    ctx->pc = 0x39CDD4u;
    {
        const bool branch_taken_0x39cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDD4u;
        // 0x39cdd8: 0xa22200e4  sb          $v0, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cdd4) {
            ctx->pc = 0x39CF48u;
            goto label_39cf48;
        }
    }
    ctx->pc = 0x39CDDCu;
label_39cddc:
    // 0x39cddc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39cde0:
    // 0x39cde0: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x39cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_39cde4:
    // 0x39cde4: 0x84630224  lh          $v1, 0x224($v1)
    ctx->pc = 0x39cde4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39cde8:
    // 0x39cde8: 0x18600057  blez        $v1, . + 4 + (0x57 << 2)
label_39cdec:
    if (ctx->pc == 0x39CDECu) {
        ctx->pc = 0x39CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDE8u;
        // 0x39cdec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CDF0u;
        goto label_39cdf0;
    }
    ctx->pc = 0x39CDE8u;
    {
        const bool branch_taken_0x39cde8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDE8u;
        // 0x39cdec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cde8) {
            ctx->pc = 0x39CF48u;
            goto label_39cf48;
        }
    }
    ctx->pc = 0x39CDF0u;
label_39cdf0:
    // 0x39cdf0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x39cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_39cdf4:
    // 0x39cdf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x39cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_39cdf8:
    // 0x39cdf8: 0x245ed810  addiu       $fp, $v0, -0x27F0
    ctx->pc = 0x39cdf8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_39cdfc:
    // 0x39cdfc: 0x2475deb8  addiu       $s5, $v1, -0x2148
    ctx->pc = 0x39cdfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
label_39ce00:
    // 0x39ce00: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x39ce00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39ce04:
    // 0x39ce04: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x39ce04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_39ce08:
    // 0x39ce08: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x39ce08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_39ce0c:
    // 0x39ce0c: 0x0  nop
    ctx->pc = 0x39ce0cu;
    // NOP
label_39ce10:
    // 0x39ce10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39ce14:
    // 0x39ce14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39ce14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ce18:
    // 0x39ce18: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x39ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39ce1c:
    // 0x39ce1c: 0xc0e409a  jal         func_390268
label_39ce20:
    if (ctx->pc == 0x39CE20u) {
        ctx->pc = 0x39CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE1Cu;
        // 0x39ce20: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE24u;
        goto label_39ce24;
    }
    ctx->pc = 0x39CE1Cu;
    SET_GPR_U32(ctx, 31, 0x39CE24u);
    ctx->pc = 0x39CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE1Cu;
    // 0x39ce20: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39CE1Cu, 0x39CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE24u;
label_39ce24:
    // 0x39ce24: 0xc0874fa  jal         func_21D3E8
label_39ce28:
    if (ctx->pc == 0x39CE28u) {
        ctx->pc = 0x39CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE24u;
        // 0x39ce28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE2Cu;
        goto label_39ce2c;
    }
    ctx->pc = 0x39CE24u;
    SET_GPR_U32(ctx, 31, 0x39CE2Cu);
    ctx->pc = 0x39CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE24u;
    // 0x39ce28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x39CE24u, 0x39CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE2Cu;
label_39ce2c:
    // 0x39ce2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39ce2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ce30:
    // 0x39ce30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ce34:
    // 0x39ce34: 0x922200e4  lbu         $v0, 0xE4($s1)
    ctx->pc = 0x39ce34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_39ce38:
    // 0x39ce38: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
label_39ce3c:
    if (ctx->pc == 0x39CE3Cu) {
        ctx->pc = 0x39CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE38u;
        // 0x39ce3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE40u;
        goto label_39ce40;
    }
    ctx->pc = 0x39CE38u;
    {
        const bool branch_taken_0x39ce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ce38) {
            ctx->pc = 0x39CE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CE38u;
            // 0x39ce3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CE9Cu;
            goto label_39ce9c;
        }
    }
    ctx->pc = 0x39CE40u;
label_39ce40:
    // 0x39ce40: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x39ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_39ce44:
    // 0x39ce44: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
label_39ce48:
    if (ctx->pc == 0x39CE48u) {
        ctx->pc = 0x39CE4Cu;
        goto label_39ce4c;
    }
    ctx->pc = 0x39CE44u;
    {
        const bool branch_taken_0x39ce44 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x39ce44) {
            ctx->pc = 0x39CE9Cu;
            goto label_39ce9c;
        }
    }
    ctx->pc = 0x39CE4Cu;
label_39ce4c:
    // 0x39ce4c: 0x82040019  lb          $a0, 0x19($s0)
    ctx->pc = 0x39ce4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_39ce50:
    // 0x39ce50: 0x10960003  beq         $a0, $s6, . + 4 + (0x3 << 2)
label_39ce54:
    if (ctx->pc == 0x39CE54u) {
        ctx->pc = 0x39CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE50u;
        // 0x39ce54: 0x971018  mult        $v0, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE58u;
        goto label_39ce58;
    }
    ctx->pc = 0x39CE50u;
    {
        const bool branch_taken_0x39ce50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x39CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE50u;
        // 0x39ce54: 0x971018  mult        $v0, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce50) {
            ctx->pc = 0x39CE60u;
            goto label_39ce60;
        }
    }
    ctx->pc = 0x39CE58u;
label_39ce58:
    // 0x39ce58: 0x10000002  b           . + 4 + (0x2 << 2)
label_39ce5c:
    if (ctx->pc == 0x39CE5Cu) {
        ctx->pc = 0x39CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE58u;
        // 0x39ce5c: 0x5e2021  addu        $a0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE60u;
        goto label_39ce60;
    }
    ctx->pc = 0x39CE58u;
    {
        const bool branch_taken_0x39ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE58u;
        // 0x39ce5c: 0x5e2021  addu        $a0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce58) {
            ctx->pc = 0x39CE64u;
            goto label_39ce64;
        }
    }
    ctx->pc = 0x39CE60u;
label_39ce60:
    // 0x39ce60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ce64:
    // 0x39ce64: 0xc0512e2  jal         func_144B88
label_39ce68:
    if (ctx->pc == 0x39CE68u) {
        ctx->pc = 0x39CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE64u;
        // 0x39ce68: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE6Cu;
        goto label_39ce6c;
    }
    ctx->pc = 0x39CE64u;
    SET_GPR_U32(ctx, 31, 0x39CE6Cu);
    ctx->pc = 0x39CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE64u;
    // 0x39ce68: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x39CE64u, 0x39CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE6Cu;
label_39ce6c:
    // 0x39ce6c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_39ce70:
    if (ctx->pc == 0x39CE70u) {
        ctx->pc = 0x39CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE6Cu;
        // 0x39ce70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE74u;
        goto label_39ce74;
    }
    ctx->pc = 0x39CE6Cu;
    {
        const bool branch_taken_0x39ce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ce6c) {
            ctx->pc = 0x39CE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CE6Cu;
            // 0x39ce70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CE9Cu;
            goto label_39ce9c;
        }
    }
    ctx->pc = 0x39CE74u;
label_39ce74:
    // 0x39ce74: 0x82040019  lb          $a0, 0x19($s0)
    ctx->pc = 0x39ce74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_39ce78:
    // 0x39ce78: 0x10960003  beq         $a0, $s6, . + 4 + (0x3 << 2)
label_39ce7c:
    if (ctx->pc == 0x39CE7Cu) {
        ctx->pc = 0x39CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE78u;
        // 0x39ce7c: 0x971018  mult        $v0, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE80u;
        goto label_39ce80;
    }
    ctx->pc = 0x39CE78u;
    {
        const bool branch_taken_0x39ce78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x39CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE78u;
        // 0x39ce7c: 0x971018  mult        $v0, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce78) {
            ctx->pc = 0x39CE88u;
            goto label_39ce88;
        }
    }
    ctx->pc = 0x39CE80u;
label_39ce80:
    // 0x39ce80: 0x10000002  b           . + 4 + (0x2 << 2)
label_39ce84:
    if (ctx->pc == 0x39CE84u) {
        ctx->pc = 0x39CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE80u;
        // 0x39ce84: 0x5e2021  addu        $a0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE88u;
        goto label_39ce88;
    }
    ctx->pc = 0x39CE80u;
    {
        const bool branch_taken_0x39ce80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE80u;
        // 0x39ce84: 0x5e2021  addu        $a0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce80) {
            ctx->pc = 0x39CE8Cu;
            goto label_39ce8c;
        }
    }
    ctx->pc = 0x39CE88u;
label_39ce88:
    // 0x39ce88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ce8c:
    // 0x39ce8c: 0xc0512e2  jal         func_144B88
label_39ce90:
    if (ctx->pc == 0x39CE90u) {
        ctx->pc = 0x39CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE8Cu;
        // 0x39ce90: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE94u;
        goto label_39ce94;
    }
    ctx->pc = 0x39CE8Cu;
    SET_GPR_U32(ctx, 31, 0x39CE94u);
    ctx->pc = 0x39CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE8Cu;
    // 0x39ce90: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x39CE8Cu, 0x39CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE94u;
label_39ce94:
    // 0x39ce94: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39ce98:
    if (ctx->pc == 0x39CE98u) {
        ctx->pc = 0x39CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE94u;
        // 0x39ce98: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CE9Cu;
        goto label_39ce9c;
    }
    ctx->pc = 0x39CE94u;
    {
        const bool branch_taken_0x39ce94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ce94) {
            ctx->pc = 0x39CE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CE94u;
            // 0x39ce98: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CE9Cu;
            goto label_39ce9c;
        }
    }
    ctx->pc = 0x39CE9Cu;
label_39ce9c:
    // 0x39ce9c: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
label_39cea0:
    if (ctx->pc == 0x39CEA0u) {
        ctx->pc = 0x39CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE9Cu;
        // 0x39cea0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEA4u;
        goto label_39cea4;
    }
    ctx->pc = 0x39CE9Cu;
    {
        const bool branch_taken_0x39ce9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE9Cu;
        // 0x39cea0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce9c) {
            ctx->pc = 0x39CF28u;
            goto label_39cf28;
        }
    }
    ctx->pc = 0x39CEA4u;
label_39cea4:
    // 0x39cea4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x39cea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39cea8:
    // 0x39cea8: 0xc072c04  jal         func_1CB010
label_39ceac:
    if (ctx->pc == 0x39CEACu) {
        ctx->pc = 0x39CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEA8u;
        // 0x39ceac: 0x24649570  addiu       $a0, $v1, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEB0u;
        goto label_39ceb0;
    }
    ctx->pc = 0x39CEA8u;
    SET_GPR_U32(ctx, 31, 0x39CEB0u);
    ctx->pc = 0x39CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CEA8u;
    // 0x39ceac: 0x24649570  addiu       $a0, $v1, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x39CEA8u, 0x39CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEB0u;
label_39ceb0:
    // 0x39ceb0: 0x922200e4  lbu         $v0, 0xE4($s1)
    ctx->pc = 0x39ceb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_39ceb4:
    // 0x39ceb4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_39ceb8:
    if (ctx->pc == 0x39CEB8u) {
        ctx->pc = 0x39CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEB4u;
        // 0x39ceb8: 0x922200e6  lbu         $v0, 0xE6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEBCu;
        goto label_39cebc;
    }
    ctx->pc = 0x39CEB4u;
    {
        const bool branch_taken_0x39ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ceb4) {
            ctx->pc = 0x39CEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CEB4u;
            // 0x39ceb8: 0x922200e6  lbu         $v0, 0xE6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CF0Cu;
            goto label_39cf0c;
        }
    }
    ctx->pc = 0x39CEBCu;
label_39cebc:
    // 0x39cebc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39cec0:
    // 0x39cec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cec4:
    // 0x39cec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39cec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cec8:
    // 0x39cec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39cec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39cecc:
    // 0x39cecc: 0xc063514  jal         func_18D450
label_39ced0:
    if (ctx->pc == 0x39CED0u) {
        ctx->pc = 0x39CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CECCu;
        // 0x39ced0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CED4u;
        goto label_39ced4;
    }
    ctx->pc = 0x39CECCu;
    SET_GPR_U32(ctx, 31, 0x39CED4u);
    ctx->pc = 0x39CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CECCu;
    // 0x39ced0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x39CECCu, 0x39CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CED4u;
label_39ced4:
    // 0x39ced4: 0x82020019  lb          $v0, 0x19($s0)
    ctx->pc = 0x39ced4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_39ced8:
    // 0x39ced8: 0x10560003  beq         $v0, $s6, . + 4 + (0x3 << 2)
label_39cedc:
    if (ctx->pc == 0x39CEDCu) {
        ctx->pc = 0x39CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CED8u;
        // 0x39cedc: 0x571818  mult        $v1, $v0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEE0u;
        goto label_39cee0;
    }
    ctx->pc = 0x39CED8u;
    {
        const bool branch_taken_0x39ced8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x39CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CED8u;
        // 0x39cedc: 0x571818  mult        $v1, $v0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ced8) {
            ctx->pc = 0x39CEE8u;
            goto label_39cee8;
        }
    }
    ctx->pc = 0x39CEE0u;
label_39cee0:
    // 0x39cee0: 0x10000002  b           . + 4 + (0x2 << 2)
label_39cee4:
    if (ctx->pc == 0x39CEE4u) {
        ctx->pc = 0x39CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEE0u;
        // 0x39cee4: 0x7e2021  addu        $a0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEE8u;
        goto label_39cee8;
    }
    ctx->pc = 0x39CEE0u;
    {
        const bool branch_taken_0x39cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEE0u;
        // 0x39cee4: 0x7e2021  addu        $a0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cee0) {
            ctx->pc = 0x39CEECu;
            goto label_39ceec;
        }
    }
    ctx->pc = 0x39CEE8u;
label_39cee8:
    // 0x39cee8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ceec:
    // 0x39ceec: 0xc0512e2  jal         func_144B88
label_39cef0:
    if (ctx->pc == 0x39CEF0u) {
        ctx->pc = 0x39CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEECu;
        // 0x39cef0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEF4u;
        goto label_39cef4;
    }
    ctx->pc = 0x39CEECu;
    SET_GPR_U32(ctx, 31, 0x39CEF4u);
    ctx->pc = 0x39CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CEECu;
    // 0x39cef0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x39CEECu, 0x39CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEF4u;
label_39cef4:
    // 0x39cef4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_39cef8:
    if (ctx->pc == 0x39CEF8u) {
        ctx->pc = 0x39CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEF4u;
        // 0x39cef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CEFCu;
        goto label_39cefc;
    }
    ctx->pc = 0x39CEF4u;
    {
        const bool branch_taken_0x39cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEF4u;
        // 0x39cef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cef4) {
            ctx->pc = 0x39CF00u;
            goto label_39cf00;
        }
    }
    ctx->pc = 0x39CEFCu;
label_39cefc:
    // 0x39cefc: 0xa22200e9  sb          $v0, 0xE9($s1)
    ctx->pc = 0x39cefcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 233), (uint8_t)GPR_U32(ctx, 2));
label_39cf00:
    // 0x39cf00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cf04:
    // 0x39cf04: 0x10000010  b           . + 4 + (0x10 << 2)
label_39cf08:
    if (ctx->pc == 0x39CF08u) {
        ctx->pc = 0x39CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF04u;
        // 0x39cf08: 0xa22300e4  sb          $v1, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF0Cu;
        goto label_39cf0c;
    }
    ctx->pc = 0x39CF04u;
    {
        const bool branch_taken_0x39cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF04u;
        // 0x39cf08: 0xa22300e4  sb          $v1, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf04) {
            ctx->pc = 0x39CF48u;
            goto label_39cf48;
        }
    }
    ctx->pc = 0x39CF0Cu;
label_39cf0c:
    // 0x39cf0c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_39cf10:
    if (ctx->pc == 0x39CF10u) {
        ctx->pc = 0x39CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF0Cu;
        // 0x39cf10: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF14u;
        goto label_39cf14;
    }
    ctx->pc = 0x39CF0Cu;
    {
        const bool branch_taken_0x39cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cf0c) {
            ctx->pc = 0x39CF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CF0Cu;
            // 0x39cf10: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CF4Cu;
            goto label_39cf4c;
        }
    }
    ctx->pc = 0x39CF14u;
label_39cf14:
    // 0x39cf14: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x39cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39cf18:
    // 0x39cf18: 0xc0d4e84  jal         func_353A10
label_39cf1c:
    if (ctx->pc == 0x39CF1Cu) {
        ctx->pc = 0x39CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF18u;
        // 0x39cf1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF20u;
        goto label_39cf20;
    }
    ctx->pc = 0x39CF18u;
    SET_GPR_U32(ctx, 31, 0x39CF20u);
    ctx->pc = 0x39CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF18u;
    // 0x39cf1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353A10u, 0x39CF18u, 0x39CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF20u;
label_39cf20:
    // 0x39cf20: 0x1000000a  b           . + 4 + (0xA << 2)
label_39cf24:
    if (ctx->pc == 0x39CF24u) {
        ctx->pc = 0x39CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF20u;
        // 0x39cf24: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF28u;
        goto label_39cf28;
    }
    ctx->pc = 0x39CF20u;
    {
        const bool branch_taken_0x39cf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF20u;
        // 0x39cf24: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf20) {
            ctx->pc = 0x39CF4Cu;
            goto label_39cf4c;
        }
    }
    ctx->pc = 0x39CF28u;
label_39cf28:
    // 0x39cf28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39cf2c:
    // 0x39cf2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39cf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39cf30:
    // 0x39cf30: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x39cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39cf34:
    // 0x39cf34: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x39cf34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_39cf38:
    // 0x39cf38: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39cf38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39cf3c:
    // 0x39cf3c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x39cf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39cf40:
    // 0x39cf40: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_39cf44:
    if (ctx->pc == 0x39CF44u) {
        ctx->pc = 0x39CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF40u;
        // 0x39cf44: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF48u;
        goto label_39cf48;
    }
    ctx->pc = 0x39CF40u;
    {
        const bool branch_taken_0x39cf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF40u;
        // 0x39cf44: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf40) {
            ctx->pc = 0x39CE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ce10;
        }
    }
    ctx->pc = 0x39CF48u;
label_39cf48:
    // 0x39cf48: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x39cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39cf4c:
    // 0x39cf4c: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x39cf4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_39cf50:
    // 0x39cf50: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_39cf54:
    if (ctx->pc == 0x39CF54u) {
        ctx->pc = 0x39CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF50u;
        // 0x39cf54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF58u;
        goto label_39cf58;
    }
    ctx->pc = 0x39CF50u;
    {
        const bool branch_taken_0x39cf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF50u;
        // 0x39cf54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf50) {
            ctx->pc = 0x39D010u;
            goto label_39d010;
        }
    }
    ctx->pc = 0x39CF58u;
label_39cf58:
    // 0x39cf58: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x39cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_39cf5c:
    // 0x39cf5c: 0xc0d582a  jal         func_3560A8
label_39cf60:
    if (ctx->pc == 0x39CF60u) {
        ctx->pc = 0x39CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF5Cu;
        // 0x39cf60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF64u;
        goto label_39cf64;
    }
    ctx->pc = 0x39CF5Cu;
    SET_GPR_U32(ctx, 31, 0x39CF64u);
    ctx->pc = 0x39CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF5Cu;
    // 0x39cf60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560A8u, 0x39CF5Cu, 0x39CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF64u;
label_39cf64:
    // 0x39cf64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x39cf64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39cf68:
    // 0x39cf68: 0x0  nop
    ctx->pc = 0x39cf68u;
    // NOP
label_39cf6c:
    // 0x39cf6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39cf6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39cf70:
    // 0x39cf70: 0x0  nop
    ctx->pc = 0x39cf70u;
    // NOP
label_39cf74:
    // 0x39cf74: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_39cf78:
    if (ctx->pc == 0x39CF78u) {
        ctx->pc = 0x39CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF74u;
        // 0x39cf78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CF7Cu;
        goto label_39cf7c;
    }
    ctx->pc = 0x39CF74u;
    {
        const bool branch_taken_0x39cf74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39cf74) {
            ctx->pc = 0x39CF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CF74u;
            // 0x39cf78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CF94u;
            goto label_39cf94;
        }
    }
    ctx->pc = 0x39CF7Cu;
label_39cf7c:
    // 0x39cf7c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x39cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_39cf80:
    // 0x39cf80: 0x90620081  lbu         $v0, 0x81($v1)
    ctx->pc = 0x39cf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
label_39cf84:
    // 0x39cf84: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x39cf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_39cf88:
    // 0x39cf88: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_39cf8c:
    if (ctx->pc == 0x39CF8Cu) {
        ctx->pc = 0x39CF90u;
        goto label_39cf90;
    }
    ctx->pc = 0x39CF88u;
    {
        const bool branch_taken_0x39cf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cf88) {
            ctx->pc = 0x39CFE4u;
            goto label_39cfe4;
        }
    }
    ctx->pc = 0x39CF90u;
label_39cf90:
    // 0x39cf90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x39cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_39cf94:
    // 0x39cf94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39cf98:
    // 0x39cf98: 0xc0e8100  jal         func_3A0400
label_39cf9c:
    if (ctx->pc == 0x39CF9Cu) {
        ctx->pc = 0x39CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF98u;
        // 0x39cf9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFA0u;
        goto label_39cfa0;
    }
    ctx->pc = 0x39CF98u;
    SET_GPR_U32(ctx, 31, 0x39CFA0u);
    ctx->pc = 0x39CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF98u;
    // 0x39cf9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0400u, 0x39CF98u, 0x39CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFA0u;
label_39cfa0:
    // 0x39cfa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_39cfa4:
    if (ctx->pc == 0x39CFA4u) {
        ctx->pc = 0x39CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFA0u;
        // 0x39cfa4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFA8u;
        goto label_39cfa8;
    }
    ctx->pc = 0x39CFA0u;
    {
        const bool branch_taken_0x39cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFA0u;
        // 0x39cfa4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cfa0) {
            ctx->pc = 0x39CFD0u;
            goto label_39cfd0;
        }
    }
    ctx->pc = 0x39CFA8u;
label_39cfa8:
    // 0x39cfa8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x39cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_39cfac:
    // 0x39cfac: 0xc0d580a  jal         func_356028
label_39cfb0:
    if (ctx->pc == 0x39CFB0u) {
        ctx->pc = 0x39CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFACu;
        // 0x39cfb0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFB4u;
        goto label_39cfb4;
    }
    ctx->pc = 0x39CFACu;
    SET_GPR_U32(ctx, 31, 0x39CFB4u);
    ctx->pc = 0x39CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFACu;
    // 0x39cfb0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356028u, 0x39CFACu, 0x39CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFB4u;
label_39cfb4:
    // 0x39cfb4: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x39cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_39cfb8:
    // 0x39cfb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x39cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_39cfbc:
    // 0x39cfbc: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x39cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_39cfc0:
    // 0x39cfc0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x39cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_39cfc4:
    // 0x39cfc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39cfc8:
    // 0x39cfc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_39cfcc:
    if (ctx->pc == 0x39CFCCu) {
        ctx->pc = 0x39CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFC8u;
        // 0x39cfcc: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFD0u;
        goto label_39cfd0;
    }
    ctx->pc = 0x39CFC8u;
    {
        const bool branch_taken_0x39cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFC8u;
        // 0x39cfcc: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cfc8) {
            ctx->pc = 0x39CFE4u;
            goto label_39cfe4;
        }
    }
    ctx->pc = 0x39CFD0u;
label_39cfd0:
    // 0x39cfd0: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39cfd4:
    // 0x39cfd4: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39cfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39cfd8:
    // 0x39cfd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_39cfdc:
    if (ctx->pc == 0x39CFDCu) {
        ctx->pc = 0x39CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFD8u;
        // 0x39cfdc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFE0u;
        goto label_39cfe0;
    }
    ctx->pc = 0x39CFD8u;
    {
        const bool branch_taken_0x39cfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFD8u;
        // 0x39cfdc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cfd8) {
            ctx->pc = 0x39CFE4u;
            goto label_39cfe4;
        }
    }
    ctx->pc = 0x39CFE0u;
label_39cfe0:
    // 0x39cfe0: 0xa462001c  sh          $v0, 0x1C($v1)
    ctx->pc = 0x39cfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
label_39cfe4:
    // 0x39cfe4: 0xc0d5862  jal         func_356188
label_39cfe8:
    if (ctx->pc == 0x39CFE8u) {
        ctx->pc = 0x39CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFE4u;
        // 0x39cfe8: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFECu;
        goto label_39cfec;
    }
    ctx->pc = 0x39CFE4u;
    SET_GPR_U32(ctx, 31, 0x39CFECu);
    ctx->pc = 0x39CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFE4u;
    // 0x39cfe8: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356188u, 0x39CFE4u, 0x39CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFECu;
label_39cfec:
    // 0x39cfec: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39cff0:
    // 0x39cff0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39cff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39cff4:
    // 0x39cff4: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x39cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_39cff8:
    // 0x39cff8: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x39cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39cffc:
    // 0x39cffc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39d000:
    // 0x39d000: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x39d000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_39d004:
    // 0x39d004: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x39d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_39d008:
    // 0x39d008: 0x40f809  jalr        $v0
label_39d00c:
    if (ctx->pc == 0x39D00Cu) {
        ctx->pc = 0x39D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D008u;
        // 0x39d00c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D010u;
        goto label_39d010;
    }
    ctx->pc = 0x39D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D010u);
        ctx->pc = 0x39D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D008u;
        // 0x39d00c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D008u, 0x39D010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D010u;
label_39d010:
    // 0x39d010: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d014:
    // 0x39d014: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39d014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d018:
    // 0x39d018: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_39d01c:
    if (ctx->pc == 0x39D01Cu) {
        ctx->pc = 0x39D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D018u;
        // 0x39d01c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D020u;
        goto label_39d020;
    }
    ctx->pc = 0x39D018u;
    {
        const bool branch_taken_0x39d018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D018u;
        // 0x39d01c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d018) {
            ctx->pc = 0x39D0F8u;
            goto label_39d0f8;
        }
    }
    ctx->pc = 0x39D020u;
label_39d020:
    // 0x39d020: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x39d020u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_39d024:
    // 0x39d024: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x39d024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_39d028:
    // 0x39d028: 0x36737fff  ori         $s3, $s3, 0x7FFF
    ctx->pc = 0x39d028u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32767);
label_39d02c:
    // 0x39d02c: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x39d02cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39d030:
    // 0x39d030: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39d030u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d034:
    // 0x39d034: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39d034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d038:
    // 0x39d038: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39d03c:
    // 0x39d03c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x39d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_39d040:
    // 0x39d040: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x39d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39d044:
    // 0x39d044: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_39d048:
    if (ctx->pc == 0x39D048u) {
        ctx->pc = 0x39D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D044u;
        // 0x39d048: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D04Cu;
        goto label_39d04c;
    }
    ctx->pc = 0x39D044u;
    {
        const bool branch_taken_0x39d044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d044) {
            ctx->pc = 0x39D048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D044u;
            // 0x39d048: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D0E0u;
            goto label_39d0e0;
        }
    }
    ctx->pc = 0x39D04Cu;
label_39d04c:
    // 0x39d04c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x39d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_39d050:
    // 0x39d050: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_39d054:
    if (ctx->pc == 0x39D054u) {
        ctx->pc = 0x39D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D050u;
        // 0x39d054: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D058u;
        goto label_39d058;
    }
    ctx->pc = 0x39D050u;
    {
        const bool branch_taken_0x39d050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D050u;
        // 0x39d054: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d050) {
            ctx->pc = 0x39D0DCu;
            goto label_39d0dc;
        }
    }
    ctx->pc = 0x39D058u;
label_39d058:
    // 0x39d058: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x39d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_39d05c:
    // 0x39d05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d060:
    // 0x39d060: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x39d060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_39d064:
    // 0x39d064: 0xc0d582a  jal         func_3560A8
label_39d068:
    if (ctx->pc == 0x39D068u) {
        ctx->pc = 0x39D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D064u;
        // 0x39d068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D06Cu;
        goto label_39d06c;
    }
    ctx->pc = 0x39D064u;
    SET_GPR_U32(ctx, 31, 0x39D06Cu);
    ctx->pc = 0x39D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D064u;
    // 0x39d068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560A8u, 0x39D064u, 0x39D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D06Cu;
label_39d06c:
    // 0x39d06c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x39d06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39d070:
    // 0x39d070: 0x0  nop
    ctx->pc = 0x39d070u;
    // NOP
label_39d074:
    // 0x39d074: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_39d078:
    if (ctx->pc == 0x39D078u) {
        ctx->pc = 0x39D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D074u;
        // 0x39d078: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D07Cu;
        goto label_39d07c;
    }
    ctx->pc = 0x39D074u;
    {
        const bool branch_taken_0x39d074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39d074) {
            ctx->pc = 0x39D078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D074u;
            // 0x39d078: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D090u;
            goto label_39d090;
        }
    }
    ctx->pc = 0x39D07Cu;
label_39d07c:
    // 0x39d07c: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x39d07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
label_39d080:
    // 0x39d080: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x39d080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_39d084:
    // 0x39d084: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_39d088:
    if (ctx->pc == 0x39D088u) {
        ctx->pc = 0x39D08Cu;
        goto label_39d08c;
    }
    ctx->pc = 0x39D084u;
    {
        const bool branch_taken_0x39d084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d084) {
            ctx->pc = 0x39D0D4u;
            goto label_39d0d4;
        }
    }
    ctx->pc = 0x39D08Cu;
label_39d08c:
    // 0x39d08c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x39d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_39d090:
    // 0x39d090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d094:
    // 0x39d094: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d098:
    // 0x39d098: 0xc0e816a  jal         func_3A05A8
label_39d09c:
    if (ctx->pc == 0x39D09Cu) {
        ctx->pc = 0x39D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D098u;
        // 0x39d09c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0A0u;
        goto label_39d0a0;
    }
    ctx->pc = 0x39D098u;
    SET_GPR_U32(ctx, 31, 0x39D0A0u);
    ctx->pc = 0x39D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D098u;
    // 0x39d09c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A05A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A05A8u, 0x39D098u, 0x39D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0A0u;
label_39d0a0:
    // 0x39d0a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39d0a4:
    if (ctx->pc == 0x39D0A4u) {
        ctx->pc = 0x39D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0A0u;
        // 0x39d0a4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0A8u;
        goto label_39d0a8;
    }
    ctx->pc = 0x39D0A0u;
    {
        const bool branch_taken_0x39d0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0A0u;
        // 0x39d0a4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0a0) {
            ctx->pc = 0x39D0C4u;
            goto label_39d0c4;
        }
    }
    ctx->pc = 0x39D0A8u;
label_39d0a8:
    // 0x39d0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d0ac:
    // 0x39d0ac: 0xc0d580a  jal         func_356028
label_39d0b0:
    if (ctx->pc == 0x39D0B0u) {
        ctx->pc = 0x39D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0ACu;
        // 0x39d0b0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0B4u;
        goto label_39d0b4;
    }
    ctx->pc = 0x39D0ACu;
    SET_GPR_U32(ctx, 31, 0x39D0B4u);
    ctx->pc = 0x39D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D0ACu;
    // 0x39d0b0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356028u, 0x39D0ACu, 0x39D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0B4u;
label_39d0b4:
    // 0x39d0b4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x39d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_39d0b8:
    // 0x39d0b8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x39d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_39d0bc:
    // 0x39d0bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_39d0c0:
    if (ctx->pc == 0x39D0C0u) {
        ctx->pc = 0x39D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0BCu;
        // 0x39d0c0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0C4u;
        goto label_39d0c4;
    }
    ctx->pc = 0x39D0BCu;
    {
        const bool branch_taken_0x39d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0BCu;
        // 0x39d0c0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0bc) {
            ctx->pc = 0x39D0D4u;
            goto label_39d0d4;
        }
    }
    ctx->pc = 0x39D0C4u;
label_39d0c4:
    // 0x39d0c4: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d0c8:
    // 0x39d0c8: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39d0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39d0cc:
    // 0x39d0cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_39d0d0:
    if (ctx->pc == 0x39D0D0u) {
        ctx->pc = 0x39D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0CCu;
        // 0x39d0d0: 0xa476001c  sh          $s6, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0D4u;
        goto label_39d0d4;
    }
    ctx->pc = 0x39D0CCu;
    {
        const bool branch_taken_0x39d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d0cc) {
            ctx->pc = 0x39D0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D0CCu;
            // 0x39d0d0: 0xa476001c  sh          $s6, 0x1C($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D0D4u;
            goto label_39d0d4;
        }
    }
    ctx->pc = 0x39D0D4u;
label_39d0d4:
    // 0x39d0d4: 0xc0d5862  jal         func_356188
label_39d0d8:
    if (ctx->pc == 0x39D0D8u) {
        ctx->pc = 0x39D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0D4u;
        // 0x39d0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0DCu;
        goto label_39d0dc;
    }
    ctx->pc = 0x39D0D4u;
    SET_GPR_U32(ctx, 31, 0x39D0DCu);
    ctx->pc = 0x39D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D0D4u;
    // 0x39d0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356188u, 0x39D0D4u, 0x39D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0DCu;
label_39d0dc:
    // 0x39d0dc: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d0e0:
    // 0x39d0e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39d0e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39d0e4:
    // 0x39d0e4: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x39d0e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_39d0e8:
    // 0x39d0e8: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39d0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d0ec:
    // 0x39d0ec: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x39d0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d0f0:
    // 0x39d0f0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_39d0f4:
    if (ctx->pc == 0x39D0F4u) {
        ctx->pc = 0x39D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0F0u;
        // 0x39d0f4: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0F8u;
        goto label_39d0f8;
    }
    ctx->pc = 0x39D0F0u;
    {
        const bool branch_taken_0x39d0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0F0u;
        // 0x39d0f4: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0f0) {
            ctx->pc = 0x39D038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d038;
        }
    }
    ctx->pc = 0x39D0F8u;
label_39d0f8:
    // 0x39d0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d0fc:
    // 0x39d0fc: 0xc0e83b6  jal         func_3A0ED8
label_39d100:
    if (ctx->pc == 0x39D100u) {
        ctx->pc = 0x39D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0FCu;
        // 0x39d100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D104u;
        goto label_39d104;
    }
    ctx->pc = 0x39D0FCu;
    SET_GPR_U32(ctx, 31, 0x39D104u);
    ctx->pc = 0x39D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D0FCu;
    // 0x39d100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0ED8u, 0x39D0FCu, 0x39D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D104u;
label_39d104:
    // 0x39d104: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d108:
    // 0x39d108: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39d108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d10c:
    // 0x39d10c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_39d110:
    if (ctx->pc == 0x39D110u) {
        ctx->pc = 0x39D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D10Cu;
        // 0x39d110: 0x8e2500a4  lw          $a1, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D114u;
        goto label_39d114;
    }
    ctx->pc = 0x39D10Cu;
    {
        const bool branch_taken_0x39d10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d10c) {
            ctx->pc = 0x39D110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D10Cu;
            // 0x39d110: 0x8e2500a4  lw          $a1, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D1E8u;
            goto label_39d1e8;
        }
    }
    ctx->pc = 0x39D114u;
label_39d114:
    // 0x39d114: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x39d114u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_39d118:
    // 0x39d118: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x39d118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_39d11c:
    // 0x39d11c: 0x36737fff  ori         $s3, $s3, 0x7FFF
    ctx->pc = 0x39d11cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32767);
label_39d120:
    // 0x39d120: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x39d120u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39d124:
    // 0x39d124: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39d124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d128:
    // 0x39d128: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39d128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d12c:
    // 0x39d12c: 0x0  nop
    ctx->pc = 0x39d12cu;
    // NOP
label_39d130:
    // 0x39d130: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x39d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_39d134:
    // 0x39d134: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x39d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_39d138:
    // 0x39d138: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39d13c:
    // 0x39d13c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_39d140:
    if (ctx->pc == 0x39D140u) {
        ctx->pc = 0x39D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D13Cu;
        // 0x39d140: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D144u;
        goto label_39d144;
    }
    ctx->pc = 0x39D13Cu;
    {
        const bool branch_taken_0x39d13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D13Cu;
        // 0x39d140: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d13c) {
            ctx->pc = 0x39D1C8u;
            goto label_39d1c8;
        }
    }
    ctx->pc = 0x39D144u;
label_39d144:
    // 0x39d144: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x39d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_39d148:
    // 0x39d148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d14c:
    // 0x39d14c: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x39d14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_39d150:
    // 0x39d150: 0xc0d582a  jal         func_3560A8
label_39d154:
    if (ctx->pc == 0x39D154u) {
        ctx->pc = 0x39D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D150u;
        // 0x39d154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D158u;
        goto label_39d158;
    }
    ctx->pc = 0x39D150u;
    SET_GPR_U32(ctx, 31, 0x39D158u);
    ctx->pc = 0x39D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D150u;
    // 0x39d154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560A8u, 0x39D150u, 0x39D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D158u;
label_39d158:
    // 0x39d158: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x39d158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39d15c:
    // 0x39d15c: 0x0  nop
    ctx->pc = 0x39d15cu;
    // NOP
label_39d160:
    // 0x39d160: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_39d164:
    if (ctx->pc == 0x39D164u) {
        ctx->pc = 0x39D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D160u;
        // 0x39d164: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D168u;
        goto label_39d168;
    }
    ctx->pc = 0x39D160u;
    {
        const bool branch_taken_0x39d160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39d160) {
            ctx->pc = 0x39D164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D160u;
            // 0x39d164: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D17Cu;
            goto label_39d17c;
        }
    }
    ctx->pc = 0x39D168u;
label_39d168:
    // 0x39d168: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x39d168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
label_39d16c:
    // 0x39d16c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x39d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_39d170:
    // 0x39d170: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_39d174:
    if (ctx->pc == 0x39D174u) {
        ctx->pc = 0x39D178u;
        goto label_39d178;
    }
    ctx->pc = 0x39D170u;
    {
        const bool branch_taken_0x39d170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d170) {
            ctx->pc = 0x39D1C0u;
            goto label_39d1c0;
        }
    }
    ctx->pc = 0x39D178u;
label_39d178:
    // 0x39d178: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39d178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39d17c:
    // 0x39d17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d180:
    // 0x39d180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39d180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d184:
    // 0x39d184: 0xc0e81da  jal         func_3A0768
label_39d188:
    if (ctx->pc == 0x39D188u) {
        ctx->pc = 0x39D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D184u;
        // 0x39d188: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D18Cu;
        goto label_39d18c;
    }
    ctx->pc = 0x39D184u;
    SET_GPR_U32(ctx, 31, 0x39D18Cu);
    ctx->pc = 0x39D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D184u;
    // 0x39d188: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0768u, 0x39D184u, 0x39D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D18Cu;
label_39d18c:
    // 0x39d18c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39d190:
    if (ctx->pc == 0x39D190u) {
        ctx->pc = 0x39D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D18Cu;
        // 0x39d190: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D194u;
        goto label_39d194;
    }
    ctx->pc = 0x39D18Cu;
    {
        const bool branch_taken_0x39d18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D18Cu;
        // 0x39d190: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d18c) {
            ctx->pc = 0x39D1B0u;
            goto label_39d1b0;
        }
    }
    ctx->pc = 0x39D194u;
label_39d194:
    // 0x39d194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d198:
    // 0x39d198: 0xc0d580a  jal         func_356028
label_39d19c:
    if (ctx->pc == 0x39D19Cu) {
        ctx->pc = 0x39D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D198u;
        // 0x39d19c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1A0u;
        goto label_39d1a0;
    }
    ctx->pc = 0x39D198u;
    SET_GPR_U32(ctx, 31, 0x39D1A0u);
    ctx->pc = 0x39D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D198u;
    // 0x39d19c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356028u, 0x39D198u, 0x39D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D1A0u;
label_39d1a0:
    // 0x39d1a0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x39d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_39d1a4:
    // 0x39d1a4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x39d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_39d1a8:
    // 0x39d1a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_39d1ac:
    if (ctx->pc == 0x39D1ACu) {
        ctx->pc = 0x39D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1A8u;
        // 0x39d1ac: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1B0u;
        goto label_39d1b0;
    }
    ctx->pc = 0x39D1A8u;
    {
        const bool branch_taken_0x39d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1A8u;
        // 0x39d1ac: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1a8) {
            ctx->pc = 0x39D1C0u;
            goto label_39d1c0;
        }
    }
    ctx->pc = 0x39D1B0u;
label_39d1b0:
    // 0x39d1b0: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d1b4:
    // 0x39d1b4: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39d1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39d1b8:
    // 0x39d1b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_39d1bc:
    if (ctx->pc == 0x39D1BCu) {
        ctx->pc = 0x39D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1B8u;
        // 0x39d1bc: 0xa476001c  sh          $s6, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1C0u;
        goto label_39d1c0;
    }
    ctx->pc = 0x39D1B8u;
    {
        const bool branch_taken_0x39d1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d1b8) {
            ctx->pc = 0x39D1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D1B8u;
            // 0x39d1bc: 0xa476001c  sh          $s6, 0x1C($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D1C0u;
            goto label_39d1c0;
        }
    }
    ctx->pc = 0x39D1C0u;
label_39d1c0:
    // 0x39d1c0: 0xc0d5862  jal         func_356188
label_39d1c4:
    if (ctx->pc == 0x39D1C4u) {
        ctx->pc = 0x39D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1C0u;
        // 0x39d1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1C8u;
        goto label_39d1c8;
    }
    ctx->pc = 0x39D1C0u;
    SET_GPR_U32(ctx, 31, 0x39D1C8u);
    ctx->pc = 0x39D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D1C0u;
    // 0x39d1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356188u, 0x39D1C0u, 0x39D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D1C8u;
label_39d1c8:
    // 0x39d1c8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x39d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d1cc:
    // 0x39d1cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39d1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39d1d0:
    // 0x39d1d0: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x39d1d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_39d1d4:
    // 0x39d1d4: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39d1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d1d8:
    // 0x39d1d8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x39d1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d1dc:
    // 0x39d1dc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_39d1e0:
    if (ctx->pc == 0x39D1E0u) {
        ctx->pc = 0x39D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1DCu;
        // 0x39d1e0: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1E4u;
        goto label_39d1e4;
    }
    ctx->pc = 0x39D1DCu;
    {
        const bool branch_taken_0x39d1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1DCu;
        // 0x39d1e0: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1dc) {
            ctx->pc = 0x39D130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d130;
        }
    }
    ctx->pc = 0x39D1E4u;
label_39d1e4:
    // 0x39d1e4: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x39d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_39d1e8:
    // 0x39d1e8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x39d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_39d1ec:
    // 0x39d1ec: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x39d1ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_39d1f0:
    // 0x39d1f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39d1f4:
    // 0x39d1f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39d1f8:
    if (ctx->pc == 0x39D1F8u) {
        ctx->pc = 0x39D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1F4u;
        // 0x39d1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1FCu;
        goto label_39d1fc;
    }
    ctx->pc = 0x39D1F4u;
    {
        const bool branch_taken_0x39d1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1F4u;
        // 0x39d1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1f4) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39D1FCu;
label_39d1fc:
    // 0x39d1fc: 0x962200f4  lhu         $v0, 0xF4($s1)
    ctx->pc = 0x39d1fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
label_39d200:
    // 0x39d200: 0x962300f2  lhu         $v1, 0xF2($s1)
    ctx->pc = 0x39d200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_39d204:
    // 0x39d204: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x39d204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39d208:
    // 0x39d208: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_39d20c:
    if (ctx->pc == 0x39D20Cu) {
        ctx->pc = 0x39D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D208u;
        // 0x39d20c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D210u;
        goto label_39d210;
    }
    ctx->pc = 0x39D208u;
    {
        const bool branch_taken_0x39d208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D208u;
        // 0x39d20c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d208) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39D210u;
label_39d210:
    // 0x39d210: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39d214:
    // 0x39d214: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x39d214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39d218:
    // 0x39d218: 0x906456e4  lbu         $a0, 0x56E4($v1)
    ctx->pc = 0x39d218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22244)));
label_39d21c:
    // 0x39d21c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_39d220:
    if (ctx->pc == 0x39D220u) {
        ctx->pc = 0x39D224u;
        goto label_39d224;
    }
    ctx->pc = 0x39D21Cu;
    {
        const bool branch_taken_0x39d21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d21c) {
            ctx->pc = 0x39D230u;
            goto label_39d230;
        }
    }
    ctx->pc = 0x39D224u;
label_39d224:
    // 0x39d224: 0x922200ed  lbu         $v0, 0xED($s1)
    ctx->pc = 0x39d224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 237)));
label_39d228:
    // 0x39d228: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_39d22c:
    if (ctx->pc == 0x39D22Cu) {
        ctx->pc = 0x39D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D228u;
        // 0x39d22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D230u;
        goto label_39d230;
    }
    ctx->pc = 0x39D228u;
    {
        const bool branch_taken_0x39d228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D228u;
        // 0x39d22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d228) {
            ctx->pc = 0x39D240u;
            goto label_39d240;
        }
    }
    ctx->pc = 0x39D230u;
label_39d230:
    // 0x39d230: 0xc0d4b02  jal         func_352C08
label_39d234:
    if (ctx->pc == 0x39D234u) {
        ctx->pc = 0x39D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D230u;
        // 0x39d234: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D238u;
        goto label_39d238;
    }
    ctx->pc = 0x39D230u;
    SET_GPR_U32(ctx, 31, 0x39D238u);
    ctx->pc = 0x39D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D230u;
    // 0x39d234: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352C08u, 0x39D230u, 0x39D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D238u;
label_39d238:
    // 0x39d238: 0xa62000f4  sh          $zero, 0xF4($s1)
    ctx->pc = 0x39d238u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
label_39d23c:
    // 0x39d23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d240:
    // 0x39d240: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x39d240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39d244:
    // 0x39d244: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x39d244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39d248:
    // 0x39d248: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x39d248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39d24c:
    // 0x39d24c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x39d24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39d250:
    // 0x39d250: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x39d250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39d254:
    // 0x39d254: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39d254u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39d258:
    // 0x39d258: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x39d258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39d25c:
    // 0x39d25c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x39d25cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d260:
    // 0x39d260: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x39d260u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d264:
    // 0x39d264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d268:
    // 0x39d268: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x39d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39d26c:
    // 0x39d26c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x39d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39d270:
    // 0x39d270: 0x3e00008  jr          $ra
label_39d274:
    if (ctx->pc == 0x39D274u) {
        ctx->pc = 0x39D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D270u;
        // 0x39d274: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D278u;
        goto label_fallthrough_0x39d270;
    }
    ctx->pc = 0x39D270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D270u;
        // 0x39d274: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d270:
    ctx->pc = 0x39D278u;
}
