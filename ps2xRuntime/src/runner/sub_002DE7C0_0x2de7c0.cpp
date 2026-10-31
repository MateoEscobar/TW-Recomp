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

// Function: sub_002DE7C0
// Address: 0x2de7c0 - 0x2df1a8
void sub_002DE7C0_0x2de7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE7C0_0x2de7c0");
#endif

    switch (ctx->pc) {
        case 0x2de7c0u: goto label_2de7c0;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7c8u: goto label_2de7c8;
        case 0x2de7ccu: goto label_2de7cc;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de7d4u: goto label_2de7d4;
        case 0x2de7d8u: goto label_2de7d8;
        case 0x2de7dcu: goto label_2de7dc;
        case 0x2de7e0u: goto label_2de7e0;
        case 0x2de7e4u: goto label_2de7e4;
        case 0x2de7e8u: goto label_2de7e8;
        case 0x2de7ecu: goto label_2de7ec;
        case 0x2de7f0u: goto label_2de7f0;
        case 0x2de7f4u: goto label_2de7f4;
        case 0x2de7f8u: goto label_2de7f8;
        case 0x2de7fcu: goto label_2de7fc;
        case 0x2de800u: goto label_2de800;
        case 0x2de804u: goto label_2de804;
        case 0x2de808u: goto label_2de808;
        case 0x2de80cu: goto label_2de80c;
        case 0x2de810u: goto label_2de810;
        case 0x2de814u: goto label_2de814;
        case 0x2de818u: goto label_2de818;
        case 0x2de81cu: goto label_2de81c;
        case 0x2de820u: goto label_2de820;
        case 0x2de824u: goto label_2de824;
        case 0x2de828u: goto label_2de828;
        case 0x2de82cu: goto label_2de82c;
        case 0x2de830u: goto label_2de830;
        case 0x2de834u: goto label_2de834;
        case 0x2de838u: goto label_2de838;
        case 0x2de83cu: goto label_2de83c;
        case 0x2de840u: goto label_2de840;
        case 0x2de844u: goto label_2de844;
        case 0x2de848u: goto label_2de848;
        case 0x2de84cu: goto label_2de84c;
        case 0x2de850u: goto label_2de850;
        case 0x2de854u: goto label_2de854;
        case 0x2de858u: goto label_2de858;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de860u: goto label_2de860;
        case 0x2de864u: goto label_2de864;
        case 0x2de868u: goto label_2de868;
        case 0x2de86cu: goto label_2de86c;
        case 0x2de870u: goto label_2de870;
        case 0x2de874u: goto label_2de874;
        case 0x2de878u: goto label_2de878;
        case 0x2de87cu: goto label_2de87c;
        case 0x2de880u: goto label_2de880;
        case 0x2de884u: goto label_2de884;
        case 0x2de888u: goto label_2de888;
        case 0x2de88cu: goto label_2de88c;
        case 0x2de890u: goto label_2de890;
        case 0x2de894u: goto label_2de894;
        case 0x2de898u: goto label_2de898;
        case 0x2de89cu: goto label_2de89c;
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a4u: goto label_2de8a4;
        case 0x2de8a8u: goto label_2de8a8;
        case 0x2de8acu: goto label_2de8ac;
        case 0x2de8b0u: goto label_2de8b0;
        case 0x2de8b4u: goto label_2de8b4;
        case 0x2de8b8u: goto label_2de8b8;
        case 0x2de8bcu: goto label_2de8bc;
        case 0x2de8c0u: goto label_2de8c0;
        case 0x2de8c4u: goto label_2de8c4;
        case 0x2de8c8u: goto label_2de8c8;
        case 0x2de8ccu: goto label_2de8cc;
        case 0x2de8d0u: goto label_2de8d0;
        case 0x2de8d4u: goto label_2de8d4;
        case 0x2de8d8u: goto label_2de8d8;
        case 0x2de8dcu: goto label_2de8dc;
        case 0x2de8e0u: goto label_2de8e0;
        case 0x2de8e4u: goto label_2de8e4;
        case 0x2de8e8u: goto label_2de8e8;
        case 0x2de8ecu: goto label_2de8ec;
        case 0x2de8f0u: goto label_2de8f0;
        case 0x2de8f4u: goto label_2de8f4;
        case 0x2de8f8u: goto label_2de8f8;
        case 0x2de8fcu: goto label_2de8fc;
        case 0x2de900u: goto label_2de900;
        case 0x2de904u: goto label_2de904;
        case 0x2de908u: goto label_2de908;
        case 0x2de90cu: goto label_2de90c;
        case 0x2de910u: goto label_2de910;
        case 0x2de914u: goto label_2de914;
        case 0x2de918u: goto label_2de918;
        case 0x2de91cu: goto label_2de91c;
        case 0x2de920u: goto label_2de920;
        case 0x2de924u: goto label_2de924;
        case 0x2de928u: goto label_2de928;
        case 0x2de92cu: goto label_2de92c;
        case 0x2de930u: goto label_2de930;
        case 0x2de934u: goto label_2de934;
        case 0x2de938u: goto label_2de938;
        case 0x2de93cu: goto label_2de93c;
        case 0x2de940u: goto label_2de940;
        case 0x2de944u: goto label_2de944;
        case 0x2de948u: goto label_2de948;
        case 0x2de94cu: goto label_2de94c;
        case 0x2de950u: goto label_2de950;
        case 0x2de954u: goto label_2de954;
        case 0x2de958u: goto label_2de958;
        case 0x2de95cu: goto label_2de95c;
        case 0x2de960u: goto label_2de960;
        case 0x2de964u: goto label_2de964;
        case 0x2de968u: goto label_2de968;
        case 0x2de96cu: goto label_2de96c;
        case 0x2de970u: goto label_2de970;
        case 0x2de974u: goto label_2de974;
        case 0x2de978u: goto label_2de978;
        case 0x2de97cu: goto label_2de97c;
        case 0x2de980u: goto label_2de980;
        case 0x2de984u: goto label_2de984;
        case 0x2de988u: goto label_2de988;
        case 0x2de98cu: goto label_2de98c;
        case 0x2de990u: goto label_2de990;
        case 0x2de994u: goto label_2de994;
        case 0x2de998u: goto label_2de998;
        case 0x2de99cu: goto label_2de99c;
        case 0x2de9a0u: goto label_2de9a0;
        case 0x2de9a4u: goto label_2de9a4;
        case 0x2de9a8u: goto label_2de9a8;
        case 0x2de9acu: goto label_2de9ac;
        case 0x2de9b0u: goto label_2de9b0;
        case 0x2de9b4u: goto label_2de9b4;
        case 0x2de9b8u: goto label_2de9b8;
        case 0x2de9bcu: goto label_2de9bc;
        case 0x2de9c0u: goto label_2de9c0;
        case 0x2de9c4u: goto label_2de9c4;
        case 0x2de9c8u: goto label_2de9c8;
        case 0x2de9ccu: goto label_2de9cc;
        case 0x2de9d0u: goto label_2de9d0;
        case 0x2de9d4u: goto label_2de9d4;
        case 0x2de9d8u: goto label_2de9d8;
        case 0x2de9dcu: goto label_2de9dc;
        case 0x2de9e0u: goto label_2de9e0;
        case 0x2de9e4u: goto label_2de9e4;
        case 0x2de9e8u: goto label_2de9e8;
        case 0x2de9ecu: goto label_2de9ec;
        case 0x2de9f0u: goto label_2de9f0;
        case 0x2de9f4u: goto label_2de9f4;
        case 0x2de9f8u: goto label_2de9f8;
        case 0x2de9fcu: goto label_2de9fc;
        case 0x2dea00u: goto label_2dea00;
        case 0x2dea04u: goto label_2dea04;
        case 0x2dea08u: goto label_2dea08;
        case 0x2dea0cu: goto label_2dea0c;
        case 0x2dea10u: goto label_2dea10;
        case 0x2dea14u: goto label_2dea14;
        case 0x2dea18u: goto label_2dea18;
        case 0x2dea1cu: goto label_2dea1c;
        case 0x2dea20u: goto label_2dea20;
        case 0x2dea24u: goto label_2dea24;
        case 0x2dea28u: goto label_2dea28;
        case 0x2dea2cu: goto label_2dea2c;
        case 0x2dea30u: goto label_2dea30;
        case 0x2dea34u: goto label_2dea34;
        case 0x2dea38u: goto label_2dea38;
        case 0x2dea3cu: goto label_2dea3c;
        case 0x2dea40u: goto label_2dea40;
        case 0x2dea44u: goto label_2dea44;
        case 0x2dea48u: goto label_2dea48;
        case 0x2dea4cu: goto label_2dea4c;
        case 0x2dea50u: goto label_2dea50;
        case 0x2dea54u: goto label_2dea54;
        case 0x2dea58u: goto label_2dea58;
        case 0x2dea5cu: goto label_2dea5c;
        case 0x2dea60u: goto label_2dea60;
        case 0x2dea64u: goto label_2dea64;
        case 0x2dea68u: goto label_2dea68;
        case 0x2dea6cu: goto label_2dea6c;
        case 0x2dea70u: goto label_2dea70;
        case 0x2dea74u: goto label_2dea74;
        case 0x2dea78u: goto label_2dea78;
        case 0x2dea7cu: goto label_2dea7c;
        case 0x2dea80u: goto label_2dea80;
        case 0x2dea84u: goto label_2dea84;
        case 0x2dea88u: goto label_2dea88;
        case 0x2dea8cu: goto label_2dea8c;
        case 0x2dea90u: goto label_2dea90;
        case 0x2dea94u: goto label_2dea94;
        case 0x2dea98u: goto label_2dea98;
        case 0x2dea9cu: goto label_2dea9c;
        case 0x2deaa0u: goto label_2deaa0;
        case 0x2deaa4u: goto label_2deaa4;
        case 0x2deaa8u: goto label_2deaa8;
        case 0x2deaacu: goto label_2deaac;
        case 0x2deab0u: goto label_2deab0;
        case 0x2deab4u: goto label_2deab4;
        case 0x2deab8u: goto label_2deab8;
        case 0x2deabcu: goto label_2deabc;
        case 0x2deac0u: goto label_2deac0;
        case 0x2deac4u: goto label_2deac4;
        case 0x2deac8u: goto label_2deac8;
        case 0x2deaccu: goto label_2deacc;
        case 0x2dead0u: goto label_2dead0;
        case 0x2dead4u: goto label_2dead4;
        case 0x2dead8u: goto label_2dead8;
        case 0x2deadcu: goto label_2deadc;
        case 0x2deae0u: goto label_2deae0;
        case 0x2deae4u: goto label_2deae4;
        case 0x2deae8u: goto label_2deae8;
        case 0x2deaecu: goto label_2deaec;
        case 0x2deaf0u: goto label_2deaf0;
        case 0x2deaf4u: goto label_2deaf4;
        case 0x2deaf8u: goto label_2deaf8;
        case 0x2deafcu: goto label_2deafc;
        case 0x2deb00u: goto label_2deb00;
        case 0x2deb04u: goto label_2deb04;
        case 0x2deb08u: goto label_2deb08;
        case 0x2deb0cu: goto label_2deb0c;
        case 0x2deb10u: goto label_2deb10;
        case 0x2deb14u: goto label_2deb14;
        case 0x2deb18u: goto label_2deb18;
        case 0x2deb1cu: goto label_2deb1c;
        case 0x2deb20u: goto label_2deb20;
        case 0x2deb24u: goto label_2deb24;
        case 0x2deb28u: goto label_2deb28;
        case 0x2deb2cu: goto label_2deb2c;
        case 0x2deb30u: goto label_2deb30;
        case 0x2deb34u: goto label_2deb34;
        case 0x2deb38u: goto label_2deb38;
        case 0x2deb3cu: goto label_2deb3c;
        case 0x2deb40u: goto label_2deb40;
        case 0x2deb44u: goto label_2deb44;
        case 0x2deb48u: goto label_2deb48;
        case 0x2deb4cu: goto label_2deb4c;
        case 0x2deb50u: goto label_2deb50;
        case 0x2deb54u: goto label_2deb54;
        case 0x2deb58u: goto label_2deb58;
        case 0x2deb5cu: goto label_2deb5c;
        case 0x2deb60u: goto label_2deb60;
        case 0x2deb64u: goto label_2deb64;
        case 0x2deb68u: goto label_2deb68;
        case 0x2deb6cu: goto label_2deb6c;
        case 0x2deb70u: goto label_2deb70;
        case 0x2deb74u: goto label_2deb74;
        case 0x2deb78u: goto label_2deb78;
        case 0x2deb7cu: goto label_2deb7c;
        case 0x2deb80u: goto label_2deb80;
        case 0x2deb84u: goto label_2deb84;
        case 0x2deb88u: goto label_2deb88;
        case 0x2deb8cu: goto label_2deb8c;
        case 0x2deb90u: goto label_2deb90;
        case 0x2deb94u: goto label_2deb94;
        case 0x2deb98u: goto label_2deb98;
        case 0x2deb9cu: goto label_2deb9c;
        case 0x2deba0u: goto label_2deba0;
        case 0x2deba4u: goto label_2deba4;
        case 0x2deba8u: goto label_2deba8;
        case 0x2debacu: goto label_2debac;
        case 0x2debb0u: goto label_2debb0;
        case 0x2debb4u: goto label_2debb4;
        case 0x2debb8u: goto label_2debb8;
        case 0x2debbcu: goto label_2debbc;
        case 0x2debc0u: goto label_2debc0;
        case 0x2debc4u: goto label_2debc4;
        case 0x2debc8u: goto label_2debc8;
        case 0x2debccu: goto label_2debcc;
        case 0x2debd0u: goto label_2debd0;
        case 0x2debd4u: goto label_2debd4;
        case 0x2debd8u: goto label_2debd8;
        case 0x2debdcu: goto label_2debdc;
        case 0x2debe0u: goto label_2debe0;
        case 0x2debe4u: goto label_2debe4;
        case 0x2debe8u: goto label_2debe8;
        case 0x2debecu: goto label_2debec;
        case 0x2debf0u: goto label_2debf0;
        case 0x2debf4u: goto label_2debf4;
        case 0x2debf8u: goto label_2debf8;
        case 0x2debfcu: goto label_2debfc;
        case 0x2dec00u: goto label_2dec00;
        case 0x2dec04u: goto label_2dec04;
        case 0x2dec08u: goto label_2dec08;
        case 0x2dec0cu: goto label_2dec0c;
        case 0x2dec10u: goto label_2dec10;
        case 0x2dec14u: goto label_2dec14;
        case 0x2dec18u: goto label_2dec18;
        case 0x2dec1cu: goto label_2dec1c;
        case 0x2dec20u: goto label_2dec20;
        case 0x2dec24u: goto label_2dec24;
        case 0x2dec28u: goto label_2dec28;
        case 0x2dec2cu: goto label_2dec2c;
        case 0x2dec30u: goto label_2dec30;
        case 0x2dec34u: goto label_2dec34;
        case 0x2dec38u: goto label_2dec38;
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec40u: goto label_2dec40;
        case 0x2dec44u: goto label_2dec44;
        case 0x2dec48u: goto label_2dec48;
        case 0x2dec4cu: goto label_2dec4c;
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec54u: goto label_2dec54;
        case 0x2dec58u: goto label_2dec58;
        case 0x2dec5cu: goto label_2dec5c;
        case 0x2dec60u: goto label_2dec60;
        case 0x2dec64u: goto label_2dec64;
        case 0x2dec68u: goto label_2dec68;
        case 0x2dec6cu: goto label_2dec6c;
        case 0x2dec70u: goto label_2dec70;
        case 0x2dec74u: goto label_2dec74;
        case 0x2dec78u: goto label_2dec78;
        case 0x2dec7cu: goto label_2dec7c;
        case 0x2dec80u: goto label_2dec80;
        case 0x2dec84u: goto label_2dec84;
        case 0x2dec88u: goto label_2dec88;
        case 0x2dec8cu: goto label_2dec8c;
        case 0x2dec90u: goto label_2dec90;
        case 0x2dec94u: goto label_2dec94;
        case 0x2dec98u: goto label_2dec98;
        case 0x2dec9cu: goto label_2dec9c;
        case 0x2deca0u: goto label_2deca0;
        case 0x2deca4u: goto label_2deca4;
        case 0x2deca8u: goto label_2deca8;
        case 0x2decacu: goto label_2decac;
        case 0x2decb0u: goto label_2decb0;
        case 0x2decb4u: goto label_2decb4;
        case 0x2decb8u: goto label_2decb8;
        case 0x2decbcu: goto label_2decbc;
        case 0x2decc0u: goto label_2decc0;
        case 0x2decc4u: goto label_2decc4;
        case 0x2decc8u: goto label_2decc8;
        case 0x2decccu: goto label_2deccc;
        case 0x2decd0u: goto label_2decd0;
        case 0x2decd4u: goto label_2decd4;
        case 0x2decd8u: goto label_2decd8;
        case 0x2decdcu: goto label_2decdc;
        case 0x2dece0u: goto label_2dece0;
        case 0x2dece4u: goto label_2dece4;
        case 0x2dece8u: goto label_2dece8;
        case 0x2dececu: goto label_2decec;
        case 0x2decf0u: goto label_2decf0;
        case 0x2decf4u: goto label_2decf4;
        case 0x2decf8u: goto label_2decf8;
        case 0x2decfcu: goto label_2decfc;
        case 0x2ded00u: goto label_2ded00;
        case 0x2ded04u: goto label_2ded04;
        case 0x2ded08u: goto label_2ded08;
        case 0x2ded0cu: goto label_2ded0c;
        case 0x2ded10u: goto label_2ded10;
        case 0x2ded14u: goto label_2ded14;
        case 0x2ded18u: goto label_2ded18;
        case 0x2ded1cu: goto label_2ded1c;
        case 0x2ded20u: goto label_2ded20;
        case 0x2ded24u: goto label_2ded24;
        case 0x2ded28u: goto label_2ded28;
        case 0x2ded2cu: goto label_2ded2c;
        case 0x2ded30u: goto label_2ded30;
        case 0x2ded34u: goto label_2ded34;
        case 0x2ded38u: goto label_2ded38;
        case 0x2ded3cu: goto label_2ded3c;
        case 0x2ded40u: goto label_2ded40;
        case 0x2ded44u: goto label_2ded44;
        case 0x2ded48u: goto label_2ded48;
        case 0x2ded4cu: goto label_2ded4c;
        case 0x2ded50u: goto label_2ded50;
        case 0x2ded54u: goto label_2ded54;
        case 0x2ded58u: goto label_2ded58;
        case 0x2ded5cu: goto label_2ded5c;
        case 0x2ded60u: goto label_2ded60;
        case 0x2ded64u: goto label_2ded64;
        case 0x2ded68u: goto label_2ded68;
        case 0x2ded6cu: goto label_2ded6c;
        case 0x2ded70u: goto label_2ded70;
        case 0x2ded74u: goto label_2ded74;
        case 0x2ded78u: goto label_2ded78;
        case 0x2ded7cu: goto label_2ded7c;
        case 0x2ded80u: goto label_2ded80;
        case 0x2ded84u: goto label_2ded84;
        case 0x2ded88u: goto label_2ded88;
        case 0x2ded8cu: goto label_2ded8c;
        case 0x2ded90u: goto label_2ded90;
        case 0x2ded94u: goto label_2ded94;
        case 0x2ded98u: goto label_2ded98;
        case 0x2ded9cu: goto label_2ded9c;
        case 0x2deda0u: goto label_2deda0;
        case 0x2deda4u: goto label_2deda4;
        case 0x2deda8u: goto label_2deda8;
        case 0x2dedacu: goto label_2dedac;
        case 0x2dedb0u: goto label_2dedb0;
        case 0x2dedb4u: goto label_2dedb4;
        case 0x2dedb8u: goto label_2dedb8;
        case 0x2dedbcu: goto label_2dedbc;
        case 0x2dedc0u: goto label_2dedc0;
        case 0x2dedc4u: goto label_2dedc4;
        case 0x2dedc8u: goto label_2dedc8;
        case 0x2dedccu: goto label_2dedcc;
        case 0x2dedd0u: goto label_2dedd0;
        case 0x2dedd4u: goto label_2dedd4;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2deddcu: goto label_2deddc;
        case 0x2dede0u: goto label_2dede0;
        case 0x2dede4u: goto label_2dede4;
        case 0x2dede8u: goto label_2dede8;
        case 0x2dedecu: goto label_2dedec;
        case 0x2dedf0u: goto label_2dedf0;
        case 0x2dedf4u: goto label_2dedf4;
        case 0x2dedf8u: goto label_2dedf8;
        case 0x2dedfcu: goto label_2dedfc;
        case 0x2dee00u: goto label_2dee00;
        case 0x2dee04u: goto label_2dee04;
        case 0x2dee08u: goto label_2dee08;
        case 0x2dee0cu: goto label_2dee0c;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee14u: goto label_2dee14;
        case 0x2dee18u: goto label_2dee18;
        case 0x2dee1cu: goto label_2dee1c;
        case 0x2dee20u: goto label_2dee20;
        case 0x2dee24u: goto label_2dee24;
        case 0x2dee28u: goto label_2dee28;
        case 0x2dee2cu: goto label_2dee2c;
        case 0x2dee30u: goto label_2dee30;
        case 0x2dee34u: goto label_2dee34;
        case 0x2dee38u: goto label_2dee38;
        case 0x2dee3cu: goto label_2dee3c;
        case 0x2dee40u: goto label_2dee40;
        case 0x2dee44u: goto label_2dee44;
        case 0x2dee48u: goto label_2dee48;
        case 0x2dee4cu: goto label_2dee4c;
        case 0x2dee50u: goto label_2dee50;
        case 0x2dee54u: goto label_2dee54;
        case 0x2dee58u: goto label_2dee58;
        case 0x2dee5cu: goto label_2dee5c;
        case 0x2dee60u: goto label_2dee60;
        case 0x2dee64u: goto label_2dee64;
        case 0x2dee68u: goto label_2dee68;
        case 0x2dee6cu: goto label_2dee6c;
        case 0x2dee70u: goto label_2dee70;
        case 0x2dee74u: goto label_2dee74;
        case 0x2dee78u: goto label_2dee78;
        case 0x2dee7cu: goto label_2dee7c;
        case 0x2dee80u: goto label_2dee80;
        case 0x2dee84u: goto label_2dee84;
        case 0x2dee88u: goto label_2dee88;
        case 0x2dee8cu: goto label_2dee8c;
        case 0x2dee90u: goto label_2dee90;
        case 0x2dee94u: goto label_2dee94;
        case 0x2dee98u: goto label_2dee98;
        case 0x2dee9cu: goto label_2dee9c;
        case 0x2deea0u: goto label_2deea0;
        case 0x2deea4u: goto label_2deea4;
        case 0x2deea8u: goto label_2deea8;
        case 0x2deeacu: goto label_2deeac;
        case 0x2deeb0u: goto label_2deeb0;
        case 0x2deeb4u: goto label_2deeb4;
        case 0x2deeb8u: goto label_2deeb8;
        case 0x2deebcu: goto label_2deebc;
        case 0x2deec0u: goto label_2deec0;
        case 0x2deec4u: goto label_2deec4;
        case 0x2deec8u: goto label_2deec8;
        case 0x2deeccu: goto label_2deecc;
        case 0x2deed0u: goto label_2deed0;
        case 0x2deed4u: goto label_2deed4;
        case 0x2deed8u: goto label_2deed8;
        case 0x2deedcu: goto label_2deedc;
        case 0x2deee0u: goto label_2deee0;
        case 0x2deee4u: goto label_2deee4;
        case 0x2deee8u: goto label_2deee8;
        case 0x2deeecu: goto label_2deeec;
        case 0x2deef0u: goto label_2deef0;
        case 0x2deef4u: goto label_2deef4;
        case 0x2deef8u: goto label_2deef8;
        case 0x2deefcu: goto label_2deefc;
        case 0x2def00u: goto label_2def00;
        case 0x2def04u: goto label_2def04;
        case 0x2def08u: goto label_2def08;
        case 0x2def0cu: goto label_2def0c;
        case 0x2def10u: goto label_2def10;
        case 0x2def14u: goto label_2def14;
        case 0x2def18u: goto label_2def18;
        case 0x2def1cu: goto label_2def1c;
        case 0x2def20u: goto label_2def20;
        case 0x2def24u: goto label_2def24;
        case 0x2def28u: goto label_2def28;
        case 0x2def2cu: goto label_2def2c;
        case 0x2def30u: goto label_2def30;
        case 0x2def34u: goto label_2def34;
        case 0x2def38u: goto label_2def38;
        case 0x2def3cu: goto label_2def3c;
        case 0x2def40u: goto label_2def40;
        case 0x2def44u: goto label_2def44;
        case 0x2def48u: goto label_2def48;
        case 0x2def4cu: goto label_2def4c;
        case 0x2def50u: goto label_2def50;
        case 0x2def54u: goto label_2def54;
        case 0x2def58u: goto label_2def58;
        case 0x2def5cu: goto label_2def5c;
        case 0x2def60u: goto label_2def60;
        case 0x2def64u: goto label_2def64;
        case 0x2def68u: goto label_2def68;
        case 0x2def6cu: goto label_2def6c;
        case 0x2def70u: goto label_2def70;
        case 0x2def74u: goto label_2def74;
        case 0x2def78u: goto label_2def78;
        case 0x2def7cu: goto label_2def7c;
        case 0x2def80u: goto label_2def80;
        case 0x2def84u: goto label_2def84;
        case 0x2def88u: goto label_2def88;
        case 0x2def8cu: goto label_2def8c;
        case 0x2def90u: goto label_2def90;
        case 0x2def94u: goto label_2def94;
        case 0x2def98u: goto label_2def98;
        case 0x2def9cu: goto label_2def9c;
        case 0x2defa0u: goto label_2defa0;
        case 0x2defa4u: goto label_2defa4;
        case 0x2defa8u: goto label_2defa8;
        case 0x2defacu: goto label_2defac;
        case 0x2defb0u: goto label_2defb0;
        case 0x2defb4u: goto label_2defb4;
        case 0x2defb8u: goto label_2defb8;
        case 0x2defbcu: goto label_2defbc;
        case 0x2defc0u: goto label_2defc0;
        case 0x2defc4u: goto label_2defc4;
        case 0x2defc8u: goto label_2defc8;
        case 0x2defccu: goto label_2defcc;
        case 0x2defd0u: goto label_2defd0;
        case 0x2defd4u: goto label_2defd4;
        case 0x2defd8u: goto label_2defd8;
        case 0x2defdcu: goto label_2defdc;
        case 0x2defe0u: goto label_2defe0;
        case 0x2defe4u: goto label_2defe4;
        case 0x2defe8u: goto label_2defe8;
        case 0x2defecu: goto label_2defec;
        case 0x2deff0u: goto label_2deff0;
        case 0x2deff4u: goto label_2deff4;
        case 0x2deff8u: goto label_2deff8;
        case 0x2deffcu: goto label_2deffc;
        case 0x2df000u: goto label_2df000;
        case 0x2df004u: goto label_2df004;
        case 0x2df008u: goto label_2df008;
        case 0x2df00cu: goto label_2df00c;
        case 0x2df010u: goto label_2df010;
        case 0x2df014u: goto label_2df014;
        case 0x2df018u: goto label_2df018;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df020u: goto label_2df020;
        case 0x2df024u: goto label_2df024;
        case 0x2df028u: goto label_2df028;
        case 0x2df02cu: goto label_2df02c;
        case 0x2df030u: goto label_2df030;
        case 0x2df034u: goto label_2df034;
        case 0x2df038u: goto label_2df038;
        case 0x2df03cu: goto label_2df03c;
        case 0x2df040u: goto label_2df040;
        case 0x2df044u: goto label_2df044;
        case 0x2df048u: goto label_2df048;
        case 0x2df04cu: goto label_2df04c;
        case 0x2df050u: goto label_2df050;
        case 0x2df054u: goto label_2df054;
        case 0x2df058u: goto label_2df058;
        case 0x2df05cu: goto label_2df05c;
        case 0x2df060u: goto label_2df060;
        case 0x2df064u: goto label_2df064;
        case 0x2df068u: goto label_2df068;
        case 0x2df06cu: goto label_2df06c;
        case 0x2df070u: goto label_2df070;
        case 0x2df074u: goto label_2df074;
        case 0x2df078u: goto label_2df078;
        case 0x2df07cu: goto label_2df07c;
        case 0x2df080u: goto label_2df080;
        case 0x2df084u: goto label_2df084;
        case 0x2df088u: goto label_2df088;
        case 0x2df08cu: goto label_2df08c;
        case 0x2df090u: goto label_2df090;
        case 0x2df094u: goto label_2df094;
        case 0x2df098u: goto label_2df098;
        case 0x2df09cu: goto label_2df09c;
        case 0x2df0a0u: goto label_2df0a0;
        case 0x2df0a4u: goto label_2df0a4;
        case 0x2df0a8u: goto label_2df0a8;
        case 0x2df0acu: goto label_2df0ac;
        case 0x2df0b0u: goto label_2df0b0;
        case 0x2df0b4u: goto label_2df0b4;
        case 0x2df0b8u: goto label_2df0b8;
        case 0x2df0bcu: goto label_2df0bc;
        case 0x2df0c0u: goto label_2df0c0;
        case 0x2df0c4u: goto label_2df0c4;
        case 0x2df0c8u: goto label_2df0c8;
        case 0x2df0ccu: goto label_2df0cc;
        case 0x2df0d0u: goto label_2df0d0;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df0d8u: goto label_2df0d8;
        case 0x2df0dcu: goto label_2df0dc;
        case 0x2df0e0u: goto label_2df0e0;
        case 0x2df0e4u: goto label_2df0e4;
        case 0x2df0e8u: goto label_2df0e8;
        case 0x2df0ecu: goto label_2df0ec;
        case 0x2df0f0u: goto label_2df0f0;
        case 0x2df0f4u: goto label_2df0f4;
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df0fcu: goto label_2df0fc;
        case 0x2df100u: goto label_2df100;
        case 0x2df104u: goto label_2df104;
        case 0x2df108u: goto label_2df108;
        case 0x2df10cu: goto label_2df10c;
        case 0x2df110u: goto label_2df110;
        case 0x2df114u: goto label_2df114;
        case 0x2df118u: goto label_2df118;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df120u: goto label_2df120;
        case 0x2df124u: goto label_2df124;
        case 0x2df128u: goto label_2df128;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df130u: goto label_2df130;
        case 0x2df134u: goto label_2df134;
        case 0x2df138u: goto label_2df138;
        case 0x2df13cu: goto label_2df13c;
        case 0x2df140u: goto label_2df140;
        case 0x2df144u: goto label_2df144;
        case 0x2df148u: goto label_2df148;
        case 0x2df14cu: goto label_2df14c;
        case 0x2df150u: goto label_2df150;
        case 0x2df154u: goto label_2df154;
        case 0x2df158u: goto label_2df158;
        case 0x2df15cu: goto label_2df15c;
        case 0x2df160u: goto label_2df160;
        case 0x2df164u: goto label_2df164;
        case 0x2df168u: goto label_2df168;
        case 0x2df16cu: goto label_2df16c;
        case 0x2df170u: goto label_2df170;
        case 0x2df174u: goto label_2df174;
        case 0x2df178u: goto label_2df178;
        case 0x2df17cu: goto label_2df17c;
        case 0x2df180u: goto label_2df180;
        case 0x2df184u: goto label_2df184;
        case 0x2df188u: goto label_2df188;
        case 0x2df18cu: goto label_2df18c;
        case 0x2df190u: goto label_2df190;
        case 0x2df194u: goto label_2df194;
        case 0x2df198u: goto label_2df198;
        case 0x2df19cu: goto label_2df19c;
        case 0x2df1a0u: goto label_2df1a0;
        case 0x2df1a4u: goto label_2df1a4;
        default: break;
    }

    ctx->pc = 0x2de7c0u;

