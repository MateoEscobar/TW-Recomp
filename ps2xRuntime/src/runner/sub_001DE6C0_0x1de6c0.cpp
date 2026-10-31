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

// Function: sub_001DE6C0
// Address: 0x1de6c0 - 0x1ded00
void sub_001DE6C0_0x1de6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE6C0_0x1de6c0");
#endif

    switch (ctx->pc) {
        case 0x1de6c0u: goto label_1de6c0;
        case 0x1de6c4u: goto label_1de6c4;
        case 0x1de6c8u: goto label_1de6c8;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6d0u: goto label_1de6d0;
        case 0x1de6d4u: goto label_1de6d4;
        case 0x1de6d8u: goto label_1de6d8;
        case 0x1de6dcu: goto label_1de6dc;
        case 0x1de6e0u: goto label_1de6e0;
        case 0x1de6e4u: goto label_1de6e4;
        case 0x1de6e8u: goto label_1de6e8;
        case 0x1de6ecu: goto label_1de6ec;
        case 0x1de6f0u: goto label_1de6f0;
        case 0x1de6f4u: goto label_1de6f4;
        case 0x1de6f8u: goto label_1de6f8;
        case 0x1de6fcu: goto label_1de6fc;
        case 0x1de700u: goto label_1de700;
        case 0x1de704u: goto label_1de704;
        case 0x1de708u: goto label_1de708;
        case 0x1de70cu: goto label_1de70c;
        case 0x1de710u: goto label_1de710;
        case 0x1de714u: goto label_1de714;
        case 0x1de718u: goto label_1de718;
        case 0x1de71cu: goto label_1de71c;
        case 0x1de720u: goto label_1de720;
        case 0x1de724u: goto label_1de724;
        case 0x1de728u: goto label_1de728;
        case 0x1de72cu: goto label_1de72c;
        case 0x1de730u: goto label_1de730;
        case 0x1de734u: goto label_1de734;
        case 0x1de738u: goto label_1de738;
        case 0x1de73cu: goto label_1de73c;
        case 0x1de740u: goto label_1de740;
        case 0x1de744u: goto label_1de744;
        case 0x1de748u: goto label_1de748;
        case 0x1de74cu: goto label_1de74c;
        case 0x1de750u: goto label_1de750;
        case 0x1de754u: goto label_1de754;
        case 0x1de758u: goto label_1de758;
        case 0x1de75cu: goto label_1de75c;
        case 0x1de760u: goto label_1de760;
        case 0x1de764u: goto label_1de764;
        case 0x1de768u: goto label_1de768;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de770u: goto label_1de770;
        case 0x1de774u: goto label_1de774;
        case 0x1de778u: goto label_1de778;
        case 0x1de77cu: goto label_1de77c;
        case 0x1de780u: goto label_1de780;
        case 0x1de784u: goto label_1de784;
        case 0x1de788u: goto label_1de788;
        case 0x1de78cu: goto label_1de78c;
        case 0x1de790u: goto label_1de790;
        case 0x1de794u: goto label_1de794;
        case 0x1de798u: goto label_1de798;
        case 0x1de79cu: goto label_1de79c;
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7a4u: goto label_1de7a4;
        case 0x1de7a8u: goto label_1de7a8;
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b0u: goto label_1de7b0;
        case 0x1de7b4u: goto label_1de7b4;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7c4u: goto label_1de7c4;
        case 0x1de7c8u: goto label_1de7c8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7d4u: goto label_1de7d4;
        case 0x1de7d8u: goto label_1de7d8;
        case 0x1de7dcu: goto label_1de7dc;
        case 0x1de7e0u: goto label_1de7e0;
        case 0x1de7e4u: goto label_1de7e4;
        case 0x1de7e8u: goto label_1de7e8;
        case 0x1de7ecu: goto label_1de7ec;
        case 0x1de7f0u: goto label_1de7f0;
        case 0x1de7f4u: goto label_1de7f4;
        case 0x1de7f8u: goto label_1de7f8;
        case 0x1de7fcu: goto label_1de7fc;
        case 0x1de800u: goto label_1de800;
        case 0x1de804u: goto label_1de804;
        case 0x1de808u: goto label_1de808;
        case 0x1de80cu: goto label_1de80c;
        case 0x1de810u: goto label_1de810;
        case 0x1de814u: goto label_1de814;
        case 0x1de818u: goto label_1de818;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de820u: goto label_1de820;
        case 0x1de824u: goto label_1de824;
        case 0x1de828u: goto label_1de828;
        case 0x1de82cu: goto label_1de82c;
        case 0x1de830u: goto label_1de830;
        case 0x1de834u: goto label_1de834;
        case 0x1de838u: goto label_1de838;
        case 0x1de83cu: goto label_1de83c;
        case 0x1de840u: goto label_1de840;
        case 0x1de844u: goto label_1de844;
        case 0x1de848u: goto label_1de848;
        case 0x1de84cu: goto label_1de84c;
        case 0x1de850u: goto label_1de850;
        case 0x1de854u: goto label_1de854;
        case 0x1de858u: goto label_1de858;
        case 0x1de85cu: goto label_1de85c;
        case 0x1de860u: goto label_1de860;
        case 0x1de864u: goto label_1de864;
        case 0x1de868u: goto label_1de868;
        case 0x1de86cu: goto label_1de86c;
        case 0x1de870u: goto label_1de870;
        case 0x1de874u: goto label_1de874;
        case 0x1de878u: goto label_1de878;
        case 0x1de87cu: goto label_1de87c;
        case 0x1de880u: goto label_1de880;
        case 0x1de884u: goto label_1de884;
        case 0x1de888u: goto label_1de888;
        case 0x1de88cu: goto label_1de88c;
        case 0x1de890u: goto label_1de890;
        case 0x1de894u: goto label_1de894;
        case 0x1de898u: goto label_1de898;
        case 0x1de89cu: goto label_1de89c;
        case 0x1de8a0u: goto label_1de8a0;
        case 0x1de8a4u: goto label_1de8a4;
        case 0x1de8a8u: goto label_1de8a8;
        case 0x1de8acu: goto label_1de8ac;
        case 0x1de8b0u: goto label_1de8b0;
        case 0x1de8b4u: goto label_1de8b4;
        case 0x1de8b8u: goto label_1de8b8;
        case 0x1de8bcu: goto label_1de8bc;
        case 0x1de8c0u: goto label_1de8c0;
        case 0x1de8c4u: goto label_1de8c4;
        case 0x1de8c8u: goto label_1de8c8;
        case 0x1de8ccu: goto label_1de8cc;
        case 0x1de8d0u: goto label_1de8d0;
        case 0x1de8d4u: goto label_1de8d4;
        case 0x1de8d8u: goto label_1de8d8;
        case 0x1de8dcu: goto label_1de8dc;
        case 0x1de8e0u: goto label_1de8e0;
        case 0x1de8e4u: goto label_1de8e4;
        case 0x1de8e8u: goto label_1de8e8;
        case 0x1de8ecu: goto label_1de8ec;
        case 0x1de8f0u: goto label_1de8f0;
        case 0x1de8f4u: goto label_1de8f4;
        case 0x1de8f8u: goto label_1de8f8;
        case 0x1de8fcu: goto label_1de8fc;
        case 0x1de900u: goto label_1de900;
        case 0x1de904u: goto label_1de904;
        case 0x1de908u: goto label_1de908;
        case 0x1de90cu: goto label_1de90c;
        case 0x1de910u: goto label_1de910;
        case 0x1de914u: goto label_1de914;
        case 0x1de918u: goto label_1de918;
        case 0x1de91cu: goto label_1de91c;
        case 0x1de920u: goto label_1de920;
        case 0x1de924u: goto label_1de924;
        case 0x1de928u: goto label_1de928;
        case 0x1de92cu: goto label_1de92c;
        case 0x1de930u: goto label_1de930;
        case 0x1de934u: goto label_1de934;
        case 0x1de938u: goto label_1de938;
        case 0x1de93cu: goto label_1de93c;
        case 0x1de940u: goto label_1de940;
        case 0x1de944u: goto label_1de944;
        case 0x1de948u: goto label_1de948;
        case 0x1de94cu: goto label_1de94c;
        case 0x1de950u: goto label_1de950;
        case 0x1de954u: goto label_1de954;
        case 0x1de958u: goto label_1de958;
        case 0x1de95cu: goto label_1de95c;
        case 0x1de960u: goto label_1de960;
        case 0x1de964u: goto label_1de964;
        case 0x1de968u: goto label_1de968;
        case 0x1de96cu: goto label_1de96c;
        case 0x1de970u: goto label_1de970;
        case 0x1de974u: goto label_1de974;
        case 0x1de978u: goto label_1de978;
        case 0x1de97cu: goto label_1de97c;
        case 0x1de980u: goto label_1de980;
        case 0x1de984u: goto label_1de984;
        case 0x1de988u: goto label_1de988;
        case 0x1de98cu: goto label_1de98c;
        case 0x1de990u: goto label_1de990;
        case 0x1de994u: goto label_1de994;
        case 0x1de998u: goto label_1de998;
        case 0x1de99cu: goto label_1de99c;
        case 0x1de9a0u: goto label_1de9a0;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9a8u: goto label_1de9a8;
        case 0x1de9acu: goto label_1de9ac;
        case 0x1de9b0u: goto label_1de9b0;
        case 0x1de9b4u: goto label_1de9b4;
        case 0x1de9b8u: goto label_1de9b8;
        case 0x1de9bcu: goto label_1de9bc;
        case 0x1de9c0u: goto label_1de9c0;
        case 0x1de9c4u: goto label_1de9c4;
        case 0x1de9c8u: goto label_1de9c8;
        case 0x1de9ccu: goto label_1de9cc;
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9d4u: goto label_1de9d4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9dcu: goto label_1de9dc;
        case 0x1de9e0u: goto label_1de9e0;
        case 0x1de9e4u: goto label_1de9e4;
        case 0x1de9e8u: goto label_1de9e8;
        case 0x1de9ecu: goto label_1de9ec;
        case 0x1de9f0u: goto label_1de9f0;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1de9fcu: goto label_1de9fc;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea04u: goto label_1dea04;
        case 0x1dea08u: goto label_1dea08;
        case 0x1dea0cu: goto label_1dea0c;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea14u: goto label_1dea14;
        case 0x1dea18u: goto label_1dea18;
        case 0x1dea1cu: goto label_1dea1c;
        case 0x1dea20u: goto label_1dea20;
        case 0x1dea24u: goto label_1dea24;
        case 0x1dea28u: goto label_1dea28;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea30u: goto label_1dea30;
        case 0x1dea34u: goto label_1dea34;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea3cu: goto label_1dea3c;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea44u: goto label_1dea44;
        case 0x1dea48u: goto label_1dea48;
        case 0x1dea4cu: goto label_1dea4c;
        case 0x1dea50u: goto label_1dea50;
        case 0x1dea54u: goto label_1dea54;
        case 0x1dea58u: goto label_1dea58;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1dea60u: goto label_1dea60;
        case 0x1dea64u: goto label_1dea64;
        case 0x1dea68u: goto label_1dea68;
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1dea70u: goto label_1dea70;
        case 0x1dea74u: goto label_1dea74;
        case 0x1dea78u: goto label_1dea78;
        case 0x1dea7cu: goto label_1dea7c;
        case 0x1dea80u: goto label_1dea80;
        case 0x1dea84u: goto label_1dea84;
        case 0x1dea88u: goto label_1dea88;
        case 0x1dea8cu: goto label_1dea8c;
        case 0x1dea90u: goto label_1dea90;
        case 0x1dea94u: goto label_1dea94;
        case 0x1dea98u: goto label_1dea98;
        case 0x1dea9cu: goto label_1dea9c;
        case 0x1deaa0u: goto label_1deaa0;
        case 0x1deaa4u: goto label_1deaa4;
        case 0x1deaa8u: goto label_1deaa8;
        case 0x1deaacu: goto label_1deaac;
        case 0x1deab0u: goto label_1deab0;
        case 0x1deab4u: goto label_1deab4;
        case 0x1deab8u: goto label_1deab8;
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac0u: goto label_1deac0;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deac8u: goto label_1deac8;
        case 0x1deaccu: goto label_1deacc;
        case 0x1dead0u: goto label_1dead0;
        case 0x1dead4u: goto label_1dead4;
        case 0x1dead8u: goto label_1dead8;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deae4u: goto label_1deae4;
        case 0x1deae8u: goto label_1deae8;
        case 0x1deaecu: goto label_1deaec;
        case 0x1deaf0u: goto label_1deaf0;
        case 0x1deaf4u: goto label_1deaf4;
        case 0x1deaf8u: goto label_1deaf8;
        case 0x1deafcu: goto label_1deafc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb04u: goto label_1deb04;
        case 0x1deb08u: goto label_1deb08;
        case 0x1deb0cu: goto label_1deb0c;
        case 0x1deb10u: goto label_1deb10;
        case 0x1deb14u: goto label_1deb14;
        case 0x1deb18u: goto label_1deb18;
        case 0x1deb1cu: goto label_1deb1c;
        case 0x1deb20u: goto label_1deb20;
        case 0x1deb24u: goto label_1deb24;
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb2cu: goto label_1deb2c;
        case 0x1deb30u: goto label_1deb30;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb38u: goto label_1deb38;
        case 0x1deb3cu: goto label_1deb3c;
        case 0x1deb40u: goto label_1deb40;
        case 0x1deb44u: goto label_1deb44;
        case 0x1deb48u: goto label_1deb48;
        case 0x1deb4cu: goto label_1deb4c;
        case 0x1deb50u: goto label_1deb50;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deb58u: goto label_1deb58;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb60u: goto label_1deb60;
        case 0x1deb64u: goto label_1deb64;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb6cu: goto label_1deb6c;
        case 0x1deb70u: goto label_1deb70;
        case 0x1deb74u: goto label_1deb74;
        case 0x1deb78u: goto label_1deb78;
        case 0x1deb7cu: goto label_1deb7c;
        case 0x1deb80u: goto label_1deb80;
        case 0x1deb84u: goto label_1deb84;
        case 0x1deb88u: goto label_1deb88;
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deb90u: goto label_1deb90;
        case 0x1deb94u: goto label_1deb94;
        case 0x1deb98u: goto label_1deb98;
        case 0x1deb9cu: goto label_1deb9c;
        case 0x1deba0u: goto label_1deba0;
        case 0x1deba4u: goto label_1deba4;
        case 0x1deba8u: goto label_1deba8;
        case 0x1debacu: goto label_1debac;
        case 0x1debb0u: goto label_1debb0;
        case 0x1debb4u: goto label_1debb4;
        case 0x1debb8u: goto label_1debb8;
        case 0x1debbcu: goto label_1debbc;
        case 0x1debc0u: goto label_1debc0;
        case 0x1debc4u: goto label_1debc4;
        case 0x1debc8u: goto label_1debc8;
        case 0x1debccu: goto label_1debcc;
        case 0x1debd0u: goto label_1debd0;
        case 0x1debd4u: goto label_1debd4;
        case 0x1debd8u: goto label_1debd8;
        case 0x1debdcu: goto label_1debdc;
        case 0x1debe0u: goto label_1debe0;
        case 0x1debe4u: goto label_1debe4;
        case 0x1debe8u: goto label_1debe8;
        case 0x1debecu: goto label_1debec;
        case 0x1debf0u: goto label_1debf0;
        case 0x1debf4u: goto label_1debf4;
        case 0x1debf8u: goto label_1debf8;
        case 0x1debfcu: goto label_1debfc;
        case 0x1dec00u: goto label_1dec00;
        case 0x1dec04u: goto label_1dec04;
        case 0x1dec08u: goto label_1dec08;
        case 0x1dec0cu: goto label_1dec0c;
        case 0x1dec10u: goto label_1dec10;
        case 0x1dec14u: goto label_1dec14;
        case 0x1dec18u: goto label_1dec18;
        case 0x1dec1cu: goto label_1dec1c;
        case 0x1dec20u: goto label_1dec20;
        case 0x1dec24u: goto label_1dec24;
        case 0x1dec28u: goto label_1dec28;
        case 0x1dec2cu: goto label_1dec2c;
        case 0x1dec30u: goto label_1dec30;
        case 0x1dec34u: goto label_1dec34;
        case 0x1dec38u: goto label_1dec38;
        case 0x1dec3cu: goto label_1dec3c;
        case 0x1dec40u: goto label_1dec40;
        case 0x1dec44u: goto label_1dec44;
        case 0x1dec48u: goto label_1dec48;
        case 0x1dec4cu: goto label_1dec4c;
        case 0x1dec50u: goto label_1dec50;
        case 0x1dec54u: goto label_1dec54;
        case 0x1dec58u: goto label_1dec58;
        case 0x1dec5cu: goto label_1dec5c;
        case 0x1dec60u: goto label_1dec60;
        case 0x1dec64u: goto label_1dec64;
        case 0x1dec68u: goto label_1dec68;
        case 0x1dec6cu: goto label_1dec6c;
        case 0x1dec70u: goto label_1dec70;
        case 0x1dec74u: goto label_1dec74;
        case 0x1dec78u: goto label_1dec78;
        case 0x1dec7cu: goto label_1dec7c;
        case 0x1dec80u: goto label_1dec80;
        case 0x1dec84u: goto label_1dec84;
        case 0x1dec88u: goto label_1dec88;
        case 0x1dec8cu: goto label_1dec8c;
        case 0x1dec90u: goto label_1dec90;
        case 0x1dec94u: goto label_1dec94;
        case 0x1dec98u: goto label_1dec98;
        case 0x1dec9cu: goto label_1dec9c;
        case 0x1deca0u: goto label_1deca0;
        case 0x1deca4u: goto label_1deca4;
        case 0x1deca8u: goto label_1deca8;
        case 0x1decacu: goto label_1decac;
        case 0x1decb0u: goto label_1decb0;
        case 0x1decb4u: goto label_1decb4;
        case 0x1decb8u: goto label_1decb8;
        case 0x1decbcu: goto label_1decbc;
        case 0x1decc0u: goto label_1decc0;
        case 0x1decc4u: goto label_1decc4;
        case 0x1decc8u: goto label_1decc8;
        case 0x1decccu: goto label_1deccc;
        case 0x1decd0u: goto label_1decd0;
        case 0x1decd4u: goto label_1decd4;
        case 0x1decd8u: goto label_1decd8;
        case 0x1decdcu: goto label_1decdc;
        case 0x1dece0u: goto label_1dece0;
        case 0x1dece4u: goto label_1dece4;
        case 0x1dece8u: goto label_1dece8;
        case 0x1dececu: goto label_1decec;
        case 0x1decf0u: goto label_1decf0;
        case 0x1decf4u: goto label_1decf4;
        case 0x1decf8u: goto label_1decf8;
        case 0x1decfcu: goto label_1decfc;
        default: break;
    }

    ctx->pc = 0x1de6c0u;

