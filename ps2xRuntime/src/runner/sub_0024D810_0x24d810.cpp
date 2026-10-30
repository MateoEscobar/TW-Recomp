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

// Function: sub_0024D810
// Address: 0x24d810 - 0x24dee8
void sub_0024D810_0x24d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D810_0x24d810");
#endif

    switch (ctx->pc) {
        case 0x24d810u: goto label_24d810;
        case 0x24d814u: goto label_24d814;
        case 0x24d818u: goto label_24d818;
        case 0x24d81cu: goto label_24d81c;
        case 0x24d820u: goto label_24d820;
        case 0x24d824u: goto label_24d824;
        case 0x24d828u: goto label_24d828;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d830u: goto label_24d830;
        case 0x24d834u: goto label_24d834;
        case 0x24d838u: goto label_24d838;
        case 0x24d83cu: goto label_24d83c;
        case 0x24d840u: goto label_24d840;
        case 0x24d844u: goto label_24d844;
        case 0x24d848u: goto label_24d848;
        case 0x24d84cu: goto label_24d84c;
        case 0x24d850u: goto label_24d850;
        case 0x24d854u: goto label_24d854;
        case 0x24d858u: goto label_24d858;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d860u: goto label_24d860;
        case 0x24d864u: goto label_24d864;
        case 0x24d868u: goto label_24d868;
        case 0x24d86cu: goto label_24d86c;
        case 0x24d870u: goto label_24d870;
        case 0x24d874u: goto label_24d874;
        case 0x24d878u: goto label_24d878;
        case 0x24d87cu: goto label_24d87c;
        case 0x24d880u: goto label_24d880;
        case 0x24d884u: goto label_24d884;
        case 0x24d888u: goto label_24d888;
        case 0x24d88cu: goto label_24d88c;
        case 0x24d890u: goto label_24d890;
        case 0x24d894u: goto label_24d894;
        case 0x24d898u: goto label_24d898;
        case 0x24d89cu: goto label_24d89c;
        case 0x24d8a0u: goto label_24d8a0;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8a8u: goto label_24d8a8;
        case 0x24d8acu: goto label_24d8ac;
        case 0x24d8b0u: goto label_24d8b0;
        case 0x24d8b4u: goto label_24d8b4;
        case 0x24d8b8u: goto label_24d8b8;
        case 0x24d8bcu: goto label_24d8bc;
        case 0x24d8c0u: goto label_24d8c0;
        case 0x24d8c4u: goto label_24d8c4;
        case 0x24d8c8u: goto label_24d8c8;
        case 0x24d8ccu: goto label_24d8cc;
        case 0x24d8d0u: goto label_24d8d0;
        case 0x24d8d4u: goto label_24d8d4;
        case 0x24d8d8u: goto label_24d8d8;
        case 0x24d8dcu: goto label_24d8dc;
        case 0x24d8e0u: goto label_24d8e0;
        case 0x24d8e4u: goto label_24d8e4;
        case 0x24d8e8u: goto label_24d8e8;
        case 0x24d8ecu: goto label_24d8ec;
        case 0x24d8f0u: goto label_24d8f0;
        case 0x24d8f4u: goto label_24d8f4;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d8fcu: goto label_24d8fc;
        case 0x24d900u: goto label_24d900;
        case 0x24d904u: goto label_24d904;
        case 0x24d908u: goto label_24d908;
        case 0x24d90cu: goto label_24d90c;
        case 0x24d910u: goto label_24d910;
        case 0x24d914u: goto label_24d914;
        case 0x24d918u: goto label_24d918;
        case 0x24d91cu: goto label_24d91c;
        case 0x24d920u: goto label_24d920;
        case 0x24d924u: goto label_24d924;
        case 0x24d928u: goto label_24d928;
        case 0x24d92cu: goto label_24d92c;
        case 0x24d930u: goto label_24d930;
        case 0x24d934u: goto label_24d934;
        case 0x24d938u: goto label_24d938;
        case 0x24d93cu: goto label_24d93c;
        case 0x24d940u: goto label_24d940;
        case 0x24d944u: goto label_24d944;
        case 0x24d948u: goto label_24d948;
        case 0x24d94cu: goto label_24d94c;
        case 0x24d950u: goto label_24d950;
        case 0x24d954u: goto label_24d954;
        case 0x24d958u: goto label_24d958;
        case 0x24d95cu: goto label_24d95c;
        case 0x24d960u: goto label_24d960;
        case 0x24d964u: goto label_24d964;
        case 0x24d968u: goto label_24d968;
        case 0x24d96cu: goto label_24d96c;
        case 0x24d970u: goto label_24d970;
        case 0x24d974u: goto label_24d974;
        case 0x24d978u: goto label_24d978;
        case 0x24d97cu: goto label_24d97c;
        case 0x24d980u: goto label_24d980;
        case 0x24d984u: goto label_24d984;
        case 0x24d988u: goto label_24d988;
        case 0x24d98cu: goto label_24d98c;
        case 0x24d990u: goto label_24d990;
        case 0x24d994u: goto label_24d994;
        case 0x24d998u: goto label_24d998;
        case 0x24d99cu: goto label_24d99c;
        case 0x24d9a0u: goto label_24d9a0;
        case 0x24d9a4u: goto label_24d9a4;
        case 0x24d9a8u: goto label_24d9a8;
        case 0x24d9acu: goto label_24d9ac;
        case 0x24d9b0u: goto label_24d9b0;
        case 0x24d9b4u: goto label_24d9b4;
        case 0x24d9b8u: goto label_24d9b8;
        case 0x24d9bcu: goto label_24d9bc;
        case 0x24d9c0u: goto label_24d9c0;
        case 0x24d9c4u: goto label_24d9c4;
        case 0x24d9c8u: goto label_24d9c8;
        case 0x24d9ccu: goto label_24d9cc;
        case 0x24d9d0u: goto label_24d9d0;
        case 0x24d9d4u: goto label_24d9d4;
        case 0x24d9d8u: goto label_24d9d8;
        case 0x24d9dcu: goto label_24d9dc;
        case 0x24d9e0u: goto label_24d9e0;
        case 0x24d9e4u: goto label_24d9e4;
        case 0x24d9e8u: goto label_24d9e8;
        case 0x24d9ecu: goto label_24d9ec;
        case 0x24d9f0u: goto label_24d9f0;
        case 0x24d9f4u: goto label_24d9f4;
        case 0x24d9f8u: goto label_24d9f8;
        case 0x24d9fcu: goto label_24d9fc;
        case 0x24da00u: goto label_24da00;
        case 0x24da04u: goto label_24da04;
        case 0x24da08u: goto label_24da08;
        case 0x24da0cu: goto label_24da0c;
        case 0x24da10u: goto label_24da10;
        case 0x24da14u: goto label_24da14;
        case 0x24da18u: goto label_24da18;
        case 0x24da1cu: goto label_24da1c;
        case 0x24da20u: goto label_24da20;
        case 0x24da24u: goto label_24da24;
        case 0x24da28u: goto label_24da28;
        case 0x24da2cu: goto label_24da2c;
        case 0x24da30u: goto label_24da30;
        case 0x24da34u: goto label_24da34;
        case 0x24da38u: goto label_24da38;
        case 0x24da3cu: goto label_24da3c;
        case 0x24da40u: goto label_24da40;
        case 0x24da44u: goto label_24da44;
        case 0x24da48u: goto label_24da48;
        case 0x24da4cu: goto label_24da4c;
        case 0x24da50u: goto label_24da50;
        case 0x24da54u: goto label_24da54;
        case 0x24da58u: goto label_24da58;
        case 0x24da5cu: goto label_24da5c;
        case 0x24da60u: goto label_24da60;
        case 0x24da64u: goto label_24da64;
        case 0x24da68u: goto label_24da68;
        case 0x24da6cu: goto label_24da6c;
        case 0x24da70u: goto label_24da70;
        case 0x24da74u: goto label_24da74;
        case 0x24da78u: goto label_24da78;
        case 0x24da7cu: goto label_24da7c;
        case 0x24da80u: goto label_24da80;
        case 0x24da84u: goto label_24da84;
        case 0x24da88u: goto label_24da88;
        case 0x24da8cu: goto label_24da8c;
        case 0x24da90u: goto label_24da90;
        case 0x24da94u: goto label_24da94;
        case 0x24da98u: goto label_24da98;
        case 0x24da9cu: goto label_24da9c;
        case 0x24daa0u: goto label_24daa0;
        case 0x24daa4u: goto label_24daa4;
        case 0x24daa8u: goto label_24daa8;
        case 0x24daacu: goto label_24daac;
        case 0x24dab0u: goto label_24dab0;
        case 0x24dab4u: goto label_24dab4;
        case 0x24dab8u: goto label_24dab8;
        case 0x24dabcu: goto label_24dabc;
        case 0x24dac0u: goto label_24dac0;
        case 0x24dac4u: goto label_24dac4;
        case 0x24dac8u: goto label_24dac8;
        case 0x24daccu: goto label_24dacc;
        case 0x24dad0u: goto label_24dad0;
        case 0x24dad4u: goto label_24dad4;
        case 0x24dad8u: goto label_24dad8;
        case 0x24dadcu: goto label_24dadc;
        case 0x24dae0u: goto label_24dae0;
        case 0x24dae4u: goto label_24dae4;
        case 0x24dae8u: goto label_24dae8;
        case 0x24daecu: goto label_24daec;
        case 0x24daf0u: goto label_24daf0;
        case 0x24daf4u: goto label_24daf4;
        case 0x24daf8u: goto label_24daf8;
        case 0x24dafcu: goto label_24dafc;
        case 0x24db00u: goto label_24db00;
        case 0x24db04u: goto label_24db04;
        case 0x24db08u: goto label_24db08;
        case 0x24db0cu: goto label_24db0c;
        case 0x24db10u: goto label_24db10;
        case 0x24db14u: goto label_24db14;
        case 0x24db18u: goto label_24db18;
        case 0x24db1cu: goto label_24db1c;
        case 0x24db20u: goto label_24db20;
        case 0x24db24u: goto label_24db24;
        case 0x24db28u: goto label_24db28;
        case 0x24db2cu: goto label_24db2c;
        case 0x24db30u: goto label_24db30;
        case 0x24db34u: goto label_24db34;
        case 0x24db38u: goto label_24db38;
        case 0x24db3cu: goto label_24db3c;
        case 0x24db40u: goto label_24db40;
        case 0x24db44u: goto label_24db44;
        case 0x24db48u: goto label_24db48;
        case 0x24db4cu: goto label_24db4c;
        case 0x24db50u: goto label_24db50;
        case 0x24db54u: goto label_24db54;
        case 0x24db58u: goto label_24db58;
        case 0x24db5cu: goto label_24db5c;
        case 0x24db60u: goto label_24db60;
        case 0x24db64u: goto label_24db64;
        case 0x24db68u: goto label_24db68;
        case 0x24db6cu: goto label_24db6c;
        case 0x24db70u: goto label_24db70;
        case 0x24db74u: goto label_24db74;
        case 0x24db78u: goto label_24db78;
        case 0x24db7cu: goto label_24db7c;
        case 0x24db80u: goto label_24db80;
        case 0x24db84u: goto label_24db84;
        case 0x24db88u: goto label_24db88;
        case 0x24db8cu: goto label_24db8c;
        case 0x24db90u: goto label_24db90;
        case 0x24db94u: goto label_24db94;
        case 0x24db98u: goto label_24db98;
        case 0x24db9cu: goto label_24db9c;
        case 0x24dba0u: goto label_24dba0;
        case 0x24dba4u: goto label_24dba4;
        case 0x24dba8u: goto label_24dba8;
        case 0x24dbacu: goto label_24dbac;
        case 0x24dbb0u: goto label_24dbb0;
        case 0x24dbb4u: goto label_24dbb4;
        case 0x24dbb8u: goto label_24dbb8;
        case 0x24dbbcu: goto label_24dbbc;
        case 0x24dbc0u: goto label_24dbc0;
        case 0x24dbc4u: goto label_24dbc4;
        case 0x24dbc8u: goto label_24dbc8;
        case 0x24dbccu: goto label_24dbcc;
        case 0x24dbd0u: goto label_24dbd0;
        case 0x24dbd4u: goto label_24dbd4;
        case 0x24dbd8u: goto label_24dbd8;
        case 0x24dbdcu: goto label_24dbdc;
        case 0x24dbe0u: goto label_24dbe0;
        case 0x24dbe4u: goto label_24dbe4;
        case 0x24dbe8u: goto label_24dbe8;
        case 0x24dbecu: goto label_24dbec;
        case 0x24dbf0u: goto label_24dbf0;
        case 0x24dbf4u: goto label_24dbf4;
        case 0x24dbf8u: goto label_24dbf8;
        case 0x24dbfcu: goto label_24dbfc;
        case 0x24dc00u: goto label_24dc00;
        case 0x24dc04u: goto label_24dc04;
        case 0x24dc08u: goto label_24dc08;
        case 0x24dc0cu: goto label_24dc0c;
        case 0x24dc10u: goto label_24dc10;
        case 0x24dc14u: goto label_24dc14;
        case 0x24dc18u: goto label_24dc18;
        case 0x24dc1cu: goto label_24dc1c;
        case 0x24dc20u: goto label_24dc20;
        case 0x24dc24u: goto label_24dc24;
        case 0x24dc28u: goto label_24dc28;
        case 0x24dc2cu: goto label_24dc2c;
        case 0x24dc30u: goto label_24dc30;
        case 0x24dc34u: goto label_24dc34;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dc3cu: goto label_24dc3c;
        case 0x24dc40u: goto label_24dc40;
        case 0x24dc44u: goto label_24dc44;
        case 0x24dc48u: goto label_24dc48;
        case 0x24dc4cu: goto label_24dc4c;
        case 0x24dc50u: goto label_24dc50;
        case 0x24dc54u: goto label_24dc54;
        case 0x24dc58u: goto label_24dc58;
        case 0x24dc5cu: goto label_24dc5c;
        case 0x24dc60u: goto label_24dc60;
        case 0x24dc64u: goto label_24dc64;
        case 0x24dc68u: goto label_24dc68;
        case 0x24dc6cu: goto label_24dc6c;
        case 0x24dc70u: goto label_24dc70;
        case 0x24dc74u: goto label_24dc74;
        case 0x24dc78u: goto label_24dc78;
        case 0x24dc7cu: goto label_24dc7c;
        case 0x24dc80u: goto label_24dc80;
        case 0x24dc84u: goto label_24dc84;
        case 0x24dc88u: goto label_24dc88;
        case 0x24dc8cu: goto label_24dc8c;
        case 0x24dc90u: goto label_24dc90;
        case 0x24dc94u: goto label_24dc94;
        case 0x24dc98u: goto label_24dc98;
        case 0x24dc9cu: goto label_24dc9c;
        case 0x24dca0u: goto label_24dca0;
        case 0x24dca4u: goto label_24dca4;
        case 0x24dca8u: goto label_24dca8;
        case 0x24dcacu: goto label_24dcac;
        case 0x24dcb0u: goto label_24dcb0;
        case 0x24dcb4u: goto label_24dcb4;
        case 0x24dcb8u: goto label_24dcb8;
        case 0x24dcbcu: goto label_24dcbc;
        case 0x24dcc0u: goto label_24dcc0;
        case 0x24dcc4u: goto label_24dcc4;
        case 0x24dcc8u: goto label_24dcc8;
        case 0x24dcccu: goto label_24dccc;
        case 0x24dcd0u: goto label_24dcd0;
        case 0x24dcd4u: goto label_24dcd4;
        case 0x24dcd8u: goto label_24dcd8;
        case 0x24dcdcu: goto label_24dcdc;
        case 0x24dce0u: goto label_24dce0;
        case 0x24dce4u: goto label_24dce4;
        case 0x24dce8u: goto label_24dce8;
        case 0x24dcecu: goto label_24dcec;
        case 0x24dcf0u: goto label_24dcf0;
        case 0x24dcf4u: goto label_24dcf4;
        case 0x24dcf8u: goto label_24dcf8;
        case 0x24dcfcu: goto label_24dcfc;
        case 0x24dd00u: goto label_24dd00;
        case 0x24dd04u: goto label_24dd04;
        case 0x24dd08u: goto label_24dd08;
        case 0x24dd0cu: goto label_24dd0c;
        case 0x24dd10u: goto label_24dd10;
        case 0x24dd14u: goto label_24dd14;
        case 0x24dd18u: goto label_24dd18;
        case 0x24dd1cu: goto label_24dd1c;
        case 0x24dd20u: goto label_24dd20;
        case 0x24dd24u: goto label_24dd24;
        case 0x24dd28u: goto label_24dd28;
        case 0x24dd2cu: goto label_24dd2c;
        case 0x24dd30u: goto label_24dd30;
        case 0x24dd34u: goto label_24dd34;
        case 0x24dd38u: goto label_24dd38;
        case 0x24dd3cu: goto label_24dd3c;
        case 0x24dd40u: goto label_24dd40;
        case 0x24dd44u: goto label_24dd44;
        case 0x24dd48u: goto label_24dd48;
        case 0x24dd4cu: goto label_24dd4c;
        case 0x24dd50u: goto label_24dd50;
        case 0x24dd54u: goto label_24dd54;
        case 0x24dd58u: goto label_24dd58;
        case 0x24dd5cu: goto label_24dd5c;
        case 0x24dd60u: goto label_24dd60;
        case 0x24dd64u: goto label_24dd64;
        case 0x24dd68u: goto label_24dd68;
        case 0x24dd6cu: goto label_24dd6c;
        case 0x24dd70u: goto label_24dd70;
        case 0x24dd74u: goto label_24dd74;
        case 0x24dd78u: goto label_24dd78;
        case 0x24dd7cu: goto label_24dd7c;
        case 0x24dd80u: goto label_24dd80;
        case 0x24dd84u: goto label_24dd84;
        case 0x24dd88u: goto label_24dd88;
        case 0x24dd8cu: goto label_24dd8c;
        case 0x24dd90u: goto label_24dd90;
        case 0x24dd94u: goto label_24dd94;
        case 0x24dd98u: goto label_24dd98;
        case 0x24dd9cu: goto label_24dd9c;
        case 0x24dda0u: goto label_24dda0;
        case 0x24dda4u: goto label_24dda4;
        case 0x24dda8u: goto label_24dda8;
        case 0x24ddacu: goto label_24ddac;
        case 0x24ddb0u: goto label_24ddb0;
        case 0x24ddb4u: goto label_24ddb4;
        case 0x24ddb8u: goto label_24ddb8;
        case 0x24ddbcu: goto label_24ddbc;
        case 0x24ddc0u: goto label_24ddc0;
        case 0x24ddc4u: goto label_24ddc4;
        case 0x24ddc8u: goto label_24ddc8;
        case 0x24ddccu: goto label_24ddcc;
        case 0x24ddd0u: goto label_24ddd0;
        case 0x24ddd4u: goto label_24ddd4;
        case 0x24ddd8u: goto label_24ddd8;
        case 0x24dddcu: goto label_24dddc;
        case 0x24dde0u: goto label_24dde0;
        case 0x24dde4u: goto label_24dde4;
        case 0x24dde8u: goto label_24dde8;
        case 0x24ddecu: goto label_24ddec;
        case 0x24ddf0u: goto label_24ddf0;
        case 0x24ddf4u: goto label_24ddf4;
        case 0x24ddf8u: goto label_24ddf8;
        case 0x24ddfcu: goto label_24ddfc;
        case 0x24de00u: goto label_24de00;
        case 0x24de04u: goto label_24de04;
        case 0x24de08u: goto label_24de08;
        case 0x24de0cu: goto label_24de0c;
        case 0x24de10u: goto label_24de10;
        case 0x24de14u: goto label_24de14;
        case 0x24de18u: goto label_24de18;
        case 0x24de1cu: goto label_24de1c;
        case 0x24de20u: goto label_24de20;
        case 0x24de24u: goto label_24de24;
        case 0x24de28u: goto label_24de28;
        case 0x24de2cu: goto label_24de2c;
        case 0x24de30u: goto label_24de30;
        case 0x24de34u: goto label_24de34;
        case 0x24de38u: goto label_24de38;
        case 0x24de3cu: goto label_24de3c;
        case 0x24de40u: goto label_24de40;
        case 0x24de44u: goto label_24de44;
        case 0x24de48u: goto label_24de48;
        case 0x24de4cu: goto label_24de4c;
        case 0x24de50u: goto label_24de50;
        case 0x24de54u: goto label_24de54;
        case 0x24de58u: goto label_24de58;
        case 0x24de5cu: goto label_24de5c;
        case 0x24de60u: goto label_24de60;
        case 0x24de64u: goto label_24de64;
        case 0x24de68u: goto label_24de68;
        case 0x24de6cu: goto label_24de6c;
        case 0x24de70u: goto label_24de70;
        case 0x24de74u: goto label_24de74;
        case 0x24de78u: goto label_24de78;
        case 0x24de7cu: goto label_24de7c;
        case 0x24de80u: goto label_24de80;
        case 0x24de84u: goto label_24de84;
        case 0x24de88u: goto label_24de88;
        case 0x24de8cu: goto label_24de8c;
        case 0x24de90u: goto label_24de90;
        case 0x24de94u: goto label_24de94;
        case 0x24de98u: goto label_24de98;
        case 0x24de9cu: goto label_24de9c;
        case 0x24dea0u: goto label_24dea0;
        case 0x24dea4u: goto label_24dea4;
        case 0x24dea8u: goto label_24dea8;
        case 0x24deacu: goto label_24deac;
        case 0x24deb0u: goto label_24deb0;
        case 0x24deb4u: goto label_24deb4;
        case 0x24deb8u: goto label_24deb8;
        case 0x24debcu: goto label_24debc;
        case 0x24dec0u: goto label_24dec0;
        case 0x24dec4u: goto label_24dec4;
        case 0x24dec8u: goto label_24dec8;
        case 0x24deccu: goto label_24decc;
        case 0x24ded0u: goto label_24ded0;
        case 0x24ded4u: goto label_24ded4;
        case 0x24ded8u: goto label_24ded8;
        case 0x24dedcu: goto label_24dedc;
        case 0x24dee0u: goto label_24dee0;
        case 0x24dee4u: goto label_24dee4;
        default: break;
    }

    ctx->pc = 0x24d810u;

