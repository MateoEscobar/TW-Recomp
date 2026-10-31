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

// Function: sub_0039D870
// Address: 0x39d870 - 0x39ec60
void sub_0039D870_0x39d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D870_0x39d870");
#endif

    switch (ctx->pc) {
        case 0x39d870u: goto label_39d870;
        case 0x39d874u: goto label_39d874;
        case 0x39d878u: goto label_39d878;
        case 0x39d87cu: goto label_39d87c;
        case 0x39d880u: goto label_39d880;
        case 0x39d884u: goto label_39d884;
        case 0x39d888u: goto label_39d888;
        case 0x39d88cu: goto label_39d88c;
        case 0x39d890u: goto label_39d890;
        case 0x39d894u: goto label_39d894;
        case 0x39d898u: goto label_39d898;
        case 0x39d89cu: goto label_39d89c;
        case 0x39d8a0u: goto label_39d8a0;
        case 0x39d8a4u: goto label_39d8a4;
        case 0x39d8a8u: goto label_39d8a8;
        case 0x39d8acu: goto label_39d8ac;
        case 0x39d8b0u: goto label_39d8b0;
        case 0x39d8b4u: goto label_39d8b4;
        case 0x39d8b8u: goto label_39d8b8;
        case 0x39d8bcu: goto label_39d8bc;
        case 0x39d8c0u: goto label_39d8c0;
        case 0x39d8c4u: goto label_39d8c4;
        case 0x39d8c8u: goto label_39d8c8;
        case 0x39d8ccu: goto label_39d8cc;
        case 0x39d8d0u: goto label_39d8d0;
        case 0x39d8d4u: goto label_39d8d4;
        case 0x39d8d8u: goto label_39d8d8;
        case 0x39d8dcu: goto label_39d8dc;
        case 0x39d8e0u: goto label_39d8e0;
        case 0x39d8e4u: goto label_39d8e4;
        case 0x39d8e8u: goto label_39d8e8;
        case 0x39d8ecu: goto label_39d8ec;
        case 0x39d8f0u: goto label_39d8f0;
        case 0x39d8f4u: goto label_39d8f4;
        case 0x39d8f8u: goto label_39d8f8;
        case 0x39d8fcu: goto label_39d8fc;
        case 0x39d900u: goto label_39d900;
        case 0x39d904u: goto label_39d904;
        case 0x39d908u: goto label_39d908;
        case 0x39d90cu: goto label_39d90c;
        case 0x39d910u: goto label_39d910;
        case 0x39d914u: goto label_39d914;
        case 0x39d918u: goto label_39d918;
        case 0x39d91cu: goto label_39d91c;
        case 0x39d920u: goto label_39d920;
        case 0x39d924u: goto label_39d924;
        case 0x39d928u: goto label_39d928;
        case 0x39d92cu: goto label_39d92c;
        case 0x39d930u: goto label_39d930;
        case 0x39d934u: goto label_39d934;
        case 0x39d938u: goto label_39d938;
        case 0x39d93cu: goto label_39d93c;
        case 0x39d940u: goto label_39d940;
        case 0x39d944u: goto label_39d944;
        case 0x39d948u: goto label_39d948;
        case 0x39d94cu: goto label_39d94c;
        case 0x39d950u: goto label_39d950;
        case 0x39d954u: goto label_39d954;
        case 0x39d958u: goto label_39d958;
        case 0x39d95cu: goto label_39d95c;
        case 0x39d960u: goto label_39d960;
        case 0x39d964u: goto label_39d964;
        case 0x39d968u: goto label_39d968;
        case 0x39d96cu: goto label_39d96c;
        case 0x39d970u: goto label_39d970;
        case 0x39d974u: goto label_39d974;
        case 0x39d978u: goto label_39d978;
        case 0x39d97cu: goto label_39d97c;
        case 0x39d980u: goto label_39d980;
        case 0x39d984u: goto label_39d984;
        case 0x39d988u: goto label_39d988;
        case 0x39d98cu: goto label_39d98c;
        case 0x39d990u: goto label_39d990;
        case 0x39d994u: goto label_39d994;
        case 0x39d998u: goto label_39d998;
        case 0x39d99cu: goto label_39d99c;
        case 0x39d9a0u: goto label_39d9a0;
        case 0x39d9a4u: goto label_39d9a4;
        case 0x39d9a8u: goto label_39d9a8;
        case 0x39d9acu: goto label_39d9ac;
        case 0x39d9b0u: goto label_39d9b0;
        case 0x39d9b4u: goto label_39d9b4;
        case 0x39d9b8u: goto label_39d9b8;
        case 0x39d9bcu: goto label_39d9bc;
        case 0x39d9c0u: goto label_39d9c0;
        case 0x39d9c4u: goto label_39d9c4;
        case 0x39d9c8u: goto label_39d9c8;
        case 0x39d9ccu: goto label_39d9cc;
        case 0x39d9d0u: goto label_39d9d0;
        case 0x39d9d4u: goto label_39d9d4;
        case 0x39d9d8u: goto label_39d9d8;
        case 0x39d9dcu: goto label_39d9dc;
        case 0x39d9e0u: goto label_39d9e0;
        case 0x39d9e4u: goto label_39d9e4;
        case 0x39d9e8u: goto label_39d9e8;
        case 0x39d9ecu: goto label_39d9ec;
        case 0x39d9f0u: goto label_39d9f0;
        case 0x39d9f4u: goto label_39d9f4;
        case 0x39d9f8u: goto label_39d9f8;
        case 0x39d9fcu: goto label_39d9fc;
        case 0x39da00u: goto label_39da00;
        case 0x39da04u: goto label_39da04;
        case 0x39da08u: goto label_39da08;
        case 0x39da0cu: goto label_39da0c;
        case 0x39da10u: goto label_39da10;
        case 0x39da14u: goto label_39da14;
        case 0x39da18u: goto label_39da18;
        case 0x39da1cu: goto label_39da1c;
        case 0x39da20u: goto label_39da20;
        case 0x39da24u: goto label_39da24;
        case 0x39da28u: goto label_39da28;
        case 0x39da2cu: goto label_39da2c;
        case 0x39da30u: goto label_39da30;
        case 0x39da34u: goto label_39da34;
        case 0x39da38u: goto label_39da38;
        case 0x39da3cu: goto label_39da3c;
        case 0x39da40u: goto label_39da40;
        case 0x39da44u: goto label_39da44;
        case 0x39da48u: goto label_39da48;
        case 0x39da4cu: goto label_39da4c;
        case 0x39da50u: goto label_39da50;
        case 0x39da54u: goto label_39da54;
        case 0x39da58u: goto label_39da58;
        case 0x39da5cu: goto label_39da5c;
        case 0x39da60u: goto label_39da60;
        case 0x39da64u: goto label_39da64;
        case 0x39da68u: goto label_39da68;
        case 0x39da6cu: goto label_39da6c;
        case 0x39da70u: goto label_39da70;
        case 0x39da74u: goto label_39da74;
        case 0x39da78u: goto label_39da78;
        case 0x39da7cu: goto label_39da7c;
        case 0x39da80u: goto label_39da80;
        case 0x39da84u: goto label_39da84;
        case 0x39da88u: goto label_39da88;
        case 0x39da8cu: goto label_39da8c;
        case 0x39da90u: goto label_39da90;
        case 0x39da94u: goto label_39da94;
        case 0x39da98u: goto label_39da98;
        case 0x39da9cu: goto label_39da9c;
        case 0x39daa0u: goto label_39daa0;
        case 0x39daa4u: goto label_39daa4;
        case 0x39daa8u: goto label_39daa8;
        case 0x39daacu: goto label_39daac;
        case 0x39dab0u: goto label_39dab0;
        case 0x39dab4u: goto label_39dab4;
        case 0x39dab8u: goto label_39dab8;
        case 0x39dabcu: goto label_39dabc;
        case 0x39dac0u: goto label_39dac0;
        case 0x39dac4u: goto label_39dac4;
        case 0x39dac8u: goto label_39dac8;
        case 0x39daccu: goto label_39dacc;
        case 0x39dad0u: goto label_39dad0;
        case 0x39dad4u: goto label_39dad4;
        case 0x39dad8u: goto label_39dad8;
        case 0x39dadcu: goto label_39dadc;
        case 0x39dae0u: goto label_39dae0;
        case 0x39dae4u: goto label_39dae4;
        case 0x39dae8u: goto label_39dae8;
        case 0x39daecu: goto label_39daec;
        case 0x39daf0u: goto label_39daf0;
        case 0x39daf4u: goto label_39daf4;
        case 0x39daf8u: goto label_39daf8;
        case 0x39dafcu: goto label_39dafc;
        case 0x39db00u: goto label_39db00;
        case 0x39db04u: goto label_39db04;
        case 0x39db08u: goto label_39db08;
        case 0x39db0cu: goto label_39db0c;
        case 0x39db10u: goto label_39db10;
        case 0x39db14u: goto label_39db14;
        case 0x39db18u: goto label_39db18;
        case 0x39db1cu: goto label_39db1c;
        case 0x39db20u: goto label_39db20;
        case 0x39db24u: goto label_39db24;
        case 0x39db28u: goto label_39db28;
        case 0x39db2cu: goto label_39db2c;
        case 0x39db30u: goto label_39db30;
        case 0x39db34u: goto label_39db34;
        case 0x39db38u: goto label_39db38;
        case 0x39db3cu: goto label_39db3c;
        case 0x39db40u: goto label_39db40;
        case 0x39db44u: goto label_39db44;
        case 0x39db48u: goto label_39db48;
        case 0x39db4cu: goto label_39db4c;
        case 0x39db50u: goto label_39db50;
        case 0x39db54u: goto label_39db54;
        case 0x39db58u: goto label_39db58;
        case 0x39db5cu: goto label_39db5c;
        case 0x39db60u: goto label_39db60;
        case 0x39db64u: goto label_39db64;
        case 0x39db68u: goto label_39db68;
        case 0x39db6cu: goto label_39db6c;
        case 0x39db70u: goto label_39db70;
        case 0x39db74u: goto label_39db74;
        case 0x39db78u: goto label_39db78;
        case 0x39db7cu: goto label_39db7c;
        case 0x39db80u: goto label_39db80;
        case 0x39db84u: goto label_39db84;
        case 0x39db88u: goto label_39db88;
        case 0x39db8cu: goto label_39db8c;
        case 0x39db90u: goto label_39db90;
        case 0x39db94u: goto label_39db94;
        case 0x39db98u: goto label_39db98;
        case 0x39db9cu: goto label_39db9c;
        case 0x39dba0u: goto label_39dba0;
        case 0x39dba4u: goto label_39dba4;
        case 0x39dba8u: goto label_39dba8;
        case 0x39dbacu: goto label_39dbac;
        case 0x39dbb0u: goto label_39dbb0;
        case 0x39dbb4u: goto label_39dbb4;
        case 0x39dbb8u: goto label_39dbb8;
        case 0x39dbbcu: goto label_39dbbc;
        case 0x39dbc0u: goto label_39dbc0;
        case 0x39dbc4u: goto label_39dbc4;
        case 0x39dbc8u: goto label_39dbc8;
        case 0x39dbccu: goto label_39dbcc;
        case 0x39dbd0u: goto label_39dbd0;
        case 0x39dbd4u: goto label_39dbd4;
        case 0x39dbd8u: goto label_39dbd8;
        case 0x39dbdcu: goto label_39dbdc;
        case 0x39dbe0u: goto label_39dbe0;
        case 0x39dbe4u: goto label_39dbe4;
        case 0x39dbe8u: goto label_39dbe8;
        case 0x39dbecu: goto label_39dbec;
        case 0x39dbf0u: goto label_39dbf0;
        case 0x39dbf4u: goto label_39dbf4;
        case 0x39dbf8u: goto label_39dbf8;
        case 0x39dbfcu: goto label_39dbfc;
        case 0x39dc00u: goto label_39dc00;
        case 0x39dc04u: goto label_39dc04;
        case 0x39dc08u: goto label_39dc08;
        case 0x39dc0cu: goto label_39dc0c;
        case 0x39dc10u: goto label_39dc10;
        case 0x39dc14u: goto label_39dc14;
        case 0x39dc18u: goto label_39dc18;
        case 0x39dc1cu: goto label_39dc1c;
        case 0x39dc20u: goto label_39dc20;
        case 0x39dc24u: goto label_39dc24;
        case 0x39dc28u: goto label_39dc28;
        case 0x39dc2cu: goto label_39dc2c;
        case 0x39dc30u: goto label_39dc30;
        case 0x39dc34u: goto label_39dc34;
        case 0x39dc38u: goto label_39dc38;
        case 0x39dc3cu: goto label_39dc3c;
        case 0x39dc40u: goto label_39dc40;
        case 0x39dc44u: goto label_39dc44;
        case 0x39dc48u: goto label_39dc48;
        case 0x39dc4cu: goto label_39dc4c;
        case 0x39dc50u: goto label_39dc50;
        case 0x39dc54u: goto label_39dc54;
        case 0x39dc58u: goto label_39dc58;
        case 0x39dc5cu: goto label_39dc5c;
        case 0x39dc60u: goto label_39dc60;
        case 0x39dc64u: goto label_39dc64;
        case 0x39dc68u: goto label_39dc68;
        case 0x39dc6cu: goto label_39dc6c;
        case 0x39dc70u: goto label_39dc70;
        case 0x39dc74u: goto label_39dc74;
        case 0x39dc78u: goto label_39dc78;
        case 0x39dc7cu: goto label_39dc7c;
        case 0x39dc80u: goto label_39dc80;
        case 0x39dc84u: goto label_39dc84;
        case 0x39dc88u: goto label_39dc88;
        case 0x39dc8cu: goto label_39dc8c;
        case 0x39dc90u: goto label_39dc90;
        case 0x39dc94u: goto label_39dc94;
        case 0x39dc98u: goto label_39dc98;
        case 0x39dc9cu: goto label_39dc9c;
        case 0x39dca0u: goto label_39dca0;
        case 0x39dca4u: goto label_39dca4;
        case 0x39dca8u: goto label_39dca8;
        case 0x39dcacu: goto label_39dcac;
        case 0x39dcb0u: goto label_39dcb0;
        case 0x39dcb4u: goto label_39dcb4;
        case 0x39dcb8u: goto label_39dcb8;
        case 0x39dcbcu: goto label_39dcbc;
        case 0x39dcc0u: goto label_39dcc0;
        case 0x39dcc4u: goto label_39dcc4;
        case 0x39dcc8u: goto label_39dcc8;
        case 0x39dcccu: goto label_39dccc;
        case 0x39dcd0u: goto label_39dcd0;
        case 0x39dcd4u: goto label_39dcd4;
        case 0x39dcd8u: goto label_39dcd8;
        case 0x39dcdcu: goto label_39dcdc;
        case 0x39dce0u: goto label_39dce0;
        case 0x39dce4u: goto label_39dce4;
        case 0x39dce8u: goto label_39dce8;
        case 0x39dcecu: goto label_39dcec;
        case 0x39dcf0u: goto label_39dcf0;
        case 0x39dcf4u: goto label_39dcf4;
        case 0x39dcf8u: goto label_39dcf8;
        case 0x39dcfcu: goto label_39dcfc;
        case 0x39dd00u: goto label_39dd00;
        case 0x39dd04u: goto label_39dd04;
        case 0x39dd08u: goto label_39dd08;
        case 0x39dd0cu: goto label_39dd0c;
        case 0x39dd10u: goto label_39dd10;
        case 0x39dd14u: goto label_39dd14;
        case 0x39dd18u: goto label_39dd18;
        case 0x39dd1cu: goto label_39dd1c;
        case 0x39dd20u: goto label_39dd20;
        case 0x39dd24u: goto label_39dd24;
        case 0x39dd28u: goto label_39dd28;
        case 0x39dd2cu: goto label_39dd2c;
        case 0x39dd30u: goto label_39dd30;
        case 0x39dd34u: goto label_39dd34;
        case 0x39dd38u: goto label_39dd38;
        case 0x39dd3cu: goto label_39dd3c;
        case 0x39dd40u: goto label_39dd40;
        case 0x39dd44u: goto label_39dd44;
        case 0x39dd48u: goto label_39dd48;
        case 0x39dd4cu: goto label_39dd4c;
        case 0x39dd50u: goto label_39dd50;
        case 0x39dd54u: goto label_39dd54;
        case 0x39dd58u: goto label_39dd58;
        case 0x39dd5cu: goto label_39dd5c;
        case 0x39dd60u: goto label_39dd60;
        case 0x39dd64u: goto label_39dd64;
        case 0x39dd68u: goto label_39dd68;
        case 0x39dd6cu: goto label_39dd6c;
        case 0x39dd70u: goto label_39dd70;
        case 0x39dd74u: goto label_39dd74;
        case 0x39dd78u: goto label_39dd78;
        case 0x39dd7cu: goto label_39dd7c;
        case 0x39dd80u: goto label_39dd80;
        case 0x39dd84u: goto label_39dd84;
        case 0x39dd88u: goto label_39dd88;
        case 0x39dd8cu: goto label_39dd8c;
        case 0x39dd90u: goto label_39dd90;
        case 0x39dd94u: goto label_39dd94;
        case 0x39dd98u: goto label_39dd98;
        case 0x39dd9cu: goto label_39dd9c;
        case 0x39dda0u: goto label_39dda0;
        case 0x39dda4u: goto label_39dda4;
        case 0x39dda8u: goto label_39dda8;
        case 0x39ddacu: goto label_39ddac;
        case 0x39ddb0u: goto label_39ddb0;
        case 0x39ddb4u: goto label_39ddb4;
        case 0x39ddb8u: goto label_39ddb8;
        case 0x39ddbcu: goto label_39ddbc;
        case 0x39ddc0u: goto label_39ddc0;
        case 0x39ddc4u: goto label_39ddc4;
        case 0x39ddc8u: goto label_39ddc8;
        case 0x39ddccu: goto label_39ddcc;
        case 0x39ddd0u: goto label_39ddd0;
        case 0x39ddd4u: goto label_39ddd4;
        case 0x39ddd8u: goto label_39ddd8;
        case 0x39dddcu: goto label_39dddc;
        case 0x39dde0u: goto label_39dde0;
        case 0x39dde4u: goto label_39dde4;
        case 0x39dde8u: goto label_39dde8;
        case 0x39ddecu: goto label_39ddec;
        case 0x39ddf0u: goto label_39ddf0;
        case 0x39ddf4u: goto label_39ddf4;
        case 0x39ddf8u: goto label_39ddf8;
        case 0x39ddfcu: goto label_39ddfc;
        case 0x39de00u: goto label_39de00;
        case 0x39de04u: goto label_39de04;
        case 0x39de08u: goto label_39de08;
        case 0x39de0cu: goto label_39de0c;
        case 0x39de10u: goto label_39de10;
        case 0x39de14u: goto label_39de14;
        case 0x39de18u: goto label_39de18;
        case 0x39de1cu: goto label_39de1c;
        case 0x39de20u: goto label_39de20;
        case 0x39de24u: goto label_39de24;
        case 0x39de28u: goto label_39de28;
        case 0x39de2cu: goto label_39de2c;
        case 0x39de30u: goto label_39de30;
        case 0x39de34u: goto label_39de34;
        case 0x39de38u: goto label_39de38;
        case 0x39de3cu: goto label_39de3c;
        case 0x39de40u: goto label_39de40;
        case 0x39de44u: goto label_39de44;
        case 0x39de48u: goto label_39de48;
        case 0x39de4cu: goto label_39de4c;
        case 0x39de50u: goto label_39de50;
        case 0x39de54u: goto label_39de54;
        case 0x39de58u: goto label_39de58;
        case 0x39de5cu: goto label_39de5c;
        case 0x39de60u: goto label_39de60;
        case 0x39de64u: goto label_39de64;
        case 0x39de68u: goto label_39de68;
        case 0x39de6cu: goto label_39de6c;
        case 0x39de70u: goto label_39de70;
        case 0x39de74u: goto label_39de74;
        case 0x39de78u: goto label_39de78;
        case 0x39de7cu: goto label_39de7c;
        case 0x39de80u: goto label_39de80;
        case 0x39de84u: goto label_39de84;
        case 0x39de88u: goto label_39de88;
        case 0x39de8cu: goto label_39de8c;
        case 0x39de90u: goto label_39de90;
        case 0x39de94u: goto label_39de94;
        case 0x39de98u: goto label_39de98;
        case 0x39de9cu: goto label_39de9c;
        case 0x39dea0u: goto label_39dea0;
        case 0x39dea4u: goto label_39dea4;
        case 0x39dea8u: goto label_39dea8;
        case 0x39deacu: goto label_39deac;
        case 0x39deb0u: goto label_39deb0;
        case 0x39deb4u: goto label_39deb4;
        case 0x39deb8u: goto label_39deb8;
        case 0x39debcu: goto label_39debc;
        case 0x39dec0u: goto label_39dec0;
        case 0x39dec4u: goto label_39dec4;
        case 0x39dec8u: goto label_39dec8;
        case 0x39deccu: goto label_39decc;
        case 0x39ded0u: goto label_39ded0;
        case 0x39ded4u: goto label_39ded4;
        case 0x39ded8u: goto label_39ded8;
        case 0x39dedcu: goto label_39dedc;
        case 0x39dee0u: goto label_39dee0;
        case 0x39dee4u: goto label_39dee4;
        case 0x39dee8u: goto label_39dee8;
        case 0x39deecu: goto label_39deec;
        case 0x39def0u: goto label_39def0;
        case 0x39def4u: goto label_39def4;
        case 0x39def8u: goto label_39def8;
        case 0x39defcu: goto label_39defc;
        case 0x39df00u: goto label_39df00;
        case 0x39df04u: goto label_39df04;
        case 0x39df08u: goto label_39df08;
        case 0x39df0cu: goto label_39df0c;
        case 0x39df10u: goto label_39df10;
        case 0x39df14u: goto label_39df14;
        case 0x39df18u: goto label_39df18;
        case 0x39df1cu: goto label_39df1c;
        case 0x39df20u: goto label_39df20;
        case 0x39df24u: goto label_39df24;
        case 0x39df28u: goto label_39df28;
        case 0x39df2cu: goto label_39df2c;
        case 0x39df30u: goto label_39df30;
        case 0x39df34u: goto label_39df34;
        case 0x39df38u: goto label_39df38;
        case 0x39df3cu: goto label_39df3c;
        case 0x39df40u: goto label_39df40;
        case 0x39df44u: goto label_39df44;
        case 0x39df48u: goto label_39df48;
        case 0x39df4cu: goto label_39df4c;
        case 0x39df50u: goto label_39df50;
        case 0x39df54u: goto label_39df54;
        case 0x39df58u: goto label_39df58;
        case 0x39df5cu: goto label_39df5c;
        case 0x39df60u: goto label_39df60;
        case 0x39df64u: goto label_39df64;
        case 0x39df68u: goto label_39df68;
        case 0x39df6cu: goto label_39df6c;
        case 0x39df70u: goto label_39df70;
        case 0x39df74u: goto label_39df74;
        case 0x39df78u: goto label_39df78;
        case 0x39df7cu: goto label_39df7c;
        case 0x39df80u: goto label_39df80;
        case 0x39df84u: goto label_39df84;
        case 0x39df88u: goto label_39df88;
        case 0x39df8cu: goto label_39df8c;
        case 0x39df90u: goto label_39df90;
        case 0x39df94u: goto label_39df94;
        case 0x39df98u: goto label_39df98;
        case 0x39df9cu: goto label_39df9c;
        case 0x39dfa0u: goto label_39dfa0;
        case 0x39dfa4u: goto label_39dfa4;
        case 0x39dfa8u: goto label_39dfa8;
        case 0x39dfacu: goto label_39dfac;
        case 0x39dfb0u: goto label_39dfb0;
        case 0x39dfb4u: goto label_39dfb4;
        case 0x39dfb8u: goto label_39dfb8;
        case 0x39dfbcu: goto label_39dfbc;
        case 0x39dfc0u: goto label_39dfc0;
        case 0x39dfc4u: goto label_39dfc4;
        case 0x39dfc8u: goto label_39dfc8;
        case 0x39dfccu: goto label_39dfcc;
        case 0x39dfd0u: goto label_39dfd0;
        case 0x39dfd4u: goto label_39dfd4;
        case 0x39dfd8u: goto label_39dfd8;
        case 0x39dfdcu: goto label_39dfdc;
        case 0x39dfe0u: goto label_39dfe0;
        case 0x39dfe4u: goto label_39dfe4;
        case 0x39dfe8u: goto label_39dfe8;
        case 0x39dfecu: goto label_39dfec;
        case 0x39dff0u: goto label_39dff0;
        case 0x39dff4u: goto label_39dff4;
        case 0x39dff8u: goto label_39dff8;
        case 0x39dffcu: goto label_39dffc;
        case 0x39e000u: goto label_39e000;
        case 0x39e004u: goto label_39e004;
        case 0x39e008u: goto label_39e008;
        case 0x39e00cu: goto label_39e00c;
        case 0x39e010u: goto label_39e010;
        case 0x39e014u: goto label_39e014;
        case 0x39e018u: goto label_39e018;
        case 0x39e01cu: goto label_39e01c;
        case 0x39e020u: goto label_39e020;
        case 0x39e024u: goto label_39e024;
        case 0x39e028u: goto label_39e028;
        case 0x39e02cu: goto label_39e02c;
        case 0x39e030u: goto label_39e030;
        case 0x39e034u: goto label_39e034;
        case 0x39e038u: goto label_39e038;
        case 0x39e03cu: goto label_39e03c;
        case 0x39e040u: goto label_39e040;
        case 0x39e044u: goto label_39e044;
        case 0x39e048u: goto label_39e048;
        case 0x39e04cu: goto label_39e04c;
        case 0x39e050u: goto label_39e050;
        case 0x39e054u: goto label_39e054;
        case 0x39e058u: goto label_39e058;
        case 0x39e05cu: goto label_39e05c;
        case 0x39e060u: goto label_39e060;
        case 0x39e064u: goto label_39e064;
        case 0x39e068u: goto label_39e068;
        case 0x39e06cu: goto label_39e06c;
        case 0x39e070u: goto label_39e070;
        case 0x39e074u: goto label_39e074;
        case 0x39e078u: goto label_39e078;
        case 0x39e07cu: goto label_39e07c;
        case 0x39e080u: goto label_39e080;
        case 0x39e084u: goto label_39e084;
        case 0x39e088u: goto label_39e088;
        case 0x39e08cu: goto label_39e08c;
        case 0x39e090u: goto label_39e090;
        case 0x39e094u: goto label_39e094;
        case 0x39e098u: goto label_39e098;
        case 0x39e09cu: goto label_39e09c;
        case 0x39e0a0u: goto label_39e0a0;
        case 0x39e0a4u: goto label_39e0a4;
        case 0x39e0a8u: goto label_39e0a8;
        case 0x39e0acu: goto label_39e0ac;
        case 0x39e0b0u: goto label_39e0b0;
        case 0x39e0b4u: goto label_39e0b4;
        case 0x39e0b8u: goto label_39e0b8;
        case 0x39e0bcu: goto label_39e0bc;
        case 0x39e0c0u: goto label_39e0c0;
        case 0x39e0c4u: goto label_39e0c4;
        case 0x39e0c8u: goto label_39e0c8;
        case 0x39e0ccu: goto label_39e0cc;
        case 0x39e0d0u: goto label_39e0d0;
        case 0x39e0d4u: goto label_39e0d4;
        case 0x39e0d8u: goto label_39e0d8;
        case 0x39e0dcu: goto label_39e0dc;
        case 0x39e0e0u: goto label_39e0e0;
        case 0x39e0e4u: goto label_39e0e4;
        case 0x39e0e8u: goto label_39e0e8;
        case 0x39e0ecu: goto label_39e0ec;
        case 0x39e0f0u: goto label_39e0f0;
        case 0x39e0f4u: goto label_39e0f4;
        case 0x39e0f8u: goto label_39e0f8;
        case 0x39e0fcu: goto label_39e0fc;
        case 0x39e100u: goto label_39e100;
        case 0x39e104u: goto label_39e104;
        case 0x39e108u: goto label_39e108;
        case 0x39e10cu: goto label_39e10c;
        case 0x39e110u: goto label_39e110;
        case 0x39e114u: goto label_39e114;
        case 0x39e118u: goto label_39e118;
        case 0x39e11cu: goto label_39e11c;
        case 0x39e120u: goto label_39e120;
        case 0x39e124u: goto label_39e124;
        case 0x39e128u: goto label_39e128;
        case 0x39e12cu: goto label_39e12c;
        case 0x39e130u: goto label_39e130;
        case 0x39e134u: goto label_39e134;
        case 0x39e138u: goto label_39e138;
        case 0x39e13cu: goto label_39e13c;
        case 0x39e140u: goto label_39e140;
        case 0x39e144u: goto label_39e144;
        case 0x39e148u: goto label_39e148;
        case 0x39e14cu: goto label_39e14c;
        case 0x39e150u: goto label_39e150;
        case 0x39e154u: goto label_39e154;
        case 0x39e158u: goto label_39e158;
        case 0x39e15cu: goto label_39e15c;
        case 0x39e160u: goto label_39e160;
        case 0x39e164u: goto label_39e164;
        case 0x39e168u: goto label_39e168;
        case 0x39e16cu: goto label_39e16c;
        case 0x39e170u: goto label_39e170;
        case 0x39e174u: goto label_39e174;
        case 0x39e178u: goto label_39e178;
        case 0x39e17cu: goto label_39e17c;
        case 0x39e180u: goto label_39e180;
        case 0x39e184u: goto label_39e184;
        case 0x39e188u: goto label_39e188;
        case 0x39e18cu: goto label_39e18c;
        case 0x39e190u: goto label_39e190;
        case 0x39e194u: goto label_39e194;
        case 0x39e198u: goto label_39e198;
        case 0x39e19cu: goto label_39e19c;
        case 0x39e1a0u: goto label_39e1a0;
        case 0x39e1a4u: goto label_39e1a4;
        case 0x39e1a8u: goto label_39e1a8;
        case 0x39e1acu: goto label_39e1ac;
        case 0x39e1b0u: goto label_39e1b0;
        case 0x39e1b4u: goto label_39e1b4;
        case 0x39e1b8u: goto label_39e1b8;
        case 0x39e1bcu: goto label_39e1bc;
        case 0x39e1c0u: goto label_39e1c0;
        case 0x39e1c4u: goto label_39e1c4;
        case 0x39e1c8u: goto label_39e1c8;
        case 0x39e1ccu: goto label_39e1cc;
        case 0x39e1d0u: goto label_39e1d0;
        case 0x39e1d4u: goto label_39e1d4;
        case 0x39e1d8u: goto label_39e1d8;
        case 0x39e1dcu: goto label_39e1dc;
        case 0x39e1e0u: goto label_39e1e0;
        case 0x39e1e4u: goto label_39e1e4;
        case 0x39e1e8u: goto label_39e1e8;
        case 0x39e1ecu: goto label_39e1ec;
        case 0x39e1f0u: goto label_39e1f0;
        case 0x39e1f4u: goto label_39e1f4;
        case 0x39e1f8u: goto label_39e1f8;
        case 0x39e1fcu: goto label_39e1fc;
        case 0x39e200u: goto label_39e200;
        case 0x39e204u: goto label_39e204;
        case 0x39e208u: goto label_39e208;
        case 0x39e20cu: goto label_39e20c;
        case 0x39e210u: goto label_39e210;
        case 0x39e214u: goto label_39e214;
        case 0x39e218u: goto label_39e218;
        case 0x39e21cu: goto label_39e21c;
        case 0x39e220u: goto label_39e220;
        case 0x39e224u: goto label_39e224;
        case 0x39e228u: goto label_39e228;
        case 0x39e22cu: goto label_39e22c;
        case 0x39e230u: goto label_39e230;
        case 0x39e234u: goto label_39e234;
        case 0x39e238u: goto label_39e238;
        case 0x39e23cu: goto label_39e23c;
        case 0x39e240u: goto label_39e240;
        case 0x39e244u: goto label_39e244;
        case 0x39e248u: goto label_39e248;
        case 0x39e24cu: goto label_39e24c;
        case 0x39e250u: goto label_39e250;
        case 0x39e254u: goto label_39e254;
        case 0x39e258u: goto label_39e258;
        case 0x39e25cu: goto label_39e25c;
        case 0x39e260u: goto label_39e260;
        case 0x39e264u: goto label_39e264;
        case 0x39e268u: goto label_39e268;
        case 0x39e26cu: goto label_39e26c;
        case 0x39e270u: goto label_39e270;
        case 0x39e274u: goto label_39e274;
        case 0x39e278u: goto label_39e278;
        case 0x39e27cu: goto label_39e27c;
        case 0x39e280u: goto label_39e280;
        case 0x39e284u: goto label_39e284;
        case 0x39e288u: goto label_39e288;
        case 0x39e28cu: goto label_39e28c;
        case 0x39e290u: goto label_39e290;
        case 0x39e294u: goto label_39e294;
        case 0x39e298u: goto label_39e298;
        case 0x39e29cu: goto label_39e29c;
        case 0x39e2a0u: goto label_39e2a0;
        case 0x39e2a4u: goto label_39e2a4;
        case 0x39e2a8u: goto label_39e2a8;
        case 0x39e2acu: goto label_39e2ac;
        case 0x39e2b0u: goto label_39e2b0;
        case 0x39e2b4u: goto label_39e2b4;
        case 0x39e2b8u: goto label_39e2b8;
        case 0x39e2bcu: goto label_39e2bc;
        case 0x39e2c0u: goto label_39e2c0;
        case 0x39e2c4u: goto label_39e2c4;
        case 0x39e2c8u: goto label_39e2c8;
        case 0x39e2ccu: goto label_39e2cc;
        case 0x39e2d0u: goto label_39e2d0;
        case 0x39e2d4u: goto label_39e2d4;
        case 0x39e2d8u: goto label_39e2d8;
        case 0x39e2dcu: goto label_39e2dc;
        case 0x39e2e0u: goto label_39e2e0;
        case 0x39e2e4u: goto label_39e2e4;
        case 0x39e2e8u: goto label_39e2e8;
        case 0x39e2ecu: goto label_39e2ec;
        case 0x39e2f0u: goto label_39e2f0;
        case 0x39e2f4u: goto label_39e2f4;
        case 0x39e2f8u: goto label_39e2f8;
        case 0x39e2fcu: goto label_39e2fc;
        case 0x39e300u: goto label_39e300;
        case 0x39e304u: goto label_39e304;
        case 0x39e308u: goto label_39e308;
        case 0x39e30cu: goto label_39e30c;
        case 0x39e310u: goto label_39e310;
        case 0x39e314u: goto label_39e314;
        case 0x39e318u: goto label_39e318;
        case 0x39e31cu: goto label_39e31c;
        case 0x39e320u: goto label_39e320;
        case 0x39e324u: goto label_39e324;
        case 0x39e328u: goto label_39e328;
        case 0x39e32cu: goto label_39e32c;
        case 0x39e330u: goto label_39e330;
        case 0x39e334u: goto label_39e334;
        case 0x39e338u: goto label_39e338;
        case 0x39e33cu: goto label_39e33c;
        case 0x39e340u: goto label_39e340;
        case 0x39e344u: goto label_39e344;
        case 0x39e348u: goto label_39e348;
        case 0x39e34cu: goto label_39e34c;
        case 0x39e350u: goto label_39e350;
        case 0x39e354u: goto label_39e354;
        case 0x39e358u: goto label_39e358;
        case 0x39e35cu: goto label_39e35c;
        case 0x39e360u: goto label_39e360;
        case 0x39e364u: goto label_39e364;
        case 0x39e368u: goto label_39e368;
        case 0x39e36cu: goto label_39e36c;
        case 0x39e370u: goto label_39e370;
        case 0x39e374u: goto label_39e374;
        case 0x39e378u: goto label_39e378;
        case 0x39e37cu: goto label_39e37c;
        case 0x39e380u: goto label_39e380;
        case 0x39e384u: goto label_39e384;
        case 0x39e388u: goto label_39e388;
        case 0x39e38cu: goto label_39e38c;
        case 0x39e390u: goto label_39e390;
        case 0x39e394u: goto label_39e394;
        case 0x39e398u: goto label_39e398;
        case 0x39e39cu: goto label_39e39c;
        case 0x39e3a0u: goto label_39e3a0;
        case 0x39e3a4u: goto label_39e3a4;
        case 0x39e3a8u: goto label_39e3a8;
        case 0x39e3acu: goto label_39e3ac;
        case 0x39e3b0u: goto label_39e3b0;
        case 0x39e3b4u: goto label_39e3b4;
        case 0x39e3b8u: goto label_39e3b8;
        case 0x39e3bcu: goto label_39e3bc;
        case 0x39e3c0u: goto label_39e3c0;
        case 0x39e3c4u: goto label_39e3c4;
        case 0x39e3c8u: goto label_39e3c8;
        case 0x39e3ccu: goto label_39e3cc;
        case 0x39e3d0u: goto label_39e3d0;
        case 0x39e3d4u: goto label_39e3d4;
        case 0x39e3d8u: goto label_39e3d8;
        case 0x39e3dcu: goto label_39e3dc;
        case 0x39e3e0u: goto label_39e3e0;
        case 0x39e3e4u: goto label_39e3e4;
        case 0x39e3e8u: goto label_39e3e8;
        case 0x39e3ecu: goto label_39e3ec;
        case 0x39e3f0u: goto label_39e3f0;
        case 0x39e3f4u: goto label_39e3f4;
        case 0x39e3f8u: goto label_39e3f8;
        case 0x39e3fcu: goto label_39e3fc;
        case 0x39e400u: goto label_39e400;
        case 0x39e404u: goto label_39e404;
        case 0x39e408u: goto label_39e408;
        case 0x39e40cu: goto label_39e40c;
        case 0x39e410u: goto label_39e410;
        case 0x39e414u: goto label_39e414;
        case 0x39e418u: goto label_39e418;
        case 0x39e41cu: goto label_39e41c;
        case 0x39e420u: goto label_39e420;
        case 0x39e424u: goto label_39e424;
        case 0x39e428u: goto label_39e428;
        case 0x39e42cu: goto label_39e42c;
        case 0x39e430u: goto label_39e430;
        case 0x39e434u: goto label_39e434;
        case 0x39e438u: goto label_39e438;
        case 0x39e43cu: goto label_39e43c;
        case 0x39e440u: goto label_39e440;
        case 0x39e444u: goto label_39e444;
        case 0x39e448u: goto label_39e448;
        case 0x39e44cu: goto label_39e44c;
        case 0x39e450u: goto label_39e450;
        case 0x39e454u: goto label_39e454;
        case 0x39e458u: goto label_39e458;
        case 0x39e45cu: goto label_39e45c;
        case 0x39e460u: goto label_39e460;
        case 0x39e464u: goto label_39e464;
        case 0x39e468u: goto label_39e468;
        case 0x39e46cu: goto label_39e46c;
        case 0x39e470u: goto label_39e470;
        case 0x39e474u: goto label_39e474;
        case 0x39e478u: goto label_39e478;
        case 0x39e47cu: goto label_39e47c;
        case 0x39e480u: goto label_39e480;
        case 0x39e484u: goto label_39e484;
        case 0x39e488u: goto label_39e488;
        case 0x39e48cu: goto label_39e48c;
        case 0x39e490u: goto label_39e490;
        case 0x39e494u: goto label_39e494;
        case 0x39e498u: goto label_39e498;
        case 0x39e49cu: goto label_39e49c;
        case 0x39e4a0u: goto label_39e4a0;
        case 0x39e4a4u: goto label_39e4a4;
        case 0x39e4a8u: goto label_39e4a8;
        case 0x39e4acu: goto label_39e4ac;
        case 0x39e4b0u: goto label_39e4b0;
        case 0x39e4b4u: goto label_39e4b4;
        case 0x39e4b8u: goto label_39e4b8;
        case 0x39e4bcu: goto label_39e4bc;
        case 0x39e4c0u: goto label_39e4c0;
        case 0x39e4c4u: goto label_39e4c4;
        case 0x39e4c8u: goto label_39e4c8;
        case 0x39e4ccu: goto label_39e4cc;
        case 0x39e4d0u: goto label_39e4d0;
        case 0x39e4d4u: goto label_39e4d4;
        case 0x39e4d8u: goto label_39e4d8;
        case 0x39e4dcu: goto label_39e4dc;
        case 0x39e4e0u: goto label_39e4e0;
        case 0x39e4e4u: goto label_39e4e4;
        case 0x39e4e8u: goto label_39e4e8;
        case 0x39e4ecu: goto label_39e4ec;
        case 0x39e4f0u: goto label_39e4f0;
        case 0x39e4f4u: goto label_39e4f4;
        case 0x39e4f8u: goto label_39e4f8;
        case 0x39e4fcu: goto label_39e4fc;
        case 0x39e500u: goto label_39e500;
        case 0x39e504u: goto label_39e504;
        case 0x39e508u: goto label_39e508;
        case 0x39e50cu: goto label_39e50c;
        case 0x39e510u: goto label_39e510;
        case 0x39e514u: goto label_39e514;
        case 0x39e518u: goto label_39e518;
        case 0x39e51cu: goto label_39e51c;
        case 0x39e520u: goto label_39e520;
        case 0x39e524u: goto label_39e524;
        case 0x39e528u: goto label_39e528;
        case 0x39e52cu: goto label_39e52c;
        case 0x39e530u: goto label_39e530;
        case 0x39e534u: goto label_39e534;
        case 0x39e538u: goto label_39e538;
        case 0x39e53cu: goto label_39e53c;
        case 0x39e540u: goto label_39e540;
        case 0x39e544u: goto label_39e544;
        case 0x39e548u: goto label_39e548;
        case 0x39e54cu: goto label_39e54c;
        case 0x39e550u: goto label_39e550;
        case 0x39e554u: goto label_39e554;
        case 0x39e558u: goto label_39e558;
        case 0x39e55cu: goto label_39e55c;
        case 0x39e560u: goto label_39e560;
        case 0x39e564u: goto label_39e564;
        case 0x39e568u: goto label_39e568;
        case 0x39e56cu: goto label_39e56c;
        case 0x39e570u: goto label_39e570;
        case 0x39e574u: goto label_39e574;
        case 0x39e578u: goto label_39e578;
        case 0x39e57cu: goto label_39e57c;
        case 0x39e580u: goto label_39e580;
        case 0x39e584u: goto label_39e584;
        case 0x39e588u: goto label_39e588;
        case 0x39e58cu: goto label_39e58c;
        case 0x39e590u: goto label_39e590;
        case 0x39e594u: goto label_39e594;
        case 0x39e598u: goto label_39e598;
        case 0x39e59cu: goto label_39e59c;
        case 0x39e5a0u: goto label_39e5a0;
        case 0x39e5a4u: goto label_39e5a4;
        case 0x39e5a8u: goto label_39e5a8;
        case 0x39e5acu: goto label_39e5ac;
        case 0x39e5b0u: goto label_39e5b0;
        case 0x39e5b4u: goto label_39e5b4;
        case 0x39e5b8u: goto label_39e5b8;
        case 0x39e5bcu: goto label_39e5bc;
        case 0x39e5c0u: goto label_39e5c0;
        case 0x39e5c4u: goto label_39e5c4;
        case 0x39e5c8u: goto label_39e5c8;
        case 0x39e5ccu: goto label_39e5cc;
        case 0x39e5d0u: goto label_39e5d0;
        case 0x39e5d4u: goto label_39e5d4;
        case 0x39e5d8u: goto label_39e5d8;
        case 0x39e5dcu: goto label_39e5dc;
        case 0x39e5e0u: goto label_39e5e0;
        case 0x39e5e4u: goto label_39e5e4;
        case 0x39e5e8u: goto label_39e5e8;
        case 0x39e5ecu: goto label_39e5ec;
        case 0x39e5f0u: goto label_39e5f0;
        case 0x39e5f4u: goto label_39e5f4;
        case 0x39e5f8u: goto label_39e5f8;
        case 0x39e5fcu: goto label_39e5fc;
        case 0x39e600u: goto label_39e600;
        case 0x39e604u: goto label_39e604;
        case 0x39e608u: goto label_39e608;
        case 0x39e60cu: goto label_39e60c;
        case 0x39e610u: goto label_39e610;
        case 0x39e614u: goto label_39e614;
        case 0x39e618u: goto label_39e618;
        case 0x39e61cu: goto label_39e61c;
        case 0x39e620u: goto label_39e620;
        case 0x39e624u: goto label_39e624;
        case 0x39e628u: goto label_39e628;
        case 0x39e62cu: goto label_39e62c;
        case 0x39e630u: goto label_39e630;
        case 0x39e634u: goto label_39e634;
        case 0x39e638u: goto label_39e638;
        case 0x39e63cu: goto label_39e63c;
        case 0x39e640u: goto label_39e640;
        case 0x39e644u: goto label_39e644;
        case 0x39e648u: goto label_39e648;
        case 0x39e64cu: goto label_39e64c;
        case 0x39e650u: goto label_39e650;
        case 0x39e654u: goto label_39e654;
        case 0x39e658u: goto label_39e658;
        case 0x39e65cu: goto label_39e65c;
        case 0x39e660u: goto label_39e660;
        case 0x39e664u: goto label_39e664;
        case 0x39e668u: goto label_39e668;
        case 0x39e66cu: goto label_39e66c;
        case 0x39e670u: goto label_39e670;
        case 0x39e674u: goto label_39e674;
        case 0x39e678u: goto label_39e678;
        case 0x39e67cu: goto label_39e67c;
        case 0x39e680u: goto label_39e680;
        case 0x39e684u: goto label_39e684;
        case 0x39e688u: goto label_39e688;
        case 0x39e68cu: goto label_39e68c;
        case 0x39e690u: goto label_39e690;
        case 0x39e694u: goto label_39e694;
        case 0x39e698u: goto label_39e698;
        case 0x39e69cu: goto label_39e69c;
        case 0x39e6a0u: goto label_39e6a0;
        case 0x39e6a4u: goto label_39e6a4;
        case 0x39e6a8u: goto label_39e6a8;
        case 0x39e6acu: goto label_39e6ac;
        case 0x39e6b0u: goto label_39e6b0;
        case 0x39e6b4u: goto label_39e6b4;
        case 0x39e6b8u: goto label_39e6b8;
        case 0x39e6bcu: goto label_39e6bc;
        case 0x39e6c0u: goto label_39e6c0;
        case 0x39e6c4u: goto label_39e6c4;
        case 0x39e6c8u: goto label_39e6c8;
        case 0x39e6ccu: goto label_39e6cc;
        case 0x39e6d0u: goto label_39e6d0;
        case 0x39e6d4u: goto label_39e6d4;
        case 0x39e6d8u: goto label_39e6d8;
        case 0x39e6dcu: goto label_39e6dc;
        case 0x39e6e0u: goto label_39e6e0;
        case 0x39e6e4u: goto label_39e6e4;
        case 0x39e6e8u: goto label_39e6e8;
        case 0x39e6ecu: goto label_39e6ec;
        case 0x39e6f0u: goto label_39e6f0;
        case 0x39e6f4u: goto label_39e6f4;
        case 0x39e6f8u: goto label_39e6f8;
        case 0x39e6fcu: goto label_39e6fc;
        case 0x39e700u: goto label_39e700;
        case 0x39e704u: goto label_39e704;
        case 0x39e708u: goto label_39e708;
        case 0x39e70cu: goto label_39e70c;
        case 0x39e710u: goto label_39e710;
        case 0x39e714u: goto label_39e714;
        case 0x39e718u: goto label_39e718;
        case 0x39e71cu: goto label_39e71c;
        case 0x39e720u: goto label_39e720;
        case 0x39e724u: goto label_39e724;
        case 0x39e728u: goto label_39e728;
        case 0x39e72cu: goto label_39e72c;
        case 0x39e730u: goto label_39e730;
        case 0x39e734u: goto label_39e734;
        case 0x39e738u: goto label_39e738;
        case 0x39e73cu: goto label_39e73c;
        case 0x39e740u: goto label_39e740;
        case 0x39e744u: goto label_39e744;
        case 0x39e748u: goto label_39e748;
        case 0x39e74cu: goto label_39e74c;
        case 0x39e750u: goto label_39e750;
        case 0x39e754u: goto label_39e754;
        case 0x39e758u: goto label_39e758;
        case 0x39e75cu: goto label_39e75c;
        case 0x39e760u: goto label_39e760;
        case 0x39e764u: goto label_39e764;
        case 0x39e768u: goto label_39e768;
        case 0x39e76cu: goto label_39e76c;
        case 0x39e770u: goto label_39e770;
        case 0x39e774u: goto label_39e774;
        case 0x39e778u: goto label_39e778;
        case 0x39e77cu: goto label_39e77c;
        case 0x39e780u: goto label_39e780;
        case 0x39e784u: goto label_39e784;
        case 0x39e788u: goto label_39e788;
        case 0x39e78cu: goto label_39e78c;
        case 0x39e790u: goto label_39e790;
        case 0x39e794u: goto label_39e794;
        case 0x39e798u: goto label_39e798;
        case 0x39e79cu: goto label_39e79c;
        case 0x39e7a0u: goto label_39e7a0;
        case 0x39e7a4u: goto label_39e7a4;
        case 0x39e7a8u: goto label_39e7a8;
        case 0x39e7acu: goto label_39e7ac;
        case 0x39e7b0u: goto label_39e7b0;
        case 0x39e7b4u: goto label_39e7b4;
        case 0x39e7b8u: goto label_39e7b8;
        case 0x39e7bcu: goto label_39e7bc;
        case 0x39e7c0u: goto label_39e7c0;
        case 0x39e7c4u: goto label_39e7c4;
        case 0x39e7c8u: goto label_39e7c8;
        case 0x39e7ccu: goto label_39e7cc;
        case 0x39e7d0u: goto label_39e7d0;
        case 0x39e7d4u: goto label_39e7d4;
        case 0x39e7d8u: goto label_39e7d8;
        case 0x39e7dcu: goto label_39e7dc;
        case 0x39e7e0u: goto label_39e7e0;
        case 0x39e7e4u: goto label_39e7e4;
        case 0x39e7e8u: goto label_39e7e8;
        case 0x39e7ecu: goto label_39e7ec;
        case 0x39e7f0u: goto label_39e7f0;
        case 0x39e7f4u: goto label_39e7f4;
        case 0x39e7f8u: goto label_39e7f8;
        case 0x39e7fcu: goto label_39e7fc;
        case 0x39e800u: goto label_39e800;
        case 0x39e804u: goto label_39e804;
        case 0x39e808u: goto label_39e808;
        case 0x39e80cu: goto label_39e80c;
        case 0x39e810u: goto label_39e810;
        case 0x39e814u: goto label_39e814;
        case 0x39e818u: goto label_39e818;
        case 0x39e81cu: goto label_39e81c;
        case 0x39e820u: goto label_39e820;
        case 0x39e824u: goto label_39e824;
        case 0x39e828u: goto label_39e828;
        case 0x39e82cu: goto label_39e82c;
        case 0x39e830u: goto label_39e830;
        case 0x39e834u: goto label_39e834;
        case 0x39e838u: goto label_39e838;
        case 0x39e83cu: goto label_39e83c;
        case 0x39e840u: goto label_39e840;
        case 0x39e844u: goto label_39e844;
        case 0x39e848u: goto label_39e848;
        case 0x39e84cu: goto label_39e84c;
        case 0x39e850u: goto label_39e850;
        case 0x39e854u: goto label_39e854;
        case 0x39e858u: goto label_39e858;
        case 0x39e85cu: goto label_39e85c;
        case 0x39e860u: goto label_39e860;
        case 0x39e864u: goto label_39e864;
        case 0x39e868u: goto label_39e868;
        case 0x39e86cu: goto label_39e86c;
        case 0x39e870u: goto label_39e870;
        case 0x39e874u: goto label_39e874;
        case 0x39e878u: goto label_39e878;
        case 0x39e87cu: goto label_39e87c;
        case 0x39e880u: goto label_39e880;
        case 0x39e884u: goto label_39e884;
        case 0x39e888u: goto label_39e888;
        case 0x39e88cu: goto label_39e88c;
        case 0x39e890u: goto label_39e890;
        case 0x39e894u: goto label_39e894;
        case 0x39e898u: goto label_39e898;
        case 0x39e89cu: goto label_39e89c;
        case 0x39e8a0u: goto label_39e8a0;
        case 0x39e8a4u: goto label_39e8a4;
        case 0x39e8a8u: goto label_39e8a8;
        case 0x39e8acu: goto label_39e8ac;
        case 0x39e8b0u: goto label_39e8b0;
        case 0x39e8b4u: goto label_39e8b4;
        case 0x39e8b8u: goto label_39e8b8;
        case 0x39e8bcu: goto label_39e8bc;
        case 0x39e8c0u: goto label_39e8c0;
        case 0x39e8c4u: goto label_39e8c4;
        case 0x39e8c8u: goto label_39e8c8;
        case 0x39e8ccu: goto label_39e8cc;
        case 0x39e8d0u: goto label_39e8d0;
        case 0x39e8d4u: goto label_39e8d4;
        case 0x39e8d8u: goto label_39e8d8;
        case 0x39e8dcu: goto label_39e8dc;
        case 0x39e8e0u: goto label_39e8e0;
        case 0x39e8e4u: goto label_39e8e4;
        case 0x39e8e8u: goto label_39e8e8;
        case 0x39e8ecu: goto label_39e8ec;
        case 0x39e8f0u: goto label_39e8f0;
        case 0x39e8f4u: goto label_39e8f4;
        case 0x39e8f8u: goto label_39e8f8;
        case 0x39e8fcu: goto label_39e8fc;
        case 0x39e900u: goto label_39e900;
        case 0x39e904u: goto label_39e904;
        case 0x39e908u: goto label_39e908;
        case 0x39e90cu: goto label_39e90c;
        case 0x39e910u: goto label_39e910;
        case 0x39e914u: goto label_39e914;
        case 0x39e918u: goto label_39e918;
        case 0x39e91cu: goto label_39e91c;
        case 0x39e920u: goto label_39e920;
        case 0x39e924u: goto label_39e924;
        case 0x39e928u: goto label_39e928;
        case 0x39e92cu: goto label_39e92c;
        case 0x39e930u: goto label_39e930;
        case 0x39e934u: goto label_39e934;
        case 0x39e938u: goto label_39e938;
        case 0x39e93cu: goto label_39e93c;
        case 0x39e940u: goto label_39e940;
        case 0x39e944u: goto label_39e944;
        case 0x39e948u: goto label_39e948;
        case 0x39e94cu: goto label_39e94c;
        case 0x39e950u: goto label_39e950;
        case 0x39e954u: goto label_39e954;
        case 0x39e958u: goto label_39e958;
        case 0x39e95cu: goto label_39e95c;
        case 0x39e960u: goto label_39e960;
        case 0x39e964u: goto label_39e964;
        case 0x39e968u: goto label_39e968;
        case 0x39e96cu: goto label_39e96c;
        case 0x39e970u: goto label_39e970;
        case 0x39e974u: goto label_39e974;
        case 0x39e978u: goto label_39e978;
        case 0x39e97cu: goto label_39e97c;
        case 0x39e980u: goto label_39e980;
        case 0x39e984u: goto label_39e984;
        case 0x39e988u: goto label_39e988;
        case 0x39e98cu: goto label_39e98c;
        case 0x39e990u: goto label_39e990;
        case 0x39e994u: goto label_39e994;
        case 0x39e998u: goto label_39e998;
        case 0x39e99cu: goto label_39e99c;
        case 0x39e9a0u: goto label_39e9a0;
        case 0x39e9a4u: goto label_39e9a4;
        case 0x39e9a8u: goto label_39e9a8;
        case 0x39e9acu: goto label_39e9ac;
        case 0x39e9b0u: goto label_39e9b0;
        case 0x39e9b4u: goto label_39e9b4;
        case 0x39e9b8u: goto label_39e9b8;
        case 0x39e9bcu: goto label_39e9bc;
        case 0x39e9c0u: goto label_39e9c0;
        case 0x39e9c4u: goto label_39e9c4;
        case 0x39e9c8u: goto label_39e9c8;
        case 0x39e9ccu: goto label_39e9cc;
        case 0x39e9d0u: goto label_39e9d0;
        case 0x39e9d4u: goto label_39e9d4;
        case 0x39e9d8u: goto label_39e9d8;
        case 0x39e9dcu: goto label_39e9dc;
        case 0x39e9e0u: goto label_39e9e0;
        case 0x39e9e4u: goto label_39e9e4;
        case 0x39e9e8u: goto label_39e9e8;
        case 0x39e9ecu: goto label_39e9ec;
        case 0x39e9f0u: goto label_39e9f0;
        case 0x39e9f4u: goto label_39e9f4;
        case 0x39e9f8u: goto label_39e9f8;
        case 0x39e9fcu: goto label_39e9fc;
        case 0x39ea00u: goto label_39ea00;
        case 0x39ea04u: goto label_39ea04;
        case 0x39ea08u: goto label_39ea08;
        case 0x39ea0cu: goto label_39ea0c;
        case 0x39ea10u: goto label_39ea10;
        case 0x39ea14u: goto label_39ea14;
        case 0x39ea18u: goto label_39ea18;
        case 0x39ea1cu: goto label_39ea1c;
        case 0x39ea20u: goto label_39ea20;
        case 0x39ea24u: goto label_39ea24;
        case 0x39ea28u: goto label_39ea28;
        case 0x39ea2cu: goto label_39ea2c;
        case 0x39ea30u: goto label_39ea30;
        case 0x39ea34u: goto label_39ea34;
        case 0x39ea38u: goto label_39ea38;
        case 0x39ea3cu: goto label_39ea3c;
        case 0x39ea40u: goto label_39ea40;
        case 0x39ea44u: goto label_39ea44;
        case 0x39ea48u: goto label_39ea48;
        case 0x39ea4cu: goto label_39ea4c;
        case 0x39ea50u: goto label_39ea50;
        case 0x39ea54u: goto label_39ea54;
        case 0x39ea58u: goto label_39ea58;
        case 0x39ea5cu: goto label_39ea5c;
        case 0x39ea60u: goto label_39ea60;
        case 0x39ea64u: goto label_39ea64;
        case 0x39ea68u: goto label_39ea68;
        case 0x39ea6cu: goto label_39ea6c;
        case 0x39ea70u: goto label_39ea70;
        case 0x39ea74u: goto label_39ea74;
        case 0x39ea78u: goto label_39ea78;
        case 0x39ea7cu: goto label_39ea7c;
        case 0x39ea80u: goto label_39ea80;
        case 0x39ea84u: goto label_39ea84;
        case 0x39ea88u: goto label_39ea88;
        case 0x39ea8cu: goto label_39ea8c;
        case 0x39ea90u: goto label_39ea90;
        case 0x39ea94u: goto label_39ea94;
        case 0x39ea98u: goto label_39ea98;
        case 0x39ea9cu: goto label_39ea9c;
        case 0x39eaa0u: goto label_39eaa0;
        case 0x39eaa4u: goto label_39eaa4;
        case 0x39eaa8u: goto label_39eaa8;
        case 0x39eaacu: goto label_39eaac;
        case 0x39eab0u: goto label_39eab0;
        case 0x39eab4u: goto label_39eab4;
        case 0x39eab8u: goto label_39eab8;
        case 0x39eabcu: goto label_39eabc;
        case 0x39eac0u: goto label_39eac0;
        case 0x39eac4u: goto label_39eac4;
        case 0x39eac8u: goto label_39eac8;
        case 0x39eaccu: goto label_39eacc;
        case 0x39ead0u: goto label_39ead0;
        case 0x39ead4u: goto label_39ead4;
        case 0x39ead8u: goto label_39ead8;
        case 0x39eadcu: goto label_39eadc;
        case 0x39eae0u: goto label_39eae0;
        case 0x39eae4u: goto label_39eae4;
        case 0x39eae8u: goto label_39eae8;
        case 0x39eaecu: goto label_39eaec;
        case 0x39eaf0u: goto label_39eaf0;
        case 0x39eaf4u: goto label_39eaf4;
        case 0x39eaf8u: goto label_39eaf8;
        case 0x39eafcu: goto label_39eafc;
        case 0x39eb00u: goto label_39eb00;
        case 0x39eb04u: goto label_39eb04;
        case 0x39eb08u: goto label_39eb08;
        case 0x39eb0cu: goto label_39eb0c;
        case 0x39eb10u: goto label_39eb10;
        case 0x39eb14u: goto label_39eb14;
        case 0x39eb18u: goto label_39eb18;
        case 0x39eb1cu: goto label_39eb1c;
        case 0x39eb20u: goto label_39eb20;
        case 0x39eb24u: goto label_39eb24;
        case 0x39eb28u: goto label_39eb28;
        case 0x39eb2cu: goto label_39eb2c;
        case 0x39eb30u: goto label_39eb30;
        case 0x39eb34u: goto label_39eb34;
        case 0x39eb38u: goto label_39eb38;
        case 0x39eb3cu: goto label_39eb3c;
        case 0x39eb40u: goto label_39eb40;
        case 0x39eb44u: goto label_39eb44;
        case 0x39eb48u: goto label_39eb48;
        case 0x39eb4cu: goto label_39eb4c;
        case 0x39eb50u: goto label_39eb50;
        case 0x39eb54u: goto label_39eb54;
        case 0x39eb58u: goto label_39eb58;
        case 0x39eb5cu: goto label_39eb5c;
        case 0x39eb60u: goto label_39eb60;
        case 0x39eb64u: goto label_39eb64;
        case 0x39eb68u: goto label_39eb68;
        case 0x39eb6cu: goto label_39eb6c;
        case 0x39eb70u: goto label_39eb70;
        case 0x39eb74u: goto label_39eb74;
        case 0x39eb78u: goto label_39eb78;
        case 0x39eb7cu: goto label_39eb7c;
        case 0x39eb80u: goto label_39eb80;
        case 0x39eb84u: goto label_39eb84;
        case 0x39eb88u: goto label_39eb88;
        case 0x39eb8cu: goto label_39eb8c;
        case 0x39eb90u: goto label_39eb90;
        case 0x39eb94u: goto label_39eb94;
        case 0x39eb98u: goto label_39eb98;
        case 0x39eb9cu: goto label_39eb9c;
        case 0x39eba0u: goto label_39eba0;
        case 0x39eba4u: goto label_39eba4;
        case 0x39eba8u: goto label_39eba8;
        case 0x39ebacu: goto label_39ebac;
        case 0x39ebb0u: goto label_39ebb0;
        case 0x39ebb4u: goto label_39ebb4;
        case 0x39ebb8u: goto label_39ebb8;
        case 0x39ebbcu: goto label_39ebbc;
        case 0x39ebc0u: goto label_39ebc0;
        case 0x39ebc4u: goto label_39ebc4;
        case 0x39ebc8u: goto label_39ebc8;
        case 0x39ebccu: goto label_39ebcc;
        case 0x39ebd0u: goto label_39ebd0;
        case 0x39ebd4u: goto label_39ebd4;
        case 0x39ebd8u: goto label_39ebd8;
        case 0x39ebdcu: goto label_39ebdc;
        case 0x39ebe0u: goto label_39ebe0;
        case 0x39ebe4u: goto label_39ebe4;
        case 0x39ebe8u: goto label_39ebe8;
        case 0x39ebecu: goto label_39ebec;
        case 0x39ebf0u: goto label_39ebf0;
        case 0x39ebf4u: goto label_39ebf4;
        case 0x39ebf8u: goto label_39ebf8;
        case 0x39ebfcu: goto label_39ebfc;
        case 0x39ec00u: goto label_39ec00;
        case 0x39ec04u: goto label_39ec04;
        case 0x39ec08u: goto label_39ec08;
        case 0x39ec0cu: goto label_39ec0c;
        case 0x39ec10u: goto label_39ec10;
        case 0x39ec14u: goto label_39ec14;
        case 0x39ec18u: goto label_39ec18;
        case 0x39ec1cu: goto label_39ec1c;
        case 0x39ec20u: goto label_39ec20;
        case 0x39ec24u: goto label_39ec24;
        case 0x39ec28u: goto label_39ec28;
        case 0x39ec2cu: goto label_39ec2c;
        case 0x39ec30u: goto label_39ec30;
        case 0x39ec34u: goto label_39ec34;
        case 0x39ec38u: goto label_39ec38;
        case 0x39ec3cu: goto label_39ec3c;
        case 0x39ec40u: goto label_39ec40;
        case 0x39ec44u: goto label_39ec44;
        case 0x39ec48u: goto label_39ec48;
        case 0x39ec4cu: goto label_39ec4c;
        case 0x39ec50u: goto label_39ec50;
        case 0x39ec54u: goto label_39ec54;
        case 0x39ec58u: goto label_39ec58;
        case 0x39ec5cu: goto label_39ec5c;
        default: break;
    }

    ctx->pc = 0x39d870u;