label_1de6c0:
    // 0x1de6c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1de6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1de6c4:
    // 0x1de6c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1de6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1de6c8:
    // 0x1de6c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1de6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1de6cc:
    // 0x1de6cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1de6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1de6d0:
    // 0x1de6d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1de6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1de6d4:
    // 0x1de6d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1de6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de6d8:
    // 0x1de6d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1de6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1de6dc:
    // 0x1de6dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de6e0:
    // 0x1de6e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1de6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1de6e4:
    // 0x1de6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1de6e8:
    // 0x1de6e8: 0xc079faa  jal         func_1E7EA8
label_1de6ec:
    if (ctx->pc == 0x1DE6ECu) {
        ctx->pc = 0x1DE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6E8u;
        // 0x1de6ec: 0x8e642af0  lw          $a0, 0x2AF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6F0u;
        goto label_1de6f0;
    }
    ctx->pc = 0x1DE6E8u;
    SET_GPR_U32(ctx, 31, 0x1DE6F0u);
    ctx->pc = 0x1DE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6E8u;
    // 0x1de6ec: 0x8e642af0  lw          $a0, 0x2AF0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DE6E8u, 0x1DE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6F0u;
label_1de6f0:
    // 0x1de6f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de6f4:
    // 0x1de6f4: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x1de6f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1de6f8:
    // 0x1de6f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1de6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de6fc:
    // 0x1de6fc: 0x10600158  beqz        $v1, . + 4 + (0x158 << 2)
label_1de700:
    if (ctx->pc == 0x1DE700u) {
        ctx->pc = 0x1DE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6FCu;
        // 0x1de700: 0xac40ee2c  sw          $zero, -0x11D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE704u;
        goto label_1de704;
    }
    ctx->pc = 0x1DE6FCu;
    {
        const bool branch_taken_0x1de6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6FCu;
        // 0x1de700: 0xac40ee2c  sw          $zero, -0x11D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6fc) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DE704u;
label_1de704:
    // 0x1de704: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1de704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1de708:
    // 0x1de708: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1de708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1de70c:
    // 0x1de70c: 0x244264b0  addiu       $v0, $v0, 0x64B0
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25776));
label_1de710:
    // 0x1de710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1de714:
    // 0x1de714: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1de714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1de718:
    // 0x1de718: 0x800008  jr          $a0
label_1de71c:
    if (ctx->pc == 0x1DE71Cu) {
        ctx->pc = 0x1DE720u;
        goto label_1de720;
    }
    ctx->pc = 0x1DE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE720u: goto label_1de720;
            case 0x1DE7A8u: goto label_1de7a8;
            case 0x1DE7FCu: goto label_1de7fc;
            case 0x1DE848u: goto label_1de848;
            case 0x1DE878u: goto label_1de878;
            case 0x1DE9D8u: goto label_1de9d8;
            case 0x1DE9E4u: goto label_1de9e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE718u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DE720u;
label_1de720:
    // 0x1de720: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de724:
    // 0x1de724: 0xc107458  jal         func_41D160
label_1de728:
    if (ctx->pc == 0x1DE728u) {
        ctx->pc = 0x1DE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE724u;
        // 0x1de728: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE72Cu;
        goto label_1de72c;
    }
    ctx->pc = 0x1DE724u;
    SET_GPR_U32(ctx, 31, 0x1DE72Cu);
    ctx->pc = 0x1DE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE724u;
    // 0x1de728: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DE724u, 0x1DE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE72Cu;