label_2de7c0:
    // 0x2de7c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2de7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2de7c4:
    // 0x2de7c4: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2de7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_2de7c8:
    // 0x2de7c8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2de7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_2de7cc:
    // 0x2de7cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de7d0:
    // 0x2de7d0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2de7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_2de7d4:
    // 0x2de7d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2de7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2de7d8:
    // 0x2de7d8: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2de7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_2de7dc:
    // 0x2de7dc: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2de7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_2de7e0:
    // 0x2de7e0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2de7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_2de7e4:
    // 0x2de7e4: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2de7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_2de7e8:
    // 0x2de7e8: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2de7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_2de7ec:
    // 0x2de7ec: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2de7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_2de7f0:
    // 0x2de7f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2de7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2de7f4:
    // 0x2de7f4: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2de7f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2de7f8:
    // 0x2de7f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2de7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2de7fc:
    // 0x2de7fc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2de7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de800:
    // 0x2de800: 0xc0e409a  jal         func_390268
label_2de804:
    if (ctx->pc == 0x2DE804u) {
        ctx->pc = 0x2DE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE800u;
        // 0x2de804: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE808u;
        goto label_2de808;
    }
    ctx->pc = 0x2DE800u;
    SET_GPR_U32(ctx, 31, 0x2DE808u);
    ctx->pc = 0x2DE804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE800u;
    // 0x2de804: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE800u, 0x2DE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE808u;