label_24d810:
    // 0x24d810: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x24d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
label_24d814:
    // 0x24d814: 0x7fb404f0  sq          $s4, 0x4F0($sp)
    ctx->pc = 0x24d814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 20));
label_24d818:
    // 0x24d818: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24d818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d81c:
    // 0x24d81c: 0x7fb604d0  sq          $s6, 0x4D0($sp)
    ctx->pc = 0x24d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 22));
label_24d820:
    // 0x24d820: 0x7fb00530  sq          $s0, 0x530($sp)
    ctx->pc = 0x24d820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 16));
label_24d824:
    // 0x24d824: 0x7fb10520  sq          $s1, 0x520($sp)
    ctx->pc = 0x24d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 17));
label_24d828:
    // 0x24d828: 0x7fb20510  sq          $s2, 0x510($sp)
    ctx->pc = 0x24d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 18));
label_24d82c:
    // 0x24d82c: 0x7fb30500  sq          $s3, 0x500($sp)
    ctx->pc = 0x24d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 19));
label_24d830:
    // 0x24d830: 0x7fb504e0  sq          $s5, 0x4E0($sp)
    ctx->pc = 0x24d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 21));
label_24d834:
    // 0x24d834: 0x7fb704c0  sq          $s7, 0x4C0($sp)
    ctx->pc = 0x24d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 23));
