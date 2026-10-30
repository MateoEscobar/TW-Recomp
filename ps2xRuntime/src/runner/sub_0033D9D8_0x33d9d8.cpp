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

// Function: sub_0033D9D8
// Address: 0x33d9d8 - 0x33e278
void sub_0033D9D8_0x33d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D9D8_0x33d9d8");
#endif

    switch (ctx->pc) {
        case 0x33d9d8u: goto label_33d9d8;
        case 0x33d9dcu: goto label_33d9dc;
        case 0x33d9e0u: goto label_33d9e0;
        case 0x33d9e4u: goto label_33d9e4;
        case 0x33d9e8u: goto label_33d9e8;
        case 0x33d9ecu: goto label_33d9ec;
        case 0x33d9f0u: goto label_33d9f0;
        case 0x33d9f4u: goto label_33d9f4;
        case 0x33d9f8u: goto label_33d9f8;
        case 0x33d9fcu: goto label_33d9fc;
        case 0x33da00u: goto label_33da00;
        case 0x33da04u: goto label_33da04;
        case 0x33da08u: goto label_33da08;
        case 0x33da0cu: goto label_33da0c;
        case 0x33da10u: goto label_33da10;
        case 0x33da14u: goto label_33da14;
        case 0x33da18u: goto label_33da18;
        case 0x33da1cu: goto label_33da1c;
        case 0x33da20u: goto label_33da20;
        case 0x33da24u: goto label_33da24;
        case 0x33da28u: goto label_33da28;
        case 0x33da2cu: goto label_33da2c;
        case 0x33da30u: goto label_33da30;
        case 0x33da34u: goto label_33da34;
        case 0x33da38u: goto label_33da38;
        case 0x33da3cu: goto label_33da3c;
        case 0x33da40u: goto label_33da40;
        case 0x33da44u: goto label_33da44;
        case 0x33da48u: goto label_33da48;
        case 0x33da4cu: goto label_33da4c;
        case 0x33da50u: goto label_33da50;
        case 0x33da54u: goto label_33da54;
        case 0x33da58u: goto label_33da58;
        case 0x33da5cu: goto label_33da5c;
        case 0x33da60u: goto label_33da60;
        case 0x33da64u: goto label_33da64;
        case 0x33da68u: goto label_33da68;
        case 0x33da6cu: goto label_33da6c;
        case 0x33da70u: goto label_33da70;
        case 0x33da74u: goto label_33da74;
        case 0x33da78u: goto label_33da78;
        case 0x33da7cu: goto label_33da7c;
        case 0x33da80u: goto label_33da80;
        case 0x33da84u: goto label_33da84;
        case 0x33da88u: goto label_33da88;
        case 0x33da8cu: goto label_33da8c;
        case 0x33da90u: goto label_33da90;
        case 0x33da94u: goto label_33da94;
        case 0x33da98u: goto label_33da98;
        case 0x33da9cu: goto label_33da9c;
        case 0x33daa0u: goto label_33daa0;
        case 0x33daa4u: goto label_33daa4;
        case 0x33daa8u: goto label_33daa8;
        case 0x33daacu: goto label_33daac;
        case 0x33dab0u: goto label_33dab0;
        case 0x33dab4u: goto label_33dab4;
        case 0x33dab8u: goto label_33dab8;
        case 0x33dabcu: goto label_33dabc;
        case 0x33dac0u: goto label_33dac0;
        case 0x33dac4u: goto label_33dac4;
        case 0x33dac8u: goto label_33dac8;
        case 0x33daccu: goto label_33dacc;
        case 0x33dad0u: goto label_33dad0;
        case 0x33dad4u: goto label_33dad4;
        case 0x33dad8u: goto label_33dad8;
        case 0x33dadcu: goto label_33dadc;
        case 0x33dae0u: goto label_33dae0;
        case 0x33dae4u: goto label_33dae4;
        case 0x33dae8u: goto label_33dae8;
        case 0x33daecu: goto label_33daec;
        case 0x33daf0u: goto label_33daf0;
        case 0x33daf4u: goto label_33daf4;
        case 0x33daf8u: goto label_33daf8;
        case 0x33dafcu: goto label_33dafc;
        case 0x33db00u: goto label_33db00;
        case 0x33db04u: goto label_33db04;
        case 0x33db08u: goto label_33db08;
        case 0x33db0cu: goto label_33db0c;
        case 0x33db10u: goto label_33db10;
        case 0x33db14u: goto label_33db14;
        case 0x33db18u: goto label_33db18;
        case 0x33db1cu: goto label_33db1c;
        case 0x33db20u: goto label_33db20;
        case 0x33db24u: goto label_33db24;
        case 0x33db28u: goto label_33db28;
        case 0x33db2cu: goto label_33db2c;
        case 0x33db30u: goto label_33db30;
        case 0x33db34u: goto label_33db34;
        case 0x33db38u: goto label_33db38;
        case 0x33db3cu: goto label_33db3c;
        case 0x33db40u: goto label_33db40;
        case 0x33db44u: goto label_33db44;
        case 0x33db48u: goto label_33db48;
        case 0x33db4cu: goto label_33db4c;
        case 0x33db50u: goto label_33db50;
        case 0x33db54u: goto label_33db54;
        case 0x33db58u: goto label_33db58;
        case 0x33db5cu: goto label_33db5c;
        case 0x33db60u: goto label_33db60;
        case 0x33db64u: goto label_33db64;
        case 0x33db68u: goto label_33db68;
        case 0x33db6cu: goto label_33db6c;
        case 0x33db70u: goto label_33db70;
        case 0x33db74u: goto label_33db74;
        case 0x33db78u: goto label_33db78;
        case 0x33db7cu: goto label_33db7c;
        case 0x33db80u: goto label_33db80;
        case 0x33db84u: goto label_33db84;
        case 0x33db88u: goto label_33db88;
        case 0x33db8cu: goto label_33db8c;
        case 0x33db90u: goto label_33db90;
        case 0x33db94u: goto label_33db94;
        case 0x33db98u: goto label_33db98;
        case 0x33db9cu: goto label_33db9c;
        case 0x33dba0u: goto label_33dba0;
        case 0x33dba4u: goto label_33dba4;
        case 0x33dba8u: goto label_33dba8;
        case 0x33dbacu: goto label_33dbac;
        case 0x33dbb0u: goto label_33dbb0;
        case 0x33dbb4u: goto label_33dbb4;
        case 0x33dbb8u: goto label_33dbb8;
        case 0x33dbbcu: goto label_33dbbc;
        case 0x33dbc0u: goto label_33dbc0;
        case 0x33dbc4u: goto label_33dbc4;
        case 0x33dbc8u: goto label_33dbc8;
        case 0x33dbccu: goto label_33dbcc;
        case 0x33dbd0u: goto label_33dbd0;
        case 0x33dbd4u: goto label_33dbd4;
        case 0x33dbd8u: goto label_33dbd8;
        case 0x33dbdcu: goto label_33dbdc;
        case 0x33dbe0u: goto label_33dbe0;
        case 0x33dbe4u: goto label_33dbe4;
        case 0x33dbe8u: goto label_33dbe8;
        case 0x33dbecu: goto label_33dbec;
        case 0x33dbf0u: goto label_33dbf0;
        case 0x33dbf4u: goto label_33dbf4;
        case 0x33dbf8u: goto label_33dbf8;
        case 0x33dbfcu: goto label_33dbfc;
        case 0x33dc00u: goto label_33dc00;
        case 0x33dc04u: goto label_33dc04;
        case 0x33dc08u: goto label_33dc08;
        case 0x33dc0cu: goto label_33dc0c;
        case 0x33dc10u: goto label_33dc10;
        case 0x33dc14u: goto label_33dc14;
        case 0x33dc18u: goto label_33dc18;
        case 0x33dc1cu: goto label_33dc1c;
        case 0x33dc20u: goto label_33dc20;
        case 0x33dc24u: goto label_33dc24;
        case 0x33dc28u: goto label_33dc28;
        case 0x33dc2cu: goto label_33dc2c;
        case 0x33dc30u: goto label_33dc30;
        case 0x33dc34u: goto label_33dc34;
        case 0x33dc38u: goto label_33dc38;
        case 0x33dc3cu: goto label_33dc3c;
        case 0x33dc40u: goto label_33dc40;
        case 0x33dc44u: goto label_33dc44;
        case 0x33dc48u: goto label_33dc48;
        case 0x33dc4cu: goto label_33dc4c;
        case 0x33dc50u: goto label_33dc50;
        case 0x33dc54u: goto label_33dc54;
        case 0x33dc58u: goto label_33dc58;
        case 0x33dc5cu: goto label_33dc5c;
        case 0x33dc60u: goto label_33dc60;
        case 0x33dc64u: goto label_33dc64;
        case 0x33dc68u: goto label_33dc68;
        case 0x33dc6cu: goto label_33dc6c;
        case 0x33dc70u: goto label_33dc70;
        case 0x33dc74u: goto label_33dc74;
        case 0x33dc78u: goto label_33dc78;
        case 0x33dc7cu: goto label_33dc7c;
        case 0x33dc80u: goto label_33dc80;
        case 0x33dc84u: goto label_33dc84;
        case 0x33dc88u: goto label_33dc88;
        case 0x33dc8cu: goto label_33dc8c;
        case 0x33dc90u: goto label_33dc90;
        case 0x33dc94u: goto label_33dc94;
        case 0x33dc98u: goto label_33dc98;
        case 0x33dc9cu: goto label_33dc9c;
        case 0x33dca0u: goto label_33dca0;
        case 0x33dca4u: goto label_33dca4;
        case 0x33dca8u: goto label_33dca8;
        case 0x33dcacu: goto label_33dcac;
        case 0x33dcb0u: goto label_33dcb0;
        case 0x33dcb4u: goto label_33dcb4;
        case 0x33dcb8u: goto label_33dcb8;
        case 0x33dcbcu: goto label_33dcbc;
        case 0x33dcc0u: goto label_33dcc0;
        case 0x33dcc4u: goto label_33dcc4;
        case 0x33dcc8u: goto label_33dcc8;
        case 0x33dcccu: goto label_33dccc;
        case 0x33dcd0u: goto label_33dcd0;
        case 0x33dcd4u: goto label_33dcd4;
        case 0x33dcd8u: goto label_33dcd8;
        case 0x33dcdcu: goto label_33dcdc;
        case 0x33dce0u: goto label_33dce0;
        case 0x33dce4u: goto label_33dce4;
        case 0x33dce8u: goto label_33dce8;
        case 0x33dcecu: goto label_33dcec;
        case 0x33dcf0u: goto label_33dcf0;
        case 0x33dcf4u: goto label_33dcf4;
        case 0x33dcf8u: goto label_33dcf8;
        case 0x33dcfcu: goto label_33dcfc;
        case 0x33dd00u: goto label_33dd00;
        case 0x33dd04u: goto label_33dd04;
        case 0x33dd08u: goto label_33dd08;
        case 0x33dd0cu: goto label_33dd0c;
        case 0x33dd10u: goto label_33dd10;
        case 0x33dd14u: goto label_33dd14;
        case 0x33dd18u: goto label_33dd18;
        case 0x33dd1cu: goto label_33dd1c;
        case 0x33dd20u: goto label_33dd20;
        case 0x33dd24u: goto label_33dd24;
        case 0x33dd28u: goto label_33dd28;
        case 0x33dd2cu: goto label_33dd2c;
        case 0x33dd30u: goto label_33dd30;
        case 0x33dd34u: goto label_33dd34;
        case 0x33dd38u: goto label_33dd38;
        case 0x33dd3cu: goto label_33dd3c;
        case 0x33dd40u: goto label_33dd40;
        case 0x33dd44u: goto label_33dd44;
        case 0x33dd48u: goto label_33dd48;
        case 0x33dd4cu: goto label_33dd4c;
        case 0x33dd50u: goto label_33dd50;
        case 0x33dd54u: goto label_33dd54;
        case 0x33dd58u: goto label_33dd58;
        case 0x33dd5cu: goto label_33dd5c;
        case 0x33dd60u: goto label_33dd60;
        case 0x33dd64u: goto label_33dd64;
        case 0x33dd68u: goto label_33dd68;
        case 0x33dd6cu: goto label_33dd6c;
        case 0x33dd70u: goto label_33dd70;
        case 0x33dd74u: goto label_33dd74;
        case 0x33dd78u: goto label_33dd78;
        case 0x33dd7cu: goto label_33dd7c;
        case 0x33dd80u: goto label_33dd80;
        case 0x33dd84u: goto label_33dd84;
        case 0x33dd88u: goto label_33dd88;
        case 0x33dd8cu: goto label_33dd8c;
        case 0x33dd90u: goto label_33dd90;
        case 0x33dd94u: goto label_33dd94;
        case 0x33dd98u: goto label_33dd98;
        case 0x33dd9cu: goto label_33dd9c;
        case 0x33dda0u: goto label_33dda0;
        case 0x33dda4u: goto label_33dda4;
        case 0x33dda8u: goto label_33dda8;
        case 0x33ddacu: goto label_33ddac;
        case 0x33ddb0u: goto label_33ddb0;
        case 0x33ddb4u: goto label_33ddb4;
        case 0x33ddb8u: goto label_33ddb8;
        case 0x33ddbcu: goto label_33ddbc;
        case 0x33ddc0u: goto label_33ddc0;
        case 0x33ddc4u: goto label_33ddc4;
        case 0x33ddc8u: goto label_33ddc8;
        case 0x33ddccu: goto label_33ddcc;
        case 0x33ddd0u: goto label_33ddd0;
        case 0x33ddd4u: goto label_33ddd4;
        case 0x33ddd8u: goto label_33ddd8;
        case 0x33dddcu: goto label_33dddc;
        case 0x33dde0u: goto label_33dde0;
        case 0x33dde4u: goto label_33dde4;
        case 0x33dde8u: goto label_33dde8;
        case 0x33ddecu: goto label_33ddec;
        case 0x33ddf0u: goto label_33ddf0;
        case 0x33ddf4u: goto label_33ddf4;
        case 0x33ddf8u: goto label_33ddf8;
        case 0x33ddfcu: goto label_33ddfc;
        case 0x33de00u: goto label_33de00;
        case 0x33de04u: goto label_33de04;
        case 0x33de08u: goto label_33de08;
        case 0x33de0cu: goto label_33de0c;
        case 0x33de10u: goto label_33de10;
        case 0x33de14u: goto label_33de14;
        case 0x33de18u: goto label_33de18;
        case 0x33de1cu: goto label_33de1c;
        case 0x33de20u: goto label_33de20;
        case 0x33de24u: goto label_33de24;
        case 0x33de28u: goto label_33de28;
        case 0x33de2cu: goto label_33de2c;
        case 0x33de30u: goto label_33de30;
        case 0x33de34u: goto label_33de34;
        case 0x33de38u: goto label_33de38;
        case 0x33de3cu: goto label_33de3c;
        case 0x33de40u: goto label_33de40;
        case 0x33de44u: goto label_33de44;
        case 0x33de48u: goto label_33de48;
        case 0x33de4cu: goto label_33de4c;
        case 0x33de50u: goto label_33de50;
        case 0x33de54u: goto label_33de54;
        case 0x33de58u: goto label_33de58;
        case 0x33de5cu: goto label_33de5c;
        case 0x33de60u: goto label_33de60;
        case 0x33de64u: goto label_33de64;
        case 0x33de68u: goto label_33de68;
        case 0x33de6cu: goto label_33de6c;
        case 0x33de70u: goto label_33de70;
        case 0x33de74u: goto label_33de74;
        case 0x33de78u: goto label_33de78;
        case 0x33de7cu: goto label_33de7c;
        case 0x33de80u: goto label_33de80;
        case 0x33de84u: goto label_33de84;
        case 0x33de88u: goto label_33de88;
        case 0x33de8cu: goto label_33de8c;
        case 0x33de90u: goto label_33de90;
        case 0x33de94u: goto label_33de94;
        case 0x33de98u: goto label_33de98;
        case 0x33de9cu: goto label_33de9c;
        case 0x33dea0u: goto label_33dea0;
        case 0x33dea4u: goto label_33dea4;
        case 0x33dea8u: goto label_33dea8;
        case 0x33deacu: goto label_33deac;
        case 0x33deb0u: goto label_33deb0;
        case 0x33deb4u: goto label_33deb4;
        case 0x33deb8u: goto label_33deb8;
        case 0x33debcu: goto label_33debc;
        case 0x33dec0u: goto label_33dec0;
        case 0x33dec4u: goto label_33dec4;
        case 0x33dec8u: goto label_33dec8;
        case 0x33deccu: goto label_33decc;
        case 0x33ded0u: goto label_33ded0;
        case 0x33ded4u: goto label_33ded4;
        case 0x33ded8u: goto label_33ded8;
        case 0x33dedcu: goto label_33dedc;
        case 0x33dee0u: goto label_33dee0;
        case 0x33dee4u: goto label_33dee4;
        case 0x33dee8u: goto label_33dee8;
        case 0x33deecu: goto label_33deec;
        case 0x33def0u: goto label_33def0;
        case 0x33def4u: goto label_33def4;
        case 0x33def8u: goto label_33def8;
        case 0x33defcu: goto label_33defc;
        case 0x33df00u: goto label_33df00;
        case 0x33df04u: goto label_33df04;
        case 0x33df08u: goto label_33df08;
        case 0x33df0cu: goto label_33df0c;
        case 0x33df10u: goto label_33df10;
        case 0x33df14u: goto label_33df14;
        case 0x33df18u: goto label_33df18;
        case 0x33df1cu: goto label_33df1c;
        case 0x33df20u: goto label_33df20;
        case 0x33df24u: goto label_33df24;
        case 0x33df28u: goto label_33df28;
        case 0x33df2cu: goto label_33df2c;
        case 0x33df30u: goto label_33df30;
        case 0x33df34u: goto label_33df34;
        case 0x33df38u: goto label_33df38;
        case 0x33df3cu: goto label_33df3c;
        case 0x33df40u: goto label_33df40;
        case 0x33df44u: goto label_33df44;
        case 0x33df48u: goto label_33df48;
        case 0x33df4cu: goto label_33df4c;
        case 0x33df50u: goto label_33df50;
        case 0x33df54u: goto label_33df54;
        case 0x33df58u: goto label_33df58;
        case 0x33df5cu: goto label_33df5c;
        case 0x33df60u: goto label_33df60;
        case 0x33df64u: goto label_33df64;
        case 0x33df68u: goto label_33df68;
        case 0x33df6cu: goto label_33df6c;
        case 0x33df70u: goto label_33df70;
        case 0x33df74u: goto label_33df74;
        case 0x33df78u: goto label_33df78;
        case 0x33df7cu: goto label_33df7c;
        case 0x33df80u: goto label_33df80;
        case 0x33df84u: goto label_33df84;
        case 0x33df88u: goto label_33df88;
        case 0x33df8cu: goto label_33df8c;
        case 0x33df90u: goto label_33df90;
        case 0x33df94u: goto label_33df94;
        case 0x33df98u: goto label_33df98;
        case 0x33df9cu: goto label_33df9c;
        case 0x33dfa0u: goto label_33dfa0;
        case 0x33dfa4u: goto label_33dfa4;
        case 0x33dfa8u: goto label_33dfa8;
        case 0x33dfacu: goto label_33dfac;
        case 0x33dfb0u: goto label_33dfb0;
        case 0x33dfb4u: goto label_33dfb4;
        case 0x33dfb8u: goto label_33dfb8;
        case 0x33dfbcu: goto label_33dfbc;
        case 0x33dfc0u: goto label_33dfc0;
        case 0x33dfc4u: goto label_33dfc4;
        case 0x33dfc8u: goto label_33dfc8;
        case 0x33dfccu: goto label_33dfcc;
        case 0x33dfd0u: goto label_33dfd0;
        case 0x33dfd4u: goto label_33dfd4;
        case 0x33dfd8u: goto label_33dfd8;
        case 0x33dfdcu: goto label_33dfdc;
        case 0x33dfe0u: goto label_33dfe0;
        case 0x33dfe4u: goto label_33dfe4;
        case 0x33dfe8u: goto label_33dfe8;
        case 0x33dfecu: goto label_33dfec;
        case 0x33dff0u: goto label_33dff0;
        case 0x33dff4u: goto label_33dff4;
        case 0x33dff8u: goto label_33dff8;
        case 0x33dffcu: goto label_33dffc;
        case 0x33e000u: goto label_33e000;
        case 0x33e004u: goto label_33e004;
        case 0x33e008u: goto label_33e008;
        case 0x33e00cu: goto label_33e00c;
        case 0x33e010u: goto label_33e010;
        case 0x33e014u: goto label_33e014;
        case 0x33e018u: goto label_33e018;
        case 0x33e01cu: goto label_33e01c;
        case 0x33e020u: goto label_33e020;
        case 0x33e024u: goto label_33e024;
        case 0x33e028u: goto label_33e028;
        case 0x33e02cu: goto label_33e02c;
        case 0x33e030u: goto label_33e030;
        case 0x33e034u: goto label_33e034;
        case 0x33e038u: goto label_33e038;
        case 0x33e03cu: goto label_33e03c;
        case 0x33e040u: goto label_33e040;
        case 0x33e044u: goto label_33e044;
        case 0x33e048u: goto label_33e048;
        case 0x33e04cu: goto label_33e04c;
        case 0x33e050u: goto label_33e050;
        case 0x33e054u: goto label_33e054;
        case 0x33e058u: goto label_33e058;
        case 0x33e05cu: goto label_33e05c;
        case 0x33e060u: goto label_33e060;
        case 0x33e064u: goto label_33e064;
        case 0x33e068u: goto label_33e068;
        case 0x33e06cu: goto label_33e06c;
        case 0x33e070u: goto label_33e070;
        case 0x33e074u: goto label_33e074;
        case 0x33e078u: goto label_33e078;
        case 0x33e07cu: goto label_33e07c;
        case 0x33e080u: goto label_33e080;
        case 0x33e084u: goto label_33e084;
        case 0x33e088u: goto label_33e088;
        case 0x33e08cu: goto label_33e08c;
        case 0x33e090u: goto label_33e090;
        case 0x33e094u: goto label_33e094;
        case 0x33e098u: goto label_33e098;
        case 0x33e09cu: goto label_33e09c;
        case 0x33e0a0u: goto label_33e0a0;
        case 0x33e0a4u: goto label_33e0a4;
        case 0x33e0a8u: goto label_33e0a8;
        case 0x33e0acu: goto label_33e0ac;
        case 0x33e0b0u: goto label_33e0b0;
        case 0x33e0b4u: goto label_33e0b4;
        case 0x33e0b8u: goto label_33e0b8;
        case 0x33e0bcu: goto label_33e0bc;
        case 0x33e0c0u: goto label_33e0c0;
        case 0x33e0c4u: goto label_33e0c4;
        case 0x33e0c8u: goto label_33e0c8;
        case 0x33e0ccu: goto label_33e0cc;
        case 0x33e0d0u: goto label_33e0d0;
        case 0x33e0d4u: goto label_33e0d4;
        case 0x33e0d8u: goto label_33e0d8;
        case 0x33e0dcu: goto label_33e0dc;
        case 0x33e0e0u: goto label_33e0e0;
        case 0x33e0e4u: goto label_33e0e4;
        case 0x33e0e8u: goto label_33e0e8;
        case 0x33e0ecu: goto label_33e0ec;
        case 0x33e0f0u: goto label_33e0f0;
        case 0x33e0f4u: goto label_33e0f4;
        case 0x33e0f8u: goto label_33e0f8;
        case 0x33e0fcu: goto label_33e0fc;
        case 0x33e100u: goto label_33e100;
        case 0x33e104u: goto label_33e104;
        case 0x33e108u: goto label_33e108;
        case 0x33e10cu: goto label_33e10c;
        case 0x33e110u: goto label_33e110;
        case 0x33e114u: goto label_33e114;
        case 0x33e118u: goto label_33e118;
        case 0x33e11cu: goto label_33e11c;
        case 0x33e120u: goto label_33e120;
        case 0x33e124u: goto label_33e124;
        case 0x33e128u: goto label_33e128;
        case 0x33e12cu: goto label_33e12c;
        case 0x33e130u: goto label_33e130;
        case 0x33e134u: goto label_33e134;
        case 0x33e138u: goto label_33e138;
        case 0x33e13cu: goto label_33e13c;
        case 0x33e140u: goto label_33e140;
        case 0x33e144u: goto label_33e144;
        case 0x33e148u: goto label_33e148;
        case 0x33e14cu: goto label_33e14c;
        case 0x33e150u: goto label_33e150;
        case 0x33e154u: goto label_33e154;
        case 0x33e158u: goto label_33e158;
        case 0x33e15cu: goto label_33e15c;
        case 0x33e160u: goto label_33e160;
        case 0x33e164u: goto label_33e164;
        case 0x33e168u: goto label_33e168;
        case 0x33e16cu: goto label_33e16c;
        case 0x33e170u: goto label_33e170;
        case 0x33e174u: goto label_33e174;
        case 0x33e178u: goto label_33e178;
        case 0x33e17cu: goto label_33e17c;
        case 0x33e180u: goto label_33e180;
        case 0x33e184u: goto label_33e184;
        case 0x33e188u: goto label_33e188;
        case 0x33e18cu: goto label_33e18c;
        case 0x33e190u: goto label_33e190;
        case 0x33e194u: goto label_33e194;
        case 0x33e198u: goto label_33e198;
        case 0x33e19cu: goto label_33e19c;
        case 0x33e1a0u: goto label_33e1a0;
        case 0x33e1a4u: goto label_33e1a4;
        case 0x33e1a8u: goto label_33e1a8;
        case 0x33e1acu: goto label_33e1ac;
        case 0x33e1b0u: goto label_33e1b0;
        case 0x33e1b4u: goto label_33e1b4;
        case 0x33e1b8u: goto label_33e1b8;
        case 0x33e1bcu: goto label_33e1bc;
        case 0x33e1c0u: goto label_33e1c0;
        case 0x33e1c4u: goto label_33e1c4;
        case 0x33e1c8u: goto label_33e1c8;
        case 0x33e1ccu: goto label_33e1cc;
        case 0x33e1d0u: goto label_33e1d0;
        case 0x33e1d4u: goto label_33e1d4;
        case 0x33e1d8u: goto label_33e1d8;
        case 0x33e1dcu: goto label_33e1dc;
        case 0x33e1e0u: goto label_33e1e0;
        case 0x33e1e4u: goto label_33e1e4;
        case 0x33e1e8u: goto label_33e1e8;
        case 0x33e1ecu: goto label_33e1ec;
        case 0x33e1f0u: goto label_33e1f0;
        case 0x33e1f4u: goto label_33e1f4;
        case 0x33e1f8u: goto label_33e1f8;
        case 0x33e1fcu: goto label_33e1fc;
        case 0x33e200u: goto label_33e200;
        case 0x33e204u: goto label_33e204;
        case 0x33e208u: goto label_33e208;
        case 0x33e20cu: goto label_33e20c;
        case 0x33e210u: goto label_33e210;
        case 0x33e214u: goto label_33e214;
        case 0x33e218u: goto label_33e218;
        case 0x33e21cu: goto label_33e21c;
        case 0x33e220u: goto label_33e220;
        case 0x33e224u: goto label_33e224;
        case 0x33e228u: goto label_33e228;
        case 0x33e22cu: goto label_33e22c;
        case 0x33e230u: goto label_33e230;
        case 0x33e234u: goto label_33e234;
        case 0x33e238u: goto label_33e238;
        case 0x33e23cu: goto label_33e23c;
        case 0x33e240u: goto label_33e240;
        case 0x33e244u: goto label_33e244;
        case 0x33e248u: goto label_33e248;
        case 0x33e24cu: goto label_33e24c;
        case 0x33e250u: goto label_33e250;
        case 0x33e254u: goto label_33e254;
        case 0x33e258u: goto label_33e258;
        case 0x33e25cu: goto label_33e25c;
        case 0x33e260u: goto label_33e260;
        case 0x33e264u: goto label_33e264;
        case 0x33e268u: goto label_33e268;
        case 0x33e26cu: goto label_33e26c;
        case 0x33e270u: goto label_33e270;
        case 0x33e274u: goto label_33e274;
        default: break;
    }

    ctx->pc = 0x33d9d8u;

