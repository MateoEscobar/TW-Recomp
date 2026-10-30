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

// Function: sub_002ED718
// Address: 0x2ed718 - 0x2edf20
void sub_002ED718_0x2ed718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED718_0x2ed718");
#endif

    switch (ctx->pc) {
        case 0x2ed718u: goto label_2ed718;
        case 0x2ed71cu: goto label_2ed71c;
        case 0x2ed720u: goto label_2ed720;
        case 0x2ed724u: goto label_2ed724;
        case 0x2ed728u: goto label_2ed728;
        case 0x2ed72cu: goto label_2ed72c;
        case 0x2ed730u: goto label_2ed730;
        case 0x2ed734u: goto label_2ed734;
        case 0x2ed738u: goto label_2ed738;
        case 0x2ed73cu: goto label_2ed73c;
        case 0x2ed740u: goto label_2ed740;
        case 0x2ed744u: goto label_2ed744;
        case 0x2ed748u: goto label_2ed748;
        case 0x2ed74cu: goto label_2ed74c;
        case 0x2ed750u: goto label_2ed750;
        case 0x2ed754u: goto label_2ed754;
        case 0x2ed758u: goto label_2ed758;
        case 0x2ed75cu: goto label_2ed75c;
        case 0x2ed760u: goto label_2ed760;
        case 0x2ed764u: goto label_2ed764;
        case 0x2ed768u: goto label_2ed768;
        case 0x2ed76cu: goto label_2ed76c;
        case 0x2ed770u: goto label_2ed770;
        case 0x2ed774u: goto label_2ed774;
        case 0x2ed778u: goto label_2ed778;
        case 0x2ed77cu: goto label_2ed77c;
        case 0x2ed780u: goto label_2ed780;
        case 0x2ed784u: goto label_2ed784;
        case 0x2ed788u: goto label_2ed788;
        case 0x2ed78cu: goto label_2ed78c;
        case 0x2ed790u: goto label_2ed790;
        case 0x2ed794u: goto label_2ed794;
        case 0x2ed798u: goto label_2ed798;
        case 0x2ed79cu: goto label_2ed79c;
        case 0x2ed7a0u: goto label_2ed7a0;
        case 0x2ed7a4u: goto label_2ed7a4;
        case 0x2ed7a8u: goto label_2ed7a8;
        case 0x2ed7acu: goto label_2ed7ac;
        case 0x2ed7b0u: goto label_2ed7b0;
        case 0x2ed7b4u: goto label_2ed7b4;
        case 0x2ed7b8u: goto label_2ed7b8;
        case 0x2ed7bcu: goto label_2ed7bc;
        case 0x2ed7c0u: goto label_2ed7c0;
        case 0x2ed7c4u: goto label_2ed7c4;
        case 0x2ed7c8u: goto label_2ed7c8;
        case 0x2ed7ccu: goto label_2ed7cc;
        case 0x2ed7d0u: goto label_2ed7d0;
        case 0x2ed7d4u: goto label_2ed7d4;
        case 0x2ed7d8u: goto label_2ed7d8;
        case 0x2ed7dcu: goto label_2ed7dc;
        case 0x2ed7e0u: goto label_2ed7e0;
        case 0x2ed7e4u: goto label_2ed7e4;
        case 0x2ed7e8u: goto label_2ed7e8;
        case 0x2ed7ecu: goto label_2ed7ec;
        case 0x2ed7f0u: goto label_2ed7f0;
        case 0x2ed7f4u: goto label_2ed7f4;
        case 0x2ed7f8u: goto label_2ed7f8;
        case 0x2ed7fcu: goto label_2ed7fc;
        case 0x2ed800u: goto label_2ed800;
        case 0x2ed804u: goto label_2ed804;
        case 0x2ed808u: goto label_2ed808;
        case 0x2ed80cu: goto label_2ed80c;
        case 0x2ed810u: goto label_2ed810;
        case 0x2ed814u: goto label_2ed814;
        case 0x2ed818u: goto label_2ed818;
        case 0x2ed81cu: goto label_2ed81c;
        case 0x2ed820u: goto label_2ed820;
        case 0x2ed824u: goto label_2ed824;
        case 0x2ed828u: goto label_2ed828;
        case 0x2ed82cu: goto label_2ed82c;
        case 0x2ed830u: goto label_2ed830;
        case 0x2ed834u: goto label_2ed834;
        case 0x2ed838u: goto label_2ed838;
        case 0x2ed83cu: goto label_2ed83c;
        case 0x2ed840u: goto label_2ed840;
        case 0x2ed844u: goto label_2ed844;
        case 0x2ed848u: goto label_2ed848;
        case 0x2ed84cu: goto label_2ed84c;
        case 0x2ed850u: goto label_2ed850;
        case 0x2ed854u: goto label_2ed854;
        case 0x2ed858u: goto label_2ed858;
        case 0x2ed85cu: goto label_2ed85c;
        case 0x2ed860u: goto label_2ed860;
        case 0x2ed864u: goto label_2ed864;
        case 0x2ed868u: goto label_2ed868;
        case 0x2ed86cu: goto label_2ed86c;
        case 0x2ed870u: goto label_2ed870;
        case 0x2ed874u: goto label_2ed874;
        case 0x2ed878u: goto label_2ed878;
        case 0x2ed87cu: goto label_2ed87c;
        case 0x2ed880u: goto label_2ed880;
        case 0x2ed884u: goto label_2ed884;
        case 0x2ed888u: goto label_2ed888;
        case 0x2ed88cu: goto label_2ed88c;
        case 0x2ed890u: goto label_2ed890;
        case 0x2ed894u: goto label_2ed894;
        case 0x2ed898u: goto label_2ed898;
        case 0x2ed89cu: goto label_2ed89c;
        case 0x2ed8a0u: goto label_2ed8a0;
        case 0x2ed8a4u: goto label_2ed8a4;
        case 0x2ed8a8u: goto label_2ed8a8;
        case 0x2ed8acu: goto label_2ed8ac;
        case 0x2ed8b0u: goto label_2ed8b0;
        case 0x2ed8b4u: goto label_2ed8b4;
        case 0x2ed8b8u: goto label_2ed8b8;
        case 0x2ed8bcu: goto label_2ed8bc;
        case 0x2ed8c0u: goto label_2ed8c0;
        case 0x2ed8c4u: goto label_2ed8c4;
        case 0x2ed8c8u: goto label_2ed8c8;
        case 0x2ed8ccu: goto label_2ed8cc;
        case 0x2ed8d0u: goto label_2ed8d0;
        case 0x2ed8d4u: goto label_2ed8d4;
        case 0x2ed8d8u: goto label_2ed8d8;
        case 0x2ed8dcu: goto label_2ed8dc;
        case 0x2ed8e0u: goto label_2ed8e0;
        case 0x2ed8e4u: goto label_2ed8e4;
        case 0x2ed8e8u: goto label_2ed8e8;
        case 0x2ed8ecu: goto label_2ed8ec;
        case 0x2ed8f0u: goto label_2ed8f0;
        case 0x2ed8f4u: goto label_2ed8f4;
        case 0x2ed8f8u: goto label_2ed8f8;
        case 0x2ed8fcu: goto label_2ed8fc;
        case 0x2ed900u: goto label_2ed900;
        case 0x2ed904u: goto label_2ed904;
        case 0x2ed908u: goto label_2ed908;
        case 0x2ed90cu: goto label_2ed90c;
        case 0x2ed910u: goto label_2ed910;
        case 0x2ed914u: goto label_2ed914;
        case 0x2ed918u: goto label_2ed918;
        case 0x2ed91cu: goto label_2ed91c;
        case 0x2ed920u: goto label_2ed920;
        case 0x2ed924u: goto label_2ed924;
        case 0x2ed928u: goto label_2ed928;
        case 0x2ed92cu: goto label_2ed92c;
        case 0x2ed930u: goto label_2ed930;
        case 0x2ed934u: goto label_2ed934;
        case 0x2ed938u: goto label_2ed938;
        case 0x2ed93cu: goto label_2ed93c;
        case 0x2ed940u: goto label_2ed940;
        case 0x2ed944u: goto label_2ed944;
        case 0x2ed948u: goto label_2ed948;
        case 0x2ed94cu: goto label_2ed94c;
        case 0x2ed950u: goto label_2ed950;
        case 0x2ed954u: goto label_2ed954;
        case 0x2ed958u: goto label_2ed958;
        case 0x2ed95cu: goto label_2ed95c;
        case 0x2ed960u: goto label_2ed960;
        case 0x2ed964u: goto label_2ed964;
        case 0x2ed968u: goto label_2ed968;
        case 0x2ed96cu: goto label_2ed96c;
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed974u: goto label_2ed974;
        case 0x2ed978u: goto label_2ed978;
        case 0x2ed97cu: goto label_2ed97c;
        case 0x2ed980u: goto label_2ed980;
        case 0x2ed984u: goto label_2ed984;
        case 0x2ed988u: goto label_2ed988;
        case 0x2ed98cu: goto label_2ed98c;
        case 0x2ed990u: goto label_2ed990;
        case 0x2ed994u: goto label_2ed994;
        case 0x2ed998u: goto label_2ed998;
        case 0x2ed99cu: goto label_2ed99c;
        case 0x2ed9a0u: goto label_2ed9a0;
        case 0x2ed9a4u: goto label_2ed9a4;
        case 0x2ed9a8u: goto label_2ed9a8;
        case 0x2ed9acu: goto label_2ed9ac;
        case 0x2ed9b0u: goto label_2ed9b0;
        case 0x2ed9b4u: goto label_2ed9b4;
        case 0x2ed9b8u: goto label_2ed9b8;
        case 0x2ed9bcu: goto label_2ed9bc;
        case 0x2ed9c0u: goto label_2ed9c0;
        case 0x2ed9c4u: goto label_2ed9c4;
        case 0x2ed9c8u: goto label_2ed9c8;
        case 0x2ed9ccu: goto label_2ed9cc;
        case 0x2ed9d0u: goto label_2ed9d0;
        case 0x2ed9d4u: goto label_2ed9d4;
        case 0x2ed9d8u: goto label_2ed9d8;
        case 0x2ed9dcu: goto label_2ed9dc;
        case 0x2ed9e0u: goto label_2ed9e0;
        case 0x2ed9e4u: goto label_2ed9e4;
        case 0x2ed9e8u: goto label_2ed9e8;
        case 0x2ed9ecu: goto label_2ed9ec;
        case 0x2ed9f0u: goto label_2ed9f0;
        case 0x2ed9f4u: goto label_2ed9f4;
        case 0x2ed9f8u: goto label_2ed9f8;
        case 0x2ed9fcu: goto label_2ed9fc;
        case 0x2eda00u: goto label_2eda00;
        case 0x2eda04u: goto label_2eda04;
        case 0x2eda08u: goto label_2eda08;
        case 0x2eda0cu: goto label_2eda0c;
        case 0x2eda10u: goto label_2eda10;
        case 0x2eda14u: goto label_2eda14;
        case 0x2eda18u: goto label_2eda18;
        case 0x2eda1cu: goto label_2eda1c;
        case 0x2eda20u: goto label_2eda20;
        case 0x2eda24u: goto label_2eda24;
        case 0x2eda28u: goto label_2eda28;
        case 0x2eda2cu: goto label_2eda2c;
        case 0x2eda30u: goto label_2eda30;
        case 0x2eda34u: goto label_2eda34;
        case 0x2eda38u: goto label_2eda38;
        case 0x2eda3cu: goto label_2eda3c;
        case 0x2eda40u: goto label_2eda40;
        case 0x2eda44u: goto label_2eda44;
        case 0x2eda48u: goto label_2eda48;
        case 0x2eda4cu: goto label_2eda4c;
        case 0x2eda50u: goto label_2eda50;
        case 0x2eda54u: goto label_2eda54;
        case 0x2eda58u: goto label_2eda58;
        case 0x2eda5cu: goto label_2eda5c;
        case 0x2eda60u: goto label_2eda60;
        case 0x2eda64u: goto label_2eda64;
        case 0x2eda68u: goto label_2eda68;
        case 0x2eda6cu: goto label_2eda6c;
        case 0x2eda70u: goto label_2eda70;
        case 0x2eda74u: goto label_2eda74;
        case 0x2eda78u: goto label_2eda78;
        case 0x2eda7cu: goto label_2eda7c;
        case 0x2eda80u: goto label_2eda80;
        case 0x2eda84u: goto label_2eda84;
        case 0x2eda88u: goto label_2eda88;
        case 0x2eda8cu: goto label_2eda8c;
        case 0x2eda90u: goto label_2eda90;
        case 0x2eda94u: goto label_2eda94;
        case 0x2eda98u: goto label_2eda98;
        case 0x2eda9cu: goto label_2eda9c;
        case 0x2edaa0u: goto label_2edaa0;
        case 0x2edaa4u: goto label_2edaa4;
        case 0x2edaa8u: goto label_2edaa8;
        case 0x2edaacu: goto label_2edaac;
        case 0x2edab0u: goto label_2edab0;
        case 0x2edab4u: goto label_2edab4;
        case 0x2edab8u: goto label_2edab8;
        case 0x2edabcu: goto label_2edabc;
        case 0x2edac0u: goto label_2edac0;
        case 0x2edac4u: goto label_2edac4;
        case 0x2edac8u: goto label_2edac8;
        case 0x2edaccu: goto label_2edacc;
        case 0x2edad0u: goto label_2edad0;
        case 0x2edad4u: goto label_2edad4;
        case 0x2edad8u: goto label_2edad8;
        case 0x2edadcu: goto label_2edadc;
        case 0x2edae0u: goto label_2edae0;
        case 0x2edae4u: goto label_2edae4;
        case 0x2edae8u: goto label_2edae8;
        case 0x2edaecu: goto label_2edaec;
        case 0x2edaf0u: goto label_2edaf0;
        case 0x2edaf4u: goto label_2edaf4;
        case 0x2edaf8u: goto label_2edaf8;
        case 0x2edafcu: goto label_2edafc;
        case 0x2edb00u: goto label_2edb00;
        case 0x2edb04u: goto label_2edb04;
        case 0x2edb08u: goto label_2edb08;
        case 0x2edb0cu: goto label_2edb0c;
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb14u: goto label_2edb14;
        case 0x2edb18u: goto label_2edb18;
        case 0x2edb1cu: goto label_2edb1c;
        case 0x2edb20u: goto label_2edb20;
        case 0x2edb24u: goto label_2edb24;
        case 0x2edb28u: goto label_2edb28;
        case 0x2edb2cu: goto label_2edb2c;
        case 0x2edb30u: goto label_2edb30;
        case 0x2edb34u: goto label_2edb34;
        case 0x2edb38u: goto label_2edb38;
        case 0x2edb3cu: goto label_2edb3c;
        case 0x2edb40u: goto label_2edb40;
        case 0x2edb44u: goto label_2edb44;
        case 0x2edb48u: goto label_2edb48;
        case 0x2edb4cu: goto label_2edb4c;
        case 0x2edb50u: goto label_2edb50;
        case 0x2edb54u: goto label_2edb54;
        case 0x2edb58u: goto label_2edb58;
        case 0x2edb5cu: goto label_2edb5c;
        case 0x2edb60u: goto label_2edb60;
        case 0x2edb64u: goto label_2edb64;
        case 0x2edb68u: goto label_2edb68;
        case 0x2edb6cu: goto label_2edb6c;
        case 0x2edb70u: goto label_2edb70;
        case 0x2edb74u: goto label_2edb74;
        case 0x2edb78u: goto label_2edb78;
        case 0x2edb7cu: goto label_2edb7c;
        case 0x2edb80u: goto label_2edb80;
        case 0x2edb84u: goto label_2edb84;
        case 0x2edb88u: goto label_2edb88;
        case 0x2edb8cu: goto label_2edb8c;
        case 0x2edb90u: goto label_2edb90;
        case 0x2edb94u: goto label_2edb94;
        case 0x2edb98u: goto label_2edb98;
        case 0x2edb9cu: goto label_2edb9c;
        case 0x2edba0u: goto label_2edba0;
        case 0x2edba4u: goto label_2edba4;
        case 0x2edba8u: goto label_2edba8;
        case 0x2edbacu: goto label_2edbac;
        case 0x2edbb0u: goto label_2edbb0;
        case 0x2edbb4u: goto label_2edbb4;
        case 0x2edbb8u: goto label_2edbb8;
        case 0x2edbbcu: goto label_2edbbc;
        case 0x2edbc0u: goto label_2edbc0;
        case 0x2edbc4u: goto label_2edbc4;
        case 0x2edbc8u: goto label_2edbc8;
        case 0x2edbccu: goto label_2edbcc;
        case 0x2edbd0u: goto label_2edbd0;
        case 0x2edbd4u: goto label_2edbd4;
        case 0x2edbd8u: goto label_2edbd8;
        case 0x2edbdcu: goto label_2edbdc;
        case 0x2edbe0u: goto label_2edbe0;
        case 0x2edbe4u: goto label_2edbe4;
        case 0x2edbe8u: goto label_2edbe8;
        case 0x2edbecu: goto label_2edbec;
        case 0x2edbf0u: goto label_2edbf0;
        case 0x2edbf4u: goto label_2edbf4;
        case 0x2edbf8u: goto label_2edbf8;
        case 0x2edbfcu: goto label_2edbfc;
        case 0x2edc00u: goto label_2edc00;
        case 0x2edc04u: goto label_2edc04;
        case 0x2edc08u: goto label_2edc08;
        case 0x2edc0cu: goto label_2edc0c;
        case 0x2edc10u: goto label_2edc10;
        case 0x2edc14u: goto label_2edc14;
        case 0x2edc18u: goto label_2edc18;
        case 0x2edc1cu: goto label_2edc1c;
        case 0x2edc20u: goto label_2edc20;
        case 0x2edc24u: goto label_2edc24;
        case 0x2edc28u: goto label_2edc28;
        case 0x2edc2cu: goto label_2edc2c;
        case 0x2edc30u: goto label_2edc30;
        case 0x2edc34u: goto label_2edc34;
        case 0x2edc38u: goto label_2edc38;
        case 0x2edc3cu: goto label_2edc3c;
        case 0x2edc40u: goto label_2edc40;
        case 0x2edc44u: goto label_2edc44;
        case 0x2edc48u: goto label_2edc48;
        case 0x2edc4cu: goto label_2edc4c;
        case 0x2edc50u: goto label_2edc50;
        case 0x2edc54u: goto label_2edc54;
        case 0x2edc58u: goto label_2edc58;
        case 0x2edc5cu: goto label_2edc5c;
        case 0x2edc60u: goto label_2edc60;
        case 0x2edc64u: goto label_2edc64;
        case 0x2edc68u: goto label_2edc68;
        case 0x2edc6cu: goto label_2edc6c;
        case 0x2edc70u: goto label_2edc70;
        case 0x2edc74u: goto label_2edc74;
        case 0x2edc78u: goto label_2edc78;
        case 0x2edc7cu: goto label_2edc7c;
        case 0x2edc80u: goto label_2edc80;
        case 0x2edc84u: goto label_2edc84;
        case 0x2edc88u: goto label_2edc88;
        case 0x2edc8cu: goto label_2edc8c;
        case 0x2edc90u: goto label_2edc90;
        case 0x2edc94u: goto label_2edc94;
        case 0x2edc98u: goto label_2edc98;
        case 0x2edc9cu: goto label_2edc9c;
        case 0x2edca0u: goto label_2edca0;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edca8u: goto label_2edca8;
        case 0x2edcacu: goto label_2edcac;
        case 0x2edcb0u: goto label_2edcb0;
        case 0x2edcb4u: goto label_2edcb4;
        case 0x2edcb8u: goto label_2edcb8;
        case 0x2edcbcu: goto label_2edcbc;
        case 0x2edcc0u: goto label_2edcc0;
        case 0x2edcc4u: goto label_2edcc4;
        case 0x2edcc8u: goto label_2edcc8;
        case 0x2edcccu: goto label_2edccc;
        case 0x2edcd0u: goto label_2edcd0;
        case 0x2edcd4u: goto label_2edcd4;
        case 0x2edcd8u: goto label_2edcd8;
        case 0x2edcdcu: goto label_2edcdc;
        case 0x2edce0u: goto label_2edce0;
        case 0x2edce4u: goto label_2edce4;
        case 0x2edce8u: goto label_2edce8;
        case 0x2edcecu: goto label_2edcec;
        case 0x2edcf0u: goto label_2edcf0;
        case 0x2edcf4u: goto label_2edcf4;
        case 0x2edcf8u: goto label_2edcf8;
        case 0x2edcfcu: goto label_2edcfc;
        case 0x2edd00u: goto label_2edd00;
        case 0x2edd04u: goto label_2edd04;
        case 0x2edd08u: goto label_2edd08;
        case 0x2edd0cu: goto label_2edd0c;
        case 0x2edd10u: goto label_2edd10;
        case 0x2edd14u: goto label_2edd14;
        case 0x2edd18u: goto label_2edd18;
        case 0x2edd1cu: goto label_2edd1c;
        case 0x2edd20u: goto label_2edd20;
        case 0x2edd24u: goto label_2edd24;
        case 0x2edd28u: goto label_2edd28;
        case 0x2edd2cu: goto label_2edd2c;
        case 0x2edd30u: goto label_2edd30;
        case 0x2edd34u: goto label_2edd34;
        case 0x2edd38u: goto label_2edd38;
        case 0x2edd3cu: goto label_2edd3c;
        case 0x2edd40u: goto label_2edd40;
        case 0x2edd44u: goto label_2edd44;
        case 0x2edd48u: goto label_2edd48;
        case 0x2edd4cu: goto label_2edd4c;
        case 0x2edd50u: goto label_2edd50;
        case 0x2edd54u: goto label_2edd54;
        case 0x2edd58u: goto label_2edd58;
        case 0x2edd5cu: goto label_2edd5c;
        case 0x2edd60u: goto label_2edd60;
        case 0x2edd64u: goto label_2edd64;
        case 0x2edd68u: goto label_2edd68;
        case 0x2edd6cu: goto label_2edd6c;
        case 0x2edd70u: goto label_2edd70;
        case 0x2edd74u: goto label_2edd74;
        case 0x2edd78u: goto label_2edd78;
        case 0x2edd7cu: goto label_2edd7c;
        case 0x2edd80u: goto label_2edd80;
        case 0x2edd84u: goto label_2edd84;
        case 0x2edd88u: goto label_2edd88;
        case 0x2edd8cu: goto label_2edd8c;
        case 0x2edd90u: goto label_2edd90;
        case 0x2edd94u: goto label_2edd94;
        case 0x2edd98u: goto label_2edd98;
        case 0x2edd9cu: goto label_2edd9c;
        case 0x2edda0u: goto label_2edda0;
        case 0x2edda4u: goto label_2edda4;
        case 0x2edda8u: goto label_2edda8;
        case 0x2eddacu: goto label_2eddac;
        case 0x2eddb0u: goto label_2eddb0;
        case 0x2eddb4u: goto label_2eddb4;
        case 0x2eddb8u: goto label_2eddb8;
        case 0x2eddbcu: goto label_2eddbc;
        case 0x2eddc0u: goto label_2eddc0;
        case 0x2eddc4u: goto label_2eddc4;
        case 0x2eddc8u: goto label_2eddc8;
        case 0x2eddccu: goto label_2eddcc;
        case 0x2eddd0u: goto label_2eddd0;
        case 0x2eddd4u: goto label_2eddd4;
        case 0x2eddd8u: goto label_2eddd8;
        case 0x2edddcu: goto label_2edddc;
        case 0x2edde0u: goto label_2edde0;
        case 0x2edde4u: goto label_2edde4;
        case 0x2edde8u: goto label_2edde8;
        case 0x2eddecu: goto label_2eddec;
        case 0x2eddf0u: goto label_2eddf0;
        case 0x2eddf4u: goto label_2eddf4;
        case 0x2eddf8u: goto label_2eddf8;
        case 0x2eddfcu: goto label_2eddfc;
        case 0x2ede00u: goto label_2ede00;
        case 0x2ede04u: goto label_2ede04;
        case 0x2ede08u: goto label_2ede08;
        case 0x2ede0cu: goto label_2ede0c;
        case 0x2ede10u: goto label_2ede10;
        case 0x2ede14u: goto label_2ede14;
        case 0x2ede18u: goto label_2ede18;
        case 0x2ede1cu: goto label_2ede1c;
        case 0x2ede20u: goto label_2ede20;
        case 0x2ede24u: goto label_2ede24;
        case 0x2ede28u: goto label_2ede28;
        case 0x2ede2cu: goto label_2ede2c;
        case 0x2ede30u: goto label_2ede30;
        case 0x2ede34u: goto label_2ede34;
        case 0x2ede38u: goto label_2ede38;
        case 0x2ede3cu: goto label_2ede3c;
        case 0x2ede40u: goto label_2ede40;
        case 0x2ede44u: goto label_2ede44;
        case 0x2ede48u: goto label_2ede48;
        case 0x2ede4cu: goto label_2ede4c;
        case 0x2ede50u: goto label_2ede50;
        case 0x2ede54u: goto label_2ede54;
        case 0x2ede58u: goto label_2ede58;
        case 0x2ede5cu: goto label_2ede5c;
        case 0x2ede60u: goto label_2ede60;
        case 0x2ede64u: goto label_2ede64;
        case 0x2ede68u: goto label_2ede68;
        case 0x2ede6cu: goto label_2ede6c;
        case 0x2ede70u: goto label_2ede70;
        case 0x2ede74u: goto label_2ede74;
        case 0x2ede78u: goto label_2ede78;
        case 0x2ede7cu: goto label_2ede7c;
        case 0x2ede80u: goto label_2ede80;
        case 0x2ede84u: goto label_2ede84;
        case 0x2ede88u: goto label_2ede88;
        case 0x2ede8cu: goto label_2ede8c;
        case 0x2ede90u: goto label_2ede90;
        case 0x2ede94u: goto label_2ede94;
        case 0x2ede98u: goto label_2ede98;
        case 0x2ede9cu: goto label_2ede9c;
        case 0x2edea0u: goto label_2edea0;
        case 0x2edea4u: goto label_2edea4;
        case 0x2edea8u: goto label_2edea8;
        case 0x2edeacu: goto label_2edeac;
        case 0x2edeb0u: goto label_2edeb0;
        case 0x2edeb4u: goto label_2edeb4;
        case 0x2edeb8u: goto label_2edeb8;
        case 0x2edebcu: goto label_2edebc;
        case 0x2edec0u: goto label_2edec0;
        case 0x2edec4u: goto label_2edec4;
        case 0x2edec8u: goto label_2edec8;
        case 0x2edeccu: goto label_2edecc;
        case 0x2eded0u: goto label_2eded0;
        case 0x2eded4u: goto label_2eded4;
        case 0x2eded8u: goto label_2eded8;
        case 0x2ededcu: goto label_2ededc;
        case 0x2edee0u: goto label_2edee0;
        case 0x2edee4u: goto label_2edee4;
        case 0x2edee8u: goto label_2edee8;
        case 0x2edeecu: goto label_2edeec;
        case 0x2edef0u: goto label_2edef0;
        case 0x2edef4u: goto label_2edef4;
        case 0x2edef8u: goto label_2edef8;
        case 0x2edefcu: goto label_2edefc;
        case 0x2edf00u: goto label_2edf00;
        case 0x2edf04u: goto label_2edf04;
        case 0x2edf08u: goto label_2edf08;
        case 0x2edf0cu: goto label_2edf0c;
        case 0x2edf10u: goto label_2edf10;
        case 0x2edf14u: goto label_2edf14;
        case 0x2edf18u: goto label_2edf18;
        case 0x2edf1cu: goto label_2edf1c;
        default: break;
    }

    ctx->pc = 0x2ed718u;