label_24d838:
    // 0x24d838: 0x7fbe04b0  sq          $fp, 0x4B0($sp)
    ctx->pc = 0x24d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 30));
label_24d83c:
    // 0x24d83c: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x24d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_24d840:
    // 0x24d840: 0xe7b50548  swc1        $f21, 0x548($sp)
    ctx->pc = 0x24d840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_24d844:
    // 0x24d844: 0xc089c18  jal         func_227060
label_24d848:
    if (ctx->pc == 0x24D848u) {
        ctx->pc = 0x24D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D844u;
        // 0x24d848: 0xe7b40540  swc1        $f20, 0x540($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D84Cu;
        goto label_24d84c;
    }
    ctx->pc = 0x24D844u;
    SET_GPR_U32(ctx, 31, 0x24D84Cu);
    ctx->pc = 0x24D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D844u;
    // 0x24d848: 0xe7b40540  swc1        $f20, 0x540($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x24D844u, 0x24D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D84Cu;
label_24d84c:
    // 0x24d84c: 0xc0e57ce  jal         func_395F38
label_24d850:
    if (ctx->pc == 0x24D850u) {
        ctx->pc = 0x24D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D84Cu;
        // 0x24d850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D854u;
        goto label_24d854;
    }
    ctx->pc = 0x24D84Cu;
    SET_GPR_U32(ctx, 31, 0x24D854u);
    ctx->pc = 0x24D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D84Cu;
    // 0x24d850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D84Cu, 0x24D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D854u;
label_24d854:
    // 0x24d854: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x24d854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d858:
    // 0x24d858: 0x16c00129  bnez        $s6, . + 4 + (0x129 << 2)
label_24d85c:
    if (ctx->pc == 0x24D85Cu) {
        ctx->pc = 0x24D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D858u;
        // 0x24d85c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D860u;
        goto label_24d860;
    }
    ctx->pc = 0x24D858u;
    {
        const bool branch_taken_0x24d858 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D858u;
        // 0x24d85c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d858) {
            ctx->pc = 0x24DD00u;
            goto label_24dd00;
        }
    }
    ctx->pc = 0x24D860u;
label_24d860:
    // 0x24d860: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x24d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_24d864:
    // 0x24d864: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_24d868:
    // 0x24d868: 0xafa40490  sw          $a0, 0x490($sp)
    ctx->pc = 0x24d868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 4));
label_24d86c:
    // 0x24d86c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x24d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_24d870:
    // 0x24d870: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24d870u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24d874:
    // 0x24d874: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x24d874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_24d878:
    // 0x24d878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24d878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24d87c:
    // 0x24d87c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x24d87cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_24d880:
    // 0x24d880: 0x27b20300  addiu       $s2, $sp, 0x300
    ctx->pc = 0x24d880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_24d884:
    // 0x24d884: 0x8e072c7c  lw          $a3, 0x2C7C($s0)
    ctx->pc = 0x24d884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24d888:
    // 0x24d888: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x24d888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_24d88c:
    // 0x24d88c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_24d890:
    // 0x24d890: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x24d890u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_24d894:
    // 0x24d894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24d898:
    // 0x24d898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24d898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d89c:
    // 0x24d89c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d89cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24d8a0:
    // 0x24d8a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x24d8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24d8a4:
    // 0x24d8a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x24d8a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24d8a8:
    // 0x24d8a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24d8a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24d8ac:
    // 0x24d8ac: 0x7fa30300  sq          $v1, 0x300($sp)
    ctx->pc = 0x24d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 3));
label_24d8b0:
    // 0x24d8b0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x24d8b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_24d8b4:
    // 0x24d8b4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x24d8b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_24d8b8:
    // 0x24d8b8: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x24d8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24d8bc:
    // 0x24d8bc: 0x8ce40840  lw          $a0, 0x840($a3)
    ctx->pc = 0x24d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
label_24d8c0:
    // 0x24d8c0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x24d8c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d8c4:
    // 0x24d8c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d8c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d8c8:
    // 0x24d8c8: 0xc0e6a14  jal         func_39A850
label_24d8cc:
    if (ctx->pc == 0x24D8CCu) {
        ctx->pc = 0x24D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C8u;
        // 0x24d8cc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8D0u;
        goto label_24d8d0;
    }
    ctx->pc = 0x24D8C8u;
    SET_GPR_U32(ctx, 31, 0x24D8D0u);
    ctx->pc = 0x24D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8C8u;
    // 0x24d8cc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x24D8C8u, 0x24D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8D0u;
label_24d8d0:
    // 0x24d8d0: 0x8e052c7c  lw          $a1, 0x2C7C($s0)
    ctx->pc = 0x24d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24d8d4:
    // 0x24d8d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24d8d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d8d8:
    // 0x24d8d8: 0x7a8204e0  lq          $v0, 0x4E0($s4)
    ctx->pc = 0x24d8d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 1248)));
label_24d8dc:
    // 0x24d8dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x24d8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_24d8e0:
    // 0x24d8e0: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x24d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_24d8e4:
    // 0x24d8e4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x24d8e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_24d8e8:
    // 0x24d8e8: 0x7ba30300  lq          $v1, 0x300($sp)
    ctx->pc = 0x24d8e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_24d8ec:
    // 0x24d8ec: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x24d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_24d8f0:
    // 0x24d8f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24d8f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24d8f4:
    // 0x24d8f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24d8f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24d8f8:
    // 0x24d8f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24d8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24d8fc:
    // 0x24d8fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24d8fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24d900:
    // 0x24d900: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24d900u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24d904:
    // 0x24d904: 0x27a80310  addiu       $t0, $sp, 0x310
    ctx->pc = 0x24d904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_24d908:
    // 0x24d908: 0x3a52821  addu        $a1, $sp, $a1
    ctx->pc = 0x24d908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_24d90c:
    // 0x24d90c: 0x7fa30310  sq          $v1, 0x310($sp)
    ctx->pc = 0x24d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 3));
label_24d910:
    // 0x24d910: 0x7fa30330  sq          $v1, 0x330($sp)
    ctx->pc = 0x24d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 3));
label_24d914:
    // 0x24d914: 0x2353023  subu        $a2, $s1, $s5
    ctx->pc = 0x24d914u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_24d918:
    // 0x24d918: 0x7fa30320  sq          $v1, 0x320($sp)
    ctx->pc = 0x24d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 3));
label_24d91c:
    // 0x24d91c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x24d91cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_24d920:
    // 0x24d920: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_24d924:
    // 0x24d924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d928:
    // 0x24d928: 0xc0e6a14  jal         func_39A850
label_24d92c:
    if (ctx->pc == 0x24D92Cu) {
        ctx->pc = 0x24D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D928u;
        // 0x24d92c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D930u;
        goto label_24d930;
    }
    ctx->pc = 0x24D928u;
    SET_GPR_U32(ctx, 31, 0x24D930u);
    ctx->pc = 0x24D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D928u;
    // 0x24d92c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x24D928u, 0x24D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D930u;
label_24d930:
    // 0x24d930: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x24d930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_24d934:
    // 0x24d934: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24d934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24d938:
    // 0x24d938: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x24d938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_24d93c:
    // 0x24d93c: 0x2352823  subu        $a1, $s1, $s5
    ctx->pc = 0x24d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_24d940:
    // 0x24d940: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x24d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_24d944:
    // 0x24d944: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24d944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24d948:
    // 0x24d948: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24d948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d94c:
    // 0x24d94c: 0xc089d2a  jal         func_2274A8
label_24d950:
    if (ctx->pc == 0x24D950u) {
        ctx->pc = 0x24D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D94Cu;
        // 0x24d950: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D954u;
        goto label_24d954;
    }
    ctx->pc = 0x24D94Cu;
    SET_GPR_U32(ctx, 31, 0x24D954u);
    ctx->pc = 0x24D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D94Cu;
    // 0x24d950: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x24D94Cu, 0x24D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D954u;
label_24d954:
    // 0x24d954: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x24d954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_24d958:
    // 0x24d958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d95c:
    // 0x24d95c: 0xc0e1a34  jal         func_3868D0
label_24d960:
    if (ctx->pc == 0x24D960u) {
        ctx->pc = 0x24D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D95Cu;
        // 0x24d960: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D964u;
        goto label_24d964;
    }
    ctx->pc = 0x24D95Cu;
    SET_GPR_U32(ctx, 31, 0x24D964u);
    ctx->pc = 0x24D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D95Cu;
    // 0x24d960: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x24D95Cu, 0x24D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D964u;
label_24d964:
    // 0x24d964: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x24d964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
label_24d968:
    // 0x24d968: 0x2d5102b  sltu        $v0, $s6, $s5
    ctx->pc = 0x24d968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_24d96c:
    // 0x24d96c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_24d970:
    if (ctx->pc == 0x24D970u) {
        ctx->pc = 0x24D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D96Cu;
        // 0x24d970: 0xafb40334  sw          $s4, 0x334($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D974u;
        goto label_24d974;
    }
    ctx->pc = 0x24D96Cu;
    {
        const bool branch_taken_0x24d96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D96Cu;
        // 0x24d970: 0xafb40334  sw          $s4, 0x334($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d96c) {
            ctx->pc = 0x24DAFCu;
            goto label_24dafc;
        }
    }
    ctx->pc = 0x24D974u;