label_33d9d8:
    // 0x33d9d8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x33d9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_33d9dc:
    // 0x33d9dc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x33d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_33d9e0:
    // 0x33d9e0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x33d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_33d9e4:
    // 0x33d9e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33d9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d9e8:
    // 0x33d9e8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x33d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_33d9ec:
    // 0x33d9ec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x33d9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33d9f0:
    // 0x33d9f0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x33d9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_33d9f4:
    // 0x33d9f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33d9f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d9f8:
    // 0x33d9f8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x33d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_33d9fc:
    // 0x33d9fc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x33d9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33da00:
    // 0x33da00: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x33da00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_33da04:
    // 0x33da04: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x33da04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_33da08:
    // 0x33da08: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x33da08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33da0c:
    // 0x33da0c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x33da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_33da10:
    // 0x33da10: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x33da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_33da14:
    // 0x33da14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x33da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_33da18:
    // 0x33da18: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x33da18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_33da1c:
    // 0x33da1c: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x33da1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_33da20:
    // 0x33da20: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x33da20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_33da24:
    // 0x33da24: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x33da24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_33da28:
    // 0x33da28: 0x8fb70140  lw          $s7, 0x140($sp)
    ctx->pc = 0x33da28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_33da2c:
    // 0x33da2c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x33da2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33da30:
    // 0x33da30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33da30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33da34:
    // 0x33da34: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x33da34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33da38:
    // 0x33da38: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33da38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33da3c:
    // 0x33da3c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x33da3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33da40:
    // 0x33da40: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x33da40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_33da44:
    // 0x33da44: 0x4a0003bf  vwaitq
    ctx->pc = 0x33da44u;
    // VWAITQ (Q already resolved in this runtime)
