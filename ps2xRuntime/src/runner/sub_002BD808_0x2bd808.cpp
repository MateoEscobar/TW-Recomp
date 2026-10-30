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

// Function: sub_002BD808
// Address: 0x2bd808 - 0x2be590
void sub_002BD808_0x2bd808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD808_0x2bd808");
#endif

    switch (ctx->pc) {
        case 0x2bd808u: goto label_2bd808;
        case 0x2bd80cu: goto label_2bd80c;
        case 0x2bd810u: goto label_2bd810;
        case 0x2bd814u: goto label_2bd814;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd81cu: goto label_2bd81c;
        case 0x2bd820u: goto label_2bd820;
        case 0x2bd824u: goto label_2bd824;
        case 0x2bd828u: goto label_2bd828;
        case 0x2bd82cu: goto label_2bd82c;
        case 0x2bd830u: goto label_2bd830;
        case 0x2bd834u: goto label_2bd834;
        case 0x2bd838u: goto label_2bd838;
        case 0x2bd83cu: goto label_2bd83c;
        case 0x2bd840u: goto label_2bd840;
        case 0x2bd844u: goto label_2bd844;
        case 0x2bd848u: goto label_2bd848;
        case 0x2bd84cu: goto label_2bd84c;
        case 0x2bd850u: goto label_2bd850;
        case 0x2bd854u: goto label_2bd854;
        case 0x2bd858u: goto label_2bd858;
        case 0x2bd85cu: goto label_2bd85c;
        case 0x2bd860u: goto label_2bd860;
        case 0x2bd864u: goto label_2bd864;
        case 0x2bd868u: goto label_2bd868;
        case 0x2bd86cu: goto label_2bd86c;
        case 0x2bd870u: goto label_2bd870;
        case 0x2bd874u: goto label_2bd874;
        case 0x2bd878u: goto label_2bd878;
        case 0x2bd87cu: goto label_2bd87c;
        case 0x2bd880u: goto label_2bd880;
        case 0x2bd884u: goto label_2bd884;
        case 0x2bd888u: goto label_2bd888;
        case 0x2bd88cu: goto label_2bd88c;
        case 0x2bd890u: goto label_2bd890;
        case 0x2bd894u: goto label_2bd894;
        case 0x2bd898u: goto label_2bd898;
        case 0x2bd89cu: goto label_2bd89c;
        case 0x2bd8a0u: goto label_2bd8a0;
        case 0x2bd8a4u: goto label_2bd8a4;
        case 0x2bd8a8u: goto label_2bd8a8;
        case 0x2bd8acu: goto label_2bd8ac;
        case 0x2bd8b0u: goto label_2bd8b0;
        case 0x2bd8b4u: goto label_2bd8b4;
        case 0x2bd8b8u: goto label_2bd8b8;
        case 0x2bd8bcu: goto label_2bd8bc;
        case 0x2bd8c0u: goto label_2bd8c0;
        case 0x2bd8c4u: goto label_2bd8c4;
        case 0x2bd8c8u: goto label_2bd8c8;
        case 0x2bd8ccu: goto label_2bd8cc;
        case 0x2bd8d0u: goto label_2bd8d0;
        case 0x2bd8d4u: goto label_2bd8d4;
        case 0x2bd8d8u: goto label_2bd8d8;
        case 0x2bd8dcu: goto label_2bd8dc;
        case 0x2bd8e0u: goto label_2bd8e0;
        case 0x2bd8e4u: goto label_2bd8e4;
        case 0x2bd8e8u: goto label_2bd8e8;
        case 0x2bd8ecu: goto label_2bd8ec;
        case 0x2bd8f0u: goto label_2bd8f0;
        case 0x2bd8f4u: goto label_2bd8f4;
        case 0x2bd8f8u: goto label_2bd8f8;
        case 0x2bd8fcu: goto label_2bd8fc;
        case 0x2bd900u: goto label_2bd900;
        case 0x2bd904u: goto label_2bd904;
        case 0x2bd908u: goto label_2bd908;
        case 0x2bd90cu: goto label_2bd90c;
        case 0x2bd910u: goto label_2bd910;
        case 0x2bd914u: goto label_2bd914;
        case 0x2bd918u: goto label_2bd918;
        case 0x2bd91cu: goto label_2bd91c;
        case 0x2bd920u: goto label_2bd920;
        case 0x2bd924u: goto label_2bd924;
        case 0x2bd928u: goto label_2bd928;
        case 0x2bd92cu: goto label_2bd92c;
        case 0x2bd930u: goto label_2bd930;
        case 0x2bd934u: goto label_2bd934;
        case 0x2bd938u: goto label_2bd938;
        case 0x2bd93cu: goto label_2bd93c;
        case 0x2bd940u: goto label_2bd940;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd948u: goto label_2bd948;
        case 0x2bd94cu: goto label_2bd94c;
        case 0x2bd950u: goto label_2bd950;
        case 0x2bd954u: goto label_2bd954;
        case 0x2bd958u: goto label_2bd958;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd960u: goto label_2bd960;
        case 0x2bd964u: goto label_2bd964;
        case 0x2bd968u: goto label_2bd968;
        case 0x2bd96cu: goto label_2bd96c;
        case 0x2bd970u: goto label_2bd970;
        case 0x2bd974u: goto label_2bd974;
        case 0x2bd978u: goto label_2bd978;
        case 0x2bd97cu: goto label_2bd97c;
        case 0x2bd980u: goto label_2bd980;
        case 0x2bd984u: goto label_2bd984;
        case 0x2bd988u: goto label_2bd988;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd990u: goto label_2bd990;
        case 0x2bd994u: goto label_2bd994;
        case 0x2bd998u: goto label_2bd998;
        case 0x2bd99cu: goto label_2bd99c;
        case 0x2bd9a0u: goto label_2bd9a0;
        case 0x2bd9a4u: goto label_2bd9a4;
        case 0x2bd9a8u: goto label_2bd9a8;
        case 0x2bd9acu: goto label_2bd9ac;
        case 0x2bd9b0u: goto label_2bd9b0;
        case 0x2bd9b4u: goto label_2bd9b4;
        case 0x2bd9b8u: goto label_2bd9b8;
        case 0x2bd9bcu: goto label_2bd9bc;
        case 0x2bd9c0u: goto label_2bd9c0;
        case 0x2bd9c4u: goto label_2bd9c4;
        case 0x2bd9c8u: goto label_2bd9c8;
        case 0x2bd9ccu: goto label_2bd9cc;
        case 0x2bd9d0u: goto label_2bd9d0;
        case 0x2bd9d4u: goto label_2bd9d4;
        case 0x2bd9d8u: goto label_2bd9d8;
        case 0x2bd9dcu: goto label_2bd9dc;
        case 0x2bd9e0u: goto label_2bd9e0;
        case 0x2bd9e4u: goto label_2bd9e4;
        case 0x2bd9e8u: goto label_2bd9e8;
        case 0x2bd9ecu: goto label_2bd9ec;
        case 0x2bd9f0u: goto label_2bd9f0;
        case 0x2bd9f4u: goto label_2bd9f4;
        case 0x2bd9f8u: goto label_2bd9f8;
        case 0x2bd9fcu: goto label_2bd9fc;
        case 0x2bda00u: goto label_2bda00;
        case 0x2bda04u: goto label_2bda04;
        case 0x2bda08u: goto label_2bda08;
        case 0x2bda0cu: goto label_2bda0c;
        case 0x2bda10u: goto label_2bda10;
        case 0x2bda14u: goto label_2bda14;
        case 0x2bda18u: goto label_2bda18;
        case 0x2bda1cu: goto label_2bda1c;
        case 0x2bda20u: goto label_2bda20;
        case 0x2bda24u: goto label_2bda24;
        case 0x2bda28u: goto label_2bda28;
        case 0x2bda2cu: goto label_2bda2c;
        case 0x2bda30u: goto label_2bda30;
        case 0x2bda34u: goto label_2bda34;
        case 0x2bda38u: goto label_2bda38;
        case 0x2bda3cu: goto label_2bda3c;
        case 0x2bda40u: goto label_2bda40;
        case 0x2bda44u: goto label_2bda44;
        case 0x2bda48u: goto label_2bda48;
        case 0x2bda4cu: goto label_2bda4c;
        case 0x2bda50u: goto label_2bda50;
        case 0x2bda54u: goto label_2bda54;
        case 0x2bda58u: goto label_2bda58;
        case 0x2bda5cu: goto label_2bda5c;
        case 0x2bda60u: goto label_2bda60;
        case 0x2bda64u: goto label_2bda64;
        case 0x2bda68u: goto label_2bda68;
        case 0x2bda6cu: goto label_2bda6c;
        case 0x2bda70u: goto label_2bda70;
        case 0x2bda74u: goto label_2bda74;
        case 0x2bda78u: goto label_2bda78;
        case 0x2bda7cu: goto label_2bda7c;
        case 0x2bda80u: goto label_2bda80;
        case 0x2bda84u: goto label_2bda84;
        case 0x2bda88u: goto label_2bda88;
        case 0x2bda8cu: goto label_2bda8c;
        case 0x2bda90u: goto label_2bda90;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bda98u: goto label_2bda98;
        case 0x2bda9cu: goto label_2bda9c;
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdaa4u: goto label_2bdaa4;
        case 0x2bdaa8u: goto label_2bdaa8;
        case 0x2bdaacu: goto label_2bdaac;
        case 0x2bdab0u: goto label_2bdab0;
        case 0x2bdab4u: goto label_2bdab4;
        case 0x2bdab8u: goto label_2bdab8;
        case 0x2bdabcu: goto label_2bdabc;
        case 0x2bdac0u: goto label_2bdac0;
        case 0x2bdac4u: goto label_2bdac4;
        case 0x2bdac8u: goto label_2bdac8;
        case 0x2bdaccu: goto label_2bdacc;
        case 0x2bdad0u: goto label_2bdad0;
        case 0x2bdad4u: goto label_2bdad4;
        case 0x2bdad8u: goto label_2bdad8;
        case 0x2bdadcu: goto label_2bdadc;
        case 0x2bdae0u: goto label_2bdae0;
        case 0x2bdae4u: goto label_2bdae4;
        case 0x2bdae8u: goto label_2bdae8;
        case 0x2bdaecu: goto label_2bdaec;
        case 0x2bdaf0u: goto label_2bdaf0;
        case 0x2bdaf4u: goto label_2bdaf4;
        case 0x2bdaf8u: goto label_2bdaf8;
        case 0x2bdafcu: goto label_2bdafc;
        case 0x2bdb00u: goto label_2bdb00;
        case 0x2bdb04u: goto label_2bdb04;
        case 0x2bdb08u: goto label_2bdb08;
        case 0x2bdb0cu: goto label_2bdb0c;
        case 0x2bdb10u: goto label_2bdb10;
        case 0x2bdb14u: goto label_2bdb14;
        case 0x2bdb18u: goto label_2bdb18;
        case 0x2bdb1cu: goto label_2bdb1c;
        case 0x2bdb20u: goto label_2bdb20;
        case 0x2bdb24u: goto label_2bdb24;
        case 0x2bdb28u: goto label_2bdb28;
        case 0x2bdb2cu: goto label_2bdb2c;
        case 0x2bdb30u: goto label_2bdb30;
        case 0x2bdb34u: goto label_2bdb34;
        case 0x2bdb38u: goto label_2bdb38;
        case 0x2bdb3cu: goto label_2bdb3c;
        case 0x2bdb40u: goto label_2bdb40;
        case 0x2bdb44u: goto label_2bdb44;
        case 0x2bdb48u: goto label_2bdb48;
        case 0x2bdb4cu: goto label_2bdb4c;
        case 0x2bdb50u: goto label_2bdb50;
        case 0x2bdb54u: goto label_2bdb54;
        case 0x2bdb58u: goto label_2bdb58;
        case 0x2bdb5cu: goto label_2bdb5c;
        case 0x2bdb60u: goto label_2bdb60;
        case 0x2bdb64u: goto label_2bdb64;
        case 0x2bdb68u: goto label_2bdb68;
        case 0x2bdb6cu: goto label_2bdb6c;
        case 0x2bdb70u: goto label_2bdb70;
        case 0x2bdb74u: goto label_2bdb74;
        case 0x2bdb78u: goto label_2bdb78;
        case 0x2bdb7cu: goto label_2bdb7c;
        case 0x2bdb80u: goto label_2bdb80;
        case 0x2bdb84u: goto label_2bdb84;
        case 0x2bdb88u: goto label_2bdb88;
        case 0x2bdb8cu: goto label_2bdb8c;
        case 0x2bdb90u: goto label_2bdb90;
        case 0x2bdb94u: goto label_2bdb94;
        case 0x2bdb98u: goto label_2bdb98;
        case 0x2bdb9cu: goto label_2bdb9c;
        case 0x2bdba0u: goto label_2bdba0;
        case 0x2bdba4u: goto label_2bdba4;
        case 0x2bdba8u: goto label_2bdba8;
        case 0x2bdbacu: goto label_2bdbac;
        case 0x2bdbb0u: goto label_2bdbb0;
        case 0x2bdbb4u: goto label_2bdbb4;
        case 0x2bdbb8u: goto label_2bdbb8;
        case 0x2bdbbcu: goto label_2bdbbc;
        case 0x2bdbc0u: goto label_2bdbc0;
        case 0x2bdbc4u: goto label_2bdbc4;
        case 0x2bdbc8u: goto label_2bdbc8;
        case 0x2bdbccu: goto label_2bdbcc;
        case 0x2bdbd0u: goto label_2bdbd0;
        case 0x2bdbd4u: goto label_2bdbd4;
        case 0x2bdbd8u: goto label_2bdbd8;
        case 0x2bdbdcu: goto label_2bdbdc;
        case 0x2bdbe0u: goto label_2bdbe0;
        case 0x2bdbe4u: goto label_2bdbe4;
        case 0x2bdbe8u: goto label_2bdbe8;
        case 0x2bdbecu: goto label_2bdbec;
        case 0x2bdbf0u: goto label_2bdbf0;
        case 0x2bdbf4u: goto label_2bdbf4;
        case 0x2bdbf8u: goto label_2bdbf8;
        case 0x2bdbfcu: goto label_2bdbfc;
        case 0x2bdc00u: goto label_2bdc00;
        case 0x2bdc04u: goto label_2bdc04;
        case 0x2bdc08u: goto label_2bdc08;
        case 0x2bdc0cu: goto label_2bdc0c;
        case 0x2bdc10u: goto label_2bdc10;
        case 0x2bdc14u: goto label_2bdc14;
        case 0x2bdc18u: goto label_2bdc18;
        case 0x2bdc1cu: goto label_2bdc1c;
        case 0x2bdc20u: goto label_2bdc20;
        case 0x2bdc24u: goto label_2bdc24;
        case 0x2bdc28u: goto label_2bdc28;
        case 0x2bdc2cu: goto label_2bdc2c;
        case 0x2bdc30u: goto label_2bdc30;
        case 0x2bdc34u: goto label_2bdc34;
        case 0x2bdc38u: goto label_2bdc38;
        case 0x2bdc3cu: goto label_2bdc3c;
        case 0x2bdc40u: goto label_2bdc40;
        case 0x2bdc44u: goto label_2bdc44;
        case 0x2bdc48u: goto label_2bdc48;
        case 0x2bdc4cu: goto label_2bdc4c;
        case 0x2bdc50u: goto label_2bdc50;
        case 0x2bdc54u: goto label_2bdc54;
        case 0x2bdc58u: goto label_2bdc58;
        case 0x2bdc5cu: goto label_2bdc5c;
        case 0x2bdc60u: goto label_2bdc60;
        case 0x2bdc64u: goto label_2bdc64;
        case 0x2bdc68u: goto label_2bdc68;
        case 0x2bdc6cu: goto label_2bdc6c;
        case 0x2bdc70u: goto label_2bdc70;
        case 0x2bdc74u: goto label_2bdc74;
        case 0x2bdc78u: goto label_2bdc78;
        case 0x2bdc7cu: goto label_2bdc7c;
        case 0x2bdc80u: goto label_2bdc80;
        case 0x2bdc84u: goto label_2bdc84;
        case 0x2bdc88u: goto label_2bdc88;
        case 0x2bdc8cu: goto label_2bdc8c;
        case 0x2bdc90u: goto label_2bdc90;
        case 0x2bdc94u: goto label_2bdc94;
        case 0x2bdc98u: goto label_2bdc98;
        case 0x2bdc9cu: goto label_2bdc9c;
        case 0x2bdca0u: goto label_2bdca0;
        case 0x2bdca4u: goto label_2bdca4;
        case 0x2bdca8u: goto label_2bdca8;
        case 0x2bdcacu: goto label_2bdcac;
        case 0x2bdcb0u: goto label_2bdcb0;
        case 0x2bdcb4u: goto label_2bdcb4;
        case 0x2bdcb8u: goto label_2bdcb8;
        case 0x2bdcbcu: goto label_2bdcbc;
        case 0x2bdcc0u: goto label_2bdcc0;
        case 0x2bdcc4u: goto label_2bdcc4;
        case 0x2bdcc8u: goto label_2bdcc8;
        case 0x2bdcccu: goto label_2bdccc;
        case 0x2bdcd0u: goto label_2bdcd0;
        case 0x2bdcd4u: goto label_2bdcd4;
        case 0x2bdcd8u: goto label_2bdcd8;
        case 0x2bdcdcu: goto label_2bdcdc;
        case 0x2bdce0u: goto label_2bdce0;
        case 0x2bdce4u: goto label_2bdce4;
        case 0x2bdce8u: goto label_2bdce8;
        case 0x2bdcecu: goto label_2bdcec;
        case 0x2bdcf0u: goto label_2bdcf0;
        case 0x2bdcf4u: goto label_2bdcf4;
        case 0x2bdcf8u: goto label_2bdcf8;
        case 0x2bdcfcu: goto label_2bdcfc;
        case 0x2bdd00u: goto label_2bdd00;
        case 0x2bdd04u: goto label_2bdd04;
        case 0x2bdd08u: goto label_2bdd08;
        case 0x2bdd0cu: goto label_2bdd0c;
        case 0x2bdd10u: goto label_2bdd10;
        case 0x2bdd14u: goto label_2bdd14;
        case 0x2bdd18u: goto label_2bdd18;
        case 0x2bdd1cu: goto label_2bdd1c;
        case 0x2bdd20u: goto label_2bdd20;
        case 0x2bdd24u: goto label_2bdd24;
        case 0x2bdd28u: goto label_2bdd28;
        case 0x2bdd2cu: goto label_2bdd2c;
        case 0x2bdd30u: goto label_2bdd30;
        case 0x2bdd34u: goto label_2bdd34;
        case 0x2bdd38u: goto label_2bdd38;
        case 0x2bdd3cu: goto label_2bdd3c;
        case 0x2bdd40u: goto label_2bdd40;
        case 0x2bdd44u: goto label_2bdd44;
        case 0x2bdd48u: goto label_2bdd48;
        case 0x2bdd4cu: goto label_2bdd4c;
        case 0x2bdd50u: goto label_2bdd50;
        case 0x2bdd54u: goto label_2bdd54;
        case 0x2bdd58u: goto label_2bdd58;
        case 0x2bdd5cu: goto label_2bdd5c;
        case 0x2bdd60u: goto label_2bdd60;
        case 0x2bdd64u: goto label_2bdd64;
        case 0x2bdd68u: goto label_2bdd68;
        case 0x2bdd6cu: goto label_2bdd6c;
        case 0x2bdd70u: goto label_2bdd70;
        case 0x2bdd74u: goto label_2bdd74;
        case 0x2bdd78u: goto label_2bdd78;
        case 0x2bdd7cu: goto label_2bdd7c;
        case 0x2bdd80u: goto label_2bdd80;
        case 0x2bdd84u: goto label_2bdd84;
        case 0x2bdd88u: goto label_2bdd88;
        case 0x2bdd8cu: goto label_2bdd8c;
        case 0x2bdd90u: goto label_2bdd90;
        case 0x2bdd94u: goto label_2bdd94;
        case 0x2bdd98u: goto label_2bdd98;
        case 0x2bdd9cu: goto label_2bdd9c;
        case 0x2bdda0u: goto label_2bdda0;
        case 0x2bdda4u: goto label_2bdda4;
        case 0x2bdda8u: goto label_2bdda8;
        case 0x2bddacu: goto label_2bddac;
        case 0x2bddb0u: goto label_2bddb0;
        case 0x2bddb4u: goto label_2bddb4;
        case 0x2bddb8u: goto label_2bddb8;
        case 0x2bddbcu: goto label_2bddbc;
        case 0x2bddc0u: goto label_2bddc0;
        case 0x2bddc4u: goto label_2bddc4;
        case 0x2bddc8u: goto label_2bddc8;
        case 0x2bddccu: goto label_2bddcc;
        case 0x2bddd0u: goto label_2bddd0;
        case 0x2bddd4u: goto label_2bddd4;
        case 0x2bddd8u: goto label_2bddd8;
        case 0x2bdddcu: goto label_2bdddc;
        case 0x2bdde0u: goto label_2bdde0;
        case 0x2bdde4u: goto label_2bdde4;
        case 0x2bdde8u: goto label_2bdde8;
        case 0x2bddecu: goto label_2bddec;
        case 0x2bddf0u: goto label_2bddf0;
        case 0x2bddf4u: goto label_2bddf4;
        case 0x2bddf8u: goto label_2bddf8;
        case 0x2bddfcu: goto label_2bddfc;
        case 0x2bde00u: goto label_2bde00;
        case 0x2bde04u: goto label_2bde04;
        case 0x2bde08u: goto label_2bde08;
        case 0x2bde0cu: goto label_2bde0c;
        case 0x2bde10u: goto label_2bde10;
        case 0x2bde14u: goto label_2bde14;
        case 0x2bde18u: goto label_2bde18;
        case 0x2bde1cu: goto label_2bde1c;
        case 0x2bde20u: goto label_2bde20;
        case 0x2bde24u: goto label_2bde24;
        case 0x2bde28u: goto label_2bde28;
        case 0x2bde2cu: goto label_2bde2c;
        case 0x2bde30u: goto label_2bde30;
        case 0x2bde34u: goto label_2bde34;
        case 0x2bde38u: goto label_2bde38;
        case 0x2bde3cu: goto label_2bde3c;
        case 0x2bde40u: goto label_2bde40;
        case 0x2bde44u: goto label_2bde44;
        case 0x2bde48u: goto label_2bde48;
        case 0x2bde4cu: goto label_2bde4c;
        case 0x2bde50u: goto label_2bde50;
        case 0x2bde54u: goto label_2bde54;
        case 0x2bde58u: goto label_2bde58;
        case 0x2bde5cu: goto label_2bde5c;
        case 0x2bde60u: goto label_2bde60;
        case 0x2bde64u: goto label_2bde64;
        case 0x2bde68u: goto label_2bde68;
        case 0x2bde6cu: goto label_2bde6c;
        case 0x2bde70u: goto label_2bde70;
        case 0x2bde74u: goto label_2bde74;
        case 0x2bde78u: goto label_2bde78;
        case 0x2bde7cu: goto label_2bde7c;
        case 0x2bde80u: goto label_2bde80;
        case 0x2bde84u: goto label_2bde84;
        case 0x2bde88u: goto label_2bde88;
        case 0x2bde8cu: goto label_2bde8c;
        case 0x2bde90u: goto label_2bde90;
        case 0x2bde94u: goto label_2bde94;
        case 0x2bde98u: goto label_2bde98;
        case 0x2bde9cu: goto label_2bde9c;
        case 0x2bdea0u: goto label_2bdea0;
        case 0x2bdea4u: goto label_2bdea4;
        case 0x2bdea8u: goto label_2bdea8;
        case 0x2bdeacu: goto label_2bdeac;
        case 0x2bdeb0u: goto label_2bdeb0;
        case 0x2bdeb4u: goto label_2bdeb4;
        case 0x2bdeb8u: goto label_2bdeb8;
        case 0x2bdebcu: goto label_2bdebc;
        case 0x2bdec0u: goto label_2bdec0;
        case 0x2bdec4u: goto label_2bdec4;
        case 0x2bdec8u: goto label_2bdec8;
        case 0x2bdeccu: goto label_2bdecc;
        case 0x2bded0u: goto label_2bded0;
        case 0x2bded4u: goto label_2bded4;
        case 0x2bded8u: goto label_2bded8;
        case 0x2bdedcu: goto label_2bdedc;
        case 0x2bdee0u: goto label_2bdee0;
        case 0x2bdee4u: goto label_2bdee4;
        case 0x2bdee8u: goto label_2bdee8;
        case 0x2bdeecu: goto label_2bdeec;
        case 0x2bdef0u: goto label_2bdef0;
        case 0x2bdef4u: goto label_2bdef4;
        case 0x2bdef8u: goto label_2bdef8;
        case 0x2bdefcu: goto label_2bdefc;
        case 0x2bdf00u: goto label_2bdf00;
        case 0x2bdf04u: goto label_2bdf04;
        case 0x2bdf08u: goto label_2bdf08;
        case 0x2bdf0cu: goto label_2bdf0c;
        case 0x2bdf10u: goto label_2bdf10;
        case 0x2bdf14u: goto label_2bdf14;
        case 0x2bdf18u: goto label_2bdf18;
        case 0x2bdf1cu: goto label_2bdf1c;
        case 0x2bdf20u: goto label_2bdf20;
        case 0x2bdf24u: goto label_2bdf24;
        case 0x2bdf28u: goto label_2bdf28;
        case 0x2bdf2cu: goto label_2bdf2c;
        case 0x2bdf30u: goto label_2bdf30;
        case 0x2bdf34u: goto label_2bdf34;
        case 0x2bdf38u: goto label_2bdf38;
        case 0x2bdf3cu: goto label_2bdf3c;
        case 0x2bdf40u: goto label_2bdf40;
        case 0x2bdf44u: goto label_2bdf44;
        case 0x2bdf48u: goto label_2bdf48;
        case 0x2bdf4cu: goto label_2bdf4c;
        case 0x2bdf50u: goto label_2bdf50;
        case 0x2bdf54u: goto label_2bdf54;
        case 0x2bdf58u: goto label_2bdf58;
        case 0x2bdf5cu: goto label_2bdf5c;
        case 0x2bdf60u: goto label_2bdf60;
        case 0x2bdf64u: goto label_2bdf64;
        case 0x2bdf68u: goto label_2bdf68;
        case 0x2bdf6cu: goto label_2bdf6c;
        case 0x2bdf70u: goto label_2bdf70;
        case 0x2bdf74u: goto label_2bdf74;
        case 0x2bdf78u: goto label_2bdf78;
        case 0x2bdf7cu: goto label_2bdf7c;
        case 0x2bdf80u: goto label_2bdf80;
        case 0x2bdf84u: goto label_2bdf84;
        case 0x2bdf88u: goto label_2bdf88;
        case 0x2bdf8cu: goto label_2bdf8c;
        case 0x2bdf90u: goto label_2bdf90;
        case 0x2bdf94u: goto label_2bdf94;
        case 0x2bdf98u: goto label_2bdf98;
        case 0x2bdf9cu: goto label_2bdf9c;
        case 0x2bdfa0u: goto label_2bdfa0;
        case 0x2bdfa4u: goto label_2bdfa4;
        case 0x2bdfa8u: goto label_2bdfa8;
        case 0x2bdfacu: goto label_2bdfac;
        case 0x2bdfb0u: goto label_2bdfb0;
        case 0x2bdfb4u: goto label_2bdfb4;
        case 0x2bdfb8u: goto label_2bdfb8;
        case 0x2bdfbcu: goto label_2bdfbc;
        case 0x2bdfc0u: goto label_2bdfc0;
        case 0x2bdfc4u: goto label_2bdfc4;
        case 0x2bdfc8u: goto label_2bdfc8;
        case 0x2bdfccu: goto label_2bdfcc;
        case 0x2bdfd0u: goto label_2bdfd0;
        case 0x2bdfd4u: goto label_2bdfd4;
        case 0x2bdfd8u: goto label_2bdfd8;
        case 0x2bdfdcu: goto label_2bdfdc;
        case 0x2bdfe0u: goto label_2bdfe0;
        case 0x2bdfe4u: goto label_2bdfe4;
        case 0x2bdfe8u: goto label_2bdfe8;
        case 0x2bdfecu: goto label_2bdfec;
        case 0x2bdff0u: goto label_2bdff0;
        case 0x2bdff4u: goto label_2bdff4;
        case 0x2bdff8u: goto label_2bdff8;
        case 0x2bdffcu: goto label_2bdffc;
        case 0x2be000u: goto label_2be000;
        case 0x2be004u: goto label_2be004;
        case 0x2be008u: goto label_2be008;
        case 0x2be00cu: goto label_2be00c;
        case 0x2be010u: goto label_2be010;
        case 0x2be014u: goto label_2be014;
        case 0x2be018u: goto label_2be018;
        case 0x2be01cu: goto label_2be01c;
        case 0x2be020u: goto label_2be020;
        case 0x2be024u: goto label_2be024;
        case 0x2be028u: goto label_2be028;
        case 0x2be02cu: goto label_2be02c;
        case 0x2be030u: goto label_2be030;
        case 0x2be034u: goto label_2be034;
        case 0x2be038u: goto label_2be038;
        case 0x2be03cu: goto label_2be03c;
        case 0x2be040u: goto label_2be040;
        case 0x2be044u: goto label_2be044;
        case 0x2be048u: goto label_2be048;
        case 0x2be04cu: goto label_2be04c;
        case 0x2be050u: goto label_2be050;
        case 0x2be054u: goto label_2be054;
        case 0x2be058u: goto label_2be058;
        case 0x2be05cu: goto label_2be05c;
        case 0x2be060u: goto label_2be060;
        case 0x2be064u: goto label_2be064;
        case 0x2be068u: goto label_2be068;
        case 0x2be06cu: goto label_2be06c;
        case 0x2be070u: goto label_2be070;
        case 0x2be074u: goto label_2be074;
        case 0x2be078u: goto label_2be078;
        case 0x2be07cu: goto label_2be07c;
        case 0x2be080u: goto label_2be080;
        case 0x2be084u: goto label_2be084;
        case 0x2be088u: goto label_2be088;
        case 0x2be08cu: goto label_2be08c;
        case 0x2be090u: goto label_2be090;
        case 0x2be094u: goto label_2be094;
        case 0x2be098u: goto label_2be098;
        case 0x2be09cu: goto label_2be09c;
        case 0x2be0a0u: goto label_2be0a0;
        case 0x2be0a4u: goto label_2be0a4;
        case 0x2be0a8u: goto label_2be0a8;
        case 0x2be0acu: goto label_2be0ac;
        case 0x2be0b0u: goto label_2be0b0;
        case 0x2be0b4u: goto label_2be0b4;
        case 0x2be0b8u: goto label_2be0b8;
        case 0x2be0bcu: goto label_2be0bc;
        case 0x2be0c0u: goto label_2be0c0;
        case 0x2be0c4u: goto label_2be0c4;
        case 0x2be0c8u: goto label_2be0c8;
        case 0x2be0ccu: goto label_2be0cc;
        case 0x2be0d0u: goto label_2be0d0;
        case 0x2be0d4u: goto label_2be0d4;
        case 0x2be0d8u: goto label_2be0d8;
        case 0x2be0dcu: goto label_2be0dc;
        case 0x2be0e0u: goto label_2be0e0;
        case 0x2be0e4u: goto label_2be0e4;
        case 0x2be0e8u: goto label_2be0e8;
        case 0x2be0ecu: goto label_2be0ec;
        case 0x2be0f0u: goto label_2be0f0;
        case 0x2be0f4u: goto label_2be0f4;
        case 0x2be0f8u: goto label_2be0f8;
        case 0x2be0fcu: goto label_2be0fc;
        case 0x2be100u: goto label_2be100;
        case 0x2be104u: goto label_2be104;
        case 0x2be108u: goto label_2be108;
        case 0x2be10cu: goto label_2be10c;
        case 0x2be110u: goto label_2be110;
        case 0x2be114u: goto label_2be114;
        case 0x2be118u: goto label_2be118;
        case 0x2be11cu: goto label_2be11c;
        case 0x2be120u: goto label_2be120;
        case 0x2be124u: goto label_2be124;
        case 0x2be128u: goto label_2be128;
        case 0x2be12cu: goto label_2be12c;
        case 0x2be130u: goto label_2be130;
        case 0x2be134u: goto label_2be134;
        case 0x2be138u: goto label_2be138;
        case 0x2be13cu: goto label_2be13c;
        case 0x2be140u: goto label_2be140;
        case 0x2be144u: goto label_2be144;
        case 0x2be148u: goto label_2be148;
        case 0x2be14cu: goto label_2be14c;
        case 0x2be150u: goto label_2be150;
        case 0x2be154u: goto label_2be154;
        case 0x2be158u: goto label_2be158;
        case 0x2be15cu: goto label_2be15c;
        case 0x2be160u: goto label_2be160;
        case 0x2be164u: goto label_2be164;
        case 0x2be168u: goto label_2be168;
        case 0x2be16cu: goto label_2be16c;
        case 0x2be170u: goto label_2be170;
        case 0x2be174u: goto label_2be174;
        case 0x2be178u: goto label_2be178;
        case 0x2be17cu: goto label_2be17c;
        case 0x2be180u: goto label_2be180;
        case 0x2be184u: goto label_2be184;
        case 0x2be188u: goto label_2be188;
        case 0x2be18cu: goto label_2be18c;
        case 0x2be190u: goto label_2be190;
        case 0x2be194u: goto label_2be194;
        case 0x2be198u: goto label_2be198;
        case 0x2be19cu: goto label_2be19c;
        case 0x2be1a0u: goto label_2be1a0;
        case 0x2be1a4u: goto label_2be1a4;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be1acu: goto label_2be1ac;
        case 0x2be1b0u: goto label_2be1b0;
        case 0x2be1b4u: goto label_2be1b4;
        case 0x2be1b8u: goto label_2be1b8;
        case 0x2be1bcu: goto label_2be1bc;
        case 0x2be1c0u: goto label_2be1c0;
        case 0x2be1c4u: goto label_2be1c4;
        case 0x2be1c8u: goto label_2be1c8;
        case 0x2be1ccu: goto label_2be1cc;
        case 0x2be1d0u: goto label_2be1d0;
        case 0x2be1d4u: goto label_2be1d4;
        case 0x2be1d8u: goto label_2be1d8;
        case 0x2be1dcu: goto label_2be1dc;
        case 0x2be1e0u: goto label_2be1e0;
        case 0x2be1e4u: goto label_2be1e4;
        case 0x2be1e8u: goto label_2be1e8;
        case 0x2be1ecu: goto label_2be1ec;
        case 0x2be1f0u: goto label_2be1f0;
        case 0x2be1f4u: goto label_2be1f4;
        case 0x2be1f8u: goto label_2be1f8;
        case 0x2be1fcu: goto label_2be1fc;
        case 0x2be200u: goto label_2be200;
        case 0x2be204u: goto label_2be204;
        case 0x2be208u: goto label_2be208;
        case 0x2be20cu: goto label_2be20c;
        case 0x2be210u: goto label_2be210;
        case 0x2be214u: goto label_2be214;
        case 0x2be218u: goto label_2be218;
        case 0x2be21cu: goto label_2be21c;
        case 0x2be220u: goto label_2be220;
        case 0x2be224u: goto label_2be224;
        case 0x2be228u: goto label_2be228;
        case 0x2be22cu: goto label_2be22c;
        case 0x2be230u: goto label_2be230;
        case 0x2be234u: goto label_2be234;
        case 0x2be238u: goto label_2be238;
        case 0x2be23cu: goto label_2be23c;
        case 0x2be240u: goto label_2be240;
        case 0x2be244u: goto label_2be244;
        case 0x2be248u: goto label_2be248;
        case 0x2be24cu: goto label_2be24c;
        case 0x2be250u: goto label_2be250;
        case 0x2be254u: goto label_2be254;
        case 0x2be258u: goto label_2be258;
        case 0x2be25cu: goto label_2be25c;
        case 0x2be260u: goto label_2be260;
        case 0x2be264u: goto label_2be264;
        case 0x2be268u: goto label_2be268;
        case 0x2be26cu: goto label_2be26c;
        case 0x2be270u: goto label_2be270;
        case 0x2be274u: goto label_2be274;
        case 0x2be278u: goto label_2be278;
        case 0x2be27cu: goto label_2be27c;
        case 0x2be280u: goto label_2be280;
        case 0x2be284u: goto label_2be284;
        case 0x2be288u: goto label_2be288;
        case 0x2be28cu: goto label_2be28c;
        case 0x2be290u: goto label_2be290;
        case 0x2be294u: goto label_2be294;
        case 0x2be298u: goto label_2be298;
        case 0x2be29cu: goto label_2be29c;
        case 0x2be2a0u: goto label_2be2a0;
        case 0x2be2a4u: goto label_2be2a4;
        case 0x2be2a8u: goto label_2be2a8;
        case 0x2be2acu: goto label_2be2ac;
        case 0x2be2b0u: goto label_2be2b0;
        case 0x2be2b4u: goto label_2be2b4;
        case 0x2be2b8u: goto label_2be2b8;
        case 0x2be2bcu: goto label_2be2bc;
        case 0x2be2c0u: goto label_2be2c0;
        case 0x2be2c4u: goto label_2be2c4;
        case 0x2be2c8u: goto label_2be2c8;
        case 0x2be2ccu: goto label_2be2cc;
        case 0x2be2d0u: goto label_2be2d0;
        case 0x2be2d4u: goto label_2be2d4;
        case 0x2be2d8u: goto label_2be2d8;
        case 0x2be2dcu: goto label_2be2dc;
        case 0x2be2e0u: goto label_2be2e0;
        case 0x2be2e4u: goto label_2be2e4;
        case 0x2be2e8u: goto label_2be2e8;
        case 0x2be2ecu: goto label_2be2ec;
        case 0x2be2f0u: goto label_2be2f0;
        case 0x2be2f4u: goto label_2be2f4;
        case 0x2be2f8u: goto label_2be2f8;
        case 0x2be2fcu: goto label_2be2fc;
        case 0x2be300u: goto label_2be300;
        case 0x2be304u: goto label_2be304;
        case 0x2be308u: goto label_2be308;
        case 0x2be30cu: goto label_2be30c;
        case 0x2be310u: goto label_2be310;
        case 0x2be314u: goto label_2be314;
        case 0x2be318u: goto label_2be318;
        case 0x2be31cu: goto label_2be31c;
        case 0x2be320u: goto label_2be320;
        case 0x2be324u: goto label_2be324;
        case 0x2be328u: goto label_2be328;
        case 0x2be32cu: goto label_2be32c;
        case 0x2be330u: goto label_2be330;
        case 0x2be334u: goto label_2be334;
        case 0x2be338u: goto label_2be338;
        case 0x2be33cu: goto label_2be33c;
        case 0x2be340u: goto label_2be340;
        case 0x2be344u: goto label_2be344;
        case 0x2be348u: goto label_2be348;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be350u: goto label_2be350;
        case 0x2be354u: goto label_2be354;
        case 0x2be358u: goto label_2be358;
        case 0x2be35cu: goto label_2be35c;
        case 0x2be360u: goto label_2be360;
        case 0x2be364u: goto label_2be364;
        case 0x2be368u: goto label_2be368;
        case 0x2be36cu: goto label_2be36c;
        case 0x2be370u: goto label_2be370;
        case 0x2be374u: goto label_2be374;
        case 0x2be378u: goto label_2be378;
        case 0x2be37cu: goto label_2be37c;
        case 0x2be380u: goto label_2be380;
        case 0x2be384u: goto label_2be384;
        case 0x2be388u: goto label_2be388;
        case 0x2be38cu: goto label_2be38c;
        case 0x2be390u: goto label_2be390;
        case 0x2be394u: goto label_2be394;
        case 0x2be398u: goto label_2be398;
        case 0x2be39cu: goto label_2be39c;
        case 0x2be3a0u: goto label_2be3a0;
        case 0x2be3a4u: goto label_2be3a4;
        case 0x2be3a8u: goto label_2be3a8;
        case 0x2be3acu: goto label_2be3ac;
        case 0x2be3b0u: goto label_2be3b0;
        case 0x2be3b4u: goto label_2be3b4;
        case 0x2be3b8u: goto label_2be3b8;
        case 0x2be3bcu: goto label_2be3bc;
        case 0x2be3c0u: goto label_2be3c0;
        case 0x2be3c4u: goto label_2be3c4;
        case 0x2be3c8u: goto label_2be3c8;
        case 0x2be3ccu: goto label_2be3cc;
        case 0x2be3d0u: goto label_2be3d0;
        case 0x2be3d4u: goto label_2be3d4;
        case 0x2be3d8u: goto label_2be3d8;
        case 0x2be3dcu: goto label_2be3dc;
        case 0x2be3e0u: goto label_2be3e0;
        case 0x2be3e4u: goto label_2be3e4;
        case 0x2be3e8u: goto label_2be3e8;
        case 0x2be3ecu: goto label_2be3ec;
        case 0x2be3f0u: goto label_2be3f0;
        case 0x2be3f4u: goto label_2be3f4;
        case 0x2be3f8u: goto label_2be3f8;
        case 0x2be3fcu: goto label_2be3fc;
        case 0x2be400u: goto label_2be400;
        case 0x2be404u: goto label_2be404;
        case 0x2be408u: goto label_2be408;
        case 0x2be40cu: goto label_2be40c;
        case 0x2be410u: goto label_2be410;
        case 0x2be414u: goto label_2be414;
        case 0x2be418u: goto label_2be418;
        case 0x2be41cu: goto label_2be41c;
        case 0x2be420u: goto label_2be420;
        case 0x2be424u: goto label_2be424;
        case 0x2be428u: goto label_2be428;
        case 0x2be42cu: goto label_2be42c;
        case 0x2be430u: goto label_2be430;
        case 0x2be434u: goto label_2be434;
        case 0x2be438u: goto label_2be438;
        case 0x2be43cu: goto label_2be43c;
        case 0x2be440u: goto label_2be440;
        case 0x2be444u: goto label_2be444;
        case 0x2be448u: goto label_2be448;
        case 0x2be44cu: goto label_2be44c;
        case 0x2be450u: goto label_2be450;
        case 0x2be454u: goto label_2be454;
        case 0x2be458u: goto label_2be458;
        case 0x2be45cu: goto label_2be45c;
        case 0x2be460u: goto label_2be460;
        case 0x2be464u: goto label_2be464;
        case 0x2be468u: goto label_2be468;
        case 0x2be46cu: goto label_2be46c;
        case 0x2be470u: goto label_2be470;
        case 0x2be474u: goto label_2be474;
        case 0x2be478u: goto label_2be478;
        case 0x2be47cu: goto label_2be47c;
        case 0x2be480u: goto label_2be480;
        case 0x2be484u: goto label_2be484;
        case 0x2be488u: goto label_2be488;
        case 0x2be48cu: goto label_2be48c;
        case 0x2be490u: goto label_2be490;
        case 0x2be494u: goto label_2be494;
        case 0x2be498u: goto label_2be498;
        case 0x2be49cu: goto label_2be49c;
        case 0x2be4a0u: goto label_2be4a0;
        case 0x2be4a4u: goto label_2be4a4;
        case 0x2be4a8u: goto label_2be4a8;
        case 0x2be4acu: goto label_2be4ac;
        case 0x2be4b0u: goto label_2be4b0;
        case 0x2be4b4u: goto label_2be4b4;
        case 0x2be4b8u: goto label_2be4b8;
        case 0x2be4bcu: goto label_2be4bc;
        case 0x2be4c0u: goto label_2be4c0;
        case 0x2be4c4u: goto label_2be4c4;
        case 0x2be4c8u: goto label_2be4c8;
        case 0x2be4ccu: goto label_2be4cc;
        case 0x2be4d0u: goto label_2be4d0;
        case 0x2be4d4u: goto label_2be4d4;
        case 0x2be4d8u: goto label_2be4d8;
        case 0x2be4dcu: goto label_2be4dc;
        case 0x2be4e0u: goto label_2be4e0;
        case 0x2be4e4u: goto label_2be4e4;
        case 0x2be4e8u: goto label_2be4e8;
        case 0x2be4ecu: goto label_2be4ec;
        case 0x2be4f0u: goto label_2be4f0;
        case 0x2be4f4u: goto label_2be4f4;
        case 0x2be4f8u: goto label_2be4f8;
        case 0x2be4fcu: goto label_2be4fc;
        case 0x2be500u: goto label_2be500;
        case 0x2be504u: goto label_2be504;
        case 0x2be508u: goto label_2be508;
        case 0x2be50cu: goto label_2be50c;
        case 0x2be510u: goto label_2be510;
        case 0x2be514u: goto label_2be514;
        case 0x2be518u: goto label_2be518;
        case 0x2be51cu: goto label_2be51c;
        case 0x2be520u: goto label_2be520;
        case 0x2be524u: goto label_2be524;
        case 0x2be528u: goto label_2be528;
        case 0x2be52cu: goto label_2be52c;
        case 0x2be530u: goto label_2be530;
        case 0x2be534u: goto label_2be534;
        case 0x2be538u: goto label_2be538;
        case 0x2be53cu: goto label_2be53c;
        case 0x2be540u: goto label_2be540;
        case 0x2be544u: goto label_2be544;
        case 0x2be548u: goto label_2be548;
        case 0x2be54cu: goto label_2be54c;
        case 0x2be550u: goto label_2be550;
        case 0x2be554u: goto label_2be554;
        case 0x2be558u: goto label_2be558;
        case 0x2be55cu: goto label_2be55c;
        case 0x2be560u: goto label_2be560;
        case 0x2be564u: goto label_2be564;
        case 0x2be568u: goto label_2be568;
        case 0x2be56cu: goto label_2be56c;
        case 0x2be570u: goto label_2be570;
        case 0x2be574u: goto label_2be574;
        case 0x2be578u: goto label_2be578;
        case 0x2be57cu: goto label_2be57c;
        case 0x2be580u: goto label_2be580;
        case 0x2be584u: goto label_2be584;
        case 0x2be588u: goto label_2be588;
        case 0x2be58cu: goto label_2be58c;
        default: break;
    }

    ctx->pc = 0x2bd808u;