label_39d870:
    // 0x39d870: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x39d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_39d874:
    // 0x39d874: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x39d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_39d878:
    // 0x39d878: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x39d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_39d87c:
    // 0x39d87c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39d87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d880:
    // 0x39d880: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x39d880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_39d884:
    // 0x39d884: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x39d884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39d888:
    // 0x39d888: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x39d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_39d88c:
    // 0x39d88c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x39d88cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_39d890:
    // 0x39d890: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x39d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_39d894:
    // 0x39d894: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x39d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_39d898:
    // 0x39d898: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x39d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_39d89c:
    // 0x39d89c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x39d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_39d8a0:
    // 0x39d8a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x39d8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_39d8a4:
    // 0x39d8a4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x39d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_39d8a8:
    // 0x39d8a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39d8ac:
    // 0x39d8ac: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x39d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_39d8b0:
    // 0x39d8b0: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x39d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39d8b4:
    // 0x39d8b4: 0x108004dc  beqz        $a0, . + 4 + (0x4DC << 2)
label_39d8b8:
    if (ctx->pc == 0x39D8B8u) {
        ctx->pc = 0x39D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8B4u;
        // 0x39d8b8: 0xafa6002c  sw          $a2, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8BCu;
        goto label_39d8bc;
    }
    ctx->pc = 0x39D8B4u;
    {
        const bool branch_taken_0x39d8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8B4u;
        // 0x39d8b8: 0xafa6002c  sw          $a2, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8b4) {
            ctx->pc = 0x39EC28u;
            goto label_39ec28;
        }
    }
    ctx->pc = 0x39D8BCu;