label_33da48:
    // 0x33da48: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x33da48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33da4c:
    // 0x33da4c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33da4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33da50:
    // 0x33da50: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x33da50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
label_33da54:
    // 0x33da54: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x33da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_33da58:
    // 0x33da58: 0x1aa001f6  blez        $s5, . + 4 + (0x1F6 << 2)
label_33da5c:
    if (ctx->pc == 0x33DA5Cu) {
        ctx->pc = 0x33DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA58u;
        // 0x33da5c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DA60u;
        goto label_33da60;
    }
    ctx->pc = 0x33DA58u;
    {
        const bool branch_taken_0x33da58 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x33DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA58u;
        // 0x33da5c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da58) {
            ctx->pc = 0x33E234u;
            goto label_33e234;
        }
    }
    ctx->pc = 0x33DA60u;
label_33da60:
    // 0x33da60: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x33da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_33da64:
    // 0x33da64: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x33da64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_33da68:
    // 0x33da68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33da68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_33da6c:
    // 0x33da6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33da6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33da70:
    // 0x33da70: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x33da70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_33da74:
    // 0x33da74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x33da74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_33da78:
    // 0x33da78: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33da78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_33da7c:
    // 0x33da7c: 0x0  nop
    ctx->pc = 0x33da7cu;
    // NOP
label_33da80:
    // 0x33da80: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x33da80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33da84:
    // 0x33da84: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x33da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_33da88:
    // 0x33da88: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_33da8c:
    if (ctx->pc == 0x33DA8Cu) {
        ctx->pc = 0x33DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA88u;
        // 0x33da8c: 0x8e820034  lw          $v0, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DA90u;
        goto label_33da90;
    }
    ctx->pc = 0x33DA88u;
    {
        const bool branch_taken_0x33da88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da88) {
            ctx->pc = 0x33DA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DA88u;
            // 0x33da8c: 0x8e820034  lw          $v0, 0x34($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DAA8u;
            goto label_33daa8;
        }
    }
    ctx->pc = 0x33DA90u;
label_33da90:
    // 0x33da90: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x33da90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_33da94:
    // 0x33da94: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x33da94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_33da98:
    // 0x33da98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33da9c:
    // 0x33da9c: 0x544001e2  bnel        $v0, $zero, . + 4 + (0x1E2 << 2)
label_33daa0:
    if (ctx->pc == 0x33DAA0u) {
        ctx->pc = 0x33DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA9Cu;
        // 0x33daa0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DAA4u;
        goto label_33daa4;
    }
    ctx->pc = 0x33DA9Cu;
    {
        const bool branch_taken_0x33da9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33da9c) {
            ctx->pc = 0x33DAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DA9Cu;
            // 0x33daa0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E228u;
            goto label_33e228;
        }
    }
    ctx->pc = 0x33DAA4u;
