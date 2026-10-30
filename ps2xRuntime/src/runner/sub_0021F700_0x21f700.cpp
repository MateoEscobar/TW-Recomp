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

// Function: sub_0021F700
// Address: 0x21f700 - 0x220360
void sub_0021F700_0x21f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F700_0x21f700");
#endif

    switch (ctx->pc) {
        case 0x21f700u: goto label_21f700;
        case 0x21f704u: goto label_21f704;
        case 0x21f708u: goto label_21f708;
        case 0x21f70cu: goto label_21f70c;
        case 0x21f710u: goto label_21f710;
        case 0x21f714u: goto label_21f714;
        case 0x21f718u: goto label_21f718;
        case 0x21f71cu: goto label_21f71c;
        case 0x21f720u: goto label_21f720;
        case 0x21f724u: goto label_21f724;
        case 0x21f728u: goto label_21f728;
        case 0x21f72cu: goto label_21f72c;
        case 0x21f730u: goto label_21f730;
        case 0x21f734u: goto label_21f734;
        case 0x21f738u: goto label_21f738;
        case 0x21f73cu: goto label_21f73c;
        case 0x21f740u: goto label_21f740;
        case 0x21f744u: goto label_21f744;
        case 0x21f748u: goto label_21f748;
        case 0x21f74cu: goto label_21f74c;
        case 0x21f750u: goto label_21f750;
        case 0x21f754u: goto label_21f754;
        case 0x21f758u: goto label_21f758;
        case 0x21f75cu: goto label_21f75c;
        case 0x21f760u: goto label_21f760;
        case 0x21f764u: goto label_21f764;
        case 0x21f768u: goto label_21f768;
        case 0x21f76cu: goto label_21f76c;
        case 0x21f770u: goto label_21f770;
        case 0x21f774u: goto label_21f774;
        case 0x21f778u: goto label_21f778;
        case 0x21f77cu: goto label_21f77c;
        case 0x21f780u: goto label_21f780;
        case 0x21f784u: goto label_21f784;
        case 0x21f788u: goto label_21f788;
        case 0x21f78cu: goto label_21f78c;
        case 0x21f790u: goto label_21f790;
        case 0x21f794u: goto label_21f794;
        case 0x21f798u: goto label_21f798;
        case 0x21f79cu: goto label_21f79c;
        case 0x21f7a0u: goto label_21f7a0;
        case 0x21f7a4u: goto label_21f7a4;
        case 0x21f7a8u: goto label_21f7a8;
        case 0x21f7acu: goto label_21f7ac;
        case 0x21f7b0u: goto label_21f7b0;
        case 0x21f7b4u: goto label_21f7b4;
        case 0x21f7b8u: goto label_21f7b8;
        case 0x21f7bcu: goto label_21f7bc;
        case 0x21f7c0u: goto label_21f7c0;
        case 0x21f7c4u: goto label_21f7c4;
        case 0x21f7c8u: goto label_21f7c8;
        case 0x21f7ccu: goto label_21f7cc;
        case 0x21f7d0u: goto label_21f7d0;
        case 0x21f7d4u: goto label_21f7d4;
        case 0x21f7d8u: goto label_21f7d8;
        case 0x21f7dcu: goto label_21f7dc;
        case 0x21f7e0u: goto label_21f7e0;
        case 0x21f7e4u: goto label_21f7e4;
        case 0x21f7e8u: goto label_21f7e8;
        case 0x21f7ecu: goto label_21f7ec;
        case 0x21f7f0u: goto label_21f7f0;
        case 0x21f7f4u: goto label_21f7f4;
        case 0x21f7f8u: goto label_21f7f8;
        case 0x21f7fcu: goto label_21f7fc;
        case 0x21f800u: goto label_21f800;
        case 0x21f804u: goto label_21f804;
        case 0x21f808u: goto label_21f808;
        case 0x21f80cu: goto label_21f80c;
        case 0x21f810u: goto label_21f810;
        case 0x21f814u: goto label_21f814;
        case 0x21f818u: goto label_21f818;
        case 0x21f81cu: goto label_21f81c;
        case 0x21f820u: goto label_21f820;
        case 0x21f824u: goto label_21f824;
        case 0x21f828u: goto label_21f828;
        case 0x21f82cu: goto label_21f82c;
        case 0x21f830u: goto label_21f830;
        case 0x21f834u: goto label_21f834;
        case 0x21f838u: goto label_21f838;
        case 0x21f83cu: goto label_21f83c;
        case 0x21f840u: goto label_21f840;
        case 0x21f844u: goto label_21f844;
        case 0x21f848u: goto label_21f848;
        case 0x21f84cu: goto label_21f84c;
        case 0x21f850u: goto label_21f850;
        case 0x21f854u: goto label_21f854;
        case 0x21f858u: goto label_21f858;
        case 0x21f85cu: goto label_21f85c;
        case 0x21f860u: goto label_21f860;
        case 0x21f864u: goto label_21f864;
        case 0x21f868u: goto label_21f868;
        case 0x21f86cu: goto label_21f86c;
        case 0x21f870u: goto label_21f870;
        case 0x21f874u: goto label_21f874;
        case 0x21f878u: goto label_21f878;
        case 0x21f87cu: goto label_21f87c;
        case 0x21f880u: goto label_21f880;
        case 0x21f884u: goto label_21f884;
        case 0x21f888u: goto label_21f888;
        case 0x21f88cu: goto label_21f88c;
        case 0x21f890u: goto label_21f890;
        case 0x21f894u: goto label_21f894;
        case 0x21f898u: goto label_21f898;
        case 0x21f89cu: goto label_21f89c;
        case 0x21f8a0u: goto label_21f8a0;
        case 0x21f8a4u: goto label_21f8a4;
        case 0x21f8a8u: goto label_21f8a8;
        case 0x21f8acu: goto label_21f8ac;
        case 0x21f8b0u: goto label_21f8b0;
        case 0x21f8b4u: goto label_21f8b4;
        case 0x21f8b8u: goto label_21f8b8;
        case 0x21f8bcu: goto label_21f8bc;
        case 0x21f8c0u: goto label_21f8c0;
        case 0x21f8c4u: goto label_21f8c4;
        case 0x21f8c8u: goto label_21f8c8;
        case 0x21f8ccu: goto label_21f8cc;
        case 0x21f8d0u: goto label_21f8d0;
        case 0x21f8d4u: goto label_21f8d4;
        case 0x21f8d8u: goto label_21f8d8;
        case 0x21f8dcu: goto label_21f8dc;
        case 0x21f8e0u: goto label_21f8e0;
        case 0x21f8e4u: goto label_21f8e4;
        case 0x21f8e8u: goto label_21f8e8;
        case 0x21f8ecu: goto label_21f8ec;
        case 0x21f8f0u: goto label_21f8f0;
        case 0x21f8f4u: goto label_21f8f4;
        case 0x21f8f8u: goto label_21f8f8;
        case 0x21f8fcu: goto label_21f8fc;
        case 0x21f900u: goto label_21f900;
        case 0x21f904u: goto label_21f904;
        case 0x21f908u: goto label_21f908;
        case 0x21f90cu: goto label_21f90c;
        case 0x21f910u: goto label_21f910;
        case 0x21f914u: goto label_21f914;
        case 0x21f918u: goto label_21f918;
        case 0x21f91cu: goto label_21f91c;
        case 0x21f920u: goto label_21f920;
        case 0x21f924u: goto label_21f924;
        case 0x21f928u: goto label_21f928;
        case 0x21f92cu: goto label_21f92c;
        case 0x21f930u: goto label_21f930;
        case 0x21f934u: goto label_21f934;
        case 0x21f938u: goto label_21f938;
        case 0x21f93cu: goto label_21f93c;
        case 0x21f940u: goto label_21f940;
        case 0x21f944u: goto label_21f944;
        case 0x21f948u: goto label_21f948;
        case 0x21f94cu: goto label_21f94c;
        case 0x21f950u: goto label_21f950;
        case 0x21f954u: goto label_21f954;
        case 0x21f958u: goto label_21f958;
        case 0x21f95cu: goto label_21f95c;
        case 0x21f960u: goto label_21f960;
        case 0x21f964u: goto label_21f964;
        case 0x21f968u: goto label_21f968;
        case 0x21f96cu: goto label_21f96c;
        case 0x21f970u: goto label_21f970;
        case 0x21f974u: goto label_21f974;
        case 0x21f978u: goto label_21f978;
        case 0x21f97cu: goto label_21f97c;
        case 0x21f980u: goto label_21f980;
        case 0x21f984u: goto label_21f984;
        case 0x21f988u: goto label_21f988;
        case 0x21f98cu: goto label_21f98c;
        case 0x21f990u: goto label_21f990;
        case 0x21f994u: goto label_21f994;
        case 0x21f998u: goto label_21f998;
        case 0x21f99cu: goto label_21f99c;
        case 0x21f9a0u: goto label_21f9a0;
        case 0x21f9a4u: goto label_21f9a4;
        case 0x21f9a8u: goto label_21f9a8;
        case 0x21f9acu: goto label_21f9ac;
        case 0x21f9b0u: goto label_21f9b0;
        case 0x21f9b4u: goto label_21f9b4;
        case 0x21f9b8u: goto label_21f9b8;
        case 0x21f9bcu: goto label_21f9bc;
        case 0x21f9c0u: goto label_21f9c0;
        case 0x21f9c4u: goto label_21f9c4;
        case 0x21f9c8u: goto label_21f9c8;
        case 0x21f9ccu: goto label_21f9cc;
        case 0x21f9d0u: goto label_21f9d0;
        case 0x21f9d4u: goto label_21f9d4;
        case 0x21f9d8u: goto label_21f9d8;
        case 0x21f9dcu: goto label_21f9dc;
        case 0x21f9e0u: goto label_21f9e0;
        case 0x21f9e4u: goto label_21f9e4;
        case 0x21f9e8u: goto label_21f9e8;
        case 0x21f9ecu: goto label_21f9ec;
        case 0x21f9f0u: goto label_21f9f0;
        case 0x21f9f4u: goto label_21f9f4;
        case 0x21f9f8u: goto label_21f9f8;
        case 0x21f9fcu: goto label_21f9fc;
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa04u: goto label_21fa04;
        case 0x21fa08u: goto label_21fa08;
        case 0x21fa0cu: goto label_21fa0c;
        case 0x21fa10u: goto label_21fa10;
        case 0x21fa14u: goto label_21fa14;
        case 0x21fa18u: goto label_21fa18;
        case 0x21fa1cu: goto label_21fa1c;
        case 0x21fa20u: goto label_21fa20;
        case 0x21fa24u: goto label_21fa24;
        case 0x21fa28u: goto label_21fa28;
        case 0x21fa2cu: goto label_21fa2c;
        case 0x21fa30u: goto label_21fa30;
        case 0x21fa34u: goto label_21fa34;
        case 0x21fa38u: goto label_21fa38;
        case 0x21fa3cu: goto label_21fa3c;
        case 0x21fa40u: goto label_21fa40;
        case 0x21fa44u: goto label_21fa44;
        case 0x21fa48u: goto label_21fa48;
        case 0x21fa4cu: goto label_21fa4c;
        case 0x21fa50u: goto label_21fa50;
        case 0x21fa54u: goto label_21fa54;
        case 0x21fa58u: goto label_21fa58;
        case 0x21fa5cu: goto label_21fa5c;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa64u: goto label_21fa64;
        case 0x21fa68u: goto label_21fa68;
        case 0x21fa6cu: goto label_21fa6c;
        case 0x21fa70u: goto label_21fa70;
        case 0x21fa74u: goto label_21fa74;
        case 0x21fa78u: goto label_21fa78;
        case 0x21fa7cu: goto label_21fa7c;
        case 0x21fa80u: goto label_21fa80;
        case 0x21fa84u: goto label_21fa84;
        case 0x21fa88u: goto label_21fa88;
        case 0x21fa8cu: goto label_21fa8c;
        case 0x21fa90u: goto label_21fa90;
        case 0x21fa94u: goto label_21fa94;
        case 0x21fa98u: goto label_21fa98;
        case 0x21fa9cu: goto label_21fa9c;
        case 0x21faa0u: goto label_21faa0;
        case 0x21faa4u: goto label_21faa4;
        case 0x21faa8u: goto label_21faa8;
        case 0x21faacu: goto label_21faac;
        case 0x21fab0u: goto label_21fab0;
        case 0x21fab4u: goto label_21fab4;
        case 0x21fab8u: goto label_21fab8;
        case 0x21fabcu: goto label_21fabc;
        case 0x21fac0u: goto label_21fac0;
        case 0x21fac4u: goto label_21fac4;
        case 0x21fac8u: goto label_21fac8;
        case 0x21faccu: goto label_21facc;
        case 0x21fad0u: goto label_21fad0;
        case 0x21fad4u: goto label_21fad4;
        case 0x21fad8u: goto label_21fad8;
        case 0x21fadcu: goto label_21fadc;
        case 0x21fae0u: goto label_21fae0;
        case 0x21fae4u: goto label_21fae4;
        case 0x21fae8u: goto label_21fae8;
        case 0x21faecu: goto label_21faec;
        case 0x21faf0u: goto label_21faf0;
        case 0x21faf4u: goto label_21faf4;
        case 0x21faf8u: goto label_21faf8;
        case 0x21fafcu: goto label_21fafc;
        case 0x21fb00u: goto label_21fb00;
        case 0x21fb04u: goto label_21fb04;
        case 0x21fb08u: goto label_21fb08;
        case 0x21fb0cu: goto label_21fb0c;
        case 0x21fb10u: goto label_21fb10;
        case 0x21fb14u: goto label_21fb14;
        case 0x21fb18u: goto label_21fb18;
        case 0x21fb1cu: goto label_21fb1c;
        case 0x21fb20u: goto label_21fb20;
        case 0x21fb24u: goto label_21fb24;
        case 0x21fb28u: goto label_21fb28;
        case 0x21fb2cu: goto label_21fb2c;
        case 0x21fb30u: goto label_21fb30;
        case 0x21fb34u: goto label_21fb34;
        case 0x21fb38u: goto label_21fb38;
        case 0x21fb3cu: goto label_21fb3c;
        case 0x21fb40u: goto label_21fb40;
        case 0x21fb44u: goto label_21fb44;
        case 0x21fb48u: goto label_21fb48;
        case 0x21fb4cu: goto label_21fb4c;
        case 0x21fb50u: goto label_21fb50;
        case 0x21fb54u: goto label_21fb54;
        case 0x21fb58u: goto label_21fb58;
        case 0x21fb5cu: goto label_21fb5c;
        case 0x21fb60u: goto label_21fb60;
        case 0x21fb64u: goto label_21fb64;
        case 0x21fb68u: goto label_21fb68;
        case 0x21fb6cu: goto label_21fb6c;
        case 0x21fb70u: goto label_21fb70;
        case 0x21fb74u: goto label_21fb74;
        case 0x21fb78u: goto label_21fb78;
        case 0x21fb7cu: goto label_21fb7c;
        case 0x21fb80u: goto label_21fb80;
        case 0x21fb84u: goto label_21fb84;
        case 0x21fb88u: goto label_21fb88;
        case 0x21fb8cu: goto label_21fb8c;
        case 0x21fb90u: goto label_21fb90;
        case 0x21fb94u: goto label_21fb94;
        case 0x21fb98u: goto label_21fb98;
        case 0x21fb9cu: goto label_21fb9c;
        case 0x21fba0u: goto label_21fba0;
        case 0x21fba4u: goto label_21fba4;
        case 0x21fba8u: goto label_21fba8;
        case 0x21fbacu: goto label_21fbac;
        case 0x21fbb0u: goto label_21fbb0;
        case 0x21fbb4u: goto label_21fbb4;
        case 0x21fbb8u: goto label_21fbb8;
        case 0x21fbbcu: goto label_21fbbc;
        case 0x21fbc0u: goto label_21fbc0;
        case 0x21fbc4u: goto label_21fbc4;
        case 0x21fbc8u: goto label_21fbc8;
        case 0x21fbccu: goto label_21fbcc;
        case 0x21fbd0u: goto label_21fbd0;
        case 0x21fbd4u: goto label_21fbd4;
        case 0x21fbd8u: goto label_21fbd8;
        case 0x21fbdcu: goto label_21fbdc;
        case 0x21fbe0u: goto label_21fbe0;
        case 0x21fbe4u: goto label_21fbe4;
        case 0x21fbe8u: goto label_21fbe8;
        case 0x21fbecu: goto label_21fbec;
        case 0x21fbf0u: goto label_21fbf0;
        case 0x21fbf4u: goto label_21fbf4;
        case 0x21fbf8u: goto label_21fbf8;
        case 0x21fbfcu: goto label_21fbfc;
        case 0x21fc00u: goto label_21fc00;
        case 0x21fc04u: goto label_21fc04;
        case 0x21fc08u: goto label_21fc08;
        case 0x21fc0cu: goto label_21fc0c;
        case 0x21fc10u: goto label_21fc10;
        case 0x21fc14u: goto label_21fc14;
        case 0x21fc18u: goto label_21fc18;
        case 0x21fc1cu: goto label_21fc1c;
        case 0x21fc20u: goto label_21fc20;
        case 0x21fc24u: goto label_21fc24;
        case 0x21fc28u: goto label_21fc28;
        case 0x21fc2cu: goto label_21fc2c;
        case 0x21fc30u: goto label_21fc30;
        case 0x21fc34u: goto label_21fc34;
        case 0x21fc38u: goto label_21fc38;
        case 0x21fc3cu: goto label_21fc3c;
        case 0x21fc40u: goto label_21fc40;
        case 0x21fc44u: goto label_21fc44;
        case 0x21fc48u: goto label_21fc48;
        case 0x21fc4cu: goto label_21fc4c;
        case 0x21fc50u: goto label_21fc50;
        case 0x21fc54u: goto label_21fc54;
        case 0x21fc58u: goto label_21fc58;
        case 0x21fc5cu: goto label_21fc5c;
        case 0x21fc60u: goto label_21fc60;
        case 0x21fc64u: goto label_21fc64;
        case 0x21fc68u: goto label_21fc68;
        case 0x21fc6cu: goto label_21fc6c;
        case 0x21fc70u: goto label_21fc70;
        case 0x21fc74u: goto label_21fc74;
        case 0x21fc78u: goto label_21fc78;
        case 0x21fc7cu: goto label_21fc7c;
        case 0x21fc80u: goto label_21fc80;
        case 0x21fc84u: goto label_21fc84;
        case 0x21fc88u: goto label_21fc88;
        case 0x21fc8cu: goto label_21fc8c;
        case 0x21fc90u: goto label_21fc90;
        case 0x21fc94u: goto label_21fc94;
        case 0x21fc98u: goto label_21fc98;
        case 0x21fc9cu: goto label_21fc9c;
        case 0x21fca0u: goto label_21fca0;
        case 0x21fca4u: goto label_21fca4;
        case 0x21fca8u: goto label_21fca8;
        case 0x21fcacu: goto label_21fcac;
        case 0x21fcb0u: goto label_21fcb0;
        case 0x21fcb4u: goto label_21fcb4;
        case 0x21fcb8u: goto label_21fcb8;
        case 0x21fcbcu: goto label_21fcbc;
        case 0x21fcc0u: goto label_21fcc0;
        case 0x21fcc4u: goto label_21fcc4;
        case 0x21fcc8u: goto label_21fcc8;
        case 0x21fcccu: goto label_21fccc;
        case 0x21fcd0u: goto label_21fcd0;
        case 0x21fcd4u: goto label_21fcd4;
        case 0x21fcd8u: goto label_21fcd8;
        case 0x21fcdcu: goto label_21fcdc;
        case 0x21fce0u: goto label_21fce0;
        case 0x21fce4u: goto label_21fce4;
        case 0x21fce8u: goto label_21fce8;
        case 0x21fcecu: goto label_21fcec;
        case 0x21fcf0u: goto label_21fcf0;
        case 0x21fcf4u: goto label_21fcf4;
        case 0x21fcf8u: goto label_21fcf8;
        case 0x21fcfcu: goto label_21fcfc;
        case 0x21fd00u: goto label_21fd00;
        case 0x21fd04u: goto label_21fd04;
        case 0x21fd08u: goto label_21fd08;
        case 0x21fd0cu: goto label_21fd0c;
        case 0x21fd10u: goto label_21fd10;
        case 0x21fd14u: goto label_21fd14;
        case 0x21fd18u: goto label_21fd18;
        case 0x21fd1cu: goto label_21fd1c;
        case 0x21fd20u: goto label_21fd20;
        case 0x21fd24u: goto label_21fd24;
        case 0x21fd28u: goto label_21fd28;
        case 0x21fd2cu: goto label_21fd2c;
        case 0x21fd30u: goto label_21fd30;
        case 0x21fd34u: goto label_21fd34;
        case 0x21fd38u: goto label_21fd38;
        case 0x21fd3cu: goto label_21fd3c;
        case 0x21fd40u: goto label_21fd40;
        case 0x21fd44u: goto label_21fd44;
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd4cu: goto label_21fd4c;
        case 0x21fd50u: goto label_21fd50;
        case 0x21fd54u: goto label_21fd54;
        case 0x21fd58u: goto label_21fd58;
        case 0x21fd5cu: goto label_21fd5c;
        case 0x21fd60u: goto label_21fd60;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd68u: goto label_21fd68;
        case 0x21fd6cu: goto label_21fd6c;
        case 0x21fd70u: goto label_21fd70;
        case 0x21fd74u: goto label_21fd74;
        case 0x21fd78u: goto label_21fd78;
        case 0x21fd7cu: goto label_21fd7c;
        case 0x21fd80u: goto label_21fd80;
        case 0x21fd84u: goto label_21fd84;
        case 0x21fd88u: goto label_21fd88;
        case 0x21fd8cu: goto label_21fd8c;
        case 0x21fd90u: goto label_21fd90;
        case 0x21fd94u: goto label_21fd94;
        case 0x21fd98u: goto label_21fd98;
        case 0x21fd9cu: goto label_21fd9c;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fda4u: goto label_21fda4;
        case 0x21fda8u: goto label_21fda8;
        case 0x21fdacu: goto label_21fdac;
        case 0x21fdb0u: goto label_21fdb0;
        case 0x21fdb4u: goto label_21fdb4;
        case 0x21fdb8u: goto label_21fdb8;
        case 0x21fdbcu: goto label_21fdbc;
        case 0x21fdc0u: goto label_21fdc0;
        case 0x21fdc4u: goto label_21fdc4;
        case 0x21fdc8u: goto label_21fdc8;
        case 0x21fdccu: goto label_21fdcc;
        case 0x21fdd0u: goto label_21fdd0;
        case 0x21fdd4u: goto label_21fdd4;
        case 0x21fdd8u: goto label_21fdd8;
        case 0x21fddcu: goto label_21fddc;
        case 0x21fde0u: goto label_21fde0;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fde8u: goto label_21fde8;
        case 0x21fdecu: goto label_21fdec;
        case 0x21fdf0u: goto label_21fdf0;
        case 0x21fdf4u: goto label_21fdf4;
        case 0x21fdf8u: goto label_21fdf8;
        case 0x21fdfcu: goto label_21fdfc;
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe04u: goto label_21fe04;
        case 0x21fe08u: goto label_21fe08;
        case 0x21fe0cu: goto label_21fe0c;
        case 0x21fe10u: goto label_21fe10;
        case 0x21fe14u: goto label_21fe14;
        case 0x21fe18u: goto label_21fe18;
        case 0x21fe1cu: goto label_21fe1c;
        case 0x21fe20u: goto label_21fe20;
        case 0x21fe24u: goto label_21fe24;
        case 0x21fe28u: goto label_21fe28;
        case 0x21fe2cu: goto label_21fe2c;
        case 0x21fe30u: goto label_21fe30;
        case 0x21fe34u: goto label_21fe34;
        case 0x21fe38u: goto label_21fe38;
        case 0x21fe3cu: goto label_21fe3c;
        case 0x21fe40u: goto label_21fe40;
        case 0x21fe44u: goto label_21fe44;
        case 0x21fe48u: goto label_21fe48;
        case 0x21fe4cu: goto label_21fe4c;
        case 0x21fe50u: goto label_21fe50;
        case 0x21fe54u: goto label_21fe54;
        case 0x21fe58u: goto label_21fe58;
        case 0x21fe5cu: goto label_21fe5c;
        case 0x21fe60u: goto label_21fe60;
        case 0x21fe64u: goto label_21fe64;
        case 0x21fe68u: goto label_21fe68;
        case 0x21fe6cu: goto label_21fe6c;
        case 0x21fe70u: goto label_21fe70;
        case 0x21fe74u: goto label_21fe74;
        case 0x21fe78u: goto label_21fe78;
        case 0x21fe7cu: goto label_21fe7c;
        case 0x21fe80u: goto label_21fe80;
        case 0x21fe84u: goto label_21fe84;
        case 0x21fe88u: goto label_21fe88;
        case 0x21fe8cu: goto label_21fe8c;
        case 0x21fe90u: goto label_21fe90;
        case 0x21fe94u: goto label_21fe94;
        case 0x21fe98u: goto label_21fe98;
        case 0x21fe9cu: goto label_21fe9c;
        case 0x21fea0u: goto label_21fea0;
        case 0x21fea4u: goto label_21fea4;
        case 0x21fea8u: goto label_21fea8;
        case 0x21feacu: goto label_21feac;
        case 0x21feb0u: goto label_21feb0;
        case 0x21feb4u: goto label_21feb4;
        case 0x21feb8u: goto label_21feb8;
        case 0x21febcu: goto label_21febc;
        case 0x21fec0u: goto label_21fec0;
        case 0x21fec4u: goto label_21fec4;
        case 0x21fec8u: goto label_21fec8;
        case 0x21feccu: goto label_21fecc;
        case 0x21fed0u: goto label_21fed0;
        case 0x21fed4u: goto label_21fed4;
        case 0x21fed8u: goto label_21fed8;
        case 0x21fedcu: goto label_21fedc;
        case 0x21fee0u: goto label_21fee0;
        case 0x21fee4u: goto label_21fee4;
        case 0x21fee8u: goto label_21fee8;
        case 0x21feecu: goto label_21feec;
        case 0x21fef0u: goto label_21fef0;
        case 0x21fef4u: goto label_21fef4;
        case 0x21fef8u: goto label_21fef8;
        case 0x21fefcu: goto label_21fefc;
        case 0x21ff00u: goto label_21ff00;
        case 0x21ff04u: goto label_21ff04;
        case 0x21ff08u: goto label_21ff08;
        case 0x21ff0cu: goto label_21ff0c;
        case 0x21ff10u: goto label_21ff10;
        case 0x21ff14u: goto label_21ff14;
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff1cu: goto label_21ff1c;
        case 0x21ff20u: goto label_21ff20;
        case 0x21ff24u: goto label_21ff24;
        case 0x21ff28u: goto label_21ff28;
        case 0x21ff2cu: goto label_21ff2c;
        case 0x21ff30u: goto label_21ff30;
        case 0x21ff34u: goto label_21ff34;
        case 0x21ff38u: goto label_21ff38;
        case 0x21ff3cu: goto label_21ff3c;
        case 0x21ff40u: goto label_21ff40;
        case 0x21ff44u: goto label_21ff44;
        case 0x21ff48u: goto label_21ff48;
        case 0x21ff4cu: goto label_21ff4c;
        case 0x21ff50u: goto label_21ff50;
        case 0x21ff54u: goto label_21ff54;
        case 0x21ff58u: goto label_21ff58;
        case 0x21ff5cu: goto label_21ff5c;
        case 0x21ff60u: goto label_21ff60;
        case 0x21ff64u: goto label_21ff64;
        case 0x21ff68u: goto label_21ff68;
        case 0x21ff6cu: goto label_21ff6c;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff74u: goto label_21ff74;
        case 0x21ff78u: goto label_21ff78;
        case 0x21ff7cu: goto label_21ff7c;
        case 0x21ff80u: goto label_21ff80;
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff88u: goto label_21ff88;
        case 0x21ff8cu: goto label_21ff8c;
        case 0x21ff90u: goto label_21ff90;
        case 0x21ff94u: goto label_21ff94;
        case 0x21ff98u: goto label_21ff98;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffa0u: goto label_21ffa0;
        case 0x21ffa4u: goto label_21ffa4;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffacu: goto label_21ffac;
        case 0x21ffb0u: goto label_21ffb0;
        case 0x21ffb4u: goto label_21ffb4;
        case 0x21ffb8u: goto label_21ffb8;
        case 0x21ffbcu: goto label_21ffbc;
        case 0x21ffc0u: goto label_21ffc0;
        case 0x21ffc4u: goto label_21ffc4;
        case 0x21ffc8u: goto label_21ffc8;
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffd0u: goto label_21ffd0;
        case 0x21ffd4u: goto label_21ffd4;
        case 0x21ffd8u: goto label_21ffd8;
        case 0x21ffdcu: goto label_21ffdc;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21ffe4u: goto label_21ffe4;
        case 0x21ffe8u: goto label_21ffe8;
        case 0x21ffecu: goto label_21ffec;
        case 0x21fff0u: goto label_21fff0;
        case 0x21fff4u: goto label_21fff4;
        case 0x21fff8u: goto label_21fff8;
        case 0x21fffcu: goto label_21fffc;
        case 0x220000u: goto label_220000;
        case 0x220004u: goto label_220004;
        case 0x220008u: goto label_220008;
        case 0x22000cu: goto label_22000c;
        case 0x220010u: goto label_220010;
        case 0x220014u: goto label_220014;
        case 0x220018u: goto label_220018;
        case 0x22001cu: goto label_22001c;
        case 0x220020u: goto label_220020;
        case 0x220024u: goto label_220024;
        case 0x220028u: goto label_220028;
        case 0x22002cu: goto label_22002c;
        case 0x220030u: goto label_220030;
        case 0x220034u: goto label_220034;
        case 0x220038u: goto label_220038;
        case 0x22003cu: goto label_22003c;
        case 0x220040u: goto label_220040;
        case 0x220044u: goto label_220044;
        case 0x220048u: goto label_220048;
        case 0x22004cu: goto label_22004c;
        case 0x220050u: goto label_220050;
        case 0x220054u: goto label_220054;
        case 0x220058u: goto label_220058;
        case 0x22005cu: goto label_22005c;
        case 0x220060u: goto label_220060;
        case 0x220064u: goto label_220064;
        case 0x220068u: goto label_220068;
        case 0x22006cu: goto label_22006c;
        case 0x220070u: goto label_220070;
        case 0x220074u: goto label_220074;
        case 0x220078u: goto label_220078;
        case 0x22007cu: goto label_22007c;
        case 0x220080u: goto label_220080;
        case 0x220084u: goto label_220084;
        case 0x220088u: goto label_220088;
        case 0x22008cu: goto label_22008c;
        case 0x220090u: goto label_220090;
        case 0x220094u: goto label_220094;
        case 0x220098u: goto label_220098;
        case 0x22009cu: goto label_22009c;
        case 0x2200a0u: goto label_2200a0;
        case 0x2200a4u: goto label_2200a4;
        case 0x2200a8u: goto label_2200a8;
        case 0x2200acu: goto label_2200ac;
        case 0x2200b0u: goto label_2200b0;
        case 0x2200b4u: goto label_2200b4;
        case 0x2200b8u: goto label_2200b8;
        case 0x2200bcu: goto label_2200bc;
        case 0x2200c0u: goto label_2200c0;
        case 0x2200c4u: goto label_2200c4;
        case 0x2200c8u: goto label_2200c8;
        case 0x2200ccu: goto label_2200cc;
        case 0x2200d0u: goto label_2200d0;
        case 0x2200d4u: goto label_2200d4;
        case 0x2200d8u: goto label_2200d8;
        case 0x2200dcu: goto label_2200dc;
        case 0x2200e0u: goto label_2200e0;
        case 0x2200e4u: goto label_2200e4;
        case 0x2200e8u: goto label_2200e8;
        case 0x2200ecu: goto label_2200ec;
        case 0x2200f0u: goto label_2200f0;
        case 0x2200f4u: goto label_2200f4;
        case 0x2200f8u: goto label_2200f8;
        case 0x2200fcu: goto label_2200fc;
        case 0x220100u: goto label_220100;
        case 0x220104u: goto label_220104;
        case 0x220108u: goto label_220108;
        case 0x22010cu: goto label_22010c;
        case 0x220110u: goto label_220110;
        case 0x220114u: goto label_220114;
        case 0x220118u: goto label_220118;
        case 0x22011cu: goto label_22011c;
        case 0x220120u: goto label_220120;
        case 0x220124u: goto label_220124;
        case 0x220128u: goto label_220128;
        case 0x22012cu: goto label_22012c;
        case 0x220130u: goto label_220130;
        case 0x220134u: goto label_220134;
        case 0x220138u: goto label_220138;
        case 0x22013cu: goto label_22013c;
        case 0x220140u: goto label_220140;
        case 0x220144u: goto label_220144;
        case 0x220148u: goto label_220148;
        case 0x22014cu: goto label_22014c;
        case 0x220150u: goto label_220150;
        case 0x220154u: goto label_220154;
        case 0x220158u: goto label_220158;
        case 0x22015cu: goto label_22015c;
        case 0x220160u: goto label_220160;
        case 0x220164u: goto label_220164;
        case 0x220168u: goto label_220168;
        case 0x22016cu: goto label_22016c;
        case 0x220170u: goto label_220170;
        case 0x220174u: goto label_220174;
        case 0x220178u: goto label_220178;
        case 0x22017cu: goto label_22017c;
        case 0x220180u: goto label_220180;
        case 0x220184u: goto label_220184;
        case 0x220188u: goto label_220188;
        case 0x22018cu: goto label_22018c;
        case 0x220190u: goto label_220190;
        case 0x220194u: goto label_220194;
        case 0x220198u: goto label_220198;
        case 0x22019cu: goto label_22019c;
        case 0x2201a0u: goto label_2201a0;
        case 0x2201a4u: goto label_2201a4;
        case 0x2201a8u: goto label_2201a8;
        case 0x2201acu: goto label_2201ac;
        case 0x2201b0u: goto label_2201b0;
        case 0x2201b4u: goto label_2201b4;
        case 0x2201b8u: goto label_2201b8;
        case 0x2201bcu: goto label_2201bc;
        case 0x2201c0u: goto label_2201c0;
        case 0x2201c4u: goto label_2201c4;
        case 0x2201c8u: goto label_2201c8;
        case 0x2201ccu: goto label_2201cc;
        case 0x2201d0u: goto label_2201d0;
        case 0x2201d4u: goto label_2201d4;
        case 0x2201d8u: goto label_2201d8;
        case 0x2201dcu: goto label_2201dc;
        case 0x2201e0u: goto label_2201e0;
        case 0x2201e4u: goto label_2201e4;
        case 0x2201e8u: goto label_2201e8;
        case 0x2201ecu: goto label_2201ec;
        case 0x2201f0u: goto label_2201f0;
        case 0x2201f4u: goto label_2201f4;
        case 0x2201f8u: goto label_2201f8;
        case 0x2201fcu: goto label_2201fc;
        case 0x220200u: goto label_220200;
        case 0x220204u: goto label_220204;
        case 0x220208u: goto label_220208;
        case 0x22020cu: goto label_22020c;
        case 0x220210u: goto label_220210;
        case 0x220214u: goto label_220214;
        case 0x220218u: goto label_220218;
        case 0x22021cu: goto label_22021c;
        case 0x220220u: goto label_220220;
        case 0x220224u: goto label_220224;
        case 0x220228u: goto label_220228;
        case 0x22022cu: goto label_22022c;
        case 0x220230u: goto label_220230;
        case 0x220234u: goto label_220234;
        case 0x220238u: goto label_220238;
        case 0x22023cu: goto label_22023c;
        case 0x220240u: goto label_220240;
        case 0x220244u: goto label_220244;
        case 0x220248u: goto label_220248;
        case 0x22024cu: goto label_22024c;
        case 0x220250u: goto label_220250;
        case 0x220254u: goto label_220254;
        case 0x220258u: goto label_220258;
        case 0x22025cu: goto label_22025c;
        case 0x220260u: goto label_220260;
        case 0x220264u: goto label_220264;
        case 0x220268u: goto label_220268;
        case 0x22026cu: goto label_22026c;
        case 0x220270u: goto label_220270;
        case 0x220274u: goto label_220274;
        case 0x220278u: goto label_220278;
        case 0x22027cu: goto label_22027c;
        case 0x220280u: goto label_220280;
        case 0x220284u: goto label_220284;
        case 0x220288u: goto label_220288;
        case 0x22028cu: goto label_22028c;
        case 0x220290u: goto label_220290;
        case 0x220294u: goto label_220294;
        case 0x220298u: goto label_220298;
        case 0x22029cu: goto label_22029c;
        case 0x2202a0u: goto label_2202a0;
        case 0x2202a4u: goto label_2202a4;
        case 0x2202a8u: goto label_2202a8;
        case 0x2202acu: goto label_2202ac;
        case 0x2202b0u: goto label_2202b0;
        case 0x2202b4u: goto label_2202b4;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202bcu: goto label_2202bc;
        case 0x2202c0u: goto label_2202c0;
        case 0x2202c4u: goto label_2202c4;
        case 0x2202c8u: goto label_2202c8;
        case 0x2202ccu: goto label_2202cc;
        case 0x2202d0u: goto label_2202d0;
        case 0x2202d4u: goto label_2202d4;
        case 0x2202d8u: goto label_2202d8;
        case 0x2202dcu: goto label_2202dc;
        case 0x2202e0u: goto label_2202e0;
        case 0x2202e4u: goto label_2202e4;
        case 0x2202e8u: goto label_2202e8;
        case 0x2202ecu: goto label_2202ec;
        case 0x2202f0u: goto label_2202f0;
        case 0x2202f4u: goto label_2202f4;
        case 0x2202f8u: goto label_2202f8;
        case 0x2202fcu: goto label_2202fc;
        case 0x220300u: goto label_220300;
        case 0x220304u: goto label_220304;
        case 0x220308u: goto label_220308;
        case 0x22030cu: goto label_22030c;
        case 0x220310u: goto label_220310;
        case 0x220314u: goto label_220314;
        case 0x220318u: goto label_220318;
        case 0x22031cu: goto label_22031c;
        case 0x220320u: goto label_220320;
        case 0x220324u: goto label_220324;
        case 0x220328u: goto label_220328;
        case 0x22032cu: goto label_22032c;
        case 0x220330u: goto label_220330;
        case 0x220334u: goto label_220334;
        case 0x220338u: goto label_220338;
        case 0x22033cu: goto label_22033c;
        case 0x220340u: goto label_220340;
        case 0x220344u: goto label_220344;
        case 0x220348u: goto label_220348;
        case 0x22034cu: goto label_22034c;
        case 0x220350u: goto label_220350;
        case 0x220354u: goto label_220354;
        case 0x220358u: goto label_220358;
        case 0x22035cu: goto label_22035c;
        default: break;
    }

    ctx->pc = 0x21f700u;