label_2ed718:
    // 0x2ed718: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ed718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2ed71c:
    // 0x2ed71c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2ed71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2ed720:
    // 0x2ed720: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2ed720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2ed724:
    // 0x2ed724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed728:
    // 0x2ed728: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2ed728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2ed72c:
    // 0x2ed72c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2ed72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2ed730:
    // 0x2ed730: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2ed730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2ed734:
    // 0x2ed734: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2ed734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2ed738:
    // 0x2ed738: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ed738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2ed73c:
    // 0x2ed73c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2ed73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2ed740:
    // 0x2ed740: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ed740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ed744:
    // 0x2ed744: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2ed744u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2ed748:
    // 0x2ed748: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2ed748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2ed74c:
    // 0x2ed74c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ed74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed750:
    // 0x2ed750: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ed750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ed754:
    // 0x2ed754: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_2ed758:
    if (ctx->pc == 0x2ED758u) {
        ctx->pc = 0x2ED758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED754u;
        // 0x2ed758: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED75Cu;
        goto label_2ed75c;
    }
    ctx->pc = 0x2ED754u;
    {
        const bool branch_taken_0x2ed754 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2ED758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED754u;
        // 0x2ed758: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed754) {
            ctx->pc = 0x2ED7B0u;
            goto label_2ed7b0;
        }
    }
    ctx->pc = 0x2ED75Cu;