label_33daa4:
    // 0x33daa4: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x33daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_33daa8:
    // 0x33daa8: 0x504001df  beql        $v0, $zero, . + 4 + (0x1DF << 2)
label_33daac:
    if (ctx->pc == 0x33DAACu) {
        ctx->pc = 0x33DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAA8u;
        // 0x33daac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DAB0u;
        goto label_33dab0;
    }
    ctx->pc = 0x33DAA8u;
    {
        const bool branch_taken_0x33daa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33daa8) {
            ctx->pc = 0x33DAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DAA8u;
            // 0x33daac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E228u;
            goto label_33e228;
        }
    }
    ctx->pc = 0x33DAB0u;
label_33dab0:
    // 0x33dab0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x33dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33dab4:
    // 0x33dab4: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_33dab8:
    if (ctx->pc == 0x33DAB8u) {
        ctx->pc = 0x33DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAB4u;
        // 0x33dab8: 0x8e860034  lw          $a2, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DABCu;
        goto label_33dabc;
    }
    ctx->pc = 0x33DAB4u;
    {
        const bool branch_taken_0x33dab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dab4) {
            ctx->pc = 0x33DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DAB4u;
            // 0x33dab8: 0x8e860034  lw          $a2, 0x34($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DADCu;
            goto label_33dadc;
        }
    }
    ctx->pc = 0x33DABCu;
label_33dabc:
    // 0x33dabc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33dac0:
    // 0x33dac0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x33dac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_33dac4:
    // 0x33dac4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x33dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_33dac8:
    // 0x33dac8: 0x40f809  jalr        $v0
label_33dacc:
    if (ctx->pc == 0x33DACCu) {
        ctx->pc = 0x33DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAC8u;
        // 0x33dacc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DAD0u;
        goto label_33dad0;
    }
    ctx->pc = 0x33DAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DAD0u);
        ctx->pc = 0x33DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAC8u;
        // 0x33dacc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DAC8u, 0x33DAD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DAD0u;
label_33dad0:
    // 0x33dad0: 0x504001d5  beql        $v0, $zero, . + 4 + (0x1D5 << 2)
label_33dad4:
    if (ctx->pc == 0x33DAD4u) {
        ctx->pc = 0x33DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAD0u;
        // 0x33dad4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DAD8u;
        goto label_33dad8;
    }
    ctx->pc = 0x33DAD0u;
    {
        const bool branch_taken_0x33dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dad0) {
            ctx->pc = 0x33DAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DAD0u;
            // 0x33dad4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E228u;
            goto label_33e228;
        }
    }
    ctx->pc = 0x33DAD8u;
label_33dad8:
    // 0x33dad8: 0x8e860034  lw          $a2, 0x34($s4)
    ctx->pc = 0x33dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_33dadc:
    // 0x33dadc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x33dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dae0:
    // 0x33dae0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33dae4:
    // 0x33dae4: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x33dae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_33dae8:
    // 0x33dae8: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x33dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_33daec:
    // 0x33daec: 0x40f809  jalr        $v0
label_33daf0:
    if (ctx->pc == 0x33DAF0u) {
        ctx->pc = 0x33DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAECu;
        // 0x33daf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DAF4u;
        goto label_33daf4;
    }
    ctx->pc = 0x33DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DAF4u);
        ctx->pc = 0x33DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAECu;
        // 0x33daf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DAECu, 0x33DAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DAF4u;
label_33daf4:
    // 0x33daf4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x33daf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33daf8:
    // 0x33daf8: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x33daf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_33dafc:
    // 0x33dafc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_33db00:
    if (ctx->pc == 0x33DB00u) {
        ctx->pc = 0x33DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAFCu;
        // 0x33db00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB04u;
        goto label_33db04;
    }
    ctx->pc = 0x33DAFCu;
    {
        const bool branch_taken_0x33dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAFCu;
        // 0x33db00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dafc) {
            ctx->pc = 0x33DB2Cu;
            goto label_33db2c;
        }
    }
    ctx->pc = 0x33DB04u;
label_33db04:
    // 0x33db04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33db08:
    // 0x33db08: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x33db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_33db0c:
    // 0x33db0c: 0x144001ca  bnez        $v0, . + 4 + (0x1CA << 2)
label_33db10:
    if (ctx->pc == 0x33DB10u) {
        ctx->pc = 0x33DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB0Cu;
        // 0x33db10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB14u;
        goto label_33db14;
    }
    ctx->pc = 0x33DB0Cu;
    {
        const bool branch_taken_0x33db0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB0Cu;
        // 0x33db10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db0c) {
            ctx->pc = 0x33E238u;
            goto label_33e238;
        }
    }
    ctx->pc = 0x33DB14u;
label_33db14:
    // 0x33db14: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33db14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33db18:
    // 0x33db18: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x33db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_33db1c:
    // 0x33db1c: 0x104001c1  beqz        $v0, . + 4 + (0x1C1 << 2)
label_33db20:
    if (ctx->pc == 0x33DB20u) {
        ctx->pc = 0x33DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB1Cu;
        // 0x33db20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB24u;
        goto label_33db24;
    }
    ctx->pc = 0x33DB1Cu;
    {
        const bool branch_taken_0x33db1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB1Cu;
        // 0x33db20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db1c) {
            ctx->pc = 0x33E224u;
            goto label_33e224;
        }
    }
    ctx->pc = 0x33DB24u;
label_33db24:
    // 0x33db24: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_33db28:
    if (ctx->pc == 0x33DB28u) {
        ctx->pc = 0x33DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB24u;
        // 0x33db28: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB2Cu;
        goto label_33db2c;
    }
    ctx->pc = 0x33DB24u;
    {
        const bool branch_taken_0x33db24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB24u;
        // 0x33db28: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db24) {
            ctx->pc = 0x33E23Cu;
            goto label_33e23c;
        }
    }
    ctx->pc = 0x33DB2Cu;
label_33db2c:
    // 0x33db2c: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
label_33db30:
    if (ctx->pc == 0x33DB30u) {
        ctx->pc = 0x33DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB2Cu;
        // 0x33db30: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB34u;
        goto label_33db34;
    }
    ctx->pc = 0x33DB2Cu;
    {
        const bool branch_taken_0x33db2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB2Cu;
        // 0x33db30: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db2c) {
            ctx->pc = 0x33DDECu;
            goto label_33ddec;
        }
    }
    ctx->pc = 0x33DB34u;
label_33db34:
    // 0x33db34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33db38:
    if (ctx->pc == 0x33DB38u) {
        ctx->pc = 0x33DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB34u;
        // 0x33db38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB3Cu;
        goto label_33db3c;
    }
    ctx->pc = 0x33DB34u;
    {
        const bool branch_taken_0x33db34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB34u;
        // 0x33db38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db34) {
            ctx->pc = 0x33DB4Cu;
            goto label_33db4c;
        }
    }
    ctx->pc = 0x33DB3Cu;
label_33db3c:
    // 0x33db3c: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
label_33db40:
    if (ctx->pc == 0x33DB40u) {
        ctx->pc = 0x33DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB3Cu;
        // 0x33db40: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB44u;
        goto label_33db44;
    }
    ctx->pc = 0x33DB3Cu;
    {
        const bool branch_taken_0x33db3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33db3c) {
            ctx->pc = 0x33DB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DB3Cu;
            // 0x33db40: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DCDCu;
            goto label_33dcdc;
        }
    }
    ctx->pc = 0x33DB44u;
label_33db44:
    // 0x33db44: 0x10000144  b           . + 4 + (0x144 << 2)
label_33db48:
    if (ctx->pc == 0x33DB48u) {
        ctx->pc = 0x33DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB44u;
        // 0x33db48: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB4Cu;
        goto label_33db4c;
    }
    ctx->pc = 0x33DB44u;
    {
        const bool branch_taken_0x33db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB44u;
        // 0x33db48: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db44) {
            ctx->pc = 0x33E058u;
            goto label_33e058;
        }
    }
    ctx->pc = 0x33DB4Cu;
label_33db4c:
    // 0x33db4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33db50:
    // 0x33db50: 0x106200fb  beq         $v1, $v0, . + 4 + (0xFB << 2)
label_33db54:
    if (ctx->pc == 0x33DB54u) {
        ctx->pc = 0x33DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB50u;
        // 0x33db54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB58u;
        goto label_33db58;
    }
    ctx->pc = 0x33DB50u;
    {
        const bool branch_taken_0x33db50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB50u;
        // 0x33db54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db50) {
            ctx->pc = 0x33DF40u;
            goto label_33df40;
        }
    }
    ctx->pc = 0x33DB58u;
label_33db58:
    // 0x33db58: 0x5462013f  bnel        $v1, $v0, . + 4 + (0x13F << 2)
label_33db5c:
    if (ctx->pc == 0x33DB5Cu) {
        ctx->pc = 0x33DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB58u;
        // 0x33db5c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB60u;
        goto label_33db60;
    }
    ctx->pc = 0x33DB58u;
    {
        const bool branch_taken_0x33db58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33db58) {
            ctx->pc = 0x33DB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DB58u;
            // 0x33db5c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E058u;
            goto label_33e058;
        }
    }
    ctx->pc = 0x33DB60u;
label_33db60:
    // 0x33db60: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x33db60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33db64:
    // 0x33db64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33db68:
    // 0x33db68: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x33db68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_33db6c:
    // 0x33db6c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x33db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_33db70:
    // 0x33db70: 0x40f809  jalr        $v0
label_33db74:
    if (ctx->pc == 0x33DB74u) {
        ctx->pc = 0x33DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB70u;
        // 0x33db74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB78u;
        goto label_33db78;
    }
    ctx->pc = 0x33DB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DB78u);
        ctx->pc = 0x33DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB70u;
        // 0x33db74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DB70u, 0x33DB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DB78u;
label_33db78:
    // 0x33db78: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x33db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_33db7c:
    // 0x33db7c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x33db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_33db80:
    // 0x33db80: 0x54600056  bnel        $v1, $zero, . + 4 + (0x56 << 2)
label_33db84:
    if (ctx->pc == 0x33DB84u) {
        ctx->pc = 0x33DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB80u;
        // 0x33db84: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DB88u;
        goto label_33db88;
    }
    ctx->pc = 0x33DB80u;
    {
        const bool branch_taken_0x33db80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33db80) {
            ctx->pc = 0x33DB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DB80u;
            // 0x33db84: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DCDCu;
            goto label_33dcdc;
        }
    }
    ctx->pc = 0x33DB88u;