label_1de72c:
    // 0x1de72c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1de730:
    if (ctx->pc == 0x1DE730u) {
        ctx->pc = 0x1DE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE72Cu;
        // 0x1de730: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE734u;
        goto label_1de734;
    }
    ctx->pc = 0x1DE72Cu;
    {
        const bool branch_taken_0x1de72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE72Cu;
        // 0x1de730: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de72c) {
            ctx->pc = 0x1DE760u;
            goto label_1de760;
        }
    }
    ctx->pc = 0x1DE734u;
label_1de734:
    // 0x1de734: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1de738:
    // 0x1de738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de73c:
    // 0x1de73c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de740:
    // 0x1de740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de744:
    // 0x1de744: 0xe440ee24  swc1        $f0, -0x11DC($v0)
    ctx->pc = 0x1de744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962724), bits); }
label_1de748:
    // 0x1de748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de74c:
    // 0x1de74c: 0xe4a0ee20  swc1        $f0, -0x11E0($a1)
    ctx->pc = 0x1de74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962720), bits); }
label_1de750:
    // 0x1de750: 0xc077534  jal         func_1DD4D0
label_1de754:
    if (ctx->pc == 0x1DE754u) {
        ctx->pc = 0x1DE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE750u;
        // 0x1de754: 0xae633a74  sw          $v1, 0x3A74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE758u;
        goto label_1de758;
    }
    ctx->pc = 0x1DE750u;
    SET_GPR_U32(ctx, 31, 0x1DE758u);
    ctx->pc = 0x1DE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE750u;
    // 0x1de754: 0xae633a74  sw          $v1, 0x3A74($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4D0u, 0x1DE750u, 0x1DE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE758u;
label_1de758:
    // 0x1de758: 0x1000000b  b           . + 4 + (0xB << 2)
label_1de75c:
    if (ctx->pc == 0x1DE75Cu) {
        ctx->pc = 0x1DE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE758u;
        // 0x1de75c: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE760u;
        goto label_1de760;
    }
    ctx->pc = 0x1DE758u;
    {
        const bool branch_taken_0x1de758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE758u;
        // 0x1de75c: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de758) {
            ctx->pc = 0x1DE788u;
            goto label_1de788;
        }
    }
    ctx->pc = 0x1DE760u;
label_1de760:
    // 0x1de760: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1de764:
    // 0x1de764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de768:
    // 0x1de768: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1de768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1de76c:
    // 0x1de76c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de770:
    // 0x1de770: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de774:
    // 0x1de774: 0xe440ee24  swc1        $f0, -0x11DC($v0)
    ctx->pc = 0x1de774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962724), bits); }
label_1de778:
    // 0x1de778: 0xe460ee20  swc1        $f0, -0x11E0($v1)
    ctx->pc = 0x1de778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962720), bits); }
label_1de77c:
    // 0x1de77c: 0xc077534  jal         func_1DD4D0
label_1de780:
    if (ctx->pc == 0x1DE780u) {
        ctx->pc = 0x1DE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE77Cu;
        // 0x1de780: 0xae603a74  sw          $zero, 0x3A74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE784u;
        goto label_1de784;
    }
    ctx->pc = 0x1DE77Cu;
    SET_GPR_U32(ctx, 31, 0x1DE784u);
    ctx->pc = 0x1DE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE77Cu;
    // 0x1de780: 0xae603a74  sw          $zero, 0x3A74($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4D0u, 0x1DE77Cu, 0x1DE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE784u;
label_1de784:
    // 0x1de784: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1de784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1de788:
    // 0x1de788: 0xc067b9c  jal         func_19EE70
label_1de78c:
    if (ctx->pc == 0x1DE78Cu) {
        ctx->pc = 0x1DE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE788u;
        // 0x1de78c: 0x26702dd0  addiu       $s0, $s3, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE790u;
        goto label_1de790;
    }
    ctx->pc = 0x1DE788u;
    SET_GPR_U32(ctx, 31, 0x1DE790u);
    ctx->pc = 0x1DE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE788u;
    // 0x1de78c: 0x26702dd0  addiu       $s0, $s3, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE788u, 0x1DE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE790u;
label_1de790:
    // 0x1de790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de794:
    // 0x1de794: 0xc073b0a  jal         func_1CEC28
label_1de798:
    if (ctx->pc == 0x1DE798u) {
        ctx->pc = 0x1DE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE794u;
        // 0x1de798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE79Cu;
        goto label_1de79c;
    }
    ctx->pc = 0x1DE794u;
    SET_GPR_U32(ctx, 31, 0x1DE79Cu);
    ctx->pc = 0x1DE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE794u;
    // 0x1de798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1DE794u, 0x1DE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE79Cu;
label_1de79c:
    // 0x1de79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de7a0:
    // 0x1de7a0: 0x1000012f  b           . + 4 + (0x12F << 2)
label_1de7a4:
    if (ctx->pc == 0x1DE7A4u) {
        ctx->pc = 0x1DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7A0u;
        // 0x1de7a4: 0xae621ba8  sw          $v0, 0x1BA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7A8u;
        goto label_1de7a8;
    }
    ctx->pc = 0x1DE7A0u;
    {
        const bool branch_taken_0x1de7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7A0u;
        // 0x1de7a4: 0xae621ba8  sw          $v0, 0x1BA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7a0) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DE7A8u;
label_1de7a8:
    // 0x1de7a8: 0x26633bb0  addiu       $v1, $s3, 0x3BB0
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15280));
label_1de7ac:
    // 0x1de7ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1de7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1de7b0:
    // 0x1de7b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1de7b4:
    if (ctx->pc == 0x1DE7B4u) {
        ctx->pc = 0x1DE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7B0u;
        // 0x1de7b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7B8u;
        goto label_1de7b8;
    }
    ctx->pc = 0x1DE7B0u;
    {
        const bool branch_taken_0x1de7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7B0u;
        // 0x1de7b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7b0) {
            ctx->pc = 0x1DE7D8u;
            goto label_1de7d8;
        }
    }
    ctx->pc = 0x1DE7B8u;
label_1de7b8:
    // 0x1de7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de7bc:
    // 0x1de7bc: 0xae621ba4  sw          $v0, 0x1BA4($s3)
    ctx->pc = 0x1de7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7076), GPR_U32(ctx, 2));
label_1de7c0:
    // 0x1de7c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1de7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1de7c4:
    // 0x1de7c4: 0xae604350  sw          $zero, 0x4350($s3)
    ctx->pc = 0x1de7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17232), GPR_U32(ctx, 0));
label_1de7c8:
    // 0x1de7c8: 0xc079f9e  jal         func_1E7E78
label_1de7cc:
    if (ctx->pc == 0x1DE7CCu) {
        ctx->pc = 0x1DE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7C8u;
        // 0x1de7cc: 0x8e642af0  lw          $a0, 0x2AF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7D0u;
        goto label_1de7d0;
    }
    ctx->pc = 0x1DE7C8u;
    SET_GPR_U32(ctx, 31, 0x1DE7D0u);
    ctx->pc = 0x1DE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7C8u;
    // 0x1de7cc: 0x8e642af0  lw          $a0, 0x2AF0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE7C8u, 0x1DE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7D0u;
label_1de7d0:
    // 0x1de7d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1de7d4:
    if (ctx->pc == 0x1DE7D4u) {
        ctx->pc = 0x1DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D0u;
        // 0x1de7d4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7D8u;
        goto label_1de7d8;
    }
    ctx->pc = 0x1DE7D0u;
    {
        const bool branch_taken_0x1de7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D0u;
        // 0x1de7d4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7d0) {
            ctx->pc = 0x1DE7E0u;
            goto label_1de7e0;
        }
    }
    ctx->pc = 0x1DE7D8u;
label_1de7d8:
    // 0x1de7d8: 0xae601b88  sw          $zero, 0x1B88($s3)
    ctx->pc = 0x1de7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7048), GPR_U32(ctx, 0));
label_1de7dc:
    // 0x1de7dc: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1de7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1de7e0:
    // 0x1de7e0: 0xc067b9c  jal         func_19EE70
label_1de7e4:
    if (ctx->pc == 0x1DE7E4u) {
        ctx->pc = 0x1DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E0u;
        // 0x1de7e4: 0x26702dd0  addiu       $s0, $s3, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7E8u;
        goto label_1de7e8;
    }
    ctx->pc = 0x1DE7E0u;
    SET_GPR_U32(ctx, 31, 0x1DE7E8u);
    ctx->pc = 0x1DE7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7E0u;
    // 0x1de7e4: 0x26702dd0  addiu       $s0, $s3, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE7E0u, 0x1DE7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7E8u;
label_1de7e8:
    // 0x1de7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de7ec:
    // 0x1de7ec: 0xc073b0a  jal         func_1CEC28
label_1de7f0:
    if (ctx->pc == 0x1DE7F0u) {
        ctx->pc = 0x1DE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7ECu;
        // 0x1de7f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7F4u;
        goto label_1de7f4;
    }
    ctx->pc = 0x1DE7ECu;
    SET_GPR_U32(ctx, 31, 0x1DE7F4u);
    ctx->pc = 0x1DE7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7ECu;
    // 0x1de7f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1DE7ECu, 0x1DE7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7F4u;
label_1de7f4:
    // 0x1de7f4: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1de7f8:
    if (ctx->pc == 0x1DE7F8u) {
        ctx->pc = 0x1DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7F4u;
        // 0x1de7f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7FCu;
        goto label_1de7fc;
    }
    ctx->pc = 0x1DE7F4u;
    {
        const bool branch_taken_0x1de7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7F4u;
        // 0x1de7f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7f4) {
            ctx->pc = 0x1DEC64u;
            goto label_1dec64;
        }
    }
    ctx->pc = 0x1DE7FCu;
label_1de7fc:
    // 0x1de7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de800:
    // 0x1de800: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x1de800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_1de804:
    // 0x1de804: 0xc067b9c  jal         func_19EE70
label_1de808:
    if (ctx->pc == 0x1DE808u) {
        ctx->pc = 0x1DE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE804u;
        // 0x1de808: 0xae623a78  sw          $v0, 0x3A78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE80Cu;
        goto label_1de80c;
    }
    ctx->pc = 0x1DE804u;
    SET_GPR_U32(ctx, 31, 0x1DE80Cu);
    ctx->pc = 0x1DE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE804u;
    // 0x1de808: 0xae623a78  sw          $v0, 0x3A78($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 14968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE804u, 0x1DE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE80Cu;
label_1de80c:
    // 0x1de80c: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1de80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1de810:
    // 0x1de810: 0xc079f96  jal         func_1E7E58
label_1de814:
    if (ctx->pc == 0x1DE814u) {
        ctx->pc = 0x1DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE810u;
        // 0x1de814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE818u;
        goto label_1de818;
    }
    ctx->pc = 0x1DE810u;
    SET_GPR_U32(ctx, 31, 0x1DE818u);
    ctx->pc = 0x1DE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE810u;
    // 0x1de814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE810u, 0x1DE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE818u;