label_39d8bc:
    // 0x39d8bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39d8c0:
    // 0x39d8c0: 0x8c63489c  lw          $v1, 0x489C($v1)
    ctx->pc = 0x39d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39d8c4:
    // 0x39d8c4: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x39d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_39d8c8:
    // 0x39d8c8: 0x144004d8  bnez        $v0, . + 4 + (0x4D8 << 2)
label_39d8cc:
    if (ctx->pc == 0x39D8CCu) {
        ctx->pc = 0x39D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8C8u;
        // 0x39d8cc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8D0u;
        goto label_39d8d0;
    }
    ctx->pc = 0x39D8C8u;
    {
        const bool branch_taken_0x39d8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8C8u;
        // 0x39d8cc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8c8) {
            ctx->pc = 0x39EC2Cu;
            goto label_39ec2c;
        }
    }
    ctx->pc = 0x39D8D0u;
label_39d8d0:
    // 0x39d8d0: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x39d8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_39d8d4:
    // 0x39d8d4: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_39d8d8:
    if (ctx->pc == 0x39D8D8u) {
        ctx->pc = 0x39D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8D4u;
        // 0x39d8d8: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8DCu;
        goto label_39d8dc;
    }
    ctx->pc = 0x39D8D4u;
    {
        const bool branch_taken_0x39d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d8d4) {
            ctx->pc = 0x39D8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D8D4u;
            // 0x39d8d8: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D8DCu;
label_39d8dc:
    // 0x39d8dc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39d8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39d8e0:
    // 0x39d8e0: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_39d8e4:
    if (ctx->pc == 0x39D8E4u) {
        ctx->pc = 0x39D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8E0u;
        // 0x39d8e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8E8u;
        goto label_39d8e8;
    }
    ctx->pc = 0x39D8E0u;
    {
        const bool branch_taken_0x39d8e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8E0u;
        // 0x39d8e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8e0) {
            ctx->pc = 0x39D97Cu;
            goto label_39d97c;
        }
    }
    ctx->pc = 0x39D8E8u;
label_39d8e8:
    // 0x39d8e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39d8ec:
    // 0x39d8ec: 0x3c160008  lui         $s6, 0x8
    ctx->pc = 0x39d8ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8 << 16));
label_39d8f0:
    // 0x39d8f0: 0x2455deb8  addiu       $s5, $v0, -0x2148
    ctx->pc = 0x39d8f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_39d8f4:
    // 0x39d8f4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x39d8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39d8f8:
    // 0x39d8f8: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x39d8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_39d8fc:
    // 0x39d8fc: 0x0  nop
    ctx->pc = 0x39d8fcu;
    // NOP
label_39d900:
    // 0x39d900: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39d904:
    // 0x39d904: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x39d904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39d908:
    // 0x39d908: 0xc0e409a  jal         func_390268
label_39d90c:
    if (ctx->pc == 0x39D90Cu) {
        ctx->pc = 0x39D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D908u;
        // 0x39d90c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D910u;
        goto label_39d910;
    }
    ctx->pc = 0x39D908u;
    SET_GPR_U32(ctx, 31, 0x39D910u);
    ctx->pc = 0x39D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D908u;
    // 0x39d90c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39D908u, 0x39D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D910u;
label_39d910:
    // 0x39d910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39d910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d914:
    // 0x39d914: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x39d914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_39d918:
    // 0x39d918: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x39d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_39d91c:
    // 0x39d91c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39d91cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d920:
    // 0x39d920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_39d924:
    // 0x39d924: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39d924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_39d928:
    // 0x39d928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39d92c:
    if (ctx->pc == 0x39D92Cu) {
        ctx->pc = 0x39D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D928u;
        // 0x39d92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D930u;
        goto label_39d930;
    }
    ctx->pc = 0x39D928u;
    {
        const bool branch_taken_0x39d928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D928u;
        // 0x39d92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d928) {
            ctx->pc = 0x39D938u;
            goto label_39d938;
        }
    }
    ctx->pc = 0x39D930u;
label_39d930:
    // 0x39d930: 0xc08dbee  jal         func_236FB8
label_39d934:
    if (ctx->pc == 0x39D934u) {
        ctx->pc = 0x39D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D930u;
        // 0x39d934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D938u;
        goto label_39d938;
    }
    ctx->pc = 0x39D930u;
    SET_GPR_U32(ctx, 31, 0x39D938u);
    ctx->pc = 0x39D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D930u;
    // 0x39d934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x39D930u, 0x39D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D938u;
label_39d938:
    // 0x39d938: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x39d938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_39d93c:
    // 0x39d93c: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
label_39d940:
    if (ctx->pc == 0x39D940u) {
        ctx->pc = 0x39D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D93Cu;
        // 0x39d940: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D944u;
        goto label_39d944;
    }
    ctx->pc = 0x39D93Cu;
    {
        const bool branch_taken_0x39d93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x39D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D93Cu;
        // 0x39d940: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d93c) {
            ctx->pc = 0x39D960u;
            goto label_39d960;
        }
    }
    ctx->pc = 0x39D944u;
label_39d944:
    // 0x39d944: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39d944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39d948:
    // 0x39d948: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x39d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_39d94c:
    // 0x39d94c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x39d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39d950:
    // 0x39d950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d954:
    // 0x39d954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39d954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d958:
    // 0x39d958: 0xc063514  jal         func_18D450
label_39d95c:
    if (ctx->pc == 0x39D95Cu) {
        ctx->pc = 0x39D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D958u;
        // 0x39d95c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D960u;
        goto label_39d960;
    }
    ctx->pc = 0x39D958u;
    SET_GPR_U32(ctx, 31, 0x39D960u);
    ctx->pc = 0x39D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D958u;
    // 0x39d95c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x39D958u, 0x39D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D960u;
label_39d960:
    // 0x39d960: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39d960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39d964:
    // 0x39d964: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d968:
    // 0x39d968: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x39d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39d96c:
    // 0x39d96c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39d96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39d970:
    // 0x39d970: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39d970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39d974:
    // 0x39d974: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_39d978:
    if (ctx->pc == 0x39D978u) {
        ctx->pc = 0x39D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D974u;
        // 0x39d978: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D97Cu;
        goto label_39d97c;
    }
    ctx->pc = 0x39D974u;
    {
        const bool branch_taken_0x39d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D974u;
        // 0x39d978: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d974) {
            ctx->pc = 0x39D900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d900;
        }
    }
    ctx->pc = 0x39D97Cu;
label_39d97c:
    // 0x39d97c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39d980:
    // 0x39d980: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x39d980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_39d984:
    // 0x39d984: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x39d984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_39d988:
    // 0x39d988: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_39d98c:
    if (ctx->pc == 0x39D98Cu) {
        ctx->pc = 0x39D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D988u;
        // 0x39d98c: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D990u;
        goto label_39d990;
    }
    ctx->pc = 0x39D988u;
    {
        const bool branch_taken_0x39d988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D988u;
        // 0x39d98c: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d988) {
            ctx->pc = 0x39DA04u;
            goto label_39da04;
        }
    }
    ctx->pc = 0x39D990u;
label_39d990:
    // 0x39d990: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x39d990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_39d994:
    // 0x39d994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39d994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39d998:
    // 0x39d998: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x39d998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_39d99c:
    // 0x39d99c: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x39d99cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_39d9a0:
    // 0x39d9a0: 0x7e6200c0  sq          $v0, 0xC0($s3)
    ctx->pc = 0x39d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 2));
label_39d9a4:
    // 0x39d9a4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x39d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_39d9a8:
    // 0x39d9a8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x39d9a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_39d9ac:
    // 0x39d9ac: 0xa27700ea  sb          $s7, 0xEA($s3)
    ctx->pc = 0x39d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 234), (uint8_t)GPR_U32(ctx, 23));
label_39d9b0:
    // 0x39d9b0: 0xc10b1c6  jal         func_42C718
label_39d9b4:
    if (ctx->pc == 0x39D9B4u) {
        ctx->pc = 0x39D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9B0u;
        // 0x39d9b4: 0x7e6200b0  sq          $v0, 0xB0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9B8u;
        goto label_39d9b8;
    }
    ctx->pc = 0x39D9B0u;
    SET_GPR_U32(ctx, 31, 0x39D9B8u);
    ctx->pc = 0x39D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9B0u;
    // 0x39d9b4: 0x7e6200b0  sq          $v0, 0xB0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x39D9B0u, 0x39D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9B8u;
label_39d9b8:
    // 0x39d9b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_39d9bc:
    if (ctx->pc == 0x39D9BCu) {
        ctx->pc = 0x39D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9B8u;
        // 0x39d9bc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9C0u;
        goto label_39d9c0;
    }
    ctx->pc = 0x39D9B8u;
    {
        const bool branch_taken_0x39d9b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9B8u;
        // 0x39d9bc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9b8) {
            ctx->pc = 0x39D9D4u;
            goto label_39d9d4;
        }
    }
    ctx->pc = 0x39D9C0u;
label_39d9c0:
    // 0x39d9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39d9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39d9c4:
    // 0x39d9c4: 0x0  nop
    ctx->pc = 0x39d9c4u;
    // NOP
label_39d9c8:
    // 0x39d9c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39d9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_39d9cc:
    // 0x39d9cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_39d9d0:
    if (ctx->pc == 0x39D9D0u) {
        ctx->pc = 0x39D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9CCu;
        // 0x39d9d0: 0xe66000d8  swc1        $f0, 0xD8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9D4u;
        goto label_39d9d4;
    }
    ctx->pc = 0x39D9CCu;
    {
        const bool branch_taken_0x39d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9CCu;
        // 0x39d9d0: 0xe66000d8  swc1        $f0, 0xD8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9cc) {
            ctx->pc = 0x39D9F4u;
            goto label_39d9f4;
        }
    }
    ctx->pc = 0x39D9D4u;
label_39d9d4:
    // 0x39d9d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x39d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_39d9d8:
    // 0x39d9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39d9dc:
    // 0x39d9dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x39d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_39d9e0:
    // 0x39d9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39d9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39d9e4:
    // 0x39d9e4: 0x0  nop
    ctx->pc = 0x39d9e4u;
    // NOP
label_39d9e8:
    // 0x39d9e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39d9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_39d9ec:
    // 0x39d9ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x39d9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_39d9f0:
    // 0x39d9f0: 0xe66000d8  swc1        $f0, 0xD8($s3)
    ctx->pc = 0x39d9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
label_39d9f4:
    // 0x39d9f4: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x39d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_39d9f8:
    // 0x39d9f8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x39d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_39d9fc:
    // 0x39d9fc: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x39d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_39da00:
    // 0x39da00: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x39da00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
label_39da04:
    // 0x39da04: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39da08:
    // 0x39da08: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39da08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39da0c:
    // 0x39da0c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39da10:
    if (ctx->pc == 0x39DA10u) {
        ctx->pc = 0x39DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA0Cu;
        // 0x39da10: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA14u;
        goto label_39da14;
    }
    ctx->pc = 0x39DA0Cu;
    {
        const bool branch_taken_0x39da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA0Cu;
        // 0x39da10: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da0c) {
            ctx->pc = 0x39DA58u;
            goto label_39da58;
        }
    }
    ctx->pc = 0x39DA14u;
label_39da14:
    // 0x39da14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39da14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39da18:
    // 0x39da18: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x39da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_39da1c:
    // 0x39da1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39da20:
    // 0x39da20: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x39da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39da24:
    // 0x39da24: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_39da28:
    if (ctx->pc == 0x39DA28u) {
        ctx->pc = 0x39DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA24u;
        // 0x39da28: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA2Cu;
        goto label_39da2c;
    }
    ctx->pc = 0x39DA24u;
    {
        const bool branch_taken_0x39da24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39da24) {
            ctx->pc = 0x39DA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DA24u;
            // 0x39da28: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DA44u;
            goto label_39da44;
        }
    }
    ctx->pc = 0x39DA2Cu;
label_39da2c:
    // 0x39da2c: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x39da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_39da30:
    // 0x39da30: 0x1040047c  beqz        $v0, . + 4 + (0x47C << 2)
label_39da34:
    if (ctx->pc == 0x39DA34u) {
        ctx->pc = 0x39DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA30u;
        // 0x39da34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA38u;
        goto label_39da38;
    }
    ctx->pc = 0x39DA30u;
    {
        const bool branch_taken_0x39da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA30u;
        // 0x39da34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da30) {
            ctx->pc = 0x39EC24u;
            goto label_39ec24;
        }
    }
    ctx->pc = 0x39DA38u;
label_39da38:
    // 0x39da38: 0xc089974  jal         func_2265D0
label_39da3c:
    if (ctx->pc == 0x39DA3Cu) {
        ctx->pc = 0x39DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA38u;
        // 0x39da3c: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA40u;
        goto label_39da40;
    }
    ctx->pc = 0x39DA38u;
    SET_GPR_U32(ctx, 31, 0x39DA40u);
    ctx->pc = 0x39DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA38u;
    // 0x39da3c: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x39DA38u, 0x39DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA40u;
label_39da40:
    // 0x39da40: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39da44:
    // 0x39da44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39da44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39da48:
    // 0x39da48: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39da48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39da4c:
    // 0x39da4c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39da4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39da50:
    // 0x39da50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_39da54:
    if (ctx->pc == 0x39DA54u) {
        ctx->pc = 0x39DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA50u;
        // 0x39da54: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA58u;
        goto label_39da58;
    }
    ctx->pc = 0x39DA50u;
    {
        const bool branch_taken_0x39da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA50u;
        // 0x39da54: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da50) {
            ctx->pc = 0x39DA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39da18;
        }
    }
    ctx->pc = 0x39DA58u;
label_39da58:
    // 0x39da58: 0x927100ed  lbu         $s1, 0xED($s3)
    ctx->pc = 0x39da58u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39da5c:
    // 0x39da5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39da60:
    // 0x39da60: 0x56220084  bnel        $s1, $v0, . + 4 + (0x84 << 2)
label_39da64:
    if (ctx->pc == 0x39DA64u) {
        ctx->pc = 0x39DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA60u;
        // 0x39da64: 0x8e6400a0  lw          $a0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA68u;
        goto label_39da68;
    }
    ctx->pc = 0x39DA60u;
    {
        const bool branch_taken_0x39da60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x39da60) {
            ctx->pc = 0x39DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DA60u;
            // 0x39da64: 0x8e6400a0  lw          $a0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DC74u;
            goto label_39dc74;
        }
    }
    ctx->pc = 0x39DA68u;
label_39da68:
    // 0x39da68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39da68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39da6c:
    // 0x39da6c: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x39da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39da70:
    // 0x39da70: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x39da70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_39da74:
    // 0x39da74: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_39da78:
    if (ctx->pc == 0x39DA78u) {
        ctx->pc = 0x39DA7Cu;
        goto label_39da7c;
    }
    ctx->pc = 0x39DA74u;
    {
        const bool branch_taken_0x39da74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39da74) {
            ctx->pc = 0x39DAB4u;
            goto label_39dab4;
        }
    }
    ctx->pc = 0x39DA7Cu;
label_39da7c:
    // 0x39da7c: 0xc05ae34  jal         func_16B8D0
label_39da80:
    if (ctx->pc == 0x39DA80u) {
        ctx->pc = 0x39DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA7Cu;
        // 0x39da80: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA84u;
        goto label_39da84;
    }
    ctx->pc = 0x39DA7Cu;
    SET_GPR_U32(ctx, 31, 0x39DA84u);
    ctx->pc = 0x39DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA7Cu;
    // 0x39da80: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8D0u, 0x39DA7Cu, 0x39DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA84u;
label_39da84:
    // 0x39da84: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x39da84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_39da88:
    // 0x39da88: 0xc06c8e0  jal         func_1B2380
label_39da8c:
    if (ctx->pc == 0x39DA8Cu) {
        ctx->pc = 0x39DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA88u;
        // 0x39da8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA90u;
        goto label_39da90;
    }
    ctx->pc = 0x39DA88u;
    SET_GPR_U32(ctx, 31, 0x39DA90u);
    ctx->pc = 0x39DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA88u;
    // 0x39da8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x39DA88u, 0x39DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA90u;
label_39da90:
    // 0x39da90: 0xc06c7ce  jal         func_1B1F38
label_39da94:
    if (ctx->pc == 0x39DA94u) {
        ctx->pc = 0x39DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA90u;
        // 0x39da94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA98u;
        goto label_39da98;
    }
    ctx->pc = 0x39DA90u;
    SET_GPR_U32(ctx, 31, 0x39DA98u);
    ctx->pc = 0x39DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA90u;
    // 0x39da94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x39DA90u, 0x39DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA98u;
label_39da98:
    // 0x39da98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39da98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39da9c:
    // 0x39da9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39daa0:
    // 0x39daa0: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x39daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39daa4:
    // 0x39daa4: 0xa0710410  sb          $s1, 0x410($v1)
    ctx->pc = 0x39daa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1040), (uint8_t)GPR_U32(ctx, 17));
label_39daa8:
    // 0x39daa8: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39daac:
    // 0x39daac: 0x1000045e  b           . + 4 + (0x45E << 2)
label_39dab0:
    if (ctx->pc == 0x39DAB0u) {
        ctx->pc = 0x39DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAACu;
        // 0x39dab0: 0xa444001c  sh          $a0, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAB4u;
        goto label_39dab4;
    }
    ctx->pc = 0x39DAACu;
    {
        const bool branch_taken_0x39daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAACu;
        // 0x39dab0: 0xa444001c  sh          $a0, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39daac) {
            ctx->pc = 0x39EC28u;
            goto label_39ec28;
        }
    }
    ctx->pc = 0x39DAB4u;
label_39dab4:
    // 0x39dab4: 0x1451004f  bne         $v0, $s1, . + 4 + (0x4F << 2)
label_39dab8:
    if (ctx->pc == 0x39DAB8u) {
        ctx->pc = 0x39DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAB4u;
        // 0x39dab8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DABCu;
        goto label_39dabc;
    }
    ctx->pc = 0x39DAB4u;
    {
        const bool branch_taken_0x39dab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x39DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAB4u;
        // 0x39dab8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dab4) {
            ctx->pc = 0x39DBF4u;
            goto label_39dbf4;
        }
    }
    ctx->pc = 0x39DABCu;
label_39dabc:
    // 0x39dabc: 0xc047e6c  jal         func_11F9B0
label_39dac0:
    if (ctx->pc == 0x39DAC0u) {
        ctx->pc = 0x39DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DABCu;
        // 0x39dac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAC4u;
        goto label_39dac4;
    }
    ctx->pc = 0x39DABCu;
    SET_GPR_U32(ctx, 31, 0x39DAC4u);
    ctx->pc = 0x39DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DABCu;
    // 0x39dac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x39DABCu, 0x39DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DAC4u;
label_39dac4:
    // 0x39dac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39dac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39dac8:
    // 0x39dac8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39dacc:
    // 0x39dacc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39daccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39dad0:
    // 0x39dad0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x39dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39dad4:
    // 0x39dad4: 0x40f809  jalr        $v0
label_39dad8:
    if (ctx->pc == 0x39DAD8u) {
        ctx->pc = 0x39DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAD4u;
        // 0x39dad8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DADCu;
        goto label_39dadc;
    }
    ctx->pc = 0x39DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DADCu);
        ctx->pc = 0x39DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAD4u;
        // 0x39dad8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DAD4u, 0x39DADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DADCu;
label_39dadc:
    // 0x39dadc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39dae0:
    // 0x39dae0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_39dae4:
    if (ctx->pc == 0x39DAE4u) {
        ctx->pc = 0x39DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAE0u;
        // 0x39dae4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAE8u;
        goto label_39dae8;
    }
    ctx->pc = 0x39DAE0u;
    {
        const bool branch_taken_0x39dae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39dae0) {
            ctx->pc = 0x39DAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DAE0u;
            // 0x39dae4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DAF8u;
            goto label_39daf8;
        }
    }
    ctx->pc = 0x39DAE8u;
label_39dae8:
    // 0x39dae8: 0xc047e72  jal         func_11F9C8
label_39daec:
    if (ctx->pc == 0x39DAECu) {
        ctx->pc = 0x39DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAE8u;
        // 0x39daec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAF0u;
        goto label_39daf0;
    }
    ctx->pc = 0x39DAE8u;
    SET_GPR_U32(ctx, 31, 0x39DAF0u);
    ctx->pc = 0x39DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DAE8u;
    // 0x39daec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39DAE8u, 0x39DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DAF0u;
label_39daf0:
    // 0x39daf0: 0x10000021  b           . + 4 + (0x21 << 2)
label_39daf4:
    if (ctx->pc == 0x39DAF4u) {
        ctx->pc = 0x39DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAF0u;
        // 0x39daf4: 0x8c500334  lw          $s0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAF8u;
        goto label_39daf8;
    }
    ctx->pc = 0x39DAF0u;
    {
        const bool branch_taken_0x39daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAF0u;
        // 0x39daf4: 0x8c500334  lw          $s0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39daf0) {
            ctx->pc = 0x39DB78u;
            goto label_39db78;
        }
    }
    ctx->pc = 0x39DAF8u;
label_39daf8:
    // 0x39daf8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39daf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39dafc:
    // 0x39dafc: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x39dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39db00:
    // 0x39db00: 0x40f809  jalr        $v0
label_39db04:
    if (ctx->pc == 0x39DB04u) {
        ctx->pc = 0x39DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB00u;
        // 0x39db04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB08u;
        goto label_39db08;
    }
    ctx->pc = 0x39DB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DB08u);
        ctx->pc = 0x39DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB00u;
        // 0x39db04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB00u, 0x39DB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DB08u;
label_39db08:
    // 0x39db08: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x39db08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39db0c:
    // 0x39db0c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_39db10:
    if (ctx->pc == 0x39DB10u) {
        ctx->pc = 0x39DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB0Cu;
        // 0x39db10: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB14u;
        goto label_39db14;
    }
    ctx->pc = 0x39DB0Cu;
    {
        const bool branch_taken_0x39db0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39db0c) {
            ctx->pc = 0x39DB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DB0Cu;
            // 0x39db10: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DB24u;
            goto label_39db24;
        }
    }
    ctx->pc = 0x39DB14u;
label_39db14:
    // 0x39db14: 0xc047e72  jal         func_11F9C8
label_39db18:
    if (ctx->pc == 0x39DB18u) {
        ctx->pc = 0x39DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB14u;
        // 0x39db18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB1Cu;
        goto label_39db1c;
    }
    ctx->pc = 0x39DB14u;
    SET_GPR_U32(ctx, 31, 0x39DB1Cu);
    ctx->pc = 0x39DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DB14u;
    // 0x39db18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39DB14u, 0x39DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DB1Cu;
label_39db1c:
    // 0x39db1c: 0x10000016  b           . + 4 + (0x16 << 2)
label_39db20:
    if (ctx->pc == 0x39DB20u) {
        ctx->pc = 0x39DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB1Cu;
        // 0x39db20: 0x8c500230  lw          $s0, 0x230($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB24u;
        goto label_39db24;
    }
    ctx->pc = 0x39DB1Cu;
    {
        const bool branch_taken_0x39db1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB1Cu;
        // 0x39db20: 0x8c500230  lw          $s0, 0x230($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db1c) {
            ctx->pc = 0x39DB78u;
            goto label_39db78;
        }
    }
    ctx->pc = 0x39DB24u;
label_39db24:
    // 0x39db24: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39db24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39db28:
    // 0x39db28: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x39db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39db2c:
    // 0x39db2c: 0x40f809  jalr        $v0
label_39db30:
    if (ctx->pc == 0x39DB30u) {
        ctx->pc = 0x39DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB2Cu;
        // 0x39db30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB34u;
        goto label_39db34;
    }
    ctx->pc = 0x39DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DB34u);
        ctx->pc = 0x39DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB2Cu;
        // 0x39db30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB2Cu, 0x39DB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DB34u;
label_39db34:
    // 0x39db34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39db38:
    // 0x39db38: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_39db3c:
    if (ctx->pc == 0x39DB3Cu) {
        ctx->pc = 0x39DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB38u;
        // 0x39db3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB40u;
        goto label_39db40;
    }
    ctx->pc = 0x39DB38u;
    {
        const bool branch_taken_0x39db38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39db38) {
            ctx->pc = 0x39DB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DB38u;
            // 0x39db3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DB50u;
            goto label_39db50;
        }
    }
    ctx->pc = 0x39DB40u;
label_39db40:
    // 0x39db40: 0xc047e72  jal         func_11F9C8
label_39db44:
    if (ctx->pc == 0x39DB44u) {
        ctx->pc = 0x39DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB40u;
        // 0x39db44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB48u;
        goto label_39db48;
    }
    ctx->pc = 0x39DB40u;
    SET_GPR_U32(ctx, 31, 0x39DB48u);
    ctx->pc = 0x39DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DB40u;
    // 0x39db44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39DB40u, 0x39DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DB48u;
label_39db48:
    // 0x39db48: 0x1000000b  b           . + 4 + (0xB << 2)
label_39db4c:
    if (ctx->pc == 0x39DB4Cu) {
        ctx->pc = 0x39DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB48u;
        // 0x39db4c: 0x8c500240  lw          $s0, 0x240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB50u;
        goto label_39db50;
    }
    ctx->pc = 0x39DB48u;
    {
        const bool branch_taken_0x39db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB48u;
        // 0x39db4c: 0x8c500240  lw          $s0, 0x240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db48) {
            ctx->pc = 0x39DB78u;
            goto label_39db78;
        }
    }
    ctx->pc = 0x39DB50u;
label_39db50:
    // 0x39db50: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39db50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39db54:
    // 0x39db54: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x39db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39db58:
    // 0x39db58: 0x40f809  jalr        $v0
label_39db5c:
    if (ctx->pc == 0x39DB5Cu) {
        ctx->pc = 0x39DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB58u;
        // 0x39db5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB60u;
        goto label_39db60;
    }
    ctx->pc = 0x39DB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DB60u);
        ctx->pc = 0x39DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB58u;
        // 0x39db5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB58u, 0x39DB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DB60u;
label_39db60:
    // 0x39db60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39db60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39db64:
    // 0x39db64: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_39db68:
    if (ctx->pc == 0x39DB68u) {
        ctx->pc = 0x39DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB64u;
        // 0x39db68: 0x8e620090  lw          $v0, 0x90($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB6Cu;
        goto label_39db6c;
    }
    ctx->pc = 0x39DB64u;
    {
        const bool branch_taken_0x39db64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39db64) {
            ctx->pc = 0x39DB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DB64u;
            // 0x39db68: 0x8e620090  lw          $v0, 0x90($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DB7Cu;
            goto label_39db7c;
        }
    }
    ctx->pc = 0x39DB6Cu;
label_39db6c:
    // 0x39db6c: 0xc047e72  jal         func_11F9C8
label_39db70:
    if (ctx->pc == 0x39DB70u) {
        ctx->pc = 0x39DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB6Cu;
        // 0x39db70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB74u;
        goto label_39db74;
    }
    ctx->pc = 0x39DB6Cu;
    SET_GPR_U32(ctx, 31, 0x39DB74u);
    ctx->pc = 0x39DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DB6Cu;
    // 0x39db70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39DB6Cu, 0x39DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DB74u;
label_39db74:
    // 0x39db74: 0x8c500214  lw          $s0, 0x214($v0)
    ctx->pc = 0x39db74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_39db78:
    // 0x39db78: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x39db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_39db7c:
    // 0x39db7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_39db80:
    if (ctx->pc == 0x39DB80u) {
        ctx->pc = 0x39DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB7Cu;
        // 0x39db80: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB84u;
        goto label_39db84;
    }
    ctx->pc = 0x39DB7Cu;
    {
        const bool branch_taken_0x39db7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB7Cu;
        // 0x39db80: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db7c) {
            ctx->pc = 0x39DBA4u;
            goto label_39dba4;
        }
    }
    ctx->pc = 0x39DB84u;
label_39db84:
    // 0x39db84: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x39db84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_39db88:
    // 0x39db88: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x39db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_39db8c:
    // 0x39db8c: 0x40f809  jalr        $v0
label_39db90:
    if (ctx->pc == 0x39DB90u) {
        ctx->pc = 0x39DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB8Cu;
        // 0x39db90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB94u;
        goto label_39db94;
    }
    ctx->pc = 0x39DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DB94u);
        ctx->pc = 0x39DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB8Cu;
        // 0x39db90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB8Cu, 0x39DB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DB94u;
label_39db94:
    // 0x39db94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x39db94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39db98:
    // 0x39db98: 0xae700090  sw          $s0, 0x90($s3)
    ctx->pc = 0x39db98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
label_39db9c:
    // 0x39db9c: 0x7e630080  sq          $v1, 0x80($s3)
    ctx->pc = 0x39db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 3));
label_39dba0:
    // 0x39dba0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39dba4:
    // 0x39dba4: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dba8:
    // 0x39dba8: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x39dba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_39dbac:
    // 0x39dbac: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x39dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_39dbb0:
    // 0x39dbb0: 0x8c6601bc  lw          $a2, 0x1BC($v1)
    ctx->pc = 0x39dbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_39dbb4:
    // 0x39dbb4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x39dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_39dbb8:
    // 0x39dbb8: 0xc0f809  jalr        $a2
label_39dbbc:
    if (ctx->pc == 0x39DBBCu) {
        ctx->pc = 0x39DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBB8u;
        // 0x39dbbc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DBC0u;
        goto label_39dbc0;
    }
    ctx->pc = 0x39DBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39DBC0u);
        ctx->pc = 0x39DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBB8u;
        // 0x39dbbc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DBB8u, 0x39DBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DBC0u;