label_21f700:
    // 0x21f700: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_21f704:
    // 0x21f704: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x21f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_21f708:
    // 0x21f708: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x21f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_21f70c:
    // 0x21f70c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21f70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21f710:
    // 0x21f710: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x21f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_21f714:
    // 0x21f714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21f714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21f718:
    // 0x21f718: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x21f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_21f71c:
    // 0x21f71c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x21f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_21f720:
    // 0x21f720: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x21f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_21f724:
    // 0x21f724: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x21f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_21f728:
    // 0x21f728: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21f728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_21f72c:
    // 0x21f72c: 0x2e2500a2  sltiu       $a1, $s1, 0xA2
    ctx->pc = 0x21f72cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)162) ? 1 : 0);
label_21f730:
    // 0x21f730: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x21f730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_21f734:
    // 0x21f734: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x21f734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_21f738:
    // 0x21f738: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21f73c:
    // 0x21f73c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f740:
    // 0x21f740: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21f740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21f744:
    // 0x21f744: 0x10a002f8  beqz        $a1, . + 4 + (0x2F8 << 2)
label_21f748:
    if (ctx->pc == 0x21F748u) {
        ctx->pc = 0x21F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F744u;
        // 0x21f748: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F74Cu;
        goto label_21f74c;
    }
    ctx->pc = 0x21F744u;
    {
        const bool branch_taken_0x21f744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F744u;
        // 0x21f748: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f744) {
            ctx->pc = 0x220328u;
            goto label_220328;
        }
    }
    ctx->pc = 0x21F74Cu;