label_2bd808:
    // 0x2bd808: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2bd808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_2bd80c:
    // 0x2bd80c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bd810:
    // 0x2bd810: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x2bd810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_2bd814:
    // 0x2bd814: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x2bd814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_2bd818:
    // 0x2bd818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bd81c:
    // 0x2bd81c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x2bd81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_2bd820:
    // 0x2bd820: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2bd820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2bd824:
    // 0x2bd824: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x2bd824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_2bd828:
    // 0x2bd828: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x2bd828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_2bd82c:
    // 0x2bd82c: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x2bd82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_2bd830:
    // 0x2bd830: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x2bd830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_2bd834:
    // 0x2bd834: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x2bd834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_2bd838:
    // 0x2bd838: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x2bd838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_2bd83c:
    // 0x2bd83c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2bd83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2bd840:
    // 0x2bd840: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x2bd840u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2bd844:
    // 0x2bd844: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x2bd844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_2bd848:
    // 0x2bd848: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x2bd848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2bd84c:
    // 0x2bd84c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2bd84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2bd850:
    // 0x2bd850: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bd854:
    // 0x2bd854: 0x8c750048  lw          $s5, 0x48($v1)
    ctx->pc = 0x2bd854u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bd858:
    // 0x2bd858: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2bd858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2bd85c:
    // 0x2bd85c: 0xc0e409a  jal         func_390268