label_39dbc0:
    // 0x39dbc0: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x39dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dbc4:
    // 0x39dbc4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x39dbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_39dbc8:
    // 0x39dbc8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x39dbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_39dbcc:
    // 0x39dbcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39dbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39dbd0:
    // 0x39dbd0: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x39dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_39dbd4:
    // 0x39dbd4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x39dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_39dbd8:
    // 0x39dbd8: 0xc103252  jal         func_40C948
label_39dbdc:
    if (ctx->pc == 0x39DBDCu) {
        ctx->pc = 0x39DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBD8u;
        // 0x39dbdc: 0xc44d0060  lwc1        $f13, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DBE0u;
        goto label_39dbe0;
    }
    ctx->pc = 0x39DBD8u;
    SET_GPR_U32(ctx, 31, 0x39DBE0u);
    ctx->pc = 0x39DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DBD8u;
    // 0x39dbdc: 0xc44d0060  lwc1        $f13, 0x60($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C948u, 0x39DBD8u, 0x39DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DBE0u;
label_39dbe0:
    // 0x39dbe0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39dbe4:
    // 0x39dbe4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x39dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39dbe8:
    // 0x39dbe8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39dbec:
    // 0x39dbec: 0xa0620410  sb          $v0, 0x410($v1)
    ctx->pc = 0x39dbecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1040), (uint8_t)GPR_U32(ctx, 2));
label_39dbf0:
    // 0x39dbf0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39dbf4:
    // 0x39dbf4: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x39dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39dbf8:
    // 0x39dbf8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39dbf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39dbfc:
    // 0x39dbfc: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_39dc00:
    if (ctx->pc == 0x39DC00u) {
        ctx->pc = 0x39DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBFCu;
        // 0x39dc00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC04u;
        goto label_39dc04;
    }
    ctx->pc = 0x39DBFCu;
    {
        const bool branch_taken_0x39dbfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBFCu;
        // 0x39dc00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dbfc) {
            ctx->pc = 0x39DC70u;
            goto label_39dc70;
        }
    }
    ctx->pc = 0x39DC04u;
label_39dc04:
    // 0x39dc04: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x39dc04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
label_39dc08:
    // 0x39dc08: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x39dc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_39dc0c:
    // 0x39dc0c: 0x0  nop
    ctx->pc = 0x39dc0cu;
    // NOP
label_39dc10:
    // 0x39dc10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39dc14:
    // 0x39dc14: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x39dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39dc18:
    // 0x39dc18: 0xc0e409a  jal         func_390268
label_39dc1c:
    if (ctx->pc == 0x39DC1Cu) {
        ctx->pc = 0x39DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC18u;
        // 0x39dc1c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC20u;
        goto label_39dc20;
    }
    ctx->pc = 0x39DC18u;
    SET_GPR_U32(ctx, 31, 0x39DC20u);
    ctx->pc = 0x39DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DC18u;
    // 0x39dc1c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39DC18u, 0x39DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DC20u;
label_39dc20:
    // 0x39dc20: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x39dc20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
label_39dc24:
    // 0x39dc24: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x39dc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_39dc28:
    // 0x39dc28: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x39dc28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39dc2c:
    // 0x39dc2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39dc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_39dc30:
    // 0x39dc30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39dc30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_39dc34:
    // 0x39dc34: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_39dc38:
    if (ctx->pc == 0x39DC38u) {
        ctx->pc = 0x39DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC34u;
        // 0x39dc38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC3Cu;
        goto label_39dc3c;
    }
    ctx->pc = 0x39DC34u;
    {
        const bool branch_taken_0x39dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC34u;
        // 0x39dc38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc34) {
            ctx->pc = 0x39DC54u;
            goto label_39dc54;
        }
    }
    ctx->pc = 0x39DC3Cu;
label_39dc3c:
    // 0x39dc3c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x39dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39dc40:
    // 0x39dc40: 0xc0e409a  jal         func_390268
label_39dc44:
    if (ctx->pc == 0x39DC44u) {
        ctx->pc = 0x39DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC40u;
        // 0x39dc44: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC48u;
        goto label_39dc48;
    }
    ctx->pc = 0x39DC40u;
    SET_GPR_U32(ctx, 31, 0x39DC48u);
    ctx->pc = 0x39DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DC40u;
    // 0x39dc44: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39DC40u, 0x39DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DC48u;
label_39dc48:
    // 0x39dc48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39dc4c:
    // 0x39dc4c: 0xc08dbee  jal         func_236FB8
label_39dc50:
    if (ctx->pc == 0x39DC50u) {
        ctx->pc = 0x39DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC4Cu;
        // 0x39dc50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC54u;
        goto label_39dc54;
    }
    ctx->pc = 0x39DC4Cu;
    SET_GPR_U32(ctx, 31, 0x39DC54u);
    ctx->pc = 0x39DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DC4Cu;
    // 0x39dc50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x39DC4Cu, 0x39DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DC54u;
label_39dc54:
    // 0x39dc54: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39dc58:
    // 0x39dc58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39dc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39dc5c:
    // 0x39dc5c: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x39dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39dc60:
    // 0x39dc60: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39dc60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39dc64:
    // 0x39dc64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39dc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39dc68:
    // 0x39dc68: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_39dc6c:
    if (ctx->pc == 0x39DC6Cu) {
        ctx->pc = 0x39DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC68u;
        // 0x39dc6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC70u;
        goto label_39dc70;
    }
    ctx->pc = 0x39DC68u;
    {
        const bool branch_taken_0x39dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC68u;
        // 0x39dc6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc68) {
            ctx->pc = 0x39DC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dc10;
        }
    }
    ctx->pc = 0x39DC70u;
label_39dc70:
    // 0x39dc70: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x39dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dc74:
    // 0x39dc74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39dc74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc78:
    // 0x39dc78: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39dc78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_39dc7c:
    // 0x39dc7c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_39dc80:
    if (ctx->pc == 0x39DC80u) {
        ctx->pc = 0x39DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC7Cu;
        // 0x39dc80: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC84u;
        goto label_39dc84;
    }
    ctx->pc = 0x39DC7Cu;
    {
        const bool branch_taken_0x39dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC7Cu;
        // 0x39dc80: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc7c) {
            ctx->pc = 0x39DD1Cu;
            goto label_39dd1c;
        }
    }
    ctx->pc = 0x39DC84u;
label_39dc84:
    // 0x39dc84: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x39dc84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39dc88:
    // 0x39dc88: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x39dc88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_39dc8c:
    // 0x39dc8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39dc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc90:
    // 0x39dc90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39dc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc94:
    // 0x39dc94: 0x0  nop
    ctx->pc = 0x39dc94u;
    // NOP
label_39dc98:
    // 0x39dc98: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x39dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39dc9c:
    // 0x39dc9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39dca0:
    // 0x39dca0: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x39dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39dca4:
    // 0x39dca4: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_39dca8:
    if (ctx->pc == 0x39DCA8u) {
        ctx->pc = 0x39DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCA4u;
        // 0x39dca8: 0x8e6400a0  lw          $a0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCACu;
        goto label_39dcac;
    }
    ctx->pc = 0x39DCA4u;
    {
        const bool branch_taken_0x39dca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dca4) {
            ctx->pc = 0x39DCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DCA4u;
            // 0x39dca8: 0x8e6400a0  lw          $a0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DD00u;
            goto label_39dd00;
        }
    }
    ctx->pc = 0x39DCACu;
label_39dcac:
    // 0x39dcac: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x39dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_39dcb0:
    // 0x39dcb0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_39dcb4:
    if (ctx->pc == 0x39DCB4u) {
        ctx->pc = 0x39DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCB0u;
        // 0x39dcb4: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCB8u;
        goto label_39dcb8;
    }
    ctx->pc = 0x39DCB0u;
    {
        const bool branch_taken_0x39dcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dcb0) {
            ctx->pc = 0x39DCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DCB0u;
            // 0x39dcb4: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DCD8u;
            goto label_39dcd8;
        }
    }
    ctx->pc = 0x39DCB8u;
label_39dcb8:
    // 0x39dcb8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x39dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_39dcbc:
    // 0x39dcbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39dcc0:
    if (ctx->pc == 0x39DCC0u) {
        ctx->pc = 0x39DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCBCu;
        // 0x39dcc0: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCC4u;
        goto label_39dcc4;
    }
    ctx->pc = 0x39DCBCu;
    {
        const bool branch_taken_0x39dcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCBCu;
        // 0x39dcc0: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dcbc) {
            ctx->pc = 0x39DCD4u;
            goto label_39dcd4;
        }
    }
    ctx->pc = 0x39DCC4u;
label_39dcc4:
    // 0x39dcc4: 0xc089998  jal         func_226660
label_39dcc8:
    if (ctx->pc == 0x39DCC8u) {
        ctx->pc = 0x39DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCC4u;
        // 0x39dcc8: 0x34a5e600  ori         $a1, $a1, 0xE600 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58880);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCCCu;
        goto label_39dccc;
    }
    ctx->pc = 0x39DCC4u;
    SET_GPR_U32(ctx, 31, 0x39DCCCu);
    ctx->pc = 0x39DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DCC4u;
    // 0x39dcc8: 0x34a5e600  ori         $a1, $a1, 0xE600 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58880);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x39DCC4u, 0x39DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DCCCu;
label_39dccc:
    // 0x39dccc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_39dcd0:
    if (ctx->pc == 0x39DCD0u) {
        ctx->pc = 0x39DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCCCu;
        // 0x39dcd0: 0x8e6400a0  lw          $a0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCD4u;
        goto label_39dcd4;
    }
    ctx->pc = 0x39DCCCu;
    {
        const bool branch_taken_0x39dccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dccc) {
            ctx->pc = 0x39DCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DCCCu;
            // 0x39dcd0: 0x8e6400a0  lw          $a0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DD00u;
            goto label_39dd00;
        }
    }
    ctx->pc = 0x39DCD4u;
label_39dcd4:
    // 0x39dcd4: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dcd8:
    // 0x39dcd8: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x39dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
label_39dcdc:
    // 0x39dcdc: 0xa455001c  sh          $s5, 0x1C($v0)
    ctx->pc = 0x39dcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 21));
label_39dce0:
    // 0x39dce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39dce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39dce4:
    // 0x39dce4: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dce8:
    // 0x39dce8: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x39dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_39dcec:
    // 0x39dcec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39dcf0:
    // 0x39dcf0: 0xc06290c  jal         func_18A430
label_39dcf4:
    if (ctx->pc == 0x39DCF4u) {
        ctx->pc = 0x39DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCF0u;
        // 0x39dcf4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCF8u;
        goto label_39dcf8;
    }
    ctx->pc = 0x39DCF0u;
    SET_GPR_U32(ctx, 31, 0x39DCF8u);
    ctx->pc = 0x39DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DCF0u;
    // 0x39dcf4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A430u, 0x39DCF0u, 0x39DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DCF8u;
label_39dcf8:
    // 0x39dcf8: 0x100003cc  b           . + 4 + (0x3CC << 2)
label_39dcfc:
    if (ctx->pc == 0x39DCFCu) {
        ctx->pc = 0x39DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCF8u;
        // 0x39dcfc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD00u;
        goto label_39dd00;
    }
    ctx->pc = 0x39DCF8u;
    {
        const bool branch_taken_0x39dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCF8u;
        // 0x39dcfc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dcf8) {
            ctx->pc = 0x39EC2Cu;
            goto label_39ec2c;
        }
    }
    ctx->pc = 0x39DD00u;
label_39dd00:
    // 0x39dd00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39dd00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39dd04:
    // 0x39dd04: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x39dd04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_39dd08:
    // 0x39dd08: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x39dd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_39dd0c:
    // 0x39dd0c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39dd0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_39dd10:
    // 0x39dd10: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39dd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39dd14:
    // 0x39dd14: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_39dd18:
    if (ctx->pc == 0x39DD18u) {
        ctx->pc = 0x39DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD14u;
        // 0x39dd18: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD1Cu;
        goto label_39dd1c;
    }
    ctx->pc = 0x39DD14u;
    {
        const bool branch_taken_0x39dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD14u;
        // 0x39dd18: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd14) {
            ctx->pc = 0x39DC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dc98;
        }
    }
    ctx->pc = 0x39DD1Cu;
label_39dd1c:
    // 0x39dd1c: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39dd1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39dd20:
    // 0x39dd20: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_39dd24:
    if (ctx->pc == 0x39DD24u) {
        ctx->pc = 0x39DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD20u;
        // 0x39dd24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD28u;
        goto label_39dd28;
    }
    ctx->pc = 0x39DD20u;
    {
        const bool branch_taken_0x39dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD20u;
        // 0x39dd24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd20) {
            ctx->pc = 0x39DD88u;
            goto label_39dd88;
        }
    }
    ctx->pc = 0x39DD28u;
label_39dd28:
    // 0x39dd28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39dd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dd2c:
    // 0x39dd2c: 0x0  nop
    ctx->pc = 0x39dd2cu;
    // NOP
label_39dd30:
    // 0x39dd30: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39dd34:
    // 0x39dd34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39dd38:
    // 0x39dd38: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x39dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39dd3c:
    // 0x39dd3c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_39dd40:
    if (ctx->pc == 0x39DD40u) {
        ctx->pc = 0x39DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD3Cu;
        // 0x39dd40: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD44u;
        goto label_39dd44;
    }
    ctx->pc = 0x39DD3Cu;
    {
        const bool branch_taken_0x39dd3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd3c) {
            ctx->pc = 0x39DD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DD3Cu;
            // 0x39dd40: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DD74u;
            goto label_39dd74;
        }
    }
    ctx->pc = 0x39DD44u;
label_39dd44:
    // 0x39dd44: 0xc0e57ce  jal         func_395F38
label_39dd48:
    if (ctx->pc == 0x39DD48u) {
        ctx->pc = 0x39DD4Cu;
        goto label_39dd4c;
    }
    ctx->pc = 0x39DD44u;
    SET_GPR_U32(ctx, 31, 0x39DD4Cu);
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39DD44u, 0x39DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DD4Cu;
label_39dd4c:
    // 0x39dd4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39dd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39dd50:
    // 0x39dd50: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_39dd54:
    if (ctx->pc == 0x39DD54u) {
        ctx->pc = 0x39DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD50u;
        // 0x39dd54: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD58u;
        goto label_39dd58;
    }
    ctx->pc = 0x39DD50u;
    {
        const bool branch_taken_0x39dd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd50) {
            ctx->pc = 0x39DD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DD50u;
            // 0x39dd54: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DD74u;
            goto label_39dd74;
        }
    }
    ctx->pc = 0x39DD58u;
label_39dd58:
    // 0x39dd58: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x39dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_39dd5c:
    // 0x39dd5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_39dd60:
    if (ctx->pc == 0x39DD60u) {
        ctx->pc = 0x39DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD5Cu;
        // 0x39dd60: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD64u;
        goto label_39dd64;
    }
    ctx->pc = 0x39DD5Cu;
    {
        const bool branch_taken_0x39dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd5c) {
            ctx->pc = 0x39DD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DD5Cu;
            // 0x39dd60: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DD74u;
            goto label_39dd74;
        }
    }
    ctx->pc = 0x39DD64u;
label_39dd64:
    // 0x39dd64: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x39dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_39dd68:
    // 0x39dd68: 0x50400163  beql        $v0, $zero, . + 4 + (0x163 << 2)
label_39dd6c:
    if (ctx->pc == 0x39DD6Cu) {
        ctx->pc = 0x39DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD68u;
        // 0x39dd6c: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD70u;
        goto label_39dd70;
    }
    ctx->pc = 0x39DD68u;
    {
        const bool branch_taken_0x39dd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd68) {
            ctx->pc = 0x39DD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DD68u;
            // 0x39dd6c: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E2F8u;
            goto label_39e2f8;
        }
    }
    ctx->pc = 0x39DD70u;
label_39dd70:
    // 0x39dd70: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dd74:
    // 0x39dd74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39dd74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39dd78:
    // 0x39dd78: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39dd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39dd7c:
    // 0x39dd7c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39dd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39dd80:
    // 0x39dd80: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_39dd84:
    if (ctx->pc == 0x39DD84u) {
        ctx->pc = 0x39DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD80u;
        // 0x39dd84: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD88u;
        goto label_39dd88;
    }
    ctx->pc = 0x39DD80u;
    {
        const bool branch_taken_0x39dd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD80u;
        // 0x39dd84: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd80) {
            ctx->pc = 0x39DD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dd30;
        }
    }
    ctx->pc = 0x39DD88u;
label_39dd88:
    // 0x39dd88: 0x926200ed  lbu         $v0, 0xED($s3)
    ctx->pc = 0x39dd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39dd8c:
    // 0x39dd8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39dd90:
    if (ctx->pc == 0x39DD90u) {
        ctx->pc = 0x39DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD8Cu;
        // 0x39dd90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD94u;
        goto label_39dd94;
    }
    ctx->pc = 0x39DD8Cu;
    {
        const bool branch_taken_0x39dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD8Cu;
        // 0x39dd90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd8c) {
            ctx->pc = 0x39DDD8u;
            goto label_39ddd8;
        }
    }
    ctx->pc = 0x39DD94u;
label_39dd94:
    // 0x39dd94: 0x8c4348ac  lw          $v1, 0x48AC($v0)
    ctx->pc = 0x39dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18604)));
label_39dd98:
    // 0x39dd98: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_39dd9c:
    if (ctx->pc == 0x39DD9Cu) {
        ctx->pc = 0x39DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD98u;
        // 0x39dd9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDA0u;
        goto label_39dda0;
    }
    ctx->pc = 0x39DD98u;
    {
        const bool branch_taken_0x39dd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD98u;
        // 0x39dd9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd98) {
            ctx->pc = 0x39DDDCu;
            goto label_39dddc;
        }
    }
    ctx->pc = 0x39DDA0u;
label_39dda0:
    // 0x39dda0: 0x926200f0  lbu         $v0, 0xF0($s3)
    ctx->pc = 0x39dda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 240)));
label_39dda4:
    // 0x39dda4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_39dda8:
    if (ctx->pc == 0x39DDA8u) {
        ctx->pc = 0x39DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDA4u;
        // 0x39dda8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDACu;
        goto label_39ddac;
    }
    ctx->pc = 0x39DDA4u;
    {
        const bool branch_taken_0x39dda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dda4) {
            ctx->pc = 0x39DDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DDA4u;
            // 0x39dda8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DDDCu;
            goto label_39dddc;
        }
    }
    ctx->pc = 0x39DDACu;
label_39ddac:
    // 0x39ddac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39ddb0:
    // 0x39ddb0: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x39ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39ddb4:
    // 0x39ddb4: 0x8c4303f8  lw          $v1, 0x3F8($v0)
    ctx->pc = 0x39ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
label_39ddb8:
    // 0x39ddb8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_39ddbc:
    if (ctx->pc == 0x39DDBCu) {
        ctx->pc = 0x39DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDB8u;
        // 0x39ddbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDC0u;
        goto label_39ddc0;
    }
    ctx->pc = 0x39DDB8u;
    {
        const bool branch_taken_0x39ddb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDB8u;
        // 0x39ddbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddb8) {
            ctx->pc = 0x39DDC4u;
            goto label_39ddc4;
        }
    }
    ctx->pc = 0x39DDC0u;
label_39ddc0:
    // 0x39ddc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ddc4:
    // 0x39ddc4: 0xa26200f0  sb          $v0, 0xF0($s3)
    ctx->pc = 0x39ddc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 2));
label_39ddc8:
    // 0x39ddc8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39ddcc:
    // 0x39ddcc: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x39ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39ddd0:
    // 0x39ddd0: 0xc106802  jal         func_41A008
label_39ddd4:
    if (ctx->pc == 0x39DDD4u) {
        ctx->pc = 0x39DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDD0u;
        // 0x39ddd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDD8u;
        goto label_39ddd8;
    }
    ctx->pc = 0x39DDD0u;
    SET_GPR_U32(ctx, 31, 0x39DDD8u);
    ctx->pc = 0x39DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDD0u;
    // 0x39ddd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x39DDD0u, 0x39DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDD8u;
label_39ddd8:
    // 0x39ddd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39dddc:
    // 0x39dddc: 0x8c50489c  lw          $s0, 0x489C($v0)
    ctx->pc = 0x39dddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39dde0:
    // 0x39dde0: 0xc136ad6  jal         func_4DAB58
label_39dde4:
    if (ctx->pc == 0x39DDE4u) {
        ctx->pc = 0x39DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDE0u;
        // 0x39dde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDE8u;
        goto label_39dde8;
    }
    ctx->pc = 0x39DDE0u;
    SET_GPR_U32(ctx, 31, 0x39DDE8u);
    ctx->pc = 0x39DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDE0u;
    // 0x39dde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x39DDE0u, 0x39DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDE8u;
label_39dde8:
    // 0x39dde8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39dde8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ddec:
    // 0x39ddec: 0xc136ad4  jal         func_4DAB50
label_39ddf0:
    if (ctx->pc == 0x39DDF0u) {
        ctx->pc = 0x39DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDECu;
        // 0x39ddf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDF4u;
        goto label_39ddf4;
    }
    ctx->pc = 0x39DDECu;
    SET_GPR_U32(ctx, 31, 0x39DDF4u);
    ctx->pc = 0x39DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDECu;
    // 0x39ddf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x39DDECu, 0x39DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDF4u;
label_39ddf4:
    // 0x39ddf4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x39ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_39ddf8:
    // 0x39ddf8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_39ddfc:
    // 0x39ddfc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x39ddfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_39de00:
    // 0x39de00: 0x8c86aa84  lw          $a2, -0x557C($a0)
    ctx->pc = 0x39de00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945412)));
label_39de04:
    // 0x39de04: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x39de04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_39de08:
    // 0x39de08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39de08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39de0c:
    // 0x39de0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x39de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_39de10:
    // 0x39de10: 0x926400ed  lbu         $a0, 0xED($s3)
    ctx->pc = 0x39de10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39de14:
    // 0x39de14: 0x8c654268  lw          $a1, 0x4268($v1)
    ctx->pc = 0x39de14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17000)));
label_39de18:
    // 0x39de18: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39de18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39de1c:
    // 0x39de1c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x39de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39de20:
    // 0x39de20: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_39de24:
    if (ctx->pc == 0x39DE24u) {
        ctx->pc = 0x39DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE20u;
        // 0x39de24: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE28u;
        goto label_39de28;
    }
    ctx->pc = 0x39DE20u;
    {
        const bool branch_taken_0x39de20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE20u;
        // 0x39de24: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de20) {
            ctx->pc = 0x39DE34u;
            goto label_39de34;
        }
    }
    ctx->pc = 0x39DE28u;
label_39de28:
    // 0x39de28: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x39de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_39de2c:
    // 0x39de2c: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
label_39de30:
    if (ctx->pc == 0x39DE30u) {
        ctx->pc = 0x39DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE2Cu;
        // 0x39de30: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE34u;
        goto label_39de34;
    }
    ctx->pc = 0x39DE2Cu;
    {
        const bool branch_taken_0x39de2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39de2c) {
            ctx->pc = 0x39DE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DE2Cu;
            // 0x39de30: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DED0u;
            goto label_39ded0;
        }
    }
    ctx->pc = 0x39DE34u;
label_39de34:
    // 0x39de34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x39de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39de38:
    // 0x39de38: 0xc0440a8  jal         func_1102A0
label_39de3c:
    if (ctx->pc == 0x39DE3Cu) {
        ctx->pc = 0x39DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE38u;
        // 0x39de3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE40u;
        goto label_39de40;
    }
    ctx->pc = 0x39DE38u;
    SET_GPR_U32(ctx, 31, 0x39DE40u);
    ctx->pc = 0x39DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE38u;
    // 0x39de3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102A0u, 0x39DE38u, 0x39DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE40u;
label_39de40:
    // 0x39de40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39de44:
    if (ctx->pc == 0x39DE44u) {
        ctx->pc = 0x39DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE40u;
        // 0x39de44: 0x8e42aa84  lw          $v0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE48u;
        goto label_39de48;
    }
    ctx->pc = 0x39DE40u;
    {
        const bool branch_taken_0x39de40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE40u;
        // 0x39de44: 0x8e42aa84  lw          $v0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de40) {
            ctx->pc = 0x39DE54u;
            goto label_39de54;
        }
    }
    ctx->pc = 0x39DE48u;
label_39de48:
    // 0x39de48: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x39de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_39de4c:
    // 0x39de4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_39de50:
    if (ctx->pc == 0x39DE50u) {
        ctx->pc = 0x39DE54u;
        goto label_39de54;
    }
    ctx->pc = 0x39DE4Cu;
    {
        const bool branch_taken_0x39de4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39de4c) {
            ctx->pc = 0x39DE58u;
            goto label_39de58;
        }
    }
    ctx->pc = 0x39DE54u;
label_39de54:
    // 0x39de54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x39de54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39de58:
    // 0x39de58: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_39de5c:
    if (ctx->pc == 0x39DE5Cu) {
        ctx->pc = 0x39DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE58u;
        // 0x39de5c: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE60u;
        goto label_39de60;
    }
    ctx->pc = 0x39DE58u;
    {
        const bool branch_taken_0x39de58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE58u;
        // 0x39de5c: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de58) {
            ctx->pc = 0x39DED0u;
            goto label_39ded0;
        }
    }
    ctx->pc = 0x39DE60u;
label_39de60:
    // 0x39de60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_39de64:
    if (ctx->pc == 0x39DE64u) {
        ctx->pc = 0x39DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE60u;
        // 0x39de64: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE68u;
        goto label_39de68;
    }
    ctx->pc = 0x39DE60u;
    {
        const bool branch_taken_0x39de60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE60u;
        // 0x39de64: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de60) {
            ctx->pc = 0x39DE88u;
            goto label_39de88;
        }
    }
    ctx->pc = 0x39DE68u;
label_39de68:
    // 0x39de68: 0xc043d5e  jal         func_10F578
label_39de6c:
    if (ctx->pc == 0x39DE6Cu) {
        ctx->pc = 0x39DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE68u;
        // 0x39de6c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE70u;
        goto label_39de70;
    }
    ctx->pc = 0x39DE68u;
    SET_GPR_U32(ctx, 31, 0x39DE70u);
    ctx->pc = 0x39DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE68u;
    // 0x39de6c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x39DE68u, 0x39DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE70u;
label_39de70:
    // 0x39de70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_39de74:
    if (ctx->pc == 0x39DE74u) {
        ctx->pc = 0x39DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE70u;
        // 0x39de74: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE78u;
        goto label_39de78;
    }
    ctx->pc = 0x39DE70u;
    {
        const bool branch_taken_0x39de70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE70u;
        // 0x39de74: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de70) {
            ctx->pc = 0x39DE88u;
            goto label_39de88;
        }
    }
    ctx->pc = 0x39DE78u;
label_39de78:
    // 0x39de78: 0x8e42aa84  lw          $v0, -0x557C($s2)
    ctx->pc = 0x39de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_39de7c:
    // 0x39de7c: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x39de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_39de80:
    // 0x39de80: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_39de84:
    if (ctx->pc == 0x39DE84u) {
        ctx->pc = 0x39DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE80u;
        // 0x39de84: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE88u;
        goto label_39de88;
    }
    ctx->pc = 0x39DE80u;
    {
        const bool branch_taken_0x39de80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39de80) {
            ctx->pc = 0x39DE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DE80u;
            // 0x39de84: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DED0u;
            goto label_39ded0;
        }
    }
    ctx->pc = 0x39DE88u;
label_39de88:
    // 0x39de88: 0xc046dd8  jal         func_11B760
label_39de8c:
    if (ctx->pc == 0x39DE8Cu) {
        ctx->pc = 0x39DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE88u;
        // 0x39de8c: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE90u;
        goto label_39de90;
    }
    ctx->pc = 0x39DE88u;
    SET_GPR_U32(ctx, 31, 0x39DE90u);
    ctx->pc = 0x39DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE88u;
    // 0x39de8c: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B760u, 0x39DE88u, 0x39DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE90u;
label_39de90:
    // 0x39de90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_39de94:
    if (ctx->pc == 0x39DE94u) {
        ctx->pc = 0x39DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE90u;
        // 0x39de94: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE98u;
        goto label_39de98;
    }
    ctx->pc = 0x39DE90u;
    {
        const bool branch_taken_0x39de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE90u;
        // 0x39de94: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de90) {
            ctx->pc = 0x39DEC4u;
            goto label_39dec4;
        }
    }
    ctx->pc = 0x39DE98u;
label_39de98:
    // 0x39de98: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x39de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39de9c:
    // 0x39de9c: 0x8c4303f8  lw          $v1, 0x3F8($v0)
    ctx->pc = 0x39de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
label_39dea0:
    // 0x39dea0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_39dea4:
    if (ctx->pc == 0x39DEA4u) {
        ctx->pc = 0x39DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEA0u;
        // 0x39dea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEA8u;
        goto label_39dea8;
    }
    ctx->pc = 0x39DEA0u;
    {
        const bool branch_taken_0x39dea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEA0u;
        // 0x39dea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dea0) {
            ctx->pc = 0x39DEC4u;
            goto label_39dec4;
        }
    }
    ctx->pc = 0x39DEA8u;
label_39dea8:
    // 0x39dea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39dea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39deac:
    // 0x39deac: 0xa26200f0  sb          $v0, 0xF0($s3)
    ctx->pc = 0x39deacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 2));
label_39deb0:
    // 0x39deb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39deb4:
    // 0x39deb4: 0xc106802  jal         func_41A008
label_39deb8:
    if (ctx->pc == 0x39DEB8u) {
        ctx->pc = 0x39DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEB4u;
        // 0x39deb8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEBCu;
        goto label_39debc;
    }
    ctx->pc = 0x39DEB4u;
    SET_GPR_U32(ctx, 31, 0x39DEBCu);
    ctx->pc = 0x39DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEB4u;
    // 0x39deb8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x39DEB4u, 0x39DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEBCu;
label_39debc:
    // 0x39debc: 0xc04414a  jal         func_110528
label_39dec0:
    if (ctx->pc == 0x39DEC0u) {
        ctx->pc = 0x39DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEBCu;
        // 0x39dec0: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEC4u;
        goto label_39dec4;
    }
    ctx->pc = 0x39DEBCu;
    SET_GPR_U32(ctx, 31, 0x39DEC4u);
    ctx->pc = 0x39DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEBCu;
    // 0x39dec0: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x39DEBCu, 0x39DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEC4u;
label_39dec4:
    // 0x39dec4: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dec8:
    // 0x39dec8: 0x10000356  b           . + 4 + (0x356 << 2)
label_39decc:
    if (ctx->pc == 0x39DECCu) {
        ctx->pc = 0x39DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEC8u;
        // 0x39decc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DED0u;
        goto label_39ded0;
    }
    ctx->pc = 0x39DEC8u;
    {
        const bool branch_taken_0x39dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEC8u;
        // 0x39decc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dec8) {
            ctx->pc = 0x39EC24u;
            goto label_39ec24;
        }
    }
    ctx->pc = 0x39DED0u;
label_39ded0:
    // 0x39ded0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_39ded4:
    if (ctx->pc == 0x39DED4u) {
        ctx->pc = 0x39DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DED0u;
        // 0x39ded4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DED8u;
        goto label_39ded8;
    }
    ctx->pc = 0x39DED0u;
    {
        const bool branch_taken_0x39ded0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DED0u;
        // 0x39ded4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ded0) {
            ctx->pc = 0x39DF88u;
            goto label_39df88;
        }
    }
    ctx->pc = 0x39DED8u;
label_39ded8:
    // 0x39ded8: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x39ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39dedc:
    // 0x39dedc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39dee0:
    // 0x39dee0: 0xa0430410  sb          $v1, 0x410($v0)
    ctx->pc = 0x39dee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1040), (uint8_t)GPR_U32(ctx, 3));
label_39dee4:
    // 0x39dee4: 0x926400ee  lbu         $a0, 0xEE($s3)
    ctx->pc = 0x39dee4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 238)));
label_39dee8:
    // 0x39dee8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_39deec:
    if (ctx->pc == 0x39DEECu) {
        ctx->pc = 0x39DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEE8u;
        // 0x39deec: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEF0u;
        goto label_39def0;
    }
    ctx->pc = 0x39DEE8u;
    {
        const bool branch_taken_0x39dee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEE8u;
        // 0x39deec: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dee8) {
            ctx->pc = 0x39DF08u;
            goto label_39df08;
        }
    }
    ctx->pc = 0x39DEF0u;
