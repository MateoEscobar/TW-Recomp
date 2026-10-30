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

// Function: sub_002EE7B0
// Address: 0x2ee7b0 - 0x2eee50
void sub_002EE7B0_0x2ee7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE7B0_0x2ee7b0");
#endif

    switch (ctx->pc) {
        case 0x2ee7b0u: goto label_2ee7b0;
        case 0x2ee7b4u: goto label_2ee7b4;
        case 0x2ee7b8u: goto label_2ee7b8;
        case 0x2ee7bcu: goto label_2ee7bc;
        case 0x2ee7c0u: goto label_2ee7c0;
        case 0x2ee7c4u: goto label_2ee7c4;
        case 0x2ee7c8u: goto label_2ee7c8;
        case 0x2ee7ccu: goto label_2ee7cc;
        case 0x2ee7d0u: goto label_2ee7d0;
        case 0x2ee7d4u: goto label_2ee7d4;
        case 0x2ee7d8u: goto label_2ee7d8;
        case 0x2ee7dcu: goto label_2ee7dc;
        case 0x2ee7e0u: goto label_2ee7e0;
        case 0x2ee7e4u: goto label_2ee7e4;
        case 0x2ee7e8u: goto label_2ee7e8;
        case 0x2ee7ecu: goto label_2ee7ec;
        case 0x2ee7f0u: goto label_2ee7f0;
        case 0x2ee7f4u: goto label_2ee7f4;
        case 0x2ee7f8u: goto label_2ee7f8;
        case 0x2ee7fcu: goto label_2ee7fc;
        case 0x2ee800u: goto label_2ee800;
        case 0x2ee804u: goto label_2ee804;
        case 0x2ee808u: goto label_2ee808;
        case 0x2ee80cu: goto label_2ee80c;
        case 0x2ee810u: goto label_2ee810;
        case 0x2ee814u: goto label_2ee814;
        case 0x2ee818u: goto label_2ee818;
        case 0x2ee81cu: goto label_2ee81c;
        case 0x2ee820u: goto label_2ee820;
        case 0x2ee824u: goto label_2ee824;
        case 0x2ee828u: goto label_2ee828;
        case 0x2ee82cu: goto label_2ee82c;
        case 0x2ee830u: goto label_2ee830;
        case 0x2ee834u: goto label_2ee834;
        case 0x2ee838u: goto label_2ee838;
        case 0x2ee83cu: goto label_2ee83c;
        case 0x2ee840u: goto label_2ee840;
        case 0x2ee844u: goto label_2ee844;
        case 0x2ee848u: goto label_2ee848;
        case 0x2ee84cu: goto label_2ee84c;
        case 0x2ee850u: goto label_2ee850;
        case 0x2ee854u: goto label_2ee854;
        case 0x2ee858u: goto label_2ee858;
        case 0x2ee85cu: goto label_2ee85c;
        case 0x2ee860u: goto label_2ee860;
        case 0x2ee864u: goto label_2ee864;
        case 0x2ee868u: goto label_2ee868;
        case 0x2ee86cu: goto label_2ee86c;
        case 0x2ee870u: goto label_2ee870;
        case 0x2ee874u: goto label_2ee874;
        case 0x2ee878u: goto label_2ee878;
        case 0x2ee87cu: goto label_2ee87c;
        case 0x2ee880u: goto label_2ee880;
        case 0x2ee884u: goto label_2ee884;
        case 0x2ee888u: goto label_2ee888;
        case 0x2ee88cu: goto label_2ee88c;
        case 0x2ee890u: goto label_2ee890;
        case 0x2ee894u: goto label_2ee894;
        case 0x2ee898u: goto label_2ee898;
        case 0x2ee89cu: goto label_2ee89c;
        case 0x2ee8a0u: goto label_2ee8a0;
        case 0x2ee8a4u: goto label_2ee8a4;
        case 0x2ee8a8u: goto label_2ee8a8;
        case 0x2ee8acu: goto label_2ee8ac;
        case 0x2ee8b0u: goto label_2ee8b0;
        case 0x2ee8b4u: goto label_2ee8b4;
        case 0x2ee8b8u: goto label_2ee8b8;
        case 0x2ee8bcu: goto label_2ee8bc;
        case 0x2ee8c0u: goto label_2ee8c0;
        case 0x2ee8c4u: goto label_2ee8c4;
        case 0x2ee8c8u: goto label_2ee8c8;
        case 0x2ee8ccu: goto label_2ee8cc;
        case 0x2ee8d0u: goto label_2ee8d0;
        case 0x2ee8d4u: goto label_2ee8d4;
        case 0x2ee8d8u: goto label_2ee8d8;
        case 0x2ee8dcu: goto label_2ee8dc;
        case 0x2ee8e0u: goto label_2ee8e0;
        case 0x2ee8e4u: goto label_2ee8e4;
        case 0x2ee8e8u: goto label_2ee8e8;
        case 0x2ee8ecu: goto label_2ee8ec;
        case 0x2ee8f0u: goto label_2ee8f0;
        case 0x2ee8f4u: goto label_2ee8f4;
        case 0x2ee8f8u: goto label_2ee8f8;
        case 0x2ee8fcu: goto label_2ee8fc;
        case 0x2ee900u: goto label_2ee900;
        case 0x2ee904u: goto label_2ee904;
        case 0x2ee908u: goto label_2ee908;
        case 0x2ee90cu: goto label_2ee90c;
        case 0x2ee910u: goto label_2ee910;
        case 0x2ee914u: goto label_2ee914;
        case 0x2ee918u: goto label_2ee918;
        case 0x2ee91cu: goto label_2ee91c;
        case 0x2ee920u: goto label_2ee920;
        case 0x2ee924u: goto label_2ee924;
        case 0x2ee928u: goto label_2ee928;
        case 0x2ee92cu: goto label_2ee92c;
        case 0x2ee930u: goto label_2ee930;
        case 0x2ee934u: goto label_2ee934;
        case 0x2ee938u: goto label_2ee938;
        case 0x2ee93cu: goto label_2ee93c;
        case 0x2ee940u: goto label_2ee940;
        case 0x2ee944u: goto label_2ee944;
        case 0x2ee948u: goto label_2ee948;
        case 0x2ee94cu: goto label_2ee94c;
        case 0x2ee950u: goto label_2ee950;
        case 0x2ee954u: goto label_2ee954;
        case 0x2ee958u: goto label_2ee958;
        case 0x2ee95cu: goto label_2ee95c;
        case 0x2ee960u: goto label_2ee960;
        case 0x2ee964u: goto label_2ee964;
        case 0x2ee968u: goto label_2ee968;
        case 0x2ee96cu: goto label_2ee96c;
        case 0x2ee970u: goto label_2ee970;
        case 0x2ee974u: goto label_2ee974;
        case 0x2ee978u: goto label_2ee978;
        case 0x2ee97cu: goto label_2ee97c;
        case 0x2ee980u: goto label_2ee980;
        case 0x2ee984u: goto label_2ee984;
        case 0x2ee988u: goto label_2ee988;
        case 0x2ee98cu: goto label_2ee98c;
        case 0x2ee990u: goto label_2ee990;
        case 0x2ee994u: goto label_2ee994;
        case 0x2ee998u: goto label_2ee998;
        case 0x2ee99cu: goto label_2ee99c;
        case 0x2ee9a0u: goto label_2ee9a0;
        case 0x2ee9a4u: goto label_2ee9a4;
        case 0x2ee9a8u: goto label_2ee9a8;
        case 0x2ee9acu: goto label_2ee9ac;
        case 0x2ee9b0u: goto label_2ee9b0;
        case 0x2ee9b4u: goto label_2ee9b4;
        case 0x2ee9b8u: goto label_2ee9b8;
        case 0x2ee9bcu: goto label_2ee9bc;
        case 0x2ee9c0u: goto label_2ee9c0;
        case 0x2ee9c4u: goto label_2ee9c4;
        case 0x2ee9c8u: goto label_2ee9c8;
        case 0x2ee9ccu: goto label_2ee9cc;
        case 0x2ee9d0u: goto label_2ee9d0;
        case 0x2ee9d4u: goto label_2ee9d4;
        case 0x2ee9d8u: goto label_2ee9d8;
        case 0x2ee9dcu: goto label_2ee9dc;
        case 0x2ee9e0u: goto label_2ee9e0;
        case 0x2ee9e4u: goto label_2ee9e4;
        case 0x2ee9e8u: goto label_2ee9e8;
        case 0x2ee9ecu: goto label_2ee9ec;
        case 0x2ee9f0u: goto label_2ee9f0;
        case 0x2ee9f4u: goto label_2ee9f4;
        case 0x2ee9f8u: goto label_2ee9f8;
        case 0x2ee9fcu: goto label_2ee9fc;
        case 0x2eea00u: goto label_2eea00;
        case 0x2eea04u: goto label_2eea04;
        case 0x2eea08u: goto label_2eea08;
        case 0x2eea0cu: goto label_2eea0c;
        case 0x2eea10u: goto label_2eea10;
        case 0x2eea14u: goto label_2eea14;
        case 0x2eea18u: goto label_2eea18;
        case 0x2eea1cu: goto label_2eea1c;
        case 0x2eea20u: goto label_2eea20;
        case 0x2eea24u: goto label_2eea24;
        case 0x2eea28u: goto label_2eea28;
        case 0x2eea2cu: goto label_2eea2c;
        case 0x2eea30u: goto label_2eea30;
        case 0x2eea34u: goto label_2eea34;
        case 0x2eea38u: goto label_2eea38;
        case 0x2eea3cu: goto label_2eea3c;
        case 0x2eea40u: goto label_2eea40;
        case 0x2eea44u: goto label_2eea44;
        case 0x2eea48u: goto label_2eea48;
        case 0x2eea4cu: goto label_2eea4c;
        case 0x2eea50u: goto label_2eea50;
        case 0x2eea54u: goto label_2eea54;
        case 0x2eea58u: goto label_2eea58;
        case 0x2eea5cu: goto label_2eea5c;
        case 0x2eea60u: goto label_2eea60;
        case 0x2eea64u: goto label_2eea64;
        case 0x2eea68u: goto label_2eea68;
        case 0x2eea6cu: goto label_2eea6c;
        case 0x2eea70u: goto label_2eea70;
        case 0x2eea74u: goto label_2eea74;
        case 0x2eea78u: goto label_2eea78;
        case 0x2eea7cu: goto label_2eea7c;
        case 0x2eea80u: goto label_2eea80;
        case 0x2eea84u: goto label_2eea84;
        case 0x2eea88u: goto label_2eea88;
        case 0x2eea8cu: goto label_2eea8c;
        case 0x2eea90u: goto label_2eea90;
        case 0x2eea94u: goto label_2eea94;
        case 0x2eea98u: goto label_2eea98;
        case 0x2eea9cu: goto label_2eea9c;
        case 0x2eeaa0u: goto label_2eeaa0;
        case 0x2eeaa4u: goto label_2eeaa4;
        case 0x2eeaa8u: goto label_2eeaa8;
        case 0x2eeaacu: goto label_2eeaac;
        case 0x2eeab0u: goto label_2eeab0;
        case 0x2eeab4u: goto label_2eeab4;
        case 0x2eeab8u: goto label_2eeab8;
        case 0x2eeabcu: goto label_2eeabc;
        case 0x2eeac0u: goto label_2eeac0;
        case 0x2eeac4u: goto label_2eeac4;
        case 0x2eeac8u: goto label_2eeac8;
        case 0x2eeaccu: goto label_2eeacc;
        case 0x2eead0u: goto label_2eead0;
        case 0x2eead4u: goto label_2eead4;
        case 0x2eead8u: goto label_2eead8;
        case 0x2eeadcu: goto label_2eeadc;
        case 0x2eeae0u: goto label_2eeae0;
        case 0x2eeae4u: goto label_2eeae4;
        case 0x2eeae8u: goto label_2eeae8;
        case 0x2eeaecu: goto label_2eeaec;
        case 0x2eeaf0u: goto label_2eeaf0;
        case 0x2eeaf4u: goto label_2eeaf4;
        case 0x2eeaf8u: goto label_2eeaf8;
        case 0x2eeafcu: goto label_2eeafc;
        case 0x2eeb00u: goto label_2eeb00;
        case 0x2eeb04u: goto label_2eeb04;
        case 0x2eeb08u: goto label_2eeb08;
        case 0x2eeb0cu: goto label_2eeb0c;
        case 0x2eeb10u: goto label_2eeb10;
        case 0x2eeb14u: goto label_2eeb14;
        case 0x2eeb18u: goto label_2eeb18;
        case 0x2eeb1cu: goto label_2eeb1c;
        case 0x2eeb20u: goto label_2eeb20;
        case 0x2eeb24u: goto label_2eeb24;
        case 0x2eeb28u: goto label_2eeb28;
        case 0x2eeb2cu: goto label_2eeb2c;
        case 0x2eeb30u: goto label_2eeb30;
        case 0x2eeb34u: goto label_2eeb34;
        case 0x2eeb38u: goto label_2eeb38;
        case 0x2eeb3cu: goto label_2eeb3c;
        case 0x2eeb40u: goto label_2eeb40;
        case 0x2eeb44u: goto label_2eeb44;
        case 0x2eeb48u: goto label_2eeb48;
        case 0x2eeb4cu: goto label_2eeb4c;
        case 0x2eeb50u: goto label_2eeb50;
        case 0x2eeb54u: goto label_2eeb54;
        case 0x2eeb58u: goto label_2eeb58;
        case 0x2eeb5cu: goto label_2eeb5c;
        case 0x2eeb60u: goto label_2eeb60;
        case 0x2eeb64u: goto label_2eeb64;
        case 0x2eeb68u: goto label_2eeb68;
        case 0x2eeb6cu: goto label_2eeb6c;
        case 0x2eeb70u: goto label_2eeb70;
        case 0x2eeb74u: goto label_2eeb74;
        case 0x2eeb78u: goto label_2eeb78;
        case 0x2eeb7cu: goto label_2eeb7c;
        case 0x2eeb80u: goto label_2eeb80;
        case 0x2eeb84u: goto label_2eeb84;
        case 0x2eeb88u: goto label_2eeb88;
        case 0x2eeb8cu: goto label_2eeb8c;
        case 0x2eeb90u: goto label_2eeb90;
        case 0x2eeb94u: goto label_2eeb94;
        case 0x2eeb98u: goto label_2eeb98;
        case 0x2eeb9cu: goto label_2eeb9c;
        case 0x2eeba0u: goto label_2eeba0;
        case 0x2eeba4u: goto label_2eeba4;
        case 0x2eeba8u: goto label_2eeba8;
        case 0x2eebacu: goto label_2eebac;
        case 0x2eebb0u: goto label_2eebb0;
        case 0x2eebb4u: goto label_2eebb4;
        case 0x2eebb8u: goto label_2eebb8;
        case 0x2eebbcu: goto label_2eebbc;
        case 0x2eebc0u: goto label_2eebc0;
        case 0x2eebc4u: goto label_2eebc4;
        case 0x2eebc8u: goto label_2eebc8;
        case 0x2eebccu: goto label_2eebcc;
        case 0x2eebd0u: goto label_2eebd0;
        case 0x2eebd4u: goto label_2eebd4;
        case 0x2eebd8u: goto label_2eebd8;
        case 0x2eebdcu: goto label_2eebdc;
        case 0x2eebe0u: goto label_2eebe0;
        case 0x2eebe4u: goto label_2eebe4;
        case 0x2eebe8u: goto label_2eebe8;
        case 0x2eebecu: goto label_2eebec;
        case 0x2eebf0u: goto label_2eebf0;
        case 0x2eebf4u: goto label_2eebf4;
        case 0x2eebf8u: goto label_2eebf8;
        case 0x2eebfcu: goto label_2eebfc;
        case 0x2eec00u: goto label_2eec00;
        case 0x2eec04u: goto label_2eec04;
        case 0x2eec08u: goto label_2eec08;
        case 0x2eec0cu: goto label_2eec0c;
        case 0x2eec10u: goto label_2eec10;
        case 0x2eec14u: goto label_2eec14;
        case 0x2eec18u: goto label_2eec18;
        case 0x2eec1cu: goto label_2eec1c;
        case 0x2eec20u: goto label_2eec20;
        case 0x2eec24u: goto label_2eec24;
        case 0x2eec28u: goto label_2eec28;
        case 0x2eec2cu: goto label_2eec2c;
        case 0x2eec30u: goto label_2eec30;
        case 0x2eec34u: goto label_2eec34;
        case 0x2eec38u: goto label_2eec38;
        case 0x2eec3cu: goto label_2eec3c;
        case 0x2eec40u: goto label_2eec40;
        case 0x2eec44u: goto label_2eec44;
        case 0x2eec48u: goto label_2eec48;
        case 0x2eec4cu: goto label_2eec4c;
        case 0x2eec50u: goto label_2eec50;
        case 0x2eec54u: goto label_2eec54;
        case 0x2eec58u: goto label_2eec58;
        case 0x2eec5cu: goto label_2eec5c;
        case 0x2eec60u: goto label_2eec60;
        case 0x2eec64u: goto label_2eec64;
        case 0x2eec68u: goto label_2eec68;
        case 0x2eec6cu: goto label_2eec6c;
        case 0x2eec70u: goto label_2eec70;
        case 0x2eec74u: goto label_2eec74;
        case 0x2eec78u: goto label_2eec78;
        case 0x2eec7cu: goto label_2eec7c;
        case 0x2eec80u: goto label_2eec80;
        case 0x2eec84u: goto label_2eec84;
        case 0x2eec88u: goto label_2eec88;
        case 0x2eec8cu: goto label_2eec8c;
        case 0x2eec90u: goto label_2eec90;
        case 0x2eec94u: goto label_2eec94;
        case 0x2eec98u: goto label_2eec98;
        case 0x2eec9cu: goto label_2eec9c;
        case 0x2eeca0u: goto label_2eeca0;
        case 0x2eeca4u: goto label_2eeca4;
        case 0x2eeca8u: goto label_2eeca8;
        case 0x2eecacu: goto label_2eecac;
        case 0x2eecb0u: goto label_2eecb0;
        case 0x2eecb4u: goto label_2eecb4;
        case 0x2eecb8u: goto label_2eecb8;
        case 0x2eecbcu: goto label_2eecbc;
        case 0x2eecc0u: goto label_2eecc0;
        case 0x2eecc4u: goto label_2eecc4;
        case 0x2eecc8u: goto label_2eecc8;
        case 0x2eecccu: goto label_2eeccc;
        case 0x2eecd0u: goto label_2eecd0;
        case 0x2eecd4u: goto label_2eecd4;
        case 0x2eecd8u: goto label_2eecd8;
        case 0x2eecdcu: goto label_2eecdc;
        case 0x2eece0u: goto label_2eece0;
        case 0x2eece4u: goto label_2eece4;
        case 0x2eece8u: goto label_2eece8;
        case 0x2eececu: goto label_2eecec;
        case 0x2eecf0u: goto label_2eecf0;
        case 0x2eecf4u: goto label_2eecf4;
        case 0x2eecf8u: goto label_2eecf8;
        case 0x2eecfcu: goto label_2eecfc;
        case 0x2eed00u: goto label_2eed00;
        case 0x2eed04u: goto label_2eed04;
        case 0x2eed08u: goto label_2eed08;
        case 0x2eed0cu: goto label_2eed0c;
        case 0x2eed10u: goto label_2eed10;
        case 0x2eed14u: goto label_2eed14;
        case 0x2eed18u: goto label_2eed18;
        case 0x2eed1cu: goto label_2eed1c;
        case 0x2eed20u: goto label_2eed20;
        case 0x2eed24u: goto label_2eed24;
        case 0x2eed28u: goto label_2eed28;
        case 0x2eed2cu: goto label_2eed2c;
        case 0x2eed30u: goto label_2eed30;
        case 0x2eed34u: goto label_2eed34;
        case 0x2eed38u: goto label_2eed38;
        case 0x2eed3cu: goto label_2eed3c;
        case 0x2eed40u: goto label_2eed40;
        case 0x2eed44u: goto label_2eed44;
        case 0x2eed48u: goto label_2eed48;
        case 0x2eed4cu: goto label_2eed4c;
        case 0x2eed50u: goto label_2eed50;
        case 0x2eed54u: goto label_2eed54;
        case 0x2eed58u: goto label_2eed58;
        case 0x2eed5cu: goto label_2eed5c;
        case 0x2eed60u: goto label_2eed60;
        case 0x2eed64u: goto label_2eed64;
        case 0x2eed68u: goto label_2eed68;
        case 0x2eed6cu: goto label_2eed6c;
        case 0x2eed70u: goto label_2eed70;
        case 0x2eed74u: goto label_2eed74;
        case 0x2eed78u: goto label_2eed78;
        case 0x2eed7cu: goto label_2eed7c;
        case 0x2eed80u: goto label_2eed80;
        case 0x2eed84u: goto label_2eed84;
        case 0x2eed88u: goto label_2eed88;
        case 0x2eed8cu: goto label_2eed8c;
        case 0x2eed90u: goto label_2eed90;
        case 0x2eed94u: goto label_2eed94;
        case 0x2eed98u: goto label_2eed98;
        case 0x2eed9cu: goto label_2eed9c;
        case 0x2eeda0u: goto label_2eeda0;
        case 0x2eeda4u: goto label_2eeda4;
        case 0x2eeda8u: goto label_2eeda8;
        case 0x2eedacu: goto label_2eedac;
        case 0x2eedb0u: goto label_2eedb0;
        case 0x2eedb4u: goto label_2eedb4;
        case 0x2eedb8u: goto label_2eedb8;
        case 0x2eedbcu: goto label_2eedbc;
        case 0x2eedc0u: goto label_2eedc0;
        case 0x2eedc4u: goto label_2eedc4;
        case 0x2eedc8u: goto label_2eedc8;
        case 0x2eedccu: goto label_2eedcc;
        case 0x2eedd0u: goto label_2eedd0;
        case 0x2eedd4u: goto label_2eedd4;
        case 0x2eedd8u: goto label_2eedd8;
        case 0x2eeddcu: goto label_2eeddc;
        case 0x2eede0u: goto label_2eede0;
        case 0x2eede4u: goto label_2eede4;
        case 0x2eede8u: goto label_2eede8;
        case 0x2eedecu: goto label_2eedec;
        case 0x2eedf0u: goto label_2eedf0;
        case 0x2eedf4u: goto label_2eedf4;
        case 0x2eedf8u: goto label_2eedf8;
        case 0x2eedfcu: goto label_2eedfc;
        case 0x2eee00u: goto label_2eee00;
        case 0x2eee04u: goto label_2eee04;
        case 0x2eee08u: goto label_2eee08;
        case 0x2eee0cu: goto label_2eee0c;
        case 0x2eee10u: goto label_2eee10;
        case 0x2eee14u: goto label_2eee14;
        case 0x2eee18u: goto label_2eee18;
        case 0x2eee1cu: goto label_2eee1c;
        case 0x2eee20u: goto label_2eee20;
        case 0x2eee24u: goto label_2eee24;
        case 0x2eee28u: goto label_2eee28;
        case 0x2eee2cu: goto label_2eee2c;
        case 0x2eee30u: goto label_2eee30;
        case 0x2eee34u: goto label_2eee34;
        case 0x2eee38u: goto label_2eee38;
        case 0x2eee3cu: goto label_2eee3c;
        case 0x2eee40u: goto label_2eee40;
        case 0x2eee44u: goto label_2eee44;
        case 0x2eee48u: goto label_2eee48;
        case 0x2eee4cu: goto label_2eee4c;
        default: break;
    }

    ctx->pc = 0x2ee7b0u;