label_1de818:
    // 0x1de818: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1de81c:
    // 0x1de81c: 0xc079f9e  jal         func_1E7E78
label_1de820:
    if (ctx->pc == 0x1DE820u) {
        ctx->pc = 0x1DE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE81Cu;
        // 0x1de820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE824u;
        goto label_1de824;
    }
    ctx->pc = 0x1DE81Cu;
    SET_GPR_U32(ctx, 31, 0x1DE824u);
    ctx->pc = 0x1DE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE81Cu;
    // 0x1de820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE81Cu, 0x1DE824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE824u;
label_1de824:
    // 0x1de824: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de828:
    // 0x1de828: 0x8c45ecec  lw          $a1, -0x1314($v0)
    ctx->pc = 0x1de828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1de82c:
    // 0x1de82c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1de830:
    // 0x1de830: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1de830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1de834:
    // 0x1de834: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1de834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1de838:
    // 0x1de838: 0x40f809  jalr        $v0
label_1de83c:
    if (ctx->pc == 0x1DE83Cu) {
        ctx->pc = 0x1DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE838u;
        // 0x1de83c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE840u;
        goto label_1de840;
    }
    ctx->pc = 0x1DE838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE840u);
        ctx->pc = 0x1DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE838u;
        // 0x1de83c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE838u, 0x1DE840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE840u;
label_1de840:
    // 0x1de840: 0x10000108  b           . + 4 + (0x108 << 2)
label_1de844:
    if (ctx->pc == 0x1DE844u) {
        ctx->pc = 0x1DE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE840u;
        // 0x1de844: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE848u;
        goto label_1de848;
    }
    ctx->pc = 0x1DE840u;
    {
        const bool branch_taken_0x1de840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE840u;
        // 0x1de844: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de840) {
            ctx->pc = 0x1DEC64u;
            goto label_1dec64;
        }
    }
    ctx->pc = 0x1DE848u;
label_1de848:
    // 0x1de848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de84c:
    // 0x1de84c: 0x24040173  addiu       $a0, $zero, 0x173
    ctx->pc = 0x1de84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
label_1de850:
    // 0x1de850: 0xc067b9c  jal         func_19EE70
label_1de854:
    if (ctx->pc == 0x1DE854u) {
        ctx->pc = 0x1DE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE850u;
        // 0x1de854: 0xae623a7c  sw          $v0, 0x3A7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE858u;
        goto label_1de858;
    }
    ctx->pc = 0x1DE850u;
    SET_GPR_U32(ctx, 31, 0x1DE858u);
    ctx->pc = 0x1DE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE850u;
    // 0x1de854: 0xae623a7c  sw          $v0, 0x3A7C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 14972), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE850u, 0x1DE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE858u;
label_1de858:
    // 0x1de858: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1de85c:
    // 0x1de85c: 0xc079f96  jal         func_1E7E58
label_1de860:
    if (ctx->pc == 0x1DE860u) {
        ctx->pc = 0x1DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE85Cu;
        // 0x1de860: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE864u;
        goto label_1de864;
    }
    ctx->pc = 0x1DE85Cu;
    SET_GPR_U32(ctx, 31, 0x1DE864u);
    ctx->pc = 0x1DE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE85Cu;
    // 0x1de860: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE85Cu, 0x1DE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE864u;
label_1de864:
    // 0x1de864: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1de864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1de868:
    // 0x1de868: 0xc079f9e  jal         func_1E7E78
label_1de86c:
    if (ctx->pc == 0x1DE86Cu) {
        ctx->pc = 0x1DE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE868u;
        // 0x1de86c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE870u;
        goto label_1de870;
    }
    ctx->pc = 0x1DE868u;
    SET_GPR_U32(ctx, 31, 0x1DE870u);
    ctx->pc = 0x1DE86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE868u;
    // 0x1de86c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE868u, 0x1DE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE870u;
label_1de870:
    // 0x1de870: 0x100000fc  b           . + 4 + (0xFC << 2)
label_1de874:
    if (ctx->pc == 0x1DE874u) {
        ctx->pc = 0x1DE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE870u;
        // 0x1de874: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE878u;
        goto label_1de878;
    }
    ctx->pc = 0x1DE870u;
    {
        const bool branch_taken_0x1de870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE870u;
        // 0x1de874: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de870) {
            ctx->pc = 0x1DEC64u;
            goto label_1dec64;
        }
    }
    ctx->pc = 0x1DE878u;
label_1de878:
    // 0x1de878: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de87c:
    // 0x1de87c: 0xc107458  jal         func_41D160
label_1de880:
    if (ctx->pc == 0x1DE880u) {
        ctx->pc = 0x1DE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE87Cu;
        // 0x1de880: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE884u;
        goto label_1de884;
    }
    ctx->pc = 0x1DE87Cu;
    SET_GPR_U32(ctx, 31, 0x1DE884u);
    ctx->pc = 0x1DE880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE87Cu;
    // 0x1de880: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DE87Cu, 0x1DE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE884u;
label_1de884:
    // 0x1de884: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1de888:
    if (ctx->pc == 0x1DE888u) {
        ctx->pc = 0x1DE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE884u;
        // 0x1de888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE88Cu;
        goto label_1de88c;
    }
    ctx->pc = 0x1DE884u;
    {
        const bool branch_taken_0x1de884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE884u;
        // 0x1de888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de884) {
            ctx->pc = 0x1DE8D0u;
            goto label_1de8d0;
        }
    }
    ctx->pc = 0x1DE88Cu;
label_1de88c:
    // 0x1de88c: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x1de88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_1de890:
    // 0x1de890: 0xae621ba0  sw          $v0, 0x1BA0($s3)
    ctx->pc = 0x1de890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7072), GPR_U32(ctx, 2));
label_1de894:
    // 0x1de894: 0x26701bd0  addiu       $s0, $s3, 0x1BD0
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 7120));
label_1de898:
    // 0x1de898: 0xae621bb8  sw          $v0, 0x1BB8($s3)
    ctx->pc = 0x1de898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7096), GPR_U32(ctx, 2));
label_1de89c:
    // 0x1de89c: 0xc067b9c  jal         func_19EE70
label_1de8a0:
    if (ctx->pc == 0x1DE8A0u) {
        ctx->pc = 0x1DE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE89Cu;
        // 0x1de8a0: 0xae621b74  sw          $v0, 0x1B74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8A4u;
        goto label_1de8a4;
    }
    ctx->pc = 0x1DE89Cu;
    SET_GPR_U32(ctx, 31, 0x1DE8A4u);
    ctx->pc = 0x1DE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE89Cu;
    // 0x1de8a0: 0xae621b74  sw          $v0, 0x1B74($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 7028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE89Cu, 0x1DE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8A4u;
label_1de8a4:
    // 0x1de8a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de8a8:
    // 0x1de8a8: 0xc06ec94  jal         func_1BB250
label_1de8ac:
    if (ctx->pc == 0x1DE8ACu) {
        ctx->pc = 0x1DE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8A8u;
        // 0x1de8ac: 0x26641c20  addiu       $a0, $s3, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8B0u;
        goto label_1de8b0;
    }
    ctx->pc = 0x1DE8A8u;
    SET_GPR_U32(ctx, 31, 0x1DE8B0u);
    ctx->pc = 0x1DE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8A8u;
    // 0x1de8ac: 0x26641c20  addiu       $a0, $s3, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DE8A8u, 0x1DE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8B0u;
label_1de8b0:
    // 0x1de8b0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1de8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1de8b4:
    // 0x1de8b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1de8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1de8b8:
    // 0x1de8b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1de8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de8bc:
    // 0x1de8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de8c0:
    // 0x1de8c0: 0xc075920  jal         func_1D6480
label_1de8c4:
    if (ctx->pc == 0x1DE8C4u) {
        ctx->pc = 0x1DE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8C0u;
        // 0x1de8c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8C8u;
        goto label_1de8c8;
    }
    ctx->pc = 0x1DE8C0u;
    SET_GPR_U32(ctx, 31, 0x1DE8C8u);
    ctx->pc = 0x1DE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8C0u;
    // 0x1de8c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DE8C0u, 0x1DE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8C8u;
label_1de8c8:
    // 0x1de8c8: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_1de8cc:
    if (ctx->pc == 0x1DE8CCu) {
        ctx->pc = 0x1DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8C8u;
        // 0x1de8cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8D0u;
        goto label_1de8d0;
    }
    ctx->pc = 0x1DE8C8u;
    {
        const bool branch_taken_0x1de8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8C8u;
        // 0x1de8cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8c8) {
            ctx->pc = 0x1DEC64u;
            goto label_1dec64;
        }
    }
    ctx->pc = 0x1DE8D0u;
label_1de8d0:
    // 0x1de8d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de8d4:
    // 0x1de8d4: 0x24040112  addiu       $a0, $zero, 0x112
    ctx->pc = 0x1de8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
label_1de8d8:
    // 0x1de8d8: 0xae721bb8  sw          $s2, 0x1BB8($s3)
    ctx->pc = 0x1de8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7096), GPR_U32(ctx, 18));
label_1de8dc:
    // 0x1de8dc: 0x267020d0  addiu       $s0, $s3, 0x20D0
    ctx->pc = 0x1de8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8400));
label_1de8e0:
    // 0x1de8e0: 0xc067b9c  jal         func_19EE70
label_1de8e4:
    if (ctx->pc == 0x1DE8E4u) {
        ctx->pc = 0x1DE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8E0u;
        // 0x1de8e4: 0x26712430  addiu       $s1, $s3, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 9264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8E8u;
        goto label_1de8e8;
    }
    ctx->pc = 0x1DE8E0u;
    SET_GPR_U32(ctx, 31, 0x1DE8E8u);
    ctx->pc = 0x1DE8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8E0u;
    // 0x1de8e4: 0x26712430  addiu       $s1, $s3, 0x2430 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 9264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE8E0u, 0x1DE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8E8u;
label_1de8e8:
    // 0x1de8e8: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1de8ec:
    // 0x1de8ec: 0xc079f96  jal         func_1E7E58
label_1de8f0:
    if (ctx->pc == 0x1DE8F0u) {
        ctx->pc = 0x1DE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8ECu;
        // 0x1de8f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8F4u;
        goto label_1de8f4;
    }
    ctx->pc = 0x1DE8ECu;
    SET_GPR_U32(ctx, 31, 0x1DE8F4u);
    ctx->pc = 0x1DE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8ECu;
    // 0x1de8f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE8ECu, 0x1DE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8F4u;
label_1de8f4:
    // 0x1de8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de8f8:
    // 0x1de8f8: 0xc069538  jal         func_1A54E0
label_1de8fc:
    if (ctx->pc == 0x1DE8FCu) {
        ctx->pc = 0x1DE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8F8u;
        // 0x1de8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE900u;
        goto label_1de900;
    }
    ctx->pc = 0x1DE8F8u;
    SET_GPR_U32(ctx, 31, 0x1DE900u);
    ctx->pc = 0x1DE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8F8u;
    // 0x1de8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DE8F8u, 0x1DE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE900u;