label_2ed75c:
    // 0x2ed75c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2ed75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ed760:
    // 0x2ed760: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ed760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ed764:
    // 0x2ed764: 0x146201e0  bne         $v1, $v0, . + 4 + (0x1E0 << 2)
label_2ed768:
    if (ctx->pc == 0x2ED768u) {
        ctx->pc = 0x2ED768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED764u;
        // 0x2ed768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED76Cu;
        goto label_2ed76c;
    }
    ctx->pc = 0x2ED764u;
    {
        const bool branch_taken_0x2ed764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED764u;
        // 0x2ed768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed764) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2ED76Cu;
label_2ed76c:
    // 0x2ed76c: 0xc0a36c2  jal         func_28DB08
label_2ed770:
    if (ctx->pc == 0x2ED770u) {
        ctx->pc = 0x2ED774u;
        goto label_2ed774;
    }
    ctx->pc = 0x2ED76Cu;
    SET_GPR_U32(ctx, 31, 0x2ED774u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2ED76Cu, 0x2ED774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED774u;
label_2ed774:
    // 0x2ed774: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ed774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ed778:
    // 0x2ed778: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ed778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ed77c:
    // 0x2ed77c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ed77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ed780:
    // 0x2ed780: 0xa0f809  jalr        $a1
label_2ed784:
    if (ctx->pc == 0x2ED784u) {
        ctx->pc = 0x2ED784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED780u;
        // 0x2ed784: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED788u;
        goto label_2ed788;
    }
    ctx->pc = 0x2ED780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2ED788u);
        ctx->pc = 0x2ED784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED780u;
        // 0x2ed784: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED780u, 0x2ED788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED788u;
label_2ed788:
    // 0x2ed788: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ed78c:
    // 0x2ed78c: 0x144301d6  bne         $v0, $v1, . + 4 + (0x1D6 << 2)
label_2ed790:
    if (ctx->pc == 0x2ED790u) {
        ctx->pc = 0x2ED790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED78Cu;
        // 0x2ed790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED794u;
        goto label_2ed794;
    }
    ctx->pc = 0x2ED78Cu;
    {
        const bool branch_taken_0x2ed78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ED790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED78Cu;
        // 0x2ed790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed78c) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2ED794u;
label_2ed794:
    // 0x2ed794: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ed794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed798:
    // 0x2ed798: 0xc0a3fa4  jal         func_28FE90
label_2ed79c:
    if (ctx->pc == 0x2ED79Cu) {
        ctx->pc = 0x2ED79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED798u;
        // 0x2ed79c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7A0u;
        goto label_2ed7a0;
    }
    ctx->pc = 0x2ED798u;
    SET_GPR_U32(ctx, 31, 0x2ED7A0u);
    ctx->pc = 0x2ED79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED798u;
    // 0x2ed79c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2ED798u, 0x2ED7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7A0u;
label_2ed7a0:
    // 0x2ed7a0: 0xc0a78ba  jal         func_29E2E8
label_2ed7a4:
    if (ctx->pc == 0x2ED7A4u) {
        ctx->pc = 0x2ED7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7A0u;
        // 0x2ed7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7A8u;
        goto label_2ed7a8;
    }
    ctx->pc = 0x2ED7A0u;
    SET_GPR_U32(ctx, 31, 0x2ED7A8u);
    ctx->pc = 0x2ED7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7A0u;
    // 0x2ed7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2E8u, 0x2ED7A0u, 0x2ED7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7A8u;
label_2ed7a8:
    // 0x2ed7a8: 0x100001cf  b           . + 4 + (0x1CF << 2)
label_2ed7ac:
    if (ctx->pc == 0x2ED7ACu) {
        ctx->pc = 0x2ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7A8u;
        // 0x2ed7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7B0u;
        goto label_2ed7b0;
    }
    ctx->pc = 0x2ED7A8u;
    {
        const bool branch_taken_0x2ed7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7A8u;
        // 0x2ed7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7a8) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2ED7B0u;
label_2ed7b0:
    // 0x2ed7b0: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2ed7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2ed7b4:
    // 0x2ed7b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2ed7b8:
    if (ctx->pc == 0x2ED7B8u) {
        ctx->pc = 0x2ED7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7B4u;
        // 0x2ed7b8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7BCu;
        goto label_2ed7bc;
    }
    ctx->pc = 0x2ED7B4u;
    {
        const bool branch_taken_0x2ed7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7b4) {
            ctx->pc = 0x2ED7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7B4u;
            // 0x2ed7b8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7E0u;
            goto label_2ed7e0;
        }
    }
    ctx->pc = 0x2ED7BCu;
label_2ed7bc:
    // 0x2ed7bc: 0x9222002d  lbu         $v0, 0x2D($s1)
    ctx->pc = 0x2ed7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_2ed7c0:
    // 0x2ed7c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ed7c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed7c4:
    // 0x2ed7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ed7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ed7c8:
    // 0x2ed7c8: 0x2c63001e  sltiu       $v1, $v1, 0x1E
    ctx->pc = 0x2ed7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2ed7cc:
    // 0x2ed7cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2ed7d0:
    if (ctx->pc == 0x2ED7D0u) {
        ctx->pc = 0x2ED7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7CCu;
        // 0x2ed7d0: 0xa222002d  sb          $v0, 0x2D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7D4u;
        goto label_2ed7d4;
    }
    ctx->pc = 0x2ED7CCu;
    {
        const bool branch_taken_0x2ed7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7CCu;
        // 0x2ed7d0: 0xa222002d  sb          $v0, 0x2D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7cc) {
            ctx->pc = 0x2ED7DCu;
            goto label_2ed7dc;
        }
    }
    ctx->pc = 0x2ED7D4u;
label_2ed7d4:
    // 0x2ed7d4: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2ed7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_2ed7d8:
    // 0x2ed7d8: 0xa220002d  sb          $zero, 0x2D($s1)
    ctx->pc = 0x2ed7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 0));
label_2ed7dc:
    // 0x2ed7dc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ed7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ed7e0:
    // 0x2ed7e0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_2ed7e4:
    if (ctx->pc == 0x2ED7E4u) {
        ctx->pc = 0x2ED7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7E0u;
        // 0x2ed7e4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7E8u;
        goto label_2ed7e8;
    }
    ctx->pc = 0x2ED7E0u;
    {
        const bool branch_taken_0x2ed7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7e0) {
            ctx->pc = 0x2ED7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7E0u;
            // 0x2ed7e4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED8A4u;
            goto label_2ed8a4;
        }
    }
    ctx->pc = 0x2ED7E8u;
label_2ed7e8:
    // 0x2ed7e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ed7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ed7ec:
    // 0x2ed7ec: 0xc089018  jal         func_224060
label_2ed7f0:
    if (ctx->pc == 0x2ED7F0u) {
        ctx->pc = 0x2ED7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7ECu;
        // 0x2ed7f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7F4u;
        goto label_2ed7f4;
    }
    ctx->pc = 0x2ED7ECu;
    SET_GPR_U32(ctx, 31, 0x2ED7F4u);
    ctx->pc = 0x2ED7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7ECu;
    // 0x2ed7f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2ED7ECu, 0x2ED7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7F4u;
label_2ed7f4:
    // 0x2ed7f4: 0x105201b3  beq         $v0, $s2, . + 4 + (0x1B3 << 2)
label_2ed7f8:
    if (ctx->pc == 0x2ED7F8u) {
        ctx->pc = 0x2ED7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7F4u;
        // 0x2ed7f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED7FCu;
        goto label_2ed7fc;
    }
    ctx->pc = 0x2ED7F4u;
    {
        const bool branch_taken_0x2ed7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2ED7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7F4u;
        // 0x2ed7f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7f4) {
            ctx->pc = 0x2EDEC4u;
            goto label_2edec4;
        }
    }
    ctx->pc = 0x2ED7FCu;
label_2ed7fc:
    // 0x2ed7fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ed7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ed800:
    // 0x2ed800: 0xc089998  jal         func_226660
label_2ed804:
    if (ctx->pc == 0x2ED804u) {
        ctx->pc = 0x2ED804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED800u;
        // 0x2ed804: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED808u;
        goto label_2ed808;
    }
    ctx->pc = 0x2ED800u;
    SET_GPR_U32(ctx, 31, 0x2ED808u);
    ctx->pc = 0x2ED804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED800u;
    // 0x2ed804: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2ED800u, 0x2ED808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED808u;
label_2ed808:
    // 0x2ed808: 0x144001b7  bnez        $v0, . + 4 + (0x1B7 << 2)
label_2ed80c:
    if (ctx->pc == 0x2ED80Cu) {
        ctx->pc = 0x2ED80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED808u;
        // 0x2ed80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED810u;
        goto label_2ed810;
    }
    ctx->pc = 0x2ED808u;
    {
        const bool branch_taken_0x2ed808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED808u;
        // 0x2ed80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed808) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2ED810u;
label_2ed810:
    // 0x2ed810: 0xc0a47b4  jal         func_291ED0
label_2ed814:
    if (ctx->pc == 0x2ED814u) {
        ctx->pc = 0x2ED814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED810u;
        // 0x2ed814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED818u;
        goto label_2ed818;
    }
    ctx->pc = 0x2ED810u;
    SET_GPR_U32(ctx, 31, 0x2ED818u);
    ctx->pc = 0x2ED814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED810u;
    // 0x2ed814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2ED810u, 0x2ED818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED818u;
label_2ed818:
    // 0x2ed818: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
label_2ed81c:
    if (ctx->pc == 0x2ED81Cu) {
        ctx->pc = 0x2ED81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED818u;
        // 0x2ed81c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED820u;
        goto label_2ed820;
    }
    ctx->pc = 0x2ED818u;
    {
        const bool branch_taken_0x2ed818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2ED81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED818u;
        // 0x2ed81c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed818) {
            ctx->pc = 0x2ED848u;
            goto label_2ed848;
        }
    }
    ctx->pc = 0x2ED820u;
label_2ed820:
    // 0x2ed820: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ed820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2ed824:
    // 0x2ed824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed828:
    // 0x2ed828: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ed828u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ed82c:
    // 0x2ed82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ed82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ed830:
    // 0x2ed830: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2ed830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2ed834:
    // 0x2ed834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed838:
    // 0x2ed838: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ed838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed83c:
    // 0x2ed83c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ed83cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed840:
    // 0x2ed840: 0xc088178  jal         func_2205E0
label_2ed844:
    if (ctx->pc == 0x2ED844u) {
        ctx->pc = 0x2ED844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED840u;
        // 0x2ed844: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED848u;
        goto label_2ed848;
    }
    ctx->pc = 0x2ED840u;
    SET_GPR_U32(ctx, 31, 0x2ED848u);
    ctx->pc = 0x2ED844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED840u;
    // 0x2ed844: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ED840u, 0x2ED848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED848u;
label_2ed848:
    // 0x2ed848: 0xc0a367c  jal         func_28D9F0
label_2ed84c:
    if (ctx->pc == 0x2ED84Cu) {
        ctx->pc = 0x2ED84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED848u;
        // 0x2ed84c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED850u;
        goto label_2ed850;
    }
    ctx->pc = 0x2ED848u;
    SET_GPR_U32(ctx, 31, 0x2ED850u);
    ctx->pc = 0x2ED84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED848u;
    // 0x2ed84c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ED848u, 0x2ED850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED850u;
label_2ed850:
    // 0x2ed850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed854:
    // 0x2ed854: 0x12000102  beqz        $s0, . + 4 + (0x102 << 2)
label_2ed858:
    if (ctx->pc == 0x2ED858u) {
        ctx->pc = 0x2ED858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED854u;
        // 0x2ed858: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED85Cu;
        goto label_2ed85c;
    }
    ctx->pc = 0x2ED854u;
    {
        const bool branch_taken_0x2ed854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED854u;
        // 0x2ed858: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed854) {
            ctx->pc = 0x2EDC60u;
            goto label_2edc60;
        }
    }
    ctx->pc = 0x2ED85Cu;
label_2ed85c:
    // 0x2ed85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed860:
    // 0x2ed860: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ed860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ed864:
    // 0x2ed864: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ed864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ed868:
    // 0x2ed868: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ed868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ed86c:
    // 0x2ed86c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ed86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ed870:
    // 0x2ed870: 0xc0cd4fc  jal         func_3353F0
label_2ed874:
    if (ctx->pc == 0x2ED874u) {
        ctx->pc = 0x2ED874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED870u;
        // 0x2ed874: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED878u;
        goto label_2ed878;
    }
    ctx->pc = 0x2ED870u;
    SET_GPR_U32(ctx, 31, 0x2ED878u);
    ctx->pc = 0x2ED874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED870u;
    // 0x2ed874: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2ED870u, 0x2ED878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED878u;
label_2ed878:
    // 0x2ed878: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ed878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed87c:
    // 0x2ed87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed880:
    // 0x2ed880: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ed880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ed884:
    // 0x2ed884: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ed884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed888:
    // 0x2ed888: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2ed88c:
    // 0x2ed88c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ed88cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ed890:
    // 0x2ed890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ed890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed894:
    // 0x2ed894: 0xc0be968  jal         func_2FA5A0