label_24d974:
    // 0x24d974: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x24d974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d978:
    // 0x24d978: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x24d978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24d97c:
    // 0x24d97c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d980:
    // 0x24d980: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x24d980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_24d984:
    // 0x24d984: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24d988:
    // 0x24d988: 0x40f809  jalr        $v0
label_24d98c:
    if (ctx->pc == 0x24D98Cu) {
        ctx->pc = 0x24D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D988u;
        // 0x24d98c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D990u;
        goto label_24d990;
    }
    ctx->pc = 0x24D988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D990u);
        ctx->pc = 0x24D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D988u;
        // 0x24d98c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D988u, 0x24D990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D990u;
label_24d990:
    // 0x24d990: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_24d994:
    // 0x24d994: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_24d998:
    if (ctx->pc == 0x24D998u) {
        ctx->pc = 0x24D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D994u;
        // 0x24d998: 0xafb00310  sw          $s0, 0x310($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D99Cu;
        goto label_24d99c;
    }
    ctx->pc = 0x24D994u;
    {
        const bool branch_taken_0x24d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d994) {
            ctx->pc = 0x24D998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D994u;
            // 0x24d998: 0xafb00310  sw          $s0, 0x310($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D9C4u;
            goto label_24d9c4;
        }
    }
    ctx->pc = 0x24D99Cu;
label_24d99c:
    // 0x24d99c: 0xc087502  jal         func_21D408
label_24d9a0:
    if (ctx->pc == 0x24D9A0u) {
        ctx->pc = 0x24D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D99Cu;
        // 0x24d9a0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9A4u;
        goto label_24d9a4;
    }
    ctx->pc = 0x24D99Cu;
    SET_GPR_U32(ctx, 31, 0x24D9A4u);
    ctx->pc = 0x24D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D99Cu;
    // 0x24d9a0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x24D99Cu, 0x24D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9A4u;
label_24d9a4:
    // 0x24d9a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24d9a8:
    // 0x24d9a8: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x24d9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_24d9ac:
    // 0x24d9ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24d9b0:
    if (ctx->pc == 0x24D9B0u) {
        ctx->pc = 0x24D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9ACu;
        // 0x24d9b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9B4u;
        goto label_24d9b4;
    }
    ctx->pc = 0x24D9ACu;
    {
        const bool branch_taken_0x24d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9ACu;
        // 0x24d9b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9ac) {
            ctx->pc = 0x24D9B8u;
            goto label_24d9b8;
        }
    }
    ctx->pc = 0x24D9B4u;
label_24d9b4:
    // 0x24d9b4: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x24d9b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_24d9b8:
    // 0x24d9b8: 0x5480004d  bnel        $a0, $zero, . + 4 + (0x4D << 2)
label_24d9bc:
    if (ctx->pc == 0x24D9BCu) {
        ctx->pc = 0x24D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9B8u;
        // 0x24d9bc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9C0u;
        goto label_24d9c0;
    }
    ctx->pc = 0x24D9B8u;
    {
        const bool branch_taken_0x24d9b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d9b8) {
            ctx->pc = 0x24D9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D9B8u;
            // 0x24d9bc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAF0u;
            goto label_24daf0;
        }
    }
    ctx->pc = 0x24D9C0u;
label_24d9c0:
    // 0x24d9c0: 0xafb00310  sw          $s0, 0x310($sp)
    ctx->pc = 0x24d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 16));
label_24d9c4:
    // 0x24d9c4: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x24d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_24d9c8:
    // 0x24d9c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24d9c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d9cc:
    // 0x24d9cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d9d0:
    // 0x24d9d0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x24d9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_24d9d4:
    // 0x24d9d4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_24d9d8:
    // 0x24d9d8: 0x40f809  jalr        $v0
label_24d9dc:
    if (ctx->pc == 0x24D9DCu) {
        ctx->pc = 0x24D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9D8u;
        // 0x24d9dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9E0u;
        goto label_24d9e0;
    }
    ctx->pc = 0x24D9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D9E0u);
        ctx->pc = 0x24D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9D8u;
        // 0x24d9dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D9D8u, 0x24D9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D9E0u;
label_24d9e0:
    // 0x24d9e0: 0x1053012f  beq         $v0, $s3, . + 4 + (0x12F << 2)
label_24d9e4:
    if (ctx->pc == 0x24D9E4u) {
        ctx->pc = 0x24D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9E0u;
        // 0x24d9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9E8u;
        goto label_24d9e8;
    }
    ctx->pc = 0x24D9E0u;
    {
        const bool branch_taken_0x24d9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x24D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9E0u;
        // 0x24d9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9e0) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24D9E8u;
label_24d9e8:
    // 0x24d9e8: 0xc0e57ce  jal         func_395F38
label_24d9ec:
    if (ctx->pc == 0x24D9ECu) {
        ctx->pc = 0x24D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9E8u;
        // 0x24d9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9F0u;
        goto label_24d9f0;
    }
    ctx->pc = 0x24D9E8u;
    SET_GPR_U32(ctx, 31, 0x24D9F0u);
    ctx->pc = 0x24D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9E8u;
    // 0x24d9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D9E8u, 0x24D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9F0u;
label_24d9f0:
    // 0x24d9f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24d9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d9f4:
    // 0x24d9f4: 0x5220003e  beql        $s1, $zero, . + 4 + (0x3E << 2)
label_24d9f8:
    if (ctx->pc == 0x24D9F8u) {
        ctx->pc = 0x24D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9F4u;
        // 0x24d9f8: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9FCu;
        goto label_24d9fc;
    }
    ctx->pc = 0x24D9F4u;
    {
        const bool branch_taken_0x24d9f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d9f4) {
            ctx->pc = 0x24D9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D9F4u;
            // 0x24d9f8: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAF0u;
            goto label_24daf0;
        }
    }
    ctx->pc = 0x24D9FCu;
label_24d9fc:
    // 0x24d9fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24da00:
    // 0x24da00: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x24da00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_24da04:
    // 0x24da04: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x24da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_24da08:
    // 0x24da08: 0x40f809  jalr        $v0
label_24da0c:
    if (ctx->pc == 0x24DA0Cu) {
        ctx->pc = 0x24DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA08u;
        // 0x24da0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA10u;
        goto label_24da10;
    }
    ctx->pc = 0x24DA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DA10u);
        ctx->pc = 0x24DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA08u;
        // 0x24da0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA08u, 0x24DA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DA10u;
label_24da10:
    // 0x24da10: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_24da14:
    // 0x24da14: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_24da18:
    if (ctx->pc == 0x24DA18u) {
        ctx->pc = 0x24DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA14u;
        // 0x24da18: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA1Cu;
        goto label_24da1c;
    }
    ctx->pc = 0x24DA14u;
    {
        const bool branch_taken_0x24da14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da14) {
            ctx->pc = 0x24DA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA14u;
            // 0x24da18: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAF0u;
            goto label_24daf0;
        }
    }
    ctx->pc = 0x24DA1Cu;
label_24da1c:
    // 0x24da1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24da20:
    // 0x24da20: 0xc08715c  jal         func_21C570
label_24da24:
    if (ctx->pc == 0x24DA24u) {
        ctx->pc = 0x24DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA20u;
        // 0x24da24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA28u;
        goto label_24da28;
    }
    ctx->pc = 0x24DA20u;
    SET_GPR_U32(ctx, 31, 0x24DA28u);
    ctx->pc = 0x24DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA20u;
    // 0x24da24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C570u, 0x24DA20u, 0x24DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA28u;
label_24da28:
    // 0x24da28: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_24da2c:
    if (ctx->pc == 0x24DA2Cu) {
        ctx->pc = 0x24DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA28u;
        // 0x24da2c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA30u;
        goto label_24da30;
    }
    ctx->pc = 0x24DA28u;
    {
        const bool branch_taken_0x24da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da28) {
            ctx->pc = 0x24DA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA28u;
            // 0x24da2c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAF0u;
            goto label_24daf0;
        }
    }
    ctx->pc = 0x24DA30u;
label_24da30:
    // 0x24da30: 0xc0e53c8  jal         func_394F20
label_24da34:
    if (ctx->pc == 0x24DA34u) {
        ctx->pc = 0x24DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA30u;
        // 0x24da34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA38u;
        goto label_24da38;
    }
    ctx->pc = 0x24DA30u;
    SET_GPR_U32(ctx, 31, 0x24DA38u);
    ctx->pc = 0x24DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA30u;
    // 0x24da34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x24DA30u, 0x24DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA38u;
label_24da38:
    // 0x24da38: 0x5053002d  beql        $v0, $s3, . + 4 + (0x2D << 2)
label_24da3c:
    if (ctx->pc == 0x24DA3Cu) {
        ctx->pc = 0x24DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA38u;
        // 0x24da3c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA40u;
        goto label_24da40;
    }
    ctx->pc = 0x24DA38u;
    {
        const bool branch_taken_0x24da38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x24da38) {
            ctx->pc = 0x24DA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA38u;
            // 0x24da3c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAF0u;
            goto label_24daf0;
        }
    }
    ctx->pc = 0x24DA40u;
label_24da40:
    // 0x24da40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24da44:
    // 0x24da44: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x24da44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_24da48:
    // 0x24da48: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_24da4c:
    // 0x24da4c: 0x40f809  jalr        $v0
label_24da50:
    if (ctx->pc == 0x24DA50u) {
        ctx->pc = 0x24DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA4Cu;
        // 0x24da50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA54u;
        goto label_24da54;
    }
    ctx->pc = 0x24DA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DA54u);
        ctx->pc = 0x24DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA4Cu;
        // 0x24da50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA4Cu, 0x24DA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DA54u;
label_24da54:
    // 0x24da54: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x24da54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_24da58:
    // 0x24da58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24da58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24da5c:
    // 0x24da5c: 0x10530023  beq         $v0, $s3, . + 4 + (0x23 << 2)
label_24da60:
    if (ctx->pc == 0x24DA60u) {
        ctx->pc = 0x24DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA5Cu;
        // 0x24da60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA64u;
        goto label_24da64;
    }
    ctx->pc = 0x24DA5Cu;
    {
        const bool branch_taken_0x24da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x24DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA5Cu;
        // 0x24da60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da5c) {
            ctx->pc = 0x24DAECu;
            goto label_24daec;
        }
    }
    ctx->pc = 0x24DA64u;
label_24da64:
    // 0x24da64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24da64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24da68:
    // 0x24da68: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x24da68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_24da6c:
    // 0x24da6c: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x24da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_24da70:
    // 0x24da70: 0x40f809  jalr        $v0
label_24da74:
    if (ctx->pc == 0x24DA74u) {
        ctx->pc = 0x24DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA70u;
        // 0x24da74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA78u;
        goto label_24da78;
    }
    ctx->pc = 0x24DA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DA78u);
        ctx->pc = 0x24DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA70u;
        // 0x24da74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA70u, 0x24DA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DA78u;
label_24da78:
    // 0x24da78: 0x2842004b  slti        $v0, $v0, 0x4B
    ctx->pc = 0x24da78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)75) ? 1 : 0);