label_2ee7b0:
    // 0x2ee7b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ee7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ee7b4:
    // 0x2ee7b4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ee7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2ee7b8:
    // 0x2ee7b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ee7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2ee7bc:
    // 0x2ee7bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ee7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee7c0:
    // 0x2ee7c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ee7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2ee7c4:
    // 0x2ee7c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ee7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2ee7c8:
    // 0x2ee7c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ee7cc:
    // 0x2ee7cc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2ee7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2ee7d0:
    // 0x2ee7d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ee7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ee7d4:
    // 0x2ee7d4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2ee7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2ee7d8:
    // 0x2ee7d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ee7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee7dc:
    // 0x2ee7dc: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ee7dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ee7e0:
    // 0x2ee7e0: 0x1c40018f  bgtz        $v0, . + 4 + (0x18F << 2)
label_2ee7e4:
    if (ctx->pc == 0x2EE7E4u) {
        ctx->pc = 0x2EE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7E0u;
        // 0x2ee7e4: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7E8u;
        goto label_2ee7e8;
    }
    ctx->pc = 0x2EE7E0u;
    {
        const bool branch_taken_0x2ee7e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7E0u;
        // 0x2ee7e4: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7e0) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EE7E8u;
label_2ee7e8:
    // 0x2ee7e8: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2ee7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2ee7ec:
    // 0x2ee7ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ee7f0:
    if (ctx->pc == 0x2EE7F0u) {
        ctx->pc = 0x2EE7F4u;
        goto label_2ee7f4;
    }
    ctx->pc = 0x2EE7ECu;
    {
        const bool branch_taken_0x2ee7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7ec) {
            ctx->pc = 0x2EE814u;
            goto label_2ee814;
        }
    }
    ctx->pc = 0x2EE7F4u;