label_2bd860:
    if (ctx->pc == 0x2BD860u) {
        ctx->pc = 0x2BD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD85Cu;
        // 0x2bd860: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD864u;
        goto label_2bd864;
    }
    ctx->pc = 0x2BD85Cu;
    SET_GPR_U32(ctx, 31, 0x2BD864u);
    ctx->pc = 0x2BD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD85Cu;
    // 0x2bd860: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BD85Cu, 0x2BD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD864u;
label_2bd864:
    // 0x2bd864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd868:
    // 0x2bd868: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bd868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd86c:
    // 0x2bd86c: 0xc0a352c  jal         func_28D4B0
label_2bd870:
    if (ctx->pc == 0x2BD870u) {
        ctx->pc = 0x2BD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD86Cu;
        // 0x2bd870: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD874u;
        goto label_2bd874;
    }
    ctx->pc = 0x2BD86Cu;
    SET_GPR_U32(ctx, 31, 0x2BD874u);
    ctx->pc = 0x2BD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD86Cu;
    // 0x2bd870: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BD86Cu, 0x2BD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD874u;
label_2bd874:
    // 0x2bd874: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd878:
    // 0x2bd878: 0x12600334  beqz        $s3, . + 4 + (0x334 << 2)
label_2bd87c:
    if (ctx->pc == 0x2BD87Cu) {
        ctx->pc = 0x2BD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD878u;
        // 0x2bd87c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD880u;
        goto label_2bd880;
    }
    ctx->pc = 0x2BD878u;
    {
        const bool branch_taken_0x2bd878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD878u;
        // 0x2bd87c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd878) {
            ctx->pc = 0x2BE54Cu;
            goto label_2be54c;
        }
    }
    ctx->pc = 0x2BD880u;
label_2bd880:
    // 0x2bd880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bd884:
    // 0x2bd884: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2bd884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2bd888:
    // 0x2bd888: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_2bd88c:
    if (ctx->pc == 0x2BD88Cu) {
        ctx->pc = 0x2BD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD888u;
        // 0x2bd88c: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD890u;
        goto label_2bd890;
    }
    ctx->pc = 0x2BD888u;
    {
        const bool branch_taken_0x2bd888 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD888u;
        // 0x2bd88c: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd888) {
            ctx->pc = 0x2BD8D4u;
            goto label_2bd8d4;
        }
    }
    ctx->pc = 0x2BD890u;
label_2bd890:
    // 0x2bd890: 0xc08a148  jal         func_228520
label_2bd894:
    if (ctx->pc == 0x2BD894u) {
        ctx->pc = 0x2BD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD890u;
        // 0x2bd894: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD898u;
        goto label_2bd898;
    }
    ctx->pc = 0x2BD890u;
    SET_GPR_U32(ctx, 31, 0x2BD898u);
    ctx->pc = 0x2BD894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD890u;
    // 0x2bd894: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228520u, 0x2BD890u, 0x2BD898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD898u;
label_2bd898:
    // 0x2bd898: 0x1450032d  bne         $v0, $s0, . + 4 + (0x32D << 2)
label_2bd89c:
    if (ctx->pc == 0x2BD89Cu) {
        ctx->pc = 0x2BD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD898u;
        // 0x2bd89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8A0u;
        goto label_2bd8a0;
    }
    ctx->pc = 0x2BD898u;
    {
        const bool branch_taken_0x2bd898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD898u;
        // 0x2bd89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd898) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BD8A0u;
label_2bd8a0:
    // 0x2bd8a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bd8a4:
    // 0x2bd8a4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2bd8a8:
    // 0x2bd8a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bd8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2bd8ac:
    // 0x2bd8ac: 0x14400328  bnez        $v0, . + 4 + (0x328 << 2)
label_2bd8b0:
    if (ctx->pc == 0x2BD8B0u) {
        ctx->pc = 0x2BD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8ACu;
        // 0x2bd8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8B4u;
        goto label_2bd8b4;
    }
    ctx->pc = 0x2BD8ACu;
    {
        const bool branch_taken_0x2bd8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8ACu;
        // 0x2bd8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8ac) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BD8B4u;
label_2bd8b4:
    // 0x2bd8b4: 0xc05a596  jal         func_169658
label_2bd8b8:
    if (ctx->pc == 0x2BD8B8u) {
        ctx->pc = 0x2BD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8B4u;
        // 0x2bd8b8: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8BCu;
        goto label_2bd8bc;
    }
    ctx->pc = 0x2BD8B4u;
    SET_GPR_U32(ctx, 31, 0x2BD8BCu);
    ctx->pc = 0x2BD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8B4u;
    // 0x2bd8b8: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2BD8B4u, 0x2BD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8BCu;
label_2bd8bc:
    // 0x2bd8bc: 0x14500324  bne         $v0, $s0, . + 4 + (0x324 << 2)
label_2bd8c0:
    if (ctx->pc == 0x2BD8C0u) {
        ctx->pc = 0x2BD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8BCu;
        // 0x2bd8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8C4u;
        goto label_2bd8c4;
    }
    ctx->pc = 0x2BD8BCu;
    {
        const bool branch_taken_0x2bd8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8BCu;
        // 0x2bd8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8bc) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BD8C4u;
label_2bd8c4:
    // 0x2bd8c4: 0xc0a36c8  jal         func_28DB20
label_2bd8c8:
    if (ctx->pc == 0x2BD8C8u) {
        ctx->pc = 0x2BD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8C4u;
        // 0x2bd8c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8CCu;
        goto label_2bd8cc;
    }
    ctx->pc = 0x2BD8C4u;
    SET_GPR_U32(ctx, 31, 0x2BD8CCu);
    ctx->pc = 0x2BD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8C4u;
    // 0x2bd8c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2BD8C4u, 0x2BD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8CCu;
label_2bd8cc:
    // 0x2bd8cc: 0x10000320  b           . + 4 + (0x320 << 2)
label_2bd8d0:
    if (ctx->pc == 0x2BD8D0u) {
        ctx->pc = 0x2BD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8CCu;
        // 0x2bd8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8D4u;
        goto label_2bd8d4;
    }
    ctx->pc = 0x2BD8CCu;
    {
        const bool branch_taken_0x2bd8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8CCu;
        // 0x2bd8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8cc) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BD8D4u;
label_2bd8d4:
    // 0x2bd8d4: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x2bd8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_2bd8d8:
    // 0x2bd8d8: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
label_2bd8dc:
    if (ctx->pc == 0x2BD8DCu) {
        ctx->pc = 0x2BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8D8u;
        // 0x2bd8dc: 0x26830090  addiu       $v1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8E0u;
        goto label_2bd8e0;
    }
    ctx->pc = 0x2BD8D8u;
    {
        const bool branch_taken_0x2bd8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8D8u;
        // 0x2bd8dc: 0x26830090  addiu       $v1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8d8) {
            ctx->pc = 0x2BD8FCu;
            goto label_2bd8fc;
        }
    }
    ctx->pc = 0x2BD8E0u;
label_2bd8e0:
    // 0x2bd8e0: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2bd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
label_2bd8e4:
    // 0x2bd8e4: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x2bd8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_2bd8e8:
    // 0x2bd8e8: 0xc043d5e  jal         func_10F578
label_2bd8ec:
    if (ctx->pc == 0x2BD8ECu) {
        ctx->pc = 0x2BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E8u;
        // 0x2bd8ec: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8F0u;
        goto label_2bd8f0;
    }
    ctx->pc = 0x2BD8E8u;
    SET_GPR_U32(ctx, 31, 0x2BD8F0u);
    ctx->pc = 0x2BD8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8E8u;
    // 0x2bd8ec: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2BD8E8u, 0x2BD8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8F0u;
label_2bd8f0:
    // 0x2bd8f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2bd8f4:
    if (ctx->pc == 0x2BD8F4u) {
        ctx->pc = 0x2BD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8F0u;
        // 0x2bd8f4: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8F8u;
        goto label_2bd8f8;
    }
    ctx->pc = 0x2BD8F0u;
    {
        const bool branch_taken_0x2bd8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd8f0) {
            ctx->pc = 0x2BD8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8F0u;
            // 0x2bd8f4: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8F8u;
            goto label_2bd8f8;
        }
    }
    ctx->pc = 0x2BD8F8u;
label_2bd8f8:
    // 0x2bd8f8: 0x26830090  addiu       $v1, $s4, 0x90
    ctx->pc = 0x2bd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2bd8fc:
    // 0x2bd8fc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2bd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2bd900:
    // 0x2bd900: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2bd900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_2bd904:
    // 0x2bd904: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2bd904u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bd908:
    // 0x2bd908: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2bd908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2bd90c:
    // 0x2bd90c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2bd90cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2bd910:
    // 0x2bd910: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2bd910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2bd914:
    // 0x2bd914: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bd914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bd918:
    // 0x2bd918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bd91c:
    // 0x2bd91c: 0xb5282b  sltu        $a1, $a1, $s5
    ctx->pc = 0x2bd91cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2bd920:
    // 0x2bd920: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2bd920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2bd924:
    // 0x2bd924: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2bd924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2bd928:
    // 0x2bd928: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2bd92c:
    // 0x2bd92c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bd930:
    // 0x2bd930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bd930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bd934:
    // 0x2bd934: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2bd934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2bd938:
    // 0x2bd938: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_2bd93c:
    if (ctx->pc == 0x2BD93Cu) {
        ctx->pc = 0x2BD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD938u;
        // 0x2bd93c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD940u;
        goto label_2bd940;
    }
    ctx->pc = 0x2BD938u;
    {
        const bool branch_taken_0x2bd938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD938u;
        // 0x2bd93c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd938) {
            ctx->pc = 0x2BDA1Cu;
            goto label_2bda1c;
        }
    }
    ctx->pc = 0x2BD940u;
label_2bd940:
    // 0x2bd940: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bd940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bd944:
    // 0x2bd944: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2bd944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2bd948:
    // 0x2bd948: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bd948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2bd94c:
    // 0x2bd94c: 0xc0cd4fc  jal         func_3353F0
label_2bd950:
    if (ctx->pc == 0x2BD950u) {
        ctx->pc = 0x2BD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD94Cu;
        // 0x2bd950: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD954u;
        goto label_2bd954;
    }
    ctx->pc = 0x2BD94Cu;
    SET_GPR_U32(ctx, 31, 0x2BD954u);
    ctx->pc = 0x2BD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD94Cu;
    // 0x2bd950: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BD94Cu, 0x2BD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD954u;
label_2bd954:
    // 0x2bd954: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2bd954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2bd958:
    // 0x2bd958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bd95c:
    // 0x2bd95c: 0xc08a096  jal         func_228258
label_2bd960:
    if (ctx->pc == 0x2BD960u) {
        ctx->pc = 0x2BD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD95Cu;
        // 0x2bd960: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD964u;
        goto label_2bd964;
    }
    ctx->pc = 0x2BD95Cu;
    SET_GPR_U32(ctx, 31, 0x2BD964u);
    ctx->pc = 0x2BD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD95Cu;
    // 0x2bd960: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2BD95Cu, 0x2BD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD964u;
label_2bd964:
    // 0x2bd964: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_2bd968:
    if (ctx->pc == 0x2BD968u) {
        ctx->pc = 0x2BD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD964u;
        // 0x2bd968: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD96Cu;
        goto label_2bd96c;
    }
    ctx->pc = 0x2BD964u;
    {
        const bool branch_taken_0x2bd964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd964) {
            ctx->pc = 0x2BD968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD964u;
            // 0x2bd968: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA20u;
            goto label_2bda20;
        }
    }
    ctx->pc = 0x2BD96Cu;
label_2bd96c:
    // 0x2bd96c: 0xc088edc  jal         func_223B70
label_2bd970:
    if (ctx->pc == 0x2BD970u) {
        ctx->pc = 0x2BD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD96Cu;
        // 0x2bd970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD974u;
        goto label_2bd974;
    }
    ctx->pc = 0x2BD96Cu;
    SET_GPR_U32(ctx, 31, 0x2BD974u);
    ctx->pc = 0x2BD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD96Cu;
    // 0x2bd970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2BD96Cu, 0x2BD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD974u;
label_2bd974:
    // 0x2bd974: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2bd978:
    if (ctx->pc == 0x2BD978u) {
        ctx->pc = 0x2BD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD974u;
        // 0x2bd978: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD97Cu;
        goto label_2bd97c;
    }
    ctx->pc = 0x2BD974u;
    {
        const bool branch_taken_0x2bd974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD974u;
        // 0x2bd978: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd974) {
            ctx->pc = 0x2BD98Cu;
            goto label_2bd98c;
        }
    }
    ctx->pc = 0x2BD97Cu;
label_2bd97c:
    // 0x2bd97c: 0xc089f76  jal         func_227DD8
label_2bd980:
    if (ctx->pc == 0x2BD980u) {
        ctx->pc = 0x2BD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD97Cu;
        // 0x2bd980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD984u;
        goto label_2bd984;
    }
    ctx->pc = 0x2BD97Cu;
    SET_GPR_U32(ctx, 31, 0x2BD984u);
    ctx->pc = 0x2BD980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD97Cu;
    // 0x2bd980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2BD97Cu, 0x2BD984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD984u;
label_2bd984:
    // 0x2bd984: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2bd988:
    if (ctx->pc == 0x2BD988u) {
        ctx->pc = 0x2BD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD984u;
        // 0x2bd988: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD98Cu;
        goto label_2bd98c;
    }
    ctx->pc = 0x2BD984u;
    {
        const bool branch_taken_0x2bd984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD984u;
        // 0x2bd988: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd984) {
            ctx->pc = 0x2BDA1Cu;
            goto label_2bda1c;
        }
    }
    ctx->pc = 0x2BD98Cu;
label_2bd98c:
    // 0x2bd98c: 0xc089f76  jal         func_227DD8
label_2bd990:
    if (ctx->pc == 0x2BD990u) {
        ctx->pc = 0x2BD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD98Cu;
        // 0x2bd990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD994u;
        goto label_2bd994;
    }
    ctx->pc = 0x2BD98Cu;
    SET_GPR_U32(ctx, 31, 0x2BD994u);
    ctx->pc = 0x2BD990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD98Cu;
    // 0x2bd990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2BD98Cu, 0x2BD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD994u;
label_2bd994:
    // 0x2bd994: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
label_2bd998:
    if (ctx->pc == 0x2BD998u) {
        ctx->pc = 0x2BD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD994u;
        // 0x2bd998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD99Cu;
        goto label_2bd99c;
    }
    ctx->pc = 0x2BD994u;
    {
        const bool branch_taken_0x2bd994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD994u;
        // 0x2bd998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd994) {
            ctx->pc = 0x2BD9D0u;
            goto label_2bd9d0;
        }
    }
    ctx->pc = 0x2BD99Cu;
label_2bd99c:
    // 0x2bd99c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x2bd99cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_2bd9a0:
    // 0x2bd9a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2bd9a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2bd9a4:
    // 0x2bd9a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2bd9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bd9a8:
    // 0x2bd9a8: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_2bd9ac:
    if (ctx->pc == 0x2BD9ACu) {
        ctx->pc = 0x2BD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9A8u;
        // 0x2bd9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9B0u;
        goto label_2bd9b0;
    }
    ctx->pc = 0x2BD9A8u;
    {
        const bool branch_taken_0x2bd9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9A8u;
        // 0x2bd9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9a8) {
            ctx->pc = 0x2BD9D0u;
            goto label_2bd9d0;
        }
    }
    ctx->pc = 0x2BD9B0u;
label_2bd9b0:
    // 0x2bd9b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bd9b4:
    // 0x2bd9b4: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_2bd9b8:
    // 0x2bd9b8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2bd9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2bd9bc:
    // 0x2bd9bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bd9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd9c0:
    // 0x2bd9c0: 0xc107908  jal         func_41E420
label_2bd9c4:
    if (ctx->pc == 0x2BD9C4u) {
        ctx->pc = 0x2BD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9C0u;
        // 0x2bd9c4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9C8u;
        goto label_2bd9c8;
    }
    ctx->pc = 0x2BD9C0u;
    SET_GPR_U32(ctx, 31, 0x2BD9C8u);
    ctx->pc = 0x2BD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9C0u;
    // 0x2bd9c4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2BD9C0u, 0x2BD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9C8u;
label_2bd9c8:
    // 0x2bd9c8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2bd9c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2bd9cc:
    // 0x2bd9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd9d0:
    // 0x2bd9d0: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_2bd9d4:
    if (ctx->pc == 0x2BD9D4u) {
        ctx->pc = 0x2BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9D0u;
        // 0x2bd9d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9D8u;
        goto label_2bd9d8;
    }
    ctx->pc = 0x2BD9D0u;
    {
        const bool branch_taken_0x2bd9d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd9d0) {
            ctx->pc = 0x2BD9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD9D0u;
            // 0x2bd9d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA20u;
            goto label_2bda20;
        }
    }
    ctx->pc = 0x2BD9D8u;
label_2bd9d8:
    // 0x2bd9d8: 0xc087502  jal         func_21D408
label_2bd9dc:
    if (ctx->pc == 0x2BD9DCu) {
        ctx->pc = 0x2BD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9D8u;
        // 0x2bd9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9E0u;
        goto label_2bd9e0;
    }
    ctx->pc = 0x2BD9D8u;
    SET_GPR_U32(ctx, 31, 0x2BD9E0u);
    ctx->pc = 0x2BD9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9D8u;
    // 0x2bd9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BD9D8u, 0x2BD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9E0u;
label_2bd9e0:
    // 0x2bd9e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9e4:
    // 0x2bd9e4: 0xc0a43f4  jal         func_290FD0
label_2bd9e8:
    if (ctx->pc == 0x2BD9E8u) {
        ctx->pc = 0x2BD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9E4u;
        // 0x2bd9e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9ECu;
        goto label_2bd9ec;
    }
    ctx->pc = 0x2BD9E4u;
    SET_GPR_U32(ctx, 31, 0x2BD9ECu);
    ctx->pc = 0x2BD9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9E4u;
    // 0x2bd9e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FD0u, 0x2BD9E4u, 0x2BD9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9ECu;
label_2bd9ec:
    // 0x2bd9ec: 0x5450000c  bnel        $v0, $s0, . + 4 + (0xC << 2)
label_2bd9f0:
    if (ctx->pc == 0x2BD9F0u) {
        ctx->pc = 0x2BD9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9ECu;
        // 0x2bd9f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9F4u;
        goto label_2bd9f4;
    }
    ctx->pc = 0x2BD9ECu;
    {
        const bool branch_taken_0x2bd9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bd9ec) {
            ctx->pc = 0x2BD9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD9ECu;
            // 0x2bd9f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA20u;
            goto label_2bda20;
        }
    }
    ctx->pc = 0x2BD9F4u;
label_2bd9f4:
    // 0x2bd9f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2bd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bd9f8:
    // 0x2bd9f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bd9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bd9fc:
    // 0x2bd9fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bda00:
    // 0x2bda00: 0x40f809  jalr        $v0
label_2bda04:
    if (ctx->pc == 0x2BDA04u) {
        ctx->pc = 0x2BDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA00u;
        // 0x2bda04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA08u;
        goto label_2bda08;
    }
    ctx->pc = 0x2BDA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDA08u);
        ctx->pc = 0x2BDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA00u;
        // 0x2bda04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDA00u, 0x2BDA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDA08u;
label_2bda08:
    // 0x2bda08: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2bda08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bda0c:
    // 0x2bda0c: 0xc0adf60  jal         func_2B7D80
label_2bda10:
    if (ctx->pc == 0x2BDA10u) {
        ctx->pc = 0x2BDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA0Cu;
        // 0x2bda10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA14u;
        goto label_2bda14;
    }
    ctx->pc = 0x2BDA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA14u);
    ctx->pc = 0x2BDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA0Cu;
    // 0x2bda10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7D80u, 0x2BDA0Cu, 0x2BDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA14u;
label_2bda14:
    // 0x2bda14: 0x100002ce  b           . + 4 + (0x2CE << 2)
label_2bda18:
    if (ctx->pc == 0x2BDA18u) {
        ctx->pc = 0x2BDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA14u;
        // 0x2bda18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA1Cu;
        goto label_2bda1c;
    }
    ctx->pc = 0x2BDA14u;
    {
        const bool branch_taken_0x2bda14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA14u;
        // 0x2bda18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda14) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDA1Cu;
label_2bda1c:
    // 0x2bda1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bda20:
    // 0x2bda20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bda20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bda24:
    // 0x2bda24: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2bda24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2bda28:
    // 0x2bda28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bda28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2bda2c:
    // 0x2bda2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bda2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bda30:
    // 0x2bda30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bda30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bda34:
    // 0x2bda34: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2bda34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bda38:
    // 0x2bda38: 0xc08750a  jal         func_21D428
label_2bda3c:
    if (ctx->pc == 0x2BDA3Cu) {
        ctx->pc = 0x2BDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA38u;
        // 0x2bda3c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA40u;
        goto label_2bda40;
    }
    ctx->pc = 0x2BDA38u;
    SET_GPR_U32(ctx, 31, 0x2BDA40u);
    ctx->pc = 0x2BDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA38u;
    // 0x2bda3c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BDA38u, 0x2BDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA40u;
label_2bda40:
    // 0x2bda40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bda40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bda44:
    // 0x2bda44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bda44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bda48:
    // 0x2bda48: 0xc0a58bc  jal         func_2962F0
label_2bda4c:
    if (ctx->pc == 0x2BDA4Cu) {
        ctx->pc = 0x2BDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA48u;
        // 0x2bda4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA50u;
        goto label_2bda50;
    }
    ctx->pc = 0x2BDA48u;
    SET_GPR_U32(ctx, 31, 0x2BDA50u);
    ctx->pc = 0x2BDA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA48u;
    // 0x2bda4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x2BDA48u, 0x2BDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA50u;
label_2bda50:
    // 0x2bda50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bda50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bda54:
    // 0x2bda54: 0xc0a58d6  jal         func_296358
label_2bda58:
    if (ctx->pc == 0x2BDA58u) {
        ctx->pc = 0x2BDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA54u;
        // 0x2bda58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA5Cu;
        goto label_2bda5c;
    }
    ctx->pc = 0x2BDA54u;
    SET_GPR_U32(ctx, 31, 0x2BDA5Cu);
    ctx->pc = 0x2BDA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA54u;
    // 0x2bda58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x2BDA54u, 0x2BDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA5Cu;
label_2bda5c:
    // 0x2bda5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bda5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bda60:
    // 0x2bda60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bda60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bda64:
    // 0x2bda64: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_2bda68:
    if (ctx->pc == 0x2BDA68u) {
        ctx->pc = 0x2BDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA64u;
        // 0x2bda68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA6Cu;
        goto label_2bda6c;
    }
    ctx->pc = 0x2BDA64u;
    {
        const bool branch_taken_0x2bda64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA64u;
        // 0x2bda68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda64) {
            ctx->pc = 0x2BDA7Cu;
            goto label_2bda7c;
        }
    }
    ctx->pc = 0x2BDA6Cu;