label_39def0:
    // 0x39def0: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39def4:
    // 0x39def4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39def8:
    // 0x39def8: 0xa26300ee  sb          $v1, 0xEE($s3)
    ctx->pc = 0x39def8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 238), (uint8_t)GPR_U32(ctx, 3));
label_39defc:
    // 0x39defc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39defcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39df00:
    // 0x39df00: 0x10000349  b           . + 4 + (0x349 << 2)
label_39df04:
    if (ctx->pc == 0x39DF04u) {
        ctx->pc = 0x39DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF00u;
        // 0x39df04: 0xa444001c  sh          $a0, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF08u;
        goto label_39df08;
    }
    ctx->pc = 0x39DF00u;
    {
        const bool branch_taken_0x39df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF00u;
        // 0x39df04: 0xa444001c  sh          $a0, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df00) {
            ctx->pc = 0x39EC28u;
            goto label_39ec28;
        }
    }
    ctx->pc = 0x39DF08u;
label_39df08:
    // 0x39df08: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x39df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39df0c:
    // 0x39df0c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39df0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39df10:
    // 0x39df10: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_39df14:
    if (ctx->pc == 0x39DF14u) {
        ctx->pc = 0x39DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF10u;
        // 0x39df14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF18u;
        goto label_39df18;
    }
    ctx->pc = 0x39DF10u;
    {
        const bool branch_taken_0x39df10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF10u;
        // 0x39df14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df10) {
            ctx->pc = 0x39DF70u;
            goto label_39df70;
        }
    }
    ctx->pc = 0x39DF18u;
label_39df18:
    // 0x39df18: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39df18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39df1c:
    // 0x39df1c: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x39df1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_39df20:
    // 0x39df20: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x39df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_39df24:
    // 0x39df24: 0x0  nop
    ctx->pc = 0x39df24u;
    // NOP
label_39df28:
    // 0x39df28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39df28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39df2c:
    // 0x39df2c: 0xc0e409a  jal         func_390268
label_39df30:
    if (ctx->pc == 0x39DF30u) {
        ctx->pc = 0x39DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF2Cu;
        // 0x39df30: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF34u;
        goto label_39df34;
    }
    ctx->pc = 0x39DF2Cu;
    SET_GPR_U32(ctx, 31, 0x39DF34u);
    ctx->pc = 0x39DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DF2Cu;
    // 0x39df30: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39DF2Cu, 0x39DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF34u;
label_39df34:
    // 0x39df34: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x39df34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_39df38:
    // 0x39df38: 0xc0874fa  jal         func_21D3E8
label_39df3c:
    if (ctx->pc == 0x39DF3Cu) {
        ctx->pc = 0x39DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF38u;
        // 0x39df3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF40u;
        goto label_39df40;
    }
    ctx->pc = 0x39DF38u;
    SET_GPR_U32(ctx, 31, 0x39DF40u);
    ctx->pc = 0x39DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DF38u;
    // 0x39df3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x39DF38u, 0x39DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF40u;
label_39df40:
    // 0x39df40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39df40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39df44:
    // 0x39df44: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x39df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_39df48:
    // 0x39df48: 0xc052010  jal         func_148040
label_39df4c:
    if (ctx->pc == 0x39DF4Cu) {
        ctx->pc = 0x39DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF48u;
        // 0x39df4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF50u;
        goto label_39df50;
    }
    ctx->pc = 0x39DF48u;
    SET_GPR_U32(ctx, 31, 0x39DF50u);
    ctx->pc = 0x39DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DF48u;
    // 0x39df4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148040u, 0x39DF48u, 0x39DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF50u;
label_39df50:
    // 0x39df50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39df50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39df54:
    // 0x39df54: 0xc052010  jal         func_148040
label_39df58:
    if (ctx->pc == 0x39DF58u) {
        ctx->pc = 0x39DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF54u;
        // 0x39df58: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF5Cu;
        goto label_39df5c;
    }
    ctx->pc = 0x39DF54u;
    SET_GPR_U32(ctx, 31, 0x39DF5Cu);
    ctx->pc = 0x39DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DF54u;
    // 0x39df58: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148040u, 0x39DF54u, 0x39DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF5Cu;
label_39df5c:
    // 0x39df5c: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x39df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_39df60:
    // 0x39df60: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39df60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39df64:
    // 0x39df64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39df64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39df68:
    // 0x39df68: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_39df6c:
    if (ctx->pc == 0x39DF6Cu) {
        ctx->pc = 0x39DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF68u;
        // 0x39df6c: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF70u;
        goto label_39df70;
    }
    ctx->pc = 0x39DF68u;
    {
        const bool branch_taken_0x39df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF68u;
        // 0x39df6c: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df68) {
            ctx->pc = 0x39DF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39df28;
        }
    }
    ctx->pc = 0x39DF70u;
label_39df70:
    // 0x39df70: 0x926200e8  lbu         $v0, 0xE8($s3)
    ctx->pc = 0x39df70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 232)));
label_39df74:
    // 0x39df74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_39df78:
    if (ctx->pc == 0x39DF78u) {
        ctx->pc = 0x39DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF74u;
        // 0x39df78: 0xc66100d8  lwc1        $f1, 0xD8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DF7Cu;
        goto label_39df7c;
    }
    ctx->pc = 0x39DF74u;
    {
        const bool branch_taken_0x39df74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39df74) {
            ctx->pc = 0x39DF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DF74u;
            // 0x39df78: 0xc66100d8  lwc1        $f1, 0xD8($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DF8Cu;
            goto label_39df8c;
        }
    }
    ctx->pc = 0x39DF7Cu;
label_39df7c:
    // 0x39df7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39df80:
    // 0x39df80: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x39df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_39df84:
    // 0x39df84: 0xa04056e4  sb          $zero, 0x56E4($v0)
    ctx->pc = 0x39df84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22244), (uint8_t)GPR_U32(ctx, 0));
label_39df88:
    // 0x39df88: 0xc66100d8  lwc1        $f1, 0xD8($s3)
    ctx->pc = 0x39df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39df8c:
    // 0x39df8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39df8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39df90:
    // 0x39df90: 0x0  nop
    ctx->pc = 0x39df90u;
    // NOP
label_39df94:
    // 0x39df94: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x39df94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39df98:
    // 0x39df98: 0x0  nop
    ctx->pc = 0x39df98u;
    // NOP
label_39df9c:
    // 0x39df9c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_39dfa0:
    if (ctx->pc == 0x39DFA0u) {
        ctx->pc = 0x39DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF9Cu;
        // 0x39dfa0: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFA4u;
        goto label_39dfa4;
    }
    ctx->pc = 0x39DF9Cu;
    {
        const bool branch_taken_0x39df9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF9Cu;
        // 0x39dfa0: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df9c) {
            ctx->pc = 0x39E004u;
            goto label_39e004;
        }
    }
    ctx->pc = 0x39DFA4u;
label_39dfa4:
    // 0x39dfa4: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x39dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dfa8:
    // 0x39dfa8: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39dfa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_39dfac:
    // 0x39dfac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_39dfb0:
    if (ctx->pc == 0x39DFB0u) {
        ctx->pc = 0x39DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFACu;
        // 0x39dfb0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFB4u;
        goto label_39dfb4;
    }
    ctx->pc = 0x39DFACu;
    {
        const bool branch_taken_0x39dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFACu;
        // 0x39dfb0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfac) {
            ctx->pc = 0x39E000u;
            goto label_39e000;
        }
    }
    ctx->pc = 0x39DFB4u;
label_39dfb4:
    // 0x39dfb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39dfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dfb8:
    // 0x39dfb8: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x39dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39dfbc:
    // 0x39dfbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39dfc0:
    // 0x39dfc0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x39dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39dfc4:
    // 0x39dfc4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_39dfc8:
    if (ctx->pc == 0x39DFC8u) {
        ctx->pc = 0x39DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFC4u;
        // 0x39dfc8: 0x266600c0  addiu       $a2, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFCCu;
        goto label_39dfcc;
    }
    ctx->pc = 0x39DFC4u;
    {
        const bool branch_taken_0x39dfc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFC4u;
        // 0x39dfc8: 0x266600c0  addiu       $a2, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfc4) {
            ctx->pc = 0x39DFE8u;
            goto label_39dfe8;
        }
    }
    ctx->pc = 0x39DFCCu;
label_39dfcc:
    // 0x39dfcc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x39dfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_39dfd0:
    // 0x39dfd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x39dfd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_39dfd4:
    // 0x39dfd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39dfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39dfd8:
    // 0x39dfd8: 0xc0e7586  jal         func_39D618
label_39dfdc:
    if (ctx->pc == 0x39DFDCu) {
        ctx->pc = 0x39DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFD8u;
        // 0x39dfdc: 0x266700b0  addiu       $a3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFE0u;
        goto label_39dfe0;
    }
    ctx->pc = 0x39DFD8u;
    SET_GPR_U32(ctx, 31, 0x39DFE0u);
    ctx->pc = 0x39DFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DFD8u;
    // 0x39dfdc: 0x266700b0  addiu       $a3, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D618u, 0x39DFD8u, 0x39DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFE0u;
label_39dfe0:
    // 0x39dfe0: 0x504000ce  beql        $v0, $zero, . + 4 + (0xCE << 2)
label_39dfe4:
    if (ctx->pc == 0x39DFE4u) {
        ctx->pc = 0x39DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFE0u;
        // 0x39dfe4: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DFE8u;
        goto label_39dfe8;
    }
    ctx->pc = 0x39DFE0u;
    {
        const bool branch_taken_0x39dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dfe0) {
            ctx->pc = 0x39DFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFE0u;
            // 0x39dfe4: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E31Cu;
            goto label_39e31c;
        }
    }
    ctx->pc = 0x39DFE8u;
label_39dfe8:
    // 0x39dfe8: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x39dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39dfec:
    // 0x39dfec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39dfecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39dff0:
    // 0x39dff0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39dff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_39dff4:
    // 0x39dff4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39dff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39dff8:
    // 0x39dff8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_39dffc:
    if (ctx->pc == 0x39DFFCu) {
        ctx->pc = 0x39DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFF8u;
        // 0x39dffc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E000u;
        goto label_39e000;
    }
    ctx->pc = 0x39DFF8u;
    {
        const bool branch_taken_0x39dff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFF8u;
        // 0x39dffc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dff8) {
            ctx->pc = 0x39DFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dfb8;
        }
    }
    ctx->pc = 0x39E000u;
label_39e000:
    // 0x39e000: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x39e000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_39e004:
    // 0x39e004: 0x8e6500fc  lw          $a1, 0xFC($s3)
    ctx->pc = 0x39e004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_39e008:
    // 0x39e008: 0xc072b98  jal         func_1CAE60
label_39e00c:
    if (ctx->pc == 0x39E00Cu) {
        ctx->pc = 0x39E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E008u;
        // 0x39e00c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E010u;
        goto label_39e010;
    }
    ctx->pc = 0x39E008u;
    SET_GPR_U32(ctx, 31, 0x39E010u);
    ctx->pc = 0x39E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E008u;
    // 0x39e00c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAE60u, 0x39E008u, 0x39E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E010u;
label_39e010:
    // 0x39e010: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_39e014:
    if (ctx->pc == 0x39E014u) {
        ctx->pc = 0x39E018u;
        goto label_39e018;
    }
    ctx->pc = 0x39E010u;
    {
        const bool branch_taken_0x39e010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e010) {
            ctx->pc = 0x39E0A0u;
            goto label_39e0a0;
        }
    }
    ctx->pc = 0x39E018u;
label_39e018:
    // 0x39e018: 0xc047e6c  jal         func_11F9B0
label_39e01c:
    if (ctx->pc == 0x39E01Cu) {
        ctx->pc = 0x39E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E018u;
        // 0x39e01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E020u;
        goto label_39e020;
    }
    ctx->pc = 0x39E018u;
    SET_GPR_U32(ctx, 31, 0x39E020u);
    ctx->pc = 0x39E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E018u;
    // 0x39e01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x39E018u, 0x39E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E020u;
label_39e020:
    // 0x39e020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39e020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e024:
    // 0x39e024: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x39e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_39e028:
    // 0x39e028: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_39e02c:
    if (ctx->pc == 0x39E02Cu) {
        ctx->pc = 0x39E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E028u;
        // 0x39e02c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E030u;
        goto label_39e030;
    }
    ctx->pc = 0x39E028u;
    {
        const bool branch_taken_0x39e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E028u;
        // 0x39e02c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e028) {
            ctx->pc = 0x39E050u;
            goto label_39e050;
        }
    }
    ctx->pc = 0x39E030u;
label_39e030:
    // 0x39e030: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x39e030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_39e034:
    // 0x39e034: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x39e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_39e038:
    // 0x39e038: 0x40f809  jalr        $v0
label_39e03c:
    if (ctx->pc == 0x39E03Cu) {
        ctx->pc = 0x39E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E038u;
        // 0x39e03c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E040u;
        goto label_39e040;
    }
    ctx->pc = 0x39E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E040u);
        ctx->pc = 0x39E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E038u;
        // 0x39e03c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E038u, 0x39E040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E040u;
label_39e040:
    // 0x39e040: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x39e040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39e044:
    // 0x39e044: 0xae700090  sw          $s0, 0x90($s3)
    ctx->pc = 0x39e044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
label_39e048:
    // 0x39e048: 0x7e630080  sq          $v1, 0x80($s3)
    ctx->pc = 0x39e048u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 3));
label_39e04c:
    // 0x39e04c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39e050:
    // 0x39e050: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e054:
    // 0x39e054: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x39e054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_39e058:
    // 0x39e058: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x39e058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_39e05c:
    // 0x39e05c: 0x8c6601bc  lw          $a2, 0x1BC($v1)
    ctx->pc = 0x39e05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_39e060:
    // 0x39e060: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x39e060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_39e064:
    // 0x39e064: 0xc0f809  jalr        $a2
label_39e068:
    if (ctx->pc == 0x39E068u) {
        ctx->pc = 0x39E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E064u;
        // 0x39e068: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E06Cu;
        goto label_39e06c;
    }
    ctx->pc = 0x39E064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39E06Cu);
        ctx->pc = 0x39E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E064u;
        // 0x39e068: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E064u, 0x39E06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E06Cu;
label_39e06c:
    // 0x39e06c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e070:
    // 0x39e070: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39e074:
    // 0x39e074: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39e074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_39e078:
    // 0x39e078: 0xa462001c  sh          $v0, 0x1C($v1)
    ctx->pc = 0x39e078u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
label_39e07c:
    // 0x39e07c: 0x8c85b8b8  lw          $a1, -0x4748($a0)
    ctx->pc = 0x39e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949048)));
label_39e080:
    // 0x39e080: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39e084:
    // 0x39e084: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39e084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39e088:
    // 0x39e088: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39e08c:
    // 0x39e08c: 0x40f809  jalr        $v0
label_39e090:
    if (ctx->pc == 0x39E090u) {
        ctx->pc = 0x39E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E08Cu;
        // 0x39e090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E094u;
        goto label_39e094;
    }
    ctx->pc = 0x39E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E094u);
        ctx->pc = 0x39E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E08Cu;
        // 0x39e090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E08Cu, 0x39E094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E094u;
label_39e094:
    // 0x39e094: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39e094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39e098:
    // 0x39e098: 0x100002e3  b           . + 4 + (0x2E3 << 2)
label_39e09c:
    if (ctx->pc == 0x39E09Cu) {
        ctx->pc = 0x39E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E098u;
        // 0x39e09c: 0xac62c7d8  sw          $v0, -0x3828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0A0u;
        goto label_39e0a0;
    }
    ctx->pc = 0x39E098u;
    {
        const bool branch_taken_0x39e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E098u;
        // 0x39e09c: 0xac62c7d8  sw          $v0, -0x3828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e098) {
            ctx->pc = 0x39EC28u;
            goto label_39ec28;
        }
    }
    ctx->pc = 0x39E0A0u;
label_39e0a0:
    // 0x39e0a0: 0xc0e8550  jal         func_3A1540
label_39e0a4:
    if (ctx->pc == 0x39E0A4u) {
        ctx->pc = 0x39E0A8u;
        goto label_39e0a8;
    }
    ctx->pc = 0x39E0A0u;
    SET_GPR_U32(ctx, 31, 0x39E0A8u);
    ctx->pc = 0x3A1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1540u, 0x39E0A0u, 0x39E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0A8u;
label_39e0a8:
    // 0x39e0a8: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e0ac:
    // 0x39e0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39e0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e0b0:
    // 0x39e0b0: 0x90620022  lbu         $v0, 0x22($v1)
    ctx->pc = 0x39e0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_39e0b4:
    // 0x39e0b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39e0b8:
    if (ctx->pc == 0x39E0B8u) {
        ctx->pc = 0x39E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0B4u;
        // 0x39e0b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0BCu;
        goto label_39e0bc;
    }
    ctx->pc = 0x39E0B4u;
    {
        const bool branch_taken_0x39e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0B4u;
        // 0x39e0b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0b4) {
            ctx->pc = 0x39E0D8u;
            goto label_39e0d8;
        }
    }
    ctx->pc = 0x39E0BCu;
label_39e0bc:
    // 0x39e0bc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_39e0c0:
    if (ctx->pc == 0x39E0C0u) {
        ctx->pc = 0x39E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0BCu;
        // 0x39e0c0: 0x8c452af4  lw          $a1, 0x2AF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0C4u;
        goto label_39e0c4;
    }
    ctx->pc = 0x39E0BCu;
    {
        const bool branch_taken_0x39e0bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0BCu;
        // 0x39e0c0: 0x8c452af4  lw          $a1, 0x2AF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0bc) {
            ctx->pc = 0x39E0DCu;
            goto label_39e0dc;
        }
    }
    ctx->pc = 0x39E0C4u;
label_39e0c4:
    // 0x39e0c4: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x39e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_39e0c8:
    // 0x39e0c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_39e0cc:
    if (ctx->pc == 0x39E0CCu) {
        ctx->pc = 0x39E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0C8u;
        // 0x39e0cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0D0u;
        goto label_39e0d0;
    }
    ctx->pc = 0x39E0C8u;
    {
        const bool branch_taken_0x39e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0C8u;
        // 0x39e0cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0c8) {
            ctx->pc = 0x39E0D8u;
            goto label_39e0d8;
        }
    }
    ctx->pc = 0x39E0D0u;
label_39e0d0:
    // 0x39e0d0: 0x100002d4  b           . + 4 + (0x2D4 << 2)
label_39e0d4:
    if (ctx->pc == 0x39E0D4u) {
        ctx->pc = 0x39E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0D0u;
        // 0x39e0d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0D8u;
        goto label_39e0d8;
    }
    ctx->pc = 0x39E0D0u;
    {
        const bool branch_taken_0x39e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0D0u;
        // 0x39e0d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0d0) {
            ctx->pc = 0x39EC24u;
            goto label_39ec24;
        }
    }
    ctx->pc = 0x39E0D8u;
label_39e0d8:
    // 0x39e0d8: 0x8c452af4  lw          $a1, 0x2AF4($v0)
    ctx->pc = 0x39e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10996)));
label_39e0dc:
    // 0x39e0dc: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_39e0e0:
    if (ctx->pc == 0x39E0E0u) {
        ctx->pc = 0x39E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0DCu;
        // 0x39e0e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0E4u;
        goto label_39e0e4;
    }
    ctx->pc = 0x39E0DCu;
    {
        const bool branch_taken_0x39e0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0DCu;
        // 0x39e0e0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0dc) {
            ctx->pc = 0x39E120u;
            goto label_39e120;
        }
    }
    ctx->pc = 0x39E0E4u;
label_39e0e4:
    // 0x39e0e4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x39e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_39e0e8:
    // 0x39e0e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39e0ec:
    // 0x39e0ec: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x39e0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_39e0f0:
    // 0x39e0f0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x39e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_39e0f4:
    // 0x39e0f4: 0x40f809  jalr        $v0
label_39e0f8:
    if (ctx->pc == 0x39E0F8u) {
        ctx->pc = 0x39E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0F4u;
        // 0x39e0f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E0FCu;
        goto label_39e0fc;
    }
    ctx->pc = 0x39E0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E0FCu);
        ctx->pc = 0x39E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0F4u;
        // 0x39e0f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E0F4u, 0x39E0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E0FCu;
label_39e0fc:
    // 0x39e0fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39e100:
    if (ctx->pc == 0x39E100u) {
        ctx->pc = 0x39E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0FCu;
        // 0x39e100: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E104u;
        goto label_39e104;
    }
    ctx->pc = 0x39E0FCu;
    {
        const bool branch_taken_0x39e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0FCu;
        // 0x39e100: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0fc) {
            ctx->pc = 0x39E120u;
            goto label_39e120;
        }
    }
    ctx->pc = 0x39E104u;
label_39e104:
    // 0x39e104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e108:
    // 0x39e108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e10c:
    // 0x39e10c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x39e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39e110:
    // 0x39e110: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x39e110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_39e114:
    // 0x39e114: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x39e114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_39e118:
    // 0x39e118: 0x60f809  jalr        $v1
label_39e11c:
    if (ctx->pc == 0x39E11Cu) {
        ctx->pc = 0x39E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E118u;
        // 0x39e11c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E120u;
        goto label_39e120;
    }
    ctx->pc = 0x39E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E120u);
        ctx->pc = 0x39E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E118u;
        // 0x39e11c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E118u, 0x39E120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E120u;
label_39e120:
    // 0x39e120: 0xa26000ec  sb          $zero, 0xEC($s3)
    ctx->pc = 0x39e120u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 0));
label_39e124:
    // 0x39e124: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x39e124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39e128:
    // 0x39e128: 0xa66000f2  sh          $zero, 0xF2($s3)
    ctx->pc = 0x39e128u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 0));
label_39e12c:
    // 0x39e12c: 0x8e6300a4  lw          $v1, 0xA4($s3)
    ctx->pc = 0x39e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_39e130:
    // 0x39e130: 0x926400eb  lbu         $a0, 0xEB($s3)
    ctx->pc = 0x39e130u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 235)));
label_39e134:
    // 0x39e134: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39e138:
    // 0x39e138: 0x8e6600a0  lw          $a2, 0xA0($s3)
    ctx->pc = 0x39e138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e13c:
    // 0x39e13c: 0x4280a  movz        $a1, $zero, $a0
    ctx->pc = 0x39e13cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_39e140:
    // 0x39e140: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x39e140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_39e144:
    // 0x39e144: 0x34a40008  ori         $a0, $a1, 0x8
    ctx->pc = 0x39e144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_39e148:
    // 0x39e148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e14c:
    // 0x39e14c: 0x90c30022  lbu         $v1, 0x22($a2)
    ctx->pc = 0x39e14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 34)));
label_39e150:
    // 0x39e150: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x39e150u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_39e154:
    // 0x39e154: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
label_39e158:
    if (ctx->pc == 0x39E158u) {
        ctx->pc = 0x39E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E154u;
        // 0x39e158: 0xafa50030  sw          $a1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E15Cu;
        goto label_39e15c;
    }
    ctx->pc = 0x39E154u;
    {
        const bool branch_taken_0x39e154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E154u;
        // 0x39e158: 0xafa50030  sw          $a1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e154) {
            ctx->pc = 0x39E490u;
            goto label_39e490;
        }
    }
    ctx->pc = 0x39E15Cu;
label_39e15c:
    // 0x39e15c: 0x16400075  bnez        $s2, . + 4 + (0x75 << 2)
label_39e160:
    if (ctx->pc == 0x39E160u) {
        ctx->pc = 0x39E164u;
        goto label_39e164;
    }
    ctx->pc = 0x39E15Cu;
    {
        const bool branch_taken_0x39e15c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e15c) {
            ctx->pc = 0x39E334u;
            goto label_39e334;
        }
    }
    ctx->pc = 0x39E164u;
label_39e164:
    // 0x39e164: 0x8cc50098  lw          $a1, 0x98($a2)
    ctx->pc = 0x39e164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
label_39e168:
    // 0x39e168: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39e16c:
    // 0x39e16c: 0xc04786c  jal         func_11E1B0
label_39e170:
    if (ctx->pc == 0x39E170u) {
        ctx->pc = 0x39E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E16Cu;
        // 0x39e170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E174u;
        goto label_39e174;
    }
    ctx->pc = 0x39E16Cu;
    SET_GPR_U32(ctx, 31, 0x39E174u);
    ctx->pc = 0x39E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E16Cu;
    // 0x39e170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x39E16Cu, 0x39E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E174u;
label_39e174:
    // 0x39e174: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39e174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e178:
    // 0x39e178: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39e178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e17c:
    // 0x39e17c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39e180:
    // 0x39e180: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x39e180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_39e184:
    // 0x39e184: 0x84440188  lh          $a0, 0x188($v0)
    ctx->pc = 0x39e184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 392)));
label_39e188:
    // 0x39e188: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x39e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_39e18c:
    // 0x39e18c: 0x60f809  jalr        $v1
label_39e190:
    if (ctx->pc == 0x39E190u) {
        ctx->pc = 0x39E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E18Cu;
        // 0x39e190: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E194u;
        goto label_39e194;
    }
    ctx->pc = 0x39E18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E194u);
        ctx->pc = 0x39E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E18Cu;
        // 0x39e190: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E18Cu, 0x39E194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E194u;
label_39e194:
    // 0x39e194: 0xc047e6c  jal         func_11F9B0
label_39e198:
    if (ctx->pc == 0x39E198u) {
        ctx->pc = 0x39E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E194u;
        // 0x39e198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E19Cu;
        goto label_39e19c;
    }
    ctx->pc = 0x39E194u;
    SET_GPR_U32(ctx, 31, 0x39E19Cu);
    ctx->pc = 0x39E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E194u;
    // 0x39e198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x39E194u, 0x39E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E19Cu;
label_39e19c:
    // 0x39e19c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_39e1a0:
    if (ctx->pc == 0x39E1A0u) {
        ctx->pc = 0x39E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E19Cu;
        // 0x39e1a0: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E1A4u;
        goto label_39e1a4;
    }
    ctx->pc = 0x39E19Cu;
    {
        const bool branch_taken_0x39e19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e19c) {
            ctx->pc = 0x39E1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E19Cu;
            // 0x39e1a0: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E1B4u;
            goto label_39e1b4;
        }
    }
    ctx->pc = 0x39E1A4u;
label_39e1a4:
    // 0x39e1a4: 0xc0e8556  jal         func_3A1558
label_39e1a8:
    if (ctx->pc == 0x39E1A8u) {
        ctx->pc = 0x39E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1A4u;
        // 0x39e1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E1ACu;
        goto label_39e1ac;
    }
    ctx->pc = 0x39E1A4u;
    SET_GPR_U32(ctx, 31, 0x39E1ACu);
    ctx->pc = 0x39E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1A4u;
    // 0x39e1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1558u, 0x39E1A4u, 0x39E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1ACu;
label_39e1ac:
    // 0x39e1ac: 0x10000061  b           . + 4 + (0x61 << 2)
label_39e1b0:
    if (ctx->pc == 0x39E1B0u) {
        ctx->pc = 0x39E1B4u;
        goto label_39e1b4;
    }
    ctx->pc = 0x39E1ACu;
    {
        const bool branch_taken_0x39e1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e1ac) {
            ctx->pc = 0x39E334u;
            goto label_39e334;
        }
    }
    ctx->pc = 0x39E1B4u;
label_39e1b4:
    // 0x39e1b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39e1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e1b8:
    // 0x39e1b8: 0x861100b0  lh          $s1, 0xB0($s0)
    ctx->pc = 0x39e1b8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
label_39e1bc:
    // 0x39e1bc: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x39e1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_39e1c0:
    // 0x39e1c0: 0xc047e6c  jal         func_11F9B0
label_39e1c4:
    if (ctx->pc == 0x39E1C4u) {
        ctx->pc = 0x39E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1C0u;
        // 0x39e1c4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E1C8u;
        goto label_39e1c8;
    }
    ctx->pc = 0x39E1C0u;
    SET_GPR_U32(ctx, 31, 0x39E1C8u);
    ctx->pc = 0x39E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1C0u;
    // 0x39e1c4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x39E1C0u, 0x39E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1C8u;
label_39e1c8:
    // 0x39e1c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39e1cc:
    // 0x39e1cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39e1d0:
    // 0x39e1d0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x39e1d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_39e1d4:
    // 0x39e1d4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x39e1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_39e1d8:
    // 0x39e1d8: 0xc0f809  jalr        $a2
label_39e1dc:
    if (ctx->pc == 0x39E1DCu) {
        ctx->pc = 0x39E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1D8u;
        // 0x39e1dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E1E0u;
        goto label_39e1e0;
    }
    ctx->pc = 0x39E1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39E1E0u);
        ctx->pc = 0x39E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1D8u;
        // 0x39e1dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E1D8u, 0x39E1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E1E0u;
label_39e1e0:
    // 0x39e1e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39e1e4:
    // 0x39e1e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39e1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39e1e8:
    // 0x39e1e8: 0x40f809  jalr        $v0
label_39e1ec:
    if (ctx->pc == 0x39E1ECu) {
        ctx->pc = 0x39E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1E8u;
        // 0x39e1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E1F0u;
        goto label_39e1f0;
    }
    ctx->pc = 0x39E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E1F0u);
        ctx->pc = 0x39E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1E8u;
        // 0x39e1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E1E8u, 0x39E1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E1F0u;
label_39e1f0:
    // 0x39e1f0: 0xc0e8556  jal         func_3A1558
label_39e1f4:
    if (ctx->pc == 0x39E1F4u) {
        ctx->pc = 0x39E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1F0u;
        // 0x39e1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E1F8u;
        goto label_39e1f8;
    }
    ctx->pc = 0x39E1F0u;
    SET_GPR_U32(ctx, 31, 0x39E1F8u);
    ctx->pc = 0x39E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1F0u;
    // 0x39e1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1558u, 0x39E1F0u, 0x39E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1F8u;
label_39e1f8:
    // 0x39e1f8: 0xc047e72  jal         func_11F9C8
label_39e1fc:
    if (ctx->pc == 0x39E1FCu) {
        ctx->pc = 0x39E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1F8u;
        // 0x39e1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E200u;
        goto label_39e200;
    }
    ctx->pc = 0x39E1F8u;
    SET_GPR_U32(ctx, 31, 0x39E200u);
    ctx->pc = 0x39E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1F8u;
    // 0x39e1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E1F8u, 0x39E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E200u;
label_39e200:
    // 0x39e200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39e204:
    // 0x39e204: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39e204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39e208:
    // 0x39e208: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x39e208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39e20c:
    // 0x39e20c: 0xa0f809  jalr        $a1
label_39e210:
    if (ctx->pc == 0x39E210u) {
        ctx->pc = 0x39E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E20Cu;
        // 0x39e210: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E214u;
        goto label_39e214;
    }
    ctx->pc = 0x39E20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39E214u);
        ctx->pc = 0x39E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E20Cu;
        // 0x39e210: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E20Cu, 0x39E214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E214u;
label_39e214:
    // 0x39e214: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39e218:
    // 0x39e218: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_39e21c:
    if (ctx->pc == 0x39E21Cu) {
        ctx->pc = 0x39E220u;
        goto label_39e220;
    }
    ctx->pc = 0x39E218u;
    {
        const bool branch_taken_0x39e218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e218) {
            ctx->pc = 0x39E238u;
            goto label_39e238;
        }
    }
    ctx->pc = 0x39E220u;
label_39e220:
    // 0x39e220: 0xc047e72  jal         func_11F9C8
label_39e224:
    if (ctx->pc == 0x39E224u) {
        ctx->pc = 0x39E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E220u;
        // 0x39e224: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E228u;
        goto label_39e228;
    }
    ctx->pc = 0x39E220u;
    SET_GPR_U32(ctx, 31, 0x39E228u);
    ctx->pc = 0x39E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E220u;
    // 0x39e224: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E220u, 0x39E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E228u;
label_39e228:
    // 0x39e228: 0xc048114  jal         func_120450