label_2ee7f4:
    // 0x2ee7f4: 0x9242004a  lbu         $v0, 0x4A($s2)
    ctx->pc = 0x2ee7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 74)));
label_2ee7f8:
    // 0x2ee7f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ee7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee7fc:
    // 0x2ee7fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ee800:
    // 0x2ee800: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x2ee800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ee804:
    // 0x2ee804: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2ee808:
    if (ctx->pc == 0x2EE808u) {
        ctx->pc = 0x2EE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE804u;
        // 0x2ee808: 0xa242004a  sb          $v0, 0x4A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 74), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE80Cu;
        goto label_2ee80c;
    }
    ctx->pc = 0x2EE804u;
    {
        const bool branch_taken_0x2ee804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE804u;
        // 0x2ee808: 0xa242004a  sb          $v0, 0x4A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 74), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee804) {
            ctx->pc = 0x2EE814u;
            goto label_2ee814;
        }
    }
    ctx->pc = 0x2EE80Cu;
label_2ee80c:
    // 0x2ee80c: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2ee80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_2ee810:
    // 0x2ee810: 0xa240004a  sb          $zero, 0x4A($s2)
    ctx->pc = 0x2ee810u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 74), (uint8_t)GPR_U32(ctx, 0));
label_2ee814:
    // 0x2ee814: 0xc08bfa0  jal         func_22FE80
label_2ee818:
    if (ctx->pc == 0x2EE818u) {
        ctx->pc = 0x2EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE814u;
        // 0x2ee818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE81Cu;
        goto label_2ee81c;
    }
    ctx->pc = 0x2EE814u;
    SET_GPR_U32(ctx, 31, 0x2EE81Cu);
    ctx->pc = 0x2EE818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE814u;
    // 0x2ee818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2EE814u, 0x2EE81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE81Cu;
label_2ee81c:
    // 0x2ee81c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2ee81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2ee820:
    // 0x2ee820: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_2ee824:
    if (ctx->pc == 0x2EE824u) {
        ctx->pc = 0x2EE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE820u;
        // 0x2ee824: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE828u;
        goto label_2ee828;
    }
    ctx->pc = 0x2EE820u;
    {
        const bool branch_taken_0x2ee820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE820u;
        // 0x2ee824: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee820) {
            ctx->pc = 0x2EE91Cu;
            goto label_2ee91c;
        }
    }
    ctx->pc = 0x2EE828u;
label_2ee828:
    // 0x2ee828: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ee828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ee82c:
    // 0x2ee82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee830:
    // 0x2ee830: 0xc089998  jal         func_226660
label_2ee834:
    if (ctx->pc == 0x2EE834u) {
        ctx->pc = 0x2EE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE830u;
        // 0x2ee834: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE838u;
        goto label_2ee838;
    }
    ctx->pc = 0x2EE830u;
    SET_GPR_U32(ctx, 31, 0x2EE838u);
    ctx->pc = 0x2EE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE830u;
    // 0x2ee834: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EE830u, 0x2EE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE838u;
label_2ee838:
    // 0x2ee838: 0x1440017a  bnez        $v0, . + 4 + (0x17A << 2)
label_2ee83c:
    if (ctx->pc == 0x2EE83Cu) {
        ctx->pc = 0x2EE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE838u;
        // 0x2ee83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE840u;
        goto label_2ee840;
    }
    ctx->pc = 0x2EE838u;
    {
        const bool branch_taken_0x2ee838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE838u;
        // 0x2ee83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee838) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EE840u;
label_2ee840:
    // 0x2ee840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee844:
    // 0x2ee844: 0xc0a47b4  jal         func_291ED0
label_2ee848:
    if (ctx->pc == 0x2EE848u) {
        ctx->pc = 0x2EE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE844u;
        // 0x2ee848: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE84Cu;
        goto label_2ee84c;
    }
    ctx->pc = 0x2EE844u;
    SET_GPR_U32(ctx, 31, 0x2EE84Cu);
    ctx->pc = 0x2EE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE844u;
    // 0x2ee848: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2EE844u, 0x2EE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE84Cu;
label_2ee84c:
    // 0x2ee84c: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
label_2ee850:
    if (ctx->pc == 0x2EE850u) {
        ctx->pc = 0x2EE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE84Cu;
        // 0x2ee850: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE854u;
        goto label_2ee854;
    }
    ctx->pc = 0x2EE84Cu;
    {
        const bool branch_taken_0x2ee84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2EE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE84Cu;
        // 0x2ee850: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee84c) {
            ctx->pc = 0x2EE87Cu;
            goto label_2ee87c;
        }
    }
    ctx->pc = 0x2EE854u;
label_2ee854:
    // 0x2ee854: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ee854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2ee858:
    // 0x2ee858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ee858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ee85c:
    // 0x2ee85c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ee85cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ee860:
    // 0x2ee860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee864:
    // 0x2ee864: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x2ee864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2ee868:
    // 0x2ee868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee86c:
    // 0x2ee86c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee870:
    // 0x2ee870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee874:
    // 0x2ee874: 0xc088178  jal         func_2205E0
label_2ee878:
    if (ctx->pc == 0x2EE878u) {
        ctx->pc = 0x2EE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE874u;
        // 0x2ee878: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE87Cu;
        goto label_2ee87c;
    }
    ctx->pc = 0x2EE874u;
    SET_GPR_U32(ctx, 31, 0x2EE87Cu);
    ctx->pc = 0x2EE878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE874u;
    // 0x2ee878: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EE874u, 0x2EE87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE87Cu;
label_2ee87c:
    // 0x2ee87c: 0xc0a367c  jal         func_28D9F0
label_2ee880:
    if (ctx->pc == 0x2EE880u) {
        ctx->pc = 0x2EE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE87Cu;
        // 0x2ee880: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE884u;
        goto label_2ee884;
    }
    ctx->pc = 0x2EE87Cu;
    SET_GPR_U32(ctx, 31, 0x2EE884u);
    ctx->pc = 0x2EE880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE87Cu;
    // 0x2ee880: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EE87Cu, 0x2EE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE884u;
label_2ee884:
    // 0x2ee884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee888:
    // 0x2ee888: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2ee88c:
    if (ctx->pc == 0x2EE88Cu) {
        ctx->pc = 0x2EE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE888u;
        // 0x2ee88c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE890u;
        goto label_2ee890;
    }
    ctx->pc = 0x2EE888u;
    {
        const bool branch_taken_0x2ee888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE888u;
        // 0x2ee88c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee888) {
            ctx->pc = 0x2EE8C0u;
            goto label_2ee8c0;
        }
    }
    ctx->pc = 0x2EE890u;
label_2ee890:
    // 0x2ee890: 0xc6540030  lwc1        $f20, 0x30($s2)
    ctx->pc = 0x2ee890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ee894:
    // 0x2ee894: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2ee894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2ee898:
    // 0x2ee898: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2ee898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2ee89c:
    // 0x2ee89c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee8a0:
    // 0x2ee8a0: 0xc0884f6  jal         func_2213D8
label_2ee8a4:
    if (ctx->pc == 0x2EE8A4u) {
        ctx->pc = 0x2EE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8A0u;
        // 0x2ee8a4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8A8u;
        goto label_2ee8a8;
    }
    ctx->pc = 0x2EE8A0u;
    SET_GPR_U32(ctx, 31, 0x2EE8A8u);
    ctx->pc = 0x2EE8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8A0u;
    // 0x2ee8a4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2EE8A0u, 0x2EE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8A8u;
label_2ee8a8:
    // 0x2ee8a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ee8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee8ac:
    // 0x2ee8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8b0:
    // 0x2ee8b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ee8b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ee8b4:
    // 0x2ee8b4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ee8b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2ee8b8:
    // 0x2ee8b8: 0xc0bf70a  jal         func_2FDC28
label_2ee8bc:
    if (ctx->pc == 0x2EE8BCu) {
        ctx->pc = 0x2EE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8B8u;
        // 0x2ee8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8C0u;
        goto label_2ee8c0;
    }
    ctx->pc = 0x2EE8B8u;
    SET_GPR_U32(ctx, 31, 0x2EE8C0u);
    ctx->pc = 0x2EE8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8B8u;
    // 0x2ee8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2EE8B8u, 0x2EE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8C0u;
label_2ee8c0:
    // 0x2ee8c0: 0xc0a367c  jal         func_28D9F0
label_2ee8c4:
    if (ctx->pc == 0x2EE8C4u) {
        ctx->pc = 0x2EE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8C0u;
        // 0x2ee8c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8C8u;
        goto label_2ee8c8;
    }
    ctx->pc = 0x2EE8C0u;
    SET_GPR_U32(ctx, 31, 0x2EE8C8u);
    ctx->pc = 0x2EE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8C0u;
    // 0x2ee8c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EE8C0u, 0x2EE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8C8u;
label_2ee8c8:
    // 0x2ee8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8cc:
    // 0x2ee8cc: 0x12000153  beqz        $s0, . + 4 + (0x153 << 2)