label_2bda6c:
    // 0x2bda6c: 0xc0a5904  jal         func_296410
label_2bda70:
    if (ctx->pc == 0x2BDA70u) {
        ctx->pc = 0x2BDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA6Cu;
        // 0x2bda70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA74u;
        goto label_2bda74;
    }
    ctx->pc = 0x2BDA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA74u);
    ctx->pc = 0x2BDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA6Cu;
    // 0x2bda70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x2BDA6Cu, 0x2BDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA74u;
label_2bda74:
    // 0x2bda74: 0x1000000a  b           . + 4 + (0xA << 2)
label_2bda78:
    if (ctx->pc == 0x2BDA78u) {
        ctx->pc = 0x2BDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA74u;
        // 0x2bda78: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA7Cu;
        goto label_2bda7c;
    }
    ctx->pc = 0x2BDA74u;
    {
        const bool branch_taken_0x2bda74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA74u;
        // 0x2bda78: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda74) {
            ctx->pc = 0x2BDAA0u;
            goto label_2bdaa0;
        }
    }
    ctx->pc = 0x2BDA7Cu;
label_2bda7c:
    // 0x2bda7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bda7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bda80:
    // 0x2bda80: 0xc0cdb38  jal         func_336CE0
label_2bda84:
    if (ctx->pc == 0x2BDA84u) {
        ctx->pc = 0x2BDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA80u;
        // 0x2bda84: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA88u;
        goto label_2bda88;
    }
    ctx->pc = 0x2BDA80u;
    SET_GPR_U32(ctx, 31, 0x2BDA88u);
    ctx->pc = 0x2BDA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA80u;
    // 0x2bda84: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BDA80u, 0x2BDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA88u;
label_2bda88:
    // 0x2bda88: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2bda88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2bda8c:
    // 0x2bda8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bda8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bda90:
    // 0x2bda90: 0x0  nop
    ctx->pc = 0x2bda90u;
    // NOP
label_2bda94:
    // 0x2bda94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2bda98:
    if (ctx->pc == 0x2BDA98u) {
        ctx->pc = 0x2BDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA94u;
        // 0x2bda98: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDA9Cu;
        goto label_2bda9c;
    }
    ctx->pc = 0x2BDA94u;
    {
        const bool branch_taken_0x2bda94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA94u;
        // 0x2bda98: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda94) {
            ctx->pc = 0x2BDAA0u;
            goto label_2bdaa0;
        }
    }
    ctx->pc = 0x2BDA9Cu;
label_2bda9c:
    // 0x2bda9c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2bda9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bdaa0:
    // 0x2bdaa0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2bdaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2bdaa4:
    // 0x2bdaa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bdaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bdaa8:
    // 0x2bdaa8: 0xc0cdb38  jal         func_336CE0
label_2bdaac:
    if (ctx->pc == 0x2BDAACu) {
        ctx->pc = 0x2BDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAA8u;
        // 0x2bdaac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAB0u;
        goto label_2bdab0;
    }
    ctx->pc = 0x2BDAA8u;
    SET_GPR_U32(ctx, 31, 0x2BDAB0u);
    ctx->pc = 0x2BDAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAA8u;
    // 0x2bdaac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BDAA8u, 0x2BDAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAB0u;
label_2bdab0:
    // 0x2bdab0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2bdab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2bdab4:
    // 0x2bdab4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2bdab4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2bdab8:
    // 0x2bdab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bdabc:
    // 0x2bdabc: 0xc0a7c8c  jal         func_29F230
label_2bdac0:
    if (ctx->pc == 0x2BDAC0u) {
        ctx->pc = 0x2BDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDABCu;
        // 0x2bdac0: 0x34a5e3c0  ori         $a1, $a1, 0xE3C0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAC4u;
        goto label_2bdac4;
    }
    ctx->pc = 0x2BDABCu;
    SET_GPR_U32(ctx, 31, 0x2BDAC4u);
    ctx->pc = 0x2BDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDABCu;
    // 0x2bdac0: 0x34a5e3c0  ori         $a1, $a1, 0xE3C0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2BDABCu, 0x2BDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAC4u;
label_2bdac4:
    // 0x2bdac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bdac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdac8:
    // 0x2bdac8: 0x1240016a  beqz        $s2, . + 4 + (0x16A << 2)
label_2bdacc:
    if (ctx->pc == 0x2BDACCu) {
        ctx->pc = 0x2BDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAC8u;
        // 0x2bdacc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAD0u;
        goto label_2bdad0;
    }
    ctx->pc = 0x2BDAC8u;
    {
        const bool branch_taken_0x2bdac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAC8u;
        // 0x2bdacc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdac8) {
            ctx->pc = 0x2BE074u;
            goto label_2be074;
        }
    }
    ctx->pc = 0x2BDAD0u;
label_2bdad0:
    // 0x2bdad0: 0xc087502  jal         func_21D408
label_2bdad4:
    if (ctx->pc == 0x2BDAD4u) {
        ctx->pc = 0x2BDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAD0u;
        // 0x2bdad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAD8u;
        goto label_2bdad8;
    }
    ctx->pc = 0x2BDAD0u;
    SET_GPR_U32(ctx, 31, 0x2BDAD8u);
    ctx->pc = 0x2BDAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAD0u;
    // 0x2bdad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BDAD0u, 0x2BDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAD8u;
label_2bdad8:
    // 0x2bdad8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bdad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdadc:
    // 0x2bdadc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bdadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdae0:
    // 0x2bdae0: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2bdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2bdae4:
    // 0x2bdae4: 0xc0a2af0  jal         func_28ABC0
label_2bdae8:
    if (ctx->pc == 0x2BDAE8u) {
        ctx->pc = 0x2BDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAE4u;
        // 0x2bdae8: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAECu;
        goto label_2bdaec;
    }
    ctx->pc = 0x2BDAE4u;
    SET_GPR_U32(ctx, 31, 0x2BDAECu);
    ctx->pc = 0x2BDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAE4u;
    // 0x2bdae8: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x2BDAE4u, 0x2BDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAECu;
label_2bdaec:
    // 0x2bdaec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bdaf0:
    // 0x2bdaf0: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x2bdaf0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bdaf4:
    // 0x2bdaf4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bdaf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bdaf8:
    // 0x2bdaf8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bdafc:
    // 0x2bdafc: 0x40f809  jalr        $v0
label_2bdb00:
    if (ctx->pc == 0x2BDB00u) {
        ctx->pc = 0x2BDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAFCu;
        // 0x2bdb00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB04u;
        goto label_2bdb04;
    }
    ctx->pc = 0x2BDAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDB04u);
        ctx->pc = 0x2BDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAFCu;
        // 0x2bdb00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDAFCu, 0x2BDB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDB04u;
label_2bdb04:
    // 0x2bdb04: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2bdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2bdb08:
    // 0x2bdb08: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_2bdb0c:
    if (ctx->pc == 0x2BDB0Cu) {
        ctx->pc = 0x2BDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB08u;
        // 0x2bdb0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB10u;
        goto label_2bdb10;
    }
    ctx->pc = 0x2BDB08u;
    {
        const bool branch_taken_0x2bdb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB08u;
        // 0x2bdb0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb08) {
            ctx->pc = 0x2BDB40u;
            goto label_2bdb40;
        }
    }
    ctx->pc = 0x2BDB10u;
label_2bdb10:
    // 0x2bdb10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdb14:
    // 0x2bdb14: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_2bdb18:
    if (ctx->pc == 0x2BDB18u) {
        ctx->pc = 0x2BDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB14u;
        // 0x2bdb18: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB1Cu;
        goto label_2bdb1c;
    }
    ctx->pc = 0x2BDB14u;
    {
        const bool branch_taken_0x2bdb14 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB14u;
        // 0x2bdb18: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb14) {
            ctx->pc = 0x2BDB28u;
            goto label_2bdb28;
        }
    }
    ctx->pc = 0x2BDB1Cu;
label_2bdb1c:
    // 0x2bdb1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdb20:
    // 0x2bdb20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2bdb20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb24:
    // 0x2bdb24: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2bdb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2bdb28:
    // 0x2bdb28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bdb2c:
    // 0x2bdb2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bdb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bdb30:
    // 0x2bdb30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bdb34:
    // 0x2bdb34: 0x40f809  jalr        $v0
label_2bdb38:
    if (ctx->pc == 0x2BDB38u) {
        ctx->pc = 0x2BDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB34u;
        // 0x2bdb38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB3Cu;
        goto label_2bdb3c;
    }
    ctx->pc = 0x2BDB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDB3Cu);
        ctx->pc = 0x2BDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB34u;
        // 0x2bdb38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDB34u, 0x2BDB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDB3Cu;
label_2bdb3c:
    // 0x2bdb3c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2bdb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2bdb40:
    // 0x2bdb40: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2bdb40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bdb44:
    // 0x2bdb44: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2bdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2bdb48:
    // 0x2bdb48: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2bdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2bdb4c:
    // 0x2bdb4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bdb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb50:
    // 0x2bdb50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bdb54:
    // 0x2bdb54: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x2bdb54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bdb58:
    // 0x2bdb58: 0xc0cdb38  jal         func_336CE0
label_2bdb5c:
    if (ctx->pc == 0x2BDB5Cu) {
        ctx->pc = 0x2BDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB58u;
        // 0x2bdb5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB60u;
        goto label_2bdb60;
    }
    ctx->pc = 0x2BDB58u;
    SET_GPR_U32(ctx, 31, 0x2BDB60u);
    ctx->pc = 0x2BDB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB58u;
    // 0x2bdb5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BDB58u, 0x2BDB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB60u;
label_2bdb60:
    // 0x2bdb60: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bdb60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2bdb64:
    // 0x2bdb64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb68:
    // 0x2bdb68: 0xc088fa8  jal         func_223EA0
label_2bdb6c:
    if (ctx->pc == 0x2BDB6Cu) {
        ctx->pc = 0x2BDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB68u;
        // 0x2bdb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB70u;
        goto label_2bdb70;
    }
    ctx->pc = 0x2BDB68u;
    SET_GPR_U32(ctx, 31, 0x2BDB70u);
    ctx->pc = 0x2BDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB68u;
    // 0x2bdb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2BDB68u, 0x2BDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB70u;
label_2bdb70:
    // 0x2bdb70: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_2bdb74:
    if (ctx->pc == 0x2BDB74u) {
        ctx->pc = 0x2BDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB70u;
        // 0x2bdb74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB78u;
        goto label_2bdb78;
    }
    ctx->pc = 0x2BDB70u;
    {
        const bool branch_taken_0x2bdb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB70u;
        // 0x2bdb74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb70) {
            ctx->pc = 0x2BDDF4u;
            goto label_2bddf4;
        }
    }
    ctx->pc = 0x2BDB78u;
label_2bdb78:
    // 0x2bdb78: 0xc089000  jal         func_224000
label_2bdb7c:
    if (ctx->pc == 0x2BDB7Cu) {
        ctx->pc = 0x2BDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB78u;
        // 0x2bdb7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB80u;
        goto label_2bdb80;
    }
    ctx->pc = 0x2BDB78u;
    SET_GPR_U32(ctx, 31, 0x2BDB80u);
    ctx->pc = 0x2BDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB78u;
    // 0x2bdb7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2BDB78u, 0x2BDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB80u;
label_2bdb80:
    // 0x2bdb80: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_2bdb84:
    if (ctx->pc == 0x2BDB84u) {
        ctx->pc = 0x2BDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB80u;
        // 0x2bdb84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB88u;
        goto label_2bdb88;
    }
    ctx->pc = 0x2BDB80u;
    {
        const bool branch_taken_0x2bdb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB80u;
        // 0x2bdb84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb80) {
            ctx->pc = 0x2BDDF4u;
            goto label_2bddf4;
        }
    }
    ctx->pc = 0x2BDB88u;
label_2bdb88:
    // 0x2bdb88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdb8c:
    // 0x2bdb8c: 0x8e4301a8  lw          $v1, 0x1A8($s2)
    ctx->pc = 0x2bdb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_2bdb90:
    // 0x2bdb90: 0x904402d3  lbu         $a0, 0x2D3($v0)
    ctx->pc = 0x2bdb90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 723)));
label_2bdb94:
    // 0x2bdb94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bdb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb98:
    // 0x2bdb98: 0x287e0003  slti        $fp, $v1, 0x3
    ctx->pc = 0x2bdb98u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bdb9c:
    // 0x2bdb9c: 0x3bd30001  xori        $s3, $fp, 0x1
    ctx->pc = 0x2bdb9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
label_2bdba0:
    // 0x2bdba0: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_2bdba4:
    if (ctx->pc == 0x2BDBA4u) {
        ctx->pc = 0x2BDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBA0u;
        // 0x2bdba4: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBA8u;
        goto label_2bdba8;
    }
    ctx->pc = 0x2BDBA0u;
    {
        const bool branch_taken_0x2bdba0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBA0u;
        // 0x2bdba4: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdba0) {
            ctx->pc = 0x2BDBBCu;
            goto label_2bdbbc;
        }
    }
    ctx->pc = 0x2BDBA8u;
label_2bdba8:
    // 0x2bdba8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bdba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bdbac:
    // 0x2bdbac: 0x52d00004  beql        $s6, $s0, . + 4 + (0x4 << 2)
label_2bdbb0:
    if (ctx->pc == 0x2BDBB0u) {
        ctx->pc = 0x2BDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBACu;
        // 0x2bdbb0: 0xa0a002d3  sb          $zero, 0x2D3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBB4u;
        goto label_2bdbb4;
    }
    ctx->pc = 0x2BDBACu;
    {
        const bool branch_taken_0x2bdbac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 16));
        if (branch_taken_0x2bdbac) {
            ctx->pc = 0x2BDBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDBACu;
            // 0x2bdbb0: 0xa0a002d3  sb          $zero, 0x2D3($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDBC0u;
            goto label_2bdbc0;
        }
    }
    ctx->pc = 0x2BDBB4u;
label_2bdbb4:
    // 0x2bdbb4: 0x54800040  bnel        $a0, $zero, . + 4 + (0x40 << 2)
label_2bdbb8:
    if (ctx->pc == 0x2BDBB8u) {
        ctx->pc = 0x2BDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBB4u;
        // 0x2bdbb8: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBBCu;
        goto label_2bdbbc;
    }
    ctx->pc = 0x2BDBB4u;
    {
        const bool branch_taken_0x2bdbb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdbb4) {
            ctx->pc = 0x2BDBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDBB4u;
            // 0x2bdbb8: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDCB8u;
            goto label_2bdcb8;
        }
    }
    ctx->pc = 0x2BDBBCu;
label_2bdbbc:
    // 0x2bdbbc: 0xa0a002d3  sb          $zero, 0x2D3($a1)
    ctx->pc = 0x2bdbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
label_2bdbc0:
    // 0x2bdbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbc4:
    // 0x2bdbc4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bdbc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2bdbc8:
    // 0x2bdbc8: 0xc0af3e2  jal         func_2BCF88
label_2bdbcc:
    if (ctx->pc == 0x2BDBCCu) {
        ctx->pc = 0x2BDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBC8u;
        // 0x2bdbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBD0u;
        goto label_2bdbd0;
    }
    ctx->pc = 0x2BDBC8u;
    SET_GPR_U32(ctx, 31, 0x2BDBD0u);
    ctx->pc = 0x2BDBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBC8u;
    // 0x2bdbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCF88u, 0x2BDBC8u, 0x2BDBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBD0u;
label_2bdbd0:
    // 0x2bdbd0: 0x1440025f  bnez        $v0, . + 4 + (0x25F << 2)
label_2bdbd4:
    if (ctx->pc == 0x2BDBD4u) {
        ctx->pc = 0x2BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBD0u;
        // 0x2bdbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBD8u;
        goto label_2bdbd8;
    }
    ctx->pc = 0x2BDBD0u;
    {
        const bool branch_taken_0x2bdbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBD0u;
        // 0x2bdbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbd0) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDBD8u;
label_2bdbd8:
    // 0x2bdbd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbdc:
    // 0x2bdbdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bdbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbe0:
    // 0x2bdbe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bdbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbe4:
    // 0x2bdbe4: 0xc0888a2  jal         func_222288
label_2bdbe8:
    if (ctx->pc == 0x2BDBE8u) {
        ctx->pc = 0x2BDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBE4u;
        // 0x2bdbe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBECu;
        goto label_2bdbec;
    }
    ctx->pc = 0x2BDBE4u;
    SET_GPR_U32(ctx, 31, 0x2BDBECu);
    ctx->pc = 0x2BDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBE4u;
    // 0x2bdbe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BDBE4u, 0x2BDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBECu;
label_2bdbec:
    // 0x2bdbec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bdbf0:
    // 0x2bdbf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbf4:
    // 0x2bdbf4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2bdbf8:
    // 0x2bdbf8: 0xc0cd4ee  jal         func_3353B8
label_2bdbfc:
    if (ctx->pc == 0x2BDBFCu) {
        ctx->pc = 0x2BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBF8u;
        // 0x2bdbfc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC00u;
        goto label_2bdc00;
    }
    ctx->pc = 0x2BDBF8u;
    SET_GPR_U32(ctx, 31, 0x2BDC00u);
    ctx->pc = 0x2BDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBF8u;
    // 0x2bdbfc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BDBF8u, 0x2BDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC00u;
label_2bdc00:
    // 0x2bdc00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bdc00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc04:
    // 0x2bdc04: 0xc08bfa0  jal         func_22FE80
label_2bdc08:
    if (ctx->pc == 0x2BDC08u) {
        ctx->pc = 0x2BDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC04u;
        // 0x2bdc08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC0Cu;
        goto label_2bdc0c;
    }
    ctx->pc = 0x2BDC04u;
    SET_GPR_U32(ctx, 31, 0x2BDC0Cu);
    ctx->pc = 0x2BDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC04u;
    // 0x2bdc08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BDC04u, 0x2BDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC0Cu;
label_2bdc0c:
    // 0x2bdc0c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2bdc10:
    if (ctx->pc == 0x2BDC10u) {
        ctx->pc = 0x2BDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC0Cu;
        // 0x2bdc10: 0x2e62001e  sltiu       $v0, $s3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC14u;
        goto label_2bdc14;
    }
    ctx->pc = 0x2BDC0Cu;
    {
        const bool branch_taken_0x2bdc0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC0Cu;
        // 0x2bdc10: 0x2e62001e  sltiu       $v0, $s3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc0c) {
            ctx->pc = 0x2BDC1Cu;
            goto label_2bdc1c;
        }
    }
    ctx->pc = 0x2BDC14u;
label_2bdc14:
    // 0x2bdc14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2bdc18:
    if (ctx->pc == 0x2BDC18u) {
        ctx->pc = 0x2BDC1Cu;
        goto label_2bdc1c;
    }
    ctx->pc = 0x2BDC14u;
    {
        const bool branch_taken_0x2bdc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc14) {
            ctx->pc = 0x2BDC70u;
            goto label_2bdc70;
        }
    }
    ctx->pc = 0x2BDC1Cu;
label_2bdc1c:
    // 0x2bdc1c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2bdc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2bdc20:
    // 0x2bdc20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bdc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bdc24:
    // 0x2bdc24: 0x0  nop
    ctx->pc = 0x2bdc24u;
    // NOP
label_2bdc28:
    // 0x2bdc28: 0x0  nop
    ctx->pc = 0x2bdc28u;
    // NOP
label_2bdc2c:
    // 0x2bdc2c: 0x46150004  c1          0x150004
    ctx->pc = 0x2bdc2cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2bdc30:
    // 0x2bdc30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdc34:
    // 0x2bdc34: 0xc0a367c  jal         func_28D9F0
label_2bdc38:
    if (ctx->pc == 0x2BDC38u) {
        ctx->pc = 0x2BDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC34u;
        // 0x2bdc38: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC3Cu;
        goto label_2bdc3c;
    }
    ctx->pc = 0x2BDC34u;
    SET_GPR_U32(ctx, 31, 0x2BDC3Cu);
    ctx->pc = 0x2BDC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC34u;
    // 0x2bdc38: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BDC34u, 0x2BDC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC3Cu;
label_2bdc3c:
    // 0x2bdc3c: 0x10400243  beqz        $v0, . + 4 + (0x243 << 2)
label_2bdc40:
    if (ctx->pc == 0x2BDC40u) {
        ctx->pc = 0x2BDC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC3Cu;
        // 0x2bdc40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC44u;
        goto label_2bdc44;
    }
    ctx->pc = 0x2BDC3Cu;
    {
        const bool branch_taken_0x2bdc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC3Cu;
        // 0x2bdc40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc3c) {
            ctx->pc = 0x2BE54Cu;
            goto label_2be54c;
        }
    }
    ctx->pc = 0x2BDC44u;
label_2bdc44:
    // 0x2bdc44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bdc48:
    // 0x2bdc48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bdc4c:
    // 0x2bdc4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bdc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdc50:
    // 0x2bdc50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bdc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc54:
    // 0x2bdc54: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2bdc54u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2bdc58:
    // 0x2bdc58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bdc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc5c:
    // 0x2bdc5c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bdc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bdc60:
    // 0x2bdc60: 0xc0bf3d4  jal         func_2FCF50
label_2bdc64:
    if (ctx->pc == 0x2BDC64u) {
        ctx->pc = 0x2BDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC60u;
        // 0x2bdc64: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC68u;
        goto label_2bdc68;
    }
    ctx->pc = 0x2BDC60u;
    SET_GPR_U32(ctx, 31, 0x2BDC68u);
    ctx->pc = 0x2BDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC60u;
    // 0x2bdc64: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BDC60u, 0x2BDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC68u;
label_2bdc68:
    // 0x2bdc68: 0x10000239  b           . + 4 + (0x239 << 2)
label_2bdc6c:
    if (ctx->pc == 0x2BDC6Cu) {
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC70u;
        goto label_2bdc70;
    }
    ctx->pc = 0x2BDC68u;
    {
        const bool branch_taken_0x2bdc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc68) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDC70u;