label_2de808:
    // 0x2de808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de80c:
    // 0x2de80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2de80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de810:
    // 0x2de810: 0xc0a352c  jal         func_28D4B0
label_2de814:
    if (ctx->pc == 0x2DE814u) {
        ctx->pc = 0x2DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE810u;
        // 0x2de814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE818u;
        goto label_2de818;
    }
    ctx->pc = 0x2DE810u;
    SET_GPR_U32(ctx, 31, 0x2DE818u);
    ctx->pc = 0x2DE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE810u;
    // 0x2de814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DE810u, 0x2DE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE818u;
label_2de818:
    // 0x2de818: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2de818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de81c:
    // 0x2de81c: 0x12600255  beqz        $s3, . + 4 + (0x255 << 2)
label_2de820:
    if (ctx->pc == 0x2DE820u) {
        ctx->pc = 0x2DE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE81Cu;
        // 0x2de820: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE824u;
        goto label_2de824;
    }
    ctx->pc = 0x2DE81Cu;
    {
        const bool branch_taken_0x2de81c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE81Cu;
        // 0x2de820: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de81c) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DE824u;
label_2de824:
    // 0x2de824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2de824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de828:
    // 0x2de828: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_2de82c:
    // 0x2de82c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2de830:
    if (ctx->pc == 0x2DE830u) {
        ctx->pc = 0x2DE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE82Cu;
        // 0x2de830: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE834u;
        goto label_2de834;
    }
    ctx->pc = 0x2DE82Cu;
    {
        const bool branch_taken_0x2de82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE82Cu;
        // 0x2de830: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de82c) {
            ctx->pc = 0x2DE844u;
            goto label_2de844;
        }
    }
    ctx->pc = 0x2DE834u;
label_2de834:
    // 0x2de834: 0x96220024  lhu         $v0, 0x24($s1)
    ctx->pc = 0x2de834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2de838:
    // 0x2de838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de83c:
    // 0x2de83c: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x2de83cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
label_2de840:
    // 0x2de840: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de844:
    // 0x2de844: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2de844u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2de848:
    // 0x2de848: 0x26670090  addiu       $a3, $s3, 0x90
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2de84c:
    // 0x2de84c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2de84cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de850:
    // 0x2de850: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2de850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2de854:
    // 0x2de854: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2de854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2de858:
    // 0x2de858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de85c:
    // 0x2de85c: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2de85cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2de860:
    // 0x2de860: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2de860u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2de864:
    // 0x2de864: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2de864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2de868:
    // 0x2de868: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2de868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2de86c:
    // 0x2de86c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2de86cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2de870:
    // 0x2de870: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2de870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2de874:
    // 0x2de874: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x2de874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2de878:
    // 0x2de878: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2de878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2de87c:
    // 0x2de87c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2de87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2de880:
    // 0x2de880: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2de880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2de884:
    // 0x2de884: 0xc0cdb38  jal         func_336CE0
label_2de888:
    if (ctx->pc == 0x2DE888u) {
        ctx->pc = 0x2DE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE884u;
        // 0x2de888: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE88Cu;
        goto label_2de88c;
    }
    ctx->pc = 0x2DE884u;
    SET_GPR_U32(ctx, 31, 0x2DE88Cu);
    ctx->pc = 0x2DE888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE884u;
    // 0x2de888: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DE884u, 0x2DE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE88Cu;
label_2de88c:
    // 0x2de88c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2de88cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2de890:
    // 0x2de890: 0xc087502  jal         func_21D408
label_2de894:
    if (ctx->pc == 0x2DE894u) {
        ctx->pc = 0x2DE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE890u;
        // 0x2de894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE898u;
        goto label_2de898;
    }
    ctx->pc = 0x2DE890u;
    SET_GPR_U32(ctx, 31, 0x2DE898u);
    ctx->pc = 0x2DE894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE890u;
    // 0x2de894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DE890u, 0x2DE898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE898u;
label_2de898:
    // 0x2de898: 0xc0e409a  jal         func_390268
label_2de89c:
    if (ctx->pc == 0x2DE89Cu) {
        ctx->pc = 0x2DE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE898u;
        // 0x2de89c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8A0u;
        goto label_2de8a0;
    }
    ctx->pc = 0x2DE898u;
    SET_GPR_U32(ctx, 31, 0x2DE8A0u);
    ctx->pc = 0x2DE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE898u;
    // 0x2de89c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE898u, 0x2DE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8A0u;
label_2de8a0:
    // 0x2de8a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2de8a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de8a4:
    // 0x2de8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de8a8:
    // 0x2de8a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2de8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de8ac:
    // 0x2de8ac: 0xc0b7994  jal         func_2DE650
label_2de8b0:
    if (ctx->pc == 0x2DE8B0u) {
        ctx->pc = 0x2DE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8ACu;
        // 0x2de8b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8B4u;
        goto label_2de8b4;
    }
    ctx->pc = 0x2DE8ACu;
    SET_GPR_U32(ctx, 31, 0x2DE8B4u);
    ctx->pc = 0x2DE8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8ACu;
    // 0x2de8b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE650u, 0x2DE8ACu, 0x2DE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8B4u;
label_2de8b4:
    // 0x2de8b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2de8b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de8b8:
    // 0x2de8b8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2de8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2de8bc:
    // 0x2de8bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de8c0:
    // 0x2de8c0: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_2de8c4:
    if (ctx->pc == 0x2DE8C4u) {
        ctx->pc = 0x2DE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8C0u;
        // 0x2de8c4: 0xc6200014  lwc1        $f0, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8C8u;
        goto label_2de8c8;
    }
    ctx->pc = 0x2DE8C0u;
    {
        const bool branch_taken_0x2de8c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de8c0) {
            ctx->pc = 0x2DE8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE8C0u;
            // 0x2de8c4: 0xc6200014  lwc1        $f0, 0x14($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE8C8u;
            goto label_2de8c8;
        }
    }
    ctx->pc = 0x2DE8C8u;
label_2de8c8:
    // 0x2de8c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2de8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de8cc:
    // 0x2de8cc: 0x0  nop
    ctx->pc = 0x2de8ccu;
    // NOP
label_2de8d0:
    // 0x2de8d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2de8d4:
    if (ctx->pc == 0x2DE8D4u) {
        ctx->pc = 0x2DE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D0u;
        // 0x2de8d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8D8u;
        goto label_2de8d8;
    }
    ctx->pc = 0x2DE8D0u;
    {
        const bool branch_taken_0x2de8d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D0u;
        // 0x2de8d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8d0) {
            ctx->pc = 0x2DE8E0u;
            goto label_2de8e0;
        }
    }
    ctx->pc = 0x2DE8D8u;
label_2de8d8:
    // 0x2de8d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_2de8dc:
    if (ctx->pc == 0x2DE8DCu) {
        ctx->pc = 0x2DE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D8u;
        // 0x2de8dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8E0u;
        goto label_2de8e0;
    }
    ctx->pc = 0x2DE8D8u;
    {
        const bool branch_taken_0x2de8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D8u;
        // 0x2de8dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8d8) {
            ctx->pc = 0x2DE924u;
            goto label_2de924;
        }
    }
    ctx->pc = 0x2DE8E0u;
label_2de8e0:
    // 0x2de8e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2de8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de8e4:
    // 0x2de8e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de8e8:
    // 0x2de8e8: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2de8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_2de8ec:
    // 0x2de8ec: 0xc087502  jal         func_21D408
label_2de8f0:
    if (ctx->pc == 0x2DE8F0u) {
        ctx->pc = 0x2DE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8ECu;
        // 0x2de8f0: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8F4u;
        goto label_2de8f4;
    }
    ctx->pc = 0x2DE8ECu;
    SET_GPR_U32(ctx, 31, 0x2DE8F4u);
    ctx->pc = 0x2DE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8ECu;
    // 0x2de8f0: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DE8ECu, 0x2DE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8F4u;
label_2de8f4:
    // 0x2de8f4: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2de8f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_2de8f8:
    // 0x2de8f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2de8fc:
    if (ctx->pc == 0x2DE8FCu) {
        ctx->pc = 0x2DE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8F8u;
        // 0x2de8fc: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE900u;
        goto label_2de900;
    }
    ctx->pc = 0x2DE8F8u;
    {
        const bool branch_taken_0x2de8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8F8u;
        // 0x2de8fc: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8f8) {
            ctx->pc = 0x2DE904u;
            goto label_2de904;
        }
    }
    ctx->pc = 0x2DE900u;
label_2de900:
    // 0x2de900: 0x2e030001  sltiu       $v1, $s0, 0x1
    ctx->pc = 0x2de900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2de904:
    // 0x2de904: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2de904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2de908:
    // 0x2de908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de90c:
    // 0x2de90c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_2de910:
    if (ctx->pc == 0x2DE910u) {
        ctx->pc = 0x2DE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE90Cu;
        // 0x2de910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE914u;
        goto label_2de914;
    }
    ctx->pc = 0x2DE90Cu;
    {
        const bool branch_taken_0x2de90c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE90Cu;
        // 0x2de910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de90c) {
            ctx->pc = 0x2DE924u;
            goto label_2de924;
        }
    }
    ctx->pc = 0x2DE914u;
label_2de914:
    // 0x2de914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2de914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de918:
    // 0x2de918: 0xc08886c  jal         func_2221B0
label_2de91c:
    if (ctx->pc == 0x2DE91Cu) {
        ctx->pc = 0x2DE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE918u;
        // 0x2de91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE920u;
        goto label_2de920;
    }
    ctx->pc = 0x2DE918u;
    SET_GPR_U32(ctx, 31, 0x2DE920u);
    ctx->pc = 0x2DE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE918u;
    // 0x2de91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2DE918u, 0x2DE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE920u;
label_2de920:
    // 0x2de920: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2de920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de924:
    // 0x2de924: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_2de928:
    if (ctx->pc == 0x2DE928u) {
        ctx->pc = 0x2DE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE924u;
        // 0x2de928: 0x96220024  lhu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE92Cu;
        goto label_2de92c;
    }
    ctx->pc = 0x2DE924u;
    {
        const bool branch_taken_0x2de924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de924) {
            ctx->pc = 0x2DE928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE924u;
            // 0x2de928: 0x96220024  lhu         $v0, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE938u;
            goto label_2de938;
        }
    }
    ctx->pc = 0x2DE92Cu;
label_2de92c:
    // 0x2de92c: 0x56400030  bnel        $s2, $zero, . + 4 + (0x30 << 2)
label_2de930:
    if (ctx->pc == 0x2DE930u) {
        ctx->pc = 0x2DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE92Cu;
        // 0x2de930: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE934u;
        goto label_2de934;
    }
    ctx->pc = 0x2DE92Cu;
    {
        const bool branch_taken_0x2de92c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de92c) {
            ctx->pc = 0x2DE930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE92Cu;
            // 0x2de930: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE9F0u;
            goto label_2de9f0;
        }
    }
    ctx->pc = 0x2DE934u;
label_2de934:
    // 0x2de934: 0x96220024  lhu         $v0, 0x24($s1)
    ctx->pc = 0x2de934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2de938:
    // 0x2de938: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2de938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2de93c:
    // 0x2de93c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2de940:
    if (ctx->pc == 0x2DE940u) {
        ctx->pc = 0x2DE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE93Cu;
        // 0x2de940: 0x96220024  lhu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE944u;
        goto label_2de944;
    }
    ctx->pc = 0x2DE93Cu;
    {
        const bool branch_taken_0x2de93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de93c) {
            ctx->pc = 0x2DE940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE93Cu;
            // 0x2de940: 0x96220024  lhu         $v0, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE944u;
label_2de944:
    // 0x2de944: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2de944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de948:
    // 0x2de948: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2de948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2de94c:
    // 0x2de94c: 0xa6200024  sh          $zero, 0x24($s1)
    ctx->pc = 0x2de94cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
label_2de950:
    // 0x2de950: 0x96220024  lhu         $v0, 0x24($s1)
    ctx->pc = 0x2de950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2de954:
    // 0x2de954: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_2de958:
    if (ctx->pc == 0x2DE958u) {
        ctx->pc = 0x2DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE954u;
        // 0x2de958: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE95Cu;
        goto label_2de95c;
    }
    ctx->pc = 0x2DE954u;
    {
        const bool branch_taken_0x2de954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de954) {
            ctx->pc = 0x2DE958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE954u;
            // 0x2de958: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE9F0u;
            goto label_2de9f0;
        }
    }
    ctx->pc = 0x2DE95Cu;
label_2de95c:
    // 0x2de95c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2de95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de960:
    // 0x2de960: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_2de964:
    if (ctx->pc == 0x2DE964u) {
        ctx->pc = 0x2DE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE960u;
        // 0x2de964: 0x80430212  lb          $v1, 0x212($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 530)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE968u;
        goto label_2de968;
    }
    ctx->pc = 0x2DE960u;
    {
        const bool branch_taken_0x2de960 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE960u;
        // 0x2de964: 0x80430212  lb          $v1, 0x212($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 530)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de960) {
            ctx->pc = 0x2DE990u;
            goto label_2de990;
        }
    }
    ctx->pc = 0x2DE968u;
label_2de968:
    // 0x2de968: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2de968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2de96c:
    // 0x2de96c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x2de96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_2de970:
    // 0x2de970: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2de970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2de974:
    // 0x2de974: 0x2484eaf0  addiu       $a0, $a0, -0x1510
    ctx->pc = 0x2de974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961904));
label_2de978:
    // 0x2de978: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2de978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2de97c:
    // 0x2de97c: 0xc0a5864  jal         func_296190