label_1de900:
    // 0x1de900: 0xc067b9c  jal         func_19EE70
label_1de904:
    if (ctx->pc == 0x1DE904u) {
        ctx->pc = 0x1DE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE900u;
        // 0x1de904: 0x24040113  addiu       $a0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE908u;
        goto label_1de908;
    }
    ctx->pc = 0x1DE900u;
    SET_GPR_U32(ctx, 31, 0x1DE908u);
    ctx->pc = 0x1DE904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE900u;
    // 0x1de904: 0x24040113  addiu       $a0, $zero, 0x113 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE900u, 0x1DE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE908u;
label_1de908:
    // 0x1de908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de90c:
    // 0x1de90c: 0xc069530  jal         func_1A54C0
label_1de910:
    if (ctx->pc == 0x1DE910u) {
        ctx->pc = 0x1DE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE90Cu;
        // 0x1de910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE914u;
        goto label_1de914;
    }
    ctx->pc = 0x1DE90Cu;
    SET_GPR_U32(ctx, 31, 0x1DE914u);
    ctx->pc = 0x1DE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE90Cu;
    // 0x1de910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DE90Cu, 0x1DE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE914u;
label_1de914:
    // 0x1de914: 0xc067b9c  jal         func_19EE70
label_1de918:
    if (ctx->pc == 0x1DE918u) {
        ctx->pc = 0x1DE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE914u;
        // 0x1de918: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE91Cu;
        goto label_1de91c;
    }
    ctx->pc = 0x1DE914u;
    SET_GPR_U32(ctx, 31, 0x1DE91Cu);
    ctx->pc = 0x1DE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE914u;
    // 0x1de918: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE914u, 0x1DE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE91Cu;
label_1de91c:
    // 0x1de91c: 0x8e642af4  lw          $a0, 0x2AF4($s3)
    ctx->pc = 0x1de91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1de920:
    // 0x1de920: 0xc079f96  jal         func_1E7E58
label_1de924:
    if (ctx->pc == 0x1DE924u) {
        ctx->pc = 0x1DE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE920u;
        // 0x1de924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE928u;
        goto label_1de928;
    }
    ctx->pc = 0x1DE920u;
    SET_GPR_U32(ctx, 31, 0x1DE928u);
    ctx->pc = 0x1DE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE920u;
    // 0x1de924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE920u, 0x1DE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE928u;
label_1de928:
    // 0x1de928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de92c:
    // 0x1de92c: 0xc069538  jal         func_1A54E0
label_1de930:
    if (ctx->pc == 0x1DE930u) {
        ctx->pc = 0x1DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE92Cu;
        // 0x1de930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE934u;
        goto label_1de934;
    }
    ctx->pc = 0x1DE92Cu;
    SET_GPR_U32(ctx, 31, 0x1DE934u);
    ctx->pc = 0x1DE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE92Cu;
    // 0x1de930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DE92Cu, 0x1DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE934u;
label_1de934:
    // 0x1de934: 0xc067b9c  jal         func_19EE70
label_1de938:
    if (ctx->pc == 0x1DE938u) {
        ctx->pc = 0x1DE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE934u;
        // 0x1de938: 0x24040115  addiu       $a0, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE93Cu;
        goto label_1de93c;
    }
    ctx->pc = 0x1DE934u;
    SET_GPR_U32(ctx, 31, 0x1DE93Cu);
    ctx->pc = 0x1DE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE934u;
    // 0x1de938: 0x24040115  addiu       $a0, $zero, 0x115 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE934u, 0x1DE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE93Cu;
label_1de93c:
    // 0x1de93c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de940:
    // 0x1de940: 0xc069530  jal         func_1A54C0
label_1de944:
    if (ctx->pc == 0x1DE944u) {
        ctx->pc = 0x1DE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE940u;
        // 0x1de944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE948u;
        goto label_1de948;
    }
    ctx->pc = 0x1DE940u;
    SET_GPR_U32(ctx, 31, 0x1DE948u);
    ctx->pc = 0x1DE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE940u;
    // 0x1de944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DE940u, 0x1DE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE948u;
label_1de948:
    // 0x1de948: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1de948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1de94c:
    // 0x1de94c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1de94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1de950:
    // 0x1de950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de954:
    // 0x1de954: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de958:
    // 0x1de958: 0xae723a74  sw          $s2, 0x3A74($s3)
    ctx->pc = 0x1de958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 18));
label_1de95c:
    // 0x1de95c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1de95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1de960:
    // 0x1de960: 0xe440ee24  swc1        $f0, -0x11DC($v0)
    ctx->pc = 0x1de960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962724), bits); }
label_1de964:
    // 0x1de964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de968:
    // 0x1de968: 0xe460ee20  swc1        $f0, -0x11E0($v1)
    ctx->pc = 0x1de968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962720), bits); }
label_1de96c:
    // 0x1de96c: 0xc077534  jal         func_1DD4D0
label_1de970:
    if (ctx->pc == 0x1DE970u) {
        ctx->pc = 0x1DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE96Cu;
        // 0x1de970: 0xae80ee2c  sw          $zero, -0x11D4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294962732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE974u;
        goto label_1de974;
    }
    ctx->pc = 0x1DE96Cu;
    SET_GPR_U32(ctx, 31, 0x1DE974u);
    ctx->pc = 0x1DE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE96Cu;
    // 0x1de970: 0xae80ee2c  sw          $zero, -0x11D4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4D0u, 0x1DE96Cu, 0x1DE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE974u;
label_1de974:
    // 0x1de974: 0x8e621bb4  lw          $v0, 0x1BB4($s3)
    ctx->pc = 0x1de974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7092)));
label_1de978:
    // 0x1de978: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1de97c:
    if (ctx->pc == 0x1DE97Cu) {
        ctx->pc = 0x1DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE978u;
        // 0x1de97c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE980u;
        goto label_1de980;
    }
    ctx->pc = 0x1DE978u;
    {
        const bool branch_taken_0x1de978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE978u;
        // 0x1de97c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de978) {
            ctx->pc = 0x1DE98Cu;
            goto label_1de98c;
        }
    }
    ctx->pc = 0x1DE980u;
label_1de980:
    // 0x1de980: 0x8e621bb8  lw          $v0, 0x1BB8($s3)
    ctx->pc = 0x1de980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7096)));
label_1de984:
    // 0x1de984: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_1de988:
    if (ctx->pc == 0x1DE988u) {
        ctx->pc = 0x1DE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE984u;
        // 0x1de988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE98Cu;
        goto label_1de98c;
    }
    ctx->pc = 0x1DE984u;
    {
        const bool branch_taken_0x1de984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE984u;
        // 0x1de988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de984) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DE98Cu;
label_1de98c:
    // 0x1de98c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1de98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1de990:
    // 0x1de990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1de990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1de994:
    // 0x1de994: 0xc442ee54  lwc1        $f2, -0x11AC($v0)
    ctx->pc = 0x1de994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1de998:
    // 0x1de998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1de99c:
    // 0x1de99c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1de99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1de9a0:
    // 0x1de9a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de9a4:
    // 0x1de9a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de9a8:
    // 0x1de9a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1de9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1de9ac:
    // 0x1de9ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1de9acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1de9b0:
    // 0x1de9b0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1de9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1de9b4:
    // 0x1de9b4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1de9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1de9b8:
    // 0x1de9b8: 0x8e672af4  lw          $a3, 0x2AF4($s3)
    ctx->pc = 0x1de9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1de9bc:
    // 0x1de9bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1de9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1de9c0:
    // 0x1de9c0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1de9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1de9c4:
    // 0x1de9c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1de9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1de9c8:
    // 0x1de9c8: 0x60f809  jalr        $v1
label_1de9cc:
    if (ctx->pc == 0x1DE9CCu) {
        ctx->pc = 0x1DE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9C8u;
        // 0x1de9cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9D0u;
        goto label_1de9d0;
    }
    ctx->pc = 0x1DE9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DE9D0u);
        ctx->pc = 0x1DE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9C8u;
        // 0x1de9cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE9C8u, 0x1DE9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE9D0u;
label_1de9d0:
    // 0x1de9d0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1de9d4:
    if (ctx->pc == 0x1DE9D4u) {
        ctx->pc = 0x1DE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9D0u;
        // 0x1de9d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9D8u;
        goto label_1de9d8;
    }
    ctx->pc = 0x1DE9D0u;
    {
        const bool branch_taken_0x1de9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9D0u;
        // 0x1de9d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9d0) {
            ctx->pc = 0x1DEC64u;
            goto label_1dec64;
        }
    }
    ctx->pc = 0x1DE9D8u;
label_1de9d8:
    // 0x1de9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de9dc:
    // 0x1de9dc: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1de9e0:
    if (ctx->pc == 0x1DE9E0u) {
        ctx->pc = 0x1DE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9DCu;
        // 0x1de9e0: 0xae621b80  sw          $v0, 0x1B80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9E4u;
        goto label_1de9e4;
    }
    ctx->pc = 0x1DE9DCu;
    {
        const bool branch_taken_0x1de9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9DCu;
        // 0x1de9e0: 0xae621b80  sw          $v0, 0x1B80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9dc) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DE9E4u;
label_1de9e4:
    // 0x1de9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de9e8:
    // 0x1de9e8: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_1de9ec:
    // 0x1de9ec: 0xae621bb4  sw          $v0, 0x1BB4($s3)
    ctx->pc = 0x1de9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7092), GPR_U32(ctx, 2));
label_1de9f0:
    // 0x1de9f0: 0xc067b9c  jal         func_19EE70
label_1de9f4:
    if (ctx->pc == 0x1DE9F4u) {
        ctx->pc = 0x1DE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9F0u;
        // 0x1de9f4: 0x26711bd0  addiu       $s1, $s3, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 7120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9F8u;
        goto label_1de9f8;
    }
    ctx->pc = 0x1DE9F0u;
    SET_GPR_U32(ctx, 31, 0x1DE9F8u);
    ctx->pc = 0x1DE9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE9F0u;
    // 0x1de9f4: 0x26711bd0  addiu       $s1, $s3, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE9F0u, 0x1DE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9F8u;
label_1de9f8:
    // 0x1de9f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1de9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1de9fc:
    // 0x1de9fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dea00:
    // 0x1dea00: 0xc06ec94  jal         func_1BB250
label_1dea04:
    if (ctx->pc == 0x1DEA04u) {
        ctx->pc = 0x1DEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA00u;
        // 0x1dea04: 0x26641c20  addiu       $a0, $s3, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA08u;
        goto label_1dea08;
    }
    ctx->pc = 0x1DEA00u;
    SET_GPR_U32(ctx, 31, 0x1DEA08u);
    ctx->pc = 0x1DEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA00u;
    // 0x1dea04: 0x26641c20  addiu       $a0, $s3, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1DEA00u, 0x1DEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA08u;
label_1dea08:
    // 0x1dea08: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1dea08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1dea0c:
    // 0x1dea0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dea0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1dea10:
    // 0x1dea10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dea10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dea14:
    // 0x1dea14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dea18:
    // 0x1dea18: 0xc075920  jal         func_1D6480