label_2ee8d0:
    if (ctx->pc == 0x2EE8D0u) {
        ctx->pc = 0x2EE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8CCu;
        // 0x2ee8d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8D4u;
        goto label_2ee8d4;
    }
    ctx->pc = 0x2EE8CCu;
    {
        const bool branch_taken_0x2ee8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8CCu;
        // 0x2ee8d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8cc) {
            ctx->pc = 0x2EEE1Cu;
            goto label_2eee1c;
        }
    }
    ctx->pc = 0x2EE8D4u;
label_2ee8d4:
    // 0x2ee8d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8d8:
    // 0x2ee8d8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ee8dc:
    // 0x2ee8dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ee8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ee8e0:
    // 0x2ee8e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ee8e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ee8e4:
    // 0x2ee8e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ee8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ee8e8:
    // 0x2ee8e8: 0xc0cd4fc  jal         func_3353F0
label_2ee8ec:
    if (ctx->pc == 0x2EE8ECu) {
        ctx->pc = 0x2EE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8E8u;
        // 0x2ee8ec: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8F0u;
        goto label_2ee8f0;
    }
    ctx->pc = 0x2EE8E8u;
    SET_GPR_U32(ctx, 31, 0x2EE8F0u);
    ctx->pc = 0x2EE8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8E8u;
    // 0x2ee8ec: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2EE8E8u, 0x2EE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8F0u;
label_2ee8f0:
    // 0x2ee8f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ee8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee8f4:
    // 0x2ee8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8f8:
    // 0x2ee8f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ee8f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ee8fc:
    // 0x2ee8fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ee8fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee900:
    // 0x2ee900: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2ee900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2ee904:
    // 0x2ee904: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ee904u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ee908:
    // 0x2ee908: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee90c:
    // 0x2ee90c: 0xc0be968  jal         func_2FA5A0
label_2ee910:
    if (ctx->pc == 0x2EE910u) {
        ctx->pc = 0x2EE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE90Cu;
        // 0x2ee910: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE914u;
        goto label_2ee914;
    }
    ctx->pc = 0x2EE90Cu;
    SET_GPR_U32(ctx, 31, 0x2EE914u);
    ctx->pc = 0x2EE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE90Cu;
    // 0x2ee910: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EE90Cu, 0x2EE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE914u;
label_2ee914:
    // 0x2ee914: 0x10000142  b           . + 4 + (0x142 << 2)
label_2ee918:
    if (ctx->pc == 0x2EE918u) {
        ctx->pc = 0x2EE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE914u;
        // 0x2ee918: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE91Cu;
        goto label_2ee91c;
    }
    ctx->pc = 0x2EE914u;
    {
        const bool branch_taken_0x2ee914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE914u;
        // 0x2ee918: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee914) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EE91Cu;
label_2ee91c:
    // 0x2ee91c: 0x14740060  bne         $v1, $s4, . + 4 + (0x60 << 2)
label_2ee920:
    if (ctx->pc == 0x2EE920u) {
        ctx->pc = 0x2EE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE91Cu;
        // 0x2ee920: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE924u;
        goto label_2ee924;
    }
    ctx->pc = 0x2EE91Cu;
    {
        const bool branch_taken_0x2ee91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2EE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE91Cu;
        // 0x2ee920: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee91c) {
            ctx->pc = 0x2EEAA0u;
            goto label_2eeaa0;
        }
    }
    ctx->pc = 0x2EE924u;
label_2ee924:
    // 0x2ee924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee928:
    // 0x2ee928: 0xc089bdc  jal         func_226F70
label_2ee92c:
    if (ctx->pc == 0x2EE92Cu) {
        ctx->pc = 0x2EE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE928u;
        // 0x2ee92c: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE930u;
        goto label_2ee930;
    }
    ctx->pc = 0x2EE928u;
    SET_GPR_U32(ctx, 31, 0x2EE930u);
    ctx->pc = 0x2EE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE928u;
    // 0x2ee92c: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2EE928u, 0x2EE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE930u;
label_2ee930:
    // 0x2ee930: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ee930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2ee934:
    // 0x2ee934: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2ee934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2ee938:
    // 0x2ee938: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2ee938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2ee93c:
    // 0x2ee93c: 0x26024b00  addiu       $v0, $s0, 0x4B00
    ctx->pc = 0x2ee93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2ee940:
    // 0x2ee940: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ee940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ee944:
    // 0x2ee944: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ee944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ee948:
    // 0x2ee948: 0xc0cdb38  jal         func_336CE0
label_2ee94c:
    if (ctx->pc == 0x2EE94Cu) {
        ctx->pc = 0x2EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE948u;
        // 0x2ee94c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE950u;
        goto label_2ee950;
    }
    ctx->pc = 0x2EE948u;
    SET_GPR_U32(ctx, 31, 0x2EE950u);
    ctx->pc = 0x2EE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE948u;
    // 0x2ee94c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EE948u, 0x2EE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE950u;
label_2ee950:
    // 0x2ee950: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ee950u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ee954:
    // 0x2ee954: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ee954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2ee958:
    // 0x2ee958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee95c:
    // 0x2ee95c: 0x0  nop
    ctx->pc = 0x2ee95cu;
    // NOP
label_2ee960:
    // 0x2ee960: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ee960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ee964:
    // 0x2ee964: 0x0  nop
    ctx->pc = 0x2ee964u;
    // NOP
label_2ee968:
    // 0x2ee968: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
label_2ee96c:
    if (ctx->pc == 0x2EE96Cu) {
        ctx->pc = 0x2EE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE968u;
        // 0x2ee96c: 0x9243004c  lbu         $v1, 0x4C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE970u;
        goto label_2ee970;
    }
    ctx->pc = 0x2EE968u;
    {
        const bool branch_taken_0x2ee968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee968) {
            ctx->pc = 0x2EE96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE968u;
            // 0x2ee96c: 0x9243004c  lbu         $v1, 0x4C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA88u;
            goto label_2eea88;
        }
    }
    ctx->pc = 0x2EE970u;
label_2ee970:
    // 0x2ee970: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x2ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2ee974:
    // 0x2ee974: 0x384200b2  xori        $v0, $v0, 0xB2
    ctx->pc = 0x2ee974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)178);
label_2ee978:
    // 0x2ee978: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ee97c:
    if (ctx->pc == 0x2EE97Cu) {
        ctx->pc = 0x2EE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE978u;
        // 0x2ee97c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE980u;
        goto label_2ee980;
    }
    ctx->pc = 0x2EE978u;
    {
        const bool branch_taken_0x2ee978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE978u;
        // 0x2ee97c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee978) {
            ctx->pc = 0x2EE98Cu;
            goto label_2ee98c;
        }
    }
    ctx->pc = 0x2EE980u;
label_2ee980:
    // 0x2ee980: 0x9242004c  lbu         $v0, 0x4C($s2)
    ctx->pc = 0x2ee980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_2ee984:
    // 0x2ee984: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
label_2ee988:
    if (ctx->pc == 0x2EE988u) {
        ctx->pc = 0x2EE98Cu;
        goto label_2ee98c;
    }
    ctx->pc = 0x2EE984u;
    {
        const bool branch_taken_0x2ee984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ee984) {
            ctx->pc = 0x2EE990u;
            goto label_2ee990;
        }
    }
    ctx->pc = 0x2EE98Cu;
label_2ee98c:
    // 0x2ee98c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee990:
    // 0x2ee990: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_2ee994:
    if (ctx->pc == 0x2EE994u) {
        ctx->pc = 0x2EE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE990u;
        // 0x2ee994: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE998u;
        goto label_2ee998;
    }
    ctx->pc = 0x2EE990u;
    {
        const bool branch_taken_0x2ee990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE990u;
        // 0x2ee994: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee990) {
            ctx->pc = 0x2EEA84u;
            goto label_2eea84;
        }
    }
    ctx->pc = 0x2EE998u;
label_2ee998:
    // 0x2ee998: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2ee998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2ee99c:
    // 0x2ee99c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ee99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ee9a0:
    // 0x2ee9a0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ee9a4:
    // 0x2ee9a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee9a8:
    // 0x2ee9a8: 0x26024b00  addiu       $v0, $s0, 0x4B00
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2ee9ac:
    // 0x2ee9ac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ee9acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ee9b0:
    // 0x2ee9b0: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2ee9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2ee9b4:
    // 0x2ee9b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ee9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2ee9b8:
    // 0x2ee9b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ee9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2ee9bc:
    // 0x2ee9bc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2ee9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ee9c0:
    // 0x2ee9c0: 0xc1067b8  jal         func_419EE0
label_2ee9c4:
    if (ctx->pc == 0x2EE9C4u) {
        ctx->pc = 0x2EE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9C0u;
        // 0x2ee9c4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9C8u;
        goto label_2ee9c8;
    }
    ctx->pc = 0x2EE9C0u;
    SET_GPR_U32(ctx, 31, 0x2EE9C8u);
    ctx->pc = 0x2EE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9C0u;
    // 0x2ee9c4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2EE9C0u, 0x2EE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9C8u;
label_2ee9c8:
    // 0x2ee9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee9cc:
    // 0x2ee9cc: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x2ee9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2ee9d0:
    // 0x2ee9d0: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x2ee9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_2ee9d4:
    // 0x2ee9d4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2ee9d8:
    if (ctx->pc == 0x2EE9D8u) {
        ctx->pc = 0x2EE9DCu;
        goto label_2ee9dc;
    }
    ctx->pc = 0x2EE9D4u;
    {
        const bool branch_taken_0x2ee9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee9d4) {
            ctx->pc = 0x2EEA00u;
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EE9DCu;
label_2ee9dc:
    // 0x2ee9dc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2ee9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2ee9e0:
    // 0x2ee9e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee9e4:
    // 0x2ee9e4: 0x0  nop
    ctx->pc = 0x2ee9e4u;
    // NOP
label_2ee9e8:
    // 0x2ee9e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ee9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ee9ec:
    // 0x2ee9ec: 0x0  nop
    ctx->pc = 0x2ee9ecu;
    // NOP
label_2ee9f0:
    // 0x2ee9f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2ee9f4:
    if (ctx->pc == 0x2EE9F4u) {
        ctx->pc = 0x2EE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9F0u;
        // 0x2ee9f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9F8u;
        goto label_2ee9f8;
    }
    ctx->pc = 0x2EE9F0u;
    {
        const bool branch_taken_0x2ee9f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9F0u;
        // 0x2ee9f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9f0) {
            ctx->pc = 0x2EEA00u;
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EE9F8u;
label_2ee9f8:
    // 0x2ee9f8: 0xc08bfbc  jal         func_22FEF0
label_2ee9fc:
    if (ctx->pc == 0x2EE9FCu) {
        ctx->pc = 0x2EE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9F8u;
        // 0x2ee9fc: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA00u;
        goto label_2eea00;
    }
    ctx->pc = 0x2EE9F8u;
    SET_GPR_U32(ctx, 31, 0x2EEA00u);
    ctx->pc = 0x2EE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9F8u;
    // 0x2ee9fc: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2EE9F8u, 0x2EEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA00u;
label_2eea00:
    // 0x2eea00: 0xc0a367c  jal         func_28D9F0
label_2eea04:
    if (ctx->pc == 0x2EEA04u) {
        ctx->pc = 0x2EEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA00u;
        // 0x2eea04: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA08u;
        goto label_2eea08;
    }
    ctx->pc = 0x2EEA00u;
    SET_GPR_U32(ctx, 31, 0x2EEA08u);
    ctx->pc = 0x2EEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA00u;
    // 0x2eea04: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EEA00u, 0x2EEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA08u;
label_2eea08:
    // 0x2eea08: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
label_2eea0c:
    if (ctx->pc == 0x2EEA0Cu) {
        ctx->pc = 0x2EEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA08u;
        // 0x2eea0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA10u;
        goto label_2eea10;
    }
    ctx->pc = 0x2EEA08u;
    {
        const bool branch_taken_0x2eea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA08u;
        // 0x2eea0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea08) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EEA10u;
label_2eea10:
    // 0x2eea10: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x2eea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2eea14:
    // 0x2eea14: 0x384200b2  xori        $v0, $v0, 0xB2
    ctx->pc = 0x2eea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)178);
label_2eea18:
    // 0x2eea18: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2eea1c:
    if (ctx->pc == 0x2EEA1Cu) {
        ctx->pc = 0x2EEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA18u;
        // 0x2eea1c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA20u;
        goto label_2eea20;
    }
    ctx->pc = 0x2EEA18u;
    {
        const bool branch_taken_0x2eea18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA18u;
        // 0x2eea1c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea18) {
            ctx->pc = 0x2EEA48u;
            goto label_2eea48;
        }
    }
    ctx->pc = 0x2EEA20u;