label_2de980:
    if (ctx->pc == 0x2DE980u) {
        ctx->pc = 0x2DE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE97Cu;
        // 0x2de980: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE984u;
        goto label_2de984;
    }
    ctx->pc = 0x2DE97Cu;
    SET_GPR_U32(ctx, 31, 0x2DE984u);
    ctx->pc = 0x2DE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE97Cu;
    // 0x2de980: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296190u, 0x2DE97Cu, 0x2DE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE984u;
label_2de984:
    // 0x2de984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de988:
    // 0x2de988: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_2de98c:
    if (ctx->pc == 0x2DE98Cu) {
        ctx->pc = 0x2DE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE988u;
        // 0x2de98c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE990u;
        goto label_2de990;
    }
    ctx->pc = 0x2DE988u;
    {
        const bool branch_taken_0x2de988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2de988) {
            ctx->pc = 0x2DE98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE988u;
            // 0x2de98c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE9F0u;
            goto label_2de9f0;
        }
    }
    ctx->pc = 0x2DE990u;
label_2de990:
    // 0x2de990: 0xc0a4e54  jal         func_293950
label_2de994:
    if (ctx->pc == 0x2DE994u) {
        ctx->pc = 0x2DE998u;
        goto label_2de998;
    }
    ctx->pc = 0x2DE990u;
    SET_GPR_U32(ctx, 31, 0x2DE998u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DE990u, 0x2DE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE998u;
label_2de998:
    // 0x2de998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de99c:
    // 0x2de99c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2de9a0:
    if (ctx->pc == 0x2DE9A0u) {
        ctx->pc = 0x2DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE99Cu;
        // 0x2de9a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9A4u;
        goto label_2de9a4;
    }
    ctx->pc = 0x2DE99Cu;
    {
        const bool branch_taken_0x2de99c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de99c) {
            ctx->pc = 0x2DE9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE99Cu;
            // 0x2de9a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE9E0u;
            goto label_2de9e0;
        }
    }
    ctx->pc = 0x2DE9A4u;
label_2de9a4:
    // 0x2de9a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2de9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2de9a8:
    // 0x2de9a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2de9a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2de9ac:
    // 0x2de9ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2de9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2de9b0:
    // 0x2de9b0: 0x40f809  jalr        $v0
label_2de9b4:
    if (ctx->pc == 0x2DE9B4u) {
        ctx->pc = 0x2DE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9B0u;
        // 0x2de9b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9B8u;
        goto label_2de9b8;
    }
    ctx->pc = 0x2DE9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE9B8u);
        ctx->pc = 0x2DE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9B0u;
        // 0x2de9b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE9B0u, 0x2DE9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE9B8u;
label_2de9b8:
    // 0x2de9b8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2de9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2de9bc:
    // 0x2de9bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de9c0:
    // 0x2de9c0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2de9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2de9c4:
    // 0x2de9c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2de9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2de9c8:
    // 0x2de9c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2de9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de9cc:
    // 0x2de9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de9d0:
    // 0x2de9d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de9d4:
    // 0x2de9d4: 0xc0b7eea  jal         func_2DFBA8
label_2de9d8:
    if (ctx->pc == 0x2DE9D8u) {
        ctx->pc = 0x2DE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9D4u;
        // 0x2de9d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9DCu;
        goto label_2de9dc;
    }
    ctx->pc = 0x2DE9D4u;
    SET_GPR_U32(ctx, 31, 0x2DE9DCu);
    ctx->pc = 0x2DE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9D4u;
    // 0x2de9d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2DE9D4u, 0x2DE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9DCu;
label_2de9dc:
    // 0x2de9dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2de9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de9e0:
    // 0x2de9e0: 0xc0a35d6  jal         func_28D758
label_2de9e4:
    if (ctx->pc == 0x2DE9E4u) {
        ctx->pc = 0x2DE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9E0u;
        // 0x2de9e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9E8u;
        goto label_2de9e8;
    }
    ctx->pc = 0x2DE9E0u;
    SET_GPR_U32(ctx, 31, 0x2DE9E8u);
    ctx->pc = 0x2DE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9E0u;
    // 0x2de9e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DE9E0u, 0x2DE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9E8u;
label_2de9e8:
    // 0x2de9e8: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_2de9ec:
    if (ctx->pc == 0x2DE9ECu) {
        ctx->pc = 0x2DE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9E8u;
        // 0x2de9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9F0u;
        goto label_2de9f0;
    }
    ctx->pc = 0x2DE9E8u;
    {
        const bool branch_taken_0x2de9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9E8u;
        // 0x2de9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de9e8) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DE9F0u;
label_2de9f0:
    // 0x2de9f0: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2de9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2de9f4:
    // 0x2de9f4: 0x1c4001de  bgtz        $v0, . + 4 + (0x1DE << 2)
label_2de9f8:
    if (ctx->pc == 0x2DE9F8u) {
        ctx->pc = 0x2DE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9F4u;
        // 0x2de9f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE9FCu;
        goto label_2de9fc;
    }
    ctx->pc = 0x2DE9F4u;
    {
        const bool branch_taken_0x2de9f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9F4u;
        // 0x2de9f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de9f4) {
            ctx->pc = 0x2DF170u;
            goto label_2df170;
        }
    }
    ctx->pc = 0x2DE9FCu;
label_2de9fc:
    // 0x2de9fc: 0xc0a337e  jal         func_28CDF8
label_2dea00:
    if (ctx->pc == 0x2DEA00u) {
        ctx->pc = 0x2DEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9FCu;
        // 0x2dea00: 0x82250026  lb          $a1, 0x26($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA04u;
        goto label_2dea04;
    }
    ctx->pc = 0x2DE9FCu;
    SET_GPR_U32(ctx, 31, 0x2DEA04u);
    ctx->pc = 0x2DEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9FCu;
    // 0x2dea00: 0x82250026  lb          $a1, 0x26($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2DE9FCu, 0x2DEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA04u;
label_2dea04:
    // 0x2dea04: 0x56d00086  bnel        $s6, $s0, . + 4 + (0x86 << 2)
label_2dea08:
    if (ctx->pc == 0x2DEA08u) {
        ctx->pc = 0x2DEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA04u;
        // 0x2dea08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA0Cu;
        goto label_2dea0c;
    }
    ctx->pc = 0x2DEA04u;
    {
        const bool branch_taken_0x2dea04 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        if (branch_taken_0x2dea04) {
            ctx->pc = 0x2DEA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEA04u;
            // 0x2dea08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC20u;
            goto label_2dec20;
        }
    }
    ctx->pc = 0x2DEA0Cu;
label_2dea0c:
    // 0x2dea0c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2dea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2dea10:
    // 0x2dea10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dea10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2dea14:
    // 0x2dea14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dea14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dea18:
    // 0x2dea18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dea1c:
    // 0x2dea1c: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2dea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2dea20:
    // 0x2dea20: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2dea20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dea24:
    // 0x2dea24: 0xc0e409a  jal         func_390268
label_2dea28:
    if (ctx->pc == 0x2DEA28u) {
        ctx->pc = 0x2DEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA24u;
        // 0x2dea28: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA2Cu;
        goto label_2dea2c;
    }
    ctx->pc = 0x2DEA24u;
    SET_GPR_U32(ctx, 31, 0x2DEA2Cu);
    ctx->pc = 0x2DEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA24u;
    // 0x2dea28: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DEA24u, 0x2DEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA2Cu;
label_2dea2c:
    // 0x2dea2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dea30:
    // 0x2dea30: 0xc0a34d6  jal         func_28D358
label_2dea34:
    if (ctx->pc == 0x2DEA34u) {
        ctx->pc = 0x2DEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA30u;
        // 0x2dea34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA38u;
        goto label_2dea38;
    }
    ctx->pc = 0x2DEA30u;
    SET_GPR_U32(ctx, 31, 0x2DEA38u);
    ctx->pc = 0x2DEA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA30u;
    // 0x2dea34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2DEA30u, 0x2DEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA38u;
label_2dea38:
    // 0x2dea38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dea38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dea3c:
    // 0x2dea3c: 0x56400035  bnel        $s2, $zero, . + 4 + (0x35 << 2)
label_2dea40:
    if (ctx->pc == 0x2DEA40u) {
        ctx->pc = 0x2DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA3Cu;
        // 0x2dea40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA44u;
        goto label_2dea44;
    }
    ctx->pc = 0x2DEA3Cu;
    {
        const bool branch_taken_0x2dea3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dea3c) {
            ctx->pc = 0x2DEA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEA3Cu;
            // 0x2dea40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB14u;
            goto label_2deb14;
        }
    }
    ctx->pc = 0x2DEA44u;
label_2dea44:
    // 0x2dea44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dea48:
    // 0x2dea48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dea48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dea4c:
    // 0x2dea4c: 0xc13b782  jal         func_4EDE08
label_2dea50:
    if (ctx->pc == 0x2DEA50u) {
        ctx->pc = 0x2DEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA4Cu;
        // 0x2dea50: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA54u;
        goto label_2dea54;
    }
    ctx->pc = 0x2DEA4Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA54u);
    ctx->pc = 0x2DEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA4Cu;
    // 0x2dea50: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2DEA4Cu, 0x2DEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA54u;
label_2dea54:
    // 0x2dea54: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2dea54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2dea58:
    // 0x2dea58: 0xc0e409a  jal         func_390268
label_2dea5c:
    if (ctx->pc == 0x2DEA5Cu) {
        ctx->pc = 0x2DEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA58u;
        // 0x2dea5c: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA60u;
        goto label_2dea60;
    }
    ctx->pc = 0x2DEA58u;
    SET_GPR_U32(ctx, 31, 0x2DEA60u);
    ctx->pc = 0x2DEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA58u;
    // 0x2dea5c: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DEA58u, 0x2DEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA60u;
label_2dea60:
    // 0x2dea60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dea60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dea64:
    // 0x2dea64: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2dea68:
    if (ctx->pc == 0x2DEA68u) {
        ctx->pc = 0x2DEA6Cu;
        goto label_2dea6c;
    }
    ctx->pc = 0x2DEA64u;
    {
        const bool branch_taken_0x2dea64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea64) {
            ctx->pc = 0x2DEAC0u;
            goto label_2deac0;
        }
    }
    ctx->pc = 0x2DEA6Cu;
label_2dea6c:
    // 0x2dea6c: 0xc089f98  jal         func_227E60
label_2dea70:
    if (ctx->pc == 0x2DEA70u) {
        ctx->pc = 0x2DEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA6Cu;
        // 0x2dea70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA74u;
        goto label_2dea74;
    }
    ctx->pc = 0x2DEA6Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA74u);
    ctx->pc = 0x2DEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA6Cu;
    // 0x2dea70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2DEA6Cu, 0x2DEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA74u;
label_2dea74:
    // 0x2dea74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2dea78:
    if (ctx->pc == 0x2DEA78u) {
        ctx->pc = 0x2DEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA74u;
        // 0x2dea78: 0x26e24b00  addiu       $v0, $s7, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA7Cu;
        goto label_2dea7c;
    }
    ctx->pc = 0x2DEA74u;
    {
        const bool branch_taken_0x2dea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA74u;
        // 0x2dea78: 0x26e24b00  addiu       $v0, $s7, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea74) {
            ctx->pc = 0x2DEAC0u;
            goto label_2deac0;
        }
    }
    ctx->pc = 0x2DEA7Cu;
label_2dea7c:
    // 0x2dea7c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2dea7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2dea80:
    // 0x2dea80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2dea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dea84:
    // 0x2dea84: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dea84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2dea88:
    // 0x2dea88: 0xc0cdb38  jal         func_336CE0
label_2dea8c:
    if (ctx->pc == 0x2DEA8Cu) {
        ctx->pc = 0x2DEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA88u;
        // 0x2dea8c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEA90u;
        goto label_2dea90;
    }
    ctx->pc = 0x2DEA88u;
    SET_GPR_U32(ctx, 31, 0x2DEA90u);
    ctx->pc = 0x2DEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA88u;
    // 0x2dea8c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DEA88u, 0x2DEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA90u;
label_2dea90:
    // 0x2dea90: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2dea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2dea94:
    // 0x2dea94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dea94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dea98:
    // 0x2dea98: 0x0  nop
    ctx->pc = 0x2dea98u;
    // NOP
label_2dea9c:
    // 0x2dea9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dea9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2deaa0:
    // 0x2deaa0: 0x0  nop
    ctx->pc = 0x2deaa0u;
    // NOP
label_2deaa4:
    // 0x2deaa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2deaa8:
    if (ctx->pc == 0x2DEAA8u) {
        ctx->pc = 0x2DEAACu;
        goto label_2deaac;
    }
    ctx->pc = 0x2DEAA4u;
    {
        const bool branch_taken_0x2deaa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2deaa4) {
            ctx->pc = 0x2DEAC0u;
            goto label_2deac0;
        }
    }
    ctx->pc = 0x2DEAACu;
label_2deaac:
    // 0x2deaac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2deaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2deab0:
    // 0x2deab0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deab4:
    // 0x2deab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2deab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2deab8:
    // 0x2deab8: 0xc0a33f8  jal         func_28CFE0
label_2deabc:
    if (ctx->pc == 0x2DEABCu) {
        ctx->pc = 0x2DEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAB8u;
        // 0x2deabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAC0u;
        goto label_2deac0;
    }
    ctx->pc = 0x2DEAB8u;
    SET_GPR_U32(ctx, 31, 0x2DEAC0u);
    ctx->pc = 0x2DEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAB8u;
    // 0x2deabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DEAB8u, 0x2DEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAC0u;
label_2deac0:
    // 0x2deac0: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
label_2deac4:
    if (ctx->pc == 0x2DEAC4u) {
        ctx->pc = 0x2DEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAC0u;
        // 0x2deac4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAC8u;
        goto label_2deac8;
    }
    ctx->pc = 0x2DEAC0u;
    {
        const bool branch_taken_0x2deac0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAC0u;
        // 0x2deac4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deac0) {
            ctx->pc = 0x2DEB14u;
            goto label_2deb14;
        }
    }
    ctx->pc = 0x2DEAC8u;
label_2deac8:
    // 0x2deac8: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_2deacc:
    if (ctx->pc == 0x2DEACCu) {
        ctx->pc = 0x2DEAD0u;
        goto label_2dead0;
    }
    ctx->pc = 0x2DEAC8u;
    {
        const bool branch_taken_0x2deac8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deac8) {
            ctx->pc = 0x2DEB0Cu;
            goto label_2deb0c;
        }
    }
    ctx->pc = 0x2DEAD0u;
label_2dead0:
    // 0x2dead0: 0xc089f98  jal         func_227E60
label_2dead4:
    if (ctx->pc == 0x2DEAD4u) {
        ctx->pc = 0x2DEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAD0u;
        // 0x2dead4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAD8u;
        goto label_2dead8;
    }
    ctx->pc = 0x2DEAD0u;
    SET_GPR_U32(ctx, 31, 0x2DEAD8u);
    ctx->pc = 0x2DEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAD0u;
    // 0x2dead4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2DEAD0u, 0x2DEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAD8u;
label_2dead8:
    // 0x2dead8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2deadc:
    if (ctx->pc == 0x2DEADCu) {
        ctx->pc = 0x2DEAE0u;
        goto label_2deae0;
    }
    ctx->pc = 0x2DEAD8u;
    {
        const bool branch_taken_0x2dead8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dead8) {
            ctx->pc = 0x2DEB0Cu;
            goto label_2deb0c;
        }
    }
    ctx->pc = 0x2DEAE0u;
label_2deae0:
    // 0x2deae0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2deae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2deae4:
    // 0x2deae4: 0xc087502  jal         func_21D408