label_2ed898:
    if (ctx->pc == 0x2ED898u) {
        ctx->pc = 0x2ED898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED894u;
        // 0x2ed898: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED89Cu;
        goto label_2ed89c;
    }
    ctx->pc = 0x2ED894u;
    SET_GPR_U32(ctx, 31, 0x2ED89Cu);
    ctx->pc = 0x2ED898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED894u;
    // 0x2ed898: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2ED894u, 0x2ED89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED89Cu;
label_2ed89c:
    // 0x2ed89c: 0x10000191  b           . + 4 + (0x191 << 2)
label_2ed8a0:
    if (ctx->pc == 0x2ED8A0u) {
        ctx->pc = 0x2ED8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED89Cu;
        // 0x2ed8a0: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8A4u;
        goto label_2ed8a4;
    }
    ctx->pc = 0x2ED89Cu;
    {
        const bool branch_taken_0x2ed89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED89Cu;
        // 0x2ed8a0: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed89c) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2ED8A4u;
label_2ed8a4:
    // 0x2ed8a4: 0xc0e409a  jal         func_390268
label_2ed8a8:
    if (ctx->pc == 0x2ED8A8u) {
        ctx->pc = 0x2ED8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8A4u;
        // 0x2ed8a8: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8ACu;
        goto label_2ed8ac;
    }
    ctx->pc = 0x2ED8A4u;
    SET_GPR_U32(ctx, 31, 0x2ED8ACu);
    ctx->pc = 0x2ED8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8A4u;
    // 0x2ed8a8: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2ED8A4u, 0x2ED8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED8ACu;
label_2ed8ac:
    // 0x2ed8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed8b0:
    // 0x2ed8b0: 0xc0a34d6  jal         func_28D358
label_2ed8b4:
    if (ctx->pc == 0x2ED8B4u) {
        ctx->pc = 0x2ED8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8B0u;
        // 0x2ed8b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8B8u;
        goto label_2ed8b8;
    }
    ctx->pc = 0x2ED8B0u;
    SET_GPR_U32(ctx, 31, 0x2ED8B8u);
    ctx->pc = 0x2ED8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8B0u;
    // 0x2ed8b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2ED8B0u, 0x2ED8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED8B8u;
label_2ed8b8:
    // 0x2ed8b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ed8b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed8bc:
    // 0x2ed8bc: 0x56800028  bnel        $s4, $zero, . + 4 + (0x28 << 2)
label_2ed8c0:
    if (ctx->pc == 0x2ED8C0u) {
        ctx->pc = 0x2ED8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8BCu;
        // 0x2ed8c0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8C4u;
        goto label_2ed8c4;
    }
    ctx->pc = 0x2ED8BCu;
    {
        const bool branch_taken_0x2ed8bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8bc) {
            ctx->pc = 0x2ED8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED8BCu;
            // 0x2ed8c0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED960u;
            goto label_2ed960;
        }
    }
    ctx->pc = 0x2ED8C4u;
label_2ed8c4:
    // 0x2ed8c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ed8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ed8c8:
    // 0x2ed8c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed8cc:
    // 0x2ed8cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2ed8d0:
    if (ctx->pc == 0x2ED8D0u) {
        ctx->pc = 0x2ED8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8CCu;
        // 0x2ed8d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8D4u;
        goto label_2ed8d4;
    }
    ctx->pc = 0x2ED8CCu;
    {
        const bool branch_taken_0x2ed8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8cc) {
            ctx->pc = 0x2ED8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED8CCu;
            // 0x2ed8d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED8D4u;
            goto label_2ed8d4;
        }
    }
    ctx->pc = 0x2ED8D4u;
label_2ed8d4:
    // 0x2ed8d4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ed8d8:
    // 0x2ed8d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ed8d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2ed8dc:
    // 0x2ed8dc: 0x2010  mfhi        $a0
    ctx->pc = 0x2ed8dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2ed8e0:
    // 0x2ed8e0: 0x14800181  bnez        $a0, . + 4 + (0x181 << 2)
label_2ed8e4:
    if (ctx->pc == 0x2ED8E4u) {
        ctx->pc = 0x2ED8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8E0u;
        // 0x2ed8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8E8u;
        goto label_2ed8e8;
    }
    ctx->pc = 0x2ED8E0u;
    {
        const bool branch_taken_0x2ed8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8E0u;
        // 0x2ed8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8e0) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2ED8E8u;
label_2ed8e8:
    // 0x2ed8e8: 0xc0a2fc0  jal         func_28BF00
label_2ed8ec:
    if (ctx->pc == 0x2ED8ECu) {
        ctx->pc = 0x2ED8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8E8u;
        // 0x2ed8ec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED8F0u;
        goto label_2ed8f0;
    }
    ctx->pc = 0x2ED8E8u;
    SET_GPR_U32(ctx, 31, 0x2ED8F0u);
    ctx->pc = 0x2ED8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8E8u;
    // 0x2ed8ec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2ED8E8u, 0x2ED8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED8F0u;
label_2ed8f0:
    // 0x2ed8f0: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2ed8f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ed8f4:
    // 0x2ed8f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2ed8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2ed8f8:
    // 0x2ed8f8: 0x2452c0d8  addiu       $s2, $v0, -0x3F28
    ctx->pc = 0x2ed8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951128));
label_2ed8fc:
    // 0x2ed8fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ed8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ed900:
    // 0x2ed900: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ed900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed904:
    // 0x2ed904: 0xc0a72ee  jal         func_29CBB8
label_2ed908:
    if (ctx->pc == 0x2ED908u) {
        ctx->pc = 0x2ED908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED904u;
        // 0x2ed908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED90Cu;
        goto label_2ed90c;
    }
    ctx->pc = 0x2ED904u;
    SET_GPR_U32(ctx, 31, 0x2ED90Cu);
    ctx->pc = 0x2ED908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED904u;
    // 0x2ed908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2ED904u, 0x2ED90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED90Cu;
label_2ed90c:
    // 0x2ed90c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed910:
    // 0x2ed910: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ed910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed914:
    // 0x2ed914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ed914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed918:
    // 0x2ed918: 0xc0a33f8  jal         func_28CFE0
label_2ed91c:
    if (ctx->pc == 0x2ED91Cu) {
        ctx->pc = 0x2ED91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED918u;
        // 0x2ed91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED920u;
        goto label_2ed920;
    }
    ctx->pc = 0x2ED918u;
    SET_GPR_U32(ctx, 31, 0x2ED920u);
    ctx->pc = 0x2ED91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED918u;
    // 0x2ed91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2ED918u, 0x2ED920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED920u;
label_2ed920:
    // 0x2ed920: 0x56000170  bnel        $s0, $zero, . + 4 + (0x170 << 2)
label_2ed924:
    if (ctx->pc == 0x2ED924u) {
        ctx->pc = 0x2ED924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED920u;
        // 0x2ed924: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED928u;
        goto label_2ed928;
    }
    ctx->pc = 0x2ED920u;
    {
        const bool branch_taken_0x2ed920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed920) {
            ctx->pc = 0x2ED924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED920u;
            // 0x2ed924: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2ED928u;
label_2ed928:
    // 0x2ed928: 0xc089018  jal         func_224060
label_2ed92c:
    if (ctx->pc == 0x2ED92Cu) {
        ctx->pc = 0x2ED92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED928u;
        // 0x2ed92c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED930u;
        goto label_2ed930;
    }
    ctx->pc = 0x2ED928u;
    SET_GPR_U32(ctx, 31, 0x2ED930u);
    ctx->pc = 0x2ED92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED928u;
    // 0x2ed92c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2ED928u, 0x2ED930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED930u;
label_2ed930:
    // 0x2ed930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed934:
    // 0x2ed934: 0x10430163  beq         $v0, $v1, . + 4 + (0x163 << 2)
label_2ed938:
    if (ctx->pc == 0x2ED938u) {
        ctx->pc = 0x2ED938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED934u;
        // 0x2ed938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED93Cu;
        goto label_2ed93c;
    }
    ctx->pc = 0x2ED934u;
    {
        const bool branch_taken_0x2ed934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED934u;
        // 0x2ed938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed934) {
            ctx->pc = 0x2EDEC4u;
            goto label_2edec4;
        }
    }
    ctx->pc = 0x2ED93Cu;
label_2ed93c:
    // 0x2ed93c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ed93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed940:
    // 0x2ed940: 0xc0a731e  jal         func_29CC78
label_2ed944:
    if (ctx->pc == 0x2ED944u) {
        ctx->pc = 0x2ED944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED940u;
        // 0x2ed944: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED948u;
        goto label_2ed948;
    }
    ctx->pc = 0x2ED940u;
    SET_GPR_U32(ctx, 31, 0x2ED948u);
    ctx->pc = 0x2ED944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED940u;
    // 0x2ed944: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC78u, 0x2ED940u, 0x2ED948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED948u;
label_2ed948:
    // 0x2ed948: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ed948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed94c:
    // 0x2ed94c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed950:
    // 0x2ed950: 0xc0a33f8  jal         func_28CFE0
label_2ed954:
    if (ctx->pc == 0x2ED954u) {
        ctx->pc = 0x2ED954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED950u;
        // 0x2ed954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED958u;
        goto label_2ed958;
    }
    ctx->pc = 0x2ED950u;
    SET_GPR_U32(ctx, 31, 0x2ED958u);
    ctx->pc = 0x2ED954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED950u;
    // 0x2ed954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2ED950u, 0x2ED958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED958u;
label_2ed958:
    // 0x2ed958: 0x10000162  b           . + 4 + (0x162 << 2)
label_2ed95c:
    if (ctx->pc == 0x2ED95Cu) {
        ctx->pc = 0x2ED95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED958u;
        // 0x2ed95c: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED960u;
        goto label_2ed960;
    }
    ctx->pc = 0x2ED958u;
    {
        const bool branch_taken_0x2ed958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED958u;
        // 0x2ed95c: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed958) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2ED960u;
label_2ed960:
    // 0x2ed960: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ed960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed964:
    // 0x2ed964: 0x14720071  bne         $v1, $s2, . + 4 + (0x71 << 2)
label_2ed968:
    if (ctx->pc == 0x2ED968u) {
        ctx->pc = 0x2ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED964u;
        // 0x2ed968: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED96Cu;
        goto label_2ed96c;
    }
    ctx->pc = 0x2ED964u;
    {
        const bool branch_taken_0x2ed964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED964u;
        // 0x2ed968: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed964) {
            ctx->pc = 0x2EDB2Cu;
            goto label_2edb2c;
        }
    }
    ctx->pc = 0x2ED96Cu;
label_2ed96c:
    // 0x2ed96c: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2ed96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2ed970:
    // 0x2ed970: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2ed970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed974:
    // 0x2ed974: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
label_2ed978:
    if (ctx->pc == 0x2ED978u) {
        ctx->pc = 0x2ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED974u;
        // 0x2ed978: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED97Cu;
        goto label_2ed97c;
    }
    ctx->pc = 0x2ED974u;
    {
        const bool branch_taken_0x2ed974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED974u;
        // 0x2ed978: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed974) {
            ctx->pc = 0x2EDA84u;
            goto label_2eda84;
        }
    }
    ctx->pc = 0x2ED97Cu;
label_2ed97c:
    // 0x2ed97c: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x2ed97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_2ed980:
    // 0x2ed980: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_2ed984:
    if (ctx->pc == 0x2ED984u) {
        ctx->pc = 0x2ED984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED980u;
        // 0x2ed984: 0x9225002b  lbu         $a1, 0x2B($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED988u;
        goto label_2ed988;
    }
    ctx->pc = 0x2ED980u;
    {
        const bool branch_taken_0x2ed980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED980u;
        // 0x2ed984: 0x9225002b  lbu         $a1, 0x2B($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed980) {
            ctx->pc = 0x2EDA18u;
            goto label_2eda18;
        }
    }
    ctx->pc = 0x2ED988u;
label_2ed988:
    // 0x2ed988: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x2ed988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2ed98c:
    // 0x2ed98c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2ed98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ed990:
    // 0x2ed990: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2ed994:
    if (ctx->pc == 0x2ED994u) {
        ctx->pc = 0x2ED994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED990u;
        // 0x2ed994: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED998u;
        goto label_2ed998;
    }
    ctx->pc = 0x2ED990u;
    {
        const bool branch_taken_0x2ed990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED990u;
        // 0x2ed994: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed990) {
            ctx->pc = 0x2EDA1Cu;
            goto label_2eda1c;
        }
    }
    ctx->pc = 0x2ED998u;
label_2ed998:
    // 0x2ed998: 0xa232002e  sb          $s2, 0x2E($s1)
    ctx->pc = 0x2ed998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 18));
label_2ed99c:
    // 0x2ed99c: 0xc08bfbc  jal         func_22FEF0
label_2ed9a0:
    if (ctx->pc == 0x2ED9A0u) {
        ctx->pc = 0x2ED9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED99Cu;
        // 0x2ed9a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9A4u;
        goto label_2ed9a4;
    }
    ctx->pc = 0x2ED99Cu;
    SET_GPR_U32(ctx, 31, 0x2ED9A4u);
    ctx->pc = 0x2ED9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED99Cu;
    // 0x2ed9a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2ED99Cu, 0x2ED9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9A4u;
label_2ed9a4:
    // 0x2ed9a4: 0xc0a367c  jal         func_28D9F0
label_2ed9a8:
    if (ctx->pc == 0x2ED9A8u) {
        ctx->pc = 0x2ED9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9A4u;
        // 0x2ed9a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9ACu;
        goto label_2ed9ac;
    }
    ctx->pc = 0x2ED9A4u;
    SET_GPR_U32(ctx, 31, 0x2ED9ACu);
    ctx->pc = 0x2ED9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9A4u;
    // 0x2ed9a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ED9A4u, 0x2ED9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9ACu;