label_1dea1c:
    if (ctx->pc == 0x1DEA1Cu) {
        ctx->pc = 0x1DEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA18u;
        // 0x1dea1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA20u;
        goto label_1dea20;
    }
    ctx->pc = 0x1DEA18u;
    SET_GPR_U32(ctx, 31, 0x1DEA20u);
    ctx->pc = 0x1DEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA18u;
    // 0x1dea1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1DEA18u, 0x1DEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA20u;
label_1dea20:
    // 0x1dea20: 0xc107458  jal         func_41D160
label_1dea24:
    if (ctx->pc == 0x1DEA24u) {
        ctx->pc = 0x1DEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA20u;
        // 0x1dea24: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA28u;
        goto label_1dea28;
    }
    ctx->pc = 0x1DEA20u;
    SET_GPR_U32(ctx, 31, 0x1DEA28u);
    ctx->pc = 0x1DEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA20u;
    // 0x1dea24: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DEA20u, 0x1DEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA28u;
label_1dea28:
    // 0x1dea28: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1dea2c:
    if (ctx->pc == 0x1DEA2Cu) {
        ctx->pc = 0x1DEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA28u;
        // 0x1dea2c: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA30u;
        goto label_1dea30;
    }
    ctx->pc = 0x1DEA28u;
    {
        const bool branch_taken_0x1dea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA28u;
        // 0x1dea2c: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea28) {
            ctx->pc = 0x1DEAA4u;
            goto label_1deaa4;
        }
    }
    ctx->pc = 0x1DEA30u;
label_1dea30:
    // 0x1dea30: 0xc067b9c  jal         func_19EE70
label_1dea34:
    if (ctx->pc == 0x1DEA34u) {
        ctx->pc = 0x1DEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA30u;
        // 0x1dea34: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA38u;
        goto label_1dea38;
    }
    ctx->pc = 0x1DEA30u;
    SET_GPR_U32(ctx, 31, 0x1DEA38u);
    ctx->pc = 0x1DEA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA30u;
    // 0x1dea34: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEA30u, 0x1DEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA38u;
label_1dea38:
    // 0x1dea38: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1dea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1dea3c:
    // 0x1dea3c: 0xc079f96  jal         func_1E7E58
label_1dea40:
    if (ctx->pc == 0x1DEA40u) {
        ctx->pc = 0x1DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA3Cu;
        // 0x1dea40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA44u;
        goto label_1dea44;
    }
    ctx->pc = 0x1DEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA44u);
    ctx->pc = 0x1DEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA3Cu;
    // 0x1dea40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEA3Cu, 0x1DEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA44u;
label_1dea44:
    // 0x1dea44: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1dea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1dea48:
    // 0x1dea48: 0xc079f9e  jal         func_1E7E78
label_1dea4c:
    if (ctx->pc == 0x1DEA4Cu) {
        ctx->pc = 0x1DEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA48u;
        // 0x1dea4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA50u;
        goto label_1dea50;
    }
    ctx->pc = 0x1DEA48u;
    SET_GPR_U32(ctx, 31, 0x1DEA50u);
    ctx->pc = 0x1DEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA48u;
    // 0x1dea4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DEA48u, 0x1DEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA50u;
label_1dea50:
    // 0x1dea50: 0xc07f86a  jal         func_1FE1A8
label_1dea54:
    if (ctx->pc == 0x1DEA54u) {
        ctx->pc = 0x1DEA58u;
        goto label_1dea58;
    }
    ctx->pc = 0x1DEA50u;
    SET_GPR_U32(ctx, 31, 0x1DEA58u);
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1DEA50u, 0x1DEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA58u;
label_1dea58:
    // 0x1dea58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dea5c:
    if (ctx->pc == 0x1DEA5Cu) {
        ctx->pc = 0x1DEA60u;
        goto label_1dea60;
    }
    ctx->pc = 0x1DEA58u;
    {
        const bool branch_taken_0x1dea58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea58) {
            ctx->pc = 0x1DEA7Cu;
            goto label_1dea7c;
        }
    }
    ctx->pc = 0x1DEA60u;
label_1dea60:
    // 0x1dea60: 0xc067b9c  jal         func_19EE70
label_1dea64:
    if (ctx->pc == 0x1DEA64u) {
        ctx->pc = 0x1DEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA60u;
        // 0x1dea64: 0x240400de  addiu       $a0, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA68u;
        goto label_1dea68;
    }
    ctx->pc = 0x1DEA60u;
    SET_GPR_U32(ctx, 31, 0x1DEA68u);
    ctx->pc = 0x1DEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA60u;
    // 0x1dea64: 0x240400de  addiu       $a0, $zero, 0xDE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEA60u, 0x1DEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA68u;
label_1dea68:
    // 0x1dea68: 0x8e642af4  lw          $a0, 0x2AF4($s3)
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1dea6c:
    // 0x1dea6c: 0xc079f96  jal         func_1E7E58
label_1dea70:
    if (ctx->pc == 0x1DEA70u) {
        ctx->pc = 0x1DEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA6Cu;
        // 0x1dea70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA74u;
        goto label_1dea74;
    }
    ctx->pc = 0x1DEA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA74u);
    ctx->pc = 0x1DEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA6Cu;
    // 0x1dea70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEA6Cu, 0x1DEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA74u;
label_1dea74:
    // 0x1dea74: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dea78:
    if (ctx->pc == 0x1DEA78u) {
        ctx->pc = 0x1DEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA74u;
        // 0x1dea78: 0x8e642af4  lw          $a0, 0x2AF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA7Cu;
        goto label_1dea7c;
    }
    ctx->pc = 0x1DEA74u;
    {
        const bool branch_taken_0x1dea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA74u;
        // 0x1dea78: 0x8e642af4  lw          $a0, 0x2AF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea74) {
            ctx->pc = 0x1DEA94u;
            goto label_1dea94;
        }
    }
    ctx->pc = 0x1DEA7Cu;
label_1dea7c:
    // 0x1dea7c: 0xc067b9c  jal         func_19EE70
label_1dea80:
    if (ctx->pc == 0x1DEA80u) {
        ctx->pc = 0x1DEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA7Cu;
        // 0x1dea80: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA84u;
        goto label_1dea84;
    }
    ctx->pc = 0x1DEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA84u);
    ctx->pc = 0x1DEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA7Cu;
    // 0x1dea80: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEA7Cu, 0x1DEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA84u;
label_1dea84:
    // 0x1dea84: 0x8e642af4  lw          $a0, 0x2AF4($s3)
    ctx->pc = 0x1dea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1dea88:
    // 0x1dea88: 0xc079f96  jal         func_1E7E58
label_1dea8c:
    if (ctx->pc == 0x1DEA8Cu) {
        ctx->pc = 0x1DEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA88u;
        // 0x1dea8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA90u;
        goto label_1dea90;
    }
    ctx->pc = 0x1DEA88u;
    SET_GPR_U32(ctx, 31, 0x1DEA90u);
    ctx->pc = 0x1DEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA88u;
    // 0x1dea8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEA88u, 0x1DEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA90u;
label_1dea90:
    // 0x1dea90: 0x8e642af4  lw          $a0, 0x2AF4($s3)
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1dea94:
    // 0x1dea94: 0xc079f9e  jal         func_1E7E78
label_1dea98:
    if (ctx->pc == 0x1DEA98u) {
        ctx->pc = 0x1DEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA94u;
        // 0x1dea98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA9Cu;
        goto label_1dea9c;
    }
    ctx->pc = 0x1DEA94u;
    SET_GPR_U32(ctx, 31, 0x1DEA9Cu);
    ctx->pc = 0x1DEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA94u;
    // 0x1dea98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DEA94u, 0x1DEA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA9Cu;
label_1dea9c:
    // 0x1dea9c: 0x10000052  b           . + 4 + (0x52 << 2)
label_1deaa0:
    if (ctx->pc == 0x1DEAA0u) {
        ctx->pc = 0x1DEAA4u;
        goto label_1deaa4;
    }
    ctx->pc = 0x1DEA9Cu;
    {
        const bool branch_taken_0x1dea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea9c) {
            ctx->pc = 0x1DEBE8u;
            goto label_1debe8;
        }
    }
    ctx->pc = 0x1DEAA4u;
label_1deaa4:
    // 0x1deaa4: 0x8c6256e8  lw          $v0, 0x56E8($v1)
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22248)));
label_1deaa8:
    // 0x1deaa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1deaac:
    if (ctx->pc == 0x1DEAACu) {
        ctx->pc = 0x1DEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAA8u;
        // 0x1deaac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAB0u;
        goto label_1deab0;
    }
    ctx->pc = 0x1DEAA8u;
    {
        const bool branch_taken_0x1deaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAA8u;
        // 0x1deaac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deaa8) {
            ctx->pc = 0x1DEAC8u;
            goto label_1deac8;
        }
    }
    ctx->pc = 0x1DEAB0u;
label_1deab0:
    // 0x1deab0: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x1deab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_1deab4:
    // 0x1deab4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1deab8:
    if (ctx->pc == 0x1DEAB8u) {
        ctx->pc = 0x1DEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAB4u;
        // 0x1deab8: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEABCu;
        goto label_1deabc;
    }
    ctx->pc = 0x1DEAB4u;
    {
        const bool branch_taken_0x1deab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAB4u;
        // 0x1deab8: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deab4) {
            ctx->pc = 0x1DEAC4u;
            goto label_1deac4;
        }
    }
    ctx->pc = 0x1DEABCu;
label_1deabc:
    // 0x1deabc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1deac0:
    if (ctx->pc == 0x1DEAC0u) {
        ctx->pc = 0x1DEAC4u;
        goto label_1deac4;
    }
    ctx->pc = 0x1DEABCu;
    {
        const bool branch_taken_0x1deabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deabc) {
            ctx->pc = 0x1DEAC8u;
            goto label_1deac8;
        }
    }
    ctx->pc = 0x1DEAC4u;
label_1deac4:
    // 0x1deac4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1deac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deac8:
    // 0x1deac8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1deacc:
    if (ctx->pc == 0x1DEACCu) {
        ctx->pc = 0x1DEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAC8u;
        // 0x1deacc: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAD0u;
        goto label_1dead0;
    }
    ctx->pc = 0x1DEAC8u;
    {
        const bool branch_taken_0x1deac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAC8u;
        // 0x1deacc: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deac8) {
            ctx->pc = 0x1DEAE4u;
            goto label_1deae4;
        }
    }
    ctx->pc = 0x1DEAD0u;
label_1dead0:
    // 0x1dead0: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1dead0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1dead4:
    // 0x1dead4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1dead4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dead8:
    // 0x1dead8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1deadc:
    // 0x1deadc: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_1deae0:
    if (ctx->pc == 0x1DEAE0u) {
        ctx->pc = 0x1DEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEADCu;
        // 0x1deae0: 0x2404010a  addiu       $a0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAE4u;
        goto label_1deae4;
    }
    ctx->pc = 0x1DEADCu;
    {
        const bool branch_taken_0x1deadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEADCu;
        // 0x1deae0: 0x2404010a  addiu       $a0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deadc) {
            ctx->pc = 0x1DEB7Cu;
            goto label_1deb7c;
        }
    }
    ctx->pc = 0x1DEAE4u;