label_21f74c:
    // 0x21f74c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x21f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_21f750:
    // 0x21f750: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x21f750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21f754:
    // 0x21f754: 0x2442aa80  addiu       $v0, $v0, -0x5580
    ctx->pc = 0x21f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
label_21f758:
    // 0x21f758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21f75c:
    // 0x21f75c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f760:
    // 0x21f760: 0x800008  jr          $a0
label_21f764:
    if (ctx->pc == 0x21F764u) {
        ctx->pc = 0x21F768u;
        goto label_21f768;
    }
    ctx->pc = 0x21F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F768u: goto label_21f768;
            case 0x21F77Cu: goto label_21f77c;
            case 0x21F790u: goto label_21f790;
            case 0x21F7A4u: goto label_21f7a4;
            case 0x21F7B8u: goto label_21f7b8;
            case 0x21F7CCu: goto label_21f7cc;
            case 0x21F7E0u: goto label_21f7e0;
            case 0x21F7F4u: goto label_21f7f4;
            case 0x21F814u: goto label_21f814;
            case 0x21F838u: goto label_21f838;
            case 0x21F858u: goto label_21f858;
            case 0x21F884u: goto label_21f884;
            case 0x21F8B4u: goto label_21f8b4;
            case 0x21F8E0u: goto label_21f8e0;
            case 0x21F934u: goto label_21f934;
            case 0x21F970u: goto label_21f970;
            case 0x21F984u: goto label_21f984;
            case 0x21F998u: goto label_21f998;
            case 0x21FA0Cu: goto label_21fa0c;
            case 0x21FA3Cu: goto label_21fa3c;
            case 0x21FA48u: goto label_21fa48;
            case 0x21FA54u: goto label_21fa54;
            case 0x21FA68u: goto label_21fa68;
            case 0x21FA74u: goto label_21fa74;
            case 0x21FAA0u: goto label_21faa0;
            case 0x21FB50u: goto label_21fb50;
            case 0x21FB84u: goto label_21fb84;
            case 0x21FBA0u: goto label_21fba0;
            case 0x21FCACu: goto label_21fcac;
            case 0x21FD28u: goto label_21fd28;
            case 0x21FD3Cu: goto label_21fd3c;
            case 0x21FD58u: goto label_21fd58;
            case 0x21FEF0u: goto label_21fef0;
            case 0x21FF64u: goto label_21ff64;
            case 0x21FFB8u: goto label_21ffb8;
            case 0x22000Cu: goto label_22000c;
            case 0x220028u: goto label_220028;
            case 0x220044u: goto label_220044;
            case 0x220080u: goto label_220080;
            case 0x2200CCu: goto label_2200cc;
            case 0x220138u: goto label_220138;
            case 0x220180u: goto label_220180;
            case 0x2201FCu: goto label_2201fc;
            case 0x220278u: goto label_220278;
            case 0x220310u: goto label_220310;
            case 0x220328u: goto label_220328;
            case 0x220338u: goto label_220338;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F768u;
label_21f768:
    // 0x21f768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f76c:
    // 0x21f76c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f770:
    // 0x21f770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f774:
    // 0x21f774: 0x10000023  b           . + 4 + (0x23 << 2)
label_21f778:
    if (ctx->pc == 0x21F778u) {
        ctx->pc = 0x21F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F774u;
        // 0x21f778: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F77Cu;
        goto label_21f77c;
    }
    ctx->pc = 0x21F774u;
    {
        const bool branch_taken_0x21f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F774u;
        // 0x21f778: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f774) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F77Cu;
label_21f77c:
    // 0x21f77c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f780:
    // 0x21f780: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f784:
    // 0x21f784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f788:
    // 0x21f788: 0x1000001e  b           . + 4 + (0x1E << 2)
label_21f78c:
    if (ctx->pc == 0x21F78Cu) {
        ctx->pc = 0x21F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F788u;
        // 0x21f78c: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F790u;
        goto label_21f790;
    }
    ctx->pc = 0x21F788u;
    {
        const bool branch_taken_0x21f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F788u;
        // 0x21f78c: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f788) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F790u;
label_21f790:
    // 0x21f790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f794:
    // 0x21f794: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f798:
    // 0x21f798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f79c:
    // 0x21f79c: 0x10000019  b           . + 4 + (0x19 << 2)
label_21f7a0:
    if (ctx->pc == 0x21F7A0u) {
        ctx->pc = 0x21F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F79Cu;
        // 0x21f7a0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7A4u;
        goto label_21f7a4;
    }
    ctx->pc = 0x21F79Cu;
    {
        const bool branch_taken_0x21f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F79Cu;
        // 0x21f7a0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f79c) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F7A4u;
label_21f7a4:
    // 0x21f7a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f7a8:
    // 0x21f7a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f7ac:
    // 0x21f7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f7b0:
    // 0x21f7b0: 0x10000014  b           . + 4 + (0x14 << 2)
label_21f7b4:
    if (ctx->pc == 0x21F7B4u) {
        ctx->pc = 0x21F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7B0u;
        // 0x21f7b4: 0x240500a2  addiu       $a1, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7B8u;
        goto label_21f7b8;
    }
    ctx->pc = 0x21F7B0u;
    {
        const bool branch_taken_0x21f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7B0u;
        // 0x21f7b4: 0x240500a2  addiu       $a1, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7b0) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F7B8u;
label_21f7b8:
    // 0x21f7b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f7bc:
    // 0x21f7bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f7c0:
    // 0x21f7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f7c4:
    // 0x21f7c4: 0x1000000f  b           . + 4 + (0xF << 2)
label_21f7c8:
    if (ctx->pc == 0x21F7C8u) {
        ctx->pc = 0x21F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7C4u;
        // 0x21f7c8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7CCu;
        goto label_21f7cc;
    }
    ctx->pc = 0x21F7C4u;
    {
        const bool branch_taken_0x21f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7C4u;
        // 0x21f7c8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7c4) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F7CCu;
label_21f7cc:
    // 0x21f7cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f7d0:
    // 0x21f7d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f7d4:
    // 0x21f7d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f7d8:
    // 0x21f7d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_21f7dc:
    if (ctx->pc == 0x21F7DCu) {
        ctx->pc = 0x21F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7D8u;
        // 0x21f7dc: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7E0u;
        goto label_21f7e0;
    }
    ctx->pc = 0x21F7D8u;
    {
        const bool branch_taken_0x21f7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7D8u;
        // 0x21f7dc: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7d8) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F7E0u;
label_21f7e0:
    // 0x21f7e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f7e4:
    // 0x21f7e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f7e8:
    // 0x21f7e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f7ec:
    // 0x21f7ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_21f7f0:
    if (ctx->pc == 0x21F7F0u) {
        ctx->pc = 0x21F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7ECu;
        // 0x21f7f0: 0x240500a3  addiu       $a1, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7F4u;
        goto label_21f7f4;
    }
    ctx->pc = 0x21F7ECu;
    {
        const bool branch_taken_0x21f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7ECu;
        // 0x21f7f0: 0x240500a3  addiu       $a1, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7ec) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F7F4u;
label_21f7f4:
    // 0x21f7f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f7f8:
    // 0x21f7f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f7fc:
    // 0x21f7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f800:
    // 0x21f800: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x21f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_21f804:
    // 0x21f804: 0xc087ca4  jal         func_21F290
label_21f808:
    if (ctx->pc == 0x21F808u) {
        ctx->pc = 0x21F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F804u;
        // 0x21f808: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F80Cu;
        goto label_21f80c;
    }
    ctx->pc = 0x21F804u;
    SET_GPR_U32(ctx, 31, 0x21F80Cu);
    ctx->pc = 0x21F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F804u;
    // 0x21f808: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F290u, 0x21F804u, 0x21F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F80Cu;
label_21f80c:
    // 0x21f80c: 0x100002cb  b           . + 4 + (0x2CB << 2)
label_21f810:
    if (ctx->pc == 0x21F810u) {
        ctx->pc = 0x21F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F80Cu;
        // 0x21f810: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F814u;
        goto label_21f814;
    }
    ctx->pc = 0x21F80Cu;
    {
        const bool branch_taken_0x21f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F80Cu;
        // 0x21f810: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f80c) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21F814u;
label_21f814:
    // 0x21f814: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_21f818:
    // 0x21f818: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f81c:
    // 0x21f81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f820:
    // 0x21f820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f824:
    // 0x21f824: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21f824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_21f828:
    // 0x21f828: 0xc087ca4  jal         func_21F290
label_21f82c:
    if (ctx->pc == 0x21F82Cu) {
        ctx->pc = 0x21F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F828u;
        // 0x21f82c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F830u;
        goto label_21f830;
    }
    ctx->pc = 0x21F828u;
    SET_GPR_U32(ctx, 31, 0x21F830u);
    ctx->pc = 0x21F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F828u;
    // 0x21f82c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F290u, 0x21F828u, 0x21F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F830u;
label_21f830:
    // 0x21f830: 0x100002c2  b           . + 4 + (0x2C2 << 2)
label_21f834:
    if (ctx->pc == 0x21F834u) {
        ctx->pc = 0x21F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F830u;
        // 0x21f834: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F838u;
        goto label_21f838;
    }
    ctx->pc = 0x21F830u;
    {
        const bool branch_taken_0x21f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F830u;
        // 0x21f834: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f830) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21F838u;
label_21f838:
    // 0x21f838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f83c:
    // 0x21f83c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f840:
    // 0x21f840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f844:
    // 0x21f844: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f848:
    // 0x21f848: 0xc087ca4  jal         func_21F290
label_21f84c:
    if (ctx->pc == 0x21F84Cu) {
        ctx->pc = 0x21F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F848u;
        // 0x21f84c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F850u;
        goto label_21f850;
    }
    ctx->pc = 0x21F848u;
    SET_GPR_U32(ctx, 31, 0x21F850u);
    ctx->pc = 0x21F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F848u;
    // 0x21f84c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F290u, 0x21F848u, 0x21F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F850u;
label_21f850:
    // 0x21f850: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_21f854:
    if (ctx->pc == 0x21F854u) {
        ctx->pc = 0x21F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F850u;
        // 0x21f854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F858u;
        goto label_21f858;
    }
    ctx->pc = 0x21F850u;
    {
        const bool branch_taken_0x21f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F850u;
        // 0x21f854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f850) {
            ctx->pc = 0x220314u;
            goto label_220314;
        }
    }
    ctx->pc = 0x21F858u;
label_21f858:
    // 0x21f858: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21f858u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21f85c:
    // 0x21f85c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f860:
    // 0x21f860: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f864:
    // 0x21f864: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f864u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21f868:
    // 0x21f868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21f86c:
    if (ctx->pc == 0x21F86Cu) {
        ctx->pc = 0x21F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F868u;
        // 0x21f86c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F870u;
        goto label_21f870;
    }
    ctx->pc = 0x21F868u;
    {
        const bool branch_taken_0x21f868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F868u;
        // 0x21f86c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f868) {
            ctx->pc = 0x21F878u;
            goto label_21f878;
        }
    }
    ctx->pc = 0x21F870u;
label_21f870:
    // 0x21f870: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_21f874:
    // 0x21f874: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f878:
    // 0x21f878: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f87c:
    // 0x21f87c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_21f880:
    if (ctx->pc == 0x21F880u) {
        ctx->pc = 0x21F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F87Cu;
        // 0x21f880: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F884u;
        goto label_21f884;
    }
    ctx->pc = 0x21F87Cu;
    {
        const bool branch_taken_0x21f87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F87Cu;
        // 0x21f880: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f87c) {
            ctx->pc = 0x21FB10u;
            goto label_21fb10;
        }
    }
    ctx->pc = 0x21F884u;
label_21f884:
    // 0x21f884: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21f884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21f888:
    // 0x21f888: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f88c:
    // 0x21f88c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f890:
    // 0x21f890: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f890u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21f894:
    // 0x21f894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21f898:
    if (ctx->pc == 0x21F898u) {
        ctx->pc = 0x21F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F894u;
        // 0x21f898: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F89Cu;
        goto label_21f89c;
    }
    ctx->pc = 0x21F894u;
    {
        const bool branch_taken_0x21f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F894u;
        // 0x21f898: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f894) {
            ctx->pc = 0x21F8A4u;
            goto label_21f8a4;
        }
    }
    ctx->pc = 0x21F89Cu;
label_21f89c:
    // 0x21f89c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_21f8a0:
    // 0x21f8a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f8a4:
    // 0x21f8a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f8a8:
    // 0x21f8a8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21f8ac:
    // 0x21f8ac: 0x10000099  b           . + 4 + (0x99 << 2)
label_21f8b0:
    if (ctx->pc == 0x21F8B0u) {
        ctx->pc = 0x21F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8ACu;
        // 0x21f8b0: 0x2406009f  addiu       $a2, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8B4u;
        goto label_21f8b4;
    }
    ctx->pc = 0x21F8ACu;
    {
        const bool branch_taken_0x21f8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8ACu;
        // 0x21f8b0: 0x2406009f  addiu       $a2, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8ac) {
            ctx->pc = 0x21FB14u;
            goto label_21fb14;
        }
    }
    ctx->pc = 0x21F8B4u;
label_21f8b4:
    // 0x21f8b4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21f8b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21f8b8:
    // 0x21f8b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f8bc:
    // 0x21f8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f8c0:
    // 0x21f8c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f8c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21f8c4:
    // 0x21f8c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21f8c8:
    if (ctx->pc == 0x21F8C8u) {
        ctx->pc = 0x21F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8C4u;
        // 0x21f8c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8CCu;
        goto label_21f8cc;
    }
    ctx->pc = 0x21F8C4u;
    {
        const bool branch_taken_0x21f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8C4u;
        // 0x21f8c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8c4) {
            ctx->pc = 0x21F8D4u;
            goto label_21f8d4;
        }
    }
    ctx->pc = 0x21F8CCu;
label_21f8cc:
    // 0x21f8cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21f8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_21f8d0:
    // 0x21f8d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f8d4:
    // 0x21f8d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f8d8:
    // 0x21f8d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_21f8dc:
    if (ctx->pc == 0x21F8DCu) {
        ctx->pc = 0x21F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D8u;
        // 0x21f8dc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8E0u;
        goto label_21f8e0;
    }
    ctx->pc = 0x21F8D8u;
    {
        const bool branch_taken_0x21f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D8u;
        // 0x21f8dc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8d8) {
            ctx->pc = 0x21F924u;
            goto label_21f924;
        }
    }
    ctx->pc = 0x21F8E0u;
label_21f8e0:
    // 0x21f8e0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21f8e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21f8e4:
    // 0x21f8e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f8e8:
    // 0x21f8e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21f8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21f8ec:
    // 0x21f8ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f8ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21f8f0:
    // 0x21f8f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21f8f4:
    if (ctx->pc == 0x21F8F4u) {
        ctx->pc = 0x21F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8F0u;
        // 0x21f8f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8F8u;
        goto label_21f8f8;
    }
    ctx->pc = 0x21F8F0u;
    {
        const bool branch_taken_0x21f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8F0u;
        // 0x21f8f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8f0) {
            ctx->pc = 0x21F910u;
            goto label_21f910;
        }
    }
    ctx->pc = 0x21F8F8u;
label_21f8f8:
    // 0x21f8f8: 0xc088f88  jal         func_223E20
label_21f8fc:
    if (ctx->pc == 0x21F8FCu) {
        ctx->pc = 0x21F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8F8u;
        // 0x21f8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F900u;
        goto label_21f900;
    }
    ctx->pc = 0x21F8F8u;
    SET_GPR_U32(ctx, 31, 0x21F900u);
    ctx->pc = 0x21F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8F8u;
    // 0x21f8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x21F8F8u, 0x21F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F900u;
label_21f900:
    // 0x21f900: 0x1040028d  beqz        $v0, . + 4 + (0x28D << 2)
label_21f904:
    if (ctx->pc == 0x21F904u) {
        ctx->pc = 0x21F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F900u;
        // 0x21f904: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F908u;
        goto label_21f908;
    }
    ctx->pc = 0x21F900u;
    {
        const bool branch_taken_0x21f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F900u;
        // 0x21f904: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f900) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21F908u;
label_21f908:
    // 0x21f908: 0x10000004  b           . + 4 + (0x4 << 2)
label_21f90c:
    if (ctx->pc == 0x21F90Cu) {
        ctx->pc = 0x21F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F908u;
        // 0x21f90c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F910u;
        goto label_21f910;
    }
    ctx->pc = 0x21F908u;
    {
        const bool branch_taken_0x21f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F908u;
        // 0x21f90c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f908) {
            ctx->pc = 0x21F91Cu;
            goto label_21f91c;
        }
    }
    ctx->pc = 0x21F910u;
label_21f910:
    // 0x21f910: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21f910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_21f914:
    // 0x21f914: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21f914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21f918:
    // 0x21f918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f91c:
    // 0x21f91c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21f920:
    // 0x21f920: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21f920u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21f924:
    // 0x21f924: 0xc044282  jal         func_110A08
label_21f928:
    if (ctx->pc == 0x21F928u) {
        ctx->pc = 0x21F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F924u;
        // 0x21f928: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F92Cu;
        goto label_21f92c;
    }
    ctx->pc = 0x21F924u;
    SET_GPR_U32(ctx, 31, 0x21F92Cu);
    ctx->pc = 0x21F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F924u;
    // 0x21f928: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110A08u, 0x21F924u, 0x21F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F92Cu;
label_21f92c:
    // 0x21f92c: 0x10000283  b           . + 4 + (0x283 << 2)
label_21f930:
    if (ctx->pc == 0x21F930u) {
        ctx->pc = 0x21F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F92Cu;
        // 0x21f930: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F934u;
        goto label_21f934;
    }
    ctx->pc = 0x21F92Cu;
    {
        const bool branch_taken_0x21f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F92Cu;
        // 0x21f930: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f92c) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21F934u;
label_21f934:
    // 0x21f934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f938:
    // 0x21f938: 0xc089bfc  jal         func_226FF0
label_21f93c:
    if (ctx->pc == 0x21F93Cu) {
        ctx->pc = 0x21F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F938u;
        // 0x21f93c: 0x2410003e  addiu       $s0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F940u;
        goto label_21f940;
    }
    ctx->pc = 0x21F938u;
    SET_GPR_U32(ctx, 31, 0x21F940u);
    ctx->pc = 0x21F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F938u;
    // 0x21f93c: 0x2410003e  addiu       $s0, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21F938u, 0x21F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F940u;
label_21f940:
    // 0x21f940: 0xc0e57ce  jal         func_395F38
label_21f944:
    if (ctx->pc == 0x21F944u) {
        ctx->pc = 0x21F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F940u;
        // 0x21f944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F948u;
        goto label_21f948;
    }
    ctx->pc = 0x21F940u;
    SET_GPR_U32(ctx, 31, 0x21F948u);
    ctx->pc = 0x21F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F940u;
    // 0x21f944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21F940u, 0x21F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F948u;
label_21f948:
    // 0x21f948: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21f94c:
    if (ctx->pc == 0x21F94Cu) {
        ctx->pc = 0x21F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F948u;
        // 0x21f94c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F950u;
        goto label_21f950;
    }
    ctx->pc = 0x21F948u;
    {
        const bool branch_taken_0x21f948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F948u;
        // 0x21f94c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f948) {
            ctx->pc = 0x21F964u;
            goto label_21f964;
        }
    }
    ctx->pc = 0x21F950u;
label_21f950:
    // 0x21f950: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x21f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_21f954:
    // 0x21f954: 0x3c03c68a  lui         $v1, 0xC68A
    ctx->pc = 0x21f954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50826 << 16));