label_2ed9ac:
    // 0x2ed9ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ed9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9b0:
    // 0x2ed9b0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2ed9b4:
    if (ctx->pc == 0x2ED9B4u) {
        ctx->pc = 0x2ED9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9B0u;
        // 0x2ed9b4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9B8u;
        goto label_2ed9b8;
    }
    ctx->pc = 0x2ED9B0u;
    {
        const bool branch_taken_0x2ed9b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9B0u;
        // 0x2ed9b4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9b0) {
            ctx->pc = 0x2ED9E8u;
            goto label_2ed9e8;
        }
    }
    ctx->pc = 0x2ED9B8u;
label_2ed9b8:
    // 0x2ed9b8: 0x86900092  lh          $s0, 0x92($s4)
    ctx->pc = 0x2ed9b8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2ed9bc:
    // 0x2ed9bc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ed9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ed9c0:
    // 0x2ed9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ed9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9c4:
    // 0x2ed9c4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2ed9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2ed9c8:
    // 0x2ed9c8: 0xc0884f6  jal         func_2213D8
label_2ed9cc:
    if (ctx->pc == 0x2ED9CCu) {
        ctx->pc = 0x2ED9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9C8u;
        // 0x2ed9cc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9D0u;
        goto label_2ed9d0;
    }
    ctx->pc = 0x2ED9C8u;
    SET_GPR_U32(ctx, 31, 0x2ED9D0u);
    ctx->pc = 0x2ED9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9C8u;
    // 0x2ed9cc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2ED9C8u, 0x2ED9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9D0u;
label_2ed9d0:
    // 0x2ed9d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ed9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed9d4:
    // 0x2ed9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9d8:
    // 0x2ed9d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ed9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9dc:
    // 0x2ed9dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ed9dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ed9e0:
    // 0x2ed9e0: 0xc0bf800  jal         func_2FE000
label_2ed9e4:
    if (ctx->pc == 0x2ED9E4u) {
        ctx->pc = 0x2ED9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9E0u;
        // 0x2ed9e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9E8u;
        goto label_2ed9e8;
    }
    ctx->pc = 0x2ED9E0u;
    SET_GPR_U32(ctx, 31, 0x2ED9E8u);
    ctx->pc = 0x2ED9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9E0u;
    // 0x2ed9e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2ED9E0u, 0x2ED9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9E8u;
label_2ed9e8:
    // 0x2ed9e8: 0xc0a367c  jal         func_28D9F0
label_2ed9ec:
    if (ctx->pc == 0x2ED9ECu) {
        ctx->pc = 0x2ED9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9E8u;
        // 0x2ed9ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9F0u;
        goto label_2ed9f0;
    }
    ctx->pc = 0x2ED9E8u;
    SET_GPR_U32(ctx, 31, 0x2ED9F0u);
    ctx->pc = 0x2ED9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9E8u;
    // 0x2ed9ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ED9E8u, 0x2ED9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9F0u;
label_2ed9f0:
    // 0x2ed9f0: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