label_24da7c:
    // 0x24da7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24da80:
    // 0x24da80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_24da84:
    if (ctx->pc == 0x24DA84u) {
        ctx->pc = 0x24DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA80u;
        // 0x24da84: 0x828201b0  lb          $v0, 0x1B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA88u;
        goto label_24da88;
    }
    ctx->pc = 0x24DA80u;
    {
        const bool branch_taken_0x24da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da80) {
            ctx->pc = 0x24DA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA80u;
            // 0x24da84: 0x828201b0  lb          $v0, 0x1B0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA9Cu;
            goto label_24da9c;
        }
    }
    ctx->pc = 0x24DA88u;
label_24da88:
    // 0x24da88: 0xc088f88  jal         func_223E20
label_24da8c:
    if (ctx->pc == 0x24DA8Cu) {
        ctx->pc = 0x24DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA88u;
        // 0x24da8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA90u;
        goto label_24da90;
    }
    ctx->pc = 0x24DA88u;
    SET_GPR_U32(ctx, 31, 0x24DA90u);
    ctx->pc = 0x24DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA88u;
    // 0x24da8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x24DA88u, 0x24DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA90u;
label_24da90:
    // 0x24da90: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_24da94:
    if (ctx->pc == 0x24DA94u) {
        ctx->pc = 0x24DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA90u;
        // 0x24da94: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA98u;
        goto label_24da98;
    }
    ctx->pc = 0x24DA90u;
    {
        const bool branch_taken_0x24da90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da90) {
            ctx->pc = 0x24DA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA90u;
            // 0x24da94: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAF0u;
            goto label_24daf0;
        }
    }
    ctx->pc = 0x24DA98u;
label_24da98:
    // 0x24da98: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x24da98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_24da9c:
    // 0x24da9c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24da9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24daa0:
    // 0x24daa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_24daa4:
    if (ctx->pc == 0x24DAA4u) {
        ctx->pc = 0x24DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAA0u;
        // 0x24daa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAA8u;
        goto label_24daa8;
    }
    ctx->pc = 0x24DAA0u;
    {
        const bool branch_taken_0x24daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAA0u;
        // 0x24daa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24daa0) {
            ctx->pc = 0x24DABCu;
            goto label_24dabc;
        }
    }
    ctx->pc = 0x24DAA8u;
label_24daa8:
    // 0x24daa8: 0x3c02d2cf  lui         $v0, 0xD2CF
    ctx->pc = 0x24daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53967 << 16));
label_24daac:
    // 0x24daac: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x24daacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_24dab0:
    // 0x24dab0: 0x3442cd44  ori         $v0, $v0, 0xCD44
    ctx->pc = 0x24dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52548);
label_24dab4:
    // 0x24dab4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_24dab8:
    if (ctx->pc == 0x24DAB8u) {
        ctx->pc = 0x24DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAB4u;
        // 0x24dab8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DABCu;
        goto label_24dabc;
    }
    ctx->pc = 0x24DAB4u;
    {
        const bool branch_taken_0x24dab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAB4u;
        // 0x24dab8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dab4) {
            ctx->pc = 0x24DAECu;
            goto label_24daec;
        }
    }
    ctx->pc = 0x24DABCu;
label_24dabc:
    // 0x24dabc: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x24dabcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_24dac0:
    // 0x24dac0: 0xc0e44cc  jal         func_391330
label_24dac4:
    if (ctx->pc == 0x24DAC4u) {
        ctx->pc = 0x24DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAC0u;
        // 0x24dac4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAC8u;
        goto label_24dac8;
    }
    ctx->pc = 0x24DAC0u;
    SET_GPR_U32(ctx, 31, 0x24DAC8u);
    ctx->pc = 0x24DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAC0u;
    // 0x24dac4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24DAC0u, 0x24DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DAC8u;
label_24dac8:
    // 0x24dac8: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x24dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_24dacc:
    // 0x24dacc: 0x24450043  addiu       $a1, $v0, 0x43
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 67));
label_24dad0:
    // 0x24dad0: 0xc10c313  jal         func_430C4C
label_24dad4:
    if (ctx->pc == 0x24DAD4u) {
        ctx->pc = 0x24DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAD0u;
        // 0x24dad4: 0x2464cff8  addiu       $a0, $v1, -0x3008 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAD8u;
        goto label_24dad8;
    }
    ctx->pc = 0x24DAD0u;
    SET_GPR_U32(ctx, 31, 0x24DAD8u);
    ctx->pc = 0x24DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAD0u;
    // 0x24dad4: 0x2464cff8  addiu       $a0, $v1, -0x3008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x24DAD0u, 0x24DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DAD8u;
label_24dad8:
    // 0x24dad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24dadc:
    if (ctx->pc == 0x24DADCu) {
        ctx->pc = 0x24DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAD8u;
        // 0x24dadc: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAE0u;
        goto label_24dae0;
    }
    ctx->pc = 0x24DAD8u;
    {
        const bool branch_taken_0x24dad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAD8u;
        // 0x24dadc: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dad8) {
            ctx->pc = 0x24DAECu;
            goto label_24daec;
        }
    }
    ctx->pc = 0x24DAE0u;
label_24dae0:
    // 0x24dae0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x24dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_24dae4:
    // 0x24dae4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x24dae4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_24dae8:
    // 0x24dae8: 0xac720200  sw          $s2, 0x200($v1)
    ctx->pc = 0x24dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 18));
label_24daec:
    // 0x24daec: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24daecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_24daf0:
    // 0x24daf0: 0x3d5102b  sltu        $v0, $fp, $s5
    ctx->pc = 0x24daf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_24daf4:
    // 0x24daf4: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_24daf8:
    if (ctx->pc == 0x24DAF8u) {
        ctx->pc = 0x24DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAF4u;
        // 0x24daf8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAFCu;
        goto label_24dafc;
    }
    ctx->pc = 0x24DAF4u;
    {
        const bool branch_taken_0x24daf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAF4u;
        // 0x24daf8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24daf4) {
            ctx->pc = 0x24D978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d978;
        }
    }
    ctx->pc = 0x24DAFCu;
label_24dafc:
    // 0x24dafc: 0x12e0007e  beqz        $s7, . + 4 + (0x7E << 2)
label_24db00:
    if (ctx->pc == 0x24DB00u) {
        ctx->pc = 0x24DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAFCu;
        // 0x24db00: 0x8fa40490  lw          $a0, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB04u;
        goto label_24db04;
    }
    ctx->pc = 0x24DAFCu;
    {
        const bool branch_taken_0x24dafc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAFCu;
        // 0x24db00: 0x8fa40490  lw          $a0, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dafc) {
            ctx->pc = 0x24DCF8u;
            goto label_24dcf8;
        }
    }
    ctx->pc = 0x24DB04u;
label_24db04:
    // 0x24db04: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x24db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_24db08:
    // 0x24db08: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x24db08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24db0c:
    // 0x24db0c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x24db0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_24db10:
    // 0x24db10: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x24db10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_24db14:
    // 0x24db14: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x24db14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_24db18:
    // 0x24db18: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x24db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_24db1c:
    // 0x24db1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24db1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24db20:
    // 0x24db20: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x24db20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_24db24:
    // 0x24db24: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24db24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24db28:
    // 0x24db28: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x24db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_24db2c:
    // 0x24db2c: 0xc0cd8ec  jal         func_3363B0
label_24db30:
    if (ctx->pc == 0x24DB30u) {
        ctx->pc = 0x24DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB2Cu;
        // 0x24db30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB34u;
        goto label_24db34;
    }
    ctx->pc = 0x24DB2Cu;
    SET_GPR_U32(ctx, 31, 0x24DB34u);
    ctx->pc = 0x24DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB2Cu;
    // 0x24db30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x24DB2Cu, 0x24DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB34u;
label_24db34:
    // 0x24db34: 0x8fa40490  lw          $a0, 0x490($sp)
    ctx->pc = 0x24db34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_24db38:
    // 0x24db38: 0x27be0200  addiu       $fp, $sp, 0x200
    ctx->pc = 0x24db38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_24db3c:
    // 0x24db3c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24db3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_24db40:
    // 0x24db40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24db40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24db44:
    // 0x24db44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24db44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24db48:
    // 0x24db48: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x24db48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_24db4c:
    // 0x24db4c: 0x7ba60460  lq          $a2, 0x460($sp)
    ctx->pc = 0x24db4cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_24db50:
    // 0x24db50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24db50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_24db54:
    // 0x24db54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24db54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24db58:
    // 0x24db58: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x24db58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_24db5c:
    // 0x24db5c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24db5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24db60:
    // 0x24db60: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24db60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24db64:
    // 0x24db64: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24db64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24db68:
    // 0x24db68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x24db68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_24db6c:
    // 0x24db6c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24db6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24db70:
    // 0x24db70: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x24db70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24db74:
    // 0x24db74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24db74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24db78:
    // 0x24db78: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24db78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24db7c:
    // 0x24db7c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24db7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24db80:
    // 0x24db80: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x24db80u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_24db84:
    // 0x24db84: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x24db84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_24db88:
    // 0x24db88: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x24db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_24db8c:
    // 0x24db8c: 0x7fa50440  sq          $a1, 0x440($sp)
    ctx->pc = 0x24db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 5));
label_24db90:
    // 0x24db90: 0x7fa60450  sq          $a2, 0x450($sp)
    ctx->pc = 0x24db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 6));
label_24db94:
    // 0x24db94: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x24db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_24db98:
    // 0x24db98: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x24db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_24db9c:
    // 0x24db9c: 0x12e00045  beqz        $s7, . + 4 + (0x45 << 2)
label_24dba0:
    if (ctx->pc == 0x24DBA0u) {
        ctx->pc = 0x24DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB9Cu;
        // 0x24dba0: 0x7fa50470  sq          $a1, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBA4u;
        goto label_24dba4;
    }
    ctx->pc = 0x24DB9Cu;
    {
        const bool branch_taken_0x24db9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB9Cu;
        // 0x24dba0: 0x7fa50470  sq          $a1, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db9c) {
            ctx->pc = 0x24DCB4u;
            goto label_24dcb4;
        }
    }
    ctx->pc = 0x24DBA4u;
label_24dba4:
    // 0x24dba4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24dba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_24dba8:
    // 0x24dba8: 0x27b10340  addiu       $s1, $sp, 0x340
    ctx->pc = 0x24dba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_24dbac:
    // 0x24dbac: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x24dbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_24dbb0:
    // 0x24dbb0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x24dbb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_24dbb4:
    // 0x24dbb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24dbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24dbb8:
    // 0x24dbb8: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x24dbb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24dbbc:
    // 0x24dbbc: 0x0  nop
    ctx->pc = 0x24dbbcu;
    // NOP
label_24dbc0:
    // 0x24dbc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24dbc4:
    // 0x24dbc4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24dbc8:
    // 0x24dbc8: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x24dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_24dbcc:
    // 0x24dbcc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24dbccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24dbd0:
    // 0x24dbd0: 0xc0e44cc  jal         func_391330