label_2bdc70:
    // 0x2bdc70: 0xc0a367c  jal         func_28D9F0
label_2bdc74:
    if (ctx->pc == 0x2BDC74u) {
        ctx->pc = 0x2BDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC70u;
        // 0x2bdc74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC78u;
        goto label_2bdc78;
    }
    ctx->pc = 0x2BDC70u;
    SET_GPR_U32(ctx, 31, 0x2BDC78u);
    ctx->pc = 0x2BDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC70u;
    // 0x2bdc74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BDC70u, 0x2BDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC78u;
label_2bdc78:
    // 0x2bdc78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc7c:
    // 0x2bdc7c: 0x12000234  beqz        $s0, . + 4 + (0x234 << 2)
label_2bdc80:
    if (ctx->pc == 0x2BDC80u) {
        ctx->pc = 0x2BDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC7Cu;
        // 0x2bdc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC84u;
        goto label_2bdc84;
    }
    ctx->pc = 0x2BDC7Cu;
    {
        const bool branch_taken_0x2bdc7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC7Cu;
        // 0x2bdc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc7c) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDC84u;
label_2bdc84:
    // 0x2bdc84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bdc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bdc88:
    // 0x2bdc88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bdc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bdc8c:
    // 0x2bdc8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bdc90:
    // 0x2bdc90: 0x40f809  jalr        $v0
label_2bdc94:
    if (ctx->pc == 0x2BDC94u) {
        ctx->pc = 0x2BDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC90u;
        // 0x2bdc94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC98u;
        goto label_2bdc98;
    }
    ctx->pc = 0x2BDC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDC98u);
        ctx->pc = 0x2BDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC90u;
        // 0x2bdc94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDC90u, 0x2BDC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDC98u;
label_2bdc98:
    // 0x2bdc98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bdc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdc9c:
    // 0x2bdc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdca0:
    // 0x2bdca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bdca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdca4:
    // 0x2bdca4: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2bdca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2bdca8:
    // 0x2bdca8: 0xc0bfabe  jal         func_2FEAF8
label_2bdcac:
    if (ctx->pc == 0x2BDCACu) {
        ctx->pc = 0x2BDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCA8u;
        // 0x2bdcac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDCB0u;
        goto label_2bdcb0;
    }
    ctx->pc = 0x2BDCA8u;
    SET_GPR_U32(ctx, 31, 0x2BDCB0u);
    ctx->pc = 0x2BDCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDCA8u;
    // 0x2bdcac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2BDCA8u, 0x2BDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCB0u;
label_2bdcb0:
    // 0x2bdcb0: 0x10000227  b           . + 4 + (0x227 << 2)
label_2bdcb4:
    if (ctx->pc == 0x2BDCB4u) {
        ctx->pc = 0x2BDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCB0u;
        // 0x2bdcb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDCB8u;
        goto label_2bdcb8;
    }
    ctx->pc = 0x2BDCB0u;
    {
        const bool branch_taken_0x2bdcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCB0u;
        // 0x2bdcb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcb0) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDCB8u;
label_2bdcb8:
    // 0x2bdcb8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bdcb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bdcbc:
    // 0x2bdcbc: 0x0  nop
    ctx->pc = 0x2bdcbcu;
    // NOP
label_2bdcc0:
    // 0x2bdcc0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2bdcc4:
    if (ctx->pc == 0x2BDCC4u) {
        ctx->pc = 0x2BDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCC0u;
        // 0x2bdcc4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDCC8u;
        goto label_2bdcc8;
    }
    ctx->pc = 0x2BDCC0u;
    {
        const bool branch_taken_0x2bdcc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCC0u;
        // 0x2bdcc4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcc0) {
            ctx->pc = 0x2BDCD4u;
            goto label_2bdcd4;
        }
    }
    ctx->pc = 0x2BDCC8u;
label_2bdcc8:
    // 0x2bdcc8: 0x5670004a  bnel        $s3, $s0, . + 4 + (0x4A << 2)
label_2bdccc:
    if (ctx->pc == 0x2BDCCCu) {
        ctx->pc = 0x2BDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCC8u;
        // 0x2bdccc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDCD0u;
        goto label_2bdcd0;
    }
    ctx->pc = 0x2BDCC8u;
    {
        const bool branch_taken_0x2bdcc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bdcc8) {
            ctx->pc = 0x2BDCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDCC8u;
            // 0x2bdccc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDDF4u;
            goto label_2bddf4;
        }
    }
    ctx->pc = 0x2BDCD0u;
label_2bdcd0:
    // 0x2bdcd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bdcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bdcd4:
    // 0x2bdcd4: 0xc0cdb38  jal         func_336CE0
label_2bdcd8:
    if (ctx->pc == 0x2BDCD8u) {
        ctx->pc = 0x2BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCD4u;
        // 0x2bdcd8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDCDCu;
        goto label_2bdcdc;
    }
    ctx->pc = 0x2BDCD4u;
    SET_GPR_U32(ctx, 31, 0x2BDCDCu);
    ctx->pc = 0x2BDCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDCD4u;
    // 0x2bdcd8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BDCD4u, 0x2BDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCDCu;
label_2bdcdc:
    // 0x2bdcdc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2bdcdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bdce0:
    // 0x2bdce0: 0x0  nop
    ctx->pc = 0x2bdce0u;
    // NOP
label_2bdce4:
    // 0x2bdce4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2bdce8:
    if (ctx->pc == 0x2BDCE8u) {
        ctx->pc = 0x2BDCECu;
        goto label_2bdcec;
    }
    ctx->pc = 0x2BDCE4u;
    {
        const bool branch_taken_0x2bdce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdce4) {
            ctx->pc = 0x2BDCF4u;
            goto label_2bdcf4;
        }
    }
    ctx->pc = 0x2BDCECu;
label_2bdcec:
    // 0x2bdcec: 0x16700016  bne         $s3, $s0, . + 4 + (0x16 << 2)
label_2bdcf0:
    if (ctx->pc == 0x2BDCF0u) {
        ctx->pc = 0x2BDCF4u;
        goto label_2bdcf4;
    }
    ctx->pc = 0x2BDCECu;
    {
        const bool branch_taken_0x2bdcec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bdcec) {
            ctx->pc = 0x2BDD48u;
            goto label_2bdd48;
        }
    }
    ctx->pc = 0x2BDCF4u;
label_2bdcf4:
    // 0x2bdcf4: 0xc0a4e54  jal         func_293950
label_2bdcf8:
    if (ctx->pc == 0x2BDCF8u) {
        ctx->pc = 0x2BDCFCu;
        goto label_2bdcfc;
    }
    ctx->pc = 0x2BDCF4u;
    SET_GPR_U32(ctx, 31, 0x2BDCFCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BDCF4u, 0x2BDCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCFCu;
label_2bdcfc:
    // 0x2bdcfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd00:
    // 0x2bdd00: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_2bdd04:
    if (ctx->pc == 0x2BDD04u) {
        ctx->pc = 0x2BDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD00u;
        // 0x2bdd04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD08u;
        goto label_2bdd08;
    }
    ctx->pc = 0x2BDD00u;
    {
        const bool branch_taken_0x2bdd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd00) {
            ctx->pc = 0x2BDD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDD00u;
            // 0x2bdd04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD38u;
            goto label_2bdd38;
        }
    }
    ctx->pc = 0x2BDD08u;
label_2bdd08:
    // 0x2bdd08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bdd0c:
    // 0x2bdd0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bdd0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bdd10:
    // 0x2bdd10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bdd14:
    // 0x2bdd14: 0x40f809  jalr        $v0
label_2bdd18:
    if (ctx->pc == 0x2BDD18u) {
        ctx->pc = 0x2BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD14u;
        // 0x2bdd18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD1Cu;
        goto label_2bdd1c;
    }
    ctx->pc = 0x2BDD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDD1Cu);
        ctx->pc = 0x2BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD14u;
        // 0x2bdd18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD14u, 0x2BDD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDD1Cu;
label_2bdd1c:
    // 0x2bdd1c: 0x2407008f  addiu       $a3, $zero, 0x8F
    ctx->pc = 0x2bdd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2bdd20:
    // 0x2bdd20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bdd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdd24:
    // 0x2bdd24: 0x1e380b  movn        $a3, $zero, $fp
    ctx->pc = 0x2bdd24u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2bdd28:
    // 0x2bdd28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bdd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd2c:
    // 0x2bdd2c: 0xc0abd6c  jal         func_2AF5B0
label_2bdd30:
    if (ctx->pc == 0x2BDD30u) {
        ctx->pc = 0x2BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD2Cu;
        // 0x2bdd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD34u;
        goto label_2bdd34;
    }
    ctx->pc = 0x2BDD2Cu;
    SET_GPR_U32(ctx, 31, 0x2BDD34u);
    ctx->pc = 0x2BDD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD2Cu;
    // 0x2bdd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2BDD2Cu, 0x2BDD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD34u;
label_2bdd34:
    // 0x2bdd34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bdd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdd38:
    // 0x2bdd38: 0xc0a35d6  jal         func_28D758
label_2bdd3c:
    if (ctx->pc == 0x2BDD3Cu) {
        ctx->pc = 0x2BDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD38u;
        // 0x2bdd3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD40u;
        goto label_2bdd40;
    }
    ctx->pc = 0x2BDD38u;
    SET_GPR_U32(ctx, 31, 0x2BDD40u);
    ctx->pc = 0x2BDD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD38u;
    // 0x2bdd3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BDD38u, 0x2BDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD40u;
label_2bdd40:
    // 0x2bdd40: 0x10000203  b           . + 4 + (0x203 << 2)
label_2bdd44:
    if (ctx->pc == 0x2BDD44u) {
        ctx->pc = 0x2BDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD40u;
        // 0x2bdd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD48u;
        goto label_2bdd48;
    }
    ctx->pc = 0x2BDD40u;
    {
        const bool branch_taken_0x2bdd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD40u;
        // 0x2bdd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd40) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDD48u;
label_2bdd48:
    // 0x2bdd48: 0xc08bfa0  jal         func_22FE80
label_2bdd4c:
    if (ctx->pc == 0x2BDD4Cu) {
        ctx->pc = 0x2BDD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD48u;
        // 0x2bdd4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD50u;
        goto label_2bdd50;
    }
    ctx->pc = 0x2BDD48u;
    SET_GPR_U32(ctx, 31, 0x2BDD50u);
    ctx->pc = 0x2BDD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD48u;
    // 0x2bdd4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BDD48u, 0x2BDD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD50u;
label_2bdd50:
    // 0x2bdd50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2bdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2bdd54:
    // 0x2bdd54: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2bdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2bdd58:
    // 0x2bdd58: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2bdd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2bdd5c:
    // 0x2bdd5c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2bdd5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2bdd60:
    // 0x2bdd60: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bdd60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bdd64:
    // 0x2bdd64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2bdd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2bdd68:
    // 0x2bdd68: 0xc0cd7d2  jal         func_335F48
label_2bdd6c:
    if (ctx->pc == 0x2BDD6Cu) {
        ctx->pc = 0x2BDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD68u;
        // 0x2bdd6c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD70u;
        goto label_2bdd70;
    }
    ctx->pc = 0x2BDD68u;
    SET_GPR_U32(ctx, 31, 0x2BDD70u);
    ctx->pc = 0x2BDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD68u;
    // 0x2bdd6c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2BDD68u, 0x2BDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD70u;
label_2bdd70:
    // 0x2bdd70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bdd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd74:
    // 0x2bdd74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bdd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd78:
    // 0x2bdd78: 0xc0cd780  jal         func_335E00
label_2bdd7c:
    if (ctx->pc == 0x2BDD7Cu) {
        ctx->pc = 0x2BDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD78u;
        // 0x2bdd7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD80u;
        goto label_2bdd80;
    }
    ctx->pc = 0x2BDD78u;
    SET_GPR_U32(ctx, 31, 0x2BDD80u);
    ctx->pc = 0x2BDD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD78u;
    // 0x2bdd7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BDD78u, 0x2BDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD80u;
label_2bdd80:
    // 0x2bdd80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bdd80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bdd84:
    // 0x2bdd84: 0xc0cd742  jal         func_335D08
label_2bdd88:
    if (ctx->pc == 0x2BDD88u) {
        ctx->pc = 0x2BDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD84u;
        // 0x2bdd88: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD8Cu;
        goto label_2bdd8c;
    }
    ctx->pc = 0x2BDD84u;
    SET_GPR_U32(ctx, 31, 0x2BDD8Cu);
    ctx->pc = 0x2BDD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD84u;
    // 0x2bdd88: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2BDD84u, 0x2BDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD8Cu;
label_2bdd8c:
    // 0x2bdd8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bdd8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bdd90:
    // 0x2bdd90: 0xc0cdd2e  jal         func_3374B8
label_2bdd94:
    if (ctx->pc == 0x2BDD94u) {
        ctx->pc = 0x2BDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD90u;
        // 0x2bdd94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD98u;
        goto label_2bdd98;
    }
    ctx->pc = 0x2BDD90u;
    SET_GPR_U32(ctx, 31, 0x2BDD98u);
    ctx->pc = 0x2BDD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD90u;
    // 0x2bdd94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BDD90u, 0x2BDD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD98u;
label_2bdd98:
    // 0x2bdd98: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2bdd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2bdd9c:
    // 0x2bdd9c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2bdd9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2bdda0:
    // 0x2bdda0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bdda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bdda4:
    // 0x2bdda4: 0x0  nop
    ctx->pc = 0x2bdda4u;
    // NOP
label_2bdda8:
    // 0x2bdda8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bddac:
    // 0x2bddac: 0x0  nop
    ctx->pc = 0x2bddacu;
    // NOP
label_2bddb0:
    // 0x2bddb0: 0x450001e7  bc1f        . + 4 + (0x1E7 << 2)
label_2bddb4:
    if (ctx->pc == 0x2BDDB4u) {
        ctx->pc = 0x2BDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDB0u;
        // 0x2bddb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDDB8u;
        goto label_2bddb8;
    }
    ctx->pc = 0x2BDDB0u;
    {
        const bool branch_taken_0x2bddb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDB0u;
        // 0x2bddb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddb0) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDDB8u;
label_2bddb8:
    // 0x2bddb8: 0xc0a367c  jal         func_28D9F0
label_2bddbc:
    if (ctx->pc == 0x2BDDBCu) {
        ctx->pc = 0x2BDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDB8u;
        // 0x2bddbc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDDC0u;
        goto label_2bddc0;
    }
    ctx->pc = 0x2BDDB8u;
    SET_GPR_U32(ctx, 31, 0x2BDDC0u);
    ctx->pc = 0x2BDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDDB8u;
    // 0x2bddbc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BDDB8u, 0x2BDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDC0u;
label_2bddc0:
    // 0x2bddc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bddc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bddc4:
    // 0x2bddc4: 0x120001e2  beqz        $s0, . + 4 + (0x1E2 << 2)
label_2bddc8:
    if (ctx->pc == 0x2BDDC8u) {
        ctx->pc = 0x2BDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDC4u;
        // 0x2bddc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDDCCu;
        goto label_2bddcc;
    }
    ctx->pc = 0x2BDDC4u;
    {
        const bool branch_taken_0x2bddc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDC4u;
        // 0x2bddc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddc4) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDDCCu;
label_2bddcc:
    // 0x2bddcc: 0xc0884f6  jal         func_2213D8
label_2bddd0:
    if (ctx->pc == 0x2BDDD0u) {
        ctx->pc = 0x2BDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDCCu;
        // 0x2bddd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDDD4u;
        goto label_2bddd4;
    }
    ctx->pc = 0x2BDDCCu;
    SET_GPR_U32(ctx, 31, 0x2BDDD4u);
    ctx->pc = 0x2BDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDDCCu;
    // 0x2bddd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BDDCCu, 0x2BDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDD4u;
label_2bddd4:
    // 0x2bddd4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bddd8:
    // 0x2bddd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdddc:
    // 0x2bdddc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bdddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bdde0:
    // 0x2bdde0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bdde0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bdde4:
    // 0x2bdde4: 0xc0bf800  jal         func_2FE000
label_2bdde8:
    if (ctx->pc == 0x2BDDE8u) {
        ctx->pc = 0x2BDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDE4u;
        // 0x2bdde8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDDECu;
        goto label_2bddec;
    }
    ctx->pc = 0x2BDDE4u;
    SET_GPR_U32(ctx, 31, 0x2BDDECu);
    ctx->pc = 0x2BDDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDDE4u;
    // 0x2bdde8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BDDE4u, 0x2BDDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDECu;
label_2bddec:
    // 0x2bddec: 0x100001d8  b           . + 4 + (0x1D8 << 2)
label_2bddf0:
    if (ctx->pc == 0x2BDDF0u) {
        ctx->pc = 0x2BDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDECu;
        // 0x2bddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDDF4u;
        goto label_2bddf4;
    }
    ctx->pc = 0x2BDDECu;
    {
        const bool branch_taken_0x2bddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDECu;
        // 0x2bddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddec) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDDF4u;
label_2bddf4:
    // 0x2bddf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bddf8:
    // 0x2bddf8: 0xafb000a8  sw          $s0, 0xA8($sp)
    ctx->pc = 0x2bddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
label_2bddfc:
    // 0x2bddfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bde00:
    // 0x2bde00: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x2bde00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2bde04:
    // 0x2bde04: 0xc0888a2  jal         func_222288
label_2bde08:
    if (ctx->pc == 0x2BDE08u) {
        ctx->pc = 0x2BDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE04u;
        // 0x2bde08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE0Cu;
        goto label_2bde0c;
    }
    ctx->pc = 0x2BDE04u;
    SET_GPR_U32(ctx, 31, 0x2BDE0Cu);
    ctx->pc = 0x2BDE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE04u;
    // 0x2bde08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BDE04u, 0x2BDE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE0Cu;
label_2bde0c:
    // 0x2bde0c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_2bde10:
    if (ctx->pc == 0x2BDE10u) {
        ctx->pc = 0x2BDE14u;
        goto label_2bde14;
    }
    ctx->pc = 0x2BDE0Cu;
    {
        const bool branch_taken_0x2bde0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde0c) {
            ctx->pc = 0x2BDEECu;
            goto label_2bdeec;
        }
    }
    ctx->pc = 0x2BDE14u;
label_2bde14:
    // 0x2bde14: 0x56f00015  bnel        $s7, $s0, . + 4 + (0x15 << 2)
label_2bde18:
    if (ctx->pc == 0x2BDE18u) {
        ctx->pc = 0x2BDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE14u;
        // 0x2bde18: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE1Cu;
        goto label_2bde1c;
    }
    ctx->pc = 0x2BDE14u;
    {
        const bool branch_taken_0x2bde14 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bde14) {
            ctx->pc = 0x2BDE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDE14u;
            // 0x2bde18: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDE6Cu;
            goto label_2bde6c;
        }
    }
    ctx->pc = 0x2BDE1Cu;
label_2bde1c:
    // 0x2bde1c: 0xc0a4e54  jal         func_293950
label_2bde20:
    if (ctx->pc == 0x2BDE20u) {
        ctx->pc = 0x2BDE24u;
        goto label_2bde24;
    }
    ctx->pc = 0x2BDE1Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE24u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BDE1Cu, 0x2BDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE24u;
label_2bde24:
    // 0x2bde24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bde24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bde28:
    // 0x2bde28: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2bde2c:
    if (ctx->pc == 0x2BDE2Cu) {
        ctx->pc = 0x2BDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE28u;
        // 0x2bde2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE30u;
        goto label_2bde30;
    }
    ctx->pc = 0x2BDE28u;
    {
        const bool branch_taken_0x2bde28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bde28) {
            ctx->pc = 0x2BDE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDE28u;
            // 0x2bde2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDE5Cu;
            goto label_2bde5c;
        }
    }
    ctx->pc = 0x2BDE30u;
label_2bde30:
    // 0x2bde30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bde30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bde34:
    // 0x2bde34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bde34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bde38:
    // 0x2bde38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bde38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bde3c:
    // 0x2bde3c: 0x40f809  jalr        $v0
label_2bde40:
    if (ctx->pc == 0x2BDE40u) {
        ctx->pc = 0x2BDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE3Cu;
        // 0x2bde40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE44u;
        goto label_2bde44;
    }
    ctx->pc = 0x2BDE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDE44u);
        ctx->pc = 0x2BDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE3Cu;
        // 0x2bde40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDE3Cu, 0x2BDE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDE44u;
label_2bde44:
    // 0x2bde44: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bde44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bde48:
    // 0x2bde48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bde48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bde4c:
    // 0x2bde4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bde4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bde50:
    // 0x2bde50: 0xc0abd6c  jal         func_2AF5B0
label_2bde54:
    if (ctx->pc == 0x2BDE54u) {
        ctx->pc = 0x2BDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE50u;
        // 0x2bde54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE58u;
        goto label_2bde58;
    }
    ctx->pc = 0x2BDE50u;
    SET_GPR_U32(ctx, 31, 0x2BDE58u);
    ctx->pc = 0x2BDE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE50u;
    // 0x2bde54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2BDE50u, 0x2BDE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE58u;
label_2bde58:
    // 0x2bde58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bde58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bde5c:
    // 0x2bde5c: 0xc0a35d6  jal         func_28D758
label_2bde60:
    if (ctx->pc == 0x2BDE60u) {
        ctx->pc = 0x2BDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE5Cu;
        // 0x2bde60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE64u;
        goto label_2bde64;
    }
    ctx->pc = 0x2BDE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE64u);
    ctx->pc = 0x2BDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE5Cu;
    // 0x2bde60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BDE5Cu, 0x2BDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE64u;
label_2bde64:
    // 0x2bde64: 0x100001ba  b           . + 4 + (0x1BA << 2)
label_2bde68:
    if (ctx->pc == 0x2BDE68u) {
        ctx->pc = 0x2BDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE64u;
        // 0x2bde68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE6Cu;
        goto label_2bde6c;
    }
    ctx->pc = 0x2BDE64u;
    {
        const bool branch_taken_0x2bde64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE64u;
        // 0x2bde68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde64) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDE6Cu;
label_2bde6c:
    // 0x2bde6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2bde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bde70:
    // 0x2bde70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bde70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bde74:
    // 0x2bde74: 0x0  nop
    ctx->pc = 0x2bde74u;
    // NOP
label_2bde78:
    // 0x2bde78: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_2bde7c:
    if (ctx->pc == 0x2BDE7Cu) {
        ctx->pc = 0x2BDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE78u;
        // 0x2bde7c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDE80u;
        goto label_2bde80;
    }
    ctx->pc = 0x2BDE78u;
    {
        const bool branch_taken_0x2bde78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bde78) {
            ctx->pc = 0x2BDE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDE78u;
            // 0x2bde7c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDEA8u;
            goto label_2bdea8;
        }
    }
    ctx->pc = 0x2BDE80u;
label_2bde80:
    // 0x2bde80: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2bde80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2bde84:
    // 0x2bde84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bde84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bde88:
    // 0x2bde88: 0x0  nop
    ctx->pc = 0x2bde88u;
    // NOP
label_2bde8c:
    // 0x2bde8c: 0x0  nop
    ctx->pc = 0x2bde8cu;
    // NOP