label_2ed9f4:
    if (ctx->pc == 0x2ED9F4u) {
        ctx->pc = 0x2ED9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9F0u;
        // 0x2ed9f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9F8u;
        goto label_2ed9f8;
    }
    ctx->pc = 0x2ED9F0u;
    {
        const bool branch_taken_0x2ed9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9F0u;
        // 0x2ed9f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9f0) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2ED9F8u;
label_2ed9f8:
    // 0x2ed9f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ed9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ed9fc:
    // 0x2ed9fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ed9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eda00:
    // 0x2eda00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eda00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eda04:
    // 0x2eda04: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2eda04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2eda08:
    // 0x2eda08: 0xc0bec3c  jal         func_2FB0F0
label_2eda0c:
    if (ctx->pc == 0x2EDA0Cu) {
        ctx->pc = 0x2EDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA08u;
        // 0x2eda0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA10u;
        goto label_2eda10;
    }
    ctx->pc = 0x2EDA08u;
    SET_GPR_U32(ctx, 31, 0x2EDA10u);
    ctx->pc = 0x2EDA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA08u;
    // 0x2eda0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2EDA08u, 0x2EDA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA10u;
label_2eda10:
    // 0x2eda10: 0x10000135  b           . + 4 + (0x135 << 2)
label_2eda14:
    if (ctx->pc == 0x2EDA14u) {
        ctx->pc = 0x2EDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA10u;
        // 0x2eda14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA18u;
        goto label_2eda18;
    }
    ctx->pc = 0x2EDA10u;
    {
        const bool branch_taken_0x2eda10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA10u;
        // 0x2eda14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda10) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDA18u;
label_2eda18:
    // 0x2eda18: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2eda18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2eda1c:
    // 0x2eda1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2eda1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2eda20:
    // 0x2eda20: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2eda20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2eda24:
    // 0x2eda24: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2eda28:
    if (ctx->pc == 0x2EDA28u) {
        ctx->pc = 0x2EDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA24u;
        // 0x2eda28: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA2Cu;
        goto label_2eda2c;
    }
    ctx->pc = 0x2EDA24u;
    {
        const bool branch_taken_0x2eda24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eda24) {
            ctx->pc = 0x2EDA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA24u;
            // 0x2eda28: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2EDA2Cu;
label_2eda2c:
    // 0x2eda2c: 0xc0a4e54  jal         func_293950
label_2eda30:
    if (ctx->pc == 0x2EDA30u) {
        ctx->pc = 0x2EDA34u;
        goto label_2eda34;
    }
    ctx->pc = 0x2EDA2Cu;
    SET_GPR_U32(ctx, 31, 0x2EDA34u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2EDA2Cu, 0x2EDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA34u;
label_2eda34:
    // 0x2eda34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eda34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eda38:
    // 0x2eda38: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
label_2eda3c:
    if (ctx->pc == 0x2EDA3Cu) {
        ctx->pc = 0x2EDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA38u;
        // 0x2eda3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA40u;
        goto label_2eda40;
    }
    ctx->pc = 0x2EDA38u;
    {
        const bool branch_taken_0x2eda38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eda38) {
            ctx->pc = 0x2EDA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA38u;
            // 0x2eda3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA6Cu;
            goto label_2eda6c;
        }
    }
    ctx->pc = 0x2EDA40u;
label_2eda40:
    // 0x2eda40: 0xc0bb4d6  jal         func_2ED358
label_2eda44:
    if (ctx->pc == 0x2EDA44u) {
        ctx->pc = 0x2EDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA40u;
        // 0x2eda44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA48u;
        goto label_2eda48;
    }
    ctx->pc = 0x2EDA40u;
    SET_GPR_U32(ctx, 31, 0x2EDA48u);
    ctx->pc = 0x2EDA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA40u;
    // 0x2eda44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED358u, 0x2EDA40u, 0x2EDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA48u;
label_2eda48:
    // 0x2eda48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eda48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eda4c:
    // 0x2eda4c: 0xc0bb4d2  jal         func_2ED348
label_2eda50:
    if (ctx->pc == 0x2EDA50u) {
        ctx->pc = 0x2EDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA4Cu;
        // 0x2eda50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA54u;
        goto label_2eda54;
    }
    ctx->pc = 0x2EDA4Cu;
    SET_GPR_U32(ctx, 31, 0x2EDA54u);
    ctx->pc = 0x2EDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA4Cu;
    // 0x2eda50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED348u, 0x2EDA4Cu, 0x2EDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA54u;
label_2eda54:
    // 0x2eda54: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eda54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eda58:
    // 0x2eda58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eda58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eda5c:
    // 0x2eda5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2eda5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eda60:
    // 0x2eda60: 0xc0b9e5c  jal         func_2E7970
label_2eda64:
    if (ctx->pc == 0x2EDA64u) {
        ctx->pc = 0x2EDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA60u;
        // 0x2eda64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA68u;
        goto label_2eda68;
    }
    ctx->pc = 0x2EDA60u;
    SET_GPR_U32(ctx, 31, 0x2EDA68u);
    ctx->pc = 0x2EDA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA60u;
    // 0x2eda64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7970u, 0x2EDA60u, 0x2EDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA68u;
label_2eda68:
    // 0x2eda68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eda6c:
    // 0x2eda6c: 0xc0a35d6  jal         func_28D758
label_2eda70:
    if (ctx->pc == 0x2EDA70u) {
        ctx->pc = 0x2EDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA6Cu;
        // 0x2eda70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA74u;
        goto label_2eda74;
    }
    ctx->pc = 0x2EDA6Cu;
    SET_GPR_U32(ctx, 31, 0x2EDA74u);
    ctx->pc = 0x2EDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA6Cu;
    // 0x2eda70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2EDA6Cu, 0x2EDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA74u;
label_2eda74:
    // 0x2eda74: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x2eda74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
label_2eda78:
    // 0x2eda78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eda7c:
    // 0x2eda7c: 0x1000011a  b           . + 4 + (0x11A << 2)
label_2eda80:
    if (ctx->pc == 0x2EDA80u) {
        ctx->pc = 0x2EDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA7Cu;
        // 0x2eda80: 0xa220002b  sb          $zero, 0x2B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA84u;
        goto label_2eda84;
    }
    ctx->pc = 0x2EDA7Cu;
    {
        const bool branch_taken_0x2eda7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA7Cu;
        // 0x2eda80: 0xa220002b  sb          $zero, 0x2B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda7c) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDA84u;
label_2eda84:
    // 0x2eda84: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eda88:
    // 0x2eda88: 0x10800117  beqz        $a0, . + 4 + (0x117 << 2)
label_2eda8c:
    if (ctx->pc == 0x2EDA8Cu) {
        ctx->pc = 0x2EDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA88u;
        // 0x2eda8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA90u;
        goto label_2eda90;
    }
    ctx->pc = 0x2EDA88u;
    {
        const bool branch_taken_0x2eda88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA88u;
        // 0x2eda8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda88) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDA90u;
label_2eda90:
    // 0x2eda90: 0xc10587a  jal         func_4161E8
label_2eda94:
    if (ctx->pc == 0x2EDA94u) {
        ctx->pc = 0x2EDA98u;
        goto label_2eda98;
    }
    ctx->pc = 0x2EDA90u;
    SET_GPR_U32(ctx, 31, 0x2EDA98u);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2EDA90u, 0x2EDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA98u;
label_2eda98:
    // 0x2eda98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2eda98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2eda9c:
    // 0x2eda9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eda9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2edaa0:
    // 0x2edaa0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2edaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2edaa4:
    // 0x2edaa4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2edaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2edaa8:
    // 0x2edaa8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2edaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2edaac:
    // 0x2edaac: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2edab0:
    // 0x2edab0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2edab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2edab4:
    // 0x2edab4: 0xc0cdb38  jal         func_336CE0
label_2edab8:
    if (ctx->pc == 0x2EDAB8u) {
        ctx->pc = 0x2EDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAB4u;
        // 0x2edab8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDABCu;
        goto label_2edabc;
    }
    ctx->pc = 0x2EDAB4u;
    SET_GPR_U32(ctx, 31, 0x2EDABCu);
    ctx->pc = 0x2EDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAB4u;
    // 0x2edab8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EDAB4u, 0x2EDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDABCu;
label_2edabc:
    // 0x2edabc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2edac0:
    // 0x2edac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2edac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2edac4:
    // 0x2edac4: 0x0  nop
    ctx->pc = 0x2edac4u;
    // NOP
label_2edac8:
    // 0x2edac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2edac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edacc:
    // 0x2edacc: 0x0  nop
    ctx->pc = 0x2edaccu;
    // NOP
label_2edad0:
    // 0x2edad0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2edad4:
    if (ctx->pc == 0x2EDAD4u) {
        ctx->pc = 0x2EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAD0u;
        // 0x2edad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDAD8u;
        goto label_2edad8;
    }
    ctx->pc = 0x2EDAD0u;
    {
        const bool branch_taken_0x2edad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAD0u;
        // 0x2edad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edad0) {
            ctx->pc = 0x2EDB24u;
            goto label_2edb24;
        }
    }
    ctx->pc = 0x2EDAD8u;
label_2edad8:
    // 0x2edad8: 0xc08bfbc  jal         func_22FEF0
label_2edadc:
    if (ctx->pc == 0x2EDADCu) {
        ctx->pc = 0x2EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAD8u;
        // 0x2edadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDAE0u;
        goto label_2edae0;
    }
    ctx->pc = 0x2EDAD8u;
    SET_GPR_U32(ctx, 31, 0x2EDAE0u);
    ctx->pc = 0x2EDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAD8u;
    // 0x2edadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2EDAD8u, 0x2EDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAE0u;
label_2edae0:
    // 0x2edae0: 0xc0a367c  jal         func_28D9F0
label_2edae4:
    if (ctx->pc == 0x2EDAE4u) {
        ctx->pc = 0x2EDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAE0u;
        // 0x2edae4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDAE8u;
        goto label_2edae8;
    }
    ctx->pc = 0x2EDAE0u;
    SET_GPR_U32(ctx, 31, 0x2EDAE8u);
    ctx->pc = 0x2EDAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAE0u;
    // 0x2edae4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDAE0u, 0x2EDAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAE8u;
label_2edae8:
    // 0x2edae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2edae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edaec:
    // 0x2edaec: 0x108000fd  beqz        $a0, . + 4 + (0xFD << 2)
label_2edaf0:
    if (ctx->pc == 0x2EDAF0u) {
        ctx->pc = 0x2EDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAECu;
        // 0x2edaf0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDAF4u;
        goto label_2edaf4;
    }
    ctx->pc = 0x2EDAECu;
    {
        const bool branch_taken_0x2edaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAECu;
        // 0x2edaf0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaec) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDAF4u;
label_2edaf4:
    // 0x2edaf4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2edaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edaf8:
    // 0x2edaf8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2edaf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2edafc:
    // 0x2edafc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2edafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2edb00:
    // 0x2edb00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2edb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2edb04:
    // 0x2edb04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2edb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2edb08:
    // 0x2edb08: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2edb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2edb0c:
    // 0x2edb0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2edb0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edb10:
    // 0x2edb10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2edb10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edb14:
    // 0x2edb14: 0xc0bee7a  jal         func_2FB9E8
label_2edb18:
    if (ctx->pc == 0x2EDB18u) {
        ctx->pc = 0x2EDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB14u;
        // 0x2edb18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB1Cu;
        goto label_2edb1c;
    }
    ctx->pc = 0x2EDB14u;
    SET_GPR_U32(ctx, 31, 0x2EDB1Cu);
    ctx->pc = 0x2EDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB14u;
    // 0x2edb18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2EDB14u, 0x2EDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB1Cu;
label_2edb1c:
    // 0x2edb1c: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_2edb20:
    if (ctx->pc == 0x2EDB20u) {
        ctx->pc = 0x2EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB1Cu;
        // 0x2edb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB24u;
        goto label_2edb24;
    }
    ctx->pc = 0x2EDB1Cu;
    {
        const bool branch_taken_0x2edb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB1Cu;
        // 0x2edb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb1c) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDB24u;
label_2edb24:
    // 0x2edb24: 0x100000ef  b           . + 4 + (0xEF << 2)
label_2edb28:
    if (ctx->pc == 0x2EDB28u) {
        ctx->pc = 0x2EDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB24u;
        // 0x2edb28: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB2Cu;
        goto label_2edb2c;
    }
    ctx->pc = 0x2EDB24u;
    {
        const bool branch_taken_0x2edb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB24u;
        // 0x2edb28: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb24) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDB2Cu;
label_2edb2c:
    // 0x2edb2c: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_2edb30:
    if (ctx->pc == 0x2EDB30u) {
        ctx->pc = 0x2EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB2Cu;
        // 0x2edb30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB34u;
        goto label_2edb34;
    }
    ctx->pc = 0x2EDB2Cu;
    {
        const bool branch_taken_0x2edb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB2Cu;
        // 0x2edb30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb2c) {
            ctx->pc = 0x2EDC48u;
            goto label_2edc48;
        }
    }
    ctx->pc = 0x2EDB34u;
label_2edb34:
    // 0x2edb34: 0xc089018  jal         func_224060
label_2edb38:
    if (ctx->pc == 0x2EDB38u) {
        ctx->pc = 0x2EDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB34u;
        // 0x2edb38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB3Cu;
        goto label_2edb3c;
    }
    ctx->pc = 0x2EDB34u;
    SET_GPR_U32(ctx, 31, 0x2EDB3Cu);
    ctx->pc = 0x2EDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB34u;
    // 0x2edb38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EDB34u, 0x2EDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB3Cu;
label_2edb3c:
    // 0x2edb3c: 0x105200b9  beq         $v0, $s2, . + 4 + (0xB9 << 2)
label_2edb40:
    if (ctx->pc == 0x2EDB40u) {
        ctx->pc = 0x2EDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB3Cu;
        // 0x2edb40: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB44u;
        goto label_2edb44;
    }
    ctx->pc = 0x2EDB3Cu;
    {
        const bool branch_taken_0x2edb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2EDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB3Cu;
        // 0x2edb40: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb3c) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDB44u;
label_2edb44:
    // 0x2edb44: 0xc047e6c  jal         func_11F9B0
label_2edb48:
    if (ctx->pc == 0x2EDB48u) {
        ctx->pc = 0x2EDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB44u;
        // 0x2edb48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB4Cu;
        goto label_2edb4c;
    }
    ctx->pc = 0x2EDB44u;
    SET_GPR_U32(ctx, 31, 0x2EDB4Cu);
    ctx->pc = 0x2EDB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB44u;
    // 0x2edb48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2EDB44u, 0x2EDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB4Cu;
label_2edb4c:
    // 0x2edb4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2edb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edb50:
    // 0x2edb50: 0x10c000e4  beqz        $a2, . + 4 + (0xE4 << 2)
label_2edb54:
    if (ctx->pc == 0x2EDB54u) {
        ctx->pc = 0x2EDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB50u;
        // 0x2edb54: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB58u;
        goto label_2edb58;
    }
    ctx->pc = 0x2EDB50u;
    {
        const bool branch_taken_0x2edb50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB50u;
        // 0x2edb54: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb50) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDB58u;
label_2edb58:
    // 0x2edb58: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2edb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2edb5c:
    // 0x2edb5c: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x2edb5cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2edb60:
    // 0x2edb60: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2edb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2edb64:
    // 0x2edb64: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x2edb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_2edb68:
    // 0x2edb68: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2edb68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2edb6c:
    // 0x2edb6c: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x2edb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_2edb70:
    // 0x2edb70: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2edb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2edb74:
    // 0x2edb74: 0x40f809  jalr        $v0
label_2edb78:
    if (ctx->pc == 0x2EDB78u) {
        ctx->pc = 0x2EDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB74u;
        // 0x2edb78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB7Cu;
        goto label_2edb7c;
    }
    ctx->pc = 0x2EDB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EDB7Cu);
        ctx->pc = 0x2EDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB74u;
        // 0x2edb78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDB74u, 0x2EDB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDB7Cu;
label_2edb7c:
    // 0x2edb7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2edb7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2edb80:
    // 0x2edb80: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2edb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edb84:
    // 0x2edb84: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2edb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2edb88:
    // 0x2edb88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2edb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2edb8c:
    // 0x2edb8c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2edb8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2edb90:
    // 0x2edb90: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2edb90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2edb94:
    // 0x2edb94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2edb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edb98:
    // 0x2edb98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2edb98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2edb9c:
    // 0x2edb9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2edb9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2edba0:
    // 0x2edba0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2edba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2edba4:
    // 0x2edba4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2edba4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2edba8:
    // 0x2edba8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2edba8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2edbac:
    // 0x2edbac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2edbacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2edbb0:
    // 0x2edbb0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2edbb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2edbb4:
    // 0x2edbb4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2edbb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2edbb8:
    // 0x2edbb8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2edbb8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2edbbc:
    // 0x2edbbc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2edbbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2edbc0:
    // 0x2edbc0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2edbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2edbc4:
    // 0x2edbc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2edbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2edbc8:
    // 0x2edbc8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2edbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2edbcc:
    // 0x2edbcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2edbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2edbd0:
    // 0x2edbd0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2edbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2edbd4:
    // 0x2edbd4: 0xc0a367c  jal         func_28D9F0
label_2edbd8:
    if (ctx->pc == 0x2EDBD8u) {
        ctx->pc = 0x2EDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBD4u;
        // 0x2edbd8: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBDCu;
        goto label_2edbdc;
    }
    ctx->pc = 0x2EDBD4u;
    SET_GPR_U32(ctx, 31, 0x2EDBDCu);
    ctx->pc = 0x2EDBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBD4u;
    // 0x2edbd8: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDBD4u, 0x2EDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBDCu;
label_2edbdc:
    // 0x2edbdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2edbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edbe0:
    // 0x2edbe0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2edbe4:
    if (ctx->pc == 0x2EDBE4u) {
        ctx->pc = 0x2EDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE0u;
        // 0x2edbe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBE8u;
        goto label_2edbe8;
    }
    ctx->pc = 0x2EDBE0u;
    {
        const bool branch_taken_0x2edbe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE0u;
        // 0x2edbe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbe0) {
            ctx->pc = 0x2EDC08u;
            goto label_2edc08;
        }
    }
    ctx->pc = 0x2EDBE8u;
label_2edbe8:
    // 0x2edbe8: 0xc0884f6  jal         func_2213D8
label_2edbec:
    if (ctx->pc == 0x2EDBECu) {
        ctx->pc = 0x2EDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE8u;
        // 0x2edbec: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBF0u;
        goto label_2edbf0;
    }
    ctx->pc = 0x2EDBE8u;
    SET_GPR_U32(ctx, 31, 0x2EDBF0u);
    ctx->pc = 0x2EDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBE8u;
    // 0x2edbec: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2EDBE8u, 0x2EDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBF0u;
label_2edbf0:
    // 0x2edbf0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2edbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edbf4:
    // 0x2edbf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2edbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2edbf8:
    // 0x2edbf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2edbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2edbfc:
    // 0x2edbfc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2edbfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2edc00:
    // 0x2edc00: 0xc0bf800  jal         func_2FE000
label_2edc04:
    if (ctx->pc == 0x2EDC04u) {
        ctx->pc = 0x2EDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC00u;
        // 0x2edc04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC08u;
        goto label_2edc08;
    }
    ctx->pc = 0x2EDC00u;
    SET_GPR_U32(ctx, 31, 0x2EDC08u);
    ctx->pc = 0x2EDC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC00u;
    // 0x2edc04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2EDC00u, 0x2EDC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC08u;
label_2edc08:
    // 0x2edc08: 0xc0a367c  jal         func_28D9F0
label_2edc0c:
    if (ctx->pc == 0x2EDC0Cu) {
        ctx->pc = 0x2EDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC08u;
        // 0x2edc0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC10u;
        goto label_2edc10;
    }
    ctx->pc = 0x2EDC08u;
    SET_GPR_U32(ctx, 31, 0x2EDC10u);
    ctx->pc = 0x2EDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC08u;
    // 0x2edc0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDC08u, 0x2EDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC10u;
label_2edc10:
    // 0x2edc10: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_2edc14:
    if (ctx->pc == 0x2EDC14u) {
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC18u;
        goto label_2edc18;
    }
    ctx->pc = 0x2EDC10u;
    {
        const bool branch_taken_0x2edc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc10) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDC18u;
label_2edc18:
    // 0x2edc18: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2edc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2edc1c:
    // 0x2edc1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2edc1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2edc20:
    // 0x2edc20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2edc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2edc24:
    // 0x2edc24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2edc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edc28:
    // 0x2edc28: 0x24060225  addiu       $a2, $zero, 0x225
    ctx->pc = 0x2edc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2edc2c:
    // 0x2edc2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2edc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edc30:
    // 0x2edc30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2edc30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2edc34:
    // 0x2edc34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2edc34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edc38:
    // 0x2edc38: 0xc0be968  jal         func_2FA5A0
label_2edc3c:
    if (ctx->pc == 0x2EDC3Cu) {
        ctx->pc = 0x2EDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC38u;
        // 0x2edc3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC40u;
        goto label_2edc40;
    }
    ctx->pc = 0x2EDC38u;
    SET_GPR_U32(ctx, 31, 0x2EDC40u);
    ctx->pc = 0x2EDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC38u;
    // 0x2edc3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EDC38u, 0x2EDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC40u;
label_2edc40:
    // 0x2edc40: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_2edc44:
    if (ctx->pc == 0x2EDC44u) {
        ctx->pc = 0x2EDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC40u;
        // 0x2edc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC48u;
        goto label_2edc48;
    }
    ctx->pc = 0x2EDC40u;
    {
        const bool branch_taken_0x2edc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC40u;
        // 0x2edc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc40) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDC48u;
label_2edc48:
    // 0x2edc48: 0x14620079  bne         $v1, $v0, . + 4 + (0x79 << 2)
label_2edc4c:
    if (ctx->pc == 0x2EDC4Cu) {
        ctx->pc = 0x2EDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC48u;
        // 0x2edc4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC50u;
        goto label_2edc50;
    }
    ctx->pc = 0x2EDC48u;
    {
        const bool branch_taken_0x2edc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC48u;
        // 0x2edc4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc48) {
            ctx->pc = 0x2EDE30u;
            goto label_2ede30;
        }
    }
    ctx->pc = 0x2EDC50u;
label_2edc50:
    // 0x2edc50: 0xc089018  jal         func_224060
label_2edc54:
    if (ctx->pc == 0x2EDC54u) {
        ctx->pc = 0x2EDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC50u;
        // 0x2edc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC58u;
        goto label_2edc58;
    }
    ctx->pc = 0x2EDC50u;
    SET_GPR_U32(ctx, 31, 0x2EDC58u);
    ctx->pc = 0x2EDC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC50u;
    // 0x2edc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EDC50u, 0x2EDC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC58u;
label_2edc58:
    // 0x2edc58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2edc5c:
    if (ctx->pc == 0x2EDC5Cu) {
        ctx->pc = 0x2EDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC58u;
        // 0x2edc5c: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC60u;
        goto label_2edc60;
    }
    ctx->pc = 0x2EDC58u;
    {
        const bool branch_taken_0x2edc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edc58) {
            ctx->pc = 0x2EDC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDC58u;
            // 0x2edc5c: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDC68u;
            goto label_2edc68;
        }
    }
    ctx->pc = 0x2EDC60u;
label_2edc60:
    // 0x2edc60: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2edc64:
    if (ctx->pc == 0x2EDC64u) {
        ctx->pc = 0x2EDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC60u;
        // 0x2edc64: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC68u;
        goto label_2edc68;
    }
    ctx->pc = 0x2EDC60u;
    {
        const bool branch_taken_0x2edc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC60u;
        // 0x2edc64: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc60) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDC68u;
label_2edc68:
    // 0x2edc68: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2edc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2edc6c:
    // 0x2edc6c: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2edc70:
    // 0x2edc70: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2edc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2edc74:
    // 0x2edc74: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2edc74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2edc78:
    // 0x2edc78: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2edc78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2edc7c:
    // 0x2edc7c: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x2edc7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2edc80:
    // 0x2edc80: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x2edc80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2edc84:
    // 0x2edc84: 0xc0cd7d2  jal         func_335F48
label_2edc88:
    if (ctx->pc == 0x2EDC88u) {
        ctx->pc = 0x2EDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC84u;
        // 0x2edc88: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC8Cu;
        goto label_2edc8c;
    }
    ctx->pc = 0x2EDC84u;
    SET_GPR_U32(ctx, 31, 0x2EDC8Cu);
    ctx->pc = 0x2EDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC84u;
    // 0x2edc88: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2EDC84u, 0x2EDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC8Cu;
label_2edc8c:
    // 0x2edc8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2edc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2edc90:
    // 0x2edc90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2edc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2edc94:
    // 0x2edc94: 0xc0cd780  jal         func_335E00
label_2edc98:
    if (ctx->pc == 0x2EDC98u) {
        ctx->pc = 0x2EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC94u;
        // 0x2edc98: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC9Cu;
        goto label_2edc9c;
    }
    ctx->pc = 0x2EDC94u;
    SET_GPR_U32(ctx, 31, 0x2EDC9Cu);
    ctx->pc = 0x2EDC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC94u;
    // 0x2edc98: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2EDC94u, 0x2EDC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC9Cu;
label_2edc9c:
    // 0x2edc9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2edc9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2edca0:
    // 0x2edca0: 0xc0cd742  jal         func_335D08
label_2edca4:
    if (ctx->pc == 0x2EDCA4u) {
        ctx->pc = 0x2EDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCA0u;
        // 0x2edca4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCA8u;
        goto label_2edca8;
    }
    ctx->pc = 0x2EDCA0u;
    SET_GPR_U32(ctx, 31, 0x2EDCA8u);
    ctx->pc = 0x2EDCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCA0u;
    // 0x2edca4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2EDCA0u, 0x2EDCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCA8u;
label_2edca8:
    // 0x2edca8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2edca8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2edcac:
    // 0x2edcac: 0xc0cdd2e  jal         func_3374B8
label_2edcb0:
    if (ctx->pc == 0x2EDCB0u) {
        ctx->pc = 0x2EDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCACu;
        // 0x2edcb0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCB4u;
        goto label_2edcb4;
    }
    ctx->pc = 0x2EDCACu;
    SET_GPR_U32(ctx, 31, 0x2EDCB4u);
    ctx->pc = 0x2EDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCACu;
    // 0x2edcb0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2EDCACu, 0x2EDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCB4u;
label_2edcb4:
    // 0x2edcb4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2edcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2edcb8:
    // 0x2edcb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2edcb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2edcbc:
    // 0x2edcbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2edcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2edcc0:
    // 0x2edcc0: 0x0  nop
    ctx->pc = 0x2edcc0u;
    // NOP
label_2edcc4:
    // 0x2edcc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2edcc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edcc8:
    // 0x2edcc8: 0x0  nop
    ctx->pc = 0x2edcc8u;
    // NOP
label_2edccc:
    // 0x2edccc: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2edcd0:
    if (ctx->pc == 0x2EDCD0u) {
        ctx->pc = 0x2EDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCCCu;
        // 0x2edcd0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCD4u;
        goto label_2edcd4;
    }
    ctx->pc = 0x2EDCCCu;
    {
        const bool branch_taken_0x2edccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edccc) {
            ctx->pc = 0x2EDCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDCCCu;
            // 0x2edcd0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDD10u;
            goto label_2edd10;
        }
    }
    ctx->pc = 0x2EDCD4u;
label_2edcd4:
    // 0x2edcd4: 0xc0a367c  jal         func_28D9F0
label_2edcd8:
    if (ctx->pc == 0x2EDCD8u) {
        ctx->pc = 0x2EDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCD4u;
        // 0x2edcd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCDCu;
        goto label_2edcdc;
    }
    ctx->pc = 0x2EDCD4u;
    SET_GPR_U32(ctx, 31, 0x2EDCDCu);
    ctx->pc = 0x2EDCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCD4u;
    // 0x2edcd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDCD4u, 0x2EDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCDCu;
label_2edcdc:
    // 0x2edcdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2edcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edce0:
    // 0x2edce0: 0x12000081  beqz        $s0, . + 4 + (0x81 << 2)
label_2edce4:
    if (ctx->pc == 0x2EDCE4u) {
        ctx->pc = 0x2EDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCE0u;
        // 0x2edce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCE8u;
        goto label_2edce8;
    }
    ctx->pc = 0x2EDCE0u;
    {
        const bool branch_taken_0x2edce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCE0u;
        // 0x2edce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edce0) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDCE8u;
label_2edce8:
    // 0x2edce8: 0xc0884f6  jal         func_2213D8
label_2edcec:
    if (ctx->pc == 0x2EDCECu) {
        ctx->pc = 0x2EDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCE8u;
        // 0x2edcec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCF0u;
        goto label_2edcf0;
    }
    ctx->pc = 0x2EDCE8u;
    SET_GPR_U32(ctx, 31, 0x2EDCF0u);
    ctx->pc = 0x2EDCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCE8u;
    // 0x2edcec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2EDCE8u, 0x2EDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCF0u;
label_2edcf0:
    // 0x2edcf0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2edcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edcf4:
    // 0x2edcf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2edcf8:
    // 0x2edcf8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2edcf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2edcfc:
    // 0x2edcfc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2edcfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2edd00:
    // 0x2edd00: 0xc0bf800  jal         func_2FE000
label_2edd04:
    if (ctx->pc == 0x2EDD04u) {
        ctx->pc = 0x2EDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD00u;
        // 0x2edd04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD08u;
        goto label_2edd08;
    }
    ctx->pc = 0x2EDD00u;
    SET_GPR_U32(ctx, 31, 0x2EDD08u);
    ctx->pc = 0x2EDD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD00u;
    // 0x2edd04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2EDD00u, 0x2EDD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD08u;
label_2edd08:
    // 0x2edd08: 0x10000077  b           . + 4 + (0x77 << 2)
label_2edd0c:
    if (ctx->pc == 0x2EDD0Cu) {
        ctx->pc = 0x2EDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD08u;
        // 0x2edd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD10u;
        goto label_2edd10;
    }
    ctx->pc = 0x2EDD08u;
    {
        const bool branch_taken_0x2edd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD08u;
        // 0x2edd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd08) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDD10u;
label_2edd10:
    // 0x2edd10: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2edd10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edd14:
    // 0x2edd14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2edd18:
    // 0x2edd18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2edd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2edd1c:
    // 0x2edd1c: 0xc4550140  lwc1        $f21, 0x140($v0)
    ctx->pc = 0x2edd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2edd20:
    // 0x2edd20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2edd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edd24:
    // 0x2edd24: 0xc0888a2  jal         func_222288
label_2edd28:
    if (ctx->pc == 0x2EDD28u) {
        ctx->pc = 0x2EDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD24u;
        // 0x2edd28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD2Cu;
        goto label_2edd2c;
    }
    ctx->pc = 0x2EDD24u;
    SET_GPR_U32(ctx, 31, 0x2EDD2Cu);
    ctx->pc = 0x2EDD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD24u;
    // 0x2edd28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2EDD24u, 0x2EDD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD2Cu;
label_2edd2c:
    // 0x2edd2c: 0x5452001d  bnel        $v0, $s2, . + 4 + (0x1D << 2)
label_2edd30:
    if (ctx->pc == 0x2EDD30u) {
        ctx->pc = 0x2EDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD2Cu;
        // 0x2edd30: 0x9222002f  lbu         $v0, 0x2F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD34u;
        goto label_2edd34;
    }
    ctx->pc = 0x2EDD2Cu;
    {
        const bool branch_taken_0x2edd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2edd2c) {
            ctx->pc = 0x2EDD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDD2Cu;
            // 0x2edd30: 0x9222002f  lbu         $v0, 0x2F($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDA4u;
            goto label_2edda4;
        }
    }
    ctx->pc = 0x2EDD34u;
label_2edd34:
    // 0x2edd34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2edd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edd38:
    // 0x2edd38: 0xc0a3fa4  jal         func_28FE90
label_2edd3c:
    if (ctx->pc == 0x2EDD3Cu) {
        ctx->pc = 0x2EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD38u;
        // 0x2edd3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD40u;
        goto label_2edd40;
    }
    ctx->pc = 0x2EDD38u;
    SET_GPR_U32(ctx, 31, 0x2EDD40u);
    ctx->pc = 0x2EDD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD38u;
    // 0x2edd3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2EDD38u, 0x2EDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD40u;
label_2edd40:
    // 0x2edd40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2edd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edd44:
    // 0x2edd44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2edd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edd48:
    // 0x2edd48: 0xc0a7a84  jal         func_29EA10
label_2edd4c:
    if (ctx->pc == 0x2EDD4Cu) {
        ctx->pc = 0x2EDD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD48u;
        // 0x2edd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD50u;
        goto label_2edd50;
    }
    ctx->pc = 0x2EDD48u;
    SET_GPR_U32(ctx, 31, 0x2EDD50u);
    ctx->pc = 0x2EDD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD48u;
    // 0x2edd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2EDD48u, 0x2EDD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD50u;
label_2edd50:
    // 0x2edd50: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_2edd54:
    if (ctx->pc == 0x2EDD54u) {
        ctx->pc = 0x2EDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD50u;
        // 0x2edd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD58u;
        goto label_2edd58;
    }
    ctx->pc = 0x2EDD50u;
    {
        const bool branch_taken_0x2edd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2EDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD50u;
        // 0x2edd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd50) {
            ctx->pc = 0x2EDD78u;
            goto label_2edd78;
        }
    }
    ctx->pc = 0x2EDD58u;
label_2edd58:
    // 0x2edd58: 0xc0a7a84  jal         func_29EA10
label_2edd5c:
    if (ctx->pc == 0x2EDD5Cu) {
        ctx->pc = 0x2EDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD58u;
        // 0x2edd5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD60u;
        goto label_2edd60;
    }
    ctx->pc = 0x2EDD58u;
    SET_GPR_U32(ctx, 31, 0x2EDD60u);
    ctx->pc = 0x2EDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD58u;
    // 0x2edd5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2EDD58u, 0x2EDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD60u;
label_2edd60:
    // 0x2edd60: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
label_2edd64:
    if (ctx->pc == 0x2EDD64u) {
        ctx->pc = 0x2EDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD60u;
        // 0x2edd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD68u;
        goto label_2edd68;
    }
    ctx->pc = 0x2EDD60u;
    {
        const bool branch_taken_0x2edd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2EDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD60u;
        // 0x2edd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd60) {
            ctx->pc = 0x2EDD78u;
            goto label_2edd78;
        }
    }
    ctx->pc = 0x2EDD68u;
label_2edd68:
    // 0x2edd68: 0xc0a7a84  jal         func_29EA10
label_2edd6c:
    if (ctx->pc == 0x2EDD6Cu) {
        ctx->pc = 0x2EDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD68u;
        // 0x2edd6c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD70u;
        goto label_2edd70;
    }
    ctx->pc = 0x2EDD68u;
    SET_GPR_U32(ctx, 31, 0x2EDD70u);
    ctx->pc = 0x2EDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD68u;
    // 0x2edd6c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2EDD68u, 0x2EDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD70u;
label_2edd70:
    // 0x2edd70: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2edd74:
    if (ctx->pc == 0x2EDD74u) {
        ctx->pc = 0x2EDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD70u;
        // 0x2edd74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD78u;
        goto label_2edd78;
    }
    ctx->pc = 0x2EDD70u;
    {
        const bool branch_taken_0x2edd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD70u;
        // 0x2edd74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd70) {
            ctx->pc = 0x2EDD80u;
            goto label_2edd80;
        }
    }
    ctx->pc = 0x2EDD78u;
label_2edd78:
    // 0x2edd78: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2edd78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edd7c:
    // 0x2edd7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2edd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2edd80:
    // 0x2edd80: 0xc0cdb26  jal         func_336C98
label_2edd84:
    if (ctx->pc == 0x2EDD84u) {
        ctx->pc = 0x2EDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD80u;
        // 0x2edd84: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD88u;
        goto label_2edd88;
    }
    ctx->pc = 0x2EDD80u;
    SET_GPR_U32(ctx, 31, 0x2EDD88u);
    ctx->pc = 0x2EDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD80u;
    // 0x2edd84: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x2EDD80u, 0x2EDD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD88u;
label_2edd88:
    // 0x2edd88: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2edd88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_2edd8c:
    // 0x2edd8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2edd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edd90:
    // 0x2edd90: 0x0  nop
    ctx->pc = 0x2edd90u;
    // NOP
label_2edd94:
    // 0x2edd94: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_2edd98:
    if (ctx->pc == 0x2EDD98u) {
        ctx->pc = 0x2EDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD94u;
        // 0x2edd98: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDD9Cu;
        goto label_2edd9c;
    }
    ctx->pc = 0x2EDD94u;
    {
        const bool branch_taken_0x2edd94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edd94) {
            ctx->pc = 0x2EDD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDD94u;
            // 0x2edd98: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDD0u;
            goto label_2eddd0;
        }
    }
    ctx->pc = 0x2EDD9Cu;
label_2edd9c:
    // 0x2edd9c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2edda0:
    if (ctx->pc == 0x2EDDA0u) {
        ctx->pc = 0x2EDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD9Cu;
        // 0x2edda0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDA4u;
        goto label_2edda4;
    }
    ctx->pc = 0x2EDD9Cu;
    {
        const bool branch_taken_0x2edd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD9Cu;
        // 0x2edda0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd9c) {
            ctx->pc = 0x2EDDD4u;
            goto label_2eddd4;
        }
    }
    ctx->pc = 0x2EDDA4u;
label_2edda4:
    // 0x2edda4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2edda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2edda8:
    // 0x2edda8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2edda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2eddac:
    // 0x2eddac: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x2eddacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2eddb0:
    // 0x2eddb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2eddb4:
    if (ctx->pc == 0x2EDDB4u) {
        ctx->pc = 0x2EDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDB0u;
        // 0x2eddb4: 0xa222002f  sb          $v0, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDB8u;
        goto label_2eddb8;
    }
    ctx->pc = 0x2EDDB0u;
    {
        const bool branch_taken_0x2eddb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDB0u;
        // 0x2eddb4: 0xa222002f  sb          $v0, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddb0) {
            ctx->pc = 0x2EDDD0u;
            goto label_2eddd0;
        }
    }
    ctx->pc = 0x2EDDB8u;