label_33db88:
    // 0x33db88: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x33db88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33db8c:
    // 0x33db8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33db90:
    // 0x33db90: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x33db90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33db94:
    // 0x33db94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33db94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33db98:
    // 0x33db98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33db98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33db9c:
    // 0x33db9c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33db9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33dba0:
    // 0x33dba0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33dba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33dba4:
    // 0x33dba4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33dba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33dba8:
    // 0x33dba8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x33dba8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_33dbac:
    // 0x33dbac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33dbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_33dbb0:
    // 0x33dbb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33dbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33dbb4:
    // 0x33dbb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33dbb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33dbb8:
    // 0x33dbb8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_33dbbc:
    // 0x33dbbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33dbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_33dbc0:
    // 0x33dbc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33dbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33dbc4:
    // 0x33dbc4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33dbc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dbc8:
    // 0x33dbc8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33dbc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33dbcc:
    // 0x33dbcc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33dbccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33dbd0:
    // 0x33dbd0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33dbd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33dbd4:
    // 0x33dbd4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_33dbd8:
    // 0x33dbd8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_33dbdc:
    // 0x33dbdc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33dbe0:
    // 0x33dbe0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33dbe4:
    // 0x33dbe4: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x33dbe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_33dbe8:
    // 0x33dbe8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x33dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_33dbec:
    // 0x33dbec: 0x60f809  jalr        $v1
label_33dbf0:
    if (ctx->pc == 0x33DBF0u) {
        ctx->pc = 0x33DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBECu;
        // 0x33dbf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DBF4u;
        goto label_33dbf4;
    }
    ctx->pc = 0x33DBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DBF4u);
        ctx->pc = 0x33DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBECu;
        // 0x33dbf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBECu, 0x33DBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DBF4u;
label_33dbf4:
    // 0x33dbf4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x33dbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33dbf8:
    // 0x33dbf8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x33dbf8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_33dbfc:
    // 0x33dbfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dc00:
    // 0x33dc00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33dc04:
    // 0x33dc04: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x33dc04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_33dc08:
    // 0x33dc08: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x33dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_33dc0c:
    // 0x33dc0c: 0x60f809  jalr        $v1
label_33dc10:
    if (ctx->pc == 0x33DC10u) {
        ctx->pc = 0x33DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC0Cu;
        // 0x33dc10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC14u;
        goto label_33dc14;
    }
    ctx->pc = 0x33DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DC14u);
        ctx->pc = 0x33DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC0Cu;
        // 0x33dc10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC0Cu, 0x33DC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DC14u;
label_33dc14:
    // 0x33dc14: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x33dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33dc18:
    // 0x33dc18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33dc1c:
    // 0x33dc1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33dc1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_33dc20:
    // 0x33dc20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33dc24:
    // 0x33dc24: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x33dc24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_33dc28:
    // 0x33dc28: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x33dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_33dc2c:
    // 0x33dc2c: 0x60f809  jalr        $v1
label_33dc30:
    if (ctx->pc == 0x33DC30u) {
        ctx->pc = 0x33DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC2Cu;
        // 0x33dc30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC34u;
        goto label_33dc34;
    }
    ctx->pc = 0x33DC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DC34u);
        ctx->pc = 0x33DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC2Cu;
        // 0x33dc30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC2Cu, 0x33DC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DC34u;
label_33dc34:
    // 0x33dc34: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x33dc34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_33dc38:
    // 0x33dc38: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x33dc38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33dc3c:
    // 0x33dc3c: 0x0  nop
    ctx->pc = 0x33dc3cu;
    // NOP
label_33dc40:
    // 0x33dc40: 0x0  nop
    ctx->pc = 0x33dc40u;
    // NOP
label_33dc44:
    // 0x33dc44: 0x4614ad43  div.s       $f21, $f21, $f20
    ctx->pc = 0x33dc44u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_33dc48:
    // 0x33dc48: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x33dc48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33dc4c:
    // 0x33dc4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33dc4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dc50:
    // 0x33dc50: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33dc50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33dc54:
    // 0x33dc54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33dc54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33dc58:
    // 0x33dc58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33dc58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33dc5c:
    // 0x33dc5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_33dc60:
    // 0x33dc60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_33dc64:
    // 0x33dc64: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x33dc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33dc68:
    // 0x33dc68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33dc6c:
    // 0x33dc6c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x33dc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_33dc70:
    // 0x33dc70: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x33dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_33dc74:
    // 0x33dc74: 0x40f809  jalr        $v0
label_33dc78:
    if (ctx->pc == 0x33DC78u) {
        ctx->pc = 0x33DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC74u;
        // 0x33dc78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC7Cu;
        goto label_33dc7c;
    }
    ctx->pc = 0x33DC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DC7Cu);
        ctx->pc = 0x33DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC74u;
        // 0x33dc78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC74u, 0x33DC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DC7Cu;
label_33dc7c:
    // 0x33dc7c: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x33dc7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_33dc80:
    // 0x33dc80: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x33dc80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33dc84:
    // 0x33dc84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33dc84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33dc88:
    // 0x33dc88: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33dc88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33dc8c:
    // 0x33dc8c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33dc8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33dc90:
    // 0x33dc90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33dc90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33dc94:
    // 0x33dc94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33dc94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_33dc98:
    // 0x33dc98: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_33dc9c:
    // 0x33dc9c: 0x7c430050  sq          $v1, 0x50($v0)
    ctx->pc = 0x33dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 3));
label_33dca0:
    // 0x33dca0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x33dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33dca4:
    // 0x33dca4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33dca8:
    // 0x33dca8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x33dca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_33dcac:
    // 0x33dcac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x33dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_33dcb0:
    // 0x33dcb0: 0x40f809  jalr        $v0
label_33dcb4:
    if (ctx->pc == 0x33DCB4u) {
        ctx->pc = 0x33DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCB0u;
        // 0x33dcb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCB8u;
        goto label_33dcb8;
    }
    ctx->pc = 0x33DCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DCB8u);
        ctx->pc = 0x33DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCB0u;
        // 0x33dcb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DCB0u, 0x33DCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DCB8u;
label_33dcb8:
    // 0x33dcb8: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x33dcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_33dcbc:
    // 0x33dcbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33dcc0:
    // 0x33dcc0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x33dcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33dcc4:
    // 0x33dcc4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33dcc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33dcc8:
    // 0x33dcc8: 0x85040050  lh          $a0, 0x50($t0)
    ctx->pc = 0x33dcc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
label_33dccc:
    // 0x33dccc: 0x8d030054  lw          $v1, 0x54($t0)
    ctx->pc = 0x33dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_33dcd0:
    // 0x33dcd0: 0x60f809  jalr        $v1
label_33dcd4:
    if (ctx->pc == 0x33DCD4u) {
        ctx->pc = 0x33DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCD0u;
        // 0x33dcd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCD8u;
        goto label_33dcd8;
    }
    ctx->pc = 0x33DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DCD8u);
        ctx->pc = 0x33DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCD0u;
        // 0x33dcd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DCD0u, 0x33DCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DCD8u;
label_33dcd8:
    // 0x33dcd8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x33dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33dcdc:
    // 0x33dcdc: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x33dcdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33dce0:
    // 0x33dce0: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x33dce0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33dce4:
    // 0x33dce4: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x33dce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_33dce8:
    // 0x33dce8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33dce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33dcec:
    // 0x33dcec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33dcecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dcf0:
    // 0x33dcf0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33dcf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33dcf4:
    // 0x33dcf4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33dcf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33dcf8:
    // 0x33dcf8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33dcf8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_33dcfc:
    // 0x33dcfc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x33dcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_33dd00:
    // 0x33dd00: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x33dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_33dd04:
    // 0x33dd04: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x33dd04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33dd08:
    // 0x33dd08: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33dd08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33dd0c:
    // 0x33dd0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33dd0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dd10:
    // 0x33dd10: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33dd10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33dd14:
    // 0x33dd14: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33dd14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33dd18:
    // 0x33dd18: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33dd18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33dd1c:
    // 0x33dd1c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x33dd1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_33dd20:
    // 0x33dd20: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_33dd24:
    // 0x33dd24: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x33dd24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33dd28:
    // 0x33dd28: 0x0  nop
    ctx->pc = 0x33dd28u;
    // NOP
label_33dd2c:
    // 0x33dd2c: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x33dd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33dd30:
    // 0x33dd30: 0x0  nop
    ctx->pc = 0x33dd30u;
    // NOP
label_33dd34:
    // 0x33dd34: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_33dd38:
    if (ctx->pc == 0x33DD38u) {
        ctx->pc = 0x33DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD34u;
        // 0x33dd38: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DD3Cu;
        goto label_33dd3c;
    }
    ctx->pc = 0x33DD34u;
    {
        const bool branch_taken_0x33dd34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD34u;
        // 0x33dd38: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd34) {
            ctx->pc = 0x33DDCCu;
            goto label_33ddcc;
        }
    }
    ctx->pc = 0x33DD3Cu;
label_33dd3c:
    // 0x33dd3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dd40:
    // 0x33dd40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33dd44:
    // 0x33dd44: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x33dd44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_33dd48:
    // 0x33dd48: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x33dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_33dd4c:
    // 0x33dd4c: 0x60f809  jalr        $v1
label_33dd50:
    if (ctx->pc == 0x33DD50u) {
        ctx->pc = 0x33DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD4Cu;
        // 0x33dd50: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DD54u;
        goto label_33dd54;
    }
    ctx->pc = 0x33DD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DD54u);
        ctx->pc = 0x33DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD4Cu;
        // 0x33dd50: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DD4Cu, 0x33DD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DD54u;
label_33dd54:
    // 0x33dd54: 0x4617a000  add.s       $f0, $f20, $f23
    ctx->pc = 0x33dd54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
label_33dd58:
    // 0x33dd58: 0x7a040050  lq          $a0, 0x50($s0)
    ctx->pc = 0x33dd58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33dd5c:
    // 0x33dd5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x33dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33dd60:
    // 0x33dd60: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x33dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_33dd64:
    // 0x33dd64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33dd64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_33dd68:
    // 0x33dd68: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x33dd68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33dd6c:
    // 0x33dd6c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33dd6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dd70:
    // 0x33dd70: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33dd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33dd74:
    // 0x33dd74: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33dd74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_33dd78:
    // 0x33dd78: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x33dd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33dd7c:
    // 0x33dd7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33dd7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dd80:
    // 0x33dd80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33dd80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33dd84:
    // 0x33dd84: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33dd84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33dd88:
    // 0x33dd88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33dd88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33dd8c:
    // 0x33dd8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33dd8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33dd90:
    // 0x33dd90: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x33dd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_33dd94:
    // 0x33dd94: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x33dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_33dd98:
    // 0x33dd98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x33dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_33dd9c:
    // 0x33dd9c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x33dd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dda0:
    // 0x33dda0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x33dda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_33dda4:
    // 0x33dda4: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x33dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_33dda8:
    // 0x33dda8: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x33dda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_33ddac:
    // 0x33ddac: 0x40f809  jalr        $v0
label_33ddb0:
    if (ctx->pc == 0x33DDB0u) {
        ctx->pc = 0x33DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDACu;
        // 0x33ddb0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DDB4u;
        goto label_33ddb4;
    }
    ctx->pc = 0x33DDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DDB4u);
        ctx->pc = 0x33DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDACu;
        // 0x33ddb0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DDACu, 0x33DDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DDB4u;
label_33ddb4:
    // 0x33ddb4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x33ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33ddb8:
    // 0x33ddb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33ddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ddbc:
    // 0x33ddbc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33ddbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33ddc0:
    // 0x33ddc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33ddc4:
    // 0x33ddc4: 0x40f809  jalr        $v0