label_39e22c:
    if (ctx->pc == 0x39E22Cu) {
        ctx->pc = 0x39E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E228u;
        // 0x39e22c: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E230u;
        goto label_39e230;
    }
    ctx->pc = 0x39E228u;
    SET_GPR_U32(ctx, 31, 0x39E230u);
    ctx->pc = 0x39E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E228u;
    // 0x39e22c: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x39E228u, 0x39E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E230u;
label_39e230:
    // 0x39e230: 0x10000040  b           . + 4 + (0x40 << 2)
label_39e234:
    if (ctx->pc == 0x39E234u) {
        ctx->pc = 0x39E238u;
        goto label_39e238;
    }
    ctx->pc = 0x39E230u;
    {
        const bool branch_taken_0x39e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e230) {
            ctx->pc = 0x39E334u;
            goto label_39e334;
        }
    }
    ctx->pc = 0x39E238u;
label_39e238:
    // 0x39e238: 0xc047e72  jal         func_11F9C8
label_39e23c:
    if (ctx->pc == 0x39E23Cu) {
        ctx->pc = 0x39E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E238u;
        // 0x39e23c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E240u;
        goto label_39e240;
    }
    ctx->pc = 0x39E238u;
    SET_GPR_U32(ctx, 31, 0x39E240u);
    ctx->pc = 0x39E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E238u;
    // 0x39e23c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E238u, 0x39E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E240u;
label_39e240:
    // 0x39e240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39e244:
    // 0x39e244: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39e244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39e248:
    // 0x39e248: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x39e248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39e24c:
    // 0x39e24c: 0xa0f809  jalr        $a1
label_39e250:
    if (ctx->pc == 0x39E250u) {
        ctx->pc = 0x39E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E24Cu;
        // 0x39e250: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E254u;
        goto label_39e254;
    }
    ctx->pc = 0x39E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39E254u);
        ctx->pc = 0x39E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E24Cu;
        // 0x39e250: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E24Cu, 0x39E254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E254u;
label_39e254:
    // 0x39e254: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x39e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39e258:
    // 0x39e258: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_39e25c:
    if (ctx->pc == 0x39E25Cu) {
        ctx->pc = 0x39E260u;
        goto label_39e260;
    }
    ctx->pc = 0x39E258u;
    {
        const bool branch_taken_0x39e258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e258) {
            ctx->pc = 0x39E278u;
            goto label_39e278;
        }
    }
    ctx->pc = 0x39E260u;
label_39e260:
    // 0x39e260: 0xc047e72  jal         func_11F9C8
label_39e264:
    if (ctx->pc == 0x39E264u) {
        ctx->pc = 0x39E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E260u;
        // 0x39e264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E268u;
        goto label_39e268;
    }
    ctx->pc = 0x39E260u;
    SET_GPR_U32(ctx, 31, 0x39E268u);
    ctx->pc = 0x39E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E260u;
    // 0x39e264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E260u, 0x39E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E268u;
label_39e268:
    // 0x39e268: 0xc048114  jal         func_120450
label_39e26c:
    if (ctx->pc == 0x39E26Cu) {
        ctx->pc = 0x39E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E268u;
        // 0x39e26c: 0x8c440230  lw          $a0, 0x230($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E270u;
        goto label_39e270;
    }
    ctx->pc = 0x39E268u;
    SET_GPR_U32(ctx, 31, 0x39E270u);
    ctx->pc = 0x39E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E268u;
    // 0x39e26c: 0x8c440230  lw          $a0, 0x230($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x39E268u, 0x39E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E270u;
label_39e270:
    // 0x39e270: 0x10000030  b           . + 4 + (0x30 << 2)
label_39e274:
    if (ctx->pc == 0x39E274u) {
        ctx->pc = 0x39E278u;
        goto label_39e278;
    }
    ctx->pc = 0x39E270u;
    {
        const bool branch_taken_0x39e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e270) {
            ctx->pc = 0x39E334u;
            goto label_39e334;
        }
    }
    ctx->pc = 0x39E278u;
label_39e278:
    // 0x39e278: 0xc047e72  jal         func_11F9C8
label_39e27c:
    if (ctx->pc == 0x39E27Cu) {
        ctx->pc = 0x39E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E278u;
        // 0x39e27c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E280u;
        goto label_39e280;
    }
    ctx->pc = 0x39E278u;
    SET_GPR_U32(ctx, 31, 0x39E280u);
    ctx->pc = 0x39E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E278u;
    // 0x39e27c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E278u, 0x39E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E280u;
label_39e280:
    // 0x39e280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39e284:
    // 0x39e284: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39e284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39e288:
    // 0x39e288: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x39e288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39e28c:
    // 0x39e28c: 0xa0f809  jalr        $a1
label_39e290:
    if (ctx->pc == 0x39E290u) {
        ctx->pc = 0x39E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E28Cu;
        // 0x39e290: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E294u;
        goto label_39e294;
    }
    ctx->pc = 0x39E28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39E294u);
        ctx->pc = 0x39E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E28Cu;
        // 0x39e290: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E28Cu, 0x39E294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E294u;
label_39e294:
    // 0x39e294: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39e298:
    // 0x39e298: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_39e29c:
    if (ctx->pc == 0x39E29Cu) {
        ctx->pc = 0x39E2A0u;
        goto label_39e2a0;
    }
    ctx->pc = 0x39E298u;
    {
        const bool branch_taken_0x39e298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e298) {
            ctx->pc = 0x39E2B8u;
            goto label_39e2b8;
        }
    }
    ctx->pc = 0x39E2A0u;
label_39e2a0:
    // 0x39e2a0: 0xc047e72  jal         func_11F9C8
label_39e2a4:
    if (ctx->pc == 0x39E2A4u) {
        ctx->pc = 0x39E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2A0u;
        // 0x39e2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E2A8u;
        goto label_39e2a8;
    }
    ctx->pc = 0x39E2A0u;
    SET_GPR_U32(ctx, 31, 0x39E2A8u);
    ctx->pc = 0x39E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2A0u;
    // 0x39e2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E2A0u, 0x39E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2A8u;
label_39e2a8:
    // 0x39e2a8: 0xc048114  jal         func_120450
label_39e2ac:
    if (ctx->pc == 0x39E2ACu) {
        ctx->pc = 0x39E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2A8u;
        // 0x39e2ac: 0x8c440240  lw          $a0, 0x240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E2B0u;
        goto label_39e2b0;
    }
    ctx->pc = 0x39E2A8u;
    SET_GPR_U32(ctx, 31, 0x39E2B0u);
    ctx->pc = 0x39E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2A8u;
    // 0x39e2ac: 0x8c440240  lw          $a0, 0x240($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x39E2A8u, 0x39E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2B0u;
label_39e2b0:
    // 0x39e2b0: 0x10000020  b           . + 4 + (0x20 << 2)
label_39e2b4:
    if (ctx->pc == 0x39E2B4u) {
        ctx->pc = 0x39E2B8u;
        goto label_39e2b8;
    }
    ctx->pc = 0x39E2B0u;
    {
        const bool branch_taken_0x39e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e2b0) {
            ctx->pc = 0x39E334u;
            goto label_39e334;
        }
    }
    ctx->pc = 0x39E2B8u;
label_39e2b8:
    // 0x39e2b8: 0xc047e72  jal         func_11F9C8
label_39e2bc:
    if (ctx->pc == 0x39E2BCu) {
        ctx->pc = 0x39E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2B8u;
        // 0x39e2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E2C0u;
        goto label_39e2c0;
    }
    ctx->pc = 0x39E2B8u;
    SET_GPR_U32(ctx, 31, 0x39E2C0u);
    ctx->pc = 0x39E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2B8u;
    // 0x39e2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E2B8u, 0x39E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2C0u;
label_39e2c0:
    // 0x39e2c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39e2c4:
    // 0x39e2c4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x39e2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_39e2c8:
    // 0x39e2c8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x39e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_39e2cc:
    // 0x39e2cc: 0xa0f809  jalr        $a1
label_39e2d0:
    if (ctx->pc == 0x39E2D0u) {
        ctx->pc = 0x39E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2CCu;
        // 0x39e2d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E2D4u;
        goto label_39e2d4;
    }
    ctx->pc = 0x39E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39E2D4u);
        ctx->pc = 0x39E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2CCu;
        // 0x39e2d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E2CCu, 0x39E2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E2D4u;
label_39e2d4:
    // 0x39e2d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39e2d8:
    // 0x39e2d8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_39e2dc:
    if (ctx->pc == 0x39E2DCu) {
        ctx->pc = 0x39E2E0u;
        goto label_39e2e0;
    }
    ctx->pc = 0x39E2D8u;
    {
        const bool branch_taken_0x39e2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e2d8) {
            ctx->pc = 0x39E324u;
            goto label_39e324;
        }
    }
    ctx->pc = 0x39E2E0u;
label_39e2e0:
    // 0x39e2e0: 0xc047e72  jal         func_11F9C8
label_39e2e4:
    if (ctx->pc == 0x39E2E4u) {
        ctx->pc = 0x39E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2E0u;
        // 0x39e2e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E2E8u;
        goto label_39e2e8;
    }
    ctx->pc = 0x39E2E0u;
    SET_GPR_U32(ctx, 31, 0x39E2E8u);
    ctx->pc = 0x39E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2E0u;
    // 0x39e2e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E2E0u, 0x39E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2E8u;
label_39e2e8:
    // 0x39e2e8: 0xc048114  jal         func_120450
label_39e2ec:
    if (ctx->pc == 0x39E2ECu) {
        ctx->pc = 0x39E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2E8u;
        // 0x39e2ec: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E2F0u;
        goto label_39e2f0;
    }
    ctx->pc = 0x39E2E8u;
    SET_GPR_U32(ctx, 31, 0x39E2F0u);
    ctx->pc = 0x39E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2E8u;
    // 0x39e2ec: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x39E2E8u, 0x39E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2F0u;
label_39e2f0:
    // 0x39e2f0: 0x10000010  b           . + 4 + (0x10 << 2)
label_39e2f4:
    if (ctx->pc == 0x39E2F4u) {
        ctx->pc = 0x39E2F8u;
        goto label_39e2f8;
    }
    ctx->pc = 0x39E2F0u;
    {
        const bool branch_taken_0x39e2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e2f0) {
            ctx->pc = 0x39E334u;
            goto label_39e334;
        }
    }
    ctx->pc = 0x39E2F8u;
label_39e2f8:
    // 0x39e2f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39e2fc:
    // 0x39e2fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39e300:
    // 0x39e300: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x39e300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_39e304:
    // 0x39e304: 0xa446001c  sh          $a2, 0x1C($v0)
    ctx->pc = 0x39e304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 6));
label_39e308:
    // 0x39e308: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39e308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39e30c:
    // 0x39e30c: 0xc06297c  jal         func_18A5F0
label_39e310:
    if (ctx->pc == 0x39E310u) {
        ctx->pc = 0x39E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E30Cu;
        // 0x39e310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E314u;
        goto label_39e314;
    }
    ctx->pc = 0x39E30Cu;
    SET_GPR_U32(ctx, 31, 0x39E314u);
    ctx->pc = 0x39E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E30Cu;
    // 0x39e310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5F0u, 0x39E30Cu, 0x39E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E314u;
label_39e314:
    // 0x39e314: 0x10000245  b           . + 4 + (0x245 << 2)
label_39e318:
    if (ctx->pc == 0x39E318u) {
        ctx->pc = 0x39E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E314u;
        // 0x39e318: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E31Cu;
        goto label_39e31c;
    }
    ctx->pc = 0x39E314u;
    {
        const bool branch_taken_0x39e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E314u;
        // 0x39e318: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e314) {
            ctx->pc = 0x39EC2Cu;
            goto label_39ec2c;
        }
    }
    ctx->pc = 0x39E31Cu;
label_39e31c:
    // 0x39e31c: 0x10000241  b           . + 4 + (0x241 << 2)
label_39e320:
    if (ctx->pc == 0x39E320u) {
        ctx->pc = 0x39E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E31Cu;
        // 0x39e320: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E324u;
        goto label_39e324;
    }
    ctx->pc = 0x39E31Cu;
    {
        const bool branch_taken_0x39e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E31Cu;
        // 0x39e320: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e31c) {
            ctx->pc = 0x39EC24u;
            goto label_39ec24;
        }
    }
    ctx->pc = 0x39E324u;
label_39e324:
    // 0x39e324: 0xc047e72  jal         func_11F9C8
label_39e328:
    if (ctx->pc == 0x39E328u) {
        ctx->pc = 0x39E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E324u;
        // 0x39e328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E32Cu;
        goto label_39e32c;
    }
    ctx->pc = 0x39E324u;
    SET_GPR_U32(ctx, 31, 0x39E32Cu);
    ctx->pc = 0x39E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E324u;
    // 0x39e328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39E324u, 0x39E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E32Cu;
label_39e32c:
    // 0x39e32c: 0xc048114  jal         func_120450
label_39e330:
    if (ctx->pc == 0x39E330u) {
        ctx->pc = 0x39E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E32Cu;
        // 0x39e330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E334u;
        goto label_39e334;
    }
    ctx->pc = 0x39E32Cu;
    SET_GPR_U32(ctx, 31, 0x39E334u);
    ctx->pc = 0x39E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E32Cu;
    // 0x39e330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x39E32Cu, 0x39E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E334u;
label_39e334:
    // 0x39e334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39e334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39e338:
    // 0x39e338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e33c:
    // 0x39e33c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e340:
    // 0x39e340: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x39e340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39e344:
    // 0x39e344: 0xc047b82  jal         func_11EE08
label_39e348:
    if (ctx->pc == 0x39E348u) {
        ctx->pc = 0x39E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E344u;
        // 0x39e348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E34Cu;
        goto label_39e34c;
    }
    ctx->pc = 0x39E344u;
    SET_GPR_U32(ctx, 31, 0x39E34Cu);
    ctx->pc = 0x39E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E344u;
    // 0x39e348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x39E344u, 0x39E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E34Cu;
label_39e34c:
    // 0x39e34c: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e350:
    // 0x39e350: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x39e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_39e354:
    // 0x39e354: 0xac72006c  sw          $s2, 0x6C($v1)
    ctx->pc = 0x39e354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 18));
label_39e358:
    // 0x39e358: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x39e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_39e35c:
    // 0x39e35c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x39e35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39e360:
    // 0x39e360: 0xae4201e4  sw          $v0, 0x1E4($s2)
    ctx->pc = 0x39e360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 2));
label_39e364:
    // 0x39e364: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e368:
    // 0x39e368: 0x84c40190  lh          $a0, 0x190($a2)
    ctx->pc = 0x39e368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 400)));
label_39e36c:
    // 0x39e36c: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x39e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_39e370:
    // 0x39e370: 0x8cc50194  lw          $a1, 0x194($a2)
    ctx->pc = 0x39e370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 404)));
label_39e374:
    // 0x39e374: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x39e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_39e378:
    // 0x39e378: 0xa0f809  jalr        $a1
label_39e37c:
    if (ctx->pc == 0x39E37Cu) {
        ctx->pc = 0x39E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E378u;
        // 0x39e37c: 0xc44c0064  lwc1        $f12, 0x64($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E380u;
        goto label_39e380;
    }
    ctx->pc = 0x39E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39E380u);
        ctx->pc = 0x39E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E378u;
        // 0x39e37c: 0xc44c0064  lwc1        $f12, 0x64($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E378u, 0x39E380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E380u;
label_39e380:
    // 0x39e380: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e384:
    // 0x39e384: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x39e384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39e388:
    // 0x39e388: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x39e388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_39e38c:
    // 0x39e38c: 0x84a401a0  lh          $a0, 0x1A0($a1)
    ctx->pc = 0x39e38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 416)));
label_39e390:
    // 0x39e390: 0xc46c0054  lwc1        $f12, 0x54($v1)
    ctx->pc = 0x39e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39e394:
    // 0x39e394: 0x8ca201a4  lw          $v0, 0x1A4($a1)
    ctx->pc = 0x39e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
label_39e398:
    // 0x39e398: 0x40f809  jalr        $v0
label_39e39c:
    if (ctx->pc == 0x39E39Cu) {
        ctx->pc = 0x39E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E398u;
        // 0x39e39c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3A0u;
        goto label_39e3a0;
    }
    ctx->pc = 0x39E398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E3A0u);
        ctx->pc = 0x39E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E398u;
        // 0x39e39c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E398u, 0x39E3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E3A0u;
label_39e3a0:
    // 0x39e3a0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e3a4:
    // 0x39e3a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x39e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39e3a8:
    // 0x39e3a8: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x39e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_39e3ac:
    // 0x39e3ac: 0x84a401a8  lh          $a0, 0x1A8($a1)
    ctx->pc = 0x39e3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
label_39e3b0:
    // 0x39e3b0: 0x8ca301ac  lw          $v1, 0x1AC($a1)
    ctx->pc = 0x39e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 428)));
label_39e3b4:
    // 0x39e3b4: 0xc44c0058  lwc1        $f12, 0x58($v0)
    ctx->pc = 0x39e3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39e3b8:
    // 0x39e3b8: 0x60f809  jalr        $v1
label_39e3bc:
    if (ctx->pc == 0x39E3BCu) {
        ctx->pc = 0x39E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3B8u;
        // 0x39e3bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3C0u;
        goto label_39e3c0;
    }
    ctx->pc = 0x39E3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E3C0u);
        ctx->pc = 0x39E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3B8u;
        // 0x39e3bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E3B8u, 0x39E3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E3C0u;
label_39e3c0:
    // 0x39e3c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39e3c4:
    // 0x39e3c4: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x39e3c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_39e3c8:
    // 0x39e3c8: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x39e3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_39e3cc:
    // 0x39e3cc: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x39e3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_39e3d0:
    // 0x39e3d0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x39e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_39e3d4:
    // 0x39e3d4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x39e3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_39e3d8:
    // 0x39e3d8: 0x60f809  jalr        $v1
label_39e3dc:
    if (ctx->pc == 0x39E3DCu) {
        ctx->pc = 0x39E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3D8u;
        // 0x39e3dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3E0u;
        goto label_39e3e0;
    }
    ctx->pc = 0x39E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E3E0u);
        ctx->pc = 0x39E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3D8u;
        // 0x39e3dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E3D8u, 0x39E3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E3E0u;
label_39e3e0:
    // 0x39e3e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x39e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39e3e4:
    // 0x39e3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e3e8:
    // 0x39e3e8: 0x40f809  jalr        $v0
label_39e3ec:
    if (ctx->pc == 0x39E3ECu) {
        ctx->pc = 0x39E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3E8u;
        // 0x39e3ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3F0u;
        goto label_39e3f0;
    }
    ctx->pc = 0x39E3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E3F0u);
        ctx->pc = 0x39E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3E8u;
        // 0x39e3ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E3E8u, 0x39E3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E3F0u;
label_39e3f0:
    // 0x39e3f0: 0xc048130  jal         func_1204C0
label_39e3f4:
    if (ctx->pc == 0x39E3F4u) {
        ctx->pc = 0x39E3F8u;
        goto label_39e3f8;
    }
    ctx->pc = 0x39E3F0u;
    SET_GPR_U32(ctx, 31, 0x39E3F8u);
    ctx->pc = 0x1204C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204C0u, 0x39E3F0u, 0x39E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3F8u;
label_39e3f8:
    // 0x39e3f8: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x39e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_39e3fc:
    // 0x39e3fc: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_39e400:
    if (ctx->pc == 0x39E400u) {
        ctx->pc = 0x39E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3FCu;
        // 0x39e400: 0xae600090  sw          $zero, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E404u;
        goto label_39e404;
    }
    ctx->pc = 0x39E3FCu;
    {
        const bool branch_taken_0x39e3fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e3fc) {
            ctx->pc = 0x39E400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E3FCu;
            // 0x39e400: 0xae600090  sw          $zero, 0x90($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E428u;
            goto label_39e428;
        }
    }
    ctx->pc = 0x39E404u;
label_39e404:
    // 0x39e404: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
label_39e408:
    if (ctx->pc == 0x39E408u) {
        ctx->pc = 0x39E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E404u;
        // 0x39e408: 0xae600090  sw          $zero, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E40Cu;
        goto label_39e40c;
    }
    ctx->pc = 0x39E404u;
    {
        const bool branch_taken_0x39e404 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e404) {
            ctx->pc = 0x39E408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E404u;
            // 0x39e408: 0xae600090  sw          $zero, 0x90($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E428u;
            goto label_39e428;
        }
    }
    ctx->pc = 0x39E40Cu;
label_39e40c:
    // 0x39e40c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39e410:
    // 0x39e410: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x39e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_39e414:
    // 0x39e414: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x39e414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_39e418:
    // 0x39e418: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x39e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_39e41c:
    // 0x39e41c: 0x60f809  jalr        $v1
label_39e420:
    if (ctx->pc == 0x39E420u) {
        ctx->pc = 0x39E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E41Cu;
        // 0x39e420: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E424u;
        goto label_39e424;
    }
    ctx->pc = 0x39E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E424u);
        ctx->pc = 0x39E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E41Cu;
        // 0x39e420: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E41Cu, 0x39E424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E424u;
label_39e424:
    // 0x39e424: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x39e424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_39e428:
    // 0x39e428: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x39e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_39e42c:
    // 0x39e42c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e430:
    // 0x39e430: 0x927000ec  lbu         $s0, 0xEC($s3)
    ctx->pc = 0x39e430u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 236)));
label_39e434:
    // 0x39e434: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x39e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_39e438:
    // 0x39e438: 0xc0d534a  jal         func_354D28
label_39e43c:
    if (ctx->pc == 0x39E43Cu) {
        ctx->pc = 0x39E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E438u;
        // 0x39e43c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E440u;
        goto label_39e440;
    }
    ctx->pc = 0x39E438u;
    SET_GPR_U32(ctx, 31, 0x39E440u);
    ctx->pc = 0x39E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E438u;
    // 0x39e43c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D28u, 0x39E438u, 0x39E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E440u;
label_39e440:
    // 0x39e440: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39e440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39e444:
    // 0x39e444: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39e444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e448:
    // 0x39e448: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39e448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39e44c:
    // 0x39e44c: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x39e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_39e450:
    // 0x39e450: 0xa27000ec  sb          $s0, 0xEC($s3)
    ctx->pc = 0x39e450u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 16));
label_39e454:
    // 0x39e454: 0x8ca20098  lw          $v0, 0x98($a1)
    ctx->pc = 0x39e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
label_39e458:
    // 0x39e458: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x39e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
label_39e45c:
    // 0x39e45c: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x39e45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39e460:
    // 0x39e460: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x39e460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39e464:
    // 0x39e464: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x39e464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39e468:
    // 0x39e468: 0xc0d58a4  jal         func_356290
label_39e46c:
    if (ctx->pc == 0x39E46Cu) {
        ctx->pc = 0x39E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E468u;
        // 0x39e46c: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E470u;
        goto label_39e470;
    }
    ctx->pc = 0x39E468u;
    SET_GPR_U32(ctx, 31, 0x39E470u);
    ctx->pc = 0x39E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E468u;
    // 0x39e46c: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356290u, 0x39E468u, 0x39E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E470u;
label_39e470:
    // 0x39e470: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x39e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_39e474:
    // 0x39e474: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x39e474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_39e478:
    // 0x39e478: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x39e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_39e47c:
    // 0x39e47c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39e47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_39e480:
    // 0x39e480: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x39e480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_39e484:
    // 0x39e484: 0x966300f2  lhu         $v1, 0xF2($s3)
    ctx->pc = 0x39e484u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
label_39e488:
    // 0x39e488: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39e48c:
    // 0x39e48c: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x39e48cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
label_39e490:
    // 0x39e490: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e494:
    // 0x39e494: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39e494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39e498:
    // 0x39e498: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_39e49c:
    if (ctx->pc == 0x39E49Cu) {
        ctx->pc = 0x39E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E498u;
        // 0x39e49c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4A0u;
        goto label_39e4a0;
    }
    ctx->pc = 0x39E498u;
    {
        const bool branch_taken_0x39e498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E498u;
        // 0x39e49c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e498) {
            ctx->pc = 0x39E5F0u;
            goto label_39e5f0;
        }
    }
    ctx->pc = 0x39E4A0u;
label_39e4a0:
    // 0x39e4a0: 0x241e5f73  addiu       $fp, $zero, 0x5F73
    ctx->pc = 0x39e4a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24435));
label_39e4a4:
    // 0x39e4a4: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x39e4a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_39e4a8:
    // 0x39e4a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39e4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e4ac:
    // 0x39e4ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x39e4acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e4b0:
    // 0x39e4b0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39e4b4:
    // 0x39e4b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39e4b8:
    // 0x39e4b8: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x39e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39e4bc:
    // 0x39e4bc: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
label_39e4c0:
    if (ctx->pc == 0x39E4C0u) {
        ctx->pc = 0x39E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4BCu;
        // 0x39e4c0: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4C4u;
        goto label_39e4c4;
    }
    ctx->pc = 0x39E4BCu;
    {
        const bool branch_taken_0x39e4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e4bc) {
            ctx->pc = 0x39E4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E4BCu;
            // 0x39e4c0: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E5D8u;
            goto label_39e5d8;
        }
    }
    ctx->pc = 0x39E4C4u;
label_39e4c4:
    // 0x39e4c4: 0xc0e896e  jal         func_3A25B8
label_39e4c8:
    if (ctx->pc == 0x39E4C8u) {
        ctx->pc = 0x39E4CCu;
        goto label_39e4cc;
    }
    ctx->pc = 0x39E4C4u;
    SET_GPR_U32(ctx, 31, 0x39E4CCu);
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x39E4C4u, 0x39E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4CCu;
label_39e4cc:
    // 0x39e4cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e4d0:
    // 0x39e4d0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_39e4d4:
    if (ctx->pc == 0x39E4D4u) {
        ctx->pc = 0x39E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4D0u;
        // 0x39e4d4: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4D8u;
        goto label_39e4d8;
    }
    ctx->pc = 0x39E4D0u;
    {
        const bool branch_taken_0x39e4d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e4d0) {
            ctx->pc = 0x39E4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E4D0u;
            // 0x39e4d4: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E4F0u;
            goto label_39e4f0;
        }
    }
    ctx->pc = 0x39E4D8u;
label_39e4d8:
    // 0x39e4d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39e4dc:
    // 0x39e4dc: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x39e4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_39e4e0:
    // 0x39e4e0: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x39e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_39e4e4:
    // 0x39e4e4: 0x60f809  jalr        $v1
label_39e4e8:
    if (ctx->pc == 0x39E4E8u) {
        ctx->pc = 0x39E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4E4u;
        // 0x39e4e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4ECu;
        goto label_39e4ec;
    }
    ctx->pc = 0x39E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E4ECu);
        ctx->pc = 0x39E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4E4u;
        // 0x39e4e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E4E4u, 0x39E4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E4ECu;
label_39e4ec:
    // 0x39e4ec: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e4f0:
    // 0x39e4f0: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x39e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_39e4f4:
    // 0x39e4f4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x39e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_39e4f8:
    // 0x39e4f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x39e4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_39e4fc:
    // 0x39e4fc: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
label_39e500:
    if (ctx->pc == 0x39E500u) {
        ctx->pc = 0x39E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4FCu;
        // 0x39e500: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E504u;
        goto label_39e504;
    }
    ctx->pc = 0x39E4FCu;
    {
        const bool branch_taken_0x39e4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x39e4fc) {
            ctx->pc = 0x39E500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E4FCu;
            // 0x39e500: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E534u;
            goto label_39e534;
        }
    }
    ctx->pc = 0x39E504u;
label_39e504:
    // 0x39e504: 0xc0e8b48  jal         func_3A2D20
label_39e508:
    if (ctx->pc == 0x39E508u) {
        ctx->pc = 0x39E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E504u;
        // 0x39e508: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E50Cu;
        goto label_39e50c;
    }
    ctx->pc = 0x39E504u;
    SET_GPR_U32(ctx, 31, 0x39E50Cu);
    ctx->pc = 0x39E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E504u;
    // 0x39e508: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39E504u, 0x39E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E50Cu;
label_39e50c:
    // 0x39e50c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e510:
    // 0x39e510: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x39e510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39e514:
    // 0x39e514: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x39e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_39e518:
    // 0x39e518: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39e51c:
    // 0x39e51c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39e520:
    // 0x39e520: 0xc0e8b80  jal         func_3A2E00
label_39e524:
    if (ctx->pc == 0x39E524u) {
        ctx->pc = 0x39E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E520u;
        // 0x39e524: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E528u;
        goto label_39e528;
    }
    ctx->pc = 0x39E520u;
    SET_GPR_U32(ctx, 31, 0x39E528u);
    ctx->pc = 0x39E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E520u;
    // 0x39e524: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39E520u, 0x39E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E528u;
label_39e528:
    // 0x39e528: 0xc0e8b50  jal         func_3A2D40
label_39e52c:
    if (ctx->pc == 0x39E52Cu) {
        ctx->pc = 0x39E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E528u;
        // 0x39e52c: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E530u;
        goto label_39e530;
    }
    ctx->pc = 0x39E528u;
    SET_GPR_U32(ctx, 31, 0x39E530u);
    ctx->pc = 0x39E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E528u;
    // 0x39e52c: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39E528u, 0x39E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E530u;
label_39e530:
    // 0x39e530: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e534:
    // 0x39e534: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39e538:
    // 0x39e538: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39e53c:
    // 0x39e53c: 0xc0e57ce  jal         func_395F38
label_39e540:
    if (ctx->pc == 0x39E540u) {
        ctx->pc = 0x39E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E53Cu;
        // 0x39e540: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E544u;
        goto label_39e544;
    }
    ctx->pc = 0x39E53Cu;
    SET_GPR_U32(ctx, 31, 0x39E544u);
    ctx->pc = 0x39E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E53Cu;
    // 0x39e540: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39E53Cu, 0x39E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E544u;
label_39e544:
    // 0x39e544: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_39e548:
    if (ctx->pc == 0x39E548u) {
        ctx->pc = 0x39E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E544u;
        // 0x39e548: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E54Cu;
        goto label_39e54c;
    }
    ctx->pc = 0x39E544u;
    {
        const bool branch_taken_0x39e544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e544) {
            ctx->pc = 0x39E548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E544u;
            // 0x39e548: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E55Cu;
            goto label_39e55c;
        }
    }
    ctx->pc = 0x39E54Cu;
label_39e54c:
    // 0x39e54c: 0x8e65009c  lw          $a1, 0x9C($s3)
    ctx->pc = 0x39e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_39e550:
    // 0x39e550: 0xc0e549a  jal         func_395268
label_39e554:
    if (ctx->pc == 0x39E554u) {
        ctx->pc = 0x39E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E550u;
        // 0x39e554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E558u;
        goto label_39e558;
    }
    ctx->pc = 0x39E550u;
    SET_GPR_U32(ctx, 31, 0x39E558u);
    ctx->pc = 0x39E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E550u;
    // 0x39e554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395268u, 0x39E550u, 0x39E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E558u;
label_39e558:
    // 0x39e558: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e55c:
    // 0x39e55c: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x39e55cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_39e560:
    // 0x39e560: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x39e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_39e564:
    // 0x39e564: 0x927000ec  lbu         $s0, 0xEC($s3)
    ctx->pc = 0x39e564u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 236)));
label_39e568:
    // 0x39e568: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x39e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_39e56c:
    // 0x39e56c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x39e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39e570:
    // 0x39e570: 0xc0d534a  jal         func_354D28
label_39e574:
    if (ctx->pc == 0x39E574u) {
        ctx->pc = 0x39E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E570u;
        // 0x39e574: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E578u;
        goto label_39e578;
    }
    ctx->pc = 0x39E570u;
    SET_GPR_U32(ctx, 31, 0x39E578u);
    ctx->pc = 0x39E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E570u;
    // 0x39e574: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D28u, 0x39E570u, 0x39E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E578u;
label_39e578:
    // 0x39e578: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39e578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39e57c:
    // 0x39e57c: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e580:
    // 0x39e580: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39e580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39e584:
    // 0x39e584: 0x8e710074  lw          $s1, 0x74($s3)
    ctx->pc = 0x39e584u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_39e588:
    // 0x39e588: 0xa27000ec  sb          $s0, 0xEC($s3)
    ctx->pc = 0x39e588u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 16));