label_21f958:
    // 0x21f958: 0x3463017c  ori         $v1, $v1, 0x17C
    ctx->pc = 0x21f958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)380);
label_21f95c:
    // 0x21f95c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21f95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_21f960:
    // 0x21f960: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x21f960u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_21f964:
    // 0x21f964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f968:
    // 0x21f968: 0x1000026b  b           . + 4 + (0x26B << 2)
label_21f96c:
    if (ctx->pc == 0x21F96Cu) {
        ctx->pc = 0x21F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F968u;
        // 0x21f96c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F970u;
        goto label_21f970;
    }
    ctx->pc = 0x21F968u;
    {
        const bool branch_taken_0x21f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F968u;
        // 0x21f96c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f968) {
            ctx->pc = 0x220318u;
            goto label_220318;
        }
    }
    ctx->pc = 0x21F970u;
label_21f970:
    // 0x21f970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f974:
    // 0x21f974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f978:
    // 0x21f978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21f978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f97c:
    // 0x21f97c: 0x100001ea  b           . + 4 + (0x1EA << 2)
label_21f980:
    if (ctx->pc == 0x21F980u) {
        ctx->pc = 0x21F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F97Cu;
        // 0x21f980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F984u;
        goto label_21f984;
    }
    ctx->pc = 0x21F97Cu;
    {
        const bool branch_taken_0x21f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F97Cu;
        // 0x21f980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f97c) {
            ctx->pc = 0x220128u;
            goto label_220128;
        }
    }
    ctx->pc = 0x21F984u;
label_21f984:
    // 0x21f984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f988:
    // 0x21f988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f98c:
    // 0x21f98c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21f98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f990:
    // 0x21f990: 0x1000003f  b           . + 4 + (0x3F << 2)
label_21f994:
    if (ctx->pc == 0x21F994u) {
        ctx->pc = 0x21F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F990u;
        // 0x21f994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F998u;
        goto label_21f998;
    }
    ctx->pc = 0x21F990u;
    {
        const bool branch_taken_0x21f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F990u;
        // 0x21f994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f990) {
            ctx->pc = 0x21FA90u;
            goto label_21fa90;
        }
    }
    ctx->pc = 0x21F998u;
label_21f998:
    // 0x21f998: 0x8e420590  lw          $v0, 0x590($s2)
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
label_21f99c:
    // 0x21f99c: 0x8e430594  lw          $v1, 0x594($s2)
    ctx->pc = 0x21f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1428)));
label_21f9a0:
    // 0x21f9a0: 0x8e450598  lw          $a1, 0x598($s2)
    ctx->pc = 0x21f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1432)));
label_21f9a4:
    // 0x21f9a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21f9a8:
    // 0x21f9a8: 0x8e44059c  lw          $a0, 0x59C($s2)
    ctx->pc = 0x21f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1436)));
label_21f9ac:
    // 0x21f9ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x21f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_21f9b0:
    // 0x21f9b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21f9b4:
    // 0x21f9b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_21f9b8:
    if (ctx->pc == 0x21F9B8u) {
        ctx->pc = 0x21F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9B4u;
        // 0x21f9b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9BCu;
        goto label_21f9bc;
    }
    ctx->pc = 0x21F9B4u;
    {
        const bool branch_taken_0x21f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9B4u;
        // 0x21f9b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9b4) {
            ctx->pc = 0x21F9ECu;
            goto label_21f9ec;
        }
    }
    ctx->pc = 0x21F9BCu;
label_21f9bc:
    // 0x21f9bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f9c0:
    // 0x21f9c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f9c4:
    // 0x21f9c4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21f9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21f9c8:
    // 0x21f9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f9cc:
    // 0x21f9cc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x21f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_21f9d0:
    // 0x21f9d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f9d4:
    // 0x21f9d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21f9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f9d8:
    // 0x21f9d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21f9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f9dc:
    // 0x21f9dc: 0xc088178  jal         func_2205E0
label_21f9e0:
    if (ctx->pc == 0x21F9E0u) {
        ctx->pc = 0x21F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9DCu;
        // 0x21f9e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9E4u;
        goto label_21f9e4;
    }
    ctx->pc = 0x21F9DCu;
    SET_GPR_U32(ctx, 31, 0x21F9E4u);
    ctx->pc = 0x21F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9DCu;
    // 0x21f9e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x21F9DCu, 0x21F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9E4u;
label_21f9e4:
    // 0x21f9e4: 0x10000255  b           . + 4 + (0x255 << 2)
label_21f9e8:
    if (ctx->pc == 0x21F9E8u) {
        ctx->pc = 0x21F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9E4u;
        // 0x21f9e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9ECu;
        goto label_21f9ec;
    }
    ctx->pc = 0x21F9E4u;
    {
        const bool branch_taken_0x21f9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9E4u;
        // 0x21f9e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9e4) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21F9ECu;
label_21f9ec:
    // 0x21f9ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f9f0:
    // 0x21f9f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21f9f4:
    // 0x21f9f4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21f9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21f9f8:
    // 0x21f9f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f9fc:
    // 0x21f9fc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x21f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_21fa00:
    // 0x21fa00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fa00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fa04:
    // 0x21fa04: 0x10000199  b           . + 4 + (0x199 << 2)
label_21fa08:
    if (ctx->pc == 0x21FA08u) {
        ctx->pc = 0x21FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA04u;
        // 0x21fa08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA0Cu;
        goto label_21fa0c;
    }
    ctx->pc = 0x21FA04u;
    {
        const bool branch_taken_0x21fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA04u;
        // 0x21fa08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa04) {
            ctx->pc = 0x22006Cu;
            goto label_22006c;
        }
    }
    ctx->pc = 0x21FA0Cu;
label_21fa0c:
    // 0x21fa0c: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fa0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fa10:
    // 0x21fa10: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x21fa10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_21fa14:
    // 0x21fa14: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_21fa18:
    // 0x21fa18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fa1c:
    // 0x21fa1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21fa20:
    // 0x21fa20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21fa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fa24:
    // 0x21fa24: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x21fa24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_21fa28:
    // 0x21fa28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21fa28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fa2c:
    // 0x21fa2c: 0xc087d04  jal         func_21F410
label_21fa30:
    if (ctx->pc == 0x21FA30u) {
        ctx->pc = 0x21FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA2Cu;
        // 0x21fa30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA34u;
        goto label_21fa34;
    }
    ctx->pc = 0x21FA2Cu;
    SET_GPR_U32(ctx, 31, 0x21FA34u);
    ctx->pc = 0x21FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA2Cu;
    // 0x21fa30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F410u, 0x21FA2Cu, 0x21FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA34u;
label_21fa34:
    // 0x21fa34: 0x10000241  b           . + 4 + (0x241 << 2)
label_21fa38:
    if (ctx->pc == 0x21FA38u) {
        ctx->pc = 0x21FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA34u;
        // 0x21fa38: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA3Cu;
        goto label_21fa3c;
    }
    ctx->pc = 0x21FA34u;
    {
        const bool branch_taken_0x21fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA34u;
        // 0x21fa38: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa34) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FA3Cu;
label_21fa3c:
    // 0x21fa3c: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fa3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fa40:
    // 0x21fa40: 0x1000000e  b           . + 4 + (0xE << 2)
label_21fa44:
    if (ctx->pc == 0x21FA44u) {
        ctx->pc = 0x21FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA40u;
        // 0x21fa44: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA48u;
        goto label_21fa48;
    }
    ctx->pc = 0x21FA40u;
    {
        const bool branch_taken_0x21fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA40u;
        // 0x21fa44: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa40) {
            ctx->pc = 0x21FA7Cu;
            goto label_21fa7c;
        }
    }
    ctx->pc = 0x21FA48u;
label_21fa48:
    // 0x21fa48: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fa48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fa4c:
    // 0x21fa4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_21fa50:
    if (ctx->pc == 0x21FA50u) {
        ctx->pc = 0x21FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA4Cu;
        // 0x21fa50: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA54u;
        goto label_21fa54;
    }
    ctx->pc = 0x21FA4Cu;
    {
        const bool branch_taken_0x21fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA4Cu;
        // 0x21fa50: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa4c) {
            ctx->pc = 0x21FA7Cu;
            goto label_21fa7c;
        }
    }
    ctx->pc = 0x21FA54u;
label_21fa54:
    // 0x21fa54: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fa58:
    // 0x21fa58: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x21fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_21fa5c:
    // 0x21fa5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fa60:
    // 0x21fa60: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_21fa64:
    if (ctx->pc == 0x21FA64u) {
        ctx->pc = 0x21FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA60u;
        // 0x21fa64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA68u;
        goto label_21fa68;
    }
    ctx->pc = 0x21FA60u;
    {
        const bool branch_taken_0x21fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA60u;
        // 0x21fa64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa60) {
            ctx->pc = 0x22011Cu;
            goto label_22011c;
        }
    }
    ctx->pc = 0x21FA68u;
label_21fa68:
    // 0x21fa68: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fa6c:
    // 0x21fa6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_21fa70:
    if (ctx->pc == 0x21FA70u) {
        ctx->pc = 0x21FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA6Cu;
        // 0x21fa70: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA74u;
        goto label_21fa74;
    }
    ctx->pc = 0x21FA6Cu;
    {
        const bool branch_taken_0x21fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA6Cu;
        // 0x21fa70: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa6c) {
            ctx->pc = 0x21FA7Cu;
            goto label_21fa7c;
        }
    }
    ctx->pc = 0x21FA74u;
label_21fa74:
    // 0x21fa74: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fa74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fa78:
    // 0x21fa78: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x21fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_21fa7c:
    // 0x21fa7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fa80:
    // 0x21fa80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21fa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fa84:
    // 0x21fa84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21fa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21fa88:
    // 0x21fa88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21fa88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fa8c:
    // 0x21fa8c: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x21fa8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_21fa90:
    // 0x21fa90: 0xc087d04  jal         func_21F410
label_21fa94:
    if (ctx->pc == 0x21FA94u) {
        ctx->pc = 0x21FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA90u;
        // 0x21fa94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA98u;
        goto label_21fa98;
    }
    ctx->pc = 0x21FA90u;
    SET_GPR_U32(ctx, 31, 0x21FA98u);
    ctx->pc = 0x21FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA90u;
    // 0x21fa94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F410u, 0x21FA90u, 0x21FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA98u;
label_21fa98:
    // 0x21fa98: 0x10000228  b           . + 4 + (0x228 << 2)
label_21fa9c:
    if (ctx->pc == 0x21FA9Cu) {
        ctx->pc = 0x21FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA98u;
        // 0x21fa9c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAA0u;
        goto label_21faa0;
    }
    ctx->pc = 0x21FA98u;
    {
        const bool branch_taken_0x21fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA98u;
        // 0x21fa9c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa98) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FAA0u;
label_21faa0:
    // 0x21faa0: 0xc089bfc  jal         func_226FF0
label_21faa4:
    if (ctx->pc == 0x21FAA4u) {
        ctx->pc = 0x21FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAA0u;
        // 0x21faa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAA8u;
        goto label_21faa8;
    }
    ctx->pc = 0x21FAA0u;
    SET_GPR_U32(ctx, 31, 0x21FAA8u);
    ctx->pc = 0x21FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAA0u;
    // 0x21faa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21FAA0u, 0x21FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAA8u;
label_21faa8:
    // 0x21faa8: 0xc0e57ce  jal         func_395F38
label_21faac:
    if (ctx->pc == 0x21FAACu) {
        ctx->pc = 0x21FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAA8u;
        // 0x21faac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAB0u;
        goto label_21fab0;
    }
    ctx->pc = 0x21FAA8u;
    SET_GPR_U32(ctx, 31, 0x21FAB0u);
    ctx->pc = 0x21FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAA8u;
    // 0x21faac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21FAA8u, 0x21FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAB0u;
label_21fab0:
    // 0x21fab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21fab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fab4:
    // 0x21fab4: 0x10600220  beqz        $v1, . + 4 + (0x220 << 2)
label_21fab8:
    if (ctx->pc == 0x21FAB8u) {
        ctx->pc = 0x21FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAB4u;
        // 0x21fab8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FABCu;
        goto label_21fabc;
    }
    ctx->pc = 0x21FAB4u;
    {
        const bool branch_taken_0x21fab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAB4u;
        // 0x21fab8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fab4) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21FABCu;
label_21fabc:
    // 0x21fabc: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x21fabcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_21fac0:
    // 0x21fac0: 0xc0e44cc  jal         func_391330
label_21fac4:
    if (ctx->pc == 0x21FAC4u) {
        ctx->pc = 0x21FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC0u;
        // 0x21fac4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAC8u;
        goto label_21fac8;
    }
    ctx->pc = 0x21FAC0u;
    SET_GPR_U32(ctx, 31, 0x21FAC8u);
    ctx->pc = 0x21FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAC0u;
    // 0x21fac4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21FAC0u, 0x21FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAC8u;
label_21fac8:
    // 0x21fac8: 0x90500064  lbu         $s0, 0x64($v0)
    ctx->pc = 0x21fac8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_21facc:
    // 0x21facc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21faccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21fad0:
    // 0x21fad0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21fad0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21fad4:
    // 0x21fad4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_21fad8:
    if (ctx->pc == 0x21FAD8u) {
        ctx->pc = 0x21FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD4u;
        // 0x21fad8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FADCu;
        goto label_21fadc;
    }
    ctx->pc = 0x21FAD4u;
    {
        const bool branch_taken_0x21fad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD4u;
        // 0x21fad8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fad4) {
            ctx->pc = 0x21FB28u;
            goto label_21fb28;
        }
    }
    ctx->pc = 0x21FADCu;
label_21fadc:
    // 0x21fadc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fae0:
    // 0x21fae0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fae4:
    // 0x21fae4: 0xc08cf14  jal         func_233C50
label_21fae8:
    if (ctx->pc == 0x21FAE8u) {
        ctx->pc = 0x21FAECu;
        goto label_21faec;
    }
    ctx->pc = 0x21FAE4u;
    SET_GPR_U32(ctx, 31, 0x21FAECu);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x21FAE4u, 0x21FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAECu;
label_21faec:
    // 0x21faec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21faf0:
    if (ctx->pc == 0x21FAF0u) {
        ctx->pc = 0x21FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAECu;
        // 0x21faf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAF4u;
        goto label_21faf4;
    }
    ctx->pc = 0x21FAECu;
    {
        const bool branch_taken_0x21faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAECu;
        // 0x21faf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faec) {
            ctx->pc = 0x21FB04u;
            goto label_21fb04;
        }
    }
    ctx->pc = 0x21FAF4u;
label_21faf4:
    // 0x21faf4: 0xc0878ea  jal         func_21E3A8
label_21faf8:
    if (ctx->pc == 0x21FAF8u) {
        ctx->pc = 0x21FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF4u;
        // 0x21faf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAFCu;
        goto label_21fafc;
    }
    ctx->pc = 0x21FAF4u;
    SET_GPR_U32(ctx, 31, 0x21FAFCu);
    ctx->pc = 0x21FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAF4u;
    // 0x21faf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x21FAF4u, 0x21FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAFCu;