label_2bde90:
    // 0x2bde90: 0x46150044  c1          0x150044
    ctx->pc = 0x2bde90u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2bde94:
    // 0x2bde94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bde94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bde98:
    // 0x2bde98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bde98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bde9c:
    // 0x2bde9c: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2bde9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bdea0:
    // 0x2bdea0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bdea4:
    if (ctx->pc == 0x2BDEA4u) {
        ctx->pc = 0x2BDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEA0u;
        // 0x2bdea4: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEA8u;
        goto label_2bdea8;
    }
    ctx->pc = 0x2BDEA0u;
    {
        const bool branch_taken_0x2bdea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEA0u;
        // 0x2bdea4: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdea0) {
            ctx->pc = 0x2BDEB0u;
            goto label_2bdeb0;
        }
    }
    ctx->pc = 0x2BDEA8u;
label_2bdea8:
    // 0x2bdea8: 0xc4550140  lwc1        $f21, 0x140($v0)
    ctx->pc = 0x2bdea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bdeac:
    // 0x2bdeac: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2bdeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bdeb0:
    // 0x2bdeb0: 0xc08bfa0  jal         func_22FE80
label_2bdeb4:
    if (ctx->pc == 0x2BDEB4u) {
        ctx->pc = 0x2BDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEB0u;
        // 0x2bdeb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEB8u;
        goto label_2bdeb8;
    }
    ctx->pc = 0x2BDEB0u;
    SET_GPR_U32(ctx, 31, 0x2BDEB8u);
    ctx->pc = 0x2BDEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEB0u;
    // 0x2bdeb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BDEB0u, 0x2BDEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEB8u;
label_2bdeb8:
    // 0x2bdeb8: 0xc0a367c  jal         func_28D9F0
label_2bdebc:
    if (ctx->pc == 0x2BDEBCu) {
        ctx->pc = 0x2BDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEB8u;
        // 0x2bdebc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEC0u;
        goto label_2bdec0;
    }
    ctx->pc = 0x2BDEB8u;
    SET_GPR_U32(ctx, 31, 0x2BDEC0u);
    ctx->pc = 0x2BDEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEB8u;
    // 0x2bdebc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BDEB8u, 0x2BDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEC0u;
label_2bdec0:
    // 0x2bdec0: 0x104001a2  beqz        $v0, . + 4 + (0x1A2 << 2)
label_2bdec4:
    if (ctx->pc == 0x2BDEC4u) {
        ctx->pc = 0x2BDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEC0u;
        // 0x2bdec4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEC8u;
        goto label_2bdec8;
    }
    ctx->pc = 0x2BDEC0u;
    {
        const bool branch_taken_0x2bdec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEC0u;
        // 0x2bdec4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdec0) {
            ctx->pc = 0x2BE54Cu;
            goto label_2be54c;
        }
    }
    ctx->pc = 0x2BDEC8u;
label_2bdec8:
    // 0x2bdec8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bdec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdecc:
    // 0x2bdecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bdeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bded0:
    // 0x2bded0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bded0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bded4:
    // 0x2bded4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bded4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2bded8:
    // 0x2bded8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bded8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bdedc:
    // 0x2bdedc: 0xc0bf3d4  jal         func_2FCF50
label_2bdee0:
    if (ctx->pc == 0x2BDEE0u) {
        ctx->pc = 0x2BDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEDCu;
        // 0x2bdee0: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEE4u;
        goto label_2bdee4;
    }
    ctx->pc = 0x2BDEDCu;
    SET_GPR_U32(ctx, 31, 0x2BDEE4u);
    ctx->pc = 0x2BDEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEDCu;
    // 0x2bdee0: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BDEDCu, 0x2BDEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEE4u;
label_2bdee4:
    // 0x2bdee4: 0x1000019a  b           . + 4 + (0x19A << 2)
label_2bdee8:
    if (ctx->pc == 0x2BDEE8u) {
        ctx->pc = 0x2BDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEE4u;
        // 0x2bdee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEECu;
        goto label_2bdeec;
    }
    ctx->pc = 0x2BDEE4u;
    {
        const bool branch_taken_0x2bdee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEE4u;
        // 0x2bdee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdee4) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDEECu;
label_2bdeec:
    // 0x2bdeec: 0x16c00053  bnez        $s6, . + 4 + (0x53 << 2)
label_2bdef0:
    if (ctx->pc == 0x2BDEF0u) {
        ctx->pc = 0x2BDEF4u;
        goto label_2bdef4;
    }
    ctx->pc = 0x2BDEECu;
    {
        const bool branch_taken_0x2bdeec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdeec) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BDEF4u;
label_2bdef4:
    // 0x2bdef4: 0x16f00051  bne         $s7, $s0, . + 4 + (0x51 << 2)
label_2bdef8:
    if (ctx->pc == 0x2BDEF8u) {
        ctx->pc = 0x2BDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEF4u;
        // 0x2bdef8: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEFCu;
        goto label_2bdefc;
    }
    ctx->pc = 0x2BDEF4u;
    {
        const bool branch_taken_0x2bdef4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEF4u;
        // 0x2bdef8: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdef4) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BDEFCu;
label_2bdefc:
    // 0x2bdefc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2bdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2bdf00:
    // 0x2bdf00: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2bdf04:
    if (ctx->pc == 0x2BDF04u) {
        ctx->pc = 0x2BDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF00u;
        // 0x2bdf04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF08u;
        goto label_2bdf08;
    }
    ctx->pc = 0x2BDF00u;
    {
        const bool branch_taken_0x2bdf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF00u;
        // 0x2bdf04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf00) {
            ctx->pc = 0x2BDF28u;
            goto label_2bdf28;
        }
    }
    ctx->pc = 0x2BDF08u;
label_2bdf08:
    // 0x2bdf08: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2bdf0c:
    if (ctx->pc == 0x2BDF0Cu) {
        ctx->pc = 0x2BDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF08u;
        // 0x2bdf0c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF10u;
        goto label_2bdf10;
    }
    ctx->pc = 0x2BDF08u;
    {
        const bool branch_taken_0x2bdf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF08u;
        // 0x2bdf0c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf08) {
            ctx->pc = 0x2BDF28u;
            goto label_2bdf28;
        }
    }
    ctx->pc = 0x2BDF10u;
label_2bdf10:
    // 0x2bdf10: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bdf14:
    if (ctx->pc == 0x2BDF14u) {
        ctx->pc = 0x2BDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF10u;
        // 0x2bdf14: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF18u;
        goto label_2bdf18;
    }
    ctx->pc = 0x2BDF10u;
    {
        const bool branch_taken_0x2bdf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF10u;
        // 0x2bdf14: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf10) {
            ctx->pc = 0x2BDF28u;
            goto label_2bdf28;
        }
    }
    ctx->pc = 0x2BDF18u;
label_2bdf18:
    // 0x2bdf18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2bdf1c:
    if (ctx->pc == 0x2BDF1Cu) {
        ctx->pc = 0x2BDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF18u;
        // 0x2bdf1c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF20u;
        goto label_2bdf20;
    }
    ctx->pc = 0x2BDF18u;
    {
        const bool branch_taken_0x2bdf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF18u;
        // 0x2bdf1c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf18) {
            ctx->pc = 0x2BDF28u;
            goto label_2bdf28;
        }
    }
    ctx->pc = 0x2BDF20u;
label_2bdf20:
    // 0x2bdf20: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_2bdf24:
    if (ctx->pc == 0x2BDF24u) {
        ctx->pc = 0x2BDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF20u;
        // 0x2bdf24: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF28u;
        goto label_2bdf28;
    }
    ctx->pc = 0x2BDF20u;
    {
        const bool branch_taken_0x2bdf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bdf20) {
            ctx->pc = 0x2BDF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDF20u;
            // 0x2bdf24: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDF88u;
            goto label_2bdf88;
        }
    }
    ctx->pc = 0x2BDF28u;
label_2bdf28:
    // 0x2bdf28: 0xc08bfbc  jal         func_22FEF0
label_2bdf2c:
    if (ctx->pc == 0x2BDF2Cu) {
        ctx->pc = 0x2BDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF28u;
        // 0x2bdf2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF30u;
        goto label_2bdf30;
    }
    ctx->pc = 0x2BDF28u;
    SET_GPR_U32(ctx, 31, 0x2BDF30u);
    ctx->pc = 0x2BDF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF28u;
    // 0x2bdf2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BDF28u, 0x2BDF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF30u;
label_2bdf30:
    // 0x2bdf30: 0xc0a367c  jal         func_28D9F0
label_2bdf34:
    if (ctx->pc == 0x2BDF34u) {
        ctx->pc = 0x2BDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF30u;
        // 0x2bdf34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF38u;
        goto label_2bdf38;
    }
    ctx->pc = 0x2BDF30u;
    SET_GPR_U32(ctx, 31, 0x2BDF38u);
    ctx->pc = 0x2BDF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF30u;
    // 0x2bdf34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BDF30u, 0x2BDF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF38u;
label_2bdf38:
    // 0x2bdf38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf3c:
    // 0x2bdf3c: 0x12000184  beqz        $s0, . + 4 + (0x184 << 2)
label_2bdf40:
    if (ctx->pc == 0x2BDF40u) {
        ctx->pc = 0x2BDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF3Cu;
        // 0x2bdf40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF44u;
        goto label_2bdf44;
    }
    ctx->pc = 0x2BDF3Cu;
    {
        const bool branch_taken_0x2bdf3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF3Cu;
        // 0x2bdf40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf3c) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDF44u;
label_2bdf44:
    // 0x2bdf44: 0xc087420  jal         func_21D080
label_2bdf48:
    if (ctx->pc == 0x2BDF48u) {
        ctx->pc = 0x2BDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF44u;
        // 0x2bdf48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF4Cu;
        goto label_2bdf4c;
    }
    ctx->pc = 0x2BDF44u;
    SET_GPR_U32(ctx, 31, 0x2BDF4Cu);
    ctx->pc = 0x2BDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF44u;
    // 0x2bdf48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2BDF44u, 0x2BDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF4Cu;
label_2bdf4c:
    // 0x2bdf4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2bdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2bdf50:
    // 0x2bdf50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bdf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdf54:
    // 0x2bdf54: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2bdf54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2bdf58:
    // 0x2bdf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf5c:
    // 0x2bdf5c: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2bdf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2bdf60:
    // 0x2bdf60: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2bdf60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2bdf64:
    // 0x2bdf64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bdf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bdf68:
    // 0x2bdf68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bdf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf6c:
    // 0x2bdf6c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bdf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bdf70:
    // 0x2bdf70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bdf70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bdf74:
    // 0x2bdf74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bdf74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf78:
    // 0x2bdf78: 0xc0bee7a  jal         func_2FB9E8
label_2bdf7c:
    if (ctx->pc == 0x2BDF7Cu) {
        ctx->pc = 0x2BDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF78u;
        // 0x2bdf7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF80u;
        goto label_2bdf80;
    }
    ctx->pc = 0x2BDF78u;
    SET_GPR_U32(ctx, 31, 0x2BDF80u);
    ctx->pc = 0x2BDF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF78u;
    // 0x2bdf7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BDF78u, 0x2BDF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF80u;
label_2bdf80:
    // 0x2bdf80: 0x10000173  b           . + 4 + (0x173 << 2)
label_2bdf84:
    if (ctx->pc == 0x2BDF84u) {
        ctx->pc = 0x2BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF80u;
        // 0x2bdf84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF88u;
        goto label_2bdf88;
    }
    ctx->pc = 0x2BDF80u;
    {
        const bool branch_taken_0x2bdf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF80u;
        // 0x2bdf84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf80) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDF88u;
label_2bdf88:
    // 0x2bdf88: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2bdf88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bdf8c:
    // 0x2bdf8c: 0x0  nop
    ctx->pc = 0x2bdf8cu;
    // NOP
label_2bdf90:
    // 0x2bdf90: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_2bdf94:
    if (ctx->pc == 0x2BDF94u) {
        ctx->pc = 0x2BDF98u;
        goto label_2bdf98;
    }
    ctx->pc = 0x2BDF90u;
    {
        const bool branch_taken_0x2bdf90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdf90) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BDF98u;
label_2bdf98:
    // 0x2bdf98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bdf9c:
    // 0x2bdf9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdf9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bdfa0:
    // 0x2bdfa0: 0x0  nop
    ctx->pc = 0x2bdfa0u;
    // NOP
label_2bdfa4:
    // 0x2bdfa4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bdfa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bdfa8:
    // 0x2bdfa8: 0x0  nop
    ctx->pc = 0x2bdfa8u;
    // NOP
label_2bdfac:
    // 0x2bdfac: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_2bdfb0:
    if (ctx->pc == 0x2BDFB0u) {
        ctx->pc = 0x2BDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFACu;
        // 0x2bdfb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFB4u;
        goto label_2bdfb4;
    }
    ctx->pc = 0x2BDFACu;
    {
        const bool branch_taken_0x2bdfac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFACu;
        // 0x2bdfb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfac) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BDFB4u;
label_2bdfb4:
    // 0x2bdfb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bdfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfb8:
    // 0x2bdfb8: 0xc08886c  jal         func_2221B0
label_2bdfbc:
    if (ctx->pc == 0x2BDFBCu) {
        ctx->pc = 0x2BDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFB8u;
        // 0x2bdfbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFC0u;
        goto label_2bdfc0;
    }
    ctx->pc = 0x2BDFB8u;
    SET_GPR_U32(ctx, 31, 0x2BDFC0u);
    ctx->pc = 0x2BDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFB8u;
    // 0x2bdfbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2BDFB8u, 0x2BDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFC0u;
label_2bdfc0:
    // 0x2bdfc0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2bdfc4:
    if (ctx->pc == 0x2BDFC4u) {
        ctx->pc = 0x2BDFC8u;
        goto label_2bdfc8;
    }
    ctx->pc = 0x2BDFC0u;
    {
        const bool branch_taken_0x2bdfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdfc0) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BDFC8u;
label_2bdfc8:
    // 0x2bdfc8: 0xc08bfa0  jal         func_22FE80
label_2bdfcc:
    if (ctx->pc == 0x2BDFCCu) {
        ctx->pc = 0x2BDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFC8u;
        // 0x2bdfcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFD0u;
        goto label_2bdfd0;
    }
    ctx->pc = 0x2BDFC8u;
    SET_GPR_U32(ctx, 31, 0x2BDFD0u);
    ctx->pc = 0x2BDFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFC8u;
    // 0x2bdfcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BDFC8u, 0x2BDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFD0u;
label_2bdfd0:
    // 0x2bdfd0: 0xc0a367c  jal         func_28D9F0
label_2bdfd4:
    if (ctx->pc == 0x2BDFD4u) {
        ctx->pc = 0x2BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFD0u;
        // 0x2bdfd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFD8u;
        goto label_2bdfd8;
    }
    ctx->pc = 0x2BDFD0u;
    SET_GPR_U32(ctx, 31, 0x2BDFD8u);
    ctx->pc = 0x2BDFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFD0u;
    // 0x2bdfd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BDFD0u, 0x2BDFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFD8u;
label_2bdfd8:
    // 0x2bdfd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bdfd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfdc:
    // 0x2bdfdc: 0x1260015c  beqz        $s3, . + 4 + (0x15C << 2)
label_2bdfe0:
    if (ctx->pc == 0x2BDFE0u) {
        ctx->pc = 0x2BDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFDCu;
        // 0x2bdfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFE4u;
        goto label_2bdfe4;
    }
    ctx->pc = 0x2BDFDCu;
    {
        const bool branch_taken_0x2bdfdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFDCu;
        // 0x2bdfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfdc) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BDFE4u;
label_2bdfe4:
    // 0x2bdfe4: 0xc087420  jal         func_21D080
label_2bdfe8:
    if (ctx->pc == 0x2BDFE8u) {
        ctx->pc = 0x2BDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFE4u;
        // 0x2bdfe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFECu;
        goto label_2bdfec;
    }
    ctx->pc = 0x2BDFE4u;
    SET_GPR_U32(ctx, 31, 0x2BDFECu);
    ctx->pc = 0x2BDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFE4u;
    // 0x2bdfe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2BDFE4u, 0x2BDFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFECu;
label_2bdfec:
    // 0x2bdfec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bdfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bdff0:
    // 0x2bdff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdff4:
    // 0x2bdff4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bdff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bdff8:
    // 0x2bdff8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bdffc:
    // 0x2bdffc: 0x40f809  jalr        $v0
label_2be000:
    if (ctx->pc == 0x2BE000u) {
        ctx->pc = 0x2BE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFFCu;
        // 0x2be000: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE004u;
        goto label_2be004;
    }
    ctx->pc = 0x2BDFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BE004u);
        ctx->pc = 0x2BE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFFCu;
        // 0x2be000: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDFFCu, 0x2BE004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE004u;
label_2be004:
    // 0x2be004: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2be004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be008:
    // 0x2be008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be00c:
    // 0x2be00c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2be010:
    // 0x2be010: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x2be010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
label_2be014:
    // 0x2be014: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be018:
    // 0x2be018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2be018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be01c:
    // 0x2be01c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2be01cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be020:
    // 0x2be020: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2be020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2be024:
    // 0x2be024: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2be024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be028:
    // 0x2be028: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2be028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be02c:
    // 0x2be02c: 0xc0bee7a  jal         func_2FB9E8
label_2be030:
    if (ctx->pc == 0x2BE030u) {
        ctx->pc = 0x2BE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE02Cu;
        // 0x2be030: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE034u;
        goto label_2be034;
    }
    ctx->pc = 0x2BE02Cu;
    SET_GPR_U32(ctx, 31, 0x2BE034u);
    ctx->pc = 0x2BE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE02Cu;
    // 0x2be030: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BE02Cu, 0x2BE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE034u;
label_2be034:
    // 0x2be034: 0x10000146  b           . + 4 + (0x146 << 2)
label_2be038:
    if (ctx->pc == 0x2BE038u) {
        ctx->pc = 0x2BE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE034u;
        // 0x2be038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE03Cu;
        goto label_2be03c;
    }
    ctx->pc = 0x2BE034u;
    {
        const bool branch_taken_0x2be034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE034u;
        // 0x2be038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be034) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE03Cu;
label_2be03c:
    // 0x2be03c: 0xc0a4e54  jal         func_293950
label_2be040:
    if (ctx->pc == 0x2BE040u) {
        ctx->pc = 0x2BE044u;
        goto label_2be044;
    }
    ctx->pc = 0x2BE03Cu;
    SET_GPR_U32(ctx, 31, 0x2BE044u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BE03Cu, 0x2BE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE044u;
label_2be044:
    // 0x2be044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be048:
    // 0x2be048: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2be04c:
    if (ctx->pc == 0x2BE04Cu) {
        ctx->pc = 0x2BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE048u;
        // 0x2be04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE050u;
        goto label_2be050;
    }
    ctx->pc = 0x2BE048u;
    {
        const bool branch_taken_0x2be048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE048u;
        // 0x2be04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be048) {
            ctx->pc = 0x2BE060u;
            goto label_2be060;
        }
    }
    ctx->pc = 0x2BE050u;
label_2be050:
    // 0x2be050: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2be050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be054:
    // 0x2be054: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2be054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2be058:
    // 0x2be058: 0xc0acb08  jal         func_2B2C20
label_2be05c:
    if (ctx->pc == 0x2BE05Cu) {
        ctx->pc = 0x2BE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE058u;
        // 0x2be05c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE060u;
        goto label_2be060;
    }
    ctx->pc = 0x2BE058u;
    SET_GPR_U32(ctx, 31, 0x2BE060u);
    ctx->pc = 0x2BE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE058u;
    // 0x2be05c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2BE058u, 0x2BE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE060u;
label_2be060:
    // 0x2be060: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be064:
    // 0x2be064: 0xc0a35d6  jal         func_28D758
label_2be068:
    if (ctx->pc == 0x2BE068u) {
        ctx->pc = 0x2BE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE064u;
        // 0x2be068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE06Cu;
        goto label_2be06c;
    }
    ctx->pc = 0x2BE064u;
    SET_GPR_U32(ctx, 31, 0x2BE06Cu);
    ctx->pc = 0x2BE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE064u;
    // 0x2be068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BE064u, 0x2BE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE06Cu;
label_2be06c:
    // 0x2be06c: 0x10000138  b           . + 4 + (0x138 << 2)
label_2be070:
    if (ctx->pc == 0x2BE070u) {
        ctx->pc = 0x2BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE06Cu;
        // 0x2be070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE074u;
        goto label_2be074;
    }
    ctx->pc = 0x2BE06Cu;
    {
        const bool branch_taken_0x2be06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE06Cu;
        // 0x2be070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be06c) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE074u;
label_2be074:
    // 0x2be074: 0xc08a01c  jal         func_228070
label_2be078:
    if (ctx->pc == 0x2BE078u) {
        ctx->pc = 0x2BE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE074u;
        // 0x2be078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE07Cu;
        goto label_2be07c;
    }
    ctx->pc = 0x2BE074u;
    SET_GPR_U32(ctx, 31, 0x2BE07Cu);
    ctx->pc = 0x2BE078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE074u;
    // 0x2be078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2BE074u, 0x2BE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE07Cu;
label_2be07c:
    // 0x2be07c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2be080:
    if (ctx->pc == 0x2BE080u) {
        ctx->pc = 0x2BE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE07Cu;
        // 0x2be080: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE084u;
        goto label_2be084;
    }
    ctx->pc = 0x2BE07Cu;
    {
        const bool branch_taken_0x2be07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be07c) {
            ctx->pc = 0x2BE080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE07Cu;
            // 0x2be080: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0B4u;
            goto label_2be0b4;
        }
    }
    ctx->pc = 0x2BE084u;
label_2be084:
    // 0x2be084: 0xc088e30  jal         func_2238C0
label_2be088:
    if (ctx->pc == 0x2BE088u) {
        ctx->pc = 0x2BE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE084u;
        // 0x2be088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE08Cu;
        goto label_2be08c;
    }
    ctx->pc = 0x2BE084u;
    SET_GPR_U32(ctx, 31, 0x2BE08Cu);
    ctx->pc = 0x2BE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE084u;
    // 0x2be088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x2BE084u, 0x2BE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE08Cu;
label_2be08c:
    // 0x2be08c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2be090:
    if (ctx->pc == 0x2BE090u) {
        ctx->pc = 0x2BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE08Cu;
        // 0x2be090: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE094u;
        goto label_2be094;
    }
    ctx->pc = 0x2BE08Cu;
    {
        const bool branch_taken_0x2be08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be08c) {
            ctx->pc = 0x2BE090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE08Cu;
            // 0x2be090: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0B4u;
            goto label_2be0b4;
        }
    }
    ctx->pc = 0x2BE094u;
label_2be094:
    // 0x2be094: 0xc08a170  jal         func_2285C0
label_2be098:
    if (ctx->pc == 0x2BE098u) {
        ctx->pc = 0x2BE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE094u;
        // 0x2be098: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE09Cu;
        goto label_2be09c;
    }
    ctx->pc = 0x2BE094u;
    SET_GPR_U32(ctx, 31, 0x2BE09Cu);
    ctx->pc = 0x2BE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE094u;
    // 0x2be098: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C0u, 0x2BE094u, 0x2BE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE09Cu;
label_2be09c:
    // 0x2be09c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2be0a0:
    if (ctx->pc == 0x2BE0A0u) {
        ctx->pc = 0x2BE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE09Cu;
        // 0x2be0a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE0A4u;
        goto label_2be0a4;
    }
    ctx->pc = 0x2BE09Cu;
    {
        const bool branch_taken_0x2be09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be09c) {
            ctx->pc = 0x2BE0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE09Cu;
            // 0x2be0a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0B4u;
            goto label_2be0b4;
        }
    }
    ctx->pc = 0x2BE0A4u;
label_2be0a4:
    // 0x2be0a4: 0xc08a17e  jal         func_2285F8
label_2be0a8:
    if (ctx->pc == 0x2BE0A8u) {
        ctx->pc = 0x2BE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0A4u;
        // 0x2be0a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE0ACu;
        goto label_2be0ac;
    }
    ctx->pc = 0x2BE0A4u;
    SET_GPR_U32(ctx, 31, 0x2BE0ACu);
    ctx->pc = 0x2BE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0A4u;
    // 0x2be0a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x2BE0A4u, 0x2BE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0ACu;
label_2be0ac:
    // 0x2be0ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2be0b0:
    if (ctx->pc == 0x2BE0B0u) {
        ctx->pc = 0x2BE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0ACu;
        // 0x2be0b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE0B4u;
        goto label_2be0b4;
    }
    ctx->pc = 0x2BE0ACu;
    {
        const bool branch_taken_0x2be0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be0ac) {
            ctx->pc = 0x2BE0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE0ACu;
            // 0x2be0b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0B4u;
            goto label_2be0b4;
        }
    }
    ctx->pc = 0x2BE0B4u;
label_2be0b4:
    // 0x2be0b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2be0b8:
    if (ctx->pc == 0x2BE0B8u) {
        ctx->pc = 0x2BE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0B4u;
        // 0x2be0b8: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE0BCu;
        goto label_2be0bc;
    }
    ctx->pc = 0x2BE0B4u;
    {
        const bool branch_taken_0x2be0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0B4u;
        // 0x2be0b8: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0b4) {
            ctx->pc = 0x2BE0CCu;
            goto label_2be0cc;
        }
    }
    ctx->pc = 0x2BE0BCu;