label_33ddc8:
    if (ctx->pc == 0x33DDC8u) {
        ctx->pc = 0x33DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDC4u;
        // 0x33ddc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DDCCu;
        goto label_33ddcc;
    }
    ctx->pc = 0x33DDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DDCCu);
        ctx->pc = 0x33DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDC4u;
        // 0x33ddc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DDC4u, 0x33DDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DDCCu;
label_33ddcc:
    // 0x33ddcc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x33ddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33ddd0:
    // 0x33ddd0: 0xc0cf61c  jal         func_33D870
label_33ddd4:
    if (ctx->pc == 0x33DDD4u) {
        ctx->pc = 0x33DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDD0u;
        // 0x33ddd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DDD8u;
        goto label_33ddd8;
    }
    ctx->pc = 0x33DDD0u;
    SET_GPR_U32(ctx, 31, 0x33DDD8u);
    ctx->pc = 0x33DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDD0u;
    // 0x33ddd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D870u, 0x33DDD0u, 0x33DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDD8u;
label_33ddd8:
    // 0x33ddd8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_33dddc:
    // 0x33dddc: 0xc0cf61c  jal         func_33D870
label_33dde0:
    if (ctx->pc == 0x33DDE0u) {
        ctx->pc = 0x33DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDDCu;
        // 0x33dde0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DDE4u;
        goto label_33dde4;
    }
    ctx->pc = 0x33DDDCu;
    SET_GPR_U32(ctx, 31, 0x33DDE4u);
    ctx->pc = 0x33DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDDCu;
    // 0x33dde0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D870u, 0x33DDDCu, 0x33DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDE4u;
label_33dde4:
    // 0x33dde4: 0x1000009c  b           . + 4 + (0x9C << 2)
label_33dde8:
    if (ctx->pc == 0x33DDE8u) {
        ctx->pc = 0x33DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDE4u;
        // 0x33dde8: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DDECu;
        goto label_33ddec;
    }
    ctx->pc = 0x33DDE4u;
    {
        const bool branch_taken_0x33dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDE4u;
        // 0x33dde8: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dde4) {
            ctx->pc = 0x33E058u;
            goto label_33e058;
        }
    }
    ctx->pc = 0x33DDECu;
label_33ddec:
    // 0x33ddec: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x33ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33ddf0:
    // 0x33ddf0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x33ddf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33ddf4:
    // 0x33ddf4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x33ddf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33ddf8:
    // 0x33ddf8: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x33ddf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_33ddfc:
    // 0x33ddfc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33ddfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33de00:
    // 0x33de00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33de00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33de04:
    // 0x33de04: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33de04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33de08:
    // 0x33de08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33de08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33de0c:
    // 0x33de0c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33de0cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_33de10:
    // 0x33de10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_33de14:
    // 0x33de14: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33de14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33de18:
    // 0x33de18: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x33de18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33de1c:
    // 0x33de1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33de1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33de20:
    // 0x33de20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33de20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33de24:
    // 0x33de24: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33de24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33de28:
    // 0x33de28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33de28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33de2c:
    // 0x33de2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33de2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33de30:
    // 0x33de30: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x33de30u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_33de34:
    // 0x33de34: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x33de34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_33de38:
    // 0x33de38: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x33de38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33de3c:
    // 0x33de3c: 0x0  nop
    ctx->pc = 0x33de3cu;
    // NOP
label_33de40:
    // 0x33de40: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x33de40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33de44:
    // 0x33de44: 0x0  nop
    ctx->pc = 0x33de44u;
    // NOP
label_33de48:
    // 0x33de48: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_33de4c:
    if (ctx->pc == 0x33DE4Cu) {
        ctx->pc = 0x33DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE48u;
        // 0x33de4c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DE50u;
        goto label_33de50;
    }
    ctx->pc = 0x33DE48u;
    {
        const bool branch_taken_0x33de48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE48u;
        // 0x33de4c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de48) {
            ctx->pc = 0x33DEE0u;
            goto label_33dee0;
        }
    }
    ctx->pc = 0x33DE50u;
label_33de50:
    // 0x33de50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33de54:
    // 0x33de54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33de58:
    // 0x33de58: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x33de58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_33de5c:
    // 0x33de5c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x33de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_33de60:
    // 0x33de60: 0x60f809  jalr        $v1
label_33de64:
    if (ctx->pc == 0x33DE64u) {
        ctx->pc = 0x33DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE60u;
        // 0x33de64: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DE68u;
        goto label_33de68;
    }
    ctx->pc = 0x33DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DE68u);
        ctx->pc = 0x33DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE60u;
        // 0x33de64: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DE60u, 0x33DE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DE68u;
label_33de68:
    // 0x33de68: 0x4617a000  add.s       $f0, $f20, $f23
    ctx->pc = 0x33de68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
label_33de6c:
    // 0x33de6c: 0x7a040050  lq          $a0, 0x50($s0)
    ctx->pc = 0x33de6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33de70:
    // 0x33de70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x33de70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33de74:
    // 0x33de74: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x33de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_33de78:
    // 0x33de78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33de78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_33de7c:
    // 0x33de7c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x33de7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33de80:
    // 0x33de80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33de80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33de84:
    // 0x33de84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33de84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33de88:
    // 0x33de88: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33de88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_33de8c:
    // 0x33de8c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x33de8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33de90:
    // 0x33de90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33de90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33de94:
    // 0x33de94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33de94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33de98:
    // 0x33de98: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33de98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33de9c:
    // 0x33de9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33de9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33dea0:
    // 0x33dea0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33dea0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33dea4:
    // 0x33dea4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_33dea8:
    // 0x33dea8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33deac:
    // 0x33deac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x33deacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_33deb0:
    // 0x33deb0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x33deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33deb4:
    // 0x33deb4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33deb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_33deb8:
    // 0x33deb8: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x33deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_33debc:
    // 0x33debc: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x33debcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_33dec0:
    // 0x33dec0: 0x40f809  jalr        $v0
label_33dec4:
    if (ctx->pc == 0x33DEC4u) {
        ctx->pc = 0x33DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEC0u;
        // 0x33dec4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DEC8u;
        goto label_33dec8;
    }
    ctx->pc = 0x33DEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DEC8u);
        ctx->pc = 0x33DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEC0u;
        // 0x33dec4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DEC0u, 0x33DEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DEC8u;
label_33dec8:
    // 0x33dec8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x33dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33decc:
    // 0x33decc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ded0:
    // 0x33ded0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33ded0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33ded4:
    // 0x33ded4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33ded8:
    // 0x33ded8: 0x40f809  jalr        $v0
label_33dedc:
    if (ctx->pc == 0x33DEDCu) {
        ctx->pc = 0x33DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DED8u;
        // 0x33dedc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DEE0u;
        goto label_33dee0;
    }
    ctx->pc = 0x33DED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DEE0u);
        ctx->pc = 0x33DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DED8u;
        // 0x33dedc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DED8u, 0x33DEE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DEE0u;
label_33dee0:
    // 0x33dee0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33dee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33dee4:
    // 0x33dee4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33dee8:
    // 0x33dee8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33deec:
    // 0x33deec: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x33deecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_33def0:
    // 0x33def0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x33def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_33def4:
    // 0x33def4: 0x60f809  jalr        $v1
label_33def8:
    if (ctx->pc == 0x33DEF8u) {
        ctx->pc = 0x33DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEF4u;
        // 0x33def8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DEFCu;
        goto label_33defc;
    }
    ctx->pc = 0x33DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DEFCu);
        ctx->pc = 0x33DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEF4u;
        // 0x33def8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DEF4u, 0x33DEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DEFCu;
label_33defc:
    // 0x33defc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33defcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_33df00:
    // 0x33df00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x33df00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33df04:
    // 0x33df04: 0xc0cf63c  jal         func_33D8F0
label_33df08:
    if (ctx->pc == 0x33DF08u) {
        ctx->pc = 0x33DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF04u;
        // 0x33df08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF0Cu;
        goto label_33df0c;
    }
    ctx->pc = 0x33DF04u;
    SET_GPR_U32(ctx, 31, 0x33DF0Cu);
    ctx->pc = 0x33DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DF04u;
    // 0x33df08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x33DF04u, 0x33DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DF0Cu;
label_33df0c:
    // 0x33df0c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33df10:
    // 0x33df10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33df10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33df14:
    // 0x33df14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33df18:
    // 0x33df18: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x33df18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_33df1c:
    // 0x33df1c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x33df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_33df20:
    // 0x33df20: 0x60f809  jalr        $v1
label_33df24:
    if (ctx->pc == 0x33DF24u) {
        ctx->pc = 0x33DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF20u;
        // 0x33df24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF28u;
        goto label_33df28;
    }
    ctx->pc = 0x33DF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DF28u);
        ctx->pc = 0x33DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF20u;
        // 0x33df24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF20u, 0x33DF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DF28u;
label_33df28:
    // 0x33df28: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x33df28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_33df2c:
    // 0x33df2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33df2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33df30:
    // 0x33df30: 0xc0cf63c  jal         func_33D8F0
label_33df34:
    if (ctx->pc == 0x33DF34u) {
        ctx->pc = 0x33DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF30u;
        // 0x33df34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF38u;
        goto label_33df38;
    }
    ctx->pc = 0x33DF30u;
    SET_GPR_U32(ctx, 31, 0x33DF38u);
    ctx->pc = 0x33DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DF30u;
    // 0x33df34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x33DF30u, 0x33DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DF38u;
label_33df38:
    // 0x33df38: 0x10000047  b           . + 4 + (0x47 << 2)
label_33df3c:
    if (ctx->pc == 0x33DF3Cu) {
        ctx->pc = 0x33DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF38u;
        // 0x33df3c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF40u;
        goto label_33df40;
    }
    ctx->pc = 0x33DF38u;
    {
        const bool branch_taken_0x33df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF38u;
        // 0x33df3c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df38) {
            ctx->pc = 0x33E058u;
            goto label_33e058;
        }
    }
    ctx->pc = 0x33DF40u;
label_33df40:
    // 0x33df40: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x33df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33df44:
    // 0x33df44: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x33df44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33df48:
    // 0x33df48: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x33df48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33df4c:
    // 0x33df4c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33df4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33df50:
    // 0x33df50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33df50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33df54:
    // 0x33df54: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33df54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33df58:
    // 0x33df58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33df58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33df5c:
    // 0x33df5c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33df5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_33df60:
    // 0x33df60: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_33df64:
    // 0x33df64: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33df68:
    // 0x33df68: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x33df68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33df6c:
    // 0x33df6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33df6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33df70:
    // 0x33df70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33df70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33df74:
    // 0x33df74: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33df74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33df78:
    // 0x33df78: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33df78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33df7c:
    // 0x33df7c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33df7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33df80:
    // 0x33df80: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x33df80u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_33df84:
    // 0x33df84: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x33df84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_33df88:
    // 0x33df88: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x33df88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33df8c:
    // 0x33df8c: 0x0  nop
    ctx->pc = 0x33df8cu;
    // NOP