label_21fafc:
    // 0x21fafc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x21fafcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_21fb00:
    // 0x21fb00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21fb04:
    // 0x21fb04: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x21fb04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_21fb08:
    // 0x21fb08: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21fb0c:
    // 0x21fb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21fb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fb10:
    // 0x21fb10: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x21fb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_21fb14:
    // 0x21fb14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21fb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21fb18:
    // 0x21fb18: 0xc04420c  jal         func_110830
label_21fb1c:
    if (ctx->pc == 0x21FB1Cu) {
        ctx->pc = 0x21FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB18u;
        // 0x21fb1c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB20u;
        goto label_21fb20;
    }
    ctx->pc = 0x21FB18u;
    SET_GPR_U32(ctx, 31, 0x21FB20u);
    ctx->pc = 0x21FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB18u;
    // 0x21fb1c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x21FB18u, 0x21FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB20u;
label_21fb20:
    // 0x21fb20: 0x10000206  b           . + 4 + (0x206 << 2)
label_21fb24:
    if (ctx->pc == 0x21FB24u) {
        ctx->pc = 0x21FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB20u;
        // 0x21fb24: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB28u;
        goto label_21fb28;
    }
    ctx->pc = 0x21FB20u;
    {
        const bool branch_taken_0x21fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB20u;
        // 0x21fb24: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb20) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FB28u;
label_21fb28:
    // 0x21fb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fb2c:
    // 0x21fb2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21fb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21fb30:
    // 0x21fb30: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21fb34:
    // 0x21fb34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fb38:
    // 0x21fb38: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x21fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_21fb3c:
    // 0x21fb3c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21fb3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21fb40:
    // 0x21fb40: 0xc0441e4  jal         func_110790
label_21fb44:
    if (ctx->pc == 0x21FB44u) {
        ctx->pc = 0x21FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB40u;
        // 0x21fb44: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB48u;
        goto label_21fb48;
    }
    ctx->pc = 0x21FB40u;
    SET_GPR_U32(ctx, 31, 0x21FB48u);
    ctx->pc = 0x21FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB40u;
    // 0x21fb44: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110790u, 0x21FB40u, 0x21FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB48u;
label_21fb48:
    // 0x21fb48: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_21fb4c:
    if (ctx->pc == 0x21FB4Cu) {
        ctx->pc = 0x21FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB48u;
        // 0x21fb4c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB50u;
        goto label_21fb50;
    }
    ctx->pc = 0x21FB48u;
    {
        const bool branch_taken_0x21fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB48u;
        // 0x21fb4c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb48) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FB50u;
label_21fb50:
    // 0x21fb50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21fb54:
    // 0x21fb54: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fb54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fb58:
    // 0x21fb58: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x21fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_21fb5c:
    // 0x21fb5c: 0x24070072  addiu       $a3, $zero, 0x72
    ctx->pc = 0x21fb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_21fb60:
    // 0x21fb60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21fb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21fb64:
    // 0x21fb64: 0x90830410  lbu         $v1, 0x410($a0)
    ctx->pc = 0x21fb64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1040)));
label_21fb68:
    // 0x21fb68: 0x146001f3  bnez        $v1, . + 4 + (0x1F3 << 2)
label_21fb6c:
    if (ctx->pc == 0x21FB6Cu) {
        ctx->pc = 0x21FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB68u;
        // 0x21fb6c: 0x222380b  movn        $a3, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB70u;
        goto label_21fb70;
    }
    ctx->pc = 0x21FB68u;
    {
        const bool branch_taken_0x21fb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB68u;
        // 0x21fb6c: 0x222380b  movn        $a3, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb68) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21FB70u;
label_21fb70:
    // 0x21fb70: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x21fb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21fb74:
    // 0x21fb74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fb78:
    // 0x21fb78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fb7c:
    // 0x21fb7c: 0x1000016a  b           . + 4 + (0x16A << 2)
label_21fb80:
    if (ctx->pc == 0x21FB80u) {
        ctx->pc = 0x21FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB7Cu;
        // 0x21fb80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB84u;
        goto label_21fb84;
    }
    ctx->pc = 0x21FB7Cu;
    {
        const bool branch_taken_0x21fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB7Cu;
        // 0x21fb80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb7c) {
            ctx->pc = 0x220128u;
            goto label_220128;
        }
    }
    ctx->pc = 0x21FB84u;
label_21fb84:
    // 0x21fb84: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fb84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fb88:
    // 0x21fb88: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x21fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_21fb8c:
    // 0x21fb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fb90:
    // 0x21fb90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fb94:
    // 0x21fb94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21fb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21fb98:
    // 0x21fb98: 0x10000162  b           . + 4 + (0x162 << 2)
label_21fb9c:
    if (ctx->pc == 0x21FB9Cu) {
        ctx->pc = 0x21FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB98u;
        // 0x21fb9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBA0u;
        goto label_21fba0;
    }
    ctx->pc = 0x21FB98u;
    {
        const bool branch_taken_0x21fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB98u;
        // 0x21fb9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb98) {
            ctx->pc = 0x220124u;
            goto label_220124;
        }
    }
    ctx->pc = 0x21FBA0u;
label_21fba0:
    // 0x21fba0: 0xc089bfc  jal         func_226FF0
label_21fba4:
    if (ctx->pc == 0x21FBA4u) {
        ctx->pc = 0x21FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBA0u;
        // 0x21fba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBA8u;
        goto label_21fba8;
    }
    ctx->pc = 0x21FBA0u;
    SET_GPR_U32(ctx, 31, 0x21FBA8u);
    ctx->pc = 0x21FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBA0u;
    // 0x21fba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21FBA0u, 0x21FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBA8u;
label_21fba8:
    // 0x21fba8: 0xc0e57ce  jal         func_395F38
label_21fbac:
    if (ctx->pc == 0x21FBACu) {
        ctx->pc = 0x21FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBA8u;
        // 0x21fbac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBB0u;
        goto label_21fbb0;
    }
    ctx->pc = 0x21FBA8u;
    SET_GPR_U32(ctx, 31, 0x21FBB0u);
    ctx->pc = 0x21FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBA8u;
    // 0x21fbac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21FBA8u, 0x21FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBB0u;
label_21fbb0:
    // 0x21fbb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21fbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fbb4:
    // 0x21fbb4: 0x10a001e0  beqz        $a1, . + 4 + (0x1E0 << 2)
label_21fbb8:
    if (ctx->pc == 0x21FBB8u) {
        ctx->pc = 0x21FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBB4u;
        // 0x21fbb8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBBCu;
        goto label_21fbbc;
    }
    ctx->pc = 0x21FBB4u;
    {
        const bool branch_taken_0x21fbb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBB4u;
        // 0x21fbb8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbb4) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21FBBCu;
label_21fbbc:
    // 0x21fbbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_21fbc0:
    // 0x21fbc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_21fbc4:
    // 0x21fbc4: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x21fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_21fbc8:
    // 0x21fbc8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_21fbcc:
    // 0x21fbcc: 0xc0e44cc  jal         func_391330
label_21fbd0:
    if (ctx->pc == 0x21FBD0u) {
        ctx->pc = 0x21FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBCCu;
        // 0x21fbd0: 0x94a50112  lhu         $a1, 0x112($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBD4u;
        goto label_21fbd4;
    }
    ctx->pc = 0x21FBCCu;
    SET_GPR_U32(ctx, 31, 0x21FBD4u);
    ctx->pc = 0x21FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBCCu;
    // 0x21fbd0: 0x94a50112  lhu         $a1, 0x112($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21FBCCu, 0x21FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBD4u;
label_21fbd4:
    // 0x21fbd4: 0x90500064  lbu         $s0, 0x64($v0)
    ctx->pc = 0x21fbd4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_21fbd8:
    // 0x21fbd8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x21fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_21fbdc:
    // 0x21fbdc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_21fbe0:
    if (ctx->pc == 0x21FBE0u) {
        ctx->pc = 0x21FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBDCu;
        // 0x21fbe0: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBE4u;
        goto label_21fbe4;
    }
    ctx->pc = 0x21FBDCu;
    {
        const bool branch_taken_0x21fbdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBDCu;
        // 0x21fbe0: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbdc) {
            ctx->pc = 0x21FBECu;
            goto label_21fbec;
        }
    }
    ctx->pc = 0x21FBE4u;
label_21fbe4:
    // 0x21fbe4: 0x10000007  b           . + 4 + (0x7 << 2)
label_21fbe8:
    if (ctx->pc == 0x21FBE8u) {
        ctx->pc = 0x21FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE4u;
        // 0x21fbe8: 0x2405008d  addiu       $a1, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBECu;
        goto label_21fbec;
    }
    ctx->pc = 0x21FBE4u;
    {
        const bool branch_taken_0x21fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE4u;
        // 0x21fbe8: 0x2405008d  addiu       $a1, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbe4) {
            ctx->pc = 0x21FC04u;
            goto label_21fc04;
        }
    }
    ctx->pc = 0x21FBECu;
label_21fbec:
    // 0x21fbec: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_21fbf0:
    if (ctx->pc == 0x21FBF0u) {
        ctx->pc = 0x21FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBECu;
        // 0x21fbf0: 0x2405008e  addiu       $a1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBF4u;
        goto label_21fbf4;
    }
    ctx->pc = 0x21FBECu;
    {
        const bool branch_taken_0x21fbec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBECu;
        // 0x21fbf0: 0x2405008e  addiu       $a1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbec) {
            ctx->pc = 0x21FBFCu;
            goto label_21fbfc;
        }
    }
    ctx->pc = 0x21FBF4u;
label_21fbf4:
    // 0x21fbf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_21fbf8:
    if (ctx->pc == 0x21FBF8u) {
        ctx->pc = 0x21FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBF4u;
        // 0x21fbf8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBFCu;
        goto label_21fbfc;
    }
    ctx->pc = 0x21FBF4u;
    {
        const bool branch_taken_0x21fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBF4u;
        // 0x21fbf8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbf4) {
            ctx->pc = 0x21FC04u;
            goto label_21fc04;
        }
    }
    ctx->pc = 0x21FBFCu;
label_21fbfc:
    // 0x21fbfc: 0x3a02003c  xori        $v0, $s0, 0x3C
    ctx->pc = 0x21fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)60);
label_21fc00:
    // 0x21fc00: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x21fc00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_21fc04:
    // 0x21fc04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_21fc08:
    if (ctx->pc == 0x21FC08u) {
        ctx->pc = 0x21FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC04u;
        // 0x21fc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC0Cu;
        goto label_21fc0c;
    }
    ctx->pc = 0x21FC04u;
    {
        const bool branch_taken_0x21fc04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC04u;
        // 0x21fc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc04) {
            ctx->pc = 0x21FC18u;
            goto label_21fc18;
        }
    }
    ctx->pc = 0x21FC0Cu;
label_21fc0c:
    // 0x21fc0c: 0xc087d52  jal         func_21F548
label_21fc10:
    if (ctx->pc == 0x21FC10u) {
        ctx->pc = 0x21FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC0Cu;
        // 0x21fc10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC14u;
        goto label_21fc14;
    }
    ctx->pc = 0x21FC0Cu;
    SET_GPR_U32(ctx, 31, 0x21FC14u);
    ctx->pc = 0x21FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC0Cu;
    // 0x21fc10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F548u, 0x21FC0Cu, 0x21FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC14u;
label_21fc14:
    // 0x21fc14: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_21fc18:
    // 0x21fc18: 0xc043d5e  jal         func_10F578
label_21fc1c:
    if (ctx->pc == 0x21FC1Cu) {
        ctx->pc = 0x21FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC18u;
        // 0x21fc1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC20u;
        goto label_21fc20;
    }
    ctx->pc = 0x21FC18u;
    SET_GPR_U32(ctx, 31, 0x21FC20u);
    ctx->pc = 0x21FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC18u;
    // 0x21fc1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21FC18u, 0x21FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC20u;
label_21fc20:
    // 0x21fc20: 0x544001c6  bnel        $v0, $zero, . + 4 + (0x1C6 << 2)
label_21fc24:
    if (ctx->pc == 0x21FC24u) {
        ctx->pc = 0x21FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC20u;
        // 0x21fc24: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC28u;
        goto label_21fc28;
    }
    ctx->pc = 0x21FC20u;
    {
        const bool branch_taken_0x21fc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fc20) {
            ctx->pc = 0x21FC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FC20u;
            // 0x21fc24: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FC28u;
label_21fc28:
    // 0x21fc28: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21fc2c:
    // 0x21fc2c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21fc2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21fc30:
    // 0x21fc30: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_21fc34:
    if (ctx->pc == 0x21FC34u) {
        ctx->pc = 0x21FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC30u;
        // 0x21fc34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC38u;
        goto label_21fc38;
    }
    ctx->pc = 0x21FC30u;
    {
        const bool branch_taken_0x21fc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC30u;
        // 0x21fc34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc30) {
            ctx->pc = 0x21FC84u;
            goto label_21fc84;
        }
    }
    ctx->pc = 0x21FC38u;
label_21fc38:
    // 0x21fc38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fc3c:
    // 0x21fc3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fc40:
    // 0x21fc40: 0xc08cf14  jal         func_233C50
label_21fc44:
    if (ctx->pc == 0x21FC44u) {
        ctx->pc = 0x21FC48u;
        goto label_21fc48;
    }
    ctx->pc = 0x21FC40u;
    SET_GPR_U32(ctx, 31, 0x21FC48u);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x21FC40u, 0x21FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC48u;
label_21fc48:
    // 0x21fc48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21fc4c:
    if (ctx->pc == 0x21FC4Cu) {
        ctx->pc = 0x21FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC48u;
        // 0x21fc4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC50u;
        goto label_21fc50;
    }
    ctx->pc = 0x21FC48u;
    {
        const bool branch_taken_0x21fc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC48u;
        // 0x21fc4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc48) {
            ctx->pc = 0x21FC60u;
            goto label_21fc60;
        }
    }
    ctx->pc = 0x21FC50u;
label_21fc50:
    // 0x21fc50: 0xc0878ea  jal         func_21E3A8
label_21fc54:
    if (ctx->pc == 0x21FC54u) {
        ctx->pc = 0x21FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC50u;
        // 0x21fc54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC58u;
        goto label_21fc58;
    }
    ctx->pc = 0x21FC50u;
    SET_GPR_U32(ctx, 31, 0x21FC58u);
    ctx->pc = 0x21FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC50u;
    // 0x21fc54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x21FC50u, 0x21FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC58u;
label_21fc58:
    // 0x21fc58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x21fc58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_21fc5c:
    // 0x21fc5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21fc60:
    // 0x21fc60: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x21fc60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_21fc64:
    // 0x21fc64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21fc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fc68:
    // 0x21fc68: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21fc6c:
    // 0x21fc6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21fc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21fc70:
    // 0x21fc70: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21fc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21fc74:
    // 0x21fc74: 0xc04420c  jal         func_110830
label_21fc78:
    if (ctx->pc == 0x21FC78u) {
        ctx->pc = 0x21FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC74u;
        // 0x21fc78: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC7Cu;
        goto label_21fc7c;
    }
    ctx->pc = 0x21FC74u;
    SET_GPR_U32(ctx, 31, 0x21FC7Cu);
    ctx->pc = 0x21FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC74u;
    // 0x21fc78: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x21FC74u, 0x21FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC7Cu;
label_21fc7c:
    // 0x21fc7c: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_21fc80:
    if (ctx->pc == 0x21FC80u) {
        ctx->pc = 0x21FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC7Cu;
        // 0x21fc80: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FC84u;
        goto label_21fc84;
    }
    ctx->pc = 0x21FC7Cu;
    {
        const bool branch_taken_0x21fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC7Cu;
        // 0x21fc80: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc7c) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21FC84u;
label_21fc84:
    // 0x21fc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21fc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fc88:
    // 0x21fc88: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21fc8c:
    // 0x21fc8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21fc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21fc90:
    // 0x21fc90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fc94:
    // 0x21fc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21fc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21fc98:
    // 0x21fc98: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21fc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21fc9c:
    // 0x21fc9c: 0xc0441e4  jal         func_110790
label_21fca0:
    if (ctx->pc == 0x21FCA0u) {
        ctx->pc = 0x21FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC9Cu;
        // 0x21fca0: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCA4u;
        goto label_21fca4;
    }
    ctx->pc = 0x21FC9Cu;
    SET_GPR_U32(ctx, 31, 0x21FCA4u);
    ctx->pc = 0x21FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC9Cu;
    // 0x21fca0: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110790u, 0x21FC9Cu, 0x21FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCA4u;
label_21fca4:
    // 0x21fca4: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_21fca8:
    if (ctx->pc == 0x21FCA8u) {
        ctx->pc = 0x21FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCA4u;
        // 0x21fca8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCACu;
        goto label_21fcac;
    }
    ctx->pc = 0x21FCA4u;
    {
        const bool branch_taken_0x21fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCA4u;
        // 0x21fca8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fca4) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21FCACu;
label_21fcac:
    // 0x21fcac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fcb0:
    // 0x21fcb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fcb4:
    // 0x21fcb4: 0xc089b98  jal         func_226E60
label_21fcb8:
    if (ctx->pc == 0x21FCB8u) {
        ctx->pc = 0x21FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCB4u;
        // 0x21fcb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCBCu;
        goto label_21fcbc;
    }
    ctx->pc = 0x21FCB4u;
    SET_GPR_U32(ctx, 31, 0x21FCBCu);
    ctx->pc = 0x21FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCB4u;
    // 0x21fcb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21FCB4u, 0x21FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCBCu;
label_21fcbc:
    // 0x21fcbc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21fcc0:
    if (ctx->pc == 0x21FCC0u) {
        ctx->pc = 0x21FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCBCu;
        // 0x21fcc0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCC4u;
        goto label_21fcc4;
    }
    ctx->pc = 0x21FCBCu;
    {
        const bool branch_taken_0x21fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fcbc) {
            ctx->pc = 0x21FCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FCBCu;
            // 0x21fcc0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FCDCu;
            goto label_21fcdc;
        }
    }
    ctx->pc = 0x21FCC4u;
label_21fcc4:
    // 0x21fcc4: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x21fcc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_21fcc8:
    // 0x21fcc8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21fcc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21fccc:
    // 0x21fccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21fcd0:
    if (ctx->pc == 0x21FCD0u) {
        ctx->pc = 0x21FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCCCu;
        // 0x21fcd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCD4u;
        goto label_21fcd4;
    }
    ctx->pc = 0x21FCCCu;
    {
        const bool branch_taken_0x21fccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCCCu;
        // 0x21fcd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fccc) {
            ctx->pc = 0x21FCDCu;
            goto label_21fcdc;
        }
    }
    ctx->pc = 0x21FCD4u;