label_2deae8:
    if (ctx->pc == 0x2DEAE8u) {
        ctx->pc = 0x2DEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAE4u;
        // 0x2deae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAECu;
        goto label_2deaec;
    }
    ctx->pc = 0x2DEAE4u;
    SET_GPR_U32(ctx, 31, 0x2DEAECu);
    ctx->pc = 0x2DEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAE4u;
    // 0x2deae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DEAE4u, 0x2DEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAECu;
label_2deaec:
    // 0x2deaec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2deaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deaf0:
    // 0x2deaf0: 0xc0a408c  jal         func_290230
label_2deaf4:
    if (ctx->pc == 0x2DEAF4u) {
        ctx->pc = 0x2DEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF0u;
        // 0x2deaf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEAF8u;
        goto label_2deaf8;
    }
    ctx->pc = 0x2DEAF0u;
    SET_GPR_U32(ctx, 31, 0x2DEAF8u);
    ctx->pc = 0x2DEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAF0u;
    // 0x2deaf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2DEAF0u, 0x2DEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAF8u;
label_2deaf8:
    // 0x2deaf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2deafc:
    if (ctx->pc == 0x2DEAFCu) {
        ctx->pc = 0x2DEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF8u;
        // 0x2deafc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB00u;
        goto label_2deb00;
    }
    ctx->pc = 0x2DEAF8u;
    {
        const bool branch_taken_0x2deaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF8u;
        // 0x2deafc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deaf8) {
            ctx->pc = 0x2DEB0Cu;
            goto label_2deb0c;
        }
    }
    ctx->pc = 0x2DEB00u;
label_2deb00:
    // 0x2deb00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2deb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deb04:
    // 0x2deb04: 0xc0a33f8  jal         func_28CFE0
label_2deb08:
    if (ctx->pc == 0x2DEB08u) {
        ctx->pc = 0x2DEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB04u;
        // 0x2deb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB0Cu;
        goto label_2deb0c;
    }
    ctx->pc = 0x2DEB04u;
    SET_GPR_U32(ctx, 31, 0x2DEB0Cu);
    ctx->pc = 0x2DEB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB04u;
    // 0x2deb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DEB04u, 0x2DEB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB0Cu;
label_2deb0c:
    // 0x2deb0c: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
label_2deb10:
    if (ctx->pc == 0x2DEB10u) {
        ctx->pc = 0x2DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB0Cu;
        // 0x2deb10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB14u;
        goto label_2deb14;
    }
    ctx->pc = 0x2DEB0Cu;
    {
        const bool branch_taken_0x2deb0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB0Cu;
        // 0x2deb10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb0c) {
            ctx->pc = 0x2DEC08u;
            goto label_2dec08;
        }
    }
    ctx->pc = 0x2DEB14u;
label_2deb14:
    // 0x2deb14: 0xc08bfa0  jal         func_22FE80
label_2deb18:
    if (ctx->pc == 0x2DEB18u) {
        ctx->pc = 0x2DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB14u;
        // 0x2deb18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB1Cu;
        goto label_2deb1c;
    }
    ctx->pc = 0x2DEB14u;
    SET_GPR_U32(ctx, 31, 0x2DEB1Cu);
    ctx->pc = 0x2DEB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB14u;
    // 0x2deb18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2DEB14u, 0x2DEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB1Cu;
label_2deb1c:
    // 0x2deb1c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2deb1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2deb20:
    // 0x2deb20: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x2deb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2deb24:
    // 0x2deb24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2deb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deb28:
    // 0x2deb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2deb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2deb2c:
    // 0x2deb2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2deb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2deb30:
    // 0x2deb30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2deb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2deb34:
    // 0x2deb34: 0xc4b40140  lwc1        $f20, 0x140($a1)
    ctx->pc = 0x2deb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2deb38:
    // 0x2deb38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2deb38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2deb3c:
    // 0x2deb3c: 0xc08a08a  jal         func_228228
label_2deb40:
    if (ctx->pc == 0x2DEB40u) {
        ctx->pc = 0x2DEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB3Cu;
        // 0x2deb40: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB44u;
        goto label_2deb44;
    }
    ctx->pc = 0x2DEB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB44u);
    ctx->pc = 0x2DEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB3Cu;
    // 0x2deb40: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2DEB3Cu, 0x2DEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB44u;
label_2deb44:
    // 0x2deb44: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
label_2deb48:
    if (ctx->pc == 0x2DEB48u) {
        ctx->pc = 0x2DEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB44u;
        // 0x2deb48: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB4Cu;
        goto label_2deb4c;
    }
    ctx->pc = 0x2DEB44u;
    {
        const bool branch_taken_0x2deb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2deb44) {
            ctx->pc = 0x2DEB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEB44u;
            // 0x2deb48: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB60u;
            goto label_2deb60;
        }
    }
    ctx->pc = 0x2DEB4Cu;
label_2deb4c:
    // 0x2deb4c: 0xc08a096  jal         func_228258
label_2deb50:
    if (ctx->pc == 0x2DEB50u) {
        ctx->pc = 0x2DEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB4Cu;
        // 0x2deb50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB54u;
        goto label_2deb54;
    }
    ctx->pc = 0x2DEB4Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB54u);
    ctx->pc = 0x2DEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB4Cu;
    // 0x2deb50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2DEB4Cu, 0x2DEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB54u;
label_2deb54:
    // 0x2deb54: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_2deb58:
    if (ctx->pc == 0x2DEB58u) {
        ctx->pc = 0x2DEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB54u;
        // 0x2deb58: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB5Cu;
        goto label_2deb5c;
    }
    ctx->pc = 0x2DEB54u;
    {
        const bool branch_taken_0x2deb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB54u;
        // 0x2deb58: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb54) {
            ctx->pc = 0x2DEB68u;
            goto label_2deb68;
        }
    }
    ctx->pc = 0x2DEB5Cu;
label_2deb5c:
    // 0x2deb5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2deb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deb60:
    // 0x2deb60: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2deb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2deb64:
    // 0x2deb64: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2deb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2deb68:
    // 0x2deb68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2deb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2deb6c:
    // 0x2deb6c: 0xc0cdb38  jal         func_336CE0
label_2deb70:
    if (ctx->pc == 0x2DEB70u) {
        ctx->pc = 0x2DEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB6Cu;
        // 0x2deb70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB74u;
        goto label_2deb74;
    }
    ctx->pc = 0x2DEB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB74u);
    ctx->pc = 0x2DEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB6Cu;
    // 0x2deb70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DEB6Cu, 0x2DEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB74u;
label_2deb74:
    // 0x2deb74: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2deb74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2deb78:
    // 0x2deb78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2deb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2deb7c:
    // 0x2deb7c: 0x0  nop
    ctx->pc = 0x2deb7cu;
    // NOP
label_2deb80:
    // 0x2deb80: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2deb84:
    if (ctx->pc == 0x2DEB84u) {
        ctx->pc = 0x2DEB88u;
        goto label_2deb88;
    }
    ctx->pc = 0x2DEB80u;
    {
        const bool branch_taken_0x2deb80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2deb80) {
            ctx->pc = 0x2DEBCCu;
            goto label_2debcc;
        }
    }
    ctx->pc = 0x2DEB88u;
label_2deb88:
    // 0x2deb88: 0xc0a367c  jal         func_28D9F0
label_2deb8c:
    if (ctx->pc == 0x2DEB8Cu) {
        ctx->pc = 0x2DEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB88u;
        // 0x2deb8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB90u;
        goto label_2deb90;
    }
    ctx->pc = 0x2DEB88u;
    SET_GPR_U32(ctx, 31, 0x2DEB90u);
    ctx->pc = 0x2DEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB88u;
    // 0x2deb8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DEB88u, 0x2DEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB90u;
label_2deb90:
    // 0x2deb90: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
label_2deb94:
    if (ctx->pc == 0x2DEB94u) {
        ctx->pc = 0x2DEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB90u;
        // 0x2deb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB98u;
        goto label_2deb98;
    }
    ctx->pc = 0x2DEB90u;
    {
        const bool branch_taken_0x2deb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB90u;
        // 0x2deb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb90) {
            ctx->pc = 0x2DF170u;
            goto label_2df170;
        }
    }
    ctx->pc = 0x2DEB98u;
label_2deb98:
    // 0x2deb98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2deb9c:
    // 0x2deb9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2deb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2deba0:
    // 0x2deba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2deba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2deba4:
    // 0x2deba4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2deba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2deba8:
    // 0x2deba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2deba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2debac:
    // 0x2debac: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2debacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2debb0:
    // 0x2debb0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2debb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2debb4:
    // 0x2debb4: 0x460da340  add.s       $f13, $f20, $f13
    ctx->pc = 0x2debb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
label_2debb8:
    // 0x2debb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2debb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2debbc:
    // 0x2debbc: 0xc0bf3d4  jal         func_2FCF50
label_2debc0:
    if (ctx->pc == 0x2DEBC0u) {
        ctx->pc = 0x2DEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBBCu;
        // 0x2debc0: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBC4u;
        goto label_2debc4;
    }
    ctx->pc = 0x2DEBBCu;
    SET_GPR_U32(ctx, 31, 0x2DEBC4u);
    ctx->pc = 0x2DEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBBCu;
    // 0x2debc0: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2DEBBCu, 0x2DEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBC4u;
label_2debc4:
    // 0x2debc4: 0x1000016b  b           . + 4 + (0x16B << 2)
label_2debc8:
    if (ctx->pc == 0x2DEBC8u) {
        ctx->pc = 0x2DEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBC4u;
        // 0x2debc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBCCu;
        goto label_2debcc;
    }
    ctx->pc = 0x2DEBC4u;
    {
        const bool branch_taken_0x2debc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBC4u;
        // 0x2debc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debc4) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DEBCCu;
label_2debcc:
    // 0x2debcc: 0xc0a367c  jal         func_28D9F0
label_2debd0:
    if (ctx->pc == 0x2DEBD0u) {
        ctx->pc = 0x2DEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBCCu;
        // 0x2debd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBD4u;
        goto label_2debd4;
    }
    ctx->pc = 0x2DEBCCu;
    SET_GPR_U32(ctx, 31, 0x2DEBD4u);
    ctx->pc = 0x2DEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBCCu;
    // 0x2debd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DEBCCu, 0x2DEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBD4u;
label_2debd4:
    // 0x2debd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2debd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2debd8:
    // 0x2debd8: 0x12000166  beqz        $s0, . + 4 + (0x166 << 2)
label_2debdc:
    if (ctx->pc == 0x2DEBDCu) {
        ctx->pc = 0x2DEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBD8u;
        // 0x2debdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBE0u;
        goto label_2debe0;
    }
    ctx->pc = 0x2DEBD8u;
    {
        const bool branch_taken_0x2debd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBD8u;
        // 0x2debdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debd8) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DEBE0u;
label_2debe0:
    // 0x2debe0: 0xc0884f6  jal         func_2213D8
label_2debe4:
    if (ctx->pc == 0x2DEBE4u) {
        ctx->pc = 0x2DEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBE0u;
        // 0x2debe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBE8u;
        goto label_2debe8;
    }
    ctx->pc = 0x2DEBE0u;
    SET_GPR_U32(ctx, 31, 0x2DEBE8u);
    ctx->pc = 0x2DEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBE0u;
    // 0x2debe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DEBE0u, 0x2DEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBE8u;
label_2debe8:
    // 0x2debe8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2debe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2debec:
    // 0x2debec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2debecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2debf0:
    // 0x2debf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2debf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2debf4:
    // 0x2debf4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2debf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2debf8:
    // 0x2debf8: 0xc0bf800  jal         func_2FE000
label_2debfc:
    if (ctx->pc == 0x2DEBFCu) {
        ctx->pc = 0x2DEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBF8u;
        // 0x2debfc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC00u;
        goto label_2dec00;
    }
    ctx->pc = 0x2DEBF8u;
    SET_GPR_U32(ctx, 31, 0x2DEC00u);
    ctx->pc = 0x2DEBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBF8u;
    // 0x2debfc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DEBF8u, 0x2DEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC00u;
label_2dec00:
    // 0x2dec00: 0x1000015c  b           . + 4 + (0x15C << 2)
label_2dec04:
    if (ctx->pc == 0x2DEC04u) {
        ctx->pc = 0x2DEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC00u;
        // 0x2dec04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC08u;
        goto label_2dec08;
    }
    ctx->pc = 0x2DEC00u;
    {
        const bool branch_taken_0x2dec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC00u;
        // 0x2dec04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec00) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DEC08u;
label_2dec08:
    // 0x2dec08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dec0c:
    // 0x2dec0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dec10:
    // 0x2dec10: 0xc0a33f8  jal         func_28CFE0
label_2dec14:
    if (ctx->pc == 0x2DEC14u) {
        ctx->pc = 0x2DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC10u;
        // 0x2dec14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC18u;
        goto label_2dec18;
    }
    ctx->pc = 0x2DEC10u;
    SET_GPR_U32(ctx, 31, 0x2DEC18u);
    ctx->pc = 0x2DEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC10u;
    // 0x2dec14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DEC10u, 0x2DEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC18u;
label_2dec18:
    // 0x2dec18: 0x1000000a  b           . + 4 + (0xA << 2)
label_2dec1c:
    if (ctx->pc == 0x2DEC1Cu) {
        ctx->pc = 0x2DEC20u;
        goto label_2dec20;
    }
    ctx->pc = 0x2DEC18u;
    {
        const bool branch_taken_0x2dec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dec18) {
            ctx->pc = 0x2DEC44u;
            goto label_2dec44;
        }
    }
    ctx->pc = 0x2DEC20u;
label_2dec20:
    // 0x2dec20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dec24:
    // 0x2dec24: 0xc0a33f8  jal         func_28CFE0
label_2dec28:
    if (ctx->pc == 0x2DEC28u) {
        ctx->pc = 0x2DEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC24u;
        // 0x2dec28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC2Cu;
        goto label_2dec2c;
    }
    ctx->pc = 0x2DEC24u;
    SET_GPR_U32(ctx, 31, 0x2DEC2Cu);
    ctx->pc = 0x2DEC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC24u;
    // 0x2dec28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DEC24u, 0x2DEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC2Cu;
label_2dec2c:
    // 0x2dec2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dec30:
    // 0x2dec30: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2dec30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2dec34:
    // 0x2dec34: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2dec34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2dec38:
    // 0x2dec38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dec38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec3c:
    // 0x2dec3c: 0x0  nop
    ctx->pc = 0x2dec3cu;
    // NOP
label_2dec40:
    // 0x2dec40: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2dec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2dec44:
    // 0x2dec44: 0xc08bfbc  jal         func_22FEF0
label_2dec48:
    if (ctx->pc == 0x2DEC48u) {
        ctx->pc = 0x2DEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC44u;
        // 0x2dec48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC4Cu;
        goto label_2dec4c;
    }
    ctx->pc = 0x2DEC44u;
    SET_GPR_U32(ctx, 31, 0x2DEC4Cu);
    ctx->pc = 0x2DEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC44u;
    // 0x2dec48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DEC44u, 0x2DEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC4Cu;
label_2dec4c:
    // 0x2dec4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dec50:
    // 0x2dec50: 0x90430265  lbu         $v1, 0x265($v0)
    ctx->pc = 0x2dec50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 613)));
label_2dec54:
    // 0x2dec54: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_2dec58:
    if (ctx->pc == 0x2DEC58u) {
        ctx->pc = 0x2DEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC54u;
        // 0x2dec58: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC5Cu;
        goto label_2dec5c;
    }
    ctx->pc = 0x2DEC54u;
    {
        const bool branch_taken_0x2dec54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC54u;
        // 0x2dec58: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec54) {
            ctx->pc = 0x2DEDCCu;
            goto label_2dedcc;
        }
    }
    ctx->pc = 0x2DEC5Cu;
label_2dec5c:
    // 0x2dec5c: 0xc089bfc  jal         func_226FF0