label_39e58c:
    // 0x39e58c: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x39e58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_39e590:
    // 0x39e590: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x39e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_39e594:
    // 0x39e594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39e598:
    // 0x39e598: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x39e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_39e59c:
    // 0x39e59c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x39e59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_39e5a0:
    // 0x39e5a0: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x39e5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39e5a4:
    // 0x39e5a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39e5a8:
    // 0x39e5a8: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x39e5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_39e5ac:
    // 0x39e5ac: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x39e5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39e5b0:
    // 0x39e5b0: 0xc0d58c2  jal         func_356308
label_39e5b4:
    if (ctx->pc == 0x39E5B4u) {
        ctx->pc = 0x39E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5B0u;
        // 0x39e5b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E5B8u;
        goto label_39e5b8;
    }
    ctx->pc = 0x39E5B0u;
    SET_GPR_U32(ctx, 31, 0x39E5B8u);
    ctx->pc = 0x39E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E5B0u;
    // 0x39e5b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356308u, 0x39E5B0u, 0x39E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E5B8u;
label_39e5b8:
    // 0x39e5b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x39e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_39e5bc:
    // 0x39e5bc: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x39e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_39e5c0:
    // 0x39e5c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x39e5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_39e5c4:
    // 0x39e5c4: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x39e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_39e5c8:
    // 0x39e5c8: 0x966300f2  lhu         $v1, 0xF2($s3)
    ctx->pc = 0x39e5c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
label_39e5cc:
    // 0x39e5cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39e5d0:
    // 0x39e5d0: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x39e5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
label_39e5d4:
    // 0x39e5d4: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e5d8:
    // 0x39e5d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39e5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39e5dc:
    // 0x39e5dc: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x39e5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_39e5e0:
    // 0x39e5e0: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39e5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39e5e4:
    // 0x39e5e4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39e5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39e5e8:
    // 0x39e5e8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_39e5ec:
    if (ctx->pc == 0x39E5ECu) {
        ctx->pc = 0x39E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5E8u;
        // 0x39e5ec: 0x26d60090  addiu       $s6, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E5F0u;
        goto label_39e5f0;
    }
    ctx->pc = 0x39E5E8u;
    {
        const bool branch_taken_0x39e5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5E8u;
        // 0x39e5ec: 0x26d60090  addiu       $s6, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5e8) {
            ctx->pc = 0x39E4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e4b0;
        }
    }
    ctx->pc = 0x39E5F0u;
label_39e5f0:
    // 0x39e5f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x39e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_39e5f4:
    // 0x39e5f4: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x39e5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_39e5f8:
    // 0x39e5f8: 0x8c467198  lw          $a2, 0x7198($v0)
    ctx->pc = 0x39e5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_39e5fc:
    // 0x39e5fc: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x39e5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
label_39e600:
    // 0x39e600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39e600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e604:
    // 0x39e604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39e608:
    // 0x39e608: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x39e608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39e60c:
    // 0x39e60c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39e610:
    if (ctx->pc == 0x39E610u) {
        ctx->pc = 0x39E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E60Cu;
        // 0x39e610: 0xa4c20010  sh          $v0, 0x10($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E614u;
        goto label_39e614;
    }
    ctx->pc = 0x39E60Cu;
    {
        const bool branch_taken_0x39e60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E60Cu;
        // 0x39e610: 0xa4c20010  sh          $v0, 0x10($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e60c) {
            ctx->pc = 0x39E61Cu;
            goto label_39e61c;
        }
    }
    ctx->pc = 0x39E614u;
label_39e614:
    // 0x39e614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e618:
    // 0x39e618: 0xa4c20010  sh          $v0, 0x10($a2)
    ctx->pc = 0x39e618u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
label_39e61c:
    // 0x39e61c: 0x94c60010  lhu         $a2, 0x10($a2)
    ctx->pc = 0x39e61cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
label_39e620:
    // 0x39e620: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39e620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e624:
    // 0x39e624: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39e624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e628:
    // 0x39e628: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x39e628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_39e62c:
    // 0x39e62c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39e62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_39e630:
    // 0x39e630: 0x10400112  beqz        $v0, . + 4 + (0x112 << 2)
label_39e634:
    if (ctx->pc == 0x39E634u) {
        ctx->pc = 0x39E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E630u;
        // 0x39e634: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E638u;
        goto label_39e638;
    }
    ctx->pc = 0x39E630u;
    {
        const bool branch_taken_0x39e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E630u;
        // 0x39e634: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e630) {
            ctx->pc = 0x39EA7Cu;
            goto label_39ea7c;
        }
    }
    ctx->pc = 0x39E638u;
label_39e638:
    // 0x39e638: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x39e638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_39e63c:
    // 0x39e63c: 0x0  nop
    ctx->pc = 0x39e63cu;
    // NOP
label_39e640:
    // 0x39e640: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x39e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_39e644:
    // 0x39e644: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x39e644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_39e648:
    // 0x39e648: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x39e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39e64c:
    // 0x39e64c: 0x8c510050  lw          $s1, 0x50($v0)
    ctx->pc = 0x39e64cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39e650:
    // 0x39e650: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
label_39e654:
    if (ctx->pc == 0x39E654u) {
        ctx->pc = 0x39E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E650u;
        // 0x39e654: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E658u;
        goto label_39e658;
    }
    ctx->pc = 0x39E650u;
    {
        const bool branch_taken_0x39e650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E650u;
        // 0x39e654: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e650) {
            ctx->pc = 0x39EA5Cu;
            goto label_39ea5c;
        }
    }
    ctx->pc = 0x39E658u;
label_39e658:
    // 0x39e658: 0xc08a61a  jal         func_229868
label_39e65c:
    if (ctx->pc == 0x39E65Cu) {
        ctx->pc = 0x39E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E658u;
        // 0x39e65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E660u;
        goto label_39e660;
    }
    ctx->pc = 0x39E658u;
    SET_GPR_U32(ctx, 31, 0x39E660u);
    ctx->pc = 0x39E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E658u;
    // 0x39e65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x39E658u, 0x39E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E660u;
label_39e660:
    // 0x39e660: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_39e664:
    if (ctx->pc == 0x39E664u) {
        ctx->pc = 0x39E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E660u;
        // 0x39e664: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E668u;
        goto label_39e668;
    }
    ctx->pc = 0x39E660u;
    {
        const bool branch_taken_0x39e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E660u;
        // 0x39e664: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e660) {
            ctx->pc = 0x39EA5Cu;
            goto label_39ea5c;
        }
    }
    ctx->pc = 0x39E668u;
label_39e668:
    // 0x39e668: 0xc0898f6  jal         func_2263D8
label_39e66c:
    if (ctx->pc == 0x39E66Cu) {
        ctx->pc = 0x39E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E668u;
        // 0x39e66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E670u;
        goto label_39e670;
    }
    ctx->pc = 0x39E668u;
    SET_GPR_U32(ctx, 31, 0x39E670u);
    ctx->pc = 0x39E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E668u;
    // 0x39e66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263D8u, 0x39E668u, 0x39E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E670u;
label_39e670:
    // 0x39e670: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
label_39e674:
    if (ctx->pc == 0x39E674u) {
        ctx->pc = 0x39E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E670u;
        // 0x39e674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E678u;
        goto label_39e678;
    }
    ctx->pc = 0x39E670u;
    {
        const bool branch_taken_0x39e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E670u;
        // 0x39e674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e670) {
            ctx->pc = 0x39EA58u;
            goto label_39ea58;
        }
    }
    ctx->pc = 0x39E678u;
label_39e678:
    // 0x39e678: 0x8e240280  lw          $a0, 0x280($s1)
    ctx->pc = 0x39e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_39e67c:
    // 0x39e67c: 0x148200f7  bne         $a0, $v0, . + 4 + (0xF7 << 2)
label_39e680:
    if (ctx->pc == 0x39E680u) {
        ctx->pc = 0x39E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E67Cu;
        // 0x39e680: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E684u;
        goto label_39e684;
    }
    ctx->pc = 0x39E67Cu;
    {
        const bool branch_taken_0x39e67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E67Cu;
        // 0x39e680: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e67c) {
            ctx->pc = 0x39EA5Cu;
            goto label_39ea5c;
        }
    }
    ctx->pc = 0x39E684u;
label_39e684:
    // 0x39e684: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e688:
    // 0x39e688: 0x8e3e00d8  lw          $fp, 0xD8($s1)
    ctx->pc = 0x39e688u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_39e68c:
    // 0x39e68c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x39e68cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_39e690:
    // 0x39e690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39e694:
    // 0x39e694: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x39e694u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_39e698:
    // 0x39e698: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x39e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_39e69c:
    // 0x39e69c: 0x4420002  bltzl       $v0, . + 4 + (0x2 << 2)
label_39e6a0:
    if (ctx->pc == 0x39E6A0u) {
        ctx->pc = 0x39E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E69Cu;
        // 0x39e6a0: 0xae240280  sw          $a0, 0x280($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E6A4u;
        goto label_39e6a4;
    }
    ctx->pc = 0x39E69Cu;
    {
        const bool branch_taken_0x39e69c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e69c) {
            ctx->pc = 0x39E6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E69Cu;
            // 0x39e6a0: 0xae240280  sw          $a0, 0x280($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E6A8u;
            goto label_39e6a8;
        }
    }
    ctx->pc = 0x39E6A4u;
label_39e6a4:
    // 0x39e6a4: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x39e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
label_39e6a8:
    // 0x39e6a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39e6ac:
    // 0x39e6ac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39e6acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39e6b0:
    // 0x39e6b0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39e6b4:
    // 0x39e6b4: 0x40f809  jalr        $v0
label_39e6b8:
    if (ctx->pc == 0x39E6B8u) {
        ctx->pc = 0x39E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6B4u;
        // 0x39e6b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E6BCu;
        goto label_39e6bc;
    }
    ctx->pc = 0x39E6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E6BCu);
        ctx->pc = 0x39E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6B4u;
        // 0x39e6b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E6B4u, 0x39E6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E6BCu;
label_39e6bc:
    // 0x39e6bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39e6c0:
    if (ctx->pc == 0x39E6C0u) {
        ctx->pc = 0x39E6C4u;
        goto label_39e6c4;
    }
    ctx->pc = 0x39E6BCu;
    {
        const bool branch_taken_0x39e6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e6bc) {
            ctx->pc = 0x39E6E0u;
            goto label_39e6e0;
        }
    }
    ctx->pc = 0x39E6C4u;
label_39e6c4:
    // 0x39e6c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39e6c8:
    // 0x39e6c8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39e6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39e6cc:
    // 0x39e6cc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39e6d0:
    // 0x39e6d0: 0x40f809  jalr        $v0
label_39e6d4:
    if (ctx->pc == 0x39E6D4u) {
        ctx->pc = 0x39E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6D0u;
        // 0x39e6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E6D8u;
        goto label_39e6d8;
    }
    ctx->pc = 0x39E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E6D8u);
        ctx->pc = 0x39E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6D0u;
        // 0x39e6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E6D0u, 0x39E6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E6D8u;
label_39e6d8:
    // 0x39e6d8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x39e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_39e6dc:
    // 0x39e6dc: 0xa443003c  sh          $v1, 0x3C($v0)
    ctx->pc = 0x39e6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 3));
label_39e6e0:
    // 0x39e6e0: 0xc087502  jal         func_21D408
label_39e6e4:
    if (ctx->pc == 0x39E6E4u) {
        ctx->pc = 0x39E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6E0u;
        // 0x39e6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E6E8u;
        goto label_39e6e8;
    }
    ctx->pc = 0x39E6E0u;
    SET_GPR_U32(ctx, 31, 0x39E6E8u);
    ctx->pc = 0x39E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6E0u;
    // 0x39e6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39E6E0u, 0x39E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6E8u;
label_39e6e8:
    // 0x39e6e8: 0xc0a36c8  jal         func_28DB20
label_39e6ec:
    if (ctx->pc == 0x39E6ECu) {
        ctx->pc = 0x39E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6E8u;
        // 0x39e6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E6F0u;
        goto label_39e6f0;
    }
    ctx->pc = 0x39E6E8u;
    SET_GPR_U32(ctx, 31, 0x39E6F0u);
    ctx->pc = 0x39E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6E8u;
    // 0x39e6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x39E6E8u, 0x39E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6F0u;
label_39e6f0:
    // 0x39e6f0: 0xc087502  jal         func_21D408
label_39e6f4:
    if (ctx->pc == 0x39E6F4u) {
        ctx->pc = 0x39E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6F0u;
        // 0x39e6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E6F8u;
        goto label_39e6f8;
    }
    ctx->pc = 0x39E6F0u;
    SET_GPR_U32(ctx, 31, 0x39E6F8u);
    ctx->pc = 0x39E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6F0u;
    // 0x39e6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39E6F0u, 0x39E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6F8u;
label_39e6f8:
    // 0x39e6f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39e6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e6fc:
    // 0x39e6fc: 0xc0a3bc0  jal         func_28EF00
label_39e700:
    if (ctx->pc == 0x39E700u) {
        ctx->pc = 0x39E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6FCu;
        // 0x39e700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E704u;
        goto label_39e704;
    }
    ctx->pc = 0x39E6FCu;
    SET_GPR_U32(ctx, 31, 0x39E704u);
    ctx->pc = 0x39E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6FCu;
    // 0x39e700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF00u, 0x39E6FCu, 0x39E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E704u;
label_39e704:
    // 0x39e704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e708:
    // 0x39e708: 0xc08f9ba  jal         func_23E6E8
label_39e70c:
    if (ctx->pc == 0x39E70Cu) {
        ctx->pc = 0x39E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E708u;
        // 0x39e70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E710u;
        goto label_39e710;
    }
    ctx->pc = 0x39E708u;
    SET_GPR_U32(ctx, 31, 0x39E710u);
    ctx->pc = 0x39E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E708u;
    // 0x39e70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E6E8u, 0x39E708u, 0x39E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E710u;
label_39e710:
    // 0x39e710: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x39e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39e714:
    // 0x39e714: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x39e714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_39e718:
    // 0x39e718: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x39e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_39e71c:
    // 0x39e71c: 0x60f809  jalr        $v1
label_39e720:
    if (ctx->pc == 0x39E720u) {
        ctx->pc = 0x39E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E71Cu;
        // 0x39e720: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E724u;
        goto label_39e724;
    }
    ctx->pc = 0x39E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39E724u);
        ctx->pc = 0x39E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E71Cu;
        // 0x39e720: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E71Cu, 0x39E724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E724u;
label_39e724:
    // 0x39e724: 0xc089ce2  jal         func_227388
label_39e728:
    if (ctx->pc == 0x39E728u) {
        ctx->pc = 0x39E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E724u;
        // 0x39e728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E72Cu;
        goto label_39e72c;
    }
    ctx->pc = 0x39E724u;
    SET_GPR_U32(ctx, 31, 0x39E72Cu);
    ctx->pc = 0x39E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E724u;
    // 0x39e728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x39E724u, 0x39E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E72Cu;
label_39e72c:
    // 0x39e72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39e730:
    // 0x39e730: 0xc0899aa  jal         func_2266A8
label_39e734:
    if (ctx->pc == 0x39E734u) {
        ctx->pc = 0x39E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E730u;
        // 0x39e734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E738u;
        goto label_39e738;
    }
    ctx->pc = 0x39E730u;
    SET_GPR_U32(ctx, 31, 0x39E738u);
    ctx->pc = 0x39E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E730u;
    // 0x39e734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x39E730u, 0x39E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E738u;
label_39e738:
    // 0x39e738: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x39e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_39e73c:
    // 0x39e73c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x39e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_39e740:
    // 0x39e740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39e744:
    // 0x39e744: 0xc089990  jal         func_226640
label_39e748:
    if (ctx->pc == 0x39E748u) {
        ctx->pc = 0x39E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E744u;
        // 0x39e748: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E74Cu;
        goto label_39e74c;
    }
    ctx->pc = 0x39E744u;
    SET_GPR_U32(ctx, 31, 0x39E74Cu);
    ctx->pc = 0x39E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E744u;
    // 0x39e748: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x39E744u, 0x39E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E74Cu;
label_39e74c:
    // 0x39e74c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x39e74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39e750:
    // 0x39e750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39e754:
    // 0x39e754: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x39e754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_39e758:
    // 0x39e758: 0x7e230310  sq          $v1, 0x310($s1)
    ctx->pc = 0x39e758u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 784), GPR_VEC(ctx, 3));
label_39e75c:
    // 0x39e75c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x39e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_39e760:
    // 0x39e760: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x39e760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_39e764:
    // 0x39e764: 0xc089bfc  jal         func_226FF0
label_39e768:
    if (ctx->pc == 0x39E768u) {
        ctx->pc = 0x39E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E764u;
        // 0x39e768: 0x7e220320  sq          $v0, 0x320($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 800), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E76Cu;
        goto label_39e76c;
    }
    ctx->pc = 0x39E764u;
    SET_GPR_U32(ctx, 31, 0x39E76Cu);
    ctx->pc = 0x39E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E764u;
    // 0x39e768: 0x7e220320  sq          $v0, 0x320($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 800), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x39E764u, 0x39E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E76Cu;
label_39e76c:
    // 0x39e76c: 0xc0e57ce  jal         func_395F38
label_39e770:
    if (ctx->pc == 0x39E770u) {
        ctx->pc = 0x39E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E76Cu;
        // 0x39e770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E774u;
        goto label_39e774;
    }
    ctx->pc = 0x39E76Cu;
    SET_GPR_U32(ctx, 31, 0x39E774u);
    ctx->pc = 0x39E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E76Cu;
    // 0x39e770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39E76Cu, 0x39E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E774u;
label_39e774:
    // 0x39e774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39e774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e778:
    // 0x39e778: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_39e77c:
    if (ctx->pc == 0x39E77Cu) {
        ctx->pc = 0x39E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E778u;
        // 0x39e77c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E780u;
        goto label_39e780;
    }
    ctx->pc = 0x39E778u;
    {
        const bool branch_taken_0x39e778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E778u;
        // 0x39e77c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e778) {
            ctx->pc = 0x39E7B8u;
            goto label_39e7b8;
        }
    }
    ctx->pc = 0x39E780u;
label_39e780:
    // 0x39e780: 0xc0e8b48  jal         func_3A2D20
label_39e784:
    if (ctx->pc == 0x39E784u) {
        ctx->pc = 0x39E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E780u;
        // 0x39e784: 0x8ca42c7c  lw          $a0, 0x2C7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E788u;
        goto label_39e788;
    }
    ctx->pc = 0x39E780u;
    SET_GPR_U32(ctx, 31, 0x39E788u);
    ctx->pc = 0x39E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E780u;
    // 0x39e784: 0x8ca42c7c  lw          $a0, 0x2C7C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39E780u, 0x39E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E788u;
label_39e788:
    // 0x39e788: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39e788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39e78c:
    // 0x39e78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e790:
    // 0x39e790: 0xc0e8b68  jal         func_3A2DA0
label_39e794:
    if (ctx->pc == 0x39E794u) {
        ctx->pc = 0x39E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E790u;
        // 0x39e794: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E798u;
        goto label_39e798;
    }
    ctx->pc = 0x39E790u;
    SET_GPR_U32(ctx, 31, 0x39E798u);
    ctx->pc = 0x39E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E790u;
    // 0x39e794: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39E790u, 0x39E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E798u;
label_39e798:
    // 0x39e798: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39e798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39e79c:
    // 0x39e79c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39e79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e7a0:
    // 0x39e7a0: 0x8c642c7c  lw          $a0, 0x2C7C($v1)
    ctx->pc = 0x39e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_39e7a4:
    // 0x39e7a4: 0xc0e8b80  jal         func_3A2E00
label_39e7a8:
    if (ctx->pc == 0x39E7A8u) {
        ctx->pc = 0x39E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7A4u;
        // 0x39e7a8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7ACu;
        goto label_39e7ac;
    }
    ctx->pc = 0x39E7A4u;
    SET_GPR_U32(ctx, 31, 0x39E7ACu);
    ctx->pc = 0x39E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E7A4u;
    // 0x39e7a8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39E7A4u, 0x39E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E7ACu;
label_39e7ac:
    // 0x39e7ac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39e7b0:
    // 0x39e7b0: 0xc0e8b50  jal         func_3A2D40
label_39e7b4:
    if (ctx->pc == 0x39E7B4u) {
        ctx->pc = 0x39E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7B0u;
        // 0x39e7b4: 0x8ca42c7c  lw          $a0, 0x2C7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7B8u;
        goto label_39e7b8;
    }
    ctx->pc = 0x39E7B0u;
    SET_GPR_U32(ctx, 31, 0x39E7B8u);
    ctx->pc = 0x39E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E7B0u;
    // 0x39e7b4: 0x8ca42c7c  lw          $a0, 0x2C7C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39E7B0u, 0x39E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E7B8u;
label_39e7b8:
    // 0x39e7b8: 0x926300ed  lbu         $v1, 0xED($s3)
    ctx->pc = 0x39e7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39e7bc:
    // 0x39e7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e7c0:
    // 0x39e7c0: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_39e7c4:
    if (ctx->pc == 0x39E7C4u) {
        ctx->pc = 0x39E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7C0u;
        // 0x39e7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7C8u;
        goto label_39e7c8;
    }
    ctx->pc = 0x39E7C0u;
    {
        const bool branch_taken_0x39e7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7C0u;
        // 0x39e7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7c0) {
            ctx->pc = 0x39E858u;
            goto label_39e858;
        }
    }
    ctx->pc = 0x39E7C8u;
label_39e7c8:
    // 0x39e7c8: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x39e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_39e7cc:
    // 0x39e7cc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x39e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_39e7d0:
    // 0x39e7d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_39e7d4:
    if (ctx->pc == 0x39E7D4u) {
        ctx->pc = 0x39E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7D0u;
        // 0x39e7d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7D8u;
        goto label_39e7d8;
    }
    ctx->pc = 0x39E7D0u;
    {
        const bool branch_taken_0x39e7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7D0u;
        // 0x39e7d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7d0) {
            ctx->pc = 0x39E7E8u;
            goto label_39e7e8;
        }
    }
    ctx->pc = 0x39E7D8u;
label_39e7d8:
    // 0x39e7d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_39e7dc:
    if (ctx->pc == 0x39E7DCu) {
        ctx->pc = 0x39E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7D8u;
        // 0x39e7dc: 0x240200bc  addiu       $v0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7E0u;
        goto label_39e7e0;
    }
    ctx->pc = 0x39E7D8u;
    {
        const bool branch_taken_0x39e7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7D8u;
        // 0x39e7dc: 0x240200bc  addiu       $v0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7d8) {
            ctx->pc = 0x39E7E8u;
            goto label_39e7e8;
        }
    }
    ctx->pc = 0x39E7E0u;
label_39e7e0:
    // 0x39e7e0: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_39e7e4:
    if (ctx->pc == 0x39E7E4u) {
        ctx->pc = 0x39E7E8u;
        goto label_39e7e8;
    }
    ctx->pc = 0x39E7E0u;
    {
        const bool branch_taken_0x39e7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e7e0) {
            ctx->pc = 0x39E858u;
            goto label_39e858;
        }
    }
    ctx->pc = 0x39E7E8u;
label_39e7e8:
    // 0x39e7e8: 0xc0e4060  jal         func_390180
label_39e7ec:
    if (ctx->pc == 0x39E7ECu) {
        ctx->pc = 0x39E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7E8u;
        // 0x39e7ec: 0x26240364  addiu       $a0, $s1, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7F0u;
        goto label_39e7f0;
    }
    ctx->pc = 0x39E7E8u;
    SET_GPR_U32(ctx, 31, 0x39E7F0u);
    ctx->pc = 0x39E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E7E8u;
    // 0x39e7ec: 0x26240364  addiu       $a0, $s1, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39E7E8u, 0x39E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E7F0u;
label_39e7f0:
    // 0x39e7f0: 0xc0e57ce  jal         func_395F38
label_39e7f4:
    if (ctx->pc == 0x39E7F4u) {
        ctx->pc = 0x39E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7F0u;
        // 0x39e7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E7F8u;
        goto label_39e7f8;
    }
    ctx->pc = 0x39E7F0u;
    SET_GPR_U32(ctx, 31, 0x39E7F8u);
    ctx->pc = 0x39E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E7F0u;
    // 0x39e7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39E7F0u, 0x39E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E7F8u;
label_39e7f8:
    // 0x39e7f8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_39e7fc:
    if (ctx->pc == 0x39E7FCu) {
        ctx->pc = 0x39E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7F8u;
        // 0x39e7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E800u;
        goto label_39e800;
    }
    ctx->pc = 0x39E7F8u;
    {
        const bool branch_taken_0x39e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7F8u;
        // 0x39e7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7f8) {
            ctx->pc = 0x39E858u;
            goto label_39e858;
        }
    }
    ctx->pc = 0x39E800u;
label_39e800:
    // 0x39e800: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39e800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39e804:
    // 0x39e804: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x39e804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_39e808:
    // 0x39e808: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x39e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_39e80c:
    // 0x39e80c: 0xc08a200  jal         func_228800
label_39e810:
    if (ctx->pc == 0x39E810u) {
        ctx->pc = 0x39E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E80Cu;
        // 0x39e810: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E814u;
        goto label_39e814;
    }
    ctx->pc = 0x39E80Cu;
    SET_GPR_U32(ctx, 31, 0x39E814u);
    ctx->pc = 0x39E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E80Cu;
    // 0x39e810: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x39E80Cu, 0x39E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E814u;
label_39e814:
    // 0x39e814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e818:
    // 0x39e818: 0xc0e6b2e  jal         func_39ACB8
label_39e81c:
    if (ctx->pc == 0x39E81Cu) {
        ctx->pc = 0x39E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E818u;
        // 0x39e81c: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E820u;
        goto label_39e820;
    }
    ctx->pc = 0x39E818u;
    SET_GPR_U32(ctx, 31, 0x39E820u);
    ctx->pc = 0x39E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E818u;
    // 0x39e81c: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ACB8u, 0x39E818u, 0x39E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E820u;
label_39e820:
    // 0x39e820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39e820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e824:
    // 0x39e824: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_39e828:
    if (ctx->pc == 0x39E828u) {
        ctx->pc = 0x39E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E824u;
        // 0x39e828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E82Cu;
        goto label_39e82c;
    }
    ctx->pc = 0x39E824u;
    {
        const bool branch_taken_0x39e824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E824u;
        // 0x39e828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e824) {
            ctx->pc = 0x39E858u;
            goto label_39e858;
        }
    }
    ctx->pc = 0x39E82Cu;
label_39e82c:
    // 0x39e82c: 0xc0e53c8  jal         func_394F20
label_39e830:
    if (ctx->pc == 0x39E830u) {
        ctx->pc = 0x39E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E82Cu;
        // 0x39e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E834u;
        goto label_39e834;
    }
    ctx->pc = 0x39E82Cu;
    SET_GPR_U32(ctx, 31, 0x39E834u);
    ctx->pc = 0x39E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E82Cu;
    // 0x39e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x39E82Cu, 0x39E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E834u;
label_39e834:
    // 0x39e834: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_39e838:
    if (ctx->pc == 0x39E838u) {
        ctx->pc = 0x39E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E834u;
        // 0x39e838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E83Cu;
        goto label_39e83c;
    }
    ctx->pc = 0x39E834u;
    {
        const bool branch_taken_0x39e834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E834u;
        // 0x39e838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e834) {
            ctx->pc = 0x39E858u;
            goto label_39e858;
        }
    }
    ctx->pc = 0x39E83Cu;
label_39e83c:
    // 0x39e83c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39e840:
    // 0x39e840: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39e840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39e844:
    // 0x39e844: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39e848:
    // 0x39e848: 0x40f809  jalr        $v0
label_39e84c:
    if (ctx->pc == 0x39E84Cu) {
        ctx->pc = 0x39E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E848u;
        // 0x39e84c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E850u;
        goto label_39e850;
    }
    ctx->pc = 0x39E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E850u);
        ctx->pc = 0x39E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E848u;
        // 0x39e84c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E848u, 0x39E850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E850u;
label_39e850:
    // 0x39e850: 0xae220364  sw          $v0, 0x364($s1)
    ctx->pc = 0x39e850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 2));
label_39e854:
    // 0x39e854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e858:
    // 0x39e858: 0xc093508  jal         func_24D420
label_39e85c:
    if (ctx->pc == 0x39E85Cu) {
        ctx->pc = 0x39E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E858u;
        // 0x39e85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E860u;
        goto label_39e860;
    }
    ctx->pc = 0x39E858u;
    SET_GPR_U32(ctx, 31, 0x39E860u);
    ctx->pc = 0x39E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E858u;
    // 0x39e85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D420u, 0x39E858u, 0x39E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E860u;
label_39e860:
    // 0x39e860: 0x14b080  sll         $s6, $s4, 2
    ctx->pc = 0x39e860u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_39e864:
    // 0x39e864: 0xc093068  jal         func_24C1A0
label_39e868:
    if (ctx->pc == 0x39E868u) {
        ctx->pc = 0x39E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E864u;
        // 0x39e868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E86Cu;
        goto label_39e86c;
    }
    ctx->pc = 0x39E864u;
    SET_GPR_U32(ctx, 31, 0x39E86Cu);
    ctx->pc = 0x39E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E864u;
    // 0x39e868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C1A0u, 0x39E864u, 0x39E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E86Cu;
label_39e86c:
    // 0x39e86c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e870:
    // 0x39e870: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x39e870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_39e874:
    // 0x39e874: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x39e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_39e878:
    // 0x39e878: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x39e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_39e87c:
    // 0x39e87c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x39e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_39e880:
    // 0x39e880: 0xc040738  jal         func_101CE0
label_39e884:
    if (ctx->pc == 0x39E884u) {
        ctx->pc = 0x39E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E880u;
        // 0x39e884: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E888u;
        goto label_39e888;
    }
    ctx->pc = 0x39E880u;
    SET_GPR_U32(ctx, 31, 0x39E888u);
    ctx->pc = 0x39E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E880u;
    // 0x39e884: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CE0u, 0x39E880u, 0x39E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E888u;
label_39e888:
    // 0x39e888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_39e88c:
    if (ctx->pc == 0x39E88Cu) {
        ctx->pc = 0x39E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E888u;
        // 0x39e88c: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E890u;
        goto label_39e890;
    }
    ctx->pc = 0x39E888u;
    {
        const bool branch_taken_0x39e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E888u;
        // 0x39e88c: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e888) {
            ctx->pc = 0x39E8B0u;
            goto label_39e8b0;
        }
    }
    ctx->pc = 0x39E890u;
label_39e890:
    // 0x39e890: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x39e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_39e894:
    // 0x39e894: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39e894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e898:
    // 0x39e898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39e89c:
    // 0x39e89c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x39e89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_39e8a0:
    // 0x39e8a0: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x39e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_39e8a4:
    // 0x39e8a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39e8a8:
    // 0x39e8a8: 0xc089c20  jal         func_227080
label_39e8ac:
    if (ctx->pc == 0x39E8ACu) {
        ctx->pc = 0x39E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8A8u;
        // 0x39e8ac: 0x8c650050  lw          $a1, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8B0u;
        goto label_39e8b0;
    }
    ctx->pc = 0x39E8A8u;
    SET_GPR_U32(ctx, 31, 0x39E8B0u);
    ctx->pc = 0x39E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8A8u;
    // 0x39e8ac: 0x8c650050  lw          $a1, 0x50($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x39E8A8u, 0x39E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8B0u;
label_39e8b0:
    // 0x39e8b0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e8b4:
    // 0x39e8b4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x39e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_39e8b8:
    // 0x39e8b8: 0x927000ec  lbu         $s0, 0xEC($s3)
    ctx->pc = 0x39e8b8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 236)));
label_39e8bc:
    // 0x39e8bc: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x39e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_39e8c0:
    // 0x39e8c0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x39e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_39e8c4:
    // 0x39e8c4: 0xc04075a  jal         func_101D68