label_21fcd4:
    // 0x21fcd4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21fcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_21fcd8:
    // 0x21fcd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fcdc:
    // 0x21fcdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fce0:
    // 0x21fce0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21fce0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21fce4:
    // 0x21fce4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21fce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21fce8:
    // 0x21fce8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x21fce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21fcec:
    // 0x21fcec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fcecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fcf0:
    // 0x21fcf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21fcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fcf4:
    // 0x21fcf4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21fcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fcf8:
    // 0x21fcf8: 0xc088178  jal         func_2205E0
label_21fcfc:
    if (ctx->pc == 0x21FCFCu) {
        ctx->pc = 0x21FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCF8u;
        // 0x21fcfc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD00u;
        goto label_21fd00;
    }
    ctx->pc = 0x21FCF8u;
    SET_GPR_U32(ctx, 31, 0x21FD00u);
    ctx->pc = 0x21FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCF8u;
    // 0x21fcfc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x21FCF8u, 0x21FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD00u;
label_21fd00:
    // 0x21fd00: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x21fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_21fd04:
    // 0x21fd04: 0xc043d5e  jal         func_10F578
label_21fd08:
    if (ctx->pc == 0x21FD08u) {
        ctx->pc = 0x21FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD04u;
        // 0x21fd08: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD0Cu;
        goto label_21fd0c;
    }
    ctx->pc = 0x21FD04u;
    SET_GPR_U32(ctx, 31, 0x21FD0Cu);
    ctx->pc = 0x21FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD04u;
    // 0x21fd08: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21FD04u, 0x21FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD0Cu;
label_21fd0c:
    // 0x21fd0c: 0x1440018b  bnez        $v0, . + 4 + (0x18B << 2)
label_21fd10:
    if (ctx->pc == 0x21FD10u) {
        ctx->pc = 0x21FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD0Cu;
        // 0x21fd10: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD14u;
        goto label_21fd14;
    }
    ctx->pc = 0x21FD0Cu;
    {
        const bool branch_taken_0x21fd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD0Cu;
        // 0x21fd10: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd0c) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FD14u;
label_21fd14:
    // 0x21fd14: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x21fd14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_21fd18:
    // 0x21fd18: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x21fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_21fd1c:
    // 0x21fd1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fd20:
    // 0x21fd20: 0x100000fe  b           . + 4 + (0xFE << 2)
label_21fd24:
    if (ctx->pc == 0x21FD24u) {
        ctx->pc = 0x21FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD20u;
        // 0x21fd24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD28u;
        goto label_21fd28;
    }
    ctx->pc = 0x21FD20u;
    {
        const bool branch_taken_0x21fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD20u;
        // 0x21fd24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd20) {
            ctx->pc = 0x22011Cu;
            goto label_22011c;
        }
    }
    ctx->pc = 0x21FD28u;
label_21fd28:
    // 0x21fd28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fd2c:
    // 0x21fd2c: 0xc086c8a  jal         func_21B228
label_21fd30:
    if (ctx->pc == 0x21FD30u) {
        ctx->pc = 0x21FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD2Cu;
        // 0x21fd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD34u;
        goto label_21fd34;
    }
    ctx->pc = 0x21FD2Cu;
    SET_GPR_U32(ctx, 31, 0x21FD34u);
    ctx->pc = 0x21FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD2Cu;
    // 0x21fd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B228u, 0x21FD2Cu, 0x21FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD34u;
label_21fd34:
    // 0x21fd34: 0x10000181  b           . + 4 + (0x181 << 2)
label_21fd38:
    if (ctx->pc == 0x21FD38u) {
        ctx->pc = 0x21FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD34u;
        // 0x21fd38: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD3Cu;
        goto label_21fd3c;
    }
    ctx->pc = 0x21FD34u;
    {
        const bool branch_taken_0x21fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD34u;
        // 0x21fd38: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd34) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FD3Cu;
label_21fd3c:
    // 0x21fd3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21fd40:
    // 0x21fd40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fd44:
    // 0x21fd44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21fd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21fd48:
    // 0x21fd48: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21fd48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21fd4c:
    // 0x21fd4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fd50:
    // 0x21fd50: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_21fd54:
    if (ctx->pc == 0x21FD54u) {
        ctx->pc = 0x21FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD50u;
        // 0x21fd54: 0x240500cb  addiu       $a1, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD58u;
        goto label_21fd58;
    }
    ctx->pc = 0x21FD50u;
    {
        const bool branch_taken_0x21fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD50u;
        // 0x21fd54: 0x240500cb  addiu       $a1, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd50) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x21FD58u;
label_21fd58:
    // 0x21fd58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21fd5c:
    // 0x21fd5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fd5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fd60:
    // 0x21fd60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fd64:
    // 0x21fd64: 0xc089b98  jal         func_226E60
label_21fd68:
    if (ctx->pc == 0x21FD68u) {
        ctx->pc = 0x21FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD64u;
        // 0x21fd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD6Cu;
        goto label_21fd6c;
    }
    ctx->pc = 0x21FD64u;
    SET_GPR_U32(ctx, 31, 0x21FD6Cu);
    ctx->pc = 0x21FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD64u;
    // 0x21fd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21FD64u, 0x21FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD6Cu;
label_21fd6c:
    // 0x21fd6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21fd70:
    if (ctx->pc == 0x21FD70u) {
        ctx->pc = 0x21FD74u;
        goto label_21fd74;
    }
    ctx->pc = 0x21FD6Cu;
    {
        const bool branch_taken_0x21fd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fd6c) {
            ctx->pc = 0x21FD88u;
            goto label_21fd88;
        }
    }
    ctx->pc = 0x21FD74u;
label_21fd74:
    // 0x21fd74: 0xc089baa  jal         func_226EA8
label_21fd78:
    if (ctx->pc == 0x21FD78u) {
        ctx->pc = 0x21FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD74u;
        // 0x21fd78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD7Cu;
        goto label_21fd7c;
    }
    ctx->pc = 0x21FD74u;
    SET_GPR_U32(ctx, 31, 0x21FD7Cu);
    ctx->pc = 0x21FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD74u;
    // 0x21fd78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x21FD74u, 0x21FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD7Cu;
label_21fd7c:
    // 0x21fd7c: 0xc105e98  jal         func_417A60
label_21fd80:
    if (ctx->pc == 0x21FD80u) {
        ctx->pc = 0x21FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD7Cu;
        // 0x21fd80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD84u;
        goto label_21fd84;
    }
    ctx->pc = 0x21FD7Cu;
    SET_GPR_U32(ctx, 31, 0x21FD84u);
    ctx->pc = 0x21FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD7Cu;
    // 0x21fd80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x21FD7Cu, 0x21FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD84u;
label_21fd84:
    // 0x21fd84: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x21fd84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_21fd88:
    // 0x21fd88: 0xc087502  jal         func_21D408
label_21fd8c:
    if (ctx->pc == 0x21FD8Cu) {
        ctx->pc = 0x21FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD88u;
        // 0x21fd8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD90u;
        goto label_21fd90;
    }
    ctx->pc = 0x21FD88u;
    SET_GPR_U32(ctx, 31, 0x21FD90u);
    ctx->pc = 0x21FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD88u;
    // 0x21fd8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21FD88u, 0x21FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD90u;
label_21fd90:
    // 0x21fd90: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x21fd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_21fd94:
    // 0x21fd94: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x21fd94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_21fd98:
    // 0x21fd98: 0x12000167  beqz        $s0, . + 4 + (0x167 << 2)
label_21fd9c:
    if (ctx->pc == 0x21FD9Cu) {
        ctx->pc = 0x21FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD98u;
        // 0x21fd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDA0u;
        goto label_21fda0;
    }
    ctx->pc = 0x21FD98u;
    {
        const bool branch_taken_0x21fd98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD98u;
        // 0x21fd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd98) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0xc089bfc  jal         func_226FF0
label_21fda4:
    if (ctx->pc == 0x21FDA4u) {
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA0u;
        // 0x21fda4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDA8u;
        goto label_21fda8;
    }
    ctx->pc = 0x21FDA0u;
    SET_GPR_U32(ctx, 31, 0x21FDA8u);
    ctx->pc = 0x21FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDA0u;
    // 0x21fda4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21FDA0u, 0x21FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDA8u;
label_21fda8:
    // 0x21fda8: 0xc0e57ce  jal         func_395F38
label_21fdac:
    if (ctx->pc == 0x21FDACu) {
        ctx->pc = 0x21FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA8u;
        // 0x21fdac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDB0u;
        goto label_21fdb0;
    }
    ctx->pc = 0x21FDA8u;
    SET_GPR_U32(ctx, 31, 0x21FDB0u);
    ctx->pc = 0x21FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDA8u;
    // 0x21fdac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21FDA8u, 0x21FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDB0u;
label_21fdb0:
    // 0x21fdb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21fdb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fdb4:
    // 0x21fdb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_21fdb8:
    if (ctx->pc == 0x21FDB8u) {
        ctx->pc = 0x21FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB4u;
        // 0x21fdb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDBCu;
        goto label_21fdbc;
    }
    ctx->pc = 0x21FDB4u;
    {
        const bool branch_taken_0x21fdb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB4u;
        // 0x21fdb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdb4) {
            ctx->pc = 0x21FDD8u;
            goto label_21fdd8;
        }
    }
    ctx->pc = 0x21FDBCu;
label_21fdbc:
    // 0x21fdbc: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x21fdbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_21fdc0:
    // 0x21fdc0: 0xc0e44cc  jal         func_391330
label_21fdc4:
    if (ctx->pc == 0x21FDC4u) {
        ctx->pc = 0x21FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDC0u;
        // 0x21fdc4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDC8u;
        goto label_21fdc8;
    }
    ctx->pc = 0x21FDC0u;
    SET_GPR_U32(ctx, 31, 0x21FDC8u);
    ctx->pc = 0x21FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDC0u;
    // 0x21fdc4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21FDC0u, 0x21FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDC8u;
label_21fdc8:
    // 0x21fdc8: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_21fdcc:
    // 0x21fdcc: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_21fdd0:
    // 0x21fdd0: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x21fdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_21fdd4:
    // 0x21fdd4: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x21fdd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_21fdd8:
    // 0x21fdd8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_21fddc:
    // 0x21fddc: 0x8e71489c  lw          $s1, 0x489C($s3)
    ctx->pc = 0x21fddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_21fde0:
    // 0x21fde0: 0xc136ad6  jal         func_4DAB58
label_21fde4:
    if (ctx->pc == 0x21FDE4u) {
        ctx->pc = 0x21FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE0u;
        // 0x21fde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDE8u;
        goto label_21fde8;
    }
    ctx->pc = 0x21FDE0u;
    SET_GPR_U32(ctx, 31, 0x21FDE8u);
    ctx->pc = 0x21FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDE0u;
    // 0x21fde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x21FDE0u, 0x21FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDE8u;
label_21fde8:
    // 0x21fde8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21fde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fdec:
    // 0x21fdec: 0xc136ad4  jal         func_4DAB50
label_21fdf0:
    if (ctx->pc == 0x21FDF0u) {
        ctx->pc = 0x21FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDECu;
        // 0x21fdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDF4u;
        goto label_21fdf4;
    }
    ctx->pc = 0x21FDECu;
    SET_GPR_U32(ctx, 31, 0x21FDF4u);
    ctx->pc = 0x21FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDECu;
    // 0x21fdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x21FDECu, 0x21FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDF4u;
label_21fdf4:
    // 0x21fdf4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_21fdf8:
    // 0x21fdf8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x21fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_21fdfc:
    // 0x21fdfc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x21fdfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21fe00:
    // 0x21fe00: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x21fe00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_21fe04:
    // 0x21fe04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21fe08:
    // 0x21fe08: 0x14440034  bne         $v0, $a0, . + 4 + (0x34 << 2)
label_21fe0c:
    if (ctx->pc == 0x21FE0Cu) {
        ctx->pc = 0x21FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE08u;
        // 0x21fe0c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE10u;
        goto label_21fe10;
    }
    ctx->pc = 0x21FE08u;
    {
        const bool branch_taken_0x21fe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE08u;
        // 0x21fe0c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe08) {
            ctx->pc = 0x21FEDCu;
            goto label_21fedc;
        }
    }
    ctx->pc = 0x21FE10u;
label_21fe10:
    // 0x21fe10: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x21fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_21fe14:
    // 0x21fe14: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21fe18:
    // 0x21fe18: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x21fe18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_21fe1c:
    // 0x21fe1c: 0x1464002f  bne         $v1, $a0, . + 4 + (0x2F << 2)
label_21fe20:
    if (ctx->pc == 0x21FE20u) {
        ctx->pc = 0x21FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE1Cu;
        // 0x21fe20: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE24u;
        goto label_21fe24;
    }
    ctx->pc = 0x21FE1Cu;
    {
        const bool branch_taken_0x21fe1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x21FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE1Cu;
        // 0x21fe20: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe1c) {
            ctx->pc = 0x21FEDCu;
            goto label_21fedc;
        }
    }
    ctx->pc = 0x21FE24u;
label_21fe24:
    // 0x21fe24: 0xc089b98  jal         func_226E60
label_21fe28:
    if (ctx->pc == 0x21FE28u) {
        ctx->pc = 0x21FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE24u;
        // 0x21fe28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE2Cu;
        goto label_21fe2c;
    }
    ctx->pc = 0x21FE24u;
    SET_GPR_U32(ctx, 31, 0x21FE2Cu);
    ctx->pc = 0x21FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE24u;
    // 0x21fe28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21FE24u, 0x21FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE2Cu;
label_21fe2c:
    // 0x21fe2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21fe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fe30:
    // 0x21fe30: 0xc087502  jal         func_21D408
label_21fe34:
    if (ctx->pc == 0x21FE34u) {
        ctx->pc = 0x21FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE30u;
        // 0x21fe34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE38u;
        goto label_21fe38;
    }
    ctx->pc = 0x21FE30u;
    SET_GPR_U32(ctx, 31, 0x21FE38u);
    ctx->pc = 0x21FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE30u;
    // 0x21fe34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21FE30u, 0x21FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE38u;
label_21fe38:
    // 0x21fe38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21fe3c:
    // 0x21fe3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21fe40:
    // 0x21fe40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_21fe44:
    if (ctx->pc == 0x21FE44u) {
        ctx->pc = 0x21FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE40u;
        // 0x21fe44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE48u;
        goto label_21fe48;
    }
    ctx->pc = 0x21FE40u;
    {
        const bool branch_taken_0x21fe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE40u;
        // 0x21fe44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe40) {
            ctx->pc = 0x21FE50u;
            goto label_21fe50;
        }
    }
    ctx->pc = 0x21FE48u;
label_21fe48:
    // 0x21fe48: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x21fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_21fe4c:
    // 0x21fe4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fe4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fe50:
    // 0x21fe50: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_21fe54:
    if (ctx->pc == 0x21FE54u) {
        ctx->pc = 0x21FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE50u;
        // 0x21fe54: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE58u;
        goto label_21fe58;
    }
    ctx->pc = 0x21FE50u;
    {
        const bool branch_taken_0x21fe50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE50u;
        // 0x21fe54: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe50) {
            ctx->pc = 0x21FED8u;
            goto label_21fed8;
        }
    }
    ctx->pc = 0x21FE58u;
label_21fe58:
    // 0x21fe58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21fe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fe5c:
    // 0x21fe5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fe60:
    // 0x21fe60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fe60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fe64:
    // 0x21fe64: 0xc0888a2  jal         func_222288
label_21fe68:
    if (ctx->pc == 0x21FE68u) {
        ctx->pc = 0x21FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE64u;
        // 0x21fe68: 0x27a70048  addiu       $a3, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE6Cu;
        goto label_21fe6c;
    }
    ctx->pc = 0x21FE64u;
    SET_GPR_U32(ctx, 31, 0x21FE6Cu);
    ctx->pc = 0x21FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE64u;
    // 0x21fe68: 0x27a70048  addiu       $a3, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x21FE64u, 0x21FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE6Cu;
label_21fe6c:
    // 0x21fe6c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_21fe70:
    if (ctx->pc == 0x21FE70u) {
        ctx->pc = 0x21FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE6Cu;
        // 0x21fe70: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE74u;
        goto label_21fe74;
    }
    ctx->pc = 0x21FE6Cu;
    {
        const bool branch_taken_0x21fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE6Cu;
        // 0x21fe70: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe6c) {
            ctx->pc = 0x21FEDCu;
            goto label_21fedc;
        }
    }
    ctx->pc = 0x21FE74u;
label_21fe74:
    // 0x21fe74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_21fe78:
    // 0x21fe78: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x21fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21fe7c:
    // 0x21fe7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21fe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fe80:
    // 0x21fe80: 0xc10c1fa  jal         func_4307E8
label_21fe84:
    if (ctx->pc == 0x21FE84u) {
        ctx->pc = 0x21FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE80u;
        // 0x21fe84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE88u;
        goto label_21fe88;
    }
    ctx->pc = 0x21FE80u;
    SET_GPR_U32(ctx, 31, 0x21FE88u);
    ctx->pc = 0x21FE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE80u;
    // 0x21fe84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x21FE80u, 0x21FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE88u;
label_21fe88:
    // 0x21fe88: 0x8e4703b0  lw          $a3, 0x3B0($s2)
    ctx->pc = 0x21fe88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_21fe8c:
    // 0x21fe8c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x21fe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_21fe90:
    // 0x21fe90: 0x24c6aa50  addiu       $a2, $a2, -0x55B0
    ctx->pc = 0x21fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945360));
label_21fe94:
    // 0x21fe94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fe98:
    // 0x21fe98: 0xc10ca04  jal         func_432810
label_21fe9c:
    if (ctx->pc == 0x21FE9Cu) {
        ctx->pc = 0x21FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE98u;
        // 0x21fe9c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEA0u;
        goto label_21fea0;
    }
    ctx->pc = 0x21FE98u;
    SET_GPR_U32(ctx, 31, 0x21FEA0u);
    ctx->pc = 0x21FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE98u;
    // 0x21fe9c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x21FE98u, 0x21FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEA0u;
label_21fea0:
    // 0x21fea0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x21fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_21fea4:
    // 0x21fea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21fea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fea8:
    // 0x21fea8: 0xc050fda  jal         func_143F68
label_21feac:
    if (ctx->pc == 0x21FEACu) {
        ctx->pc = 0x21FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEA8u;
        // 0x21feac: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEB0u;
        goto label_21feb0;
    }
    ctx->pc = 0x21FEA8u;
    SET_GPR_U32(ctx, 31, 0x21FEB0u);
    ctx->pc = 0x21FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEA8u;
    // 0x21feac: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x21FEA8u, 0x21FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEB0u;
label_21feb0:
    // 0x21feb0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x21feb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_21feb4:
    // 0x21feb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21feb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21feb8:
    // 0x21feb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21feb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21febc:
    // 0x21febc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fec0:
    // 0x21fec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fec4:
    // 0x21fec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21fec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fec8:
    // 0x21fec8: 0xc087900  jal         func_21E400