label_24dbd4:
    if (ctx->pc == 0x24DBD4u) {
        ctx->pc = 0x24DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBD0u;
        // 0x24dbd4: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBD8u;
        goto label_24dbd8;
    }
    ctx->pc = 0x24DBD0u;
    SET_GPR_U32(ctx, 31, 0x24DBD8u);
    ctx->pc = 0x24DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DBD0u;
    // 0x24dbd4: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24DBD0u, 0x24DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBD8u;
label_24dbd8:
    // 0x24dbd8: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x24dbd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_24dbdc:
    // 0x24dbdc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x24dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24dbe0:
    // 0x24dbe0: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_24dbe4:
    if (ctx->pc == 0x24DBE4u) {
        ctx->pc = 0x24DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBE0u;
        // 0x24dbe4: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBE8u;
        goto label_24dbe8;
    }
    ctx->pc = 0x24DBE0u;
    {
        const bool branch_taken_0x24dbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24dbe0) {
            ctx->pc = 0x24DBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DBE0u;
            // 0x24dbe4: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DBF0u;
            goto label_24dbf0;
        }
    }
    ctx->pc = 0x24DBE8u;
label_24dbe8:
    // 0x24dbe8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_24dbec:
    if (ctx->pc == 0x24DBECu) {
        ctx->pc = 0x24DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBE8u;
        // 0x24dbec: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBF0u;
        goto label_24dbf0;
    }
    ctx->pc = 0x24DBE8u;
    {
        const bool branch_taken_0x24dbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBE8u;
        // 0x24dbec: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dbe8) {
            ctx->pc = 0x24DCA0u;
            goto label_24dca0;
        }
    }
    ctx->pc = 0x24DBF0u;
label_24dbf0:
    // 0x24dbf0: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x24dbf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_24dbf4:
    // 0x24dbf4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24dbf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24dbf8:
    // 0x24dbf8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24dbf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24dbfc:
    // 0x24dbfc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24dbfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24dc00:
    // 0x24dc00: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24dc00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24dc04:
    // 0x24dc04: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x24dc04u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_24dc08:
    // 0x24dc08: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x24dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_24dc0c:
    // 0x24dc0c: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x24dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_24dc10:
    // 0x24dc10: 0xafa00468  sw          $zero, 0x468($sp)
    ctx->pc = 0x24dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 0));
label_24dc14:
    // 0x24dc14: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x24dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_24dc18:
    // 0x24dc18: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x24dc18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_24dc1c:
    // 0x24dc1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24dc1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24dc20:
    // 0x24dc20: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x24dc20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24dc24:
    // 0x24dc24: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24dc24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24dc28:
    // 0x24dc28: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24dc28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24dc2c:
    // 0x24dc2c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24dc2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_24dc30:
    // 0x24dc30: 0x4a0003bf  vwaitq
    ctx->pc = 0x24dc30u;
    // VWAITQ (Q already resolved in this runtime)
label_24dc34:
    // 0x24dc34: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x24dc34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24dc38:
    // 0x24dc38: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24dc38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24dc3c:
    // 0x24dc3c: 0x7ba40450  lq          $a0, 0x450($sp)
    ctx->pc = 0x24dc3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_24dc40:
    // 0x24dc40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24dc40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24dc44:
    // 0x24dc44: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24dc44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24dc48:
    // 0x24dc48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x24dc48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24dc4c:
    // 0x24dc4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24dc4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24dc50:
    // 0x24dc50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24dc50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24dc54:
    // 0x24dc54: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x24dc54u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_24dc58:
    // 0x24dc58: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x24dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_24dc5c:
    // 0x24dc5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24dc5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24dc60:
    // 0x24dc60: 0x0  nop
    ctx->pc = 0x24dc60u;
    // NOP
label_24dc64:
    // 0x24dc64: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x24dc64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24dc68:
    // 0x24dc68: 0x0  nop
    ctx->pc = 0x24dc68u;
    // NOP
label_24dc6c:
    // 0x24dc6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24dc70:
    if (ctx->pc == 0x24DC70u) {
        ctx->pc = 0x24DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC6Cu;
        // 0x24dc70: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC74u;
        goto label_24dc74;
    }
    ctx->pc = 0x24DC6Cu;
    {
        const bool branch_taken_0x24dc6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC6Cu;
        // 0x24dc70: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc6c) {
            ctx->pc = 0x24DC80u;
            goto label_24dc80;
        }
    }
    ctx->pc = 0x24DC74u;
label_24dc74:
    // 0x24dc74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24dc78:
    // 0x24dc78: 0x10000009  b           . + 4 + (0x9 << 2)
label_24dc7c:
    if (ctx->pc == 0x24DC7Cu) {
        ctx->pc = 0x24DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC78u;
        // 0x24dc7c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC80u;
        goto label_24dc80;
    }
    ctx->pc = 0x24DC78u;
    {
        const bool branch_taken_0x24dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC78u;
        // 0x24dc7c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc78) {
            ctx->pc = 0x24DCA0u;
            goto label_24dca0;
        }
    }
    ctx->pc = 0x24DC80u;
label_24dc80:
    // 0x24dc80: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24dc80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24dc84:
    // 0x24dc84: 0x0  nop
    ctx->pc = 0x24dc84u;
    // NOP
label_24dc88:
    // 0x24dc88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_24dc8c:
    if (ctx->pc == 0x24DC8Cu) {
        ctx->pc = 0x24DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC88u;
        // 0x24dc8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC90u;
        goto label_24dc90;
    }
    ctx->pc = 0x24DC88u;
    {
        const bool branch_taken_0x24dc88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC88u;
        // 0x24dc8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc88) {
            ctx->pc = 0x24DC98u;
            goto label_24dc98;
        }
    }
    ctx->pc = 0x24DC90u;
label_24dc90:
    // 0x24dc90: 0x10000003  b           . + 4 + (0x3 << 2)
label_24dc94:
    if (ctx->pc == 0x24DC94u) {
        ctx->pc = 0x24DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC90u;
        // 0x24dc94: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC98u;
        goto label_24dc98;
    }
    ctx->pc = 0x24DC90u;
    {
        const bool branch_taken_0x24dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC90u;
        // 0x24dc94: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc90) {
            ctx->pc = 0x24DCA0u;
            goto label_24dca0;
        }
    }
    ctx->pc = 0x24DC98u;
label_24dc98:
    // 0x24dc98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24dc9c:
    // 0x24dc9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x24dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_24dca0:
    // 0x24dca0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24dca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24dca4:
    // 0x24dca4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x24dca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_24dca8:
    // 0x24dca8: 0x2b7102b  sltu        $v0, $s5, $s7
    ctx->pc = 0x24dca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_24dcac:
    // 0x24dcac: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_24dcb0:
    if (ctx->pc == 0x24DCB0u) {
        ctx->pc = 0x24DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCACu;
        // 0x24dcb0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCB4u;
        goto label_24dcb4;
    }
    ctx->pc = 0x24DCACu;
    {
        const bool branch_taken_0x24dcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCACu;
        // 0x24dcb0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcac) {
            ctx->pc = 0x24DBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dbc0;
        }
    }
    ctx->pc = 0x24DCB4u;
label_24dcb4:
    // 0x24dcb4: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
label_24dcb8:
    if (ctx->pc == 0x24DCB8u) {
        ctx->pc = 0x24DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCB4u;
        // 0x24dcb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCBCu;
        goto label_24dcbc;
    }
    ctx->pc = 0x24DCB4u;
    {
        const bool branch_taken_0x24dcb4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCB4u;
        // 0x24dcb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcb4) {
            ctx->pc = 0x24DCE8u;
            goto label_24dce8;
        }
    }
    ctx->pc = 0x24DCBCu;
label_24dcbc:
    // 0x24dcbc: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_24dcc0:
    // 0x24dcc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24dcc4:
    // 0x24dcc4: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x24dcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24dcc8:
    // 0x24dcc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24dccc:
    if (ctx->pc == 0x24DCCCu) {
        ctx->pc = 0x24DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCC8u;
        // 0x24dccc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCD0u;
        goto label_24dcd0;
    }
    ctx->pc = 0x24DCC8u;
    {
        const bool branch_taken_0x24dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dcc8) {
            ctx->pc = 0x24DCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DCC8u;
            // 0x24dccc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DCDCu;
            goto label_24dcdc;
        }
    }
    ctx->pc = 0x24DCD0u;
label_24dcd0:
    // 0x24dcd0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x24dcd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24dcd4:
    // 0x24dcd4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24dcd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24dcd8:
    // 0x24dcd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24dcdc:
    // 0x24dcdc: 0x97102b  sltu        $v0, $a0, $s7
    ctx->pc = 0x24dcdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_24dce0:
    // 0x24dce0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_24dce4:
    if (ctx->pc == 0x24DCE4u) {
        ctx->pc = 0x24DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCE0u;
        // 0x24dce4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCE8u;
        goto label_24dce8;
    }
    ctx->pc = 0x24DCE0u;
    {
        const bool branch_taken_0x24dce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCE0u;
        // 0x24dce4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dce0) {
            ctx->pc = 0x24DCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dcc0;
        }
    }
    ctx->pc = 0x24DCE8u;
label_24dce8:
    // 0x24dce8: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x24dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_24dcec:
    // 0x24dcec: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x24dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_24dcf0:
    // 0x24dcf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24dcf4:
    // 0x24dcf4: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x24dcf4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24dcf8:
    // 0x24dcf8: 0x12c0005b  beqz        $s6, . + 4 + (0x5B << 2)
label_24dcfc:
    if (ctx->pc == 0x24DCFCu) {
        ctx->pc = 0x24DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCF8u;
        // 0x24dcfc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD00u;
        goto label_24dd00;
    }
    ctx->pc = 0x24DCF8u;
    {
        const bool branch_taken_0x24dcf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCF8u;
        // 0x24dcfc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcf8) {
            ctx->pc = 0x24DE68u;
            goto label_24de68;
        }
    }
    ctx->pc = 0x24DD00u;
label_24dd00:
    // 0x24dd00: 0x96c50112  lhu         $a1, 0x112($s6)
    ctx->pc = 0x24dd00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 274)));
label_24dd04:
    // 0x24dd04: 0xc0e44cc  jal         func_391330
label_24dd08:
    if (ctx->pc == 0x24DD08u) {
        ctx->pc = 0x24DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD04u;
        // 0x24dd08: 0x8e042c04  lw          $a0, 0x2C04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD0Cu;
        goto label_24dd0c;
    }
    ctx->pc = 0x24DD04u;
    SET_GPR_U32(ctx, 31, 0x24DD0Cu);
    ctx->pc = 0x24DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD04u;
    // 0x24dd08: 0x8e042c04  lw          $a0, 0x2C04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24DD04u, 0x24DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD0Cu;
label_24dd0c:
    // 0x24dd0c: 0x80520086  lb          $s2, 0x86($v0)
    ctx->pc = 0x24dd0cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_24dd10:
    // 0x24dd10: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x24dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24dd14:
    // 0x24dd14: 0x16420018  bne         $s2, $v0, . + 4 + (0x18 << 2)