label_2be0bc:
    // 0x2be0bc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2be0c0:
    // 0x2be0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be0c4:
    // 0x2be0c4: 0x0  nop
    ctx->pc = 0x2be0c4u;
    // NOP
label_2be0c8:
    // 0x2be0c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be0c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2be0cc:
    // 0x2be0cc: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x2be0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be0d0:
    // 0x2be0d0: 0x0  nop
    ctx->pc = 0x2be0d0u;
    // NOP
label_2be0d4:
    // 0x2be0d4: 0x45000070  bc1f        . + 4 + (0x70 << 2)
label_2be0d8:
    if (ctx->pc == 0x2BE0D8u) {
        ctx->pc = 0x2BE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0D4u;
        // 0x2be0d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE0DCu;
        goto label_2be0dc;
    }
    ctx->pc = 0x2BE0D4u;
    {
        const bool branch_taken_0x2be0d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0D4u;
        // 0x2be0d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0d4) {
            ctx->pc = 0x2BE298u;
            goto label_2be298;
        }
    }
    ctx->pc = 0x2BE0DCu;
label_2be0dc:
    // 0x2be0dc: 0xc08a0d0  jal         func_228340
label_2be0e0:
    if (ctx->pc == 0x2BE0E0u) {
        ctx->pc = 0x2BE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0DCu;
        // 0x2be0e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE0E4u;
        goto label_2be0e4;
    }
    ctx->pc = 0x2BE0DCu;
    SET_GPR_U32(ctx, 31, 0x2BE0E4u);
    ctx->pc = 0x2BE0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0DCu;
    // 0x2be0e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BE0DCu, 0x2BE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0E4u;
label_2be0e4:
    // 0x2be0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be0e8:
    // 0x2be0e8: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
label_2be0ec:
    if (ctx->pc == 0x2BE0ECu) {
        ctx->pc = 0x2BE0F0u;
        goto label_2be0f0;
    }
    ctx->pc = 0x2BE0E8u;
    {
        const bool branch_taken_0x2be0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2be0e8) {
            ctx->pc = 0x2BE228u;
            goto label_2be228;
        }
    }
    ctx->pc = 0x2BE0F0u;
label_2be0f0:
    // 0x2be0f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be0f4:
    // 0x2be0f4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2be0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_2be0f8:
    // 0x2be0f8: 0xc0a36c8  jal         func_28DB20
label_2be0fc:
    if (ctx->pc == 0x2BE0FCu) {
        ctx->pc = 0x2BE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0F8u;
        // 0x2be0fc: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE100u;
        goto label_2be100;
    }
    ctx->pc = 0x2BE0F8u;
    SET_GPR_U32(ctx, 31, 0x2BE100u);
    ctx->pc = 0x2BE0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0F8u;
    // 0x2be0fc: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2BE0F8u, 0x2BE100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE100u;
label_2be100:
    // 0x2be100: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2be100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2be104:
    // 0x2be104: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2be104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2be108:
    // 0x2be108: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2be10c:
    // 0x2be10c: 0x0  nop
    ctx->pc = 0x2be10cu;
    // NOP
label_2be110:
    // 0x2be110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2be110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2be114:
    // 0x2be114: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2be114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be118:
    // 0x2be118: 0x0  nop
    ctx->pc = 0x2be118u;
    // NOP
label_2be11c:
    // 0x2be11c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2be120:
    if (ctx->pc == 0x2BE120u) {
        ctx->pc = 0x2BE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE11Cu;
        // 0x2be120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE124u;
        goto label_2be124;
    }
    ctx->pc = 0x2BE11Cu;
    {
        const bool branch_taken_0x2be11c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE11Cu;
        // 0x2be120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be11c) {
            ctx->pc = 0x2BE154u;
            goto label_2be154;
        }
    }
    ctx->pc = 0x2BE124u;
label_2be124:
    // 0x2be124: 0xc08bfa0  jal         func_22FE80
label_2be128:
    if (ctx->pc == 0x2BE128u) {
        ctx->pc = 0x2BE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE124u;
        // 0x2be128: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE12Cu;
        goto label_2be12c;
    }
    ctx->pc = 0x2BE124u;
    SET_GPR_U32(ctx, 31, 0x2BE12Cu);
    ctx->pc = 0x2BE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE124u;
    // 0x2be128: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BE124u, 0x2BE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE12Cu;
label_2be12c:
    // 0x2be12c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be130:
    // 0x2be130: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be134:
    // 0x2be134: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x2be134u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2be138:
    // 0x2be138: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2be13c:
    // 0x2be13c: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2be13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2be140:
    // 0x2be140: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2be140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2be144:
    // 0x2be144: 0xc13b782  jal         func_4EDE08
label_2be148:
    if (ctx->pc == 0x2BE148u) {
        ctx->pc = 0x2BE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE144u;
        // 0x2be148: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE14Cu;
        goto label_2be14c;
    }
    ctx->pc = 0x2BE144u;
    SET_GPR_U32(ctx, 31, 0x2BE14Cu);
    ctx->pc = 0x2BE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE144u;
    // 0x2be148: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2BE144u, 0x2BE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE14Cu;
label_2be14c:
    // 0x2be14c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2be150:
    if (ctx->pc == 0x2BE150u) {
        ctx->pc = 0x2BE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE14Cu;
        // 0x2be150: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE154u;
        goto label_2be154;
    }
    ctx->pc = 0x2BE14Cu;
    {
        const bool branch_taken_0x2be14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE14Cu;
        // 0x2be150: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be14c) {
            ctx->pc = 0x2BE15Cu;
            goto label_2be15c;
        }
    }
    ctx->pc = 0x2BE154u;
label_2be154:
    // 0x2be154: 0xc08bfbc  jal         func_22FEF0
label_2be158:
    if (ctx->pc == 0x2BE158u) {
        ctx->pc = 0x2BE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE154u;
        // 0x2be158: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE15Cu;
        goto label_2be15c;
    }
    ctx->pc = 0x2BE154u;
    SET_GPR_U32(ctx, 31, 0x2BE15Cu);
    ctx->pc = 0x2BE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE154u;
    // 0x2be158: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BE154u, 0x2BE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE15Cu;
label_2be15c:
    // 0x2be15c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2be15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2be160:
    // 0x2be160: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2be160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2be164:
    // 0x2be164: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2be164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be168:
    // 0x2be168: 0x0  nop
    ctx->pc = 0x2be168u;
    // NOP
label_2be16c:
    // 0x2be16c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2be170:
    if (ctx->pc == 0x2BE170u) {
        ctx->pc = 0x2BE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE16Cu;
        // 0x2be170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE174u;
        goto label_2be174;
    }
    ctx->pc = 0x2BE16Cu;
    {
        const bool branch_taken_0x2be16c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE16Cu;
        // 0x2be170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be16c) {
            ctx->pc = 0x2BE1B4u;
            goto label_2be1b4;
        }
    }
    ctx->pc = 0x2BE174u;
label_2be174:
    // 0x2be174: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2be174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2be178:
    // 0x2be178: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2be178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2be17c:
    // 0x2be17c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2be17cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be180:
    // 0x2be180: 0x0  nop
    ctx->pc = 0x2be180u;
    // NOP
label_2be184:
    // 0x2be184: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2be188:
    if (ctx->pc == 0x2BE188u) {
        ctx->pc = 0x2BE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE184u;
        // 0x2be188: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE18Cu;
        goto label_2be18c;
    }
    ctx->pc = 0x2BE184u;
    {
        const bool branch_taken_0x2be184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE184u;
        // 0x2be188: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be184) {
            ctx->pc = 0x2BE1B4u;
            goto label_2be1b4;
        }
    }
    ctx->pc = 0x2BE18Cu;
label_2be18c:
    // 0x2be18c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2be18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2be190:
    // 0x2be190: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2be190u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be194:
    // 0x2be194: 0x0  nop
    ctx->pc = 0x2be194u;
    // NOP
label_2be198:
    // 0x2be198: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2be19c:
    if (ctx->pc == 0x2BE19Cu) {
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE198u;
        // 0x2be19c: 0xc7a1002c  lwc1        $f1, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1A0u;
        goto label_2be1a0;
    }
    ctx->pc = 0x2BE198u;
    {
        const bool branch_taken_0x2be198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE198u;
        // 0x2be19c: 0xc7a1002c  lwc1        $f1, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be198) {
            ctx->pc = 0x2BE1B4u;
            goto label_2be1b4;
        }
    }
    ctx->pc = 0x2BE1A0u;
label_2be1a0:
    // 0x2be1a0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2be1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2be1a4:
    // 0x2be1a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2be1a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be1a8:
    // 0x2be1a8: 0x0  nop
    ctx->pc = 0x2be1a8u;
    // NOP
label_2be1ac:
    // 0x2be1ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2be1b0:
    if (ctx->pc == 0x2BE1B0u) {
        ctx->pc = 0x2BE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1ACu;
        // 0x2be1b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1B4u;
        goto label_2be1b4;
    }
    ctx->pc = 0x2BE1ACu;
    {
        const bool branch_taken_0x2be1ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be1ac) {
            ctx->pc = 0x2BE1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE1ACu;
            // 0x2be1b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE1B4u;
            goto label_2be1b4;
        }
    }
    ctx->pc = 0x2BE1B4u;
label_2be1b4:
    // 0x2be1b4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2be1b8:
    // 0x2be1b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2be1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2be1bc:
    // 0x2be1bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2be1c0:
    if (ctx->pc == 0x2BE1C0u) {
        ctx->pc = 0x2BE1C4u;
        goto label_2be1c4;
    }
    ctx->pc = 0x2BE1BCu;
    {
        const bool branch_taken_0x2be1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be1bc) {
            ctx->pc = 0x2BE1CCu;
            goto label_2be1cc;
        }
    }
    ctx->pc = 0x2BE1C4u;
label_2be1c4:
    // 0x2be1c4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2be1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2be1c8:
    // 0x2be1c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2be1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2be1cc:
    // 0x2be1cc: 0xc0a367c  jal         func_28D9F0
label_2be1d0:
    if (ctx->pc == 0x2BE1D0u) {
        ctx->pc = 0x2BE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1CCu;
        // 0x2be1d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1D4u;
        goto label_2be1d4;
    }
    ctx->pc = 0x2BE1CCu;
    SET_GPR_U32(ctx, 31, 0x2BE1D4u);
    ctx->pc = 0x2BE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1CCu;
    // 0x2be1d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BE1CCu, 0x2BE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1D4u;
label_2be1d4:
    // 0x2be1d4: 0x504000de  beql        $v0, $zero, . + 4 + (0xDE << 2)
label_2be1d8:
    if (ctx->pc == 0x2BE1D8u) {
        ctx->pc = 0x2BE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1D4u;
        // 0x2be1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1DCu;
        goto label_2be1dc;
    }
    ctx->pc = 0x2BE1D4u;
    {
        const bool branch_taken_0x2be1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be1d4) {
            ctx->pc = 0x2BE1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE1D4u;
            // 0x2be1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE1DCu;
label_2be1dc:
    // 0x2be1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2be1e0:
    // 0x2be1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be1e4:
    // 0x2be1e4: 0x0  nop
    ctx->pc = 0x2be1e4u;
    // NOP
label_2be1e8:
    // 0x2be1e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2be1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be1ec:
    // 0x2be1ec: 0x0  nop
    ctx->pc = 0x2be1ecu;
    // NOP
label_2be1f0:
    // 0x2be1f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2be1f4:
    if (ctx->pc == 0x2BE1F4u) {
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1F8u;
        goto label_2be1f8;
    }
    ctx->pc = 0x2BE1F0u;
    {
        const bool branch_taken_0x2be1f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f0) {
            ctx->pc = 0x2BE1FCu;
            goto label_2be1fc;
        }
    }
    ctx->pc = 0x2BE1F8u;
label_2be1f8:
    // 0x2be1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2be1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be1fc:
    // 0x2be1fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2be1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be200:
    // 0x2be200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be204:
    // 0x2be204: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2be204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2be208:
    // 0x2be208: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2be208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2be20c:
    // 0x2be20c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be20cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2be210:
    // 0x2be210: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2be210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be214:
    // 0x2be214: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2be214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be218:
    // 0x2be218: 0xc0bee7a  jal         func_2FB9E8
label_2be21c:
    if (ctx->pc == 0x2BE21Cu) {
        ctx->pc = 0x2BE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE218u;
        // 0x2be21c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE220u;
        goto label_2be220;
    }
    ctx->pc = 0x2BE218u;
    SET_GPR_U32(ctx, 31, 0x2BE220u);
    ctx->pc = 0x2BE21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE218u;
    // 0x2be21c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BE218u, 0x2BE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE220u;
label_2be220:
    // 0x2be220: 0x100000cb  b           . + 4 + (0xCB << 2)
label_2be224:
    if (ctx->pc == 0x2BE224u) {
        ctx->pc = 0x2BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE220u;
        // 0x2be224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE228u;
        goto label_2be228;
    }
    ctx->pc = 0x2BE220u;
    {
        const bool branch_taken_0x2be220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE220u;
        // 0x2be224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be220) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE228u;
label_2be228:
    // 0x2be228: 0xc08bfbc  jal         func_22FEF0
label_2be22c:
    if (ctx->pc == 0x2BE22Cu) {
        ctx->pc = 0x2BE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE228u;
        // 0x2be22c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE230u;
        goto label_2be230;
    }
    ctx->pc = 0x2BE228u;
    SET_GPR_U32(ctx, 31, 0x2BE230u);
    ctx->pc = 0x2BE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE228u;
    // 0x2be22c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BE228u, 0x2BE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE230u;
label_2be230:
    // 0x2be230: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2be230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be234:
    // 0x2be234: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2be234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2be238:
    // 0x2be238: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2be23c:
    if (ctx->pc == 0x2BE23Cu) {
        ctx->pc = 0x2BE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE238u;
        // 0x2be23c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE240u;
        goto label_2be240;
    }
    ctx->pc = 0x2BE238u;
    {
        const bool branch_taken_0x2be238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be238) {
            ctx->pc = 0x2BE23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE238u;
            // 0x2be23c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE240u;
            goto label_2be240;
        }
    }
    ctx->pc = 0x2BE240u;
label_2be240:
    // 0x2be240: 0xc0a4e54  jal         func_293950
label_2be244:
    if (ctx->pc == 0x2BE244u) {
        ctx->pc = 0x2BE248u;
        goto label_2be248;
    }
    ctx->pc = 0x2BE240u;
    SET_GPR_U32(ctx, 31, 0x2BE248u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BE240u, 0x2BE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE248u;
label_2be248:
    // 0x2be248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be24c:
    // 0x2be24c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2be250:
    if (ctx->pc == 0x2BE250u) {
        ctx->pc = 0x2BE254u;
        goto label_2be254;
    }
    ctx->pc = 0x2BE24Cu;
    {
        const bool branch_taken_0x2be24c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be24c) {
            ctx->pc = 0x2BE27Cu;
            goto label_2be27c;
        }
    }
    ctx->pc = 0x2BE254u;
label_2be254:
    // 0x2be254: 0xc087502  jal         func_21D408
label_2be258:
    if (ctx->pc == 0x2BE258u) {
        ctx->pc = 0x2BE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE254u;
        // 0x2be258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE25Cu;
        goto label_2be25c;
    }
    ctx->pc = 0x2BE254u;
    SET_GPR_U32(ctx, 31, 0x2BE25Cu);
    ctx->pc = 0x2BE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE254u;
    // 0x2be258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE254u, 0x2BE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE25Cu;
label_2be25c:
    // 0x2be25c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2be25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2be260:
    // 0x2be260: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be264:
    // 0x2be264: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2be264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2be268:
    // 0x2be268: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be26c:
    // 0x2be26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be270:
    // 0x2be270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be274:
    // 0x2be274: 0xc0b7eea  jal         func_2DFBA8
label_2be278:
    if (ctx->pc == 0x2BE278u) {
        ctx->pc = 0x2BE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE274u;
        // 0x2be278: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE27Cu;
        goto label_2be27c;
    }
    ctx->pc = 0x2BE274u;
    SET_GPR_U32(ctx, 31, 0x2BE27Cu);
    ctx->pc = 0x2BE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE274u;
    // 0x2be278: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2BE274u, 0x2BE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE27Cu;
label_2be27c:
    // 0x2be27c: 0xc087502  jal         func_21D408
label_2be280:
    if (ctx->pc == 0x2BE280u) {
        ctx->pc = 0x2BE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE27Cu;
        // 0x2be280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE284u;
        goto label_2be284;
    }
    ctx->pc = 0x2BE27Cu;
    SET_GPR_U32(ctx, 31, 0x2BE284u);
    ctx->pc = 0x2BE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE27Cu;
    // 0x2be280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE27Cu, 0x2BE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE284u;
label_2be284:
    // 0x2be284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be288:
    // 0x2be288: 0xc0a35d6  jal         func_28D758
label_2be28c:
    if (ctx->pc == 0x2BE28Cu) {
        ctx->pc = 0x2BE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE288u;
        // 0x2be28c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE290u;
        goto label_2be290;
    }
    ctx->pc = 0x2BE288u;
    SET_GPR_U32(ctx, 31, 0x2BE290u);
    ctx->pc = 0x2BE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE288u;
    // 0x2be28c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BE288u, 0x2BE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE290u;
label_2be290:
    // 0x2be290: 0x100000af  b           . + 4 + (0xAF << 2)
label_2be294:
    if (ctx->pc == 0x2BE294u) {
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE298u;
        goto label_2be298;
    }
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE298u;
label_2be298:
    // 0x2be298: 0x1612008e  bne         $s0, $s2, . + 4 + (0x8E << 2)
label_2be29c:
    if (ctx->pc == 0x2BE29Cu) {
        ctx->pc = 0x2BE2A0u;
        goto label_2be2a0;
    }
    ctx->pc = 0x2BE298u;
    {
        const bool branch_taken_0x2be298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2be298) {
            ctx->pc = 0x2BE4D4u;
            goto label_2be4d4;
        }
    }
    ctx->pc = 0x2BE2A0u;
label_2be2a0:
    // 0x2be2a0: 0xc08bfa0  jal         func_22FE80
label_2be2a4:
    if (ctx->pc == 0x2BE2A4u) {
        ctx->pc = 0x2BE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2A0u;
        // 0x2be2a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2A8u;
        goto label_2be2a8;
    }
    ctx->pc = 0x2BE2A0u;
    SET_GPR_U32(ctx, 31, 0x2BE2A8u);
    ctx->pc = 0x2BE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2A0u;
    // 0x2be2a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BE2A0u, 0x2BE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2A8u;
label_2be2a8:
    // 0x2be2a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be2ac:
    // 0x2be2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be2b0:
    // 0x2be2b0: 0xc0a33f8  jal         func_28CFE0
label_2be2b4:
    if (ctx->pc == 0x2BE2B4u) {
        ctx->pc = 0x2BE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2B0u;
        // 0x2be2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2B8u;
        goto label_2be2b8;
    }
    ctx->pc = 0x2BE2B0u;
    SET_GPR_U32(ctx, 31, 0x2BE2B8u);
    ctx->pc = 0x2BE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2B0u;
    // 0x2be2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BE2B0u, 0x2BE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2B8u;
label_2be2b8:
    // 0x2be2b8: 0xc0af564  jal         func_2BD590
label_2be2bc:
    if (ctx->pc == 0x2BE2BCu) {
        ctx->pc = 0x2BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2B8u;
        // 0x2be2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2C0u;
        goto label_2be2c0;
    }
    ctx->pc = 0x2BE2B8u;
    SET_GPR_U32(ctx, 31, 0x2BE2C0u);
    ctx->pc = 0x2BE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2B8u;
    // 0x2be2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD590u, 0x2BE2B8u, 0x2BE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2C0u;
label_2be2c0:
    // 0x2be2c0: 0x105200a2  beq         $v0, $s2, . + 4 + (0xA2 << 2)
label_2be2c4:
    if (ctx->pc == 0x2BE2C4u) {
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2C8u;
        goto label_2be2c8;
    }
    ctx->pc = 0x2BE2C0u;
    {
        const bool branch_taken_0x2be2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2c0) {
            ctx->pc = 0x2BE54Cu;
            goto label_2be54c;
        }
    }
    ctx->pc = 0x2BE2C8u;
label_2be2c8:
    // 0x2be2c8: 0xc0af460  jal         func_2BD180
label_2be2cc:
    if (ctx->pc == 0x2BE2CCu) {
        ctx->pc = 0x2BE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C8u;
        // 0x2be2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2D0u;
        goto label_2be2d0;
    }
    ctx->pc = 0x2BE2C8u;
    SET_GPR_U32(ctx, 31, 0x2BE2D0u);
    ctx->pc = 0x2BE2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2C8u;
    // 0x2be2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD180u, 0x2BE2C8u, 0x2BE2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2D0u;