label_21fecc:
    if (ctx->pc == 0x21FECCu) {
        ctx->pc = 0x21FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC8u;
        // 0x21fecc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FED0u;
        goto label_21fed0;
    }
    ctx->pc = 0x21FEC8u;
    SET_GPR_U32(ctx, 31, 0x21FED0u);
    ctx->pc = 0x21FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEC8u;
    // 0x21fecc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x21FEC8u, 0x21FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FED0u;
label_21fed0:
    // 0x21fed0: 0x1000011a  b           . + 4 + (0x11A << 2)
label_21fed4:
    if (ctx->pc == 0x21FED4u) {
        ctx->pc = 0x21FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED0u;
        // 0x21fed4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FED8u;
        goto label_21fed8;
    }
    ctx->pc = 0x21FED0u;
    {
        const bool branch_taken_0x21fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED0u;
        // 0x21fed4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fed0) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FED8u;
label_21fed8:
    // 0x21fed8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21fedc:
    // 0x21fedc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fee0:
    // 0x21fee0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21fee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21fee4:
    // 0x21fee4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21fee8:
    // 0x21fee8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_21feec:
    if (ctx->pc == 0x21FEECu) {
        ctx->pc = 0x21FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEE8u;
        // 0x21feec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEF0u;
        goto label_21fef0;
    }
    ctx->pc = 0x21FEE8u;
    {
        const bool branch_taken_0x21fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEE8u;
        // 0x21feec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fee8) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x21FEF0u;
label_21fef0:
    // 0x21fef0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21fef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21fef4:
    // 0x21fef4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21fef4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21fef8:
    // 0x21fef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21fefc:
    if (ctx->pc == 0x21FEFCu) {
        ctx->pc = 0x21FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF8u;
        // 0x21fefc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF00u;
        goto label_21ff00;
    }
    ctx->pc = 0x21FEF8u;
    {
        const bool branch_taken_0x21fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF8u;
        // 0x21fefc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fef8) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FF00u;
label_21ff00:
    // 0x21ff00: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_21ff04:
    // 0x21ff04: 0x8c640268  lw          $a0, 0x268($v1)
    ctx->pc = 0x21ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
label_21ff08:
    // 0x21ff08: 0x1c80010c  bgtz        $a0, . + 4 + (0x10C << 2)
label_21ff0c:
    if (ctx->pc == 0x21FF0Cu) {
        ctx->pc = 0x21FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF08u;
        // 0x21ff0c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF10u;
        goto label_21ff10;
    }
    ctx->pc = 0x21FF08u;
    {
        const bool branch_taken_0x21ff08 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x21FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF08u;
        // 0x21ff0c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff08) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FF10u;
label_21ff10:
    // 0x21ff10: 0xc0a47b4  jal         func_291ED0
label_21ff14:
    if (ctx->pc == 0x21FF14u) {
        ctx->pc = 0x21FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF10u;
        // 0x21ff14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF18u;
        goto label_21ff18;
    }
    ctx->pc = 0x21FF10u;
    SET_GPR_U32(ctx, 31, 0x21FF18u);
    ctx->pc = 0x21FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF10u;
    // 0x21ff14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x21FF10u, 0x21FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF18u;
label_21ff18:
    // 0x21ff18: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
label_21ff1c:
    if (ctx->pc == 0x21FF1Cu) {
        ctx->pc = 0x21FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF18u;
        // 0x21ff1c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF20u;
        goto label_21ff20;
    }
    ctx->pc = 0x21FF18u;
    {
        const bool branch_taken_0x21ff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF18u;
        // 0x21ff1c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff18) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FF20u;
label_21ff20:
    // 0x21ff20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21ff24:
    // 0x21ff24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ff24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21ff28:
    // 0x21ff28: 0xc089b98  jal         func_226E60
label_21ff2c:
    if (ctx->pc == 0x21FF2Cu) {
        ctx->pc = 0x21FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF28u;
        // 0x21ff2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF30u;
        goto label_21ff30;
    }
    ctx->pc = 0x21FF28u;
    SET_GPR_U32(ctx, 31, 0x21FF30u);
    ctx->pc = 0x21FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF28u;
    // 0x21ff2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21FF28u, 0x21FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF30u;
label_21ff30:
    // 0x21ff30: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21ff34:
    if (ctx->pc == 0x21FF34u) {
        ctx->pc = 0x21FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF30u;
        // 0x21ff34: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF38u;
        goto label_21ff38;
    }
    ctx->pc = 0x21FF30u;
    {
        const bool branch_taken_0x21ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff30) {
            ctx->pc = 0x21FF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FF30u;
            // 0x21ff34: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF50u;
            goto label_21ff50;
        }
    }
    ctx->pc = 0x21FF38u;
label_21ff38:
    // 0x21ff38: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x21ff38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_21ff3c:
    // 0x21ff3c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21ff3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21ff40:
    // 0x21ff40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21ff44:
    if (ctx->pc == 0x21FF44u) {
        ctx->pc = 0x21FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF40u;
        // 0x21ff44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF48u;
        goto label_21ff48;
    }
    ctx->pc = 0x21FF40u;
    {
        const bool branch_taken_0x21ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF40u;
        // 0x21ff44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff40) {
            ctx->pc = 0x21FF50u;
            goto label_21ff50;
        }
    }
    ctx->pc = 0x21FF48u;
label_21ff48:
    // 0x21ff48: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_21ff4c:
    // 0x21ff4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ff4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21ff50:
    // 0x21ff50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ff54:
    // 0x21ff54: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21ff54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21ff58:
    // 0x21ff58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21ff58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21ff5c:
    // 0x21ff5c: 0x10000041  b           . + 4 + (0x41 << 2)
label_21ff60:
    if (ctx->pc == 0x21FF60u) {
        ctx->pc = 0x21FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF5Cu;
        // 0x21ff60: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF64u;
        goto label_21ff64;
    }
    ctx->pc = 0x21FF5Cu;
    {
        const bool branch_taken_0x21ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF5Cu;
        // 0x21ff60: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff5c) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x21FF64u;
label_21ff64:
    // 0x21ff64: 0xc0a47b4  jal         func_291ED0
label_21ff68:
    if (ctx->pc == 0x21FF68u) {
        ctx->pc = 0x21FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF64u;
        // 0x21ff68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF6Cu;
        goto label_21ff6c;
    }
    ctx->pc = 0x21FF64u;
    SET_GPR_U32(ctx, 31, 0x21FF6Cu);
    ctx->pc = 0x21FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF64u;
    // 0x21ff68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x21FF64u, 0x21FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF6Cu;
label_21ff6c:
    // 0x21ff6c: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
label_21ff70:
    if (ctx->pc == 0x21FF70u) {
        ctx->pc = 0x21FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF6Cu;
        // 0x21ff70: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF74u;
        goto label_21ff74;
    }
    ctx->pc = 0x21FF6Cu;
    {
        const bool branch_taken_0x21ff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF6Cu;
        // 0x21ff70: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff6c) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FF74u;
label_21ff74:
    // 0x21ff74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ff74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21ff78:
    // 0x21ff78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ff78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21ff7c:
    // 0x21ff7c: 0xc089b98  jal         func_226E60
label_21ff80:
    if (ctx->pc == 0x21FF80u) {
        ctx->pc = 0x21FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF7Cu;
        // 0x21ff80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF84u;
        goto label_21ff84;
    }
    ctx->pc = 0x21FF7Cu;
    SET_GPR_U32(ctx, 31, 0x21FF84u);
    ctx->pc = 0x21FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF7Cu;
    // 0x21ff80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21FF7Cu, 0x21FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF84u;
label_21ff84:
    // 0x21ff84: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21ff88:
    if (ctx->pc == 0x21FF88u) {
        ctx->pc = 0x21FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF84u;
        // 0x21ff88: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF8Cu;
        goto label_21ff8c;
    }
    ctx->pc = 0x21FF84u;
    {
        const bool branch_taken_0x21ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff84) {
            ctx->pc = 0x21FF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FF84u;
            // 0x21ff88: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FFA4u;
            goto label_21ffa4;
        }
    }
    ctx->pc = 0x21FF8Cu;
label_21ff8c:
    // 0x21ff8c: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x21ff8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_21ff90:
    // 0x21ff90: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21ff90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21ff94:
    // 0x21ff94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21ff98:
    if (ctx->pc == 0x21FF98u) {
        ctx->pc = 0x21FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF94u;
        // 0x21ff98: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF9Cu;
        goto label_21ff9c;
    }
    ctx->pc = 0x21FF94u;
    {
        const bool branch_taken_0x21ff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF94u;
        // 0x21ff98: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff94) {
            ctx->pc = 0x21FFA4u;
            goto label_21ffa4;
        }
    }
    ctx->pc = 0x21FF9Cu;
label_21ff9c:
    // 0x21ff9c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21ff9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_21ffa0:
    // 0x21ffa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ffa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21ffa4:
    // 0x21ffa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ffa8:
    // 0x21ffa8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21ffa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21ffac:
    // 0x21ffac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21ffacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21ffb0:
    // 0x21ffb0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_21ffb4:
    if (ctx->pc == 0x21FFB4u) {
        ctx->pc = 0x21FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFB0u;
        // 0x21ffb4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFB8u;
        goto label_21ffb8;
    }
    ctx->pc = 0x21FFB0u;
    {
        const bool branch_taken_0x21ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFB0u;
        // 0x21ffb4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffb0) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x21FFB8u;
label_21ffb8:
    // 0x21ffb8: 0xc0a47b4  jal         func_291ED0
label_21ffbc:
    if (ctx->pc == 0x21FFBCu) {
        ctx->pc = 0x21FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFB8u;
        // 0x21ffbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFC0u;
        goto label_21ffc0;
    }
    ctx->pc = 0x21FFB8u;
    SET_GPR_U32(ctx, 31, 0x21FFC0u);
    ctx->pc = 0x21FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFB8u;
    // 0x21ffbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x21FFB8u, 0x21FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFC0u;
label_21ffc0:
    // 0x21ffc0: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
label_21ffc4:
    if (ctx->pc == 0x21FFC4u) {
        ctx->pc = 0x21FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFC0u;
        // 0x21ffc4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFC8u;
        goto label_21ffc8;
    }
    ctx->pc = 0x21FFC0u;
    {
        const bool branch_taken_0x21ffc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFC0u;
        // 0x21ffc4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffc0) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x21FFC8u;
label_21ffc8:
    // 0x21ffc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ffc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21ffcc:
    // 0x21ffcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ffccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21ffd0:
    // 0x21ffd0: 0xc089b98  jal         func_226E60
label_21ffd4:
    if (ctx->pc == 0x21FFD4u) {
        ctx->pc = 0x21FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFD0u;
        // 0x21ffd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFD8u;
        goto label_21ffd8;
    }
    ctx->pc = 0x21FFD0u;
    SET_GPR_U32(ctx, 31, 0x21FFD8u);
    ctx->pc = 0x21FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFD0u;
    // 0x21ffd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21FFD0u, 0x21FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFD8u;
label_21ffd8:
    // 0x21ffd8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21ffdc:
    if (ctx->pc == 0x21FFDCu) {
        ctx->pc = 0x21FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFD8u;
        // 0x21ffdc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFE0u;
        goto label_21ffe0;
    }
    ctx->pc = 0x21FFD8u;
    {
        const bool branch_taken_0x21ffd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffd8) {
            ctx->pc = 0x21FFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FFD8u;
            // 0x21ffdc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FFF8u;
            goto label_21fff8;
        }
    }
    ctx->pc = 0x21FFE0u;
label_21ffe0:
    // 0x21ffe0: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x21ffe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_21ffe4:
    // 0x21ffe4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21ffe4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21ffe8:
    // 0x21ffe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21ffec:
    if (ctx->pc == 0x21FFECu) {
        ctx->pc = 0x21FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFE8u;
        // 0x21ffec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFF0u;
        goto label_21fff0;
    }
    ctx->pc = 0x21FFE8u;
    {
        const bool branch_taken_0x21ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFE8u;
        // 0x21ffec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffe8) {
            ctx->pc = 0x21FFF8u;
            goto label_21fff8;
        }
    }
    ctx->pc = 0x21FFF0u;
label_21fff0:
    // 0x21fff0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21fff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_21fff4:
    // 0x21fff4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21fff8:
    // 0x21fff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fffc:
    // 0x21fffc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21fffcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_220000:
    // 0x220000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_220004:
    // 0x220004: 0x10000017  b           . + 4 + (0x17 << 2)
label_220008:
    if (ctx->pc == 0x220008u) {
        ctx->pc = 0x220008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220004u;
        // 0x220008: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22000Cu;
        goto label_22000c;
    }
    ctx->pc = 0x220004u;
    {
        const bool branch_taken_0x220004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220004u;
        // 0x220008: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220004) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x22000Cu;
label_22000c:
    // 0x22000c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_220010:
    // 0x220010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220014:
    // 0x220014: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_220018:
    // 0x220018: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22001c:
    // 0x22001c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220020:
    // 0x220020: 0x10000010  b           . + 4 + (0x10 << 2)
label_220024:
    if (ctx->pc == 0x220024u) {
        ctx->pc = 0x220024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220020u;
        // 0x220024: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220028u;
        goto label_220028;
    }
    ctx->pc = 0x220020u;
    {
        const bool branch_taken_0x220020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220020u;
        // 0x220024: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220020) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x220028u;
label_220028:
    // 0x220028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x220028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22002c:
    // 0x22002c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220030:
    // 0x220030: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_220034:
    // 0x220034: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x220034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_220038:
    // 0x220038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22003c:
    // 0x22003c: 0x10000009  b           . + 4 + (0x9 << 2)
label_220040:
    if (ctx->pc == 0x220040u) {
        ctx->pc = 0x220040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22003Cu;
        // 0x220040: 0x240500a7  addiu       $a1, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220044u;
        goto label_220044;
    }
    ctx->pc = 0x22003Cu;
    {
        const bool branch_taken_0x22003c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22003Cu;
        // 0x220040: 0x240500a7  addiu       $a1, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22003c) {
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x220044u;
label_220044:
    // 0x220044: 0x9242019b  lbu         $v0, 0x19B($s2)
    ctx->pc = 0x220044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
label_220048:
    // 0x220048: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
label_22004c:
    if (ctx->pc == 0x22004Cu) {
        ctx->pc = 0x22004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220048u;
        // 0x22004c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220050u;
        goto label_220050;
    }
    ctx->pc = 0x220048u;
    {
        const bool branch_taken_0x220048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220048u;
        // 0x22004c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220048) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x220050u;
label_220050:
    // 0x220050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220054:
    // 0x220054: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_220058:
    // 0x220058: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22005c:
    // 0x22005c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220060:
    // 0x220060: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x220060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_220064:
    // 0x220064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220068:
    // 0x220068: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x220068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22006c:
    // 0x22006c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22006cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220070:
    // 0x220070: 0xc088178  jal         func_2205E0
label_220074:
    if (ctx->pc == 0x220074u) {
        ctx->pc = 0x220074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220070u;
        // 0x220074: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220078u;
        goto label_220078;
    }
    ctx->pc = 0x220070u;
    SET_GPR_U32(ctx, 31, 0x220078u);
    ctx->pc = 0x220074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220070u;
    // 0x220074: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x220070u, 0x220078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220078u;
label_220078:
    // 0x220078: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_22007c:
    if (ctx->pc == 0x22007Cu) {
        ctx->pc = 0x22007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220078u;
        // 0x22007c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220080u;
        goto label_220080;
    }
    ctx->pc = 0x220078u;
    {
        const bool branch_taken_0x220078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220078u;
        // 0x22007c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220078) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x220080u;
label_220080:
    // 0x220080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_220084:
    // 0x220084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220088:
    // 0x220088: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22008c:
    // 0x22008c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_220090:
    // 0x220090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220094:
    // 0x220094: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x220094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_220098:
    // 0x220098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22009c:
    // 0x22009c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2200a0:
    // 0x2200a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2200a4:
    // 0x2200a4: 0xc088178  jal         func_2205E0
label_2200a8:
    if (ctx->pc == 0x2200A8u) {
        ctx->pc = 0x2200A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200A4u;
        // 0x2200a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200ACu;
        goto label_2200ac;
    }
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A4u;
    // 0x2200a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2200A4u, 0x2200ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2200acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2200b0:
    // 0x2200b0: 0xc043d5e  jal         func_10F578
label_2200b4:
    if (ctx->pc == 0x2200B4u) {
        ctx->pc = 0x2200B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200B0u;
        // 0x2200b4: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200B8u;
        goto label_2200b8;
    }
    ctx->pc = 0x2200B0u;
    SET_GPR_U32(ctx, 31, 0x2200B8u);
    ctx->pc = 0x2200B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200B0u;
    // 0x2200b4: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2200B0u, 0x2200B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200B8u;
label_2200b8:
    // 0x2200b8: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_2200bc:
    if (ctx->pc == 0x2200BCu) {
        ctx->pc = 0x2200BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200B8u;
        // 0x2200bc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200C0u;
        goto label_2200c0;
    }
    ctx->pc = 0x2200B8u;
    {
        const bool branch_taken_0x2200b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2200BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200B8u;
        // 0x2200bc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200b8) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x2200C0u;
label_2200c0:
    // 0x2200c0: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_2200c4:
    // 0x2200c4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2200c8:
    if (ctx->pc == 0x2200C8u) {
        ctx->pc = 0x2200C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200C4u;
        // 0x2200c8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200CCu;
        goto label_2200cc;
    }
    ctx->pc = 0x2200C4u;
    {
        const bool branch_taken_0x2200c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200C4u;
        // 0x2200c8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200c4) {
            ctx->pc = 0x220114u;
            goto label_220114;
        }
    }
    ctx->pc = 0x2200CCu;
label_2200cc:
    // 0x2200cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2200d0:
    // 0x2200d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2200d4:
    // 0x2200d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2200d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2200d8:
    // 0x2200d8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2200dc:
    // 0x2200dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2200dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2200e0:
    // 0x2200e0: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_2200e4:
    // 0x2200e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2200e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2200e8:
    // 0x2200e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2200e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2200ec:
    // 0x2200ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2200f0:
    // 0x2200f0: 0xc088178  jal         func_2205E0
label_2200f4:
    if (ctx->pc == 0x2200F4u) {
        ctx->pc = 0x2200F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200F0u;
        // 0x2200f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200F8u;
        goto label_2200f8;
    }
    ctx->pc = 0x2200F0u;
    SET_GPR_U32(ctx, 31, 0x2200F8u);
    ctx->pc = 0x2200F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200F0u;
    // 0x2200f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2200F0u, 0x2200F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200F8u;
label_2200f8:
    // 0x2200f8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2200f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2200fc:
    // 0x2200fc: 0xc043d5e  jal         func_10F578
label_220100:
    if (ctx->pc == 0x220100u) {
        ctx->pc = 0x220100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200FCu;
        // 0x220100: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220104u;
        goto label_220104;
    }
    ctx->pc = 0x2200FCu;
    SET_GPR_U32(ctx, 31, 0x220104u);
    ctx->pc = 0x220100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200FCu;
    // 0x220100: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2200FCu, 0x220104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220104u;
label_220104:
    // 0x220104: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_220108:
    if (ctx->pc == 0x220108u) {
        ctx->pc = 0x220108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220104u;
        // 0x220108: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22010Cu;
        goto label_22010c;
    }
    ctx->pc = 0x220104u;
    {
        const bool branch_taken_0x220104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220104u;
        // 0x220108: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220104) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x22010Cu;
label_22010c:
    // 0x22010c: 0x824203b8  lb          $v0, 0x3B8($s2)
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 952)));
label_220110:
    // 0x220110: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x220110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_220114:
    // 0x220114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220118:
    // 0x220118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22011c:
    // 0x22011c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_220120:
    // 0x220120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220124:
    // 0x220124: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x220124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_220128:
    // 0x220128: 0xc087d04  jal         func_21F410
label_22012c:
    if (ctx->pc == 0x22012Cu) {
        ctx->pc = 0x22012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220128u;
        // 0x22012c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220130u;
        goto label_220130;
    }
    ctx->pc = 0x220128u;
    SET_GPR_U32(ctx, 31, 0x220130u);
    ctx->pc = 0x22012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220128u;
    // 0x22012c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F410u, 0x220128u, 0x220130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220130u;
label_220130:
    // 0x220130: 0x10000082  b           . + 4 + (0x82 << 2)
label_220134:
    if (ctx->pc == 0x220134u) {
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220138u;
        goto label_220138;
    }
    ctx->pc = 0x220130u;
    {
        const bool branch_taken_0x220130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220130) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x220138u;
label_220138:
    // 0x220138: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22013c:
    // 0x22013c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220140:
    // 0x220140: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220144:
    // 0x220144: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x220144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_220148:
    // 0x220148: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x220148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22014c:
    // 0x22014c: 0xc045200  jal         func_114800
label_220150:
    if (ctx->pc == 0x220150u) {
        ctx->pc = 0x220150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22014Cu;
        // 0x220150: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220154u;
        goto label_220154;
    }
    ctx->pc = 0x22014Cu;
    SET_GPR_U32(ctx, 31, 0x220154u);
    ctx->pc = 0x220150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22014Cu;
    // 0x220150: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x22014Cu, 0x220154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220154u;
label_220154:
    // 0x220154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220158:
    // 0x220158: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x220158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_22015c:
    // 0x22015c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22015cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220160:
    // 0x220160: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220164:
    // 0x220164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x220164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220168:
    // 0x220168: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x220168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22016c:
    // 0x22016c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x22016cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_220170:
    // 0x220170: 0xc043f74  jal         func_10FDD0
label_220174:
    if (ctx->pc == 0x220174u) {
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x220178u;
        goto label_220178;
    }
    ctx->pc = 0x220170u;
    SET_GPR_U32(ctx, 31, 0x220178u);
    ctx->pc = 0x220174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220170u;
    // 0x220174: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x220170u, 0x220178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220178u;
label_220178:
    // 0x220178: 0x10000070  b           . + 4 + (0x70 << 2)
label_22017c:
    if (ctx->pc == 0x22017Cu) {
        ctx->pc = 0x22017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220178u;
        // 0x22017c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220180u;
        goto label_220180;
    }
    ctx->pc = 0x220178u;
    {
        const bool branch_taken_0x220178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220178u;
        // 0x22017c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220178) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x220180u;
label_220180:
    // 0x220180: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x220180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_220184:
    // 0x220184: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x220184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_220188:
    // 0x220188: 0xc043d5e  jal         func_10F578
label_22018c:
    if (ctx->pc == 0x22018Cu) {
        ctx->pc = 0x22018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220188u;
        // 0x22018c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220190u;
        goto label_220190;
    }
    ctx->pc = 0x220188u;
    SET_GPR_U32(ctx, 31, 0x220190u);
    ctx->pc = 0x22018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220188u;
    // 0x22018c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x220188u, 0x220190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220190u;
label_220190:
    // 0x220190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_220194:
    if (ctx->pc == 0x220194u) {
        ctx->pc = 0x220194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220190u;
        // 0x220194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220198u;
        goto label_220198;
    }
    ctx->pc = 0x220190u;
    {
        const bool branch_taken_0x220190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220190u;
        // 0x220194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220190) {
            ctx->pc = 0x2201A8u;
            goto label_2201a8;
        }
    }
    ctx->pc = 0x220198u;
label_220198:
    // 0x220198: 0xc087c82  jal         func_21F208
label_22019c:
    if (ctx->pc == 0x22019Cu) {
        ctx->pc = 0x22019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220198u;
        // 0x22019c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201A0u;
        goto label_2201a0;
    }
    ctx->pc = 0x220198u;
    SET_GPR_U32(ctx, 31, 0x2201A0u);
    ctx->pc = 0x22019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220198u;
    // 0x22019c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F208u, 0x220198u, 0x2201A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201A0u;
label_2201a0:
    // 0x2201a0: 0x10000066  b           . + 4 + (0x66 << 2)
label_2201a4:
    if (ctx->pc == 0x2201A4u) {
        ctx->pc = 0x2201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201A0u;
        // 0x2201a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201A8u;
        goto label_2201a8;
    }
    ctx->pc = 0x2201A0u;
    {
        const bool branch_taken_0x2201a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201A0u;
        // 0x2201a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201a0) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x2201A8u;
label_2201a8:
    // 0x2201a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2201a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2201ac:
    // 0x2201ac: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x2201acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2201b0:
    // 0x2201b0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2201b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2201b4:
    // 0x2201b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2201b8:
    // 0x2201b8: 0xc045200  jal         func_114800
label_2201bc:
    if (ctx->pc == 0x2201BCu) {
        ctx->pc = 0x2201BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B8u;
        // 0x2201bc: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201C0u;
        goto label_2201c0;
    }
    ctx->pc = 0x2201B8u;
    SET_GPR_U32(ctx, 31, 0x2201C0u);
    ctx->pc = 0x2201BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201B8u;
    // 0x2201bc: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x2201B8u, 0x2201C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201C0u;
label_2201c0:
    // 0x2201c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2201c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2201c4:
    // 0x2201c4: 0xc087b0e  jal         func_21EC38
label_2201c8:
    if (ctx->pc == 0x2201C8u) {
        ctx->pc = 0x2201C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201C4u;
        // 0x2201c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201CCu;
        goto label_2201cc;
    }
    ctx->pc = 0x2201C4u;
    SET_GPR_U32(ctx, 31, 0x2201CCu);
    ctx->pc = 0x2201C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201C4u;
    // 0x2201c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2201C4u, 0x2201CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201CCu;
label_2201cc:
    // 0x2201cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2201ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2201d0:
    // 0x2201d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2201d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2201d4:
    // 0x2201d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2201d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2201d8:
    // 0x2201d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2201d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2201dc:
    // 0x2201dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2201dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2201e0:
    // 0x2201e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2201e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2201e4:
    // 0x2201e4: 0xc0879a6  jal         func_21E698
label_2201e8:
    if (ctx->pc == 0x2201E8u) {
        ctx->pc = 0x2201E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201E4u;
        // 0x2201e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201ECu;
        goto label_2201ec;
    }
    ctx->pc = 0x2201E4u;
    SET_GPR_U32(ctx, 31, 0x2201ECu);
    ctx->pc = 0x2201E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201E4u;
    // 0x2201e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x2201E4u, 0x2201ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201ECu;
label_2201ec:
    // 0x2201ec: 0xc08c07c  jal         func_2301F0
label_2201f0:
    if (ctx->pc == 0x2201F0u) {
        ctx->pc = 0x2201F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201ECu;
        // 0x2201f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201F4u;
        goto label_2201f4;
    }
    ctx->pc = 0x2201ECu;
    SET_GPR_U32(ctx, 31, 0x2201F4u);
    ctx->pc = 0x2201F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201ECu;
    // 0x2201f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x2201ECu, 0x2201F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201F4u;
label_2201f4:
    // 0x2201f4: 0x10000051  b           . + 4 + (0x51 << 2)
label_2201f8:
    if (ctx->pc == 0x2201F8u) {
        ctx->pc = 0x2201F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F4u;
        // 0x2201f8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201FCu;
        goto label_2201fc;
    }
    ctx->pc = 0x2201F4u;
    {
        const bool branch_taken_0x2201f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F4u;
        // 0x2201f8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201f4) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x2201FCu;
label_2201fc:
    // 0x2201fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2201fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_220200:
    // 0x220200: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x220200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_220204:
    // 0x220204: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220208:
    // 0x220208: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x220208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22020c:
    // 0x22020c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220210:
    // 0x220210: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220214:
    // 0x220214: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_220218:
    // 0x220218: 0xc045200  jal         func_114800
label_22021c:
    if (ctx->pc == 0x22021Cu) {
        ctx->pc = 0x22021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220218u;
        // 0x22021c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220220u;
        goto label_220220;
    }
    ctx->pc = 0x220218u;
    SET_GPR_U32(ctx, 31, 0x220220u);
    ctx->pc = 0x22021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220218u;
    // 0x22021c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x220218u, 0x220220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220220u;
label_220220:
    // 0x220220: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220224:
    // 0x220224: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x220224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_220228:
    // 0x220228: 0xc044594  jal         func_111650
label_22022c:
    if (ctx->pc == 0x22022Cu) {
        ctx->pc = 0x22022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220228u;
        // 0x22022c: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x220230u;
        goto label_220230;
    }
    ctx->pc = 0x220228u;
    SET_GPR_U32(ctx, 31, 0x220230u);
    ctx->pc = 0x22022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220228u;
    // 0x22022c: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x220228u, 0x220230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220230u;
label_220230:
    // 0x220230: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_220234:
    // 0x220234: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x220234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_220238:
    // 0x220238: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22023c:
    // 0x22023c: 0x40f809  jalr        $v0
label_220240:
    if (ctx->pc == 0x220240u) {
        ctx->pc = 0x220240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22023Cu;
        // 0x220240: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220244u;
        goto label_220244;
    }
    ctx->pc = 0x22023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220244u);
        ctx->pc = 0x220240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22023Cu;
        // 0x220240: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22023Cu, 0x220244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220244u;
label_220244:
    // 0x220244: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x220244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220248:
    // 0x220248: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x220248u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_22024c:
    // 0x22024c: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x22024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_220250:
    // 0x220250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220254:
    // 0x220254: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220258:
    // 0x220258: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x220258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22025c:
    // 0x22025c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x22025cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_220260:
    // 0x220260: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x220260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_220264:
    // 0x220264: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220268:
    // 0x220268: 0xc043fa4  jal         func_10FE90
label_22026c:
    if (ctx->pc == 0x22026Cu) {
        ctx->pc = 0x22026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220268u;
        // 0x22026c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220270u;
        goto label_220270;
    }
    ctx->pc = 0x220268u;
    SET_GPR_U32(ctx, 31, 0x220270u);
    ctx->pc = 0x22026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220268u;
    // 0x22026c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x220268u, 0x220270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220270u;
label_220270:
    // 0x220270: 0x10000032  b           . + 4 + (0x32 << 2)
label_220274:
    if (ctx->pc == 0x220274u) {
        ctx->pc = 0x220274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220270u;
        // 0x220274: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220278u;
        goto label_220278;
    }
    ctx->pc = 0x220270u;
    {
        const bool branch_taken_0x220270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220270u;
        // 0x220274: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220270) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x220278u;
label_220278:
    // 0x220278: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x220278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22027c:
    // 0x22027c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22027cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220280:
    // 0x220280: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220284:
    // 0x220284: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x220284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_220288:
    // 0x220288: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22028c:
    // 0x22028c: 0xc045200  jal         func_114800
label_220290:
    if (ctx->pc == 0x220290u) {
        ctx->pc = 0x220290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22028Cu;
        // 0x220290: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220294u;
        goto label_220294;
    }
    ctx->pc = 0x22028Cu;
    SET_GPR_U32(ctx, 31, 0x220294u);
    ctx->pc = 0x220290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22028Cu;
    // 0x220290: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x22028Cu, 0x220294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220294u;
label_220294:
    // 0x220294: 0x8e420168  lw          $v0, 0x168($s2)
    ctx->pc = 0x220294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_220298:
    // 0x220298: 0x27b1005c  addiu       $s1, $sp, 0x5C
    ctx->pc = 0x220298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_22029c:
    // 0x22029c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2202a0:
    // 0x2202a0: 0xc043d5e  jal         func_10F578
label_2202a4:
    if (ctx->pc == 0x2202A4u) {
        ctx->pc = 0x2202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A0u;
        // 0x2202a4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202A8u;
        goto label_2202a8;
    }
    ctx->pc = 0x2202A0u;
    SET_GPR_U32(ctx, 31, 0x2202A8u);
    ctx->pc = 0x2202A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202A0u;
    // 0x2202a4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2202A0u, 0x2202A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202A8u;
label_2202a8:
    // 0x2202a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2202ac:
    if (ctx->pc == 0x2202ACu) {
        ctx->pc = 0x2202ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A8u;
        // 0x2202ac: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202B0u;
        goto label_2202b0;
    }
    ctx->pc = 0x2202A8u;
    {
        const bool branch_taken_0x2202a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A8u;
        // 0x2202ac: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a8) {
            ctx->pc = 0x2202BCu;
            goto label_2202bc;
        }
    }
    ctx->pc = 0x2202B0u;
label_2202b0:
    // 0x2202b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2202b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2202b4:
    // 0x2202b4: 0xc0440c6  jal         func_110318
label_2202b8:
    if (ctx->pc == 0x2202B8u) {
        ctx->pc = 0x2202B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B4u;
        // 0x2202b8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202BCu;
        goto label_2202bc;
    }
    ctx->pc = 0x2202B4u;
    SET_GPR_U32(ctx, 31, 0x2202BCu);
    ctx->pc = 0x2202B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202B4u;
    // 0x2202b8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x2202B4u, 0x2202BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202BCu;
label_2202bc:
    // 0x2202bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2202bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2202c0:
    // 0x2202c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2202c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2202c4:
    // 0x2202c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2202c8:
    // 0x2202c8: 0x40f809  jalr        $v0
label_2202cc:
    if (ctx->pc == 0x2202CCu) {
        ctx->pc = 0x2202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202C8u;
        // 0x2202cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202D0u;
        goto label_2202d0;
    }
    ctx->pc = 0x2202C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2202D0u);
        ctx->pc = 0x2202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202C8u;
        // 0x2202cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2202C8u, 0x2202D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2202D0u;
label_2202d0:
    // 0x2202d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2202d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2202d4:
    // 0x2202d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2202d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2202d8:
    // 0x2202d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2202d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2202dc:
    // 0x2202dc: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x2202dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_2202e0:
    // 0x2202e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2202e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2202e4:
    // 0x2202e4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2202e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2202e8:
    // 0x2202e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2202ec:
    // 0x2202ec: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2202ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2202f0:
    // 0x2202f0: 0xc043fa4  jal         func_10FE90
label_2202f4:
    if (ctx->pc == 0x2202F4u) {
        ctx->pc = 0x2202F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202F0u;
        // 0x2202f4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202F8u;
        goto label_2202f8;
    }
    ctx->pc = 0x2202F0u;
    SET_GPR_U32(ctx, 31, 0x2202F8u);
    ctx->pc = 0x2202F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202F0u;
    // 0x2202f4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x2202F0u, 0x2202F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202F8u;
label_2202f8:
    // 0x2202f8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2202f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_2202fc:
    // 0x2202fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2202fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220300:
    // 0x220300: 0xc087bd6  jal         func_21EF58
label_220304:
    if (ctx->pc == 0x220304u) {
        ctx->pc = 0x220304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220300u;
        // 0x220304: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220308u;
        goto label_220308;
    }
    ctx->pc = 0x220300u;
    SET_GPR_U32(ctx, 31, 0x220308u);
    ctx->pc = 0x220304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220300u;
    // 0x220304: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x220300u, 0x220308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220308u;
label_220308:
    // 0x220308: 0x1000000c  b           . + 4 + (0xC << 2)
label_22030c:
    if (ctx->pc == 0x22030Cu) {
        ctx->pc = 0x22030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220308u;
        // 0x22030c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220310u;
        goto label_220310;
    }
    ctx->pc = 0x220308u;
    {
        const bool branch_taken_0x220308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220308u;
        // 0x22030c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220308) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x220310u;
label_220310:
    // 0x220310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220314:
    // 0x220314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220318:
    // 0x220318: 0xc087d52  jal         func_21F548
label_22031c:
    if (ctx->pc == 0x22031Cu) {
        ctx->pc = 0x22031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220318u;
        // 0x22031c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220320u;
        goto label_220320;
    }
    ctx->pc = 0x220318u;
    SET_GPR_U32(ctx, 31, 0x220320u);
    ctx->pc = 0x22031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220318u;
    // 0x22031c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F548u, 0x220318u, 0x220320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220320u;
label_220320:
    // 0x220320: 0x10000006  b           . + 4 + (0x6 << 2)
label_220324:
    if (ctx->pc == 0x220324u) {
        ctx->pc = 0x220324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220320u;
        // 0x220324: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220328u;
        goto label_220328;
    }
    ctx->pc = 0x220320u;
    {
        const bool branch_taken_0x220320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220320u;
        // 0x220324: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220320) {
            ctx->pc = 0x22033Cu;
            goto label_22033c;
        }
    }
    ctx->pc = 0x220328u;
label_220328:
    // 0x220328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22032c:
    // 0x22032c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220330:
    // 0x220330: 0xc087d52  jal         func_21F548
label_220334:
    if (ctx->pc == 0x220334u) {
        ctx->pc = 0x220334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220330u;
        // 0x220334: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220338u;
        goto label_220338;
    }
    ctx->pc = 0x220330u;
    SET_GPR_U32(ctx, 31, 0x220338u);
    ctx->pc = 0x220334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220330u;
    // 0x220334: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F548u, 0x220330u, 0x220338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220338u;
label_220338:
    // 0x220338: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x220338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22033c:
    // 0x22033c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x22033cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_220340:
    // 0x220340: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x220340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_220344:
    // 0x220344: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x220344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_220348:
    // 0x220348: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x220348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22034c:
    // 0x22034c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_220350:
    // 0x220350: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x220350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_220354:
    // 0x220354: 0x3e00008  jr          $ra
label_220358:
    if (ctx->pc == 0x220358u) {
        ctx->pc = 0x220358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220354u;
        // 0x220358: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22035Cu;
        goto label_22035c;
    }
    ctx->pc = 0x220354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220354u;
        // 0x220358: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22035Cu;
label_22035c:
    // 0x22035c: 0x0  nop
    ctx->pc = 0x22035cu;
    // NOP
    ctx->pc = 0x220360u;
}