label_24dd18:
    if (ctx->pc == 0x24DD18u) {
        ctx->pc = 0x24DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD14u;
        // 0x24dd18: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD1Cu;
        goto label_24dd1c;
    }
    ctx->pc = 0x24DD14u;
    {
        const bool branch_taken_0x24dd14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD14u;
        // 0x24dd18: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd14) {
            ctx->pc = 0x24DD78u;
            goto label_24dd78;
        }
    }
    ctx->pc = 0x24DD1Cu;
label_24dd1c:
    // 0x24dd1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24dd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24dd20:
    // 0x24dd20: 0xc0881f4  jal         func_2207D0
label_24dd24:
    if (ctx->pc == 0x24DD24u) {
        ctx->pc = 0x24DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD20u;
        // 0x24dd24: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD28u;
        goto label_24dd28;
    }
    ctx->pc = 0x24DD20u;
    SET_GPR_U32(ctx, 31, 0x24DD28u);
    ctx->pc = 0x24DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD20u;
    // 0x24dd24: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207D0u, 0x24DD20u, 0x24DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD28u;
label_24dd28:
    // 0x24dd28: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x24dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_24dd2c:
    // 0x24dd2c: 0xc0e44cc  jal         func_391330
label_24dd30:
    if (ctx->pc == 0x24DD30u) {
        ctx->pc = 0x24DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD2Cu;
        // 0x24dd30: 0x96c50112  lhu         $a1, 0x112($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD34u;
        goto label_24dd34;
    }
    ctx->pc = 0x24DD2Cu;
    SET_GPR_U32(ctx, 31, 0x24DD34u);
    ctx->pc = 0x24DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD2Cu;
    // 0x24dd30: 0x96c50112  lhu         $a1, 0x112($s6) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24DD2Cu, 0x24DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD34u;
label_24dd34:
    // 0x24dd34: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x24dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_24dd38:
    // 0x24dd38: 0xc089c34  jal         func_2270D0
label_24dd3c:
    if (ctx->pc == 0x24DD3Cu) {
        ctx->pc = 0x24DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD38u;
        // 0x24dd3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD40u;
        goto label_24dd40;
    }
    ctx->pc = 0x24DD38u;
    SET_GPR_U32(ctx, 31, 0x24DD40u);
    ctx->pc = 0x24DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD38u;
    // 0x24dd3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2270D0u, 0x24DD38u, 0x24DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD40u;
label_24dd40:
    // 0x24dd40: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_24dd44:
    if (ctx->pc == 0x24DD44u) {
        ctx->pc = 0x24DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD40u;
        // 0x24dd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD48u;
        goto label_24dd48;
    }
    ctx->pc = 0x24DD40u;
    {
        const bool branch_taken_0x24dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD40u;
        // 0x24dd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd40) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24DD48u;
label_24dd48:
    // 0x24dd48: 0xc0e4060  jal         func_390180
label_24dd4c:
    if (ctx->pc == 0x24DD4Cu) {
        ctx->pc = 0x24DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD48u;
        // 0x24dd4c: 0x26840364  addiu       $a0, $s4, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD50u;
        goto label_24dd50;
    }
    ctx->pc = 0x24DD48u;
    SET_GPR_U32(ctx, 31, 0x24DD50u);
    ctx->pc = 0x24DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD48u;
    // 0x24dd4c: 0x26840364  addiu       $a0, $s4, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24DD48u, 0x24DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD50u;
label_24dd50:
    // 0x24dd50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24dd54:
    if (ctx->pc == 0x24DD54u) {
        ctx->pc = 0x24DD58u;
        goto label_24dd58;
    }
    ctx->pc = 0x24DD50u;
    {
        const bool branch_taken_0x24dd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dd50) {
            ctx->pc = 0x24DD60u;
            goto label_24dd60;
        }
    }
    ctx->pc = 0x24DD58u;
label_24dd58:
    // 0x24dd58: 0xc0960cc  jal         func_258330
label_24dd5c:
    if (ctx->pc == 0x24DD5Cu) {
        ctx->pc = 0x24DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD58u;
        // 0x24dd5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD60u;
        goto label_24dd60;
    }
    ctx->pc = 0x24DD58u;
    SET_GPR_U32(ctx, 31, 0x24DD60u);
    ctx->pc = 0x24DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD58u;
    // 0x24dd5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x24DD58u, 0x24DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD60u;
label_24dd60:
    // 0x24dd60: 0xc087502  jal         func_21D408
label_24dd64:
    if (ctx->pc == 0x24DD64u) {
        ctx->pc = 0x24DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD60u;
        // 0x24dd64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD68u;
        goto label_24dd68;
    }
    ctx->pc = 0x24DD60u;
    SET_GPR_U32(ctx, 31, 0x24DD68u);
    ctx->pc = 0x24DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD60u;
    // 0x24dd64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x24DD60u, 0x24DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD68u;
label_24dd68:
    // 0x24dd68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24dd6c:
    // 0x24dd6c: 0xc0a3344  jal         func_28CD10
label_24dd70:
    if (ctx->pc == 0x24DD70u) {
        ctx->pc = 0x24DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD6Cu;
        // 0x24dd70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD74u;
        goto label_24dd74;
    }
    ctx->pc = 0x24DD6Cu;
    SET_GPR_U32(ctx, 31, 0x24DD74u);
    ctx->pc = 0x24DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD6Cu;
    // 0x24dd70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CD10u, 0x24DD6Cu, 0x24DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD74u;
label_24dd74:
    // 0x24dd74: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24dd78:
    // 0x24dd78: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_24dd7c:
    if (ctx->pc == 0x24DD7Cu) {
        ctx->pc = 0x24DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD78u;
        // 0x24dd7c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD80u;
        goto label_24dd80;
    }
    ctx->pc = 0x24DD78u;
    {
        const bool branch_taken_0x24dd78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD78u;
        // 0x24dd7c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd78) {
            ctx->pc = 0x24DDB4u;
            goto label_24ddb4;
        }
    }
    ctx->pc = 0x24DD80u;
label_24dd80:
    // 0x24dd80: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_24dd84:
    if (ctx->pc == 0x24DD84u) {
        ctx->pc = 0x24DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD80u;
        // 0x24dd84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD88u;
        goto label_24dd88;
    }
    ctx->pc = 0x24DD80u;
    {
        const bool branch_taken_0x24dd80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD80u;
        // 0x24dd84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd80) {
            ctx->pc = 0x24DDB8u;
            goto label_24ddb8;
        }
    }
    ctx->pc = 0x24DD88u;
label_24dd88:
    // 0x24dd88: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x24dd88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_24dd8c:
    // 0x24dd8c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24dd8cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24dd90:
    // 0x24dd90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_24dd94:
    if (ctx->pc == 0x24DD94u) {
        ctx->pc = 0x24DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD90u;
        // 0x24dd94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD98u;
        goto label_24dd98;
    }
    ctx->pc = 0x24DD90u;
    {
        const bool branch_taken_0x24dd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD90u;
        // 0x24dd94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd90) {
            ctx->pc = 0x24DDBCu;
            goto label_24ddbc;
        }
    }
    ctx->pc = 0x24DD98u;
label_24dd98:
    // 0x24dd98: 0xc089bfc  jal         func_226FF0
label_24dd9c:
    if (ctx->pc == 0x24DD9Cu) {
        ctx->pc = 0x24DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD98u;
        // 0x24dd9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDA0u;
        goto label_24dda0;
    }
    ctx->pc = 0x24DD98u;
    SET_GPR_U32(ctx, 31, 0x24DDA0u);
    ctx->pc = 0x24DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD98u;
    // 0x24dd9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x24DD98u, 0x24DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDA0u;
label_24dda0:
    // 0x24dda0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24dda4:
    if (ctx->pc == 0x24DDA4u) {
        ctx->pc = 0x24DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDA0u;
        // 0x24dda4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDA8u;
        goto label_24dda8;
    }
    ctx->pc = 0x24DDA0u;
    {
        const bool branch_taken_0x24dda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDA0u;
        // 0x24dda4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dda0) {
            ctx->pc = 0x24DDB4u;
            goto label_24ddb4;
        }
    }
    ctx->pc = 0x24DDA8u;
label_24dda8:
    // 0x24dda8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24dda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ddac:
    // 0x24ddac: 0x10000037  b           . + 4 + (0x37 << 2)
label_24ddb0:
    if (ctx->pc == 0x24DDB0u) {
        ctx->pc = 0x24DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDACu;
        // 0x24ddb0: 0xa28205b8  sb          $v0, 0x5B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1464), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDB4u;
        goto label_24ddb4;
    }
    ctx->pc = 0x24DDACu;
    {
        const bool branch_taken_0x24ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDACu;
        // 0x24ddb0: 0xa28205b8  sb          $v0, 0x5B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1464), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddac) {
            ctx->pc = 0x24DE8Cu;
            goto label_24de8c;
        }
    }
    ctx->pc = 0x24DDB4u;
label_24ddb4:
    // 0x24ddb4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24ddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24ddb8:
    // 0x24ddb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ddbc:
    // 0x24ddbc: 0x8e022c7c  lw          $v0, 0x2C7C($s0)
    ctx->pc = 0x24ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24ddc0:
    // 0x24ddc0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24ddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24ddc4:
    // 0x24ddc4: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x24ddc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_24ddc8:
    // 0x24ddc8: 0xc0e637e  jal         func_398DF8
label_24ddcc:
    if (ctx->pc == 0x24DDCCu) {
        ctx->pc = 0x24DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDC8u;
        // 0x24ddcc: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDD0u;
        goto label_24ddd0;
    }
    ctx->pc = 0x24DDC8u;
    SET_GPR_U32(ctx, 31, 0x24DDD0u);
    ctx->pc = 0x24DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDC8u;
    // 0x24ddcc: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24DDC8u, 0x24DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDD0u;
label_24ddd0:
    // 0x24ddd0: 0xc0e8b48  jal         func_3A2D20
label_24ddd4:
    if (ctx->pc == 0x24DDD4u) {
        ctx->pc = 0x24DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDD0u;
        // 0x24ddd4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDD8u;
        goto label_24ddd8;
    }
    ctx->pc = 0x24DDD0u;
    SET_GPR_U32(ctx, 31, 0x24DDD8u);
    ctx->pc = 0x24DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDD0u;
    // 0x24ddd4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24DDD0u, 0x24DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDD8u;
label_24ddd8:
    // 0x24ddd8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24dddc:
    // 0x24dddc: 0xc0e8b70  jal         func_3A2DC0
label_24dde0:
    if (ctx->pc == 0x24DDE0u) {
        ctx->pc = 0x24DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDDCu;
        // 0x24dde0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDE4u;
        goto label_24dde4;
    }
    ctx->pc = 0x24DDDCu;
    SET_GPR_U32(ctx, 31, 0x24DDE4u);
    ctx->pc = 0x24DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDDCu;
    // 0x24dde0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24DDDCu, 0x24DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDE4u;
label_24dde4:
    // 0x24dde4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24dde8:
    // 0x24dde8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24dde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24ddec:
    // 0x24ddec: 0xc0e8b80  jal         func_3A2E00