label_2be2d0:
    // 0x2be2d0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2be2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2be2d4:
    // 0x2be2d4: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2be2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2be2d8:
    // 0x2be2d8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_2be2dc:
    if (ctx->pc == 0x2BE2DCu) {
        ctx->pc = 0x2BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2D8u;
        // 0x2be2dc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2E0u;
        goto label_2be2e0;
    }
    ctx->pc = 0x2BE2D8u;
    {
        const bool branch_taken_0x2be2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2D8u;
        // 0x2be2dc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2d8) {
            ctx->pc = 0x2BE43Cu;
            goto label_2be43c;
        }
    }
    ctx->pc = 0x2BE2E0u;
label_2be2e0:
    // 0x2be2e0: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x2be2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2be2e4:
    // 0x2be2e4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2be2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2be2e8:
    // 0x2be2e8: 0xc0cd4fc  jal         func_3353F0
label_2be2ec:
    if (ctx->pc == 0x2BE2ECu) {
        ctx->pc = 0x2BE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2E8u;
        // 0x2be2ec: 0x24060dac  addiu       $a2, $zero, 0xDAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2F0u;
        goto label_2be2f0;
    }
    ctx->pc = 0x2BE2E8u;
    SET_GPR_U32(ctx, 31, 0x2BE2F0u);
    ctx->pc = 0x2BE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2E8u;
    // 0x2be2ec: 0x24060dac  addiu       $a2, $zero, 0xDAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BE2E8u, 0x2BE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2F0u;
label_2be2f0:
    // 0x2be2f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2be2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2be2f4:
    // 0x2be2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be2f8:
    // 0x2be2f8: 0xc08a01c  jal         func_228070
label_2be2fc:
    if (ctx->pc == 0x2BE2FCu) {
        ctx->pc = 0x2BE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2F8u;
        // 0x2be2fc: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE300u;
        goto label_2be300;
    }
    ctx->pc = 0x2BE2F8u;
    SET_GPR_U32(ctx, 31, 0x2BE300u);
    ctx->pc = 0x2BE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2F8u;
    // 0x2be2fc: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2BE2F8u, 0x2BE300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE300u;
label_2be300:
    // 0x2be300: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_2be304:
    if (ctx->pc == 0x2BE304u) {
        ctx->pc = 0x2BE304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE300u;
        // 0x2be304: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE308u;
        goto label_2be308;
    }
    ctx->pc = 0x2BE300u;
    {
        const bool branch_taken_0x2be300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be300) {
            ctx->pc = 0x2BE304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE300u;
            // 0x2be304: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE440u;
            goto label_2be440;
        }
    }
    ctx->pc = 0x2BE308u;
label_2be308:
    // 0x2be308: 0xc0a47b4  jal         func_291ED0
label_2be30c:
    if (ctx->pc == 0x2BE30Cu) {
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE308u;
        // 0x2be30c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE310u;
        goto label_2be310;
    }
    ctx->pc = 0x2BE308u;
    SET_GPR_U32(ctx, 31, 0x2BE310u);
    ctx->pc = 0x2BE30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE308u;
    // 0x2be30c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2BE308u, 0x2BE310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE310u;
label_2be310:
    // 0x2be310: 0x5452004b  bnel        $v0, $s2, . + 4 + (0x4B << 2)
label_2be314:
    if (ctx->pc == 0x2BE314u) {
        ctx->pc = 0x2BE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE310u;
        // 0x2be314: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE318u;
        goto label_2be318;
    }
    ctx->pc = 0x2BE310u;
    {
        const bool branch_taken_0x2be310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2be310) {
            ctx->pc = 0x2BE314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE310u;
            // 0x2be314: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE440u;
            goto label_2be440;
        }
    }
    ctx->pc = 0x2BE318u;
label_2be318:
    // 0x2be318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be31c:
    // 0x2be31c: 0xc087502  jal         func_21D408
label_2be320:
    if (ctx->pc == 0x2BE320u) {
        ctx->pc = 0x2BE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE31Cu;
        // 0x2be320: 0x2410004f  addiu       $s0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE324u;
        goto label_2be324;
    }
    ctx->pc = 0x2BE31Cu;
    SET_GPR_U32(ctx, 31, 0x2BE324u);
    ctx->pc = 0x2BE320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE31Cu;
    // 0x2be320: 0x2410004f  addiu       $s0, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE31Cu, 0x2BE324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE324u;
label_2be324:
    // 0x2be324: 0xc0e409a  jal         func_390268
label_2be328:
    if (ctx->pc == 0x2BE328u) {
        ctx->pc = 0x2BE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE324u;
        // 0x2be328: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE32Cu;
        goto label_2be32c;
    }
    ctx->pc = 0x2BE324u;
    SET_GPR_U32(ctx, 31, 0x2BE32Cu);
    ctx->pc = 0x2BE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE324u;
    // 0x2be328: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BE324u, 0x2BE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE32Cu;
label_2be32c:
    // 0x2be32c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2be330:
    if (ctx->pc == 0x2BE330u) {
        ctx->pc = 0x2BE334u;
        goto label_2be334;
    }
    ctx->pc = 0x2BE32Cu;
    {
        const bool branch_taken_0x2be32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be32c) {
            ctx->pc = 0x2BE34Cu;
            goto label_2be34c;
        }
    }
    ctx->pc = 0x2BE334u;
label_2be334:
    // 0x2be334: 0xc087502  jal         func_21D408
label_2be338:
    if (ctx->pc == 0x2BE338u) {
        ctx->pc = 0x2BE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE334u;
        // 0x2be338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE33Cu;
        goto label_2be33c;
    }
    ctx->pc = 0x2BE334u;
    SET_GPR_U32(ctx, 31, 0x2BE33Cu);
    ctx->pc = 0x2BE338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE334u;
    // 0x2be338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE334u, 0x2BE33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE33Cu;
label_2be33c:
    // 0x2be33c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2be33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2be340:
    // 0x2be340: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x2be340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_2be344:
    // 0x2be344: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2be344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2be348:
    // 0x2be348: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2be348u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2be34c:
    // 0x2be34c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2be350:
    // 0x2be350: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2be350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2be354:
    // 0x2be354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2be354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2be358:
    // 0x2be358: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2be358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2be35c:
    // 0x2be35c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be360:
    // 0x2be360: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2be360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be364:
    // 0x2be364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2be364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be368:
    // 0x2be368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be36c:
    // 0x2be36c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be36cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2be370:
    // 0x2be370: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be374:
    // 0x2be374: 0xc088178  jal         func_2205E0
label_2be378:
    if (ctx->pc == 0x2BE378u) {
        ctx->pc = 0x2BE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE374u;
        // 0x2be378: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE37Cu;
        goto label_2be37c;
    }
    ctx->pc = 0x2BE374u;
    SET_GPR_U32(ctx, 31, 0x2BE37Cu);
    ctx->pc = 0x2BE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE374u;
    // 0x2be378: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2BE374u, 0x2BE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE37Cu;
label_2be37c:
    // 0x2be37c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2be37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be380:
    // 0x2be380: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2be380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2be384:
    // 0x2be384: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2be384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2be388:
    // 0x2be388: 0x84700002  lh          $s0, 0x2($v1)
    ctx->pc = 0x2be388u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2be38c:
    // 0x2be38c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2be38cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2be390:
    // 0x2be390: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2be390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2be394:
    // 0x2be394: 0xc0cd8c2  jal         func_336308
label_2be398:
    if (ctx->pc == 0x2BE398u) {
        ctx->pc = 0x2BE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE394u;
        // 0x2be398: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE39Cu;
        goto label_2be39c;
    }
    ctx->pc = 0x2BE394u;
    SET_GPR_U32(ctx, 31, 0x2BE39Cu);
    ctx->pc = 0x2BE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE394u;
    // 0x2be398: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2BE394u, 0x2BE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE39Cu;
label_2be39c:
    // 0x2be39c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2be39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2be3a0:
    // 0x2be3a0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2be3a4:
    // 0x2be3a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2be3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2be3a8:
    // 0x2be3a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be3ac:
    // 0x2be3ac: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2be3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_2be3b0:
    // 0x2be3b0: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x2be3b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2be3b4:
    // 0x2be3b4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2be3b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2be3b8:
    // 0x2be3b8: 0x26840284  addiu       $a0, $s4, 0x284
    ctx->pc = 0x2be3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 644));
label_2be3bc:
    // 0x2be3bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2be3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2be3c0:
    // 0x2be3c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be3c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2be3c4:
    // 0x2be3c4: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2be3c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2be3c8:
    // 0x2be3c8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2be3c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2be3cc:
    // 0x2be3cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2be3ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2be3d0:
    // 0x2be3d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2be3d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2be3d4:
    // 0x2be3d4: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x2be3d4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
label_2be3d8:
    // 0x2be3d8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2be3d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2be3dc:
    // 0x2be3dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2be3dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2be3e0:
    // 0x2be3e0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2be3e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2be3e4:
    // 0x2be3e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2be3e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2be3e8:
    // 0x2be3e8: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2be3e8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_2be3ec:
    // 0x2be3ec: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x2be3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
label_2be3f0:
    // 0x2be3f0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2be3f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2be3f4:
    // 0x2be3f4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2be3f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2be3f8:
    // 0x2be3f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2be3f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2be3fc:
    // 0x2be3fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2be3fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2be400:
    // 0x2be400: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2be400u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2be404:
    // 0x2be404: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x2be404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
label_2be408:
    // 0x2be408: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x2be408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_2be40c:
    // 0x2be40c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2be40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2be410:
    // 0x2be410: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x2be410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_2be414:
    // 0x2be414: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2be414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2be418:
    // 0x2be418: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2be418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2be41c:
    // 0x2be41c: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2be41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2be420:
    // 0x2be420: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2be420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2be424:
    // 0x2be424: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2be424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2be428:
    // 0x2be428: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x2be428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
label_2be42c:
    // 0x2be42c: 0xc0a67ca  jal         func_299F28
label_2be430:
    if (ctx->pc == 0x2BE430u) {
        ctx->pc = 0x2BE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE42Cu;
        // 0x2be430: 0x7fa80060  sq          $t0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE434u;
        goto label_2be434;
    }
    ctx->pc = 0x2BE42Cu;
    SET_GPR_U32(ctx, 31, 0x2BE434u);
    ctx->pc = 0x2BE430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE42Cu;
    // 0x2be430: 0x7fa80060  sq          $t0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2BE42Cu, 0x2BE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE434u;
label_2be434:
    // 0x2be434: 0x10000045  b           . + 4 + (0x45 << 2)
label_2be438:
    if (ctx->pc == 0x2BE438u) {
        ctx->pc = 0x2BE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE434u;
        // 0x2be438: 0xa2320030  sb          $s2, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE43Cu;
        goto label_2be43c;
    }
    ctx->pc = 0x2BE434u;
    {
        const bool branch_taken_0x2be434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE434u;
        // 0x2be438: 0xa2320030  sb          $s2, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be434) {
            ctx->pc = 0x2BE54Cu;
            goto label_2be54c;
        }
    }
    ctx->pc = 0x2BE43Cu;
label_2be43c:
    // 0x2be43c: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2be43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
label_2be440:
    // 0x2be440: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2be440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2be444:
    // 0x2be444: 0xc043d5e  jal         func_10F578
label_2be448:
    if (ctx->pc == 0x2BE448u) {
        ctx->pc = 0x2BE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE444u;
        // 0x2be448: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE44Cu;
        goto label_2be44c;
    }
    ctx->pc = 0x2BE444u;
    SET_GPR_U32(ctx, 31, 0x2BE44Cu);
    ctx->pc = 0x2BE448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE444u;
    // 0x2be448: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2BE444u, 0x2BE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE44Cu;
label_2be44c:
    // 0x2be44c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_2be450:
    if (ctx->pc == 0x2BE450u) {
        ctx->pc = 0x2BE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE44Cu;
        // 0x2be450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE454u;
        goto label_2be454;
    }
    ctx->pc = 0x2BE44Cu;
    {
        const bool branch_taken_0x2be44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE44Cu;
        // 0x2be450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be44c) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE454u;
label_2be454:
    // 0x2be454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2be454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be458:
    // 0x2be458: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x2be458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
label_2be45c:
    // 0x2be45c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2be460:
    // 0x2be460: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2be464:
    if (ctx->pc == 0x2BE464u) {
        ctx->pc = 0x2BE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE460u;
        // 0x2be464: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE468u;
        goto label_2be468;
    }
    ctx->pc = 0x2BE460u;
    {
        const bool branch_taken_0x2be460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be460) {
            ctx->pc = 0x2BE464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE460u;
            // 0x2be464: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE468u;
            goto label_2be468;
        }
    }
    ctx->pc = 0x2BE468u;
label_2be468:
    // 0x2be468: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2be468u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2be46c:
    // 0x2be46c: 0x1810  mfhi        $v1
    ctx->pc = 0x2be46cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2be470:
    // 0x2be470: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_2be474:
    if (ctx->pc == 0x2BE474u) {
        ctx->pc = 0x2BE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE470u;
        // 0x2be474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE478u;
        goto label_2be478;
    }
    ctx->pc = 0x2BE470u;
    {
        const bool branch_taken_0x2be470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE470u;
        // 0x2be474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be470) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE478u;
label_2be478:
    // 0x2be478: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2be47c:
    // 0x2be47c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be480:
    // 0x2be480: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2be480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2be484:
    // 0x2be484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2be488:
    // 0x2be488: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2be48c:
    // 0x2be48c: 0xc0cd508  jal         func_335420
label_2be490:
    if (ctx->pc == 0x2BE490u) {
        ctx->pc = 0x2BE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE48Cu;
        // 0x2be490: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE494u;
        goto label_2be494;
    }
    ctx->pc = 0x2BE48Cu;
    SET_GPR_U32(ctx, 31, 0x2BE494u);
    ctx->pc = 0x2BE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE48Cu;
    // 0x2be490: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2BE48Cu, 0x2BE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE494u;
label_2be494:
    // 0x2be494: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x2be494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
label_2be498:
    // 0x2be498: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2be498u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2be49c:
    // 0x2be49c: 0x3c014205  lui         $at, 0x4205
    ctx->pc = 0x2be49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16901 << 16));
label_2be4a0:
    // 0x2be4a0: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x2be4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_2be4a4:
    // 0x2be4a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be4a8:
    // 0x2be4a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2be4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be4ac:
    // 0x2be4ac: 0x0  nop
    ctx->pc = 0x2be4acu;
    // NOP
label_2be4b0:
    // 0x2be4b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2be4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2be4b4:
    // 0x2be4b4: 0xc10b1c6  jal         func_42C718
label_2be4b8:
    if (ctx->pc == 0x2BE4B8u) {
        ctx->pc = 0x2BE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4B4u;
        // 0x2be4b8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4BCu;
        goto label_2be4bc;
    }
    ctx->pc = 0x2BE4B4u;
    SET_GPR_U32(ctx, 31, 0x2BE4BCu);
    ctx->pc = 0x2BE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4B4u;
    // 0x2be4b8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2BE4B4u, 0x2BE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4BCu;
label_2be4bc:
    // 0x2be4bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2be4c0:
    // 0x2be4c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be4c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2be4c4:
    // 0x2be4c4: 0xc08c734  jal         func_231CD0
label_2be4c8:
    if (ctx->pc == 0x2BE4C8u) {
        ctx->pc = 0x2BE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4C4u;
        // 0x2be4c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4CCu;
        goto label_2be4cc;
    }
    ctx->pc = 0x2BE4C4u;
    SET_GPR_U32(ctx, 31, 0x2BE4CCu);
    ctx->pc = 0x2BE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4C4u;
    // 0x2be4c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CD0u, 0x2BE4C4u, 0x2BE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4CCu;
label_2be4cc:
    // 0x2be4cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_2be4d0:
    if (ctx->pc == 0x2BE4D0u) {
        ctx->pc = 0x2BE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4CCu;
        // 0x2be4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4D4u;
        goto label_2be4d4;
    }
    ctx->pc = 0x2BE4CCu;
    {
        const bool branch_taken_0x2be4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4CCu;
        // 0x2be4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4cc) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE4D4u;
label_2be4d4:
    // 0x2be4d4: 0xc08a0d0  jal         func_228340
label_2be4d8:
    if (ctx->pc == 0x2BE4D8u) {
        ctx->pc = 0x2BE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4D4u;
        // 0x2be4d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4DCu;
        goto label_2be4dc;
    }
    ctx->pc = 0x2BE4D4u;
    SET_GPR_U32(ctx, 31, 0x2BE4DCu);
    ctx->pc = 0x2BE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4D4u;
    // 0x2be4d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BE4D4u, 0x2BE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4DCu;
label_2be4dc:
    // 0x2be4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be4e0:
    // 0x2be4e0: 0x16120016  bne         $s0, $s2, . + 4 + (0x16 << 2)
label_2be4e4:
    if (ctx->pc == 0x2BE4E4u) {
        ctx->pc = 0x2BE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4E0u;
        // 0x2be4e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4E8u;
        goto label_2be4e8;
    }
    ctx->pc = 0x2BE4E0u;
    {
        const bool branch_taken_0x2be4e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2BE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4E0u;
        // 0x2be4e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4e0) {
            ctx->pc = 0x2BE53Cu;
            goto label_2be53c;
        }
    }
    ctx->pc = 0x2BE4E8u;
label_2be4e8:
    // 0x2be4e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be4ec:
    // 0x2be4ec: 0xc137832  jal         func_4DE0C8
label_2be4f0:
    if (ctx->pc == 0x2BE4F0u) {
        ctx->pc = 0x2BE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4ECu;
        // 0x2be4f0: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4F4u;
        goto label_2be4f4;
    }
    ctx->pc = 0x2BE4ECu;
    SET_GPR_U32(ctx, 31, 0x2BE4F4u);
    ctx->pc = 0x2BE4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4ECu;
    // 0x2be4f0: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BE4ECu, 0x2BE4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4F4u;
label_2be4f4:
    // 0x2be4f4: 0x14500016  bne         $v0, $s0, . + 4 + (0x16 << 2)
label_2be4f8:
    if (ctx->pc == 0x2BE4F8u) {
        ctx->pc = 0x2BE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4F4u;
        // 0x2be4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE4FCu;
        goto label_2be4fc;
    }
    ctx->pc = 0x2BE4F4u;
    {
        const bool branch_taken_0x2be4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4F4u;
        // 0x2be4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4f4) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE4FCu;
label_2be4fc:
    // 0x2be4fc: 0xc0a367c  jal         func_28D9F0
label_2be500:
    if (ctx->pc == 0x2BE500u) {
        ctx->pc = 0x2BE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4FCu;
        // 0x2be500: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE504u;
        goto label_2be504;
    }
    ctx->pc = 0x2BE4FCu;
    SET_GPR_U32(ctx, 31, 0x2BE504u);
    ctx->pc = 0x2BE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4FCu;
    // 0x2be500: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BE4FCu, 0x2BE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE504u;
label_2be504:
    // 0x2be504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2be504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be508:
    // 0x2be508: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_2be50c:
    if (ctx->pc == 0x2BE50Cu) {
        ctx->pc = 0x2BE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE508u;
        // 0x2be50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE510u;
        goto label_2be510;
    }
    ctx->pc = 0x2BE508u;
    {
        const bool branch_taken_0x2be508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE508u;
        // 0x2be50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be508) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE510u;
label_2be510:
    // 0x2be510: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2be514:
    // 0x2be514: 0xc0884f6  jal         func_2213D8
label_2be518:
    if (ctx->pc == 0x2BE518u) {
        ctx->pc = 0x2BE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE514u;
        // 0x2be518: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE51Cu;
        goto label_2be51c;
    }
    ctx->pc = 0x2BE514u;
    SET_GPR_U32(ctx, 31, 0x2BE51Cu);
    ctx->pc = 0x2BE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE514u;
    // 0x2be518: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BE514u, 0x2BE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE51Cu;
label_2be51c:
    // 0x2be51c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2be51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be520:
    // 0x2be520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2be524:
    // 0x2be524: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2be524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be528:
    // 0x2be528: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2be528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2be52c:
    // 0x2be52c: 0xc0bf800  jal         func_2FE000
label_2be530:
    if (ctx->pc == 0x2BE530u) {
        ctx->pc = 0x2BE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE52Cu;
        // 0x2be530: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE534u;
        goto label_2be534;
    }
    ctx->pc = 0x2BE52Cu;
    SET_GPR_U32(ctx, 31, 0x2BE534u);
    ctx->pc = 0x2BE530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE52Cu;
    // 0x2be530: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BE52Cu, 0x2BE534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE534u;
label_2be534:
    // 0x2be534: 0x10000006  b           . + 4 + (0x6 << 2)
label_2be538:
    if (ctx->pc == 0x2BE538u) {
        ctx->pc = 0x2BE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE534u;
        // 0x2be538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE53Cu;
        goto label_2be53c;
    }
    ctx->pc = 0x2BE534u;
    {
        const bool branch_taken_0x2be534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE534u;
        // 0x2be538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be534) {
            ctx->pc = 0x2BE550u;
            goto label_2be550;
        }
    }
    ctx->pc = 0x2BE53Cu;
label_2be53c:
    // 0x2be53c: 0xc0af460  jal         func_2BD180
label_2be540:
    if (ctx->pc == 0x2BE540u) {
        ctx->pc = 0x2BE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE53Cu;
        // 0x2be540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE544u;
        goto label_2be544;
    }
    ctx->pc = 0x2BE53Cu;
    SET_GPR_U32(ctx, 31, 0x2BE544u);
    ctx->pc = 0x2BE540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE53Cu;
    // 0x2be540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD180u, 0x2BE53Cu, 0x2BE544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE544u;
label_2be544:
    // 0x2be544: 0xc0af53c  jal         func_2BD4F0
label_2be548:
    if (ctx->pc == 0x2BE548u) {
        ctx->pc = 0x2BE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE544u;
        // 0x2be548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE54Cu;
        goto label_2be54c;
    }
    ctx->pc = 0x2BE544u;
    SET_GPR_U32(ctx, 31, 0x2BE54Cu);
    ctx->pc = 0x2BE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE544u;
    // 0x2be548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD4F0u, 0x2BE544u, 0x2BE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE54Cu;
label_2be54c:
    // 0x2be54c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be550:
    // 0x2be550: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x2be550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2be554:
    // 0x2be554: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x2be554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2be558:
    // 0x2be558: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x2be558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2be55c:
    // 0x2be55c: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x2be55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2be560:
    // 0x2be560: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x2be560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2be564:
    // 0x2be564: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x2be564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2be568:
    // 0x2be568: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x2be568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2be56c:
    // 0x2be56c: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x2be56cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2be570:
    // 0x2be570: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x2be570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2be574:
    // 0x2be574: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2be574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2be578:
    // 0x2be578: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x2be578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2be57c:
    // 0x2be57c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x2be57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2be580:
    // 0x2be580: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2be580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2be584:
    // 0x2be584: 0x3e00008  jr          $ra
label_2be588:
    if (ctx->pc == 0x2BE588u) {
        ctx->pc = 0x2BE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE584u;
        // 0x2be588: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE58Cu;
        goto label_2be58c;
    }
    ctx->pc = 0x2BE584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE584u;
        // 0x2be588: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE58Cu;
label_2be58c:
    // 0x2be58c: 0x0  nop
    ctx->pc = 0x2be58cu;
    // NOP
    ctx->pc = 0x2be590u;
}