label_39e8c8:
    if (ctx->pc == 0x39E8C8u) {
        ctx->pc = 0x39E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8C4u;
        // 0x39e8c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8CCu;
        goto label_39e8cc;
    }
    ctx->pc = 0x39E8C4u;
    SET_GPR_U32(ctx, 31, 0x39E8CCu);
    ctx->pc = 0x39E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8C4u;
    // 0x39e8c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101D68u, 0x39E8C4u, 0x39E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8CCu;
label_39e8cc:
    // 0x39e8cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39e8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39e8d0:
    // 0x39e8d0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x39e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_39e8d4:
    // 0x39e8d4: 0x248415a0  addiu       $a0, $a0, 0x15A0
    ctx->pc = 0x39e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
label_39e8d8:
    // 0x39e8d8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39e8d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39e8dc:
    // 0x39e8dc: 0xc041532  jal         func_1054C8
label_39e8e0:
    if (ctx->pc == 0x39E8E0u) {
        ctx->pc = 0x39E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8DCu;
        // 0x39e8e0: 0xa27000ec  sb          $s0, 0xEC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8E4u;
        goto label_39e8e4;
    }
    ctx->pc = 0x39E8DCu;
    SET_GPR_U32(ctx, 31, 0x39E8E4u);
    ctx->pc = 0x39E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8DCu;
    // 0x39e8e0: 0xa27000ec  sb          $s0, 0xEC($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x39E8DCu, 0x39E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8E4u;
label_39e8e4:
    // 0x39e8e4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x39e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_39e8e8:
    // 0x39e8e8: 0x248415a0  addiu       $a0, $a0, 0x15A0
    ctx->pc = 0x39e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
label_39e8ec:
    // 0x39e8ec: 0xc041532  jal         func_1054C8
label_39e8f0:
    if (ctx->pc == 0x39E8F0u) {
        ctx->pc = 0x39E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8ECu;
        // 0x39e8f0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E8F4u;
        goto label_39e8f4;
    }
    ctx->pc = 0x39E8ECu;
    SET_GPR_U32(ctx, 31, 0x39E8F4u);
    ctx->pc = 0x39E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8ECu;
    // 0x39e8f0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x39E8ECu, 0x39E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8F4u;
label_39e8f4:
    // 0x39e8f4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x39e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_39e8f8:
    // 0x39e8f8: 0x248415a0  addiu       $a0, $a0, 0x15A0
    ctx->pc = 0x39e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
label_39e8fc:
    // 0x39e8fc: 0xc041532  jal         func_1054C8
label_39e900:
    if (ctx->pc == 0x39E900u) {
        ctx->pc = 0x39E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8FCu;
        // 0x39e900: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E904u;
        goto label_39e904;
    }
    ctx->pc = 0x39E8FCu;
    SET_GPR_U32(ctx, 31, 0x39E904u);
    ctx->pc = 0x39E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8FCu;
    // 0x39e900: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x39E8FCu, 0x39E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E904u;
label_39e904:
    // 0x39e904: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39e904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e908:
    // 0x39e908: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_39e90c:
    if (ctx->pc == 0x39E90Cu) {
        ctx->pc = 0x39E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E908u;
        // 0x39e90c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E910u;
        goto label_39e910;
    }
    ctx->pc = 0x39E908u;
    {
        const bool branch_taken_0x39e908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E908u;
        // 0x39e90c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e908) {
            ctx->pc = 0x39E92Cu;
            goto label_39e92c;
        }
    }
    ctx->pc = 0x39E910u;
label_39e910:
    // 0x39e910: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x39e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_39e914:
    // 0x39e914: 0x8c67bd30  lw          $a3, -0x42D0($v1)
    ctx->pc = 0x39e914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_39e918:
    // 0x39e918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39e91c:
    // 0x39e91c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x39e91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_39e920:
    // 0x39e920: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x39e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39e924:
    // 0x39e924: 0xc04159e  jal         func_105678
label_39e928:
    if (ctx->pc == 0x39E928u) {
        ctx->pc = 0x39E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E924u;
        // 0x39e928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E92Cu;
        goto label_39e92c;
    }
    ctx->pc = 0x39E924u;
    SET_GPR_U32(ctx, 31, 0x39E92Cu);
    ctx->pc = 0x39E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E924u;
    // 0x39e928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x39E924u, 0x39E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E92Cu;
label_39e92c:
    // 0x39e92c: 0x52a00012  beql        $s5, $zero, . + 4 + (0x12 << 2)
label_39e930:
    if (ctx->pc == 0x39E930u) {
        ctx->pc = 0x39E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E92Cu;
        // 0x39e930: 0x926200eb  lbu         $v0, 0xEB($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 235)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E934u;
        goto label_39e934;
    }
    ctx->pc = 0x39E92Cu;
    {
        const bool branch_taken_0x39e92c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e92c) {
            ctx->pc = 0x39E930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E92Cu;
            // 0x39e930: 0x926200eb  lbu         $v0, 0xEB($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 235)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E978u;
            goto label_39e978;
        }
    }
    ctx->pc = 0x39E934u;
label_39e934:
    // 0x39e934: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39e938:
    // 0x39e938: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e93c:
    // 0x39e93c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39e93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39e940:
    // 0x39e940: 0x8c5000a0  lw          $s0, 0xA0($v0)
    ctx->pc = 0x39e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_39e944:
    // 0x39e944: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39e948:
    // 0x39e948: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x39e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_39e94c:
    // 0x39e94c: 0x40f809  jalr        $v0
label_39e950:
    if (ctx->pc == 0x39E950u) {
        ctx->pc = 0x39E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E94Cu;
        // 0x39e950: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E954u;
        goto label_39e954;
    }
    ctx->pc = 0x39E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E954u);
        ctx->pc = 0x39E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E94Cu;
        // 0x39e950: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E94Cu, 0x39E954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E954u;
label_39e954:
    // 0x39e954: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x39e954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e958:
    // 0x39e958: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x39e958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39e95c:
    // 0x39e95c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x39e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_39e960:
    // 0x39e960: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39e960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39e964:
    // 0x39e964: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39e968:
    // 0x39e968: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x39e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39e96c:
    // 0x39e96c: 0xc041a70  jal         func_1069C0
label_39e970:
    if (ctx->pc == 0x39E970u) {
        ctx->pc = 0x39E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E96Cu;
        // 0x39e970: 0x244900b8  addiu       $t1, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E974u;
        goto label_39e974;
    }
    ctx->pc = 0x39E96Cu;
    SET_GPR_U32(ctx, 31, 0x39E974u);
    ctx->pc = 0x39E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E96Cu;
    // 0x39e970: 0x244900b8  addiu       $t1, $v0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x39E96Cu, 0x39E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E974u;
label_39e974:
    // 0x39e974: 0x926200eb  lbu         $v0, 0xEB($s3)
    ctx->pc = 0x39e974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 235)));
label_39e978:
    // 0x39e978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39e97c:
    if (ctx->pc == 0x39E97Cu) {
        ctx->pc = 0x39E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E978u;
        // 0x39e97c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E980u;
        goto label_39e980;
    }
    ctx->pc = 0x39E978u;
    {
        const bool branch_taken_0x39e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E978u;
        // 0x39e97c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e978) {
            ctx->pc = 0x39E988u;
            goto label_39e988;
        }
    }
    ctx->pc = 0x39E980u;
label_39e980:
    // 0x39e980: 0xc041b0e  jal         func_106C38
label_39e984:
    if (ctx->pc == 0x39E984u) {
        ctx->pc = 0x39E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E980u;
        // 0x39e984: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E988u;
        goto label_39e988;
    }
    ctx->pc = 0x39E980u;
    SET_GPR_U32(ctx, 31, 0x39E988u);
    ctx->pc = 0x39E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E980u;
    // 0x39e984: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C38u, 0x39E980u, 0x39E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E988u;
label_39e988:
    // 0x39e988: 0x8e6300a4  lw          $v1, 0xA4($s3)
    ctx->pc = 0x39e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_39e98c:
    // 0x39e98c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39e990:
    // 0x39e990: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x39e990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_39e994:
    // 0x39e994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e998:
    // 0x39e998: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39e99c:
    if (ctx->pc == 0x39E99Cu) {
        ctx->pc = 0x39E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E998u;
        // 0x39e99c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9A0u;
        goto label_39e9a0;
    }
    ctx->pc = 0x39E998u;
    {
        const bool branch_taken_0x39e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E998u;
        // 0x39e99c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e998) {
            ctx->pc = 0x39E9A8u;
            goto label_39e9a8;
        }
    }
    ctx->pc = 0x39E9A0u;
label_39e9a0:
    // 0x39e9a0: 0xc041b0e  jal         func_106C38
label_39e9a4:
    if (ctx->pc == 0x39E9A4u) {
        ctx->pc = 0x39E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9A0u;
        // 0x39e9a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9A8u;
        goto label_39e9a8;
    }
    ctx->pc = 0x39E9A0u;
    SET_GPR_U32(ctx, 31, 0x39E9A8u);
    ctx->pc = 0x39E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E9A0u;
    // 0x39e9a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C38u, 0x39E9A0u, 0x39E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E9A8u;
label_39e9a8:
    // 0x39e9a8: 0x926200ea  lbu         $v0, 0xEA($s3)
    ctx->pc = 0x39e9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 234)));
label_39e9ac:
    // 0x39e9ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x39e9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39e9b0:
    // 0x39e9b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_39e9b4:
    if (ctx->pc == 0x39E9B4u) {
        ctx->pc = 0x39E9B8u;
        goto label_39e9b8;
    }
    ctx->pc = 0x39E9B0u;
    {
        const bool branch_taken_0x39e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e9b0) {
            ctx->pc = 0x39E9D0u;
            goto label_39e9d0;
        }
    }
    ctx->pc = 0x39E9B8u;
label_39e9b8:
    // 0x39e9b8: 0x926200ed  lbu         $v0, 0xED($s3)
    ctx->pc = 0x39e9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39e9bc:
    // 0x39e9bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39e9c0:
    if (ctx->pc == 0x39E9C0u) {
        ctx->pc = 0x39E9C4u;
        goto label_39e9c4;
    }
    ctx->pc = 0x39E9BCu;
    {
        const bool branch_taken_0x39e9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e9bc) {
            ctx->pc = 0x39E9D0u;
            goto label_39e9d0;
        }
    }
    ctx->pc = 0x39E9C4u;
label_39e9c4:
    // 0x39e9c4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x39e9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_39e9c8:
    // 0x39e9c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x39e9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_39e9cc:
    // 0x39e9cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x39e9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39e9d0:
    // 0x39e9d0: 0xc0579c6  jal         func_15E718
label_39e9d4:
    if (ctx->pc == 0x39E9D4u) {
        ctx->pc = 0x39E9D8u;
        goto label_39e9d8;
    }
    ctx->pc = 0x39E9D0u;
    SET_GPR_U32(ctx, 31, 0x39E9D8u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x39E9D0u, 0x39E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E9D8u;
label_39e9d8:
    // 0x39e9d8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x39e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39e9dc:
    // 0x39e9dc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39e9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39e9e0:
    // 0x39e9e0: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x39e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39e9e4:
    // 0x39e9e4: 0xa0f809  jalr        $a1
label_39e9e8:
    if (ctx->pc == 0x39E9E8u) {
        ctx->pc = 0x39E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9E4u;
        // 0x39e9e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9ECu;
        goto label_39e9ec;
    }
    ctx->pc = 0x39E9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39E9ECu);
        ctx->pc = 0x39E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9E4u;
        // 0x39e9e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E9E4u, 0x39E9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E9ECu;
label_39e9ec:
    // 0x39e9ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39e9ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e9f0:
    // 0x39e9f0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x39e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_39e9f4:
    // 0x39e9f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_39e9f8:
    if (ctx->pc == 0x39E9F8u) {
        ctx->pc = 0x39E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9F4u;
        // 0x39e9f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E9FCu;
        goto label_39e9fc;
    }
    ctx->pc = 0x39E9F4u;
    {
        const bool branch_taken_0x39e9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9F4u;
        // 0x39e9f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e9f4) {
            ctx->pc = 0x39EA04u;
            goto label_39ea04;
        }
    }
    ctx->pc = 0x39E9FCu;
label_39e9fc:
    // 0x39e9fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_39ea00:
    if (ctx->pc == 0x39EA00u) {
        ctx->pc = 0x39EA04u;
        goto label_39ea04;
    }
    ctx->pc = 0x39E9FCu;
    {
        const bool branch_taken_0x39e9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e9fc) {
            ctx->pc = 0x39EA08u;
            goto label_39ea08;
        }
    }
    ctx->pc = 0x39EA04u;
label_39ea04:
    // 0x39ea04: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x39ea04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39ea08:
    // 0x39ea08: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_39ea0c:
    if (ctx->pc == 0x39EA0Cu) {
        ctx->pc = 0x39EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA08u;
        // 0x39ea0c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA10u;
        goto label_39ea10;
    }
    ctx->pc = 0x39EA08u;
    {
        const bool branch_taken_0x39ea08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA08u;
        // 0x39ea0c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea08) {
            ctx->pc = 0x39EA28u;
            goto label_39ea28;
        }
    }
    ctx->pc = 0x39EA10u;
label_39ea10:
    // 0x39ea10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39ea10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39ea14:
    // 0x39ea14: 0x8c67bd30  lw          $a3, -0x42D0($v1)
    ctx->pc = 0x39ea14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_39ea18:
    // 0x39ea18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x39ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39ea1c:
    // 0x39ea1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x39ea1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39ea20:
    // 0x39ea20: 0xc041b20  jal         func_106C80
label_39ea24:
    if (ctx->pc == 0x39EA24u) {
        ctx->pc = 0x39EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA20u;
        // 0x39ea24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA28u;
        goto label_39ea28;
    }
    ctx->pc = 0x39EA20u;
    SET_GPR_U32(ctx, 31, 0x39EA28u);
    ctx->pc = 0x39EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA20u;
    // 0x39ea24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x39EA20u, 0x39EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA28u;
label_39ea28:
    // 0x39ea28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x39ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39ea2c:
    // 0x39ea2c: 0xc05dc0e  jal         func_177038
label_39ea30:
    if (ctx->pc == 0x39EA30u) {
        ctx->pc = 0x39EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA2Cu;
        // 0x39ea30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA34u;
        goto label_39ea34;
    }
    ctx->pc = 0x39EA2Cu;
    SET_GPR_U32(ctx, 31, 0x39EA34u);
    ctx->pc = 0x39EA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA2Cu;
    // 0x39ea30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x39EA2Cu, 0x39EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA34u;
label_39ea34:
    // 0x39ea34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x39ea34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39ea38:
    // 0x39ea38: 0xc05d53a  jal         func_1754E8
label_39ea3c:
    if (ctx->pc == 0x39EA3Cu) {
        ctx->pc = 0x39EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA38u;
        // 0x39ea3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA40u;
        goto label_39ea40;
    }
    ctx->pc = 0x39EA38u;
    SET_GPR_U32(ctx, 31, 0x39EA40u);
    ctx->pc = 0x39EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA38u;
    // 0x39ea3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x39EA38u, 0x39EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA40u;
label_39ea40:
    // 0x39ea40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x39ea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39ea44:
    // 0x39ea44: 0xc05d4f6  jal         func_1753D8
label_39ea48:
    if (ctx->pc == 0x39EA48u) {
        ctx->pc = 0x39EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA44u;
        // 0x39ea48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA4Cu;
        goto label_39ea4c;
    }
    ctx->pc = 0x39EA44u;
    SET_GPR_U32(ctx, 31, 0x39EA4Cu);
    ctx->pc = 0x39EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA44u;
    // 0x39ea48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x39EA44u, 0x39EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA4Cu;
label_39ea4c:
    // 0x39ea4c: 0x966200f2  lhu         $v0, 0xF2($s3)
    ctx->pc = 0x39ea4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
label_39ea50:
    // 0x39ea50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39ea54:
    // 0x39ea54: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x39ea54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
label_39ea58:
    // 0x39ea58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x39ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_39ea5c:
    // 0x39ea5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39ea5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39ea60:
    // 0x39ea60: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39ea64:
    // 0x39ea64: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x39ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_39ea68:
    // 0x39ea68: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x39ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_39ea6c:
    // 0x39ea6c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39ea6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_39ea70:
    // 0x39ea70: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39ea70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39ea74:
    // 0x39ea74: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
label_39ea78:
    if (ctx->pc == 0x39EA78u) {
        ctx->pc = 0x39EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA74u;
        // 0x39ea78: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA7Cu;
        goto label_39ea7c;
    }
    ctx->pc = 0x39EA74u;
    {
        const bool branch_taken_0x39ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA74u;
        // 0x39ea78: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea74) {
            ctx->pc = 0x39E640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e640;
        }
    }
    ctx->pc = 0x39EA7Cu;
label_39ea7c:
    // 0x39ea7c: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39ea7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39ea80:
    // 0x39ea80: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_39ea84:
    if (ctx->pc == 0x39EA84u) {
        ctx->pc = 0x39EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA80u;
        // 0x39ea84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EA88u;
        goto label_39ea88;
    }
    ctx->pc = 0x39EA80u;
    {
        const bool branch_taken_0x39ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA80u;
        // 0x39ea84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea80) {
            ctx->pc = 0x39EB4Cu;
            goto label_39eb4c;
        }
    }
    ctx->pc = 0x39EA88u;
label_39ea88:
    // 0x39ea88: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x39ea88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ea8c:
    // 0x39ea8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39ea8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ea90:
    // 0x39ea90: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x39ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_39ea94:
    // 0x39ea94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39ea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39ea98:
    // 0x39ea98: 0xc0e824a  jal         func_3A0928
label_39ea9c:
    if (ctx->pc == 0x39EA9Cu) {
        ctx->pc = 0x39EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA98u;
        // 0x39ea9c: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAA0u;
        goto label_39eaa0;
    }
    ctx->pc = 0x39EA98u;
    SET_GPR_U32(ctx, 31, 0x39EAA0u);
    ctx->pc = 0x39EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA98u;
    // 0x39ea9c: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0928u, 0x39EA98u, 0x39EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EAA0u;
label_39eaa0:
    // 0x39eaa0: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x39eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39eaa4:
    // 0x39eaa4: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x39eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39eaa8:
    // 0x39eaa8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39eaac:
    // 0x39eaac: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39eab0:
    // 0x39eab0: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
label_39eab4:
    if (ctx->pc == 0x39EAB4u) {
        ctx->pc = 0x39EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAB0u;
        // 0x39eab4: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAB8u;
        goto label_39eab8;
    }
    ctx->pc = 0x39EAB0u;
    {
        const bool branch_taken_0x39eab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39eab0) {
            ctx->pc = 0x39EAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EAB0u;
            // 0x39eab4: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EB34u;
            goto label_39eb34;
        }
    }
    ctx->pc = 0x39EAB8u;
label_39eab8:
    // 0x39eab8: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x39eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_39eabc:
    // 0x39eabc: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x39eabcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_39eac0:
    // 0x39eac0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x39eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_39eac4:
    // 0x39eac4: 0x927000ec  lbu         $s0, 0xEC($s3)
    ctx->pc = 0x39eac4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 236)));
label_39eac8:
    // 0x39eac8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x39eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39eacc:
    // 0x39eacc: 0xc0d534a  jal         func_354D28
label_39ead0:
    if (ctx->pc == 0x39EAD0u) {
        ctx->pc = 0x39EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EACCu;
        // 0x39ead0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EAD4u;
        goto label_39ead4;
    }
    ctx->pc = 0x39EACCu;
    SET_GPR_U32(ctx, 31, 0x39EAD4u);
    ctx->pc = 0x39EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EACCu;
    // 0x39ead0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D28u, 0x39EACCu, 0x39EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EAD4u;
label_39ead4:
    // 0x39ead4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39ead4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39ead8:
    // 0x39ead8: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x39ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39eadc:
    // 0x39eadc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39eadcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39eae0:
    // 0x39eae0: 0x8e710078  lw          $s1, 0x78($s3)
    ctx->pc = 0x39eae0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_39eae4:
    // 0x39eae4: 0xa27000ec  sb          $s0, 0xEC($s3)
    ctx->pc = 0x39eae4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 16));
label_39eae8:
    // 0x39eae8: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x39eae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_39eaec:
    // 0x39eaec: 0x8ca300ac  lw          $v1, 0xAC($a1)
    ctx->pc = 0x39eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_39eaf0:
    // 0x39eaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39eaf4:
    // 0x39eaf4: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x39eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
label_39eaf8:
    // 0x39eaf8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x39eaf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_39eafc:
    // 0x39eafc: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x39eafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39eb00:
    // 0x39eb00: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39eb04:
    // 0x39eb04: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x39eb04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_39eb08:
    // 0x39eb08: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x39eb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39eb0c:
    // 0x39eb0c: 0xc0d58c2  jal         func_356308
label_39eb10:
    if (ctx->pc == 0x39EB10u) {
        ctx->pc = 0x39EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB0Cu;
        // 0x39eb10: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EB14u;
        goto label_39eb14;
    }
    ctx->pc = 0x39EB0Cu;
    SET_GPR_U32(ctx, 31, 0x39EB14u);
    ctx->pc = 0x39EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EB0Cu;
    // 0x39eb10: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356308u, 0x39EB0Cu, 0x39EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EB14u;
label_39eb14:
    // 0x39eb14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x39eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_39eb18:
    // 0x39eb18: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x39eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_39eb1c:
    // 0x39eb1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x39eb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_39eb20:
    // 0x39eb20: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x39eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_39eb24:
    // 0x39eb24: 0x966300f2  lhu         $v1, 0xF2($s3)
    ctx->pc = 0x39eb24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
label_39eb28:
    // 0x39eb28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39eb2c:
    // 0x39eb2c: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x39eb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
label_39eb30:
    // 0x39eb30: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39eb34:
    // 0x39eb34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39eb34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39eb38:
    // 0x39eb38: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x39eb38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_39eb3c:
    // 0x39eb3c: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39eb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39eb40:
    // 0x39eb40: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39eb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39eb44:
    // 0x39eb44: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_39eb48:
    if (ctx->pc == 0x39EB48u) {
        ctx->pc = 0x39EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB44u;
        // 0x39eb48: 0x26b50070  addiu       $s5, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EB4Cu;
        goto label_39eb4c;
    }
    ctx->pc = 0x39EB44u;
    {
        const bool branch_taken_0x39eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB44u;
        // 0x39eb48: 0x26b50070  addiu       $s5, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb44) {
            ctx->pc = 0x39EA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ea90;
        }
    }
    ctx->pc = 0x39EB4Cu;
label_39eb4c:
    // 0x39eb4c: 0x926300ec  lbu         $v1, 0xEC($s3)
    ctx->pc = 0x39eb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 236)));
label_39eb50:
    // 0x39eb50: 0x926200eb  lbu         $v0, 0xEB($s3)
    ctx->pc = 0x39eb50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 235)));
label_39eb54:
    // 0x39eb54: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x39eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_39eb58:
    // 0x39eb58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39eb5c:
    // 0x39eb5c: 0xa26300ec  sb          $v1, 0xEC($s3)
    ctx->pc = 0x39eb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 236), (uint8_t)GPR_U32(ctx, 3));
label_39eb60:
    // 0x39eb60: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x39eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_39eb64:
    // 0x39eb64: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x39eb64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_39eb68:
    // 0x39eb68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39eb6c:
    // 0x39eb6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39eb70:
    if (ctx->pc == 0x39EB70u) {
        ctx->pc = 0x39EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB6Cu;
        // 0x39eb70: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EB74u;
        goto label_39eb74;
    }
    ctx->pc = 0x39EB6Cu;
    {
        const bool branch_taken_0x39eb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39eb6c) {
            ctx->pc = 0x39EB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EB6Cu;
            // 0x39eb70: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EB80u;
            goto label_39eb80;
        }
    }
    ctx->pc = 0x39EB74u;
label_39eb74:
    // 0x39eb74: 0x966200f2  lhu         $v0, 0xF2($s3)
    ctx->pc = 0x39eb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
label_39eb78:
    // 0x39eb78: 0xa66200f4  sh          $v0, 0xF4($s3)
    ctx->pc = 0x39eb78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 244), (uint16_t)GPR_U32(ctx, 2));
label_39eb7c:
    // 0x39eb7c: 0x926200ed  lbu         $v0, 0xED($s3)
    ctx->pc = 0x39eb7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39eb80:
    // 0x39eb80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_39eb84:
    if (ctx->pc == 0x39EB84u) {
        ctx->pc = 0x39EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB80u;
        // 0x39eb84: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EB88u;
        goto label_39eb88;
    }
    ctx->pc = 0x39EB80u;
    {
        const bool branch_taken_0x39eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB80u;
        // 0x39eb84: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb80) {
            ctx->pc = 0x39EBE4u;
            goto label_39ebe4;
        }
    }
    ctx->pc = 0x39EB88u;
label_39eb88:
    // 0x39eb88: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x39eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39eb8c:
    // 0x39eb8c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39eb8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39eb90:
    // 0x39eb90: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_39eb94:
    if (ctx->pc == 0x39EB94u) {
        ctx->pc = 0x39EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB90u;
        // 0x39eb94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EB98u;
        goto label_39eb98;
    }
    ctx->pc = 0x39EB90u;
    {
        const bool branch_taken_0x39eb90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB90u;
        // 0x39eb94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb90) {
            ctx->pc = 0x39EBE4u;
            goto label_39ebe4;
        }
    }
    ctx->pc = 0x39EB98u;
label_39eb98:
    // 0x39eb98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39eb9c:
    // 0x39eb9c: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x39eb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_39eba0:
    // 0x39eba0: 0x926200e8  lbu         $v0, 0xE8($s3)
    ctx->pc = 0x39eba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 232)));
label_39eba4:
    // 0x39eba4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x39eba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_39eba8:
    // 0x39eba8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39eba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39ebac:
    // 0x39ebac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_39ebb0:
    if (ctx->pc == 0x39EBB0u) {
        ctx->pc = 0x39EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBACu;
        // 0x39ebb0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EBB4u;
        goto label_39ebb4;
    }
    ctx->pc = 0x39EBACu;
    {
        const bool branch_taken_0x39ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBACu;
        // 0x39ebb0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ebac) {
            ctx->pc = 0x39EBB8u;
            goto label_39ebb8;
        }
    }
    ctx->pc = 0x39EBB4u;
label_39ebb4:
    // 0x39ebb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39ebb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39ebb8:
    // 0x39ebb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x39ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39ebbc:
    // 0x39ebbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ebc0:
    // 0x39ebc0: 0xc063514  jal         func_18D450
label_39ebc4:
    if (ctx->pc == 0x39EBC4u) {
        ctx->pc = 0x39EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBC0u;
        // 0x39ebc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EBC8u;
        goto label_39ebc8;
    }
    ctx->pc = 0x39EBC0u;
    SET_GPR_U32(ctx, 31, 0x39EBC8u);
    ctx->pc = 0x39EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBC0u;
    // 0x39ebc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x39EBC0u, 0x39EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBC8u;
label_39ebc8:
    // 0x39ebc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39ebc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_39ebcc:
    // 0x39ebcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39ebd0:
    // 0x39ebd0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x39ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39ebd4:
    // 0x39ebd4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39ebd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39ebd8:
    // 0x39ebd8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x39ebd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39ebdc:
    // 0x39ebdc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_39ebe0:
    if (ctx->pc == 0x39EBE0u) {
        ctx->pc = 0x39EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBDCu;
        // 0x39ebe0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EBE4u;
        goto label_39ebe4;
    }
    ctx->pc = 0x39EBDCu;
    {
        const bool branch_taken_0x39ebdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBDCu;
        // 0x39ebe0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ebdc) {
            ctx->pc = 0x39EBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eba0;
        }
    }
    ctx->pc = 0x39EBE4u;
label_39ebe4:
    // 0x39ebe4: 0x926200ef  lbu         $v0, 0xEF($s3)
    ctx->pc = 0x39ebe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 239)));
label_39ebe8:
    // 0x39ebe8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39ebec:
    if (ctx->pc == 0x39EBECu) {
        ctx->pc = 0x39EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBE8u;
        // 0x39ebec: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EBF0u;
        goto label_39ebf0;
    }
    ctx->pc = 0x39EBE8u;
    {
        const bool branch_taken_0x39ebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ebe8) {
            ctx->pc = 0x39EBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EBE8u;
            // 0x39ebec: 0x926200ed  lbu         $v0, 0xED($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EBFCu;
            goto label_39ebfc;
        }
    }
    ctx->pc = 0x39EBF0u;
label_39ebf0:
    // 0x39ebf0: 0xc0a5186  jal         func_294618
label_39ebf4:
    if (ctx->pc == 0x39EBF4u) {
        ctx->pc = 0x39EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBF0u;
        // 0x39ebf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EBF8u;
        goto label_39ebf8;
    }
    ctx->pc = 0x39EBF0u;
    SET_GPR_U32(ctx, 31, 0x39EBF8u);
    ctx->pc = 0x39EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBF0u;
    // 0x39ebf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294618u, 0x39EBF0u, 0x39EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBF8u;
label_39ebf8:
    // 0x39ebf8: 0x926200ed  lbu         $v0, 0xED($s3)
    ctx->pc = 0x39ebf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 237)));
label_39ebfc:
    // 0x39ebfc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39ec00:
    if (ctx->pc == 0x39EC00u) {
        ctx->pc = 0x39EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBFCu;
        // 0x39ec00: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EC04u;
        goto label_39ec04;
    }
    ctx->pc = 0x39EBFCu;
    {
        const bool branch_taken_0x39ebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ebfc) {
            ctx->pc = 0x39EC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EBFCu;
            // 0x39ec00: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EC20u;
            goto label_39ec20;
        }
    }
    ctx->pc = 0x39EC04u;
label_39ec04:
    // 0x39ec04: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x39ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39ec08:
    // 0x39ec08: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x39ec08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_39ec0c:
    // 0x39ec0c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_39ec10:
    if (ctx->pc == 0x39EC10u) {
        ctx->pc = 0x39EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC0Cu;
        // 0x39ec10: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EC14u;
        goto label_39ec14;
    }
    ctx->pc = 0x39EC0Cu;
    {
        const bool branch_taken_0x39ec0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ec0c) {
            ctx->pc = 0x39EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EC0Cu;
            // 0x39ec10: 0x8e6300a0  lw          $v1, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EC20u;
            goto label_39ec20;
        }
    }
    ctx->pc = 0x39EC14u;
label_39ec14:
    // 0x39ec14: 0xc087b34  jal         func_21ECD0
label_39ec18:
    if (ctx->pc == 0x39EC18u) {
        ctx->pc = 0x39EC1Cu;
        goto label_39ec1c;
    }
    ctx->pc = 0x39EC14u;
    SET_GPR_U32(ctx, 31, 0x39EC1Cu);
    ctx->pc = 0x21ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ECD0u, 0x39EC14u, 0x39EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC1Cu;
label_39ec1c:
    // 0x39ec1c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x39ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39ec20:
    // 0x39ec20: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39ec24:
    // 0x39ec24: 0xa462001c  sh          $v0, 0x1C($v1)
    ctx->pc = 0x39ec24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
label_39ec28:
    // 0x39ec28: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x39ec28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39ec2c:
    // 0x39ec2c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x39ec2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39ec30:
    // 0x39ec30: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x39ec30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39ec34:
    // 0x39ec34: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x39ec34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39ec38:
    // 0x39ec38: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x39ec38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39ec3c:
    // 0x39ec3c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x39ec3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39ec40:
    // 0x39ec40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x39ec40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39ec44:
    // 0x39ec44: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x39ec44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39ec48:
    // 0x39ec48: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x39ec48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39ec4c:
    // 0x39ec4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39ec50:
    // 0x39ec50: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x39ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39ec54:
    // 0x39ec54: 0x3e00008  jr          $ra
label_39ec58:
    if (ctx->pc == 0x39EC58u) {
        ctx->pc = 0x39EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC54u;
        // 0x39ec58: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EC5Cu;
        goto label_39ec5c;
    }
    ctx->pc = 0x39EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC54u;
        // 0x39ec58: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EC5Cu;
label_39ec5c:
    // 0x39ec5c: 0x0  nop
    ctx->pc = 0x39ec5cu;
    // NOP
    ctx->pc = 0x39ec60u;
}