label_2dec60:
    if (ctx->pc == 0x2DEC60u) {
        ctx->pc = 0x2DEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC5Cu;
        // 0x2dec60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC64u;
        goto label_2dec64;
    }
    ctx->pc = 0x2DEC5Cu;
    SET_GPR_U32(ctx, 31, 0x2DEC64u);
    ctx->pc = 0x2DEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC5Cu;
    // 0x2dec60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2DEC5Cu, 0x2DEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC64u;
label_2dec64:
    // 0x2dec64: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_2dec68:
    if (ctx->pc == 0x2DEC68u) {
        ctx->pc = 0x2DEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC64u;
        // 0x2dec68: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC6Cu;
        goto label_2dec6c;
    }
    ctx->pc = 0x2DEC64u;
    {
        const bool branch_taken_0x2dec64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC64u;
        // 0x2dec68: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec64) {
            ctx->pc = 0x2DEDCCu;
            goto label_2dedcc;
        }
    }
    ctx->pc = 0x2DEC6Cu;
label_2dec6c:
    // 0x2dec6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dec70:
    // 0x2dec70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2dec74:
    // 0x2dec74: 0x8c64caa8  lw          $a0, -0x3558($v1)
    ctx->pc = 0x2dec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953640)));
label_2dec78:
    // 0x2dec78: 0x8c46020c  lw          $a2, 0x20C($v0)
    ctx->pc = 0x2dec78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2dec7c:
    // 0x2dec7c: 0xc05913e  jal         func_1644F8
label_2dec80:
    if (ctx->pc == 0x2DEC80u) {
        ctx->pc = 0x2DEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC7Cu;
        // 0x2dec80: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC84u;
        goto label_2dec84;
    }
    ctx->pc = 0x2DEC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DEC84u);
    ctx->pc = 0x2DEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC7Cu;
    // 0x2dec80: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644F8u, 0x2DEC7Cu, 0x2DEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC84u;
label_2dec84:
    // 0x2dec84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dec88:
    // 0x2dec88: 0x10c0004f  beqz        $a2, . + 4 + (0x4F << 2)
label_2dec8c:
    if (ctx->pc == 0x2DEC8Cu) {
        ctx->pc = 0x2DEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC88u;
        // 0x2dec8c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC90u;
        goto label_2dec90;
    }
    ctx->pc = 0x2DEC88u;
    {
        const bool branch_taken_0x2dec88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC88u;
        // 0x2dec8c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec88) {
            ctx->pc = 0x2DEDC8u;
            goto label_2dedc8;
        }
    }
    ctx->pc = 0x2DEC90u;
label_2dec90:
    // 0x2dec90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dec90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dec94:
    // 0x2dec94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2dec98:
    if (ctx->pc == 0x2DEC98u) {
        ctx->pc = 0x2DEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC94u;
        // 0x2dec98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC9Cu;
        goto label_2dec9c;
    }
    ctx->pc = 0x2DEC94u;
    {
        const bool branch_taken_0x2dec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dec94) {
            ctx->pc = 0x2DEC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEC94u;
            // 0x2dec98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC9Cu;
            goto label_2dec9c;
        }
    }
    ctx->pc = 0x2DEC9Cu;
label_2dec9c:
    // 0x2dec9c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2dec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2deca0:
    // 0x2deca0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2deca0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2deca4:
    // 0x2deca4: 0x2010  mfhi        $a0
    ctx->pc = 0x2deca4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2deca8:
    // 0x2deca8: 0x14800048  bnez        $a0, . + 4 + (0x48 << 2)
label_2decac:
    if (ctx->pc == 0x2DECACu) {
        ctx->pc = 0x2DECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECA8u;
        // 0x2decac: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECB0u;
        goto label_2decb0;
    }
    ctx->pc = 0x2DECA8u;
    {
        const bool branch_taken_0x2deca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECA8u;
        // 0x2decac: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deca8) {
            ctx->pc = 0x2DEDCCu;
            goto label_2dedcc;
        }
    }
    ctx->pc = 0x2DECB0u;
label_2decb0:
    // 0x2decb0: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_2decb4:
    if (ctx->pc == 0x2DECB4u) {
        ctx->pc = 0x2DECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECB0u;
        // 0x2decb4: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECB8u;
        goto label_2decb8;
    }
    ctx->pc = 0x2DECB0u;
    {
        const bool branch_taken_0x2decb0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2DECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECB0u;
        // 0x2decb4: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2decb0) {
            ctx->pc = 0x2DECCCu;
            goto label_2deccc;
        }
    }
    ctx->pc = 0x2DECB8u;
label_2decb8:
    // 0x2decb8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2decb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2decbc:
    // 0x2decbc: 0x0  nop
    ctx->pc = 0x2decbcu;
    // NOP
label_2decc0:
    // 0x2decc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2decc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2decc4:
    // 0x2decc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2decc8:
    if (ctx->pc == 0x2DECC8u) {
        ctx->pc = 0x2DECCCu;
        goto label_2deccc;
    }
    ctx->pc = 0x2DECC4u;
    {
        const bool branch_taken_0x2decc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2decc4) {
            ctx->pc = 0x2DECE4u;
            goto label_2dece4;
        }
    }
    ctx->pc = 0x2DECCCu;
label_2deccc:
    // 0x2deccc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2decccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_2decd0:
    // 0x2decd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2decd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2decd4:
    // 0x2decd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2decd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2decd8:
    // 0x2decd8: 0x0  nop
    ctx->pc = 0x2decd8u;
    // NOP
label_2decdc:
    // 0x2decdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2decdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dece0:
    // 0x2dece0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dece0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dece4:
    // 0x2dece4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2dece8:
    // 0x2dece8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dece8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2decec:
    // 0x2decec: 0xc10b1c6  jal         func_42C718
label_2decf0:
    if (ctx->pc == 0x2DECF0u) {
        ctx->pc = 0x2DECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECECu;
        // 0x2decf0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECF4u;
        goto label_2decf4;
    }
    ctx->pc = 0x2DECECu;
    SET_GPR_U32(ctx, 31, 0x2DECF4u);
    ctx->pc = 0x2DECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECECu;
    // 0x2decf0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2DECECu, 0x2DECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECF4u;
label_2decf4:
    // 0x2decf4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2decf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2decf8:
    // 0x2decf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2decf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2decfc:
    // 0x2decfc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2decfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ded00:
    // 0x2ded00: 0xc0cd4ee  jal         func_3353B8
label_2ded04:
    if (ctx->pc == 0x2DED04u) {
        ctx->pc = 0x2DED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED00u;
        // 0x2ded04: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED08u;
        goto label_2ded08;
    }
    ctx->pc = 0x2DED00u;
    SET_GPR_U32(ctx, 31, 0x2DED08u);
    ctx->pc = 0x2DED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED00u;
    // 0x2ded04: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2DED00u, 0x2DED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED08u;
label_2ded08:
    // 0x2ded08: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2ded08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2ded0c:
    // 0x2ded0c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2ded10:
    if (ctx->pc == 0x2DED10u) {
        ctx->pc = 0x2DED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED0Cu;
        // 0x2ded10: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED14u;
        goto label_2ded14;
    }
    ctx->pc = 0x2DED0Cu;
    {
        const bool branch_taken_0x2ded0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED0Cu;
        // 0x2ded10: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded0c) {
            ctx->pc = 0x2DEDC8u;
            goto label_2dedc8;
        }
    }
    ctx->pc = 0x2DED14u;
label_2ded14:
    // 0x2ded14: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2ded14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ded18:
    // 0x2ded18: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2ded18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2ded1c:
    // 0x2ded1c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2ded1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2ded20:
    // 0x2ded20: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2ded20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2ded24:
    // 0x2ded24: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2ded24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ded28:
    // 0x2ded28: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2ded28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2ded2c:
    // 0x2ded2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ded2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ded30:
    // 0x2ded30: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ded30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ded34:
    // 0x2ded34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ded34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ded38:
    // 0x2ded38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ded38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ded3c:
    // 0x2ded3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ded3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ded40:
    // 0x2ded40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ded40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ded44:
    // 0x2ded44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ded44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ded48:
    // 0x2ded48: 0xc0a757c  jal         func_29D5F0
label_2ded4c:
    if (ctx->pc == 0x2DED4Cu) {
        ctx->pc = 0x2DED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED48u;
        // 0x2ded4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED50u;
        goto label_2ded50;
    }
    ctx->pc = 0x2DED48u;
    SET_GPR_U32(ctx, 31, 0x2DED50u);
    ctx->pc = 0x2DED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED48u;
    // 0x2ded4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2DED48u, 0x2DED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED50u;
label_2ded50:
    // 0x2ded50: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ded50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2ded54:
    // 0x2ded54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ded54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ded58:
    // 0x2ded58: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ded58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ded5c:
    // 0x2ded5c: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_2ded60:
    if (ctx->pc == 0x2DED60u) {
        ctx->pc = 0x2DED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED5Cu;
        // 0x2ded60: 0x2475f2f0  addiu       $s5, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED64u;
        goto label_2ded64;
    }
    ctx->pc = 0x2DED5Cu;
    {
        const bool branch_taken_0x2ded5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED5Cu;
        // 0x2ded60: 0x2475f2f0  addiu       $s5, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded5c) {
            ctx->pc = 0x2DEDC0u;
            goto label_2dedc0;
        }
    }
    ctx->pc = 0x2DED64u;
label_2ded64:
    // 0x2ded64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ded64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ded68:
    // 0x2ded68: 0xc0e5452  jal         func_395148
label_2ded6c:
    if (ctx->pc == 0x2DED6Cu) {
        ctx->pc = 0x2DED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED68u;
        // 0x2ded6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED70u;
        goto label_2ded70;
    }
    ctx->pc = 0x2DED68u;
    SET_GPR_U32(ctx, 31, 0x2DED70u);
    ctx->pc = 0x2DED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED68u;
    // 0x2ded6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x2DED68u, 0x2DED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED70u;
label_2ded70:
    // 0x2ded70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ded70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ded74:
    // 0x2ded74: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_2ded78:
    if (ctx->pc == 0x2DED78u) {
        ctx->pc = 0x2DED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED74u;
        // 0x2ded78: 0x2602f2f0  addiu       $v0, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED7Cu;
        goto label_2ded7c;
    }
    ctx->pc = 0x2DED74u;
    {
        const bool branch_taken_0x2ded74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED74u;
        // 0x2ded78: 0x2602f2f0  addiu       $v0, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded74) {
            ctx->pc = 0x2DEDC4u;
            goto label_2dedc4;
        }
    }
    ctx->pc = 0x2DED7Cu;
label_2ded7c:
    // 0x2ded7c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ded7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ded80:
    // 0x2ded80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ded80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ded84:
    // 0x2ded84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ded84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ded88:
    // 0x2ded88: 0x40f809  jalr        $v0
label_2ded8c:
    if (ctx->pc == 0x2DED8Cu) {
        ctx->pc = 0x2DED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED88u;
        // 0x2ded8c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED90u;
        goto label_2ded90;
    }
    ctx->pc = 0x2DED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DED90u);
        ctx->pc = 0x2DED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED88u;
        // 0x2ded8c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DED88u, 0x2DED90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DED90u;
label_2ded90:
    // 0x2ded90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ded94:
    // 0x2ded94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ded94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ded98:
    // 0x2ded98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ded98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ded9c:
    // 0x2ded9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ded9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2deda0:
    // 0x2deda0: 0x40f809  jalr        $v0
label_2deda4:
    if (ctx->pc == 0x2DEDA4u) {
        ctx->pc = 0x2DEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDA0u;
        // 0x2deda4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDA8u;
        goto label_2deda8;
    }
    ctx->pc = 0x2DEDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DEDA8u);
        ctx->pc = 0x2DEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDA0u;
        // 0x2deda4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEDA0u, 0x2DEDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEDA8u;
label_2deda8:
    // 0x2deda8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2deda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dedac:
    // 0x2dedac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dedacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dedb0:
    // 0x2dedb0: 0xc0b71c2  jal         func_2DC708
label_2dedb4:
    if (ctx->pc == 0x2DEDB4u) {
        ctx->pc = 0x2DEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDB0u;
        // 0x2dedb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDB8u;
        goto label_2dedb8;
    }
    ctx->pc = 0x2DEDB0u;
    SET_GPR_U32(ctx, 31, 0x2DEDB8u);
    ctx->pc = 0x2DEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDB0u;
    // 0x2dedb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2DEDB0u, 0x2DEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDB8u;
label_2dedb8:
    // 0x2dedb8: 0x100000ed  b           . + 4 + (0xED << 2)
label_2dedbc:
    if (ctx->pc == 0x2DEDBCu) {
        ctx->pc = 0x2DEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDB8u;
        // 0x2dedbc: 0xafb50020  sw          $s5, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDC0u;
        goto label_2dedc0;
    }
    ctx->pc = 0x2DEDB8u;
    {
        const bool branch_taken_0x2dedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDB8u;
        // 0x2dedbc: 0xafb50020  sw          $s5, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dedb8) {
            ctx->pc = 0x2DF170u;
            goto label_2df170;
        }
    }
    ctx->pc = 0x2DEDC0u;
label_2dedc0:
    // 0x2dedc0: 0x2602f2f0  addiu       $v0, $s0, -0xD10
    ctx->pc = 0x2dedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
label_2dedc4:
    // 0x2dedc4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2dedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2dedc8:
    // 0x2dedc8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2dedc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2dedcc:
    // 0x2dedcc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2dedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dedd0:
    // 0x2dedd0: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2dedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2dedd4:
    // 0x2dedd4: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x2dedd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2dedd8:
    // 0x2dedd8: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2dedd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2deddc:
    // 0x2deddc: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_2dede0:
    if (ctx->pc == 0x2DEDE0u) {
        ctx->pc = 0x2DEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDDCu;
        // 0x2dede0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDE4u;
        goto label_2dede4;
    }
    ctx->pc = 0x2DEDDCu;
    {
        const bool branch_taken_0x2deddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDDCu;
        // 0x2dede0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deddc) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DEDE4u;
label_2dede4:
    // 0x2dede4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2dede4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2dede8:
    // 0x2dede8: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x2dede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2dedec:
    // 0x2dedec: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2dedecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2dedf0:
    // 0x2dedf0: 0xc0cd4fc  jal         func_3353F0
label_2dedf4:
    if (ctx->pc == 0x2DEDF4u) {
        ctx->pc = 0x2DEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDF0u;
        // 0x2dedf4: 0x24060fa0  addiu       $a2, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDF8u;
        goto label_2dedf8;
    }
    ctx->pc = 0x2DEDF0u;
    SET_GPR_U32(ctx, 31, 0x2DEDF8u);
    ctx->pc = 0x2DEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDF0u;
    // 0x2dedf4: 0x24060fa0  addiu       $a2, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DEDF0u, 0x2DEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDF8u;
label_2dedf8:
    // 0x2dedf8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2dedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2dedfc:
    // 0x2dedfc: 0x26e34b00  addiu       $v1, $s7, 0x4B00
    ctx->pc = 0x2dedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2dee00:
    // 0x2dee00: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2dee00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2dee04:
    // 0x2dee04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2dee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2dee08:
    // 0x2dee08: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x2dee08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2dee0c:
    // 0x2dee0c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2dee10:
    // 0x2dee10: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2dee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2dee14:
    // 0x2dee14: 0xc0cd8ec  jal         func_3363B0
label_2dee18:
    if (ctx->pc == 0x2DEE18u) {
        ctx->pc = 0x2DEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE14u;
        // 0x2dee18: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE1Cu;
        goto label_2dee1c;
    }
    ctx->pc = 0x2DEE14u;
    SET_GPR_U32(ctx, 31, 0x2DEE1Cu);
    ctx->pc = 0x2DEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE14u;
    // 0x2dee18: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2DEE14u, 0x2DEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE1Cu;
label_2dee1c:
    // 0x2dee1c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2dee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2dee20:
    // 0x2dee20: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2dee20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2dee24:
    // 0x2dee24: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_2dee28:
    if (ctx->pc == 0x2DEE28u) {
        ctx->pc = 0x2DEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE24u;
        // 0x2dee28: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE2Cu;
        goto label_2dee2c;
    }
    ctx->pc = 0x2DEE24u;
    {
        const bool branch_taken_0x2dee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE24u;
        // 0x2dee28: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee24) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DEE2Cu;
label_2dee2c:
    // 0x2dee2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dee30:
    // 0x2dee30: 0x24426bb0  addiu       $v0, $v0, 0x6BB0
    ctx->pc = 0x2dee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27568));