label_24ddf0:
    if (ctx->pc == 0x24DDF0u) {
        ctx->pc = 0x24DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDECu;
        // 0x24ddf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDF4u;
        goto label_24ddf4;
    }
    ctx->pc = 0x24DDECu;
    SET_GPR_U32(ctx, 31, 0x24DDF4u);
    ctx->pc = 0x24DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDECu;
    // 0x24ddf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x24DDECu, 0x24DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDF4u;
label_24ddf4:
    // 0x24ddf4: 0xc0e8b50  jal         func_3A2D40
label_24ddf8:
    if (ctx->pc == 0x24DDF8u) {
        ctx->pc = 0x24DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF4u;
        // 0x24ddf8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDFCu;
        goto label_24ddfc;
    }
    ctx->pc = 0x24DDF4u;
    SET_GPR_U32(ctx, 31, 0x24DDFCu);
    ctx->pc = 0x24DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDF4u;
    // 0x24ddf8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24DDF4u, 0x24DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDFCu;
label_24ddfc:
    // 0x24ddfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24de00:
    // 0x24de00: 0xc0e5748  jal         func_395D20
label_24de04:
    if (ctx->pc == 0x24DE04u) {
        ctx->pc = 0x24DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE00u;
        // 0x24de04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE08u;
        goto label_24de08;
    }
    ctx->pc = 0x24DE00u;
    SET_GPR_U32(ctx, 31, 0x24DE08u);
    ctx->pc = 0x24DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE00u;
    // 0x24de04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x24DE00u, 0x24DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE08u;
label_24de08:
    // 0x24de08: 0x8ec300e8  lw          $v1, 0xE8($s6)
    ctx->pc = 0x24de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_24de0c:
    // 0x24de0c: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x24de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_24de10:
    // 0x24de10: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_24de14:
    if (ctx->pc == 0x24DE14u) {
        ctx->pc = 0x24DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE10u;
        // 0x24de14: 0x26c400e8  addiu       $a0, $s6, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE18u;
        goto label_24de18;
    }
    ctx->pc = 0x24DE10u;
    {
        const bool branch_taken_0x24de10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE10u;
        // 0x24de14: 0x26c400e8  addiu       $a0, $s6, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de10) {
            ctx->pc = 0x24DE38u;
            goto label_24de38;
        }
    }
    ctx->pc = 0x24DE18u;
label_24de18:
    // 0x24de18: 0xc0e409a  jal         func_390268
label_24de1c:
    if (ctx->pc == 0x24DE1Cu) {
        ctx->pc = 0x24DE20u;
        goto label_24de20;
    }
    ctx->pc = 0x24DE18u;
    SET_GPR_U32(ctx, 31, 0x24DE20u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24DE18u, 0x24DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE20u;
label_24de20:
    // 0x24de20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24de20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24de24:
    // 0x24de24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_24de28:
    if (ctx->pc == 0x24DE28u) {
        ctx->pc = 0x24DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE24u;
        // 0x24de28: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE2Cu;
        goto label_24de2c;
    }
    ctx->pc = 0x24DE24u;
    {
        const bool branch_taken_0x24de24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE24u;
        // 0x24de28: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de24) {
            ctx->pc = 0x24DE30u;
            goto label_24de30;
        }
    }
    ctx->pc = 0x24DE2Cu;
label_24de2c:
    // 0x24de2c: 0xac620358  sw          $v0, 0x358($v1)
    ctx->pc = 0x24de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 2));
label_24de30:
    // 0x24de30: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_24de34:
    // 0x24de34: 0xaec200e8  sw          $v0, 0xE8($s6)
    ctx->pc = 0x24de34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 232), GPR_U32(ctx, 2));
label_24de38:
    // 0x24de38: 0x92c20109  lbu         $v0, 0x109($s6)
    ctx->pc = 0x24de38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 265)));
label_24de3c:
    // 0x24de3c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_24de40:
    if (ctx->pc == 0x24DE40u) {
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE44u;
        goto label_24de44;
    }
    ctx->pc = 0x24DE3Cu;
    {
        const bool branch_taken_0x24de3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de3c) {
            ctx->pc = 0x24DE94u;
            goto label_24de94;
        }
    }
    ctx->pc = 0x24DE44u;
label_24de44:
    // 0x24de44: 0xc104b72  jal         func_412DC8
label_24de48:
    if (ctx->pc == 0x24DE48u) {
        ctx->pc = 0x24DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE44u;
        // 0x24de48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE4Cu;
        goto label_24de4c;
    }
    ctx->pc = 0x24DE44u;
    SET_GPR_U32(ctx, 31, 0x24DE4Cu);
    ctx->pc = 0x24DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE44u;
    // 0x24de48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x24DE44u, 0x24DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE4Cu;
label_24de4c:
    // 0x24de4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24de50:
    // 0x24de50: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
label_24de54:
    if (ctx->pc == 0x24DE54u) {
        ctx->pc = 0x24DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE50u;
        // 0x24de54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE58u;
        goto label_24de58;
    }
    ctx->pc = 0x24DE50u;
    {
        const bool branch_taken_0x24de50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE50u;
        // 0x24de54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de50) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24DE58u;
label_24de58:
    // 0x24de58: 0xc0e5766  jal         func_395D98
label_24de5c:
    if (ctx->pc == 0x24DE5Cu) {
        ctx->pc = 0x24DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE58u;
        // 0x24de5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE60u;
        goto label_24de60;
    }
    ctx->pc = 0x24DE58u;
    SET_GPR_U32(ctx, 31, 0x24DE60u);
    ctx->pc = 0x24DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE58u;
    // 0x24de5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D98u, 0x24DE58u, 0x24DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE60u;
label_24de60:
    // 0x24de60: 0x1000000f  b           . + 4 + (0xF << 2)
label_24de64:
    if (ctx->pc == 0x24DE64u) {
        ctx->pc = 0x24DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE60u;
        // 0x24de64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE68u;
        goto label_24de68;
    }
    ctx->pc = 0x24DE60u;
    {
        const bool branch_taken_0x24de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE60u;
        // 0x24de64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de60) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24DE68u;
label_24de68:
    // 0x24de68: 0xc0874fa  jal         func_21D3E8
label_24de6c:
    if (ctx->pc == 0x24DE6Cu) {
        ctx->pc = 0x24DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE68u;
        // 0x24de6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE70u;
        goto label_24de70;
    }
    ctx->pc = 0x24DE68u;
    SET_GPR_U32(ctx, 31, 0x24DE70u);
    ctx->pc = 0x24DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE68u;
    // 0x24de6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x24DE68u, 0x24DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE70u;
label_24de70:
    // 0x24de70: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x24de70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_24de74:
    // 0x24de74: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_24de78:
    if (ctx->pc == 0x24DE78u) {
        ctx->pc = 0x24DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE74u;
        // 0x24de78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE7Cu;
        goto label_24de7c;
    }
    ctx->pc = 0x24DE74u;
    {
        const bool branch_taken_0x24de74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE74u;
        // 0x24de78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de74) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24DE7Cu;
label_24de7c:
    // 0x24de7c: 0xc089bfc  jal         func_226FF0
label_24de80:
    if (ctx->pc == 0x24DE80u) {
        ctx->pc = 0x24DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE7Cu;
        // 0x24de80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE84u;
        goto label_24de84;
    }
    ctx->pc = 0x24DE7Cu;
    SET_GPR_U32(ctx, 31, 0x24DE84u);
    ctx->pc = 0x24DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE7Cu;
    // 0x24de80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x24DE7Cu, 0x24DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE84u;
label_24de84:
    // 0x24de84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24de88:
    if (ctx->pc == 0x24DE88u) {
        ctx->pc = 0x24DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE84u;
        // 0x24de88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE8Cu;
        goto label_24de8c;
    }
    ctx->pc = 0x24DE84u;
    {
        const bool branch_taken_0x24de84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE84u;
        // 0x24de88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de84) {
            ctx->pc = 0x24DE9Cu;
            goto label_24de9c;
        }
    }
    ctx->pc = 0x24DE8Cu;
label_24de8c:
    // 0x24de8c: 0xc095fce  jal         func_257F38
label_24de90:
    if (ctx->pc == 0x24DE90u) {
        ctx->pc = 0x24DE94u;
        goto label_24de94;
    }
    ctx->pc = 0x24DE8Cu;
    SET_GPR_U32(ctx, 31, 0x24DE94u);
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x24DE8Cu, 0x24DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE94u;
label_24de94:
    // 0x24de94: 0x10000002  b           . + 4 + (0x2 << 2)
label_24de98:
    if (ctx->pc == 0x24DE98u) {
        ctx->pc = 0x24DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE94u;
        // 0x24de98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE9Cu;
        goto label_24de9c;
    }
    ctx->pc = 0x24DE94u;
    {
        const bool branch_taken_0x24de94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE94u;
        // 0x24de98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de94) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24DE9Cu;
label_24de9c:
    // 0x24de9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24de9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dea0:
    // 0x24dea0: 0x7bb00530  lq          $s0, 0x530($sp)
    ctx->pc = 0x24dea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_24dea4:
    // 0x24dea4: 0x7bb10520  lq          $s1, 0x520($sp)
    ctx->pc = 0x24dea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_24dea8:
    // 0x24dea8: 0x7bb20510  lq          $s2, 0x510($sp)
    ctx->pc = 0x24dea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_24deac:
    // 0x24deac: 0x7bb30500  lq          $s3, 0x500($sp)
    ctx->pc = 0x24deacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_24deb0:
    // 0x24deb0: 0x7bb404f0  lq          $s4, 0x4F0($sp)
    ctx->pc = 0x24deb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_24deb4:
    // 0x24deb4: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x24deb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_24deb8:
    // 0x24deb8: 0x7bb604d0  lq          $s6, 0x4D0($sp)
    ctx->pc = 0x24deb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_24debc:
    // 0x24debc: 0x7bb704c0  lq          $s7, 0x4C0($sp)
    ctx->pc = 0x24debcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_24dec0:
    // 0x24dec0: 0x7bbe04b0  lq          $fp, 0x4B0($sp)
    ctx->pc = 0x24dec0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_24dec4:
    // 0x24dec4: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x24dec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_24dec8:
    // 0x24dec8: 0xc7b50548  lwc1        $f21, 0x548($sp)
    ctx->pc = 0x24dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24decc:
    // 0x24decc: 0xc7b40540  lwc1        $f20, 0x540($sp)
    ctx->pc = 0x24deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24ded0:
    // 0x24ded0: 0x3e00008  jr          $ra
label_24ded4:
    if (ctx->pc == 0x24DED4u) {
        ctx->pc = 0x24DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DED0u;
        // 0x24ded4: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DED8u;
        goto label_24ded8;
    }
    ctx->pc = 0x24DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DED0u;
        // 0x24ded4: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DED8u;
label_24ded8:
    // 0x24ded8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_24dedc:
    // 0x24dedc: 0x0  nop
    ctx->pc = 0x24dedcu;
    // NOP
label_24dee0:
    // 0x24dee0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24dee4:
    // 0x24dee4: 0x0  nop
    ctx->pc = 0x24dee4u;
    // NOP
    ctx->pc = 0x24dee8u;
}