label_2eea20:
    // 0x2eea20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eea24:
    // 0x2eea24: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_2eea28:
    if (ctx->pc == 0x2EEA28u) {
        ctx->pc = 0x2EEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA24u;
        // 0x2eea28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA2Cu;
        goto label_2eea2c;
    }
    ctx->pc = 0x2EEA24u;
    {
        const bool branch_taken_0x2eea24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA24u;
        // 0x2eea28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea24) {
            ctx->pc = 0x2EEA4Cu;
            goto label_2eea4c;
        }
    }
    ctx->pc = 0x2EEA2Cu;
label_2eea2c:
    // 0x2eea2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2eea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eea30:
    // 0x2eea30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2eea30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2eea34:
    // 0x2eea34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2eea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2eea38:
    // 0x2eea38: 0x40f809  jalr        $v0
label_2eea3c:
    if (ctx->pc == 0x2EEA3Cu) {
        ctx->pc = 0x2EEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA38u;
        // 0x2eea3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA40u;
        goto label_2eea40;
    }
    ctx->pc = 0x2EEA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EEA40u);
        ctx->pc = 0x2EEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA38u;
        // 0x2eea3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA38u, 0x2EEA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEA40u;
label_2eea40:
    // 0x2eea40: 0x10000004  b           . + 4 + (0x4 << 2)
label_2eea44:
    if (ctx->pc == 0x2EEA44u) {
        ctx->pc = 0x2EEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA40u;
        // 0x2eea44: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA48u;
        goto label_2eea48;
    }
    ctx->pc = 0x2EEA40u;
    {
        const bool branch_taken_0x2eea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA40u;
        // 0x2eea44: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea40) {
            ctx->pc = 0x2EEA54u;
            goto label_2eea54;
        }
    }
    ctx->pc = 0x2EEA48u;
label_2eea48:
    // 0x2eea48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2eea4c:
    // 0x2eea4c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2eea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eea50:
    // 0x2eea50: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2eea50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eea54:
    // 0x2eea54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2eea58:
    // 0x2eea58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2eea5c:
    // 0x2eea5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eea5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eea60:
    // 0x2eea60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2eea60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2eea64:
    // 0x2eea64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eea64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eea68:
    // 0x2eea68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2eea68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eea6c:
    // 0x2eea6c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2eea6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eea70:
    // 0x2eea70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eea70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eea74:
    // 0x2eea74: 0xc0bee7a  jal         func_2FB9E8
label_2eea78:
    if (ctx->pc == 0x2EEA78u) {
        ctx->pc = 0x2EEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA74u;
        // 0x2eea78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA7Cu;
        goto label_2eea7c;
    }
    ctx->pc = 0x2EEA74u;
    SET_GPR_U32(ctx, 31, 0x2EEA7Cu);
    ctx->pc = 0x2EEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA74u;
    // 0x2eea78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2EEA74u, 0x2EEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA7Cu;
label_2eea7c:
    // 0x2eea7c: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_2eea80:
    if (ctx->pc == 0x2EEA80u) {
        ctx->pc = 0x2EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA7Cu;
        // 0x2eea80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA84u;
        goto label_2eea84;
    }
    ctx->pc = 0x2EEA7Cu;
    {
        const bool branch_taken_0x2eea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA7Cu;
        // 0x2eea80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea7c) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EEA84u;
label_2eea84:
    // 0x2eea84: 0x9243004c  lbu         $v1, 0x4C($s2)
    ctx->pc = 0x2eea84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_2eea88:
    // 0x2eea88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eea8c:
    // 0x2eea8c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2eea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2eea90:
    // 0x2eea90: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2eea90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2eea94:
    // 0x2eea94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eea94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eea98:
    // 0x2eea98: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_2eea9c:
    if (ctx->pc == 0x2EEA9Cu) {
        ctx->pc = 0x2EEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA98u;
        // 0x2eea9c: 0xa243004c  sb          $v1, 0x4C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAA0u;
        goto label_2eeaa0;
    }
    ctx->pc = 0x2EEA98u;
    {
        const bool branch_taken_0x2eea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA98u;
        // 0x2eea9c: 0xa243004c  sb          $v1, 0x4C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea98) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EEAA0u;
label_2eeaa0:
    // 0x2eeaa0: 0x14710027  bne         $v1, $s1, . + 4 + (0x27 << 2)
label_2eeaa4:
    if (ctx->pc == 0x2EEAA4u) {
        ctx->pc = 0x2EEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAA0u;
        // 0x2eeaa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAA8u;
        goto label_2eeaa8;
    }
    ctx->pc = 0x2EEAA0u;
    {
        const bool branch_taken_0x2eeaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2EEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAA0u;
        // 0x2eeaa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaa0) {
            ctx->pc = 0x2EEB40u;
            goto label_2eeb40;
        }
    }
    ctx->pc = 0x2EEAA8u;
label_2eeaa8:
    // 0x2eeaa8: 0xc089bdc  jal         func_226F70
label_2eeaac:
    if (ctx->pc == 0x2EEAACu) {
        ctx->pc = 0x2EEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAA8u;
        // 0x2eeaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAB0u;
        goto label_2eeab0;
    }
    ctx->pc = 0x2EEAA8u;
    SET_GPR_U32(ctx, 31, 0x2EEAB0u);
    ctx->pc = 0x2EEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAA8u;
    // 0x2eeaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2EEAA8u, 0x2EEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAB0u;
label_2eeab0:
    // 0x2eeab0: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x2eeab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_2eeab4:
    // 0x2eeab4: 0x92430046  lbu         $v1, 0x46($s2)
    ctx->pc = 0x2eeab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
label_2eeab8:
    // 0x2eeab8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2eeab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2eeabc:
    // 0x2eeabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2eeac0:
    if (ctx->pc == 0x2EEAC0u) {
        ctx->pc = 0x2EEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEABCu;
        // 0x2eeac0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAC4u;
        goto label_2eeac4;
    }
    ctx->pc = 0x2EEABCu;
    {
        const bool branch_taken_0x2eeabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEABCu;
        // 0x2eeac0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeabc) {
            ctx->pc = 0x2EEAD0u;
            goto label_2eead0;
        }
    }
    ctx->pc = 0x2EEAC4u;
label_2eeac4:
    // 0x2eeac4: 0xa2400047  sb          $zero, 0x47($s2)
    ctx->pc = 0x2eeac4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 0));
label_2eeac8:
    // 0x2eeac8: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_2eeacc:
    if (ctx->pc == 0x2EEACCu) {
        ctx->pc = 0x2EEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAC8u;
        // 0x2eeacc: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAD0u;
        goto label_2eead0;
    }
    ctx->pc = 0x2EEAC8u;
    {
        const bool branch_taken_0x2eeac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAC8u;
        // 0x2eeacc: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeac8) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EEAD0u;
label_2eead0:
    // 0x2eead0: 0xc089018  jal         func_224060
label_2eead4:
    if (ctx->pc == 0x2EEAD4u) {
        ctx->pc = 0x2EEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAD0u;
        // 0x2eead4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAD8u;
        goto label_2eead8;
    }
    ctx->pc = 0x2EEAD0u;
    SET_GPR_U32(ctx, 31, 0x2EEAD8u);
    ctx->pc = 0x2EEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAD0u;
    // 0x2eead4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EEAD0u, 0x2EEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAD8u;
label_2eead8:
    // 0x2eead8: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
label_2eeadc:
    if (ctx->pc == 0x2EEADCu) {
        ctx->pc = 0x2EEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAD8u;
        // 0x2eeadc: 0x8e6200cc  lw          $v0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAE0u;
        goto label_2eeae0;
    }
    ctx->pc = 0x2EEAD8u;
    {
        const bool branch_taken_0x2eead8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2eead8) {
            ctx->pc = 0x2EEADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEAD8u;
            // 0x2eeadc: 0x8e6200cc  lw          $v0, 0xCC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEAF0u;
            goto label_2eeaf0;
        }
    }
    ctx->pc = 0x2EEAE0u;
label_2eeae0:
    // 0x2eeae0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2eeae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2eeae4:
    // 0x2eeae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eeae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeae8:
    // 0x2eeae8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_2eeaec:
    if (ctx->pc == 0x2EEAECu) {
        ctx->pc = 0x2EEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAE8u;
        // 0x2eeaec: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAF0u;
        goto label_2eeaf0;
    }
    ctx->pc = 0x2EEAE8u;
    {
        const bool branch_taken_0x2eeae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAE8u;
        // 0x2eeaec: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeae8) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EEAF0u;
label_2eeaf0:
    // 0x2eeaf0: 0x24100225  addiu       $s0, $zero, 0x225
    ctx->pc = 0x2eeaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2eeaf4:
    // 0x2eeaf4: 0x2403029d  addiu       $v1, $zero, 0x29D
    ctx->pc = 0x2eeaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_2eeaf8:
    // 0x2eeaf8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2eeaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eeafc:
    // 0x2eeafc: 0x384200b2  xori        $v0, $v0, 0xB2
    ctx->pc = 0x2eeafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)178);
label_2eeb00:
    // 0x2eeb00: 0xc0a367c  jal         func_28D9F0
label_2eeb04:
    if (ctx->pc == 0x2EEB04u) {
        ctx->pc = 0x2EEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB00u;
        // 0x2eeb04: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB08u;
        goto label_2eeb08;
    }
    ctx->pc = 0x2EEB00u;
    SET_GPR_U32(ctx, 31, 0x2EEB08u);
    ctx->pc = 0x2EEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB00u;
    // 0x2eeb04: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EEB00u, 0x2EEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB08u;
label_2eeb08:
    // 0x2eeb08: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