label_2dee34:
    // 0x2dee34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dee38:
    // 0x2dee38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dee3c:
    // 0x2dee3c: 0x800008  jr          $a0
label_2dee40:
    if (ctx->pc == 0x2DEE40u) {
        ctx->pc = 0x2DEE44u;
        goto label_2dee44;
    }
    ctx->pc = 0x2DEE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DEE44u: goto label_2dee44;
            case 0x2DEE80u: goto label_2dee80;
            case 0x2DEEE4u: goto label_2deee4;
            case 0x2DF040u: goto label_2df040;
            case 0x2DF0A8u: goto label_2df0a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEE3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DEE44u;
label_2dee44:
    // 0x2dee44: 0xc0a367c  jal         func_28D9F0
label_2dee48:
    if (ctx->pc == 0x2DEE48u) {
        ctx->pc = 0x2DEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE44u;
        // 0x2dee48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE4Cu;
        goto label_2dee4c;
    }
    ctx->pc = 0x2DEE44u;
    SET_GPR_U32(ctx, 31, 0x2DEE4Cu);
    ctx->pc = 0x2DEE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE44u;
    // 0x2dee48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DEE44u, 0x2DEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE4Cu;
label_2dee4c:
    // 0x2dee4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dee4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dee50:
    // 0x2dee50: 0x12400095  beqz        $s2, . + 4 + (0x95 << 2)
label_2dee54:
    if (ctx->pc == 0x2DEE54u) {
        ctx->pc = 0x2DEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE50u;
        // 0x2dee54: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE58u;
        goto label_2dee58;
    }
    ctx->pc = 0x2DEE50u;
    {
        const bool branch_taken_0x2dee50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE50u;
        // 0x2dee54: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee50) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DEE58u;
label_2dee58:
    // 0x2dee58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dee5c:
    // 0x2dee5c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2dee5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dee60:
    // 0x2dee60: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2dee60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dee64:
    // 0x2dee64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dee64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dee68:
    // 0x2dee68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2dee68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2dee6c:
    // 0x2dee6c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dee6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dee70:
    // 0x2dee70: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dee70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2dee74:
    // 0x2dee74: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2dee74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2dee78:
    // 0x2dee78: 0x1000000f  b           . + 4 + (0xF << 2)
label_2dee7c:
    if (ctx->pc == 0x2DEE7Cu) {
        ctx->pc = 0x2DEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE78u;
        // 0x2dee7c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE80u;
        goto label_2dee80;
    }
    ctx->pc = 0x2DEE78u;
    {
        const bool branch_taken_0x2dee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE78u;
        // 0x2dee7c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee78) {
            ctx->pc = 0x2DEEB8u;
            goto label_2deeb8;
        }
    }
    ctx->pc = 0x2DEE80u;
label_2dee80:
    // 0x2dee80: 0xc0a367c  jal         func_28D9F0
label_2dee84:
    if (ctx->pc == 0x2DEE84u) {
        ctx->pc = 0x2DEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE80u;
        // 0x2dee84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE88u;
        goto label_2dee88;
    }
    ctx->pc = 0x2DEE80u;
    SET_GPR_U32(ctx, 31, 0x2DEE88u);
    ctx->pc = 0x2DEE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE80u;
    // 0x2dee84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DEE80u, 0x2DEE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE88u;
label_2dee88:
    // 0x2dee88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dee88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dee8c:
    // 0x2dee8c: 0x12400086  beqz        $s2, . + 4 + (0x86 << 2)
label_2dee90:
    if (ctx->pc == 0x2DEE90u) {
        ctx->pc = 0x2DEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE8Cu;
        // 0x2dee90: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE94u;
        goto label_2dee94;
    }
    ctx->pc = 0x2DEE8Cu;
    {
        const bool branch_taken_0x2dee8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE8Cu;
        // 0x2dee90: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee8c) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DEE94u;
label_2dee94:
    // 0x2dee94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dee98:
    // 0x2dee98: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2dee98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dee9c:
    // 0x2dee9c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2dee9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2deea0:
    // 0x2deea0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2deea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2deea4:
    // 0x2deea4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2deea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2deea8:
    // 0x2deea8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2deea8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2deeac:
    // 0x2deeac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2deeacu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2deeb0:
    // 0x2deeb0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2deeb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2deeb4:
    // 0x2deeb4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2deeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2deeb8:
    // 0x2deeb8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2deeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2deebc:
    // 0x2deebc: 0xc0884f6  jal         func_2213D8
label_2deec0:
    if (ctx->pc == 0x2DEEC0u) {
        ctx->pc = 0x2DEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEBCu;
        // 0x2deec0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEC4u;
        goto label_2deec4;
    }
    ctx->pc = 0x2DEEBCu;
    SET_GPR_U32(ctx, 31, 0x2DEEC4u);
    ctx->pc = 0x2DEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEBCu;
    // 0x2deec0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DEEBCu, 0x2DEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEC4u;
label_2deec4:
    // 0x2deec4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2deec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deec8:
    // 0x2deec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2deec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2deecc:
    // 0x2deecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2deeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2deed0:
    // 0x2deed0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2deed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2deed4:
    // 0x2deed4: 0xc0bf800  jal         func_2FE000
label_2deed8:
    if (ctx->pc == 0x2DEED8u) {
        ctx->pc = 0x2DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEED4u;
        // 0x2deed8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEDCu;
        goto label_2deedc;
    }
    ctx->pc = 0x2DEED4u;
    SET_GPR_U32(ctx, 31, 0x2DEEDCu);
    ctx->pc = 0x2DEED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEED4u;
    // 0x2deed8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DEED4u, 0x2DEEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEDCu;
label_2deedc:
    // 0x2deedc: 0x10000073  b           . + 4 + (0x73 << 2)
label_2deee0:
    if (ctx->pc == 0x2DEEE0u) {
        ctx->pc = 0x2DEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEDCu;
        // 0x2deee0: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEE4u;
        goto label_2deee4;
    }
    ctx->pc = 0x2DEEDCu;
    {
        const bool branch_taken_0x2deedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEDCu;
        // 0x2deee0: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deedc) {
            ctx->pc = 0x2DF0ACu;
            goto label_2df0ac;
        }
    }
    ctx->pc = 0x2DEEE4u;
label_2deee4:
    // 0x2deee4: 0x26900090  addiu       $s0, $s4, 0x90
    ctx->pc = 0x2deee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2deee8:
    // 0x2deee8: 0x26f24b00  addiu       $s2, $s7, 0x4B00
    ctx->pc = 0x2deee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2deeec:
    // 0x2deeec: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2deeecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2deef0:
    // 0x2deef0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2deef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2deef4:
    // 0x2deef4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2deef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2deef8:
    // 0x2deef8: 0xc0cd7d2  jal         func_335F48
label_2deefc:
    if (ctx->pc == 0x2DEEFCu) {
        ctx->pc = 0x2DEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEF8u;
        // 0x2deefc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF00u;
        goto label_2def00;
    }
    ctx->pc = 0x2DEEF8u;
    SET_GPR_U32(ctx, 31, 0x2DEF00u);
    ctx->pc = 0x2DEEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEF8u;
    // 0x2deefc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DEEF8u, 0x2DEF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF00u;
label_2def00:
    // 0x2def00: 0xc0cd742  jal         func_335D08
label_2def04:
    if (ctx->pc == 0x2DEF04u) {
        ctx->pc = 0x2DEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF00u;
        // 0x2def04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF08u;
        goto label_2def08;
    }
    ctx->pc = 0x2DEF00u;
    SET_GPR_U32(ctx, 31, 0x2DEF08u);
    ctx->pc = 0x2DEF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF00u;
    // 0x2def04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2DEF00u, 0x2DEF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF08u;
label_2def08:
    // 0x2def08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2def08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2def0c:
    // 0x2def0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2def0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2def10:
    // 0x2def10: 0xc0cd780  jal         func_335E00
label_2def14:
    if (ctx->pc == 0x2DEF14u) {
        ctx->pc = 0x2DEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF10u;
        // 0x2def14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF18u;
        goto label_2def18;
    }
    ctx->pc = 0x2DEF10u;
    SET_GPR_U32(ctx, 31, 0x2DEF18u);
    ctx->pc = 0x2DEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF10u;
    // 0x2def14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2DEF10u, 0x2DEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF18u;
label_2def18:
    // 0x2def18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2def18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2def1c:
    // 0x2def1c: 0xc0cdd2e  jal         func_3374B8
label_2def20:
    if (ctx->pc == 0x2DEF20u) {
        ctx->pc = 0x2DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF1Cu;
        // 0x2def20: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF24u;
        goto label_2def24;
    }
    ctx->pc = 0x2DEF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF24u);
    ctx->pc = 0x2DEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF1Cu;
    // 0x2def20: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DEF1Cu, 0x2DEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF24u;
label_2def24:
    // 0x2def24: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2def24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2def28:
    // 0x2def28: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2def28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2def2c:
    // 0x2def2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2def2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2def30:
    // 0x2def30: 0x0  nop
    ctx->pc = 0x2def30u;
    // NOP
label_2def34:
    // 0x2def34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2def34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2def38:
    // 0x2def38: 0x0  nop
    ctx->pc = 0x2def38u;
    // NOP
label_2def3c:
    // 0x2def3c: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_2def40:
    if (ctx->pc == 0x2DEF40u) {
        ctx->pc = 0x2DEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF3Cu;
        // 0x2def40: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF44u;
        goto label_2def44;
    }
    ctx->pc = 0x2DEF3Cu;
    {
        const bool branch_taken_0x2def3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF3Cu;
        // 0x2def40: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def3c) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DEF44u;
label_2def44:
    // 0x2def44: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2def44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2def48:
    // 0x2def48: 0x8e6301a8  lw          $v1, 0x1A8($s3)
    ctx->pc = 0x2def48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2def4c:
    // 0x2def4c: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_2def50:
    if (ctx->pc == 0x2DEF50u) {
        ctx->pc = 0x2DEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF4Cu;
        // 0x2def50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF54u;
        goto label_2def54;
    }
    ctx->pc = 0x2DEF4Cu;
    {
        const bool branch_taken_0x2def4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2def4c) {
            ctx->pc = 0x2DEF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEF4Cu;
            // 0x2def50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEFFCu;
            goto label_2deffc;
        }
    }
    ctx->pc = 0x2DEF54u;
label_2def54:
    // 0x2def54: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2def54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2def58:
    // 0x2def58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2def58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2def5c:
    // 0x2def5c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2def5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2def60:
    // 0x2def60: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2def60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2def64:
    // 0x2def64: 0xc0cd8ec  jal         func_3363B0
label_2def68:
    if (ctx->pc == 0x2DEF68u) {
        ctx->pc = 0x2DEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF64u;
        // 0x2def68: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF6Cu;
        goto label_2def6c;
    }
    ctx->pc = 0x2DEF64u;
    SET_GPR_U32(ctx, 31, 0x2DEF6Cu);
    ctx->pc = 0x2DEF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF64u;
    // 0x2def68: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2DEF64u, 0x2DEF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF6Cu;
label_2def6c:
    // 0x2def6c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2def6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2def70:
    // 0x2def70: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2def70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2def74:
    // 0x2def74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2def74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2def78:
    // 0x2def78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2def78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2def7c:
    // 0x2def7c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2def7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2def80:
    // 0x2def80: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2def80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2def84:
    // 0x2def84: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2def84u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2def88:
    // 0x2def88: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x2def88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
label_2def8c:
    // 0x2def8c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2def8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_2def90:
    // 0x2def90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2def90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2def94:
    // 0x2def94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2def94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2def98:
    // 0x2def98: 0x0  nop
    ctx->pc = 0x2def98u;
    // NOP
label_2def9c:
    // 0x2def9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2def9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2defa0:
    // 0x2defa0: 0x0  nop
    ctx->pc = 0x2defa0u;
    // NOP
label_2defa4:
    // 0x2defa4: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_2defa8:
    if (ctx->pc == 0x2DEFA8u) {
        ctx->pc = 0x2DEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA4u;
        // 0x2defa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFACu;
        goto label_2defac;
    }
    ctx->pc = 0x2DEFA4u;
    {
        const bool branch_taken_0x2defa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2defa4) {
            ctx->pc = 0x2DEFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEFA4u;
            // 0x2defa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEFFCu;
            goto label_2deffc;
        }
    }
    ctx->pc = 0x2DEFACu;
label_2defac:
    // 0x2defac: 0xc66001ac  lwc1        $f0, 0x1AC($s3)
    ctx->pc = 0x2defacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2defb0:
    // 0x2defb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2defb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2defb4:
    // 0x2defb4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2defb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2defb8:
    // 0x2defb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2defb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2defbc:
    // 0x2defbc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2defbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2defc0:
    // 0x2defc0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2defc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2defc4:
    // 0x2defc4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2defc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2defc8:
    // 0x2defc8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2defc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2defcc:
    // 0x2defcc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2defccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2defd0:
    // 0x2defd0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2defd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2defd4:
    // 0x2defd4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2defd4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2defd8:
    // 0x2defd8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2defd8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2defdc:
    // 0x2defdc: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2defdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2defe0:
    // 0x2defe0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2defe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2defe4:
    // 0x2defe4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2defe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2defe8:
    // 0x2defe8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2defe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2defec:
    // 0x2defec: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2defecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2deff0:
    // 0x2deff0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2deff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2deff4:
    // 0x2deff4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2deff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2deff8:
    // 0x2deff8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2deff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2deffc:
    // 0x2deffc: 0xc0a337e  jal         func_28CDF8
label_2df000:
    if (ctx->pc == 0x2DF000u) {
        ctx->pc = 0x2DF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFFCu;
        // 0x2df000: 0x2405fff8  addiu       $a1, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF004u;
        goto label_2df004;
    }
    ctx->pc = 0x2DEFFCu;
    SET_GPR_U32(ctx, 31, 0x2DF004u);
    ctx->pc = 0x2DF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEFFCu;
    // 0x2df000: 0x2405fff8  addiu       $a1, $zero, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2DEFFCu, 0x2DF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF004u;
label_2df004:
    // 0x2df004: 0xc0a367c  jal         func_28D9F0
label_2df008:
    if (ctx->pc == 0x2DF008u) {
        ctx->pc = 0x2DF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF004u;
        // 0x2df008: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF00Cu;
        goto label_2df00c;
    }
    ctx->pc = 0x2DF004u;
    SET_GPR_U32(ctx, 31, 0x2DF00Cu);
    ctx->pc = 0x2DF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF004u;
    // 0x2df008: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DF004u, 0x2DF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF00Cu;
label_2df00c:
    // 0x2df00c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2df00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df010:
    // 0x2df010: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