label_1deae4:
    // 0x1deae4: 0x8e621bac  lw          $v0, 0x1BAC($s3)
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7084)));
label_1deae8:
    // 0x1deae8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1deaec:
    if (ctx->pc == 0x1DEAECu) {
        ctx->pc = 0x1DEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAE8u;
        // 0x1deaec: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAF0u;
        goto label_1deaf0;
    }
    ctx->pc = 0x1DEAE8u;
    {
        const bool branch_taken_0x1deae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAE8u;
        // 0x1deaec: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deae8) {
            ctx->pc = 0x1DEB68u;
            goto label_1deb68;
        }
    }
    ctx->pc = 0x1DEAF0u;
label_1deaf0:
    // 0x1deaf0: 0xc067b9c  jal         func_19EE70
label_1deaf4:
    if (ctx->pc == 0x1DEAF4u) {
        ctx->pc = 0x1DEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAF0u;
        // 0x1deaf4: 0x267020d0  addiu       $s0, $s3, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAF8u;
        goto label_1deaf8;
    }
    ctx->pc = 0x1DEAF0u;
    SET_GPR_U32(ctx, 31, 0x1DEAF8u);
    ctx->pc = 0x1DEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAF0u;
    // 0x1deaf4: 0x267020d0  addiu       $s0, $s3, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEAF0u, 0x1DEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAF8u;
label_1deaf8:
    // 0x1deaf8: 0x26712430  addiu       $s1, $s3, 0x2430
    ctx->pc = 0x1deaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 9264));
label_1deafc:
    // 0x1deafc: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1deb00:
    // 0x1deb00: 0xc079f96  jal         func_1E7E58
label_1deb04:
    if (ctx->pc == 0x1DEB04u) {
        ctx->pc = 0x1DEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB00u;
        // 0x1deb04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB08u;
        goto label_1deb08;
    }
    ctx->pc = 0x1DEB00u;
    SET_GPR_U32(ctx, 31, 0x1DEB08u);
    ctx->pc = 0x1DEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB00u;
    // 0x1deb04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEB00u, 0x1DEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB08u;
label_1deb08:
    // 0x1deb08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1deb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb0c:
    // 0x1deb0c: 0xc069538  jal         func_1A54E0
label_1deb10:
    if (ctx->pc == 0x1DEB10u) {
        ctx->pc = 0x1DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0Cu;
        // 0x1deb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB14u;
        goto label_1deb14;
    }
    ctx->pc = 0x1DEB0Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB14u);
    ctx->pc = 0x1DEB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB0Cu;
    // 0x1deb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DEB0Cu, 0x1DEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB14u;
label_1deb14:
    // 0x1deb14: 0xc067b9c  jal         func_19EE70
label_1deb18:
    if (ctx->pc == 0x1DEB18u) {
        ctx->pc = 0x1DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB14u;
        // 0x1deb18: 0x2404010e  addiu       $a0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB1Cu;
        goto label_1deb1c;
    }
    ctx->pc = 0x1DEB14u;
    SET_GPR_U32(ctx, 31, 0x1DEB1Cu);
    ctx->pc = 0x1DEB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB14u;
    // 0x1deb18: 0x2404010e  addiu       $a0, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEB14u, 0x1DEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB1Cu;
label_1deb1c:
    // 0x1deb1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1deb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1deb20:
    // 0x1deb20: 0xc069530  jal         func_1A54C0
label_1deb24:
    if (ctx->pc == 0x1DEB24u) {
        ctx->pc = 0x1DEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB20u;
        // 0x1deb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB28u;
        goto label_1deb28;
    }
    ctx->pc = 0x1DEB20u;
    SET_GPR_U32(ctx, 31, 0x1DEB28u);
    ctx->pc = 0x1DEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB20u;
    // 0x1deb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DEB20u, 0x1DEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB28u;
label_1deb28:
    // 0x1deb28: 0xc067b9c  jal         func_19EE70
label_1deb2c:
    if (ctx->pc == 0x1DEB2Cu) {
        ctx->pc = 0x1DEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB28u;
        // 0x1deb2c: 0x2404010f  addiu       $a0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB30u;
        goto label_1deb30;
    }
    ctx->pc = 0x1DEB28u;
    SET_GPR_U32(ctx, 31, 0x1DEB30u);
    ctx->pc = 0x1DEB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB28u;
    // 0x1deb2c: 0x2404010f  addiu       $a0, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEB28u, 0x1DEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB30u;
label_1deb30:
    // 0x1deb30: 0x8e642af4  lw          $a0, 0x2AF4($s3)
    ctx->pc = 0x1deb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1deb34:
    // 0x1deb34: 0xc079f96  jal         func_1E7E58
label_1deb38:
    if (ctx->pc == 0x1DEB38u) {
        ctx->pc = 0x1DEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB34u;
        // 0x1deb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB3Cu;
        goto label_1deb3c;
    }
    ctx->pc = 0x1DEB34u;
    SET_GPR_U32(ctx, 31, 0x1DEB3Cu);
    ctx->pc = 0x1DEB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB34u;
    // 0x1deb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEB34u, 0x1DEB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB3Cu;
label_1deb3c:
    // 0x1deb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb40:
    // 0x1deb40: 0xc069538  jal         func_1A54E0
label_1deb44:
    if (ctx->pc == 0x1DEB44u) {
        ctx->pc = 0x1DEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB40u;
        // 0x1deb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB48u;
        goto label_1deb48;
    }
    ctx->pc = 0x1DEB40u;
    SET_GPR_U32(ctx, 31, 0x1DEB48u);
    ctx->pc = 0x1DEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB40u;
    // 0x1deb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DEB40u, 0x1DEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB48u;
label_1deb48:
    // 0x1deb48: 0xc067b9c  jal         func_19EE70
label_1deb4c:
    if (ctx->pc == 0x1DEB4Cu) {
        ctx->pc = 0x1DEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB48u;
        // 0x1deb4c: 0x2404010d  addiu       $a0, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB50u;
        goto label_1deb50;
    }
    ctx->pc = 0x1DEB48u;
    SET_GPR_U32(ctx, 31, 0x1DEB50u);
    ctx->pc = 0x1DEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB48u;
    // 0x1deb4c: 0x2404010d  addiu       $a0, $zero, 0x10D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEB48u, 0x1DEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB50u;
label_1deb50:
    // 0x1deb50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1deb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1deb54:
    // 0x1deb54: 0xc069530  jal         func_1A54C0
label_1deb58:
    if (ctx->pc == 0x1DEB58u) {
        ctx->pc = 0x1DEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB54u;
        // 0x1deb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB5Cu;
        goto label_1deb5c;
    }
    ctx->pc = 0x1DEB54u;
    SET_GPR_U32(ctx, 31, 0x1DEB5Cu);
    ctx->pc = 0x1DEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB54u;
    // 0x1deb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DEB54u, 0x1DEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB5Cu;
label_1deb5c:
    // 0x1deb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb60:
    // 0x1deb60: 0x10000021  b           . + 4 + (0x21 << 2)
label_1deb64:
    if (ctx->pc == 0x1DEB64u) {
        ctx->pc = 0x1DEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB60u;
        // 0x1deb64: 0xae621bb0  sw          $v0, 0x1BB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB68u;
        goto label_1deb68;
    }
    ctx->pc = 0x1DEB60u;
    {
        const bool branch_taken_0x1deb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB60u;
        // 0x1deb64: 0xae621bb0  sw          $v0, 0x1BB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb60) {
            ctx->pc = 0x1DEBE8u;
            goto label_1debe8;
        }
    }
    ctx->pc = 0x1DEB68u;
label_1deb68:
    // 0x1deb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb6c:
    // 0x1deb6c: 0xae601b8c  sw          $zero, 0x1B8C($s3)
    ctx->pc = 0x1deb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7052), GPR_U32(ctx, 0));
label_1deb70:
    // 0x1deb70: 0xae621bb4  sw          $v0, 0x1BB4($s3)
    ctx->pc = 0x1deb70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7092), GPR_U32(ctx, 2));
label_1deb74:
    // 0x1deb74: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1deb78:
    if (ctx->pc == 0x1DEB78u) {
        ctx->pc = 0x1DEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB74u;
        // 0x1deb78: 0xae621ba0  sw          $v0, 0x1BA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB7Cu;
        goto label_1deb7c;
    }
    ctx->pc = 0x1DEB74u;
    {
        const bool branch_taken_0x1deb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB74u;
        // 0x1deb78: 0xae621ba0  sw          $v0, 0x1BA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb74) {
            ctx->pc = 0x1DECE0u;
            goto label_1dece0;
        }
    }
    ctx->pc = 0x1DEB7Cu;
label_1deb7c:
    // 0x1deb7c: 0xc067b9c  jal         func_19EE70
label_1deb80:
    if (ctx->pc == 0x1DEB80u) {
        ctx->pc = 0x1DEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB7Cu;
        // 0x1deb80: 0x267020d0  addiu       $s0, $s3, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB84u;
        goto label_1deb84;
    }
    ctx->pc = 0x1DEB7Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB84u);
    ctx->pc = 0x1DEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB7Cu;
    // 0x1deb80: 0x267020d0  addiu       $s0, $s3, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEB7Cu, 0x1DEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB84u;
label_1deb84:
    // 0x1deb84: 0x26712430  addiu       $s1, $s3, 0x2430
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 9264));
label_1deb88:
    // 0x1deb88: 0x8e642af0  lw          $a0, 0x2AF0($s3)
    ctx->pc = 0x1deb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10992)));
label_1deb8c:
    // 0x1deb8c: 0xc079f96  jal         func_1E7E58
label_1deb90:
    if (ctx->pc == 0x1DEB90u) {
        ctx->pc = 0x1DEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB8Cu;
        // 0x1deb90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB94u;
        goto label_1deb94;
    }
    ctx->pc = 0x1DEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB94u);
    ctx->pc = 0x1DEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB8Cu;
    // 0x1deb90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEB8Cu, 0x1DEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB94u;
label_1deb94:
    // 0x1deb94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1deb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb98:
    // 0x1deb98: 0xc069538  jal         func_1A54E0
label_1deb9c:
    if (ctx->pc == 0x1DEB9Cu) {
        ctx->pc = 0x1DEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB98u;
        // 0x1deb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBA0u;
        goto label_1deba0;
    }
    ctx->pc = 0x1DEB98u;
    SET_GPR_U32(ctx, 31, 0x1DEBA0u);
    ctx->pc = 0x1DEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB98u;
    // 0x1deb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DEB98u, 0x1DEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBA0u;
label_1deba0:
    // 0x1deba0: 0xc067b9c  jal         func_19EE70
label_1deba4:
    if (ctx->pc == 0x1DEBA4u) {
        ctx->pc = 0x1DEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBA0u;
        // 0x1deba4: 0x2404010b  addiu       $a0, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBA8u;
        goto label_1deba8;
    }
    ctx->pc = 0x1DEBA0u;
    SET_GPR_U32(ctx, 31, 0x1DEBA8u);
    ctx->pc = 0x1DEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBA0u;
    // 0x1deba4: 0x2404010b  addiu       $a0, $zero, 0x10B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEBA0u, 0x1DEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBA8u;