label_2eeb0c:
    if (ctx->pc == 0x2EEB0Cu) {
        ctx->pc = 0x2EEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB08u;
        // 0x2eeb0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB10u;
        goto label_2eeb10;
    }
    ctx->pc = 0x2EEB08u;
    {
        const bool branch_taken_0x2eeb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB08u;
        // 0x2eeb0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb08) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EEB10u;
label_2eeb10:
    // 0x2eeb10: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2eeb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2eeb14:
    // 0x2eeb14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eeb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eeb18:
    // 0x2eeb18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eeb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eeb1c:
    // 0x2eeb1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2eeb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eeb20:
    // 0x2eeb20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eeb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb24:
    // 0x2eeb24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eeb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eeb28:
    // 0x2eeb28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2eeb28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2eeb2c:
    // 0x2eeb2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eeb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eeb30:
    // 0x2eeb30: 0xc0be968  jal         func_2FA5A0
label_2eeb34:
    if (ctx->pc == 0x2EEB34u) {
        ctx->pc = 0x2EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB30u;
        // 0x2eeb34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB38u;
        goto label_2eeb38;
    }
    ctx->pc = 0x2EEB30u;
    SET_GPR_U32(ctx, 31, 0x2EEB38u);
    ctx->pc = 0x2EEB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB30u;
    // 0x2eeb34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EEB30u, 0x2EEB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB38u;
label_2eeb38:
    // 0x2eeb38: 0x100000ba  b           . + 4 + (0xBA << 2)
label_2eeb3c:
    if (ctx->pc == 0x2EEB3Cu) {
        ctx->pc = 0x2EEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB38u;
        // 0x2eeb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB40u;
        goto label_2eeb40;
    }
    ctx->pc = 0x2EEB38u;
    {
        const bool branch_taken_0x2eeb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB38u;
        // 0x2eeb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb38) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EEB40u;
label_2eeb40:
    // 0x2eeb40: 0x14620094  bne         $v1, $v0, . + 4 + (0x94 << 2)
label_2eeb44:
    if (ctx->pc == 0x2EEB44u) {
        ctx->pc = 0x2EEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB40u;
        // 0x2eeb44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB48u;
        goto label_2eeb48;
    }
    ctx->pc = 0x2EEB40u;
    {
        const bool branch_taken_0x2eeb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB40u;
        // 0x2eeb44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb40) {
            ctx->pc = 0x2EED94u;
            goto label_2eed94;
        }
    }
    ctx->pc = 0x2EEB48u;
label_2eeb48:
    // 0x2eeb48: 0xc089018  jal         func_224060
label_2eeb4c:
    if (ctx->pc == 0x2EEB4Cu) {
        ctx->pc = 0x2EEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB48u;
        // 0x2eeb4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB50u;
        goto label_2eeb50;
    }
    ctx->pc = 0x2EEB48u;
    SET_GPR_U32(ctx, 31, 0x2EEB50u);
    ctx->pc = 0x2EEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB48u;
    // 0x2eeb4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EEB48u, 0x2EEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB50u;
label_2eeb50:
    // 0x2eeb50: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_2eeb54:
    if (ctx->pc == 0x2EEB54u) {
        ctx->pc = 0x2EEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB50u;
        // 0x2eeb54: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB58u;
        goto label_2eeb58;
    }
    ctx->pc = 0x2EEB50u;
    {
        const bool branch_taken_0x2eeb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB50u;
        // 0x2eeb54: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb50) {
            ctx->pc = 0x2EEC54u;
            goto label_2eec54;
        }
    }
    ctx->pc = 0x2EEB58u;
label_2eeb58:
    // 0x2eeb58: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x2eeb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2eeb5c:
    // 0x2eeb5c: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
label_2eeb60:
    if (ctx->pc == 0x2EEB60u) {
        ctx->pc = 0x2EEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB5Cu;
        // 0x2eeb60: 0x92430047  lbu         $v1, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB64u;
        goto label_2eeb64;
    }
    ctx->pc = 0x2EEB5Cu;
    {
        const bool branch_taken_0x2eeb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eeb5c) {
            ctx->pc = 0x2EEB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEB5Cu;
            // 0x2eeb60: 0x92430047  lbu         $v1, 0x47($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC3Cu;
            goto label_2eec3c;
        }
    }
    ctx->pc = 0x2EEB64u;
label_2eeb64:
    // 0x2eeb64: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2eeb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2eeb68:
    // 0x2eeb68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eeb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eeb6c:
    // 0x2eeb6c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2eeb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2eeb70:
    // 0x2eeb70: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2eeb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2eeb74:
    // 0x2eeb74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2eeb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2eeb78:
    // 0x2eeb78: 0xc0cd508  jal         func_335420
label_2eeb7c:
    if (ctx->pc == 0x2EEB7Cu) {
        ctx->pc = 0x2EEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB78u;
        // 0x2eeb7c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB80u;
        goto label_2eeb80;
    }
    ctx->pc = 0x2EEB78u;
    SET_GPR_U32(ctx, 31, 0x2EEB80u);
    ctx->pc = 0x2EEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB78u;
    // 0x2eeb7c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2EEB78u, 0x2EEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB80u;
label_2eeb80:
    // 0x2eeb80: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2eeb80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2eeb84:
    // 0x2eeb84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eeb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb88:
    // 0x2eeb88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eeb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb8c:
    // 0x2eeb8c: 0xc0b6750  jal         func_2D9D40
label_2eeb90:
    if (ctx->pc == 0x2EEB90u) {
        ctx->pc = 0x2EEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB8Cu;
        // 0x2eeb90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB94u;
        goto label_2eeb94;
    }
    ctx->pc = 0x2EEB8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEB94u);
    ctx->pc = 0x2EEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB8Cu;
    // 0x2eeb90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2EEB8Cu, 0x2EEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB94u;
label_2eeb94:
    // 0x2eeb94: 0x54540029  bnel        $v0, $s4, . + 4 + (0x29 << 2)
label_2eeb98:
    if (ctx->pc == 0x2EEB98u) {
        ctx->pc = 0x2EEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB94u;
        // 0x2eeb98: 0x92430047  lbu         $v1, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB9Cu;
        goto label_2eeb9c;
    }
    ctx->pc = 0x2EEB94u;
    {
        const bool branch_taken_0x2eeb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2eeb94) {
            ctx->pc = 0x2EEB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEB94u;
            // 0x2eeb98: 0x92430047  lbu         $v1, 0x47($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC3Cu;
            goto label_2eec3c;
        }
    }
    ctx->pc = 0x2EEB9Cu;
label_2eeb9c:
    // 0x2eeb9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eeb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eeba0:
    // 0x2eeba0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2eeba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2eeba4:
    // 0x2eeba4: 0xc088878  jal         func_2221E0
label_2eeba8:
    if (ctx->pc == 0x2EEBA8u) {
        ctx->pc = 0x2EEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBA4u;
        // 0x2eeba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBACu;
        goto label_2eebac;
    }
    ctx->pc = 0x2EEBA4u;
    SET_GPR_U32(ctx, 31, 0x2EEBACu);
    ctx->pc = 0x2EEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBA4u;
    // 0x2eeba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2EEBA4u, 0x2EEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBACu;
label_2eebac:
    // 0x2eebac: 0x54540023  bnel        $v0, $s4, . + 4 + (0x23 << 2)
label_2eebb0:
    if (ctx->pc == 0x2EEBB0u) {
        ctx->pc = 0x2EEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBACu;
        // 0x2eebb0: 0x92430047  lbu         $v1, 0x47($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBB4u;
        goto label_2eebb4;
    }
    ctx->pc = 0x2EEBACu;
    {
        const bool branch_taken_0x2eebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2eebac) {
            ctx->pc = 0x2EEBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEBACu;
            // 0x2eebb0: 0x92430047  lbu         $v1, 0x47($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC3Cu;
            goto label_2eec3c;
        }
    }
    ctx->pc = 0x2EEBB4u;
label_2eebb4:
    // 0x2eebb4: 0xc08bfbc  jal         func_22FEF0
label_2eebb8:
    if (ctx->pc == 0x2EEBB8u) {
        ctx->pc = 0x2EEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB4u;
        // 0x2eebb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBBCu;
        goto label_2eebbc;
    }
    ctx->pc = 0x2EEBB4u;
    SET_GPR_U32(ctx, 31, 0x2EEBBCu);
    ctx->pc = 0x2EEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBB4u;
    // 0x2eebb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2EEBB4u, 0x2EEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBBCu;
label_2eebbc:
    // 0x2eebbc: 0xc0a367c  jal         func_28D9F0
label_2eebc0:
    if (ctx->pc == 0x2EEBC0u) {
        ctx->pc = 0x2EEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBBCu;
        // 0x2eebc0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBC4u;
        goto label_2eebc4;
    }
    ctx->pc = 0x2EEBBCu;
    SET_GPR_U32(ctx, 31, 0x2EEBC4u);
    ctx->pc = 0x2EEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBBCu;
    // 0x2eebc0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EEBBCu, 0x2EEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBC4u;
label_2eebc4:
    // 0x2eebc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eebc8:
    // 0x2eebc8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2eebcc:
    if (ctx->pc == 0x2EEBCCu) {
        ctx->pc = 0x2EEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBC8u;
        // 0x2eebcc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBD0u;
        goto label_2eebd0;
    }
    ctx->pc = 0x2EEBC8u;
    {
        const bool branch_taken_0x2eebc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBC8u;
        // 0x2eebcc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebc8) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEBD0u;
label_2eebd0:
    // 0x2eebd0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2eebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eebd4:
    // 0x2eebd4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2eebd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eebd8:
    // 0x2eebd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2eebd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2eebdc:
    // 0x2eebdc: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2eebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2eebe0:
    // 0x2eebe0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2eebe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2eebe4:
    // 0x2eebe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eebe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eebe8:
    // 0x2eebe8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2eebe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2eebec:
    // 0x2eebec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eebecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eebf0:
    // 0x2eebf0: 0x24090063  addiu       $t1, $zero, 0x63
    ctx->pc = 0x2eebf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2eebf4:
    // 0x2eebf4: 0xc0bee7a  jal         func_2FB9E8
label_2eebf8:
    if (ctx->pc == 0x2EEBF8u) {
        ctx->pc = 0x2EEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBF4u;
        // 0x2eebf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBFCu;
        goto label_2eebfc;
    }
    ctx->pc = 0x2EEBF4u;
    SET_GPR_U32(ctx, 31, 0x2EEBFCu);
    ctx->pc = 0x2EEBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBF4u;
    // 0x2eebf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2EEBF4u, 0x2EEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBFCu;
label_2eebfc:
    // 0x2eebfc: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2eebfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2eec00:
    // 0x2eec00: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2eec04:
    // 0x2eec04: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2eec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2eec08:
    // 0x2eec08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2eec08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2eec0c:
    // 0x2eec0c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2eec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2eec10:
    // 0x2eec10: 0xc0cd780  jal         func_335E00
label_2eec14:
    if (ctx->pc == 0x2EEC14u) {
        ctx->pc = 0x2EEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC10u;
        // 0x2eec14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC18u;
        goto label_2eec18;
    }
    ctx->pc = 0x2EEC10u;
    SET_GPR_U32(ctx, 31, 0x2EEC18u);
    ctx->pc = 0x2EEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC10u;
    // 0x2eec14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2EEC10u, 0x2EEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC18u;
label_2eec18:
    // 0x2eec18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2eec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eec1c:
    // 0x2eec1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2eec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2eec20:
    // 0x2eec20: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2eec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_2eec24:
    // 0x2eec24: 0xc0a2ab0  jal         func_28AAC0
label_2eec28:
    if (ctx->pc == 0x2EEC28u) {
        ctx->pc = 0x2EEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC24u;
        // 0x2eec28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC2Cu;
        goto label_2eec2c;
    }
    ctx->pc = 0x2EEC24u;
    SET_GPR_U32(ctx, 31, 0x2EEC2Cu);
    ctx->pc = 0x2EEC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC24u;
    // 0x2eec28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2EEC24u, 0x2EEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC2Cu;
label_2eec2c:
    // 0x2eec2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eec30:
    // 0x2eec30: 0xc0899aa  jal         func_2266A8
label_2eec34:
    if (ctx->pc == 0x2EEC34u) {
        ctx->pc = 0x2EEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC30u;
        // 0x2eec34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC38u;
        goto label_2eec38;
    }
    ctx->pc = 0x2EEC30u;
    SET_GPR_U32(ctx, 31, 0x2EEC38u);
    ctx->pc = 0x2EEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC30u;
    // 0x2eec34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2EEC30u, 0x2EEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC38u;
label_2eec38:
    // 0x2eec38: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x2eec38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_2eec3c:
    // 0x2eec3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eec40:
    // 0x2eec40: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2eec40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2eec44:
    // 0x2eec44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2eec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2eec48:
    // 0x2eec48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eec48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eec4c:
    // 0x2eec4c: 0x10000075  b           . + 4 + (0x75 << 2)
label_2eec50:
    if (ctx->pc == 0x2EEC50u) {
        ctx->pc = 0x2EEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC4Cu;
        // 0x2eec50: 0xa2430047  sb          $v1, 0x47($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC54u;
        goto label_2eec54;
    }
    ctx->pc = 0x2EEC4Cu;
    {
        const bool branch_taken_0x2eec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC4Cu;
        // 0x2eec50: 0xa2430047  sb          $v1, 0x47($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec4c) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EEC54u;
label_2eec54:
    // 0x2eec54: 0xc089bfc  jal         func_226FF0
label_2eec58:
    if (ctx->pc == 0x2EEC58u) {
        ctx->pc = 0x2EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC54u;
        // 0x2eec58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC5Cu;
        goto label_2eec5c;
    }
    ctx->pc = 0x2EEC54u;
    SET_GPR_U32(ctx, 31, 0x2EEC5Cu);
    ctx->pc = 0x2EEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC54u;
    // 0x2eec58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2EEC54u, 0x2EEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC5Cu;
label_2eec5c:
    // 0x2eec5c: 0xc0e57ce  jal         func_395F38
label_2eec60:
    if (ctx->pc == 0x2EEC60u) {
        ctx->pc = 0x2EEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC5Cu;
        // 0x2eec60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC64u;
        goto label_2eec64;
    }
    ctx->pc = 0x2EEC5Cu;
    SET_GPR_U32(ctx, 31, 0x2EEC64u);
    ctx->pc = 0x2EEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC5Cu;
    // 0x2eec60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2EEC5Cu, 0x2EEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC64u;
label_2eec64:
    // 0x2eec64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2eec64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eec68:
    // 0x2eec68: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_2eec6c:
    if (ctx->pc == 0x2EEC6Cu) {
        ctx->pc = 0x2EEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC68u;
        // 0x2eec6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC70u;
        goto label_2eec70;
    }
    ctx->pc = 0x2EEC68u;
    {
        const bool branch_taken_0x2eec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC68u;
        // 0x2eec6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec68) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EEC70u;
label_2eec70:
    // 0x2eec70: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2eec70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_2eec74:
    // 0x2eec74: 0xc0e44cc  jal         func_391330
label_2eec78:
    if (ctx->pc == 0x2EEC78u) {
        ctx->pc = 0x2EEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC74u;
        // 0x2eec78: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC7Cu;
        goto label_2eec7c;
    }
    ctx->pc = 0x2EEC74u;
    SET_GPR_U32(ctx, 31, 0x2EEC7Cu);
    ctx->pc = 0x2EEC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC74u;
    // 0x2eec78: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2EEC74u, 0x2EEC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC7Cu;
label_2eec7c:
    // 0x2eec7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2eec7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eec80:
    // 0x2eec80: 0x92420049  lbu         $v0, 0x49($s2)
    ctx->pc = 0x2eec80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 73)));