label_33df90:
    // 0x33df90: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x33df90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33df94:
    // 0x33df94: 0x0  nop
    ctx->pc = 0x33df94u;
    // NOP
label_33df98:
    // 0x33df98: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_33df9c:
    if (ctx->pc == 0x33DF9Cu) {
        ctx->pc = 0x33DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF98u;
        // 0x33df9c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DFA0u;
        goto label_33dfa0;
    }
    ctx->pc = 0x33DF98u;
    {
        const bool branch_taken_0x33df98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF98u;
        // 0x33df9c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df98) {
            ctx->pc = 0x33E030u;
            goto label_33e030;
        }
    }
    ctx->pc = 0x33DFA0u;
label_33dfa0:
    // 0x33dfa0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dfa4:
    // 0x33dfa4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33dfa8:
    // 0x33dfa8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x33dfa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_33dfac:
    // 0x33dfac: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x33dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_33dfb0:
    // 0x33dfb0: 0x60f809  jalr        $v1
label_33dfb4:
    if (ctx->pc == 0x33DFB4u) {
        ctx->pc = 0x33DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFB0u;
        // 0x33dfb4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DFB8u;
        goto label_33dfb8;
    }
    ctx->pc = 0x33DFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DFB8u);
        ctx->pc = 0x33DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFB0u;
        // 0x33dfb4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DFB0u, 0x33DFB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DFB8u;
label_33dfb8:
    // 0x33dfb8: 0x4617a000  add.s       $f0, $f20, $f23
    ctx->pc = 0x33dfb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
label_33dfbc:
    // 0x33dfbc: 0x7a040050  lq          $a0, 0x50($s0)
    ctx->pc = 0x33dfbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_33dfc0:
    // 0x33dfc0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x33dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33dfc4:
    // 0x33dfc4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x33dfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_33dfc8:
    // 0x33dfc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33dfc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_33dfcc:
    // 0x33dfcc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x33dfccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33dfd0:
    // 0x33dfd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33dfd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dfd4:
    // 0x33dfd4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33dfd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33dfd8:
    // 0x33dfd8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33dfd8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_33dfdc:
    // 0x33dfdc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x33dfdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33dfe0:
    // 0x33dfe0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33dfe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33dfe4:
    // 0x33dfe4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33dfe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33dfe8:
    // 0x33dfe8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33dfe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33dfec:
    // 0x33dfec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33dfecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33dff0:
    // 0x33dff0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33dff0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33dff4:
    // 0x33dff4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_33dff8:
    // 0x33dff8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33dffc:
    // 0x33dffc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x33dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_33e000:
    // 0x33e000: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x33e000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33e004:
    // 0x33e004: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_33e008:
    // 0x33e008: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x33e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_33e00c:
    // 0x33e00c: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x33e00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_33e010:
    // 0x33e010: 0x40f809  jalr        $v0
label_33e014:
    if (ctx->pc == 0x33E014u) {
        ctx->pc = 0x33E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E010u;
        // 0x33e014: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E018u;
        goto label_33e018;
    }
    ctx->pc = 0x33E010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E018u);
        ctx->pc = 0x33E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E010u;
        // 0x33e014: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E010u, 0x33E018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E018u;
label_33e018:
    // 0x33e018: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x33e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33e01c:
    // 0x33e01c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33e01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e020:
    // 0x33e020: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33e020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33e024:
    // 0x33e024: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33e028:
    // 0x33e028: 0x40f809  jalr        $v0
label_33e02c:
    if (ctx->pc == 0x33E02Cu) {
        ctx->pc = 0x33E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E028u;
        // 0x33e02c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E030u;
        goto label_33e030;
    }
    ctx->pc = 0x33E028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E030u);
        ctx->pc = 0x33E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E028u;
        // 0x33e02c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E028u, 0x33E030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E030u;
label_33e030:
    // 0x33e030: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33e030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_33e034:
    // 0x33e034: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x33e034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_33e038:
    // 0x33e038: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x33e038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_33e03c:
    // 0x33e03c: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x33e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_33e040:
    // 0x33e040: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33e040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_33e044:
    // 0x33e044: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x33e044u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
label_33e048:
    // 0x33e048: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x33e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_33e04c:
    // 0x33e04c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x33e04cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_33e050:
    // 0x33e050: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33e050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_33e054:
    // 0x33e054: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x33e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33e058:
    // 0x33e058: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_33e05c:
    if (ctx->pc == 0x33E05Cu) {
        ctx->pc = 0x33E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E058u;
        // 0x33e05c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E060u;
        goto label_33e060;
    }
    ctx->pc = 0x33E058u;
    {
        const bool branch_taken_0x33e058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e058) {
            ctx->pc = 0x33E05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E058u;
            // 0x33e05c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E070u;
            goto label_33e070;
        }
    }
    ctx->pc = 0x33E060u;
label_33e060:
    // 0x33e060: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x33e060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_33e064:
    // 0x33e064: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x33e064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_33e068:
    // 0x33e068: 0x10000022  b           . + 4 + (0x22 << 2)
label_33e06c:
    if (ctx->pc == 0x33E06Cu) {
        ctx->pc = 0x33E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E068u;
        // 0x33e06c: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E070u;
        goto label_33e070;
    }
    ctx->pc = 0x33E068u;
    {
        const bool branch_taken_0x33e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E068u;
        // 0x33e06c: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e068) {
            ctx->pc = 0x33E0F4u;
            goto label_33e0f4;
        }
    }
    ctx->pc = 0x33E070u;
label_33e070:
    // 0x33e070: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33e074:
    // 0x33e074: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33e074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33e078:
    // 0x33e078: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33e07c:
    // 0x33e07c: 0x40f809  jalr        $v0
label_33e080:
    if (ctx->pc == 0x33E080u) {
        ctx->pc = 0x33E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E07Cu;
        // 0x33e080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E084u;
        goto label_33e084;
    }
    ctx->pc = 0x33E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E084u);
        ctx->pc = 0x33E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E07Cu;
        // 0x33e080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E07Cu, 0x33E084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E084u;
label_33e084:
    // 0x33e084: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33e088:
    // 0x33e088: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_33e08c:
    if (ctx->pc == 0x33E08Cu) {
        ctx->pc = 0x33E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E088u;
        // 0x33e08c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E090u;
        goto label_33e090;
    }
    ctx->pc = 0x33E088u;
    {
        const bool branch_taken_0x33e088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e088) {
            ctx->pc = 0x33E08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E088u;
            // 0x33e08c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E100u;
            goto label_33e100;
        }
    }
    ctx->pc = 0x33E090u;
label_33e090:
    // 0x33e090: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x33e090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33e094:
    // 0x33e094: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33e094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33e098:
    // 0x33e098: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33e098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33e09c:
    // 0x33e09c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33e0a0:
    // 0x33e0a0: 0x40f809  jalr        $v0
label_33e0a4:
    if (ctx->pc == 0x33E0A4u) {
        ctx->pc = 0x33E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0A0u;
        // 0x33e0a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0A8u;
        goto label_33e0a8;
    }
    ctx->pc = 0x33E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E0A8u);
        ctx->pc = 0x33E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0A0u;
        // 0x33e0a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E0A0u, 0x33E0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E0A8u;
label_33e0a8:
    // 0x33e0a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33e0ac:
    // 0x33e0ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_33e0b0:
    if (ctx->pc == 0x33E0B0u) {
        ctx->pc = 0x33E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0ACu;
        // 0x33e0b0: 0x3c110400  lui         $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0B4u;
        goto label_33e0b4;
    }
    ctx->pc = 0x33E0ACu;
    {
        const bool branch_taken_0x33e0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0ACu;
        // 0x33e0b0: 0x3c110400  lui         $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0ac) {
            ctx->pc = 0x33E0FCu;
            goto label_33e0fc;
        }
    }
    ctx->pc = 0x33E0B4u;
label_33e0b4:
    // 0x33e0b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33e0b8:
    // 0x33e0b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33e0bc:
    // 0x33e0bc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33e0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33e0c0:
    // 0x33e0c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33e0c4:
    // 0x33e0c4: 0x40f809  jalr        $v0
label_33e0c8:
    if (ctx->pc == 0x33E0C8u) {
        ctx->pc = 0x33E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0C4u;
        // 0x33e0c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0CCu;
        goto label_33e0cc;
    }
    ctx->pc = 0x33E0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E0CCu);
        ctx->pc = 0x33E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0C4u;
        // 0x33e0c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E0C4u, 0x33E0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E0CCu;
label_33e0cc:
    // 0x33e0cc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x33e0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_33e0d0:
    // 0x33e0d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_33e0d4:
    if (ctx->pc == 0x33E0D4u) {
        ctx->pc = 0x33E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0D0u;
        // 0x33e0d4: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0D8u;
        goto label_33e0d8;
    }
    ctx->pc = 0x33E0D0u;
    {
        const bool branch_taken_0x33e0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e0d0) {
            ctx->pc = 0x33E0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E0D0u;
            // 0x33e0d4: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E100u;
            goto label_33e100;
        }
    }
    ctx->pc = 0x33E0D8u;
label_33e0d8:
    // 0x33e0d8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x33e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33e0dc:
    // 0x33e0dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33e0e0:
    // 0x33e0e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33e0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33e0e4:
    // 0x33e0e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33e0e8:
    // 0x33e0e8: 0x40f809  jalr        $v0
label_33e0ec:
    if (ctx->pc == 0x33E0ECu) {
        ctx->pc = 0x33E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0E8u;
        // 0x33e0ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0F0u;
        goto label_33e0f0;
    }
    ctx->pc = 0x33E0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E0F0u);
        ctx->pc = 0x33E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0E8u;
        // 0x33e0ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E0E8u, 0x33E0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E0F0u;
label_33e0f0:
    // 0x33e0f0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x33e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_33e0f4:
    // 0x33e0f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_33e0f8:
    if (ctx->pc == 0x33E0F8u) {
        ctx->pc = 0x33E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0F4u;
        // 0x33e0f8: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0FCu;
        goto label_33e0fc;
    }
    ctx->pc = 0x33E0F4u;
    {
        const bool branch_taken_0x33e0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e0f4) {
            ctx->pc = 0x33E0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E0F4u;
            // 0x33e0f8: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E10Cu;
            goto label_33e10c;
        }
    }
    ctx->pc = 0x33E0FCu;
label_33e0fc:
    // 0x33e0fc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x33e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_33e100:
    // 0x33e100: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_33e104:
    // 0x33e104: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x33e104u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_33e108:
    // 0x33e108: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x33e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_33e10c:
    // 0x33e10c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x33e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33e110:
    // 0x33e110: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_33e114:
    if (ctx->pc == 0x33E114u) {
        ctx->pc = 0x33E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E110u;
        // 0x33e114: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E118u;
        goto label_33e118;
    }
    ctx->pc = 0x33E110u;
    {
        const bool branch_taken_0x33e110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E110u;
        // 0x33e114: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e110) {
            ctx->pc = 0x33E184u;
            goto label_33e184;
        }
    }
    ctx->pc = 0x33E118u;