label_1deba8:
    // 0x1deba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1deba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1debac:
    // 0x1debac: 0xc069530  jal         func_1A54C0
label_1debb0:
    if (ctx->pc == 0x1DEBB0u) {
        ctx->pc = 0x1DEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBACu;
        // 0x1debb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBB4u;
        goto label_1debb4;
    }
    ctx->pc = 0x1DEBACu;
    SET_GPR_U32(ctx, 31, 0x1DEBB4u);
    ctx->pc = 0x1DEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBACu;
    // 0x1debb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DEBACu, 0x1DEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBB4u;
label_1debb4:
    // 0x1debb4: 0xc067b9c  jal         func_19EE70
label_1debb8:
    if (ctx->pc == 0x1DEBB8u) {
        ctx->pc = 0x1DEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBB4u;
        // 0x1debb8: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBBCu;
        goto label_1debbc;
    }
    ctx->pc = 0x1DEBB4u;
    SET_GPR_U32(ctx, 31, 0x1DEBBCu);
    ctx->pc = 0x1DEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBB4u;
    // 0x1debb8: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEBB4u, 0x1DEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBBCu;
label_1debbc:
    // 0x1debbc: 0x8e642af4  lw          $a0, 0x2AF4($s3)
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1debc0:
    // 0x1debc0: 0xc079f96  jal         func_1E7E58
label_1debc4:
    if (ctx->pc == 0x1DEBC4u) {
        ctx->pc = 0x1DEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBC0u;
        // 0x1debc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBC8u;
        goto label_1debc8;
    }
    ctx->pc = 0x1DEBC0u;
    SET_GPR_U32(ctx, 31, 0x1DEBC8u);
    ctx->pc = 0x1DEBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBC0u;
    // 0x1debc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DEBC0u, 0x1DEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBC8u;
label_1debc8:
    // 0x1debc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1debcc:
    // 0x1debcc: 0xc069538  jal         func_1A54E0
label_1debd0:
    if (ctx->pc == 0x1DEBD0u) {
        ctx->pc = 0x1DEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBCCu;
        // 0x1debd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBD4u;
        goto label_1debd4;
    }
    ctx->pc = 0x1DEBCCu;
    SET_GPR_U32(ctx, 31, 0x1DEBD4u);
    ctx->pc = 0x1DEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBCCu;
    // 0x1debd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DEBCCu, 0x1DEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBD4u;
label_1debd4:
    // 0x1debd4: 0xc067b9c  jal         func_19EE70
label_1debd8:
    if (ctx->pc == 0x1DEBD8u) {
        ctx->pc = 0x1DEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBD4u;
        // 0x1debd8: 0x2404010d  addiu       $a0, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBDCu;
        goto label_1debdc;
    }
    ctx->pc = 0x1DEBD4u;
    SET_GPR_U32(ctx, 31, 0x1DEBDCu);
    ctx->pc = 0x1DEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBD4u;
    // 0x1debd8: 0x2404010d  addiu       $a0, $zero, 0x10D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DEBD4u, 0x1DEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBDCu;
label_1debdc:
    // 0x1debdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1debdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1debe0:
    // 0x1debe0: 0xc069530  jal         func_1A54C0
label_1debe4:
    if (ctx->pc == 0x1DEBE4u) {
        ctx->pc = 0x1DEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBE0u;
        // 0x1debe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBE8u;
        goto label_1debe8;
    }
    ctx->pc = 0x1DEBE0u;
    SET_GPR_U32(ctx, 31, 0x1DEBE8u);
    ctx->pc = 0x1DEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBE0u;
    // 0x1debe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C0u, 0x1DEBE0u, 0x1DEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBE8u;
label_1debe8:
    // 0x1debe8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1debe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1debec:
    // 0x1debec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1debecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1debf0:
    // 0x1debf0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1debf4:
    // 0x1debf4: 0x8e641bb4  lw          $a0, 0x1BB4($s3)
    ctx->pc = 0x1debf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7092)));
label_1debf8:
    // 0x1debf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1debf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1debfc:
    // 0x1debfc: 0xe440ee24  swc1        $f0, -0x11DC($v0)
    ctx->pc = 0x1debfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962724), bits); }
label_1dec00:
    // 0x1dec00: 0xe460ee20  swc1        $f0, -0x11E0($v1)
    ctx->pc = 0x1dec00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962720), bits); }
label_1dec04:
    // 0x1dec04: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1dec08:
    if (ctx->pc == 0x1DEC08u) {
        ctx->pc = 0x1DEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC04u;
        // 0x1dec08: 0xae603a74  sw          $zero, 0x3A74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEC0Cu;
        goto label_1dec0c;
    }
    ctx->pc = 0x1DEC04u;
    {
        const bool branch_taken_0x1dec04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC04u;
        // 0x1dec08: 0xae603a74  sw          $zero, 0x3A74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec04) {
            ctx->pc = 0x1DEC18u;
            goto label_1dec18;
        }
    }
    ctx->pc = 0x1DEC0Cu;
label_1dec0c:
    // 0x1dec0c: 0x8e621bb8  lw          $v0, 0x1BB8($s3)
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7096)));
label_1dec10:
    // 0x1dec10: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1dec14:
    if (ctx->pc == 0x1DEC14u) {
        ctx->pc = 0x1DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC10u;
        // 0x1dec14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEC18u;
        goto label_1dec18;
    }
    ctx->pc = 0x1DEC10u;
    {
        const bool branch_taken_0x1dec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC10u;
        // 0x1dec14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec10) {
            ctx->pc = 0x1DEC64u;
            goto label_1dec64;
        }
    }
    ctx->pc = 0x1DEC18u;
label_1dec18:
    // 0x1dec18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dec18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dec1c:
    // 0x1dec1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dec1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1dec20:
    // 0x1dec20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dec20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dec24:
    // 0x1dec24: 0xc442ee54  lwc1        $f2, -0x11AC($v0)
    ctx->pc = 0x1dec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dec28:
    // 0x1dec28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dec28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dec2c:
    // 0x1dec2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dec2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dec30:
    // 0x1dec30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dec30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dec34:
    // 0x1dec34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dec34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dec38:
    // 0x1dec38: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1dec38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dec3c:
    // 0x1dec3c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1dec3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dec40:
    // 0x1dec40: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1dec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1dec44:
    // 0x1dec44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1dec44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1dec48:
    // 0x1dec48: 0x8e672af4  lw          $a3, 0x2AF4($s3)
    ctx->pc = 0x1dec48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10996)));
label_1dec4c:
    // 0x1dec4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dec50:
    // 0x1dec50: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dec54:
    // 0x1dec54: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dec58:
    // 0x1dec58: 0x60f809  jalr        $v1
label_1dec5c:
    if (ctx->pc == 0x1DEC5Cu) {
        ctx->pc = 0x1DEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC58u;
        // 0x1dec5c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEC60u;
        goto label_1dec60;
    }
    ctx->pc = 0x1DEC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DEC60u);
        ctx->pc = 0x1DEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC58u;
        // 0x1dec5c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC58u, 0x1DEC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEC60u;
label_1dec60:
    // 0x1dec60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dec64:
    // 0x1dec64: 0x26702af0  addiu       $s0, $s3, 0x2AF0
    ctx->pc = 0x1dec64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 10992));
label_1dec68:
    // 0x1dec68: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1dec68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1dec6c:
    // 0x1dec6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dec6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dec70:
    // 0x1dec70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dec74:
    // 0x1dec74: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1dec78:
    // 0x1dec78: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1dec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1dec7c:
    // 0x1dec7c: 0x40f809  jalr        $v0
label_1dec80:
    if (ctx->pc == 0x1DEC80u) {
        ctx->pc = 0x1DEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC7Cu;
        // 0x1dec80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEC84u;
        goto label_1dec84;
    }
    ctx->pc = 0x1DEC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEC84u);
        ctx->pc = 0x1DEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC7Cu;
        // 0x1dec80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC7Cu, 0x1DEC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEC84u;
label_1dec84:
    // 0x1dec84: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1dec84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1dec88:
    // 0x1dec88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dec88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1dec8c:
    // 0x1dec8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dec8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dec90:
    // 0x1dec90: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dec90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1dec94:
    // 0x1dec94: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1dec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1dec98:
    // 0x1dec98: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dec98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1dec9c:
    // 0x1dec9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dec9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deca0:
    // 0x1deca0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1deca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1deca4:
    // 0x1deca4: 0xae82ee2c  sw          $v0, -0x11D4($s4)
    ctx->pc = 0x1deca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962732), GPR_U32(ctx, 2));
label_1deca8:
    // 0x1deca8: 0xe481ee20  swc1        $f1, -0x11E0($a0)
    ctx->pc = 0x1deca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962720), bits); }
label_1decac:
    // 0x1decac: 0xe460ee24  swc1        $f0, -0x11DC($v1)
    ctx->pc = 0x1decacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962724), bits); }
label_1decb0:
    // 0x1decb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1decb4:
    // 0x1decb4: 0x0  nop
    ctx->pc = 0x1decb4u;
    // NOP
label_1decb8:
    // 0x1decb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1decb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1decbc:
    // 0x1decbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1decbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1decc0:
    // 0x1decc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1decc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1decc4:
    // 0x1decc4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1decc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1decc8:
    // 0x1decc8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1decc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1deccc:
    // 0x1deccc: 0x60f809  jalr        $v1
label_1decd0:
    if (ctx->pc == 0x1DECD0u) {
        ctx->pc = 0x1DECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECCCu;
        // 0x1decd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DECD4u;
        goto label_1decd4;
    }
    ctx->pc = 0x1DECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DECD4u);
        ctx->pc = 0x1DECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECCCu;
        // 0x1decd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECCCu, 0x1DECD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DECD4u;
label_1decd4:
    // 0x1decd4: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1decd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1decd8:
    // 0x1decd8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1decdc:
    if (ctx->pc == 0x1DECDCu) {
        ctx->pc = 0x1DECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECD8u;
        // 0x1decdc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DECE0u;
        goto label_1dece0;
    }
    ctx->pc = 0x1DECD8u;
    {
        const bool branch_taken_0x1decd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1decd8) {
            ctx->pc = 0x1DECDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DECD8u;
            // 0x1decdc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DECB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1decb8;
        }
    }
    ctx->pc = 0x1DECE0u;
label_1dece0:
    // 0x1dece0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dece0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dece4:
    // 0x1dece4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dece4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dece8:
    // 0x1dece8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1dece8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1decec:
    // 0x1decec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dececu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1decf0:
    // 0x1decf0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1decf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1decf4:
    // 0x1decf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1decf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1decf8:
    // 0x1decf8: 0x3e00008  jr          $ra
label_1decfc:
    if (ctx->pc == 0x1DECFCu) {
        ctx->pc = 0x1DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECF8u;
        // 0x1decfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DED00u;
        goto label_fallthrough_0x1decf8;
    }
    ctx->pc = 0x1DECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECF8u;
        // 0x1decfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1decf8:
    ctx->pc = 0x1DED00u;
}