label_2df014:
    if (ctx->pc == 0x2DF014u) {
        ctx->pc = 0x2DF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF010u;
        // 0x2df014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF018u;
        goto label_2df018;
    }
    ctx->pc = 0x2DF010u;
    {
        const bool branch_taken_0x2df010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF010u;
        // 0x2df014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df010) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DF018u;
label_2df018:
    // 0x2df018: 0xc0884f6  jal         func_2213D8
label_2df01c:
    if (ctx->pc == 0x2DF01Cu) {
        ctx->pc = 0x2DF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF018u;
        // 0x2df01c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF020u;
        goto label_2df020;
    }
    ctx->pc = 0x2DF018u;
    SET_GPR_U32(ctx, 31, 0x2DF020u);
    ctx->pc = 0x2DF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF018u;
    // 0x2df01c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DF018u, 0x2DF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF020u;
label_2df020:
    // 0x2df020: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df024:
    // 0x2df024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df028:
    // 0x2df028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2df028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df02c:
    // 0x2df02c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2df02cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2df030:
    // 0x2df030: 0xc0bf800  jal         func_2FE000
label_2df034:
    if (ctx->pc == 0x2DF034u) {
        ctx->pc = 0x2DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF030u;
        // 0x2df034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF038u;
        goto label_2df038;
    }
    ctx->pc = 0x2DF030u;
    SET_GPR_U32(ctx, 31, 0x2DF038u);
    ctx->pc = 0x2DF034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF030u;
    // 0x2df034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DF030u, 0x2DF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF038u;
label_2df038:
    // 0x2df038: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2df03c:
    if (ctx->pc == 0x2DF03Cu) {
        ctx->pc = 0x2DF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF038u;
        // 0x2df03c: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF040u;
        goto label_2df040;
    }
    ctx->pc = 0x2DF038u;
    {
        const bool branch_taken_0x2df038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF038u;
        // 0x2df03c: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df038) {
            ctx->pc = 0x2DF0ACu;
            goto label_2df0ac;
        }
    }
    ctx->pc = 0x2DF040u;
label_2df040:
    // 0x2df040: 0xc087502  jal         func_21D408
label_2df044:
    if (ctx->pc == 0x2DF044u) {
        ctx->pc = 0x2DF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF040u;
        // 0x2df044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF048u;
        goto label_2df048;
    }
    ctx->pc = 0x2DF040u;
    SET_GPR_U32(ctx, 31, 0x2DF048u);
    ctx->pc = 0x2DF044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF040u;
    // 0x2df044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DF040u, 0x2DF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF048u;
label_2df048:
    // 0x2df048: 0xc0e409a  jal         func_390268
label_2df04c:
    if (ctx->pc == 0x2DF04Cu) {
        ctx->pc = 0x2DF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF048u;
        // 0x2df04c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF050u;
        goto label_2df050;
    }
    ctx->pc = 0x2DF048u;
    SET_GPR_U32(ctx, 31, 0x2DF050u);
    ctx->pc = 0x2DF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF048u;
    // 0x2df04c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DF048u, 0x2DF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF050u;
label_2df050:
    // 0x2df050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df054:
    // 0x2df054: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2df058:
    if (ctx->pc == 0x2DF058u) {
        ctx->pc = 0x2DF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF054u;
        // 0x2df058: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF05Cu;
        goto label_2df05c;
    }
    ctx->pc = 0x2DF054u;
    {
        const bool branch_taken_0x2df054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF054u;
        // 0x2df058: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df054) {
            ctx->pc = 0x2DF0ACu;
            goto label_2df0ac;
        }
    }
    ctx->pc = 0x2DF05Cu;
label_2df05c:
    // 0x2df05c: 0xc0a367c  jal         func_28D9F0
label_2df060:
    if (ctx->pc == 0x2DF060u) {
        ctx->pc = 0x2DF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF05Cu;
        // 0x2df060: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF064u;
        goto label_2df064;
    }
    ctx->pc = 0x2DF05Cu;
    SET_GPR_U32(ctx, 31, 0x2DF064u);
    ctx->pc = 0x2DF060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF05Cu;
    // 0x2df060: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DF05Cu, 0x2DF064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF064u;
label_2df064:
    // 0x2df064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2df064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df068:
    // 0x2df068: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_2df06c:
    if (ctx->pc == 0x2DF06Cu) {
        ctx->pc = 0x2DF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF068u;
        // 0x2df06c: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF070u;
        goto label_2df070;
    }
    ctx->pc = 0x2DF068u;
    {
        const bool branch_taken_0x2df068 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF068u;
        // 0x2df06c: 0x8ea3b734  lw          $v1, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df068) {
            ctx->pc = 0x2DF0ACu;
            goto label_2df0ac;
        }
    }
    ctx->pc = 0x2DF070u;
label_2df070:
    // 0x2df070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2df070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2df074:
    // 0x2df074: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2df074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2df078:
    // 0x2df078: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2df078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2df07c:
    // 0x2df07c: 0x40f809  jalr        $v0
label_2df080:
    if (ctx->pc == 0x2DF080u) {
        ctx->pc = 0x2DF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF07Cu;
        // 0x2df080: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF084u;
        goto label_2df084;
    }
    ctx->pc = 0x2DF07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF084u);
        ctx->pc = 0x2DF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF07Cu;
        // 0x2df080: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF07Cu, 0x2DF084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF084u;
label_2df084:
    // 0x2df084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df088:
    // 0x2df088: 0xc0884f6  jal         func_2213D8
label_2df08c:
    if (ctx->pc == 0x2DF08Cu) {
        ctx->pc = 0x2DF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF088u;
        // 0x2df08c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF090u;
        goto label_2df090;
    }
    ctx->pc = 0x2DF088u;
    SET_GPR_U32(ctx, 31, 0x2DF090u);
    ctx->pc = 0x2DF08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF088u;
    // 0x2df08c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DF088u, 0x2DF090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF090u;
label_2df090:
    // 0x2df090: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df094:
    // 0x2df094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df098:
    // 0x2df098: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2df098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df09c:
    // 0x2df09c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2df09cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2df0a0:
    // 0x2df0a0: 0xc0bf858  jal         func_2FE160
label_2df0a4:
    if (ctx->pc == 0x2DF0A4u) {
        ctx->pc = 0x2DF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0A0u;
        // 0x2df0a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0A8u;
        goto label_2df0a8;
    }
    ctx->pc = 0x2DF0A0u;
    SET_GPR_U32(ctx, 31, 0x2DF0A8u);
    ctx->pc = 0x2DF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0A0u;
    // 0x2df0a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE160u, 0x2DF0A0u, 0x2DF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0A8u;
label_2df0a8:
    // 0x2df0a8: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x2df0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2df0ac:
    // 0x2df0ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2df0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2df0b0:
    // 0x2df0b0: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2df0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2df0b4:
    // 0x2df0b4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2df0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2df0b8:
    // 0x2df0b8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2df0bc:
    if (ctx->pc == 0x2DF0BCu) {
        ctx->pc = 0x2DF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0B8u;
        // 0x2df0bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0C0u;
        goto label_2df0c0;
    }
    ctx->pc = 0x2DF0B8u;
    {
        const bool branch_taken_0x2df0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0B8u;
        // 0x2df0bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0b8) {
            ctx->pc = 0x2DF170u;
            goto label_2df170;
        }
    }
    ctx->pc = 0x2DF0C0u;
label_2df0c0:
    // 0x2df0c0: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x2df0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2df0c4:
    // 0x2df0c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2df0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df0c8:
    // 0x2df0c8: 0x24061770  addiu       $a2, $zero, 0x1770
    ctx->pc = 0x2df0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2df0cc:
    // 0x2df0cc: 0xc0cd4fc  jal         func_3353F0
label_2df0d0:
    if (ctx->pc == 0x2DF0D0u) {
        ctx->pc = 0x2DF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0CCu;
        // 0x2df0d0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0D4u;
        goto label_2df0d4;
    }
    ctx->pc = 0x2DF0CCu;
    SET_GPR_U32(ctx, 31, 0x2DF0D4u);
    ctx->pc = 0x2DF0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0CCu;
    // 0x2df0d0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DF0CCu, 0x2DF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0D4u;
label_2df0d4:
    // 0x2df0d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2df0d8:
    // 0x2df0d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2df0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df0dc:
    // 0x2df0dc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2df0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2df0e0:
    // 0x2df0e0: 0x906202d5  lbu         $v0, 0x2D5($v1)
    ctx->pc = 0x2df0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 725)));
label_2df0e4:
    // 0x2df0e4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2df0e8:
    if (ctx->pc == 0x2DF0E8u) {
        ctx->pc = 0x2DF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0E4u;
        // 0x2df0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0ECu;
        goto label_2df0ec;
    }
    ctx->pc = 0x2DF0E4u;
    {
        const bool branch_taken_0x2df0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0E4u;
        // 0x2df0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0e4) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DF0ECu;
label_2df0ec:
    // 0x2df0ec: 0xc087502  jal         func_21D408
label_2df0f0:
    if (ctx->pc == 0x2DF0F0u) {
        ctx->pc = 0x2DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0ECu;
        // 0x2df0f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0F4u;
        goto label_2df0f4;
    }
    ctx->pc = 0x2DF0ECu;
    SET_GPR_U32(ctx, 31, 0x2DF0F4u);
    ctx->pc = 0x2DF0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0ECu;
    // 0x2df0f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DF0ECu, 0x2DF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0F4u;
label_2df0f4:
    // 0x2df0f4: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2df0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_2df0f8:
    // 0x2df0f8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_2df0fc:
    if (ctx->pc == 0x2DF0FCu) {
        ctx->pc = 0x2DF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0F8u;
        // 0x2df0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF100u;
        goto label_2df100;
    }
    ctx->pc = 0x2DF0F8u;
    {
        const bool branch_taken_0x2df0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0F8u;
        // 0x2df0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0f8) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DF100u;
label_2df100:
    // 0x2df100: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2df100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df104:
    // 0x2df104: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2df104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2df108:
    // 0x2df108: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2df108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2df10c:
    // 0x2df10c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2df110:
    if (ctx->pc == 0x2DF110u) {
        ctx->pc = 0x2DF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF10Cu;
        // 0x2df110: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF114u;
        goto label_2df114;
    }
    ctx->pc = 0x2DF10Cu;
    {
        const bool branch_taken_0x2df10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF10Cu;
        // 0x2df110: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df10c) {
            ctx->pc = 0x2DF128u;
            goto label_2df128;
        }
    }
    ctx->pc = 0x2DF114u;
label_2df114:
    // 0x2df114: 0xc088e88  jal         func_223A20
label_2df118:
    if (ctx->pc == 0x2DF118u) {
        ctx->pc = 0x2DF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF114u;
        // 0x2df118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF11Cu;
        goto label_2df11c;
    }
    ctx->pc = 0x2DF114u;
    SET_GPR_U32(ctx, 31, 0x2DF11Cu);
    ctx->pc = 0x2DF118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF114u;
    // 0x2df118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2DF114u, 0x2DF11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF11Cu;
label_2df11c:
    // 0x2df11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df120:
    // 0x2df120: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2df124:
    if (ctx->pc == 0x2DF124u) {
        ctx->pc = 0x2DF128u;
        goto label_2df128;
    }
    ctx->pc = 0x2DF120u;
    {
        const bool branch_taken_0x2df120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2df120) {
            ctx->pc = 0x2DF12Cu;
            goto label_2df12c;
        }
    }
    ctx->pc = 0x2DF128u;
label_2df128:
    // 0x2df128: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2df128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df12c:
    // 0x2df12c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2df130:
    if (ctx->pc == 0x2DF130u) {
        ctx->pc = 0x2DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF12Cu;
        // 0x2df130: 0x2644b880  addiu       $a0, $s2, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF134u;
        goto label_2df134;
    }
    ctx->pc = 0x2DF12Cu;
    {
        const bool branch_taken_0x2df12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF12Cu;
        // 0x2df130: 0x2644b880  addiu       $a0, $s2, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df12c) {
            ctx->pc = 0x2DF170u;
            goto label_2df170;
        }
    }
    ctx->pc = 0x2DF134u;
label_2df134:
    // 0x2df134: 0xc0cd4ee  jal         func_3353B8
label_2df138:
    if (ctx->pc == 0x2DF138u) {
        ctx->pc = 0x2DF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF134u;
        // 0x2df138: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF13Cu;
        goto label_2df13c;
    }
    ctx->pc = 0x2DF134u;
    SET_GPR_U32(ctx, 31, 0x2DF13Cu);
    ctx->pc = 0x2DF138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF134u;
    // 0x2df138: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2DF134u, 0x2DF13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF13Cu;
label_2df13c:
    // 0x2df13c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2df13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2df140:
    // 0x2df140: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2df144:
    if (ctx->pc == 0x2DF144u) {
        ctx->pc = 0x2DF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF140u;
        // 0x2df144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF148u;
        goto label_2df148;
    }
    ctx->pc = 0x2DF140u;
    {
        const bool branch_taken_0x2df140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF140u;
        // 0x2df144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df140) {
            ctx->pc = 0x2DF174u;
            goto label_2df174;
        }
    }
    ctx->pc = 0x2DF148u;
label_2df148:
    // 0x2df148: 0xc0a367c  jal         func_28D9F0
label_2df14c:
    if (ctx->pc == 0x2DF14Cu) {
        ctx->pc = 0x2DF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF148u;
        // 0x2df14c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF150u;
        goto label_2df150;
    }
    ctx->pc = 0x2DF148u;
    SET_GPR_U32(ctx, 31, 0x2DF150u);
    ctx->pc = 0x2DF14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF148u;
    // 0x2df14c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DF148u, 0x2DF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF150u;
label_2df150:
    // 0x2df150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2df154:
    if (ctx->pc == 0x2DF154u) {
        ctx->pc = 0x2DF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF150u;
        // 0x2df154: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF158u;
        goto label_2df158;
    }
    ctx->pc = 0x2DF150u;
    {
        const bool branch_taken_0x2df150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF150u;
        // 0x2df154: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df150) {
            ctx->pc = 0x2DF170u;
            goto label_2df170;
        }
    }
    ctx->pc = 0x2DF158u;
label_2df158:
    // 0x2df158: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df15c:
    // 0x2df15c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df160:
    // 0x2df160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df164:
    // 0x2df164: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2df164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df168:
    // 0x2df168: 0xc0be7d2  jal         func_2F9F48
label_2df16c:
    if (ctx->pc == 0x2DF16Cu) {
        ctx->pc = 0x2DF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF168u;
        // 0x2df16c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF170u;
        goto label_2df170;
    }
    ctx->pc = 0x2DF168u;
    SET_GPR_U32(ctx, 31, 0x2DF170u);
    ctx->pc = 0x2DF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF168u;
    // 0x2df16c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2DF168u, 0x2DF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF170u;
label_2df170:
    // 0x2df170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df174:
    // 0x2df174: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2df174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2df178:
    // 0x2df178: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2df178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2df17c:
    // 0x2df17c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2df17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2df180:
    // 0x2df180: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2df180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2df184:
    // 0x2df184: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2df184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2df188:
    // 0x2df188: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2df188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2df18c:
    // 0x2df18c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2df18cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2df190:
    // 0x2df190: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2df190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2df194:
    // 0x2df194: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2df194u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2df198:
    // 0x2df198: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2df198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2df19c:
    // 0x2df19c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2df19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2df1a0:
    // 0x2df1a0: 0x3e00008  jr          $ra
label_2df1a4:
    if (ctx->pc == 0x2DF1A4u) {
        ctx->pc = 0x2DF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1A0u;
        // 0x2df1a4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1A8u;
        goto label_fallthrough_0x2df1a0;
    }
    ctx->pc = 0x2DF1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1A0u;
        // 0x2df1a4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2df1a0:
    ctx->pc = 0x2DF1A8u;
}