label_2eddb8:
    // 0x2eddb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eddbc:
    // 0x2eddbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eddbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eddc0:
    // 0x2eddc0: 0xc0a33f8  jal         func_28CFE0
label_2eddc4:
    if (ctx->pc == 0x2EDDC4u) {
        ctx->pc = 0x2EDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDC0u;
        // 0x2eddc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDC8u;
        goto label_2eddc8;
    }
    ctx->pc = 0x2EDDC0u;
    SET_GPR_U32(ctx, 31, 0x2EDDC8u);
    ctx->pc = 0x2EDDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDC0u;
    // 0x2eddc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2EDDC0u, 0x2EDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDC8u;
label_2eddc8:
    // 0x2eddc8: 0x10000047  b           . + 4 + (0x47 << 2)
label_2eddcc:
    if (ctx->pc == 0x2EDDCCu) {
        ctx->pc = 0x2EDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDC8u;
        // 0x2eddcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDD0u;
        goto label_2eddd0;
    }
    ctx->pc = 0x2EDDC8u;
    {
        const bool branch_taken_0x2eddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDC8u;
        // 0x2eddcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddc8) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDDD0u;
label_2eddd0:
    // 0x2eddd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eddd4:
    // 0x2eddd4: 0x16e20013  bne         $s7, $v0, . + 4 + (0x13 << 2)
label_2eddd8:
    if (ctx->pc == 0x2EDDD8u) {
        ctx->pc = 0x2EDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDD4u;
        // 0x2eddd8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDDCu;
        goto label_2edddc;
    }
    ctx->pc = 0x2EDDD4u;
    {
        const bool branch_taken_0x2eddd4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDD4u;
        // 0x2eddd8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddd4) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDDDCu;
label_2edddc:
    // 0x2edddc: 0xc086618  jal         func_219860
label_2edde0:
    if (ctx->pc == 0x2EDDE0u) {
        ctx->pc = 0x2EDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDDCu;
        // 0x2edde0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDE4u;
        goto label_2edde4;
    }
    ctx->pc = 0x2EDDDCu;
    SET_GPR_U32(ctx, 31, 0x2EDDE4u);
    ctx->pc = 0x2EDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDDCu;
    // 0x2edde0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2EDDDCu, 0x2EDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDE4u;
label_2edde4:
    // 0x2edde4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2edde8:
    // 0x2edde8: 0xc08bfa0  jal         func_22FE80
label_2eddec:
    if (ctx->pc == 0x2EDDECu) {
        ctx->pc = 0x2EDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDE8u;
        // 0x2eddec: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDF0u;
        goto label_2eddf0;
    }
    ctx->pc = 0x2EDDE8u;
    SET_GPR_U32(ctx, 31, 0x2EDDF0u);
    ctx->pc = 0x2EDDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDE8u;
    // 0x2eddec: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2EDDE8u, 0x2EDDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDF0u;
label_2eddf0:
    // 0x2eddf0: 0xc0a367c  jal         func_28D9F0
label_2eddf4:
    if (ctx->pc == 0x2EDDF4u) {
        ctx->pc = 0x2EDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDF0u;
        // 0x2eddf4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDF8u;
        goto label_2eddf8;
    }
    ctx->pc = 0x2EDDF0u;
    SET_GPR_U32(ctx, 31, 0x2EDDF8u);
    ctx->pc = 0x2EDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDF0u;
    // 0x2eddf4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDDF0u, 0x2EDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDF8u;
label_2eddf8:
    // 0x2eddf8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2eddfc:
    if (ctx->pc == 0x2EDDFCu) {
        ctx->pc = 0x2EDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDF8u;
        // 0x2eddfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE00u;
        goto label_2ede00;
    }
    ctx->pc = 0x2EDDF8u;
    {
        const bool branch_taken_0x2eddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDF8u;
        // 0x2eddfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddf8) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDE00u;
label_2ede00:
    // 0x2ede00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ede00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ede04:
    // 0x2ede04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ede04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ede08:
    // 0x2ede08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ede08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ede0c:
    // 0x2ede0c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2ede0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2ede10:
    // 0x2ede10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ede10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede14:
    // 0x2ede14: 0xc0bf3d4  jal         func_2FCF50
label_2ede18:
    if (ctx->pc == 0x2EDE18u) {
        ctx->pc = 0x2EDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE14u;
        // 0x2ede18: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE1Cu;
        goto label_2ede1c;
    }
    ctx->pc = 0x2EDE14u;
    SET_GPR_U32(ctx, 31, 0x2EDE1Cu);
    ctx->pc = 0x2EDE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE14u;
    // 0x2ede18: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2EDE14u, 0x2EDE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE1Cu;
label_2ede1c:
    // 0x2ede1c: 0x10000032  b           . + 4 + (0x32 << 2)
label_2ede20:
    if (ctx->pc == 0x2EDE20u) {
        ctx->pc = 0x2EDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE1Cu;
        // 0x2ede20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE24u;
        goto label_2ede24;
    }
    ctx->pc = 0x2EDE1Cu;
    {
        const bool branch_taken_0x2ede1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE1Cu;
        // 0x2ede20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede1c) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDE24u;
label_2ede24:
    // 0x2ede24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ede24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede28:
    // 0x2ede28: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2ede2c:
    if (ctx->pc == 0x2EDE2Cu) {
        ctx->pc = 0x2EDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE28u;
        // 0x2ede2c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE30u;
        goto label_2ede30;
    }
    ctx->pc = 0x2EDE28u;
    {
        const bool branch_taken_0x2ede28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE28u;
        // 0x2ede2c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede28) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDE30u;
label_2ede30:
    // 0x2ede30: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_2ede34:
    if (ctx->pc == 0x2EDE34u) {
        ctx->pc = 0x2EDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE30u;
        // 0x2ede34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE38u;
        goto label_2ede38;
    }
    ctx->pc = 0x2EDE30u;
    {
        const bool branch_taken_0x2ede30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE30u;
        // 0x2ede34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede30) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDE38u;
label_2ede38:
    // 0x2ede38: 0xc089018  jal         func_224060
label_2ede3c:
    if (ctx->pc == 0x2EDE3Cu) {
        ctx->pc = 0x2EDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE38u;
        // 0x2ede3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE40u;
        goto label_2ede40;
    }
    ctx->pc = 0x2EDE38u;
    SET_GPR_U32(ctx, 31, 0x2EDE40u);
    ctx->pc = 0x2EDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE38u;
    // 0x2ede3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EDE38u, 0x2EDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE40u;
label_2ede40:
    // 0x2ede40: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2ede44:
    if (ctx->pc == 0x2EDE44u) {
        ctx->pc = 0x2EDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE40u;
        // 0x2ede44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE48u;
        goto label_2ede48;
    }
    ctx->pc = 0x2EDE40u;
    {
        const bool branch_taken_0x2ede40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ede40) {
            ctx->pc = 0x2EDE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE40u;
            // 0x2ede44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDEBCu;
            goto label_2edebc;
        }
    }
    ctx->pc = 0x2EDE48u;
label_2ede48:
    // 0x2ede48: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2ede48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2ede4c:
    // 0x2ede4c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2ede50:
    if (ctx->pc == 0x2EDE50u) {
        ctx->pc = 0x2EDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE4Cu;
        // 0x2ede50: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE54u;
        goto label_2ede54;
    }
    ctx->pc = 0x2EDE4Cu;
    {
        const bool branch_taken_0x2ede4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE4Cu;
        // 0x2ede50: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede4c) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDE54u;
label_2ede54:
    // 0x2ede54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ede54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ede58:
    // 0x2ede58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ede58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede5c:
    // 0x2ede5c: 0xc0a33f8  jal         func_28CFE0
label_2ede60:
    if (ctx->pc == 0x2EDE60u) {
        ctx->pc = 0x2EDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE5Cu;
        // 0x2ede60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE64u;
        goto label_2ede64;
    }
    ctx->pc = 0x2EDE5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDE64u);
    ctx->pc = 0x2EDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE5Cu;
    // 0x2ede60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2EDE5Cu, 0x2EDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE64u;
label_2ede64:
    // 0x2ede64: 0x9222002b  lbu         $v0, 0x2B($s1)
    ctx->pc = 0x2ede64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
label_2ede68:
    // 0x2ede68: 0x9223002e  lbu         $v1, 0x2E($s1)
    ctx->pc = 0x2ede68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_2ede6c:
    // 0x2ede6c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2ede6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ede70:
    // 0x2ede70: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_2ede74:
    if (ctx->pc == 0x2EDE74u) {
        ctx->pc = 0x2EDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE70u;
        // 0x2ede74: 0xa224002b  sb          $a0, 0x2B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE78u;
        goto label_2ede78;
    }
    ctx->pc = 0x2EDE70u;
    {
        const bool branch_taken_0x2ede70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE70u;
        // 0x2ede74: 0xa224002b  sb          $a0, 0x2B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede70) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDE78u;
label_2ede78:
    // 0x2ede78: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2ede78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2ede7c:
    // 0x2ede7c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ede7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ede80:
    // 0x2ede80: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2ede80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2ede84:
    // 0x2ede84: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2ede84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ede88:
    // 0x2ede88: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_2ede8c:
    if (ctx->pc == 0x2EDE8Cu) {
        ctx->pc = 0x2EDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE88u;
        // 0x2ede8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE90u;
        goto label_2ede90;
    }
    ctx->pc = 0x2EDE88u;
    {
        const bool branch_taken_0x2ede88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE88u;
        // 0x2ede8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede88) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDE90u;
label_2ede90:
    // 0x2ede90: 0xc08bfbc  jal         func_22FEF0
label_2ede94:
    if (ctx->pc == 0x2EDE94u) {
        ctx->pc = 0x2EDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE90u;
        // 0x2ede94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE98u;
        goto label_2ede98;
    }
    ctx->pc = 0x2EDE90u;
    SET_GPR_U32(ctx, 31, 0x2EDE98u);
    ctx->pc = 0x2EDE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE90u;
    // 0x2ede94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2EDE90u, 0x2EDE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE98u;
label_2ede98:
    // 0x2ede98: 0xc0a367c  jal         func_28D9F0
label_2ede9c:
    if (ctx->pc == 0x2EDE9Cu) {
        ctx->pc = 0x2EDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE98u;
        // 0x2ede9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEA0u;
        goto label_2edea0;
    }
    ctx->pc = 0x2EDE98u;
    SET_GPR_U32(ctx, 31, 0x2EDEA0u);
    ctx->pc = 0x2EDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE98u;
    // 0x2ede9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDE98u, 0x2EDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEA0u;
label_2edea0:
    // 0x2edea0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2edea4:
    if (ctx->pc == 0x2EDEA4u) {
        ctx->pc = 0x2EDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEA0u;
        // 0x2edea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEA8u;
        goto label_2edea8;
    }
    ctx->pc = 0x2EDEA0u;
    {
        const bool branch_taken_0x2edea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEA0u;
        // 0x2edea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edea0) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDEA8u;
label_2edea8:
    // 0x2edea8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2edea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2edeac:
    // 0x2edeac: 0xc0bebdc  jal         func_2FAF70
label_2edeb0:
    if (ctx->pc == 0x2EDEB0u) {
        ctx->pc = 0x2EDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEACu;
        // 0x2edeb0: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEB4u;
        goto label_2edeb4;
    }
    ctx->pc = 0x2EDEACu;
    SET_GPR_U32(ctx, 31, 0x2EDEB4u);
    ctx->pc = 0x2EDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEACu;
    // 0x2edeb0: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2EDEACu, 0x2EDEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEB4u;
label_2edeb4:
    // 0x2edeb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2edeb8:
    if (ctx->pc == 0x2EDEB8u) {
        ctx->pc = 0x2EDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEB4u;
        // 0x2edeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEBCu;
        goto label_2edebc;
    }
    ctx->pc = 0x2EDEB4u;
    {
        const bool branch_taken_0x2edeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEB4u;
        // 0x2edeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edeb4) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDEBCu;
label_2edebc:
    // 0x2edebc: 0xc0bb53c  jal         func_2ED4F0
label_2edec0:
    if (ctx->pc == 0x2EDEC0u) {
        ctx->pc = 0x2EDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEBCu;
        // 0x2edec0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEC4u;
        goto label_2edec4;
    }
    ctx->pc = 0x2EDEBCu;
    SET_GPR_U32(ctx, 31, 0x2EDEC4u);
    ctx->pc = 0x2EDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEBCu;
    // 0x2edec0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED4F0u, 0x2EDEBCu, 0x2EDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEC4u;
label_2edec4:
    // 0x2edec4: 0xc0a367c  jal         func_28D9F0
label_2edec8:
    if (ctx->pc == 0x2EDEC8u) {
        ctx->pc = 0x2EDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEC4u;
        // 0x2edec8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDECCu;
        goto label_2edecc;
    }
    ctx->pc = 0x2EDEC4u;
    SET_GPR_U32(ctx, 31, 0x2EDECCu);
    ctx->pc = 0x2EDEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEC4u;
    // 0x2edec8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EDEC4u, 0x2EDECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDECCu;
label_2edecc:
    // 0x2edecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eded0:
    if (ctx->pc == 0x2EDED0u) {
        ctx->pc = 0x2EDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDECCu;
        // 0x2eded0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDED4u;
        goto label_2eded4;
    }
    ctx->pc = 0x2EDECCu;
    {
        const bool branch_taken_0x2edecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDECCu;
        // 0x2eded0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edecc) {
            ctx->pc = 0x2EDEE4u;
            goto label_2edee4;
        }
    }
    ctx->pc = 0x2EDED4u;
label_2eded4:
    // 0x2eded4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eded8:
    // 0x2eded8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2eded8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ededc:
    // 0x2ededc: 0xc0bebac  jal         func_2FAEB0
label_2edee0:
    if (ctx->pc == 0x2EDEE0u) {
        ctx->pc = 0x2EDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEDCu;
        // 0x2edee0: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEE4u;
        goto label_2edee4;
    }
    ctx->pc = 0x2EDEDCu;
    SET_GPR_U32(ctx, 31, 0x2EDEE4u);
    ctx->pc = 0x2EDEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEDCu;
    // 0x2edee0: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2EDEDCu, 0x2EDEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEE4u;
label_2edee4:
    // 0x2edee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2edee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edee8:
    // 0x2edee8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2edee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2edeec:
    // 0x2edeec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2edeecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2edef0:
    // 0x2edef0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2edef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2edef4:
    // 0x2edef4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2edef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2edef8:
    // 0x2edef8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2edef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2edefc:
    // 0x2edefc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2edefcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2edf00:
    // 0x2edf00: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2edf00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2edf04:
    // 0x2edf04: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2edf04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2edf08:
    // 0x2edf08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2edf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2edf0c:
    // 0x2edf0c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2edf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2edf10:
    // 0x2edf10: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2edf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2edf14:
    // 0x2edf14: 0x3e00008  jr          $ra
label_2edf18:
    if (ctx->pc == 0x2EDF18u) {
        ctx->pc = 0x2EDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF14u;
        // 0x2edf18: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDF1Cu;
        goto label_2edf1c;
    }
    ctx->pc = 0x2EDF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF14u;
        // 0x2edf18: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDF1Cu;
label_2edf1c:
    // 0x2edf1c: 0x0  nop
    ctx->pc = 0x2edf1cu;
    // NOP
    ctx->pc = 0x2edf20u;
}