label_2eec84:
    // 0x2eec84: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2eec88:
    if (ctx->pc == 0x2EEC88u) {
        ctx->pc = 0x2EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC84u;
        // 0x2eec88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC8Cu;
        goto label_2eec8c;
    }
    ctx->pc = 0x2EEC84u;
    {
        const bool branch_taken_0x2eec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC84u;
        // 0x2eec88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec84) {
            ctx->pc = 0x2EED30u;
            goto label_2eed30;
        }
    }
    ctx->pc = 0x2EEC8Cu;
label_2eec8c:
    // 0x2eec8c: 0x80630086  lb          $v1, 0x86($v1)
    ctx->pc = 0x2eec8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 134)));
label_2eec90:
    // 0x2eec90: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_2eec94:
    if (ctx->pc == 0x2EEC94u) {
        ctx->pc = 0x2EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC90u;
        // 0x2eec94: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEC98u;
        goto label_2eec98;
    }
    ctx->pc = 0x2EEC90u;
    {
        const bool branch_taken_0x2eec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC90u;
        // 0x2eec94: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec90) {
            ctx->pc = 0x2EED30u;
            goto label_2eed30;
        }
    }
    ctx->pc = 0x2EEC98u;
label_2eec98:
    // 0x2eec98: 0x92450049  lbu         $a1, 0x49($s2)
    ctx->pc = 0x2eec98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 73)));
label_2eec9c:
    // 0x2eec9c: 0xc0cd526  jal         func_335498
label_2eeca0:
    if (ctx->pc == 0x2EECA0u) {
        ctx->pc = 0x2EECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC9Cu;
        // 0x2eeca0: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EECA4u;
        goto label_2eeca4;
    }
    ctx->pc = 0x2EEC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EECA4u);
    ctx->pc = 0x2EECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC9Cu;
    // 0x2eeca0: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2EEC9Cu, 0x2EECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EECA4u;
label_2eeca4:
    // 0x2eeca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2eeca8:
    // 0x2eeca8: 0x26500034  addiu       $s0, $s2, 0x34
    ctx->pc = 0x2eeca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_2eecac:
    // 0x2eecac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2eecacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2eecb0:
    // 0x2eecb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eecb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eecb4:
    // 0x2eecb4: 0xc0bb93c  jal         func_2EE4F0
label_2eecb8:
    if (ctx->pc == 0x2EECB8u) {
        ctx->pc = 0x2EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECB4u;
        // 0x2eecb8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EECBCu;
        goto label_2eecbc;
    }
    ctx->pc = 0x2EECB4u;
    SET_GPR_U32(ctx, 31, 0x2EECBCu);
    ctx->pc = 0x2EECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECB4u;
    // 0x2eecb8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F0u, 0x2EECB4u, 0x2EECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EECBCu;
label_2eecbc:
    // 0x2eecbc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2eecbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eecc0:
    // 0x2eecc0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2eecc4:
    if (ctx->pc == 0x2EECC4u) {
        ctx->pc = 0x2EECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECC0u;
        // 0x2eecc4: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EECC8u;
        goto label_2eecc8;
    }
    ctx->pc = 0x2EECC0u;
    {
        const bool branch_taken_0x2eecc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECC0u;
        // 0x2eecc4: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecc0) {
            ctx->pc = 0x2EECE4u;
            goto label_2eece4;
        }
    }
    ctx->pc = 0x2EECC8u;
label_2eecc8:
    // 0x2eecc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2eecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eeccc:
    // 0x2eeccc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2eecccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2eecd0:
    // 0x2eecd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2eecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2eecd4:
    // 0x2eecd4: 0x40f809  jalr        $v0
label_2eecd8:
    if (ctx->pc == 0x2EECD8u) {
        ctx->pc = 0x2EECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECD4u;
        // 0x2eecd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EECDCu;
        goto label_2eecdc;
    }
    ctx->pc = 0x2EECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EECDCu);
        ctx->pc = 0x2EECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECD4u;
        // 0x2eecd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EECD4u, 0x2EECDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EECDCu;
label_2eecdc:
    // 0x2eecdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2eece0:
    if (ctx->pc == 0x2EECE0u) {
        ctx->pc = 0x2EECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECDCu;
        // 0x2eece0: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EECE4u;
        goto label_2eece4;
    }
    ctx->pc = 0x2EECDCu;
    {
        const bool branch_taken_0x2eecdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECDCu;
        // 0x2eece0: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecdc) {
            ctx->pc = 0x2EECF0u;
            goto label_2eecf0;
        }
    }
    ctx->pc = 0x2EECE4u;
label_2eece4:
    // 0x2eece4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2eece8:
    // 0x2eece8: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2eece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eecec:
    // 0x2eecec: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x2eececu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_2eecf0:
    // 0x2eecf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eecf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eecf4:
    // 0x2eecf4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2eecf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2eecf8:
    // 0x2eecf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eecf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eecfc:
    // 0x2eecfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eecfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eed00:
    // 0x2eed00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2eed00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eed04:
    // 0x2eed04: 0xc0a3892  jal         func_28E248
label_2eed08:
    if (ctx->pc == 0x2EED08u) {
        ctx->pc = 0x2EED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED04u;
        // 0x2eed08: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED0Cu;
        goto label_2eed0c;
    }
    ctx->pc = 0x2EED04u;
    SET_GPR_U32(ctx, 31, 0x2EED0Cu);
    ctx->pc = 0x2EED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED04u;
    // 0x2eed08: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2EED04u, 0x2EED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED0Cu;
label_2eed0c:
    // 0x2eed0c: 0xc0a367c  jal         func_28D9F0
label_2eed10:
    if (ctx->pc == 0x2EED10u) {
        ctx->pc = 0x2EED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED0Cu;
        // 0x2eed10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED14u;
        goto label_2eed14;
    }
    ctx->pc = 0x2EED0Cu;
    SET_GPR_U32(ctx, 31, 0x2EED14u);
    ctx->pc = 0x2EED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED0Cu;
    // 0x2eed10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EED0Cu, 0x2EED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED14u;