label_33e118:
    // 0x33e118: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x33e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_33e11c:
    // 0x33e11c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33e120:
    // 0x33e120: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_33e124:
    if (ctx->pc == 0x33E124u) {
        ctx->pc = 0x33E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E120u;
        // 0x33e124: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E128u;
        goto label_33e128;
    }
    ctx->pc = 0x33E120u;
    {
        const bool branch_taken_0x33e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e120) {
            ctx->pc = 0x33E124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E120u;
            // 0x33e124: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E13Cu;
            goto label_33e13c;
        }
    }
    ctx->pc = 0x33E128u;
label_33e128:
    // 0x33e128: 0xc089ff6  jal         func_227FD8
label_33e12c:
    if (ctx->pc == 0x33E12Cu) {
        ctx->pc = 0x33E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E128u;
        // 0x33e12c: 0x8e840034  lw          $a0, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E130u;
        goto label_33e130;
    }
    ctx->pc = 0x33E128u;
    SET_GPR_U32(ctx, 31, 0x33E130u);
    ctx->pc = 0x33E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E128u;
    // 0x33e12c: 0x8e840034  lw          $a0, 0x34($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x33E128u, 0x33E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E130u;
label_33e130:
    // 0x33e130: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_33e134:
    if (ctx->pc == 0x33E134u) {
        ctx->pc = 0x33E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E130u;
        // 0x33e134: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E138u;
        goto label_33e138;
    }
    ctx->pc = 0x33E130u;
    {
        const bool branch_taken_0x33e130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E130u;
        // 0x33e134: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e130) {
            ctx->pc = 0x33E200u;
            goto label_33e200;
        }
    }
    ctx->pc = 0x33E138u;
label_33e138:
    // 0x33e138: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x33e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_33e13c:
    // 0x33e13c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x33e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_33e140:
    // 0x33e140: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_33e144:
    if (ctx->pc == 0x33E144u) {
        ctx->pc = 0x33E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E140u;
        // 0x33e144: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E148u;
        goto label_33e148;
    }
    ctx->pc = 0x33E140u;
    {
        const bool branch_taken_0x33e140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E140u;
        // 0x33e144: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e140) {
            ctx->pc = 0x33E200u;
            goto label_33e200;
        }
    }
    ctx->pc = 0x33E148u;
label_33e148:
    // 0x33e148: 0x7a0200a0  lq          $v0, 0xA0($s0)
    ctx->pc = 0x33e148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 160)));
label_33e14c:
    // 0x33e14c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x33e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33e150:
    // 0x33e150: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33e150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33e154:
    // 0x33e154: 0xc0cf61c  jal         func_33D870
label_33e158:
    if (ctx->pc == 0x33E158u) {
        ctx->pc = 0x33E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E154u;
        // 0x33e158: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E15Cu;
        goto label_33e15c;
    }
    ctx->pc = 0x33E154u;
    SET_GPR_U32(ctx, 31, 0x33E15Cu);
    ctx->pc = 0x33E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E154u;
    // 0x33e158: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D870u, 0x33E154u, 0x33E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E15Cu;
label_33e15c:
    // 0x33e15c: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x33e15cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_33e160:
    // 0x33e160: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x33e160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33e164:
    // 0x33e164: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33e164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e168:
    // 0x33e168: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33e168u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e16c:
    // 0x33e16c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33e16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33e170:
    // 0x33e170: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33e170u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33e174:
    // 0x33e174: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33e174u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_33e178:
    // 0x33e178: 0x7fc30000  sq          $v1, 0x0($fp)
    ctx->pc = 0x33e178u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 3));
label_33e17c:
    // 0x33e17c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_33e180:
    if (ctx->pc == 0x33E180u) {
        ctx->pc = 0x33E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E17Cu;
        // 0x33e180: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E184u;
        goto label_33e184;
    }
    ctx->pc = 0x33E17Cu;
    {
        const bool branch_taken_0x33e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E17Cu;
        // 0x33e180: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e17c) {
            ctx->pc = 0x33E1FCu;
            goto label_33e1fc;
        }
    }
    ctx->pc = 0x33E184u;
label_33e184:
    // 0x33e184: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_33e188:
    if (ctx->pc == 0x33E188u) {
        ctx->pc = 0x33E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E184u;
        // 0x33e188: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E18Cu;
        goto label_33e18c;
    }
    ctx->pc = 0x33E184u;
    {
        const bool branch_taken_0x33e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E184u;
        // 0x33e188: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e184) {
            ctx->pc = 0x33E1BCu;
            goto label_33e1bc;
        }
    }
    ctx->pc = 0x33E18Cu;
label_33e18c:
    // 0x33e18c: 0x7a0200a0  lq          $v0, 0xA0($s0)
    ctx->pc = 0x33e18cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 160)));
label_33e190:
    // 0x33e190: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33e190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33e194:
    // 0x33e194: 0xc0cf61c  jal         func_33D870
label_33e198:
    if (ctx->pc == 0x33E198u) {
        ctx->pc = 0x33E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E194u;
        // 0x33e198: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E19Cu;
        goto label_33e19c;
    }
    ctx->pc = 0x33E194u;
    SET_GPR_U32(ctx, 31, 0x33E19Cu);
    ctx->pc = 0x33E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E194u;
    // 0x33e198: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D870u, 0x33E194u, 0x33E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E19Cu;
label_33e19c:
    // 0x33e19c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x33e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_33e1a0:
    // 0x33e1a0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x33e1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_33e1a4:
    // 0x33e1a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33e1a8:
    // 0x33e1a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33e1ac:
    if (ctx->pc == 0x33E1ACu) {
        ctx->pc = 0x33E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1A8u;
        // 0x33e1ac: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E1B0u;
        goto label_33e1b0;
    }
    ctx->pc = 0x33E1A8u;
    {
        const bool branch_taken_0x33e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1A8u;
        // 0x33e1ac: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1a8) {
            ctx->pc = 0x33E1BCu;
            goto label_33e1bc;
        }
    }
    ctx->pc = 0x33E1B0u;
label_33e1b0:
    // 0x33e1b0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_33e1b4:
    // 0x33e1b4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x33e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_33e1b8:
    // 0x33e1b8: 0x7e820050  sq          $v0, 0x50($s4)
    ctx->pc = 0x33e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 2));
label_33e1bc:
    // 0x33e1bc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x33e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_33e1c0:
    // 0x33e1c0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x33e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_33e1c4:
    // 0x33e1c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_33e1c8:
    if (ctx->pc == 0x33E1C8u) {
        ctx->pc = 0x33E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1C4u;
        // 0x33e1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E1CCu;
        goto label_33e1cc;
    }
    ctx->pc = 0x33E1C4u;
    {
        const bool branch_taken_0x33e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1C4u;
        // 0x33e1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1c4) {
            ctx->pc = 0x33E1FCu;
            goto label_33e1fc;
        }
    }
    ctx->pc = 0x33E1CCu;
label_33e1cc:
    // 0x33e1cc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x33e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_33e1d0:
    // 0x33e1d0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_33e1d4:
    // 0x33e1d4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x33e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_33e1d8:
    // 0x33e1d8: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x33e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_33e1dc:
    // 0x33e1dc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x33e1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_33e1e0:
    // 0x33e1e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x33e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_33e1e4:
    // 0x33e1e4: 0x40f809  jalr        $v0
label_33e1e8:
    if (ctx->pc == 0x33E1E8u) {
        ctx->pc = 0x33E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1E4u;
        // 0x33e1e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E1ECu;
        goto label_33e1ec;
    }
    ctx->pc = 0x33E1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E1ECu);
        ctx->pc = 0x33E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1E4u;
        // 0x33e1e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E1E4u, 0x33E1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E1ECu;
label_33e1ec:
    // 0x33e1ec: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_33e1f0:
    // 0x33e1f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e1f4:
    // 0x33e1f4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x33e1f4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_33e1f8:
    // 0x33e1f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x33e1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_33e1fc:
    // 0x33e1fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33e200:
    // 0x33e200: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x33e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_33e204:
    // 0x33e204: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_33e208:
    if (ctx->pc == 0x33E208u) {
        ctx->pc = 0x33E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E204u;
        // 0x33e208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E20Cu;
        goto label_33e20c;
    }
    ctx->pc = 0x33E204u;
    {
        const bool branch_taken_0x33e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e204) {
            ctx->pc = 0x33E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E204u;
            // 0x33e208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E238u;
            goto label_33e238;
        }
    }
    ctx->pc = 0x33E20Cu;
label_33e20c:
    // 0x33e20c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x33e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_33e210:
    // 0x33e210: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33e210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e214:
    // 0x33e214: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x33e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_33e218:
    // 0x33e218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e21c:
    // 0x33e21c: 0x10000006  b           . + 4 + (0x6 << 2)
label_33e220:
    if (ctx->pc == 0x33E220u) {
        ctx->pc = 0x33E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E21Cu;
        // 0x33e220: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E224u;
        goto label_33e224;
    }
    ctx->pc = 0x33E21Cu;
    {
        const bool branch_taken_0x33e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E21Cu;
        // 0x33e220: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e21c) {
            ctx->pc = 0x33E238u;
            goto label_33e238;
        }
    }
    ctx->pc = 0x33E224u;
label_33e224:
    // 0x33e224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33e224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33e228:
    // 0x33e228: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x33e228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_33e22c:
    // 0x33e22c: 0x1440fe14  bnez        $v0, . + 4 + (-0x1EC << 2)
label_33e230:
    if (ctx->pc == 0x33E230u) {
        ctx->pc = 0x33E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E22Cu;
        // 0x33e230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E234u;
        goto label_33e234;
    }
    ctx->pc = 0x33E22Cu;
    {
        const bool branch_taken_0x33e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E22Cu;
        // 0x33e230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e22c) {
            ctx->pc = 0x33DA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33da80;
        }
    }
    ctx->pc = 0x33E234u;
label_33e234:
    // 0x33e234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33e234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e238:
    // 0x33e238: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x33e238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_33e23c:
    // 0x33e23c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x33e23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_33e240:
    // 0x33e240: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x33e240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_33e244:
    // 0x33e244: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x33e244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_33e248:
    // 0x33e248: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x33e248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33e24c:
    // 0x33e24c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x33e24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33e250:
    // 0x33e250: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x33e250u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33e254:
    // 0x33e254: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x33e254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33e258:
    // 0x33e258: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x33e258u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33e25c:
    // 0x33e25c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x33e25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_33e260:
    // 0x33e260: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x33e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_33e264:
    // 0x33e264: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x33e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_33e268:
    // 0x33e268: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x33e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_33e26c:
    // 0x33e26c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x33e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33e270:
    // 0x33e270: 0x3e00008  jr          $ra
label_33e274:
    if (ctx->pc == 0x33E274u) {
        ctx->pc = 0x33E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E270u;
        // 0x33e274: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E278u;
        goto label_fallthrough_0x33e270;
    }
    ctx->pc = 0x33E270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E270u;
        // 0x33e274: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33e270:
    ctx->pc = 0x33E278u;
}