label_2eed14:
    // 0x2eed14: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_2eed18:
    if (ctx->pc == 0x2EED18u) {
        ctx->pc = 0x2EED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED14u;
        // 0x2eed18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED1Cu;
        goto label_2eed1c;
    }
    ctx->pc = 0x2EED14u;
    {
        const bool branch_taken_0x2eed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED14u;
        // 0x2eed18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed14) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EED1Cu;
label_2eed1c:
    // 0x2eed1c: 0x96460044  lhu         $a2, 0x44($s2)
    ctx->pc = 0x2eed1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_2eed20:
    // 0x2eed20: 0xc0bebdc  jal         func_2FAF70
label_2eed24:
    if (ctx->pc == 0x2EED24u) {
        ctx->pc = 0x2EED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED20u;
        // 0x2eed24: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED28u;
        goto label_2eed28;
    }
    ctx->pc = 0x2EED20u;
    SET_GPR_U32(ctx, 31, 0x2EED28u);
    ctx->pc = 0x2EED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED20u;
    // 0x2eed24: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2EED20u, 0x2EED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED28u;
label_2eed28:
    // 0x2eed28: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2eed2c:
    if (ctx->pc == 0x2EED2Cu) {
        ctx->pc = 0x2EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED28u;
        // 0x2eed2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED30u;
        goto label_2eed30;
    }
    ctx->pc = 0x2EED28u;
    {
        const bool branch_taken_0x2eed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED28u;
        // 0x2eed2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed28) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EED30u;
label_2eed30:
    // 0x2eed30: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2eed30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2eed34:
    // 0x2eed34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eed38:
    // 0x2eed38: 0xc0a7c8c  jal         func_29F230
label_2eed3c:
    if (ctx->pc == 0x2EED3Cu) {
        ctx->pc = 0x2EED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED38u;
        // 0x2eed3c: 0x34a5bbf9  ori         $a1, $a1, 0xBBF9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48121);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED40u;
        goto label_2eed40;
    }
    ctx->pc = 0x2EED38u;
    SET_GPR_U32(ctx, 31, 0x2EED40u);
    ctx->pc = 0x2EED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED38u;
    // 0x2eed3c: 0x34a5bbf9  ori         $a1, $a1, 0xBBF9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48121);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2EED38u, 0x2EED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED40u;
label_2eed40:
    // 0x2eed40: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2eed44:
    if (ctx->pc == 0x2EED44u) {
        ctx->pc = 0x2EED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED40u;
        // 0x2eed44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED48u;
        goto label_2eed48;
    }
    ctx->pc = 0x2EED40u;
    {
        const bool branch_taken_0x2eed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED40u;
        // 0x2eed44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed40) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EED48u;
label_2eed48:
    // 0x2eed48: 0xc0bb93c  jal         func_2EE4F0
label_2eed4c:
    if (ctx->pc == 0x2EED4Cu) {
        ctx->pc = 0x2EED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED48u;
        // 0x2eed4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED50u;
        goto label_2eed50;
    }
    ctx->pc = 0x2EED48u;
    SET_GPR_U32(ctx, 31, 0x2EED50u);
    ctx->pc = 0x2EED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED48u;
    // 0x2eed4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F0u, 0x2EED48u, 0x2EED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED50u;
label_2eed50:
    // 0x2eed50: 0xc0a367c  jal         func_28D9F0
label_2eed54:
    if (ctx->pc == 0x2EED54u) {
        ctx->pc = 0x2EED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED50u;
        // 0x2eed54: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED58u;
        goto label_2eed58;
    }
    ctx->pc = 0x2EED50u;
    SET_GPR_U32(ctx, 31, 0x2EED58u);
    ctx->pc = 0x2EED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED50u;
    // 0x2eed54: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EED50u, 0x2EED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED58u;
label_2eed58:
    // 0x2eed58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eed5c:
    if (ctx->pc == 0x2EED5Cu) {
        ctx->pc = 0x2EED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED58u;
        // 0x2eed5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED60u;
        goto label_2eed60;
    }
    ctx->pc = 0x2EED58u;
    {
        const bool branch_taken_0x2eed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED58u;
        // 0x2eed5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed58) {
            ctx->pc = 0x2EED70u;
            goto label_2eed70;
        }
    }
    ctx->pc = 0x2EED60u;
label_2eed60:
    // 0x2eed60: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2eed60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eed64:
    // 0x2eed64: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2eed64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2eed68:
    // 0x2eed68: 0xc0bebac  jal         func_2FAEB0
label_2eed6c:
    if (ctx->pc == 0x2EED6Cu) {
        ctx->pc = 0x2EED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED68u;
        // 0x2eed6c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED70u;
        goto label_2eed70;
    }
    ctx->pc = 0x2EED68u;
    SET_GPR_U32(ctx, 31, 0x2EED70u);
    ctx->pc = 0x2EED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED68u;
    // 0x2eed6c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2EED68u, 0x2EED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED70u;
label_2eed70:
    // 0x2eed70: 0xc0a367c  jal         func_28D9F0
label_2eed74:
    if (ctx->pc == 0x2EED74u) {
        ctx->pc = 0x2EED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED70u;
        // 0x2eed74: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED78u;
        goto label_2eed78;
    }
    ctx->pc = 0x2EED70u;
    SET_GPR_U32(ctx, 31, 0x2EED78u);
    ctx->pc = 0x2EED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED70u;
    // 0x2eed74: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EED70u, 0x2EED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED78u;
label_2eed78:
    // 0x2eed78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2eed7c:
    if (ctx->pc == 0x2EED7Cu) {
        ctx->pc = 0x2EED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED78u;
        // 0x2eed7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED80u;
        goto label_2eed80;
    }
    ctx->pc = 0x2EED78u;
    {
        const bool branch_taken_0x2eed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED78u;
        // 0x2eed7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed78) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EED80u;
label_2eed80:
    // 0x2eed80: 0x96460044  lhu         $a2, 0x44($s2)
    ctx->pc = 0x2eed80u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_2eed84:
    // 0x2eed84: 0xc0bebdc  jal         func_2FAF70
label_2eed88:
    if (ctx->pc == 0x2EED88u) {
        ctx->pc = 0x2EED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED84u;
        // 0x2eed88: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED8Cu;
        goto label_2eed8c;
    }
    ctx->pc = 0x2EED84u;
    SET_GPR_U32(ctx, 31, 0x2EED8Cu);
    ctx->pc = 0x2EED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED84u;
    // 0x2eed88: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2EED84u, 0x2EED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED8Cu;
label_2eed8c:
    // 0x2eed8c: 0x10000025  b           . + 4 + (0x25 << 2)
label_2eed90:
    if (ctx->pc == 0x2EED90u) {
        ctx->pc = 0x2EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED8Cu;
        // 0x2eed90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED94u;
        goto label_2eed94;
    }
    ctx->pc = 0x2EED8Cu;
    {
        const bool branch_taken_0x2eed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED8Cu;
        // 0x2eed90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed8c) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EED94u;
label_2eed94:
    // 0x2eed94: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_2eed98:
    if (ctx->pc == 0x2EED98u) {
        ctx->pc = 0x2EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED94u;
        // 0x2eed98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED9Cu;
        goto label_2eed9c;
    }
    ctx->pc = 0x2EED94u;
    {
        const bool branch_taken_0x2eed94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED94u;
        // 0x2eed98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed94) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EED9Cu;
label_2eed9c:
    // 0x2eed9c: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2eed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2eeda0:
    // 0x2eeda0: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2eeda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2eeda4:
    // 0x2eeda4: 0xc043d5e  jal         func_10F578
label_2eeda8:
    if (ctx->pc == 0x2EEDA8u) {
        ctx->pc = 0x2EEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDA4u;
        // 0x2eeda8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDACu;
        goto label_2eedac;
    }
    ctx->pc = 0x2EEDA4u;
    SET_GPR_U32(ctx, 31, 0x2EEDACu);
    ctx->pc = 0x2EEDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEDA4u;
    // 0x2eeda8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2EEDA4u, 0x2EEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEDACu;
label_2eedac:
    // 0x2eedac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2eedacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eedb0:
    // 0x2eedb0: 0x1054001c  beq         $v0, $s4, . + 4 + (0x1C << 2)
label_2eedb4:
    if (ctx->pc == 0x2EEDB4u) {
        ctx->pc = 0x2EEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDB0u;
        // 0x2eedb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDB8u;
        goto label_2eedb8;
    }
    ctx->pc = 0x2EEDB0u;
    {
        const bool branch_taken_0x2eedb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDB0u;
        // 0x2eedb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedb0) {
            ctx->pc = 0x2EEE24u;
            goto label_2eee24;
        }
    }
    ctx->pc = 0x2EEDB8u;
label_2eedb8:
    // 0x2eedb8: 0xc088e88  jal         func_223A20
label_2eedbc:
    if (ctx->pc == 0x2EEDBCu) {
        ctx->pc = 0x2EEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDB8u;
        // 0x2eedbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDC0u;
        goto label_2eedc0;
    }
    ctx->pc = 0x2EEDB8u;
    SET_GPR_U32(ctx, 31, 0x2EEDC0u);
    ctx->pc = 0x2EEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEDB8u;
    // 0x2eedbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2EEDB8u, 0x2EEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEDC0u;
label_2eedc0:
    // 0x2eedc0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2eedc4:
    if (ctx->pc == 0x2EEDC4u) {
        ctx->pc = 0x2EEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDC0u;
        // 0x2eedc4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDC8u;
        goto label_2eedc8;
    }
    ctx->pc = 0x2EEDC0u;
    {
        const bool branch_taken_0x2eedc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDC0u;
        // 0x2eedc4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedc0) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EEDC8u;
label_2eedc8:
    // 0x2eedc8: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2eedc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2eedcc:
    // 0x2eedcc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2eedccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2eedd0:
    // 0x2eedd0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2eedd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2eedd4:
    // 0x2eedd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eedd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eedd8:
    // 0x2eedd8: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2eedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2eeddc:
    // 0x2eeddc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2eede0:
    // 0x2eede0: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2eede0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2eede4:
    // 0x2eede4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2eede4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2eede8:
    // 0x2eede8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2eede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2eedec:
    // 0x2eedec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2eedecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2eedf0:
    // 0x2eedf0: 0xc1067b8  jal         func_419EE0
label_2eedf4:
    if (ctx->pc == 0x2EEDF4u) {
        ctx->pc = 0x2EEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDF0u;
        // 0x2eedf4: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDF8u;
        goto label_2eedf8;
    }
    ctx->pc = 0x2EEDF0u;
    SET_GPR_U32(ctx, 31, 0x2EEDF8u);
    ctx->pc = 0x2EEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEDF0u;
    // 0x2eedf4: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2EEDF0u, 0x2EEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEDF8u;
label_2eedf8:
    // 0x2eedf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eedf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eedfc:
    // 0x2eedfc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2eee00:
    if (ctx->pc == 0x2EEE00u) {
        ctx->pc = 0x2EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDFCu;
        // 0x2eee00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE04u;
        goto label_2eee04;
    }
    ctx->pc = 0x2EEDFCu;
    {
        const bool branch_taken_0x2eedfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDFCu;
        // 0x2eee00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedfc) {
            ctx->pc = 0x2EEE0Cu;
            goto label_2eee0c;
        }
    }
    ctx->pc = 0x2EEE04u;
label_2eee04:
    // 0x2eee04: 0xc0bb93c  jal         func_2EE4F0
label_2eee08:
    if (ctx->pc == 0x2EEE08u) {
        ctx->pc = 0x2EEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE04u;
        // 0x2eee08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE0Cu;
        goto label_2eee0c;
    }
    ctx->pc = 0x2EEE04u;
    SET_GPR_U32(ctx, 31, 0x2EEE0Cu);
    ctx->pc = 0x2EEE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE04u;
    // 0x2eee08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F0u, 0x2EEE04u, 0x2EEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE0Cu;
label_2eee0c:
    // 0x2eee0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eee0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eee10:
    // 0x2eee10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eee14:
    // 0x2eee14: 0xc0bb8f4  jal         func_2EE3D0
label_2eee18:
    if (ctx->pc == 0x2EEE18u) {
        ctx->pc = 0x2EEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE14u;
        // 0x2eee18: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE1Cu;
        goto label_2eee1c;
    }
    ctx->pc = 0x2EEE14u;
    SET_GPR_U32(ctx, 31, 0x2EEE1Cu);
    ctx->pc = 0x2EEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE14u;
    // 0x2eee18: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE3D0u, 0x2EEE14u, 0x2EEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE1Cu;
label_2eee1c:
    // 0x2eee1c: 0xae510040  sw          $s1, 0x40($s2)
    ctx->pc = 0x2eee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
label_2eee20:
    // 0x2eee20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eee20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eee24:
    // 0x2eee24: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2eee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2eee28:
    // 0x2eee28: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2eee28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2eee2c:
    // 0x2eee2c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2eee2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2eee30:
    // 0x2eee30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2eee30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2eee34:
    // 0x2eee34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eee34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2eee38:
    // 0x2eee38: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2eee38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2eee3c:
    // 0x2eee3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2eee40:
    // 0x2eee40: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2eee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2eee44:
    // 0x2eee44: 0x3e00008  jr          $ra
label_2eee48:
    if (ctx->pc == 0x2EEE48u) {
        ctx->pc = 0x2EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE44u;
        // 0x2eee48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE4Cu;
        goto label_2eee4c;
    }
    ctx->pc = 0x2EEE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE44u;
        // 0x2eee48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE4Cu;
label_2eee4c:
    // 0x2eee4c: 0x0  nop
    ctx->pc = 0x2eee4cu;
    // NOP
    ctx->pc = 0x2eee50u;
}
