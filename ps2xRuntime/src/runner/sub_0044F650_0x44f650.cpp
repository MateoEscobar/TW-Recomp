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

// Function: sub_0044F650
// Address: 0x44f650 - 0x44fcc0
void sub_0044F650_0x44f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F650_0x44f650");
#endif

    switch (ctx->pc) {
        case 0x44f650u: goto label_44f650;
        case 0x44f654u: goto label_44f654;
        case 0x44f658u: goto label_44f658;
        case 0x44f65cu: goto label_44f65c;
        case 0x44f660u: goto label_44f660;
        case 0x44f664u: goto label_44f664;
        case 0x44f668u: goto label_44f668;
        case 0x44f66cu: goto label_44f66c;
        case 0x44f670u: goto label_44f670;
        case 0x44f674u: goto label_44f674;
        case 0x44f678u: goto label_44f678;
        case 0x44f67cu: goto label_44f67c;
        case 0x44f680u: goto label_44f680;
        case 0x44f684u: goto label_44f684;
        case 0x44f688u: goto label_44f688;
        case 0x44f68cu: goto label_44f68c;
        case 0x44f690u: goto label_44f690;
        case 0x44f694u: goto label_44f694;
        case 0x44f698u: goto label_44f698;
        case 0x44f69cu: goto label_44f69c;
        case 0x44f6a0u: goto label_44f6a0;
        case 0x44f6a4u: goto label_44f6a4;
        case 0x44f6a8u: goto label_44f6a8;
        case 0x44f6acu: goto label_44f6ac;
        case 0x44f6b0u: goto label_44f6b0;
        case 0x44f6b4u: goto label_44f6b4;
        case 0x44f6b8u: goto label_44f6b8;
        case 0x44f6bcu: goto label_44f6bc;
        case 0x44f6c0u: goto label_44f6c0;
        case 0x44f6c4u: goto label_44f6c4;
        case 0x44f6c8u: goto label_44f6c8;
        case 0x44f6ccu: goto label_44f6cc;
        case 0x44f6d0u: goto label_44f6d0;
        case 0x44f6d4u: goto label_44f6d4;
        case 0x44f6d8u: goto label_44f6d8;
        case 0x44f6dcu: goto label_44f6dc;
        case 0x44f6e0u: goto label_44f6e0;
        case 0x44f6e4u: goto label_44f6e4;
        case 0x44f6e8u: goto label_44f6e8;
        case 0x44f6ecu: goto label_44f6ec;
        case 0x44f6f0u: goto label_44f6f0;
        case 0x44f6f4u: goto label_44f6f4;
        case 0x44f6f8u: goto label_44f6f8;
        case 0x44f6fcu: goto label_44f6fc;
        case 0x44f700u: goto label_44f700;
        case 0x44f704u: goto label_44f704;
        case 0x44f708u: goto label_44f708;
        case 0x44f70cu: goto label_44f70c;
        case 0x44f710u: goto label_44f710;
        case 0x44f714u: goto label_44f714;
        case 0x44f718u: goto label_44f718;
        case 0x44f71cu: goto label_44f71c;
        case 0x44f720u: goto label_44f720;
        case 0x44f724u: goto label_44f724;
        case 0x44f728u: goto label_44f728;
        case 0x44f72cu: goto label_44f72c;
        case 0x44f730u: goto label_44f730;
        case 0x44f734u: goto label_44f734;
        case 0x44f738u: goto label_44f738;
        case 0x44f73cu: goto label_44f73c;
        case 0x44f740u: goto label_44f740;
        case 0x44f744u: goto label_44f744;
        case 0x44f748u: goto label_44f748;
        case 0x44f74cu: goto label_44f74c;
        case 0x44f750u: goto label_44f750;
        case 0x44f754u: goto label_44f754;
        case 0x44f758u: goto label_44f758;
        case 0x44f75cu: goto label_44f75c;
        case 0x44f760u: goto label_44f760;
        case 0x44f764u: goto label_44f764;
        case 0x44f768u: goto label_44f768;
        case 0x44f76cu: goto label_44f76c;
        case 0x44f770u: goto label_44f770;
        case 0x44f774u: goto label_44f774;
        case 0x44f778u: goto label_44f778;
        case 0x44f77cu: goto label_44f77c;
        case 0x44f780u: goto label_44f780;
        case 0x44f784u: goto label_44f784;
        case 0x44f788u: goto label_44f788;
        case 0x44f78cu: goto label_44f78c;
        case 0x44f790u: goto label_44f790;
        case 0x44f794u: goto label_44f794;
        case 0x44f798u: goto label_44f798;
        case 0x44f79cu: goto label_44f79c;
        case 0x44f7a0u: goto label_44f7a0;
        case 0x44f7a4u: goto label_44f7a4;
        case 0x44f7a8u: goto label_44f7a8;
        case 0x44f7acu: goto label_44f7ac;
        case 0x44f7b0u: goto label_44f7b0;
        case 0x44f7b4u: goto label_44f7b4;
        case 0x44f7b8u: goto label_44f7b8;
        case 0x44f7bcu: goto label_44f7bc;
        case 0x44f7c0u: goto label_44f7c0;
        case 0x44f7c4u: goto label_44f7c4;
        case 0x44f7c8u: goto label_44f7c8;
        case 0x44f7ccu: goto label_44f7cc;
        case 0x44f7d0u: goto label_44f7d0;
        case 0x44f7d4u: goto label_44f7d4;
        case 0x44f7d8u: goto label_44f7d8;
        case 0x44f7dcu: goto label_44f7dc;
        case 0x44f7e0u: goto label_44f7e0;
        case 0x44f7e4u: goto label_44f7e4;
        case 0x44f7e8u: goto label_44f7e8;
        case 0x44f7ecu: goto label_44f7ec;
        case 0x44f7f0u: goto label_44f7f0;
        case 0x44f7f4u: goto label_44f7f4;
        case 0x44f7f8u: goto label_44f7f8;
        case 0x44f7fcu: goto label_44f7fc;
        case 0x44f800u: goto label_44f800;
        case 0x44f804u: goto label_44f804;
        case 0x44f808u: goto label_44f808;
        case 0x44f80cu: goto label_44f80c;
        case 0x44f810u: goto label_44f810;
        case 0x44f814u: goto label_44f814;
        case 0x44f818u: goto label_44f818;
        case 0x44f81cu: goto label_44f81c;
        case 0x44f820u: goto label_44f820;
        case 0x44f824u: goto label_44f824;
        case 0x44f828u: goto label_44f828;
        case 0x44f82cu: goto label_44f82c;
        case 0x44f830u: goto label_44f830;
        case 0x44f834u: goto label_44f834;
        case 0x44f838u: goto label_44f838;
        case 0x44f83cu: goto label_44f83c;
        case 0x44f840u: goto label_44f840;
        case 0x44f844u: goto label_44f844;
        case 0x44f848u: goto label_44f848;
        case 0x44f84cu: goto label_44f84c;
        case 0x44f850u: goto label_44f850;
        case 0x44f854u: goto label_44f854;
        case 0x44f858u: goto label_44f858;
        case 0x44f85cu: goto label_44f85c;
        case 0x44f860u: goto label_44f860;
        case 0x44f864u: goto label_44f864;
        case 0x44f868u: goto label_44f868;
        case 0x44f86cu: goto label_44f86c;
        case 0x44f870u: goto label_44f870;
        case 0x44f874u: goto label_44f874;
        case 0x44f878u: goto label_44f878;
        case 0x44f87cu: goto label_44f87c;
        case 0x44f880u: goto label_44f880;
        case 0x44f884u: goto label_44f884;
        case 0x44f888u: goto label_44f888;
        case 0x44f88cu: goto label_44f88c;
        case 0x44f890u: goto label_44f890;
        case 0x44f894u: goto label_44f894;
        case 0x44f898u: goto label_44f898;
        case 0x44f89cu: goto label_44f89c;
        case 0x44f8a0u: goto label_44f8a0;
        case 0x44f8a4u: goto label_44f8a4;
        case 0x44f8a8u: goto label_44f8a8;
        case 0x44f8acu: goto label_44f8ac;
        case 0x44f8b0u: goto label_44f8b0;
        case 0x44f8b4u: goto label_44f8b4;
        case 0x44f8b8u: goto label_44f8b8;
        case 0x44f8bcu: goto label_44f8bc;
        case 0x44f8c0u: goto label_44f8c0;
        case 0x44f8c4u: goto label_44f8c4;
        case 0x44f8c8u: goto label_44f8c8;
        case 0x44f8ccu: goto label_44f8cc;
        case 0x44f8d0u: goto label_44f8d0;
        case 0x44f8d4u: goto label_44f8d4;
        case 0x44f8d8u: goto label_44f8d8;
        case 0x44f8dcu: goto label_44f8dc;
        case 0x44f8e0u: goto label_44f8e0;
        case 0x44f8e4u: goto label_44f8e4;
        case 0x44f8e8u: goto label_44f8e8;
        case 0x44f8ecu: goto label_44f8ec;
        case 0x44f8f0u: goto label_44f8f0;
        case 0x44f8f4u: goto label_44f8f4;
        case 0x44f8f8u: goto label_44f8f8;
        case 0x44f8fcu: goto label_44f8fc;
        case 0x44f900u: goto label_44f900;
        case 0x44f904u: goto label_44f904;
        case 0x44f908u: goto label_44f908;
        case 0x44f90cu: goto label_44f90c;
        case 0x44f910u: goto label_44f910;
        case 0x44f914u: goto label_44f914;
        case 0x44f918u: goto label_44f918;
        case 0x44f91cu: goto label_44f91c;
        case 0x44f920u: goto label_44f920;
        case 0x44f924u: goto label_44f924;
        case 0x44f928u: goto label_44f928;
        case 0x44f92cu: goto label_44f92c;
        case 0x44f930u: goto label_44f930;
        case 0x44f934u: goto label_44f934;
        case 0x44f938u: goto label_44f938;
        case 0x44f93cu: goto label_44f93c;
        case 0x44f940u: goto label_44f940;
        case 0x44f944u: goto label_44f944;
        case 0x44f948u: goto label_44f948;
        case 0x44f94cu: goto label_44f94c;
        case 0x44f950u: goto label_44f950;
        case 0x44f954u: goto label_44f954;
        case 0x44f958u: goto label_44f958;
        case 0x44f95cu: goto label_44f95c;
        case 0x44f960u: goto label_44f960;
        case 0x44f964u: goto label_44f964;
        case 0x44f968u: goto label_44f968;
        case 0x44f96cu: goto label_44f96c;
        case 0x44f970u: goto label_44f970;
        case 0x44f974u: goto label_44f974;
        case 0x44f978u: goto label_44f978;
        case 0x44f97cu: goto label_44f97c;
        case 0x44f980u: goto label_44f980;
        case 0x44f984u: goto label_44f984;
        case 0x44f988u: goto label_44f988;
        case 0x44f98cu: goto label_44f98c;
        case 0x44f990u: goto label_44f990;
        case 0x44f994u: goto label_44f994;
        case 0x44f998u: goto label_44f998;
        case 0x44f99cu: goto label_44f99c;
        case 0x44f9a0u: goto label_44f9a0;
        case 0x44f9a4u: goto label_44f9a4;
        case 0x44f9a8u: goto label_44f9a8;
        case 0x44f9acu: goto label_44f9ac;
        case 0x44f9b0u: goto label_44f9b0;
        case 0x44f9b4u: goto label_44f9b4;
        case 0x44f9b8u: goto label_44f9b8;
        case 0x44f9bcu: goto label_44f9bc;
        case 0x44f9c0u: goto label_44f9c0;
        case 0x44f9c4u: goto label_44f9c4;
        case 0x44f9c8u: goto label_44f9c8;
        case 0x44f9ccu: goto label_44f9cc;
        case 0x44f9d0u: goto label_44f9d0;
        case 0x44f9d4u: goto label_44f9d4;
        case 0x44f9d8u: goto label_44f9d8;
        case 0x44f9dcu: goto label_44f9dc;
        case 0x44f9e0u: goto label_44f9e0;
        case 0x44f9e4u: goto label_44f9e4;
        case 0x44f9e8u: goto label_44f9e8;
        case 0x44f9ecu: goto label_44f9ec;
        case 0x44f9f0u: goto label_44f9f0;
        case 0x44f9f4u: goto label_44f9f4;
        case 0x44f9f8u: goto label_44f9f8;
        case 0x44f9fcu: goto label_44f9fc;
        case 0x44fa00u: goto label_44fa00;
        case 0x44fa04u: goto label_44fa04;
        case 0x44fa08u: goto label_44fa08;
        case 0x44fa0cu: goto label_44fa0c;
        case 0x44fa10u: goto label_44fa10;
        case 0x44fa14u: goto label_44fa14;
        case 0x44fa18u: goto label_44fa18;
        case 0x44fa1cu: goto label_44fa1c;
        case 0x44fa20u: goto label_44fa20;
        case 0x44fa24u: goto label_44fa24;
        case 0x44fa28u: goto label_44fa28;
        case 0x44fa2cu: goto label_44fa2c;
        case 0x44fa30u: goto label_44fa30;
        case 0x44fa34u: goto label_44fa34;
        case 0x44fa38u: goto label_44fa38;
        case 0x44fa3cu: goto label_44fa3c;
        case 0x44fa40u: goto label_44fa40;
        case 0x44fa44u: goto label_44fa44;
        case 0x44fa48u: goto label_44fa48;
        case 0x44fa4cu: goto label_44fa4c;
        case 0x44fa50u: goto label_44fa50;
        case 0x44fa54u: goto label_44fa54;
        case 0x44fa58u: goto label_44fa58;
        case 0x44fa5cu: goto label_44fa5c;
        case 0x44fa60u: goto label_44fa60;
        case 0x44fa64u: goto label_44fa64;
        case 0x44fa68u: goto label_44fa68;
        case 0x44fa6cu: goto label_44fa6c;
        case 0x44fa70u: goto label_44fa70;
        case 0x44fa74u: goto label_44fa74;
        case 0x44fa78u: goto label_44fa78;
        case 0x44fa7cu: goto label_44fa7c;
        case 0x44fa80u: goto label_44fa80;
        case 0x44fa84u: goto label_44fa84;
        case 0x44fa88u: goto label_44fa88;
        case 0x44fa8cu: goto label_44fa8c;
        case 0x44fa90u: goto label_44fa90;
        case 0x44fa94u: goto label_44fa94;
        case 0x44fa98u: goto label_44fa98;
        case 0x44fa9cu: goto label_44fa9c;
        case 0x44faa0u: goto label_44faa0;
        case 0x44faa4u: goto label_44faa4;
        case 0x44faa8u: goto label_44faa8;
        case 0x44faacu: goto label_44faac;
        case 0x44fab0u: goto label_44fab0;
        case 0x44fab4u: goto label_44fab4;
        case 0x44fab8u: goto label_44fab8;
        case 0x44fabcu: goto label_44fabc;
        case 0x44fac0u: goto label_44fac0;
        case 0x44fac4u: goto label_44fac4;
        case 0x44fac8u: goto label_44fac8;
        case 0x44faccu: goto label_44facc;
        case 0x44fad0u: goto label_44fad0;
        case 0x44fad4u: goto label_44fad4;
        case 0x44fad8u: goto label_44fad8;
        case 0x44fadcu: goto label_44fadc;
        case 0x44fae0u: goto label_44fae0;
        case 0x44fae4u: goto label_44fae4;
        case 0x44fae8u: goto label_44fae8;
        case 0x44faecu: goto label_44faec;
        case 0x44faf0u: goto label_44faf0;
        case 0x44faf4u: goto label_44faf4;
        case 0x44faf8u: goto label_44faf8;
        case 0x44fafcu: goto label_44fafc;
        case 0x44fb00u: goto label_44fb00;
        case 0x44fb04u: goto label_44fb04;
        case 0x44fb08u: goto label_44fb08;
        case 0x44fb0cu: goto label_44fb0c;
        case 0x44fb10u: goto label_44fb10;
        case 0x44fb14u: goto label_44fb14;
        case 0x44fb18u: goto label_44fb18;
        case 0x44fb1cu: goto label_44fb1c;
        case 0x44fb20u: goto label_44fb20;
        case 0x44fb24u: goto label_44fb24;
        case 0x44fb28u: goto label_44fb28;
        case 0x44fb2cu: goto label_44fb2c;
        case 0x44fb30u: goto label_44fb30;
        case 0x44fb34u: goto label_44fb34;
        case 0x44fb38u: goto label_44fb38;
        case 0x44fb3cu: goto label_44fb3c;
        case 0x44fb40u: goto label_44fb40;
        case 0x44fb44u: goto label_44fb44;
        case 0x44fb48u: goto label_44fb48;
        case 0x44fb4cu: goto label_44fb4c;
        case 0x44fb50u: goto label_44fb50;
        case 0x44fb54u: goto label_44fb54;
        case 0x44fb58u: goto label_44fb58;
        case 0x44fb5cu: goto label_44fb5c;
        case 0x44fb60u: goto label_44fb60;
        case 0x44fb64u: goto label_44fb64;
        case 0x44fb68u: goto label_44fb68;
        case 0x44fb6cu: goto label_44fb6c;
        case 0x44fb70u: goto label_44fb70;
        case 0x44fb74u: goto label_44fb74;
        case 0x44fb78u: goto label_44fb78;
        case 0x44fb7cu: goto label_44fb7c;
        case 0x44fb80u: goto label_44fb80;
        case 0x44fb84u: goto label_44fb84;
        case 0x44fb88u: goto label_44fb88;
        case 0x44fb8cu: goto label_44fb8c;
        case 0x44fb90u: goto label_44fb90;
        case 0x44fb94u: goto label_44fb94;
        case 0x44fb98u: goto label_44fb98;
        case 0x44fb9cu: goto label_44fb9c;
        case 0x44fba0u: goto label_44fba0;
        case 0x44fba4u: goto label_44fba4;
        case 0x44fba8u: goto label_44fba8;
        case 0x44fbacu: goto label_44fbac;
        case 0x44fbb0u: goto label_44fbb0;
        case 0x44fbb4u: goto label_44fbb4;
        case 0x44fbb8u: goto label_44fbb8;
        case 0x44fbbcu: goto label_44fbbc;
        case 0x44fbc0u: goto label_44fbc0;
        case 0x44fbc4u: goto label_44fbc4;
        case 0x44fbc8u: goto label_44fbc8;
        case 0x44fbccu: goto label_44fbcc;
        case 0x44fbd0u: goto label_44fbd0;
        case 0x44fbd4u: goto label_44fbd4;
        case 0x44fbd8u: goto label_44fbd8;
        case 0x44fbdcu: goto label_44fbdc;
        case 0x44fbe0u: goto label_44fbe0;
        case 0x44fbe4u: goto label_44fbe4;
        case 0x44fbe8u: goto label_44fbe8;
        case 0x44fbecu: goto label_44fbec;
        case 0x44fbf0u: goto label_44fbf0;
        case 0x44fbf4u: goto label_44fbf4;
        case 0x44fbf8u: goto label_44fbf8;
        case 0x44fbfcu: goto label_44fbfc;
        case 0x44fc00u: goto label_44fc00;
        case 0x44fc04u: goto label_44fc04;
        case 0x44fc08u: goto label_44fc08;
        case 0x44fc0cu: goto label_44fc0c;
        case 0x44fc10u: goto label_44fc10;
        case 0x44fc14u: goto label_44fc14;
        case 0x44fc18u: goto label_44fc18;
        case 0x44fc1cu: goto label_44fc1c;
        case 0x44fc20u: goto label_44fc20;
        case 0x44fc24u: goto label_44fc24;
        case 0x44fc28u: goto label_44fc28;
        case 0x44fc2cu: goto label_44fc2c;
        case 0x44fc30u: goto label_44fc30;
        case 0x44fc34u: goto label_44fc34;
        case 0x44fc38u: goto label_44fc38;
        case 0x44fc3cu: goto label_44fc3c;
        case 0x44fc40u: goto label_44fc40;
        case 0x44fc44u: goto label_44fc44;
        case 0x44fc48u: goto label_44fc48;
        case 0x44fc4cu: goto label_44fc4c;
        case 0x44fc50u: goto label_44fc50;
        case 0x44fc54u: goto label_44fc54;
        case 0x44fc58u: goto label_44fc58;
        case 0x44fc5cu: goto label_44fc5c;
        case 0x44fc60u: goto label_44fc60;
        case 0x44fc64u: goto label_44fc64;
        case 0x44fc68u: goto label_44fc68;
        case 0x44fc6cu: goto label_44fc6c;
        case 0x44fc70u: goto label_44fc70;
        case 0x44fc74u: goto label_44fc74;
        case 0x44fc78u: goto label_44fc78;
        case 0x44fc7cu: goto label_44fc7c;
        case 0x44fc80u: goto label_44fc80;
        case 0x44fc84u: goto label_44fc84;
        case 0x44fc88u: goto label_44fc88;
        case 0x44fc8cu: goto label_44fc8c;
        case 0x44fc90u: goto label_44fc90;
        case 0x44fc94u: goto label_44fc94;
        case 0x44fc98u: goto label_44fc98;
        case 0x44fc9cu: goto label_44fc9c;
        case 0x44fca0u: goto label_44fca0;
        case 0x44fca4u: goto label_44fca4;
        case 0x44fca8u: goto label_44fca8;
        case 0x44fcacu: goto label_44fcac;
        case 0x44fcb0u: goto label_44fcb0;
        case 0x44fcb4u: goto label_44fcb4;
        case 0x44fcb8u: goto label_44fcb8;
        case 0x44fcbcu: goto label_44fcbc;
        default: break;
    }

    ctx->pc = 0x44f650u;

label_44f650:
    // 0x44f650: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x44f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_44f654:
    // 0x44f654: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x44f654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_44f658:
    // 0x44f658: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x44f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_44f65c:
    // 0x44f65c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x44f65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44f660:
    // 0x44f660: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x44f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_44f664:
    // 0x44f664: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x44f664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44f668:
    // 0x44f668: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x44f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_44f66c:
    // 0x44f66c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x44f66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44f670:
    // 0x44f670: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x44f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_44f674:
    // 0x44f674: 0x32660004  andi        $a2, $s3, 0x4
    ctx->pc = 0x44f674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_44f678:
    // 0x44f678: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x44f678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_44f67c:
    // 0x44f67c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x44f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_44f680:
    // 0x44f680: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x44f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_44f684:
    // 0x44f684: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x44f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_44f688:
    // 0x44f688: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44f68c:
    // 0x44f68c: 0x8eab0058  lw          $t3, 0x58($s5)
    ctx->pc = 0x44f68cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_44f690:
    // 0x44f690: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x44f690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_44f694:
    // 0x44f694: 0xb10c3  sra         $v0, $t3, 3
    ctx->pc = 0x44f694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 3));
label_44f698:
    // 0x44f698: 0x31680001  andi        $t0, $t3, 0x1
    ctx->pc = 0x44f698u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_44f69c:
    // 0x44f69c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44f69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_44f6a0:
    // 0x44f6a0: 0xb1903  sra         $v1, $t3, 4
    ctx->pc = 0x44f6a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 4));
label_44f6a4:
    // 0x44f6a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x44f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_44f6a8:
    // 0x44f6a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x44f6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_44f6ac:
    // 0x44f6ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44f6b0:
    // 0x44f6b0: 0xb2083  sra         $a0, $t3, 2
    ctx->pc = 0x44f6b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 2));
label_44f6b4:
    // 0x44f6b4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x44f6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_44f6b8:
    // 0x44f6b8: 0xb1043  sra         $v0, $t3, 1
    ctx->pc = 0x44f6b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
label_44f6bc:
    // 0x44f6bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44f6c0:
    // 0x44f6c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_44f6c4:
    // 0x44f6c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_44f6c8:
    // 0x44f6c8: 0xb2983  sra         $a1, $t3, 6
    ctx->pc = 0x44f6c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 6));
label_44f6cc:
    // 0x44f6cc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x44f6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_44f6d0:
    // 0x44f6d0: 0xb2143  sra         $a0, $t3, 5
    ctx->pc = 0x44f6d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 5));
label_44f6d4:
    // 0x44f6d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x44f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44f6d8:
    // 0x44f6d8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x44f6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_44f6dc:
    // 0x44f6dc: 0xb19c3  sra         $v1, $t3, 7
    ctx->pc = 0x44f6dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 7));
label_44f6e0:
    // 0x44f6e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x44f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_44f6e4:
    // 0x44f6e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x44f6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_44f6e8:
    // 0x44f6e8: 0xb1203  sra         $v0, $t3, 8
    ctx->pc = 0x44f6e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 8));
label_44f6ec:
    // 0x44f6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_44f6f0:
    // 0x44f6f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_44f6f4:
    // 0x44f6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44f6f8:
    // 0x44f6f8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_44f6fc:
    if (ctx->pc == 0x44F6FCu) {
        ctx->pc = 0x44F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F6F8u;
        // 0x44f6fc: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F700u;
        goto label_44f700;
    }
    ctx->pc = 0x44F6F8u;
    {
        const bool branch_taken_0x44f6f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F6F8u;
        // 0x44f6fc: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f6f8) {
            ctx->pc = 0x44F714u;
            goto label_44f714;
        }
    }
    ctx->pc = 0x44F700u;
label_44f700:
    // 0x44f700: 0x3c02eee1  lui         $v0, 0xEEE1
    ctx->pc = 0x44f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61153 << 16));
label_44f704:
    // 0x44f704: 0x3442fe18  ori         $v0, $v0, 0xFE18
    ctx->pc = 0x44f704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65048);
label_44f708:
    // 0x44f708: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x44f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_44f70c:
    // 0x44f70c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x44f70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_44f710:
    // 0x44f710: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x44f710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_44f714:
    // 0x44f714: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x44f714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_44f718:
    // 0x44f718: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x44f718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f71c:
    // 0x44f71c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44f720:
    // 0x44f720: 0x32640010  andi        $a0, $s3, 0x10
    ctx->pc = 0x44f720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_44f724:
    // 0x44f724: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_44f728:
    if (ctx->pc == 0x44F728u) {
        ctx->pc = 0x44F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F724u;
        // 0x44f728: 0x62b00b  movn        $s6, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F72Cu;
        goto label_44f72c;
    }
    ctx->pc = 0x44F724u;
    {
        const bool branch_taken_0x44f724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F724u;
        // 0x44f728: 0x62b00b  movn        $s6, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f724) {
            ctx->pc = 0x44F750u;
            goto label_44f750;
        }
    }
    ctx->pc = 0x44F72Cu;
label_44f72c:
    // 0x44f72c: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x44f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_44f730:
    // 0x44f730: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x44f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44f734:
    // 0x44f734: 0x8c62ada8  lw          $v0, -0x5258($v1)
    ctx->pc = 0x44f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946216)));
label_44f738:
    // 0x44f738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x44f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44f73c:
    // 0x44f73c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x44f73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_44f740:
    // 0x44f740: 0x40f809  jalr        $v0
label_44f744:
    if (ctx->pc == 0x44F744u) {
        ctx->pc = 0x44F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F740u;
        // 0x44f744: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F748u;
        goto label_44f748;
    }
    ctx->pc = 0x44F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44F748u);
        ctx->pc = 0x44F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F740u;
        // 0x44f744: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F740u, 0x44F748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F748u;
label_44f748:
    // 0x44f748: 0x10000152  b           . + 4 + (0x152 << 2)
label_44f74c:
    if (ctx->pc == 0x44F74Cu) {
        ctx->pc = 0x44F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F748u;
        // 0x44f74c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F750u;
        goto label_44f750;
    }
    ctx->pc = 0x44F748u;
    {
        const bool branch_taken_0x44f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F748u;
        // 0x44f74c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f748) {
            ctx->pc = 0x44FC94u;
            goto label_44fc94;
        }
    }
    ctx->pc = 0x44F750u;
label_44f750:
    // 0x44f750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_44f754:
    // 0x44f754: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
label_44f758:
    if (ctx->pc == 0x44F758u) {
        ctx->pc = 0x44F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F754u;
        // 0x44f758: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F75Cu;
        goto label_44f75c;
    }
    ctx->pc = 0x44F754u;
    {
        const bool branch_taken_0x44f754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F754u;
        // 0x44f758: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f754) {
            ctx->pc = 0x44FAA8u;
            goto label_44faa8;
        }
    }
    ctx->pc = 0x44F75Cu;
label_44f75c:
    // 0x44f75c: 0x24eeffff  addiu       $t6, $a3, -0x1
    ctx->pc = 0x44f75cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_44f760:
    // 0x44f760: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x44f760u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
label_44f764:
    // 0x44f764: 0x2445a748  addiu       $a1, $v0, -0x58B8
    ctx->pc = 0x44f764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944584));
label_44f768:
    // 0x44f768: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x44f768u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f76c:
    // 0x44f76c: 0xb9083  sra         $s2, $t3, 2
    ctx->pc = 0x44f76cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 2));
label_44f770:
    // 0x44f770: 0xb7843  sra         $t7, $t3, 1
    ctx->pc = 0x44f770u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 11), 1));
label_44f774:
    // 0x44f774: 0xb3983  sra         $a3, $t3, 6
    ctx->pc = 0x44f774u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 11), 6));
label_44f778:
    // 0x44f778: 0xb4943  sra         $t1, $t3, 5
    ctx->pc = 0x44f778u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 5));
label_44f77c:
    // 0x44f77c: 0xb51c3  sra         $t2, $t3, 7
    ctx->pc = 0x44f77cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 7));
label_44f780:
    // 0x44f780: 0xb4203  sra         $t0, $t3, 8
    ctx->pc = 0x44f780u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 8));
label_44f784:
    // 0x44f784: 0x13b943  sra         $s7, $s3, 5
    ctx->pc = 0x44f784u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 19), 5));
label_44f788:
    // 0x44f788: 0x316d0004  andi        $t5, $t3, 0x4
    ctx->pc = 0x44f788u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
label_44f78c:
    // 0x44f78c: 0x31740002  andi        $s4, $t3, 0x2
    ctx->pc = 0x44f78cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
label_44f790:
    // 0x44f790: 0x32700008  andi        $s0, $s3, 0x8
    ctx->pc = 0x44f790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_44f794:
    // 0x44f794: 0x3c190071  lui         $t9, 0x71
    ctx->pc = 0x44f794u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)113 << 16));
label_44f798:
    // 0x44f798: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x44f798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_44f79c:
    // 0x44f79c: 0x0  nop
    ctx->pc = 0x44f79cu;
    // NOP
label_44f7a0:
    // 0x44f7a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44f7a4:
    // 0x44f7a4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x44f7a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_44f7a8:
    // 0x44f7a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_44f7ac:
    // 0x44f7ac: 0x2d820009  sltiu       $v0, $t4, 0x9
    ctx->pc = 0x44f7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_44f7b0:
    // 0x44f7b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_44f7b4:
    // 0x44f7b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_44f7b8:
    if (ctx->pc == 0x44F7B8u) {
        ctx->pc = 0x44F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F7B4u;
        // 0x44f7b8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F7BCu;
        goto label_44f7bc;
    }
    ctx->pc = 0x44F7B4u;
    {
        const bool branch_taken_0x44f7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F7B4u;
        // 0x44f7b8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f7b4) {
            ctx->pc = 0x44F7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f7a0;
        }
    }
    ctx->pc = 0x44F7BCu;
label_44f7bc:
    // 0x44f7bc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x44f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_44f7c0:
    // 0x44f7c0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x44f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_44f7c4:
    // 0x44f7c4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x44f7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_44f7c8:
    // 0x44f7c8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x44f7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_44f7cc:
    // 0x44f7cc: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x44f7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_44f7d0:
    // 0x44f7d0: 0x1642024  and         $a0, $t3, $a0
    ctx->pc = 0x44f7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
label_44f7d4:
    // 0x44f7d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x44f7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44f7d8:
    // 0x44f7d8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x44f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_44f7dc:
    // 0x44f7dc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x44f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_44f7e0:
    // 0x44f7e0: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x44f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_44f7e4:
    // 0x44f7e4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x44f7e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_44f7e8:
    // 0x44f7e8: 0x1631824  and         $v1, $t3, $v1
    ctx->pc = 0x44f7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_44f7ec:
    // 0x44f7ec: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x44f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_44f7f0:
    // 0x44f7f0: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x44f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_44f7f4:
    // 0x44f7f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x44f7f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_44f7f8:
    // 0x44f7f8: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x44f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_44f7fc:
    // 0x44f7fc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x44f7fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_44f800:
    // 0x44f800: 0x24a5a798  addiu       $a1, $a1, -0x5868
    ctx->pc = 0x44f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944664));
label_44f804:
    // 0x44f804: 0x3a440001  xori        $a0, $s2, 0x1
    ctx->pc = 0x44f804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_44f808:
    // 0x44f808: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x44f808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_44f80c:
    // 0x44f80c: 0xd880a  movz        $s1, $zero, $t5
    ctx->pc = 0x44f80cu;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_44f810:
    // 0x44f810: 0x32f70001  andi        $s7, $s7, 0x1
    ctx->pc = 0x44f810u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_44f814:
    // 0x44f814: 0x39e60001  xori        $a2, $t7, 0x1
    ctx->pc = 0x44f814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
label_44f818:
    // 0x44f818: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x44f818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
label_44f81c:
    // 0x44f81c: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x44f81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_44f820:
    // 0x44f820: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x44f820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_44f824:
    // 0x44f824: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x44f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44f828:
    // 0x44f828: 0x394a0001  xori        $t2, $t2, 0x1
    ctx->pc = 0x44f828u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
label_44f82c:
    // 0x44f82c: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x44f82cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_44f830:
    // 0x44f830: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x44f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_44f834:
    // 0x44f834: 0x1c2001b  divu        $zero, $t6, $v0
    ctx->pc = 0x44f834u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
label_44f838:
    // 0x44f838: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_44f83c:
    if (ctx->pc == 0x44F83Cu) {
        ctx->pc = 0x44F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F838u;
        // 0x44f83c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F840u;
        goto label_44f840;
    }
    ctx->pc = 0x44F838u;
    {
        const bool branch_taken_0x44f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f838) {
            ctx->pc = 0x44F83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F838u;
            // 0x44f83c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F840u;
            goto label_44f840;
        }
    }
    ctx->pc = 0x44F840u;
label_44f840:
    // 0x44f840: 0x8e4b0018  lw          $t3, 0x18($s2)
    ctx->pc = 0x44f840u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_44f844:
    // 0x44f844: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x44f844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_44f848:
    // 0x44f848: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x44f848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_44f84c:
    // 0x44f84c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x44f84cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_44f850:
    // 0x44f850: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x44f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_44f854:
    // 0x44f854: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x44f854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_44f858:
    // 0x44f858: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x44f858u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_44f85c:
    // 0x44f85c: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x44f85cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_44f860:
    // 0x44f860: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44f860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44f864:
    // 0x44f864: 0x74880b  movn        $s1, $v1, $s4
    ctx->pc = 0x44f864u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_44f868:
    // 0x44f868: 0xafb70038  sw          $s7, 0x38($sp)
    ctx->pc = 0x44f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 23));
label_44f86c:
    // 0x44f86c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x44f86cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f870:
    // 0x44f870: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x44f870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_44f874:
    // 0x44f874: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x44f874u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f878:
    // 0x44f878: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x44f878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_44f87c:
    // 0x44f87c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x44f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_44f880:
    // 0x44f880: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x44f880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_44f884:
    // 0x44f884: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x44f884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_44f888:
    // 0x44f888: 0xafaa001c  sw          $t2, 0x1C($sp)
    ctx->pc = 0x44f888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
label_44f88c:
    // 0x44f88c: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x44f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
label_44f890:
    // 0x44f890: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x44f890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_44f894:
    // 0x44f894: 0x2812  mflo        $a1
    ctx->pc = 0x44f894u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_44f898:
    // 0x44f898: 0x11600013  beqz        $t3, . + 4 + (0x13 << 2)
label_44f89c:
    if (ctx->pc == 0x44F89Cu) {
        ctx->pc = 0x44F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F898u;
        // 0x44f89c: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F8A0u;
        goto label_44f8a0;
    }
    ctx->pc = 0x44F898u;
    {
        const bool branch_taken_0x44f898 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F898u;
        // 0x44f89c: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f898) {
            ctx->pc = 0x44F8E8u;
            goto label_44f8e8;
        }
    }
    ctx->pc = 0x44F8A0u;
label_44f8a0:
    // 0x44f8a0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x44f8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_44f8a4:
    // 0x44f8a4: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x44f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_44f8a8:
    // 0x44f8a8: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x44f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_44f8ac:
    // 0x44f8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44f8b0:
    // 0x44f8b0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x44f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_44f8b4:
    // 0x44f8b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44f8b8:
    // 0x44f8b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_44f8bc:
    if (ctx->pc == 0x44F8BCu) {
        ctx->pc = 0x44F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8B8u;
        // 0x44f8bc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F8C0u;
        goto label_44f8c0;
    }
    ctx->pc = 0x44F8B8u;
    {
        const bool branch_taken_0x44f8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f8b8) {
            ctx->pc = 0x44F8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F8B8u;
            // 0x44f8bc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F8D0u;
            goto label_44f8d0;
        }
    }
    ctx->pc = 0x44F8C0u;
label_44f8c0:
    // 0x44f8c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44f8c4:
    // 0x44f8c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44f8c8:
    // 0x44f8c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_44f8cc:
    if (ctx->pc == 0x44F8CCu) {
        ctx->pc = 0x44F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8C8u;
        // 0x44f8cc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F8D0u;
        goto label_44f8d0;
    }
    ctx->pc = 0x44F8C8u;
    {
        const bool branch_taken_0x44f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8C8u;
        // 0x44f8cc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f8c8) {
            ctx->pc = 0x44F8D8u;
            goto label_44f8d8;
        }
    }
    ctx->pc = 0x44F8D0u;
label_44f8d0:
    // 0x44f8d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44f8d4:
    // 0x44f8d4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x44f8d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_44f8d8:
    // 0x44f8d8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x44f8d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_44f8dc:
    // 0x44f8dc: 0x186102b  sltu        $v0, $t4, $a2
    ctx->pc = 0x44f8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_44f8e0:
    // 0x44f8e0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_44f8e4:
    if (ctx->pc == 0x44F8E4u) {
        ctx->pc = 0x44F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8E0u;
        // 0x44f8e4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F8E8u;
        goto label_44f8e8;
    }
    ctx->pc = 0x44F8E0u;
    {
        const bool branch_taken_0x44f8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8E0u;
        // 0x44f8e4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f8e0) {
            ctx->pc = 0x44F8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f8a8;
        }
    }
    ctx->pc = 0x44F8E8u;
label_44f8e8:
    // 0x44f8e8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x44f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_44f8ec:
    // 0x44f8ec: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x44f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_44f8f0:
    // 0x44f8f0: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x44f8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_44f8f4:
    // 0x44f8f4: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x44f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_44f8f8:
    // 0x44f8f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44f8fc:
    // 0x44f8fc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_44f900:
    if (ctx->pc == 0x44F900u) {
        ctx->pc = 0x44F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8FCu;
        // 0x44f900: 0x2c32018  mult        $a0, $s6, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F904u;
        goto label_44f904;
    }
    ctx->pc = 0x44F8FCu;
    {
        const bool branch_taken_0x44f8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F8FCu;
        // 0x44f900: 0x2c32018  mult        $a0, $s6, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f8fc) {
            ctx->pc = 0x44F918u;
            goto label_44f918;
        }
    }
    ctx->pc = 0x44F904u;
label_44f904:
    // 0x44f904: 0x2723ad18  addiu       $v1, $t9, -0x52E8
    ctx->pc = 0x44f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294946072));
label_44f908:
    // 0x44f908: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44f908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44f90c:
    // 0x44f90c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x44f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_44f910:
    // 0x44f910: 0x10000005  b           . + 4 + (0x5 << 2)
label_44f914:
    if (ctx->pc == 0x44F914u) {
        ctx->pc = 0x44F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F910u;
        // 0x44f914: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F918u;
        goto label_44f918;
    }
    ctx->pc = 0x44F910u;
    {
        const bool branch_taken_0x44f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F910u;
        // 0x44f914: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f910) {
            ctx->pc = 0x44F928u;
            goto label_44f928;
        }
    }
    ctx->pc = 0x44F918u;
label_44f918:
    // 0x44f918: 0x2723ad18  addiu       $v1, $t9, -0x52E8
    ctx->pc = 0x44f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294946072));
label_44f91c:
    // 0x44f91c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44f920:
    // 0x44f920: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x44f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_44f924:
    // 0x44f924: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x44f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_44f928:
    // 0x44f928: 0x40f809  jalr        $v0
label_44f92c:
    if (ctx->pc == 0x44F92Cu) {
        ctx->pc = 0x44F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F928u;
        // 0x44f92c: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F930u;
        goto label_44f930;
    }
    ctx->pc = 0x44F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44F930u);
        ctx->pc = 0x44F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F928u;
        // 0x44f92c: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F928u, 0x44F930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F930u;
label_44f930:
    // 0x44f930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44f930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f934:
    // 0x44f934: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_44f938:
    if (ctx->pc == 0x44F938u) {
        ctx->pc = 0x44F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F934u;
        // 0x44f938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F93Cu;
        goto label_44f93c;
    }
    ctx->pc = 0x44F934u;
    {
        const bool branch_taken_0x44f934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F934u;
        // 0x44f938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f934) {
            ctx->pc = 0x44F944u;
            goto label_44f944;
        }
    }
    ctx->pc = 0x44F93Cu;
label_44f93c:
    // 0x44f93c: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_44f940:
    if (ctx->pc == 0x44F940u) {
        ctx->pc = 0x44F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F93Cu;
        // 0x44f940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F944u;
        goto label_44f944;
    }
    ctx->pc = 0x44F93Cu;
    {
        const bool branch_taken_0x44f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F93Cu;
        // 0x44f940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f93c) {
            ctx->pc = 0x44FC90u;
            goto label_44fc90;
        }
    }
    ctx->pc = 0x44F944u;
label_44f944:
    // 0x44f944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44f944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f948:
    // 0x44f948: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x44f948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_44f94c:
    // 0x44f94c: 0xc10c1fa  jal         func_4307E8
label_44f950:
    if (ctx->pc == 0x44F950u) {
        ctx->pc = 0x44F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F94Cu;
        // 0x44f950: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F954u;
        goto label_44f954;
    }
    ctx->pc = 0x44F94Cu;
    SET_GPR_U32(ctx, 31, 0x44F954u);
    ctx->pc = 0x44F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44F94Cu;
    // 0x44f950: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x44F94Cu, 0x44F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F954u;
label_44f954:
    // 0x44f954: 0x2ede0002  sltiu       $fp, $s6, 0x2
    ctx->pc = 0x44f954u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_44f958:
    // 0x44f958: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x44f958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
label_44f95c:
    // 0x44f95c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x44f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_44f960:
    // 0x44f960: 0xae170124  sw          $s7, 0x124($s0)
    ctx->pc = 0x44f960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 23));
label_44f964:
    // 0x44f964: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x44f964u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f968:
    // 0x44f968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x44f968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_44f96c:
    // 0x44f96c: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x44f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
label_44f970:
    // 0x44f970: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x44f970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_44f974:
    // 0x44f974: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x44f974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_44f978:
    // 0x44f978: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x44f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_44f97c:
    // 0x44f97c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x44f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_44f980:
    // 0x44f980: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x44f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_44f984:
    // 0x44f984: 0xae14012c  sw          $s4, 0x12C($s0)
    ctx->pc = 0x44f984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 20));
label_44f988:
    // 0x44f988: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x44f988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_44f98c:
    // 0x44f98c: 0xae1200fc  sw          $s2, 0xFC($s0)
    ctx->pc = 0x44f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 18));
label_44f990:
    // 0x44f990: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x44f990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44f994:
    // 0x44f994: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x44f994u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
label_44f998:
    // 0x44f998: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x44f998u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44f99c:
    // 0x44f99c: 0x7e030110  sq          $v1, 0x110($s0)
    ctx->pc = 0x44f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 3));
label_44f9a0:
    // 0x44f9a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_44f9a4:
    // 0x44f9a4: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x44f9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_44f9a8:
    // 0x44f9a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f9ac:
    // 0x44f9ac: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x44f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
label_44f9b0:
    // 0x44f9b0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x44f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_44f9b4:
    // 0x44f9b4: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x44f9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44f9b8:
    // 0x44f9b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_44f9bc:
    if (ctx->pc == 0x44F9BCu) {
        ctx->pc = 0x44F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F9B8u;
        // 0x44f9bc: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F9C0u;
        goto label_44f9c0;
    }
    ctx->pc = 0x44F9B8u;
    {
        const bool branch_taken_0x44f9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F9B8u;
        // 0x44f9bc: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f9b8) {
            ctx->pc = 0x44FA0Cu;
            goto label_44fa0c;
        }
    }
    ctx->pc = 0x44F9C0u;
label_44f9c0:
    // 0x44f9c0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x44f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_44f9c4:
    // 0x44f9c4: 0x260600f4  addiu       $a2, $s0, 0xF4
    ctx->pc = 0x44f9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
label_44f9c8:
    // 0x44f9c8: 0x2447a770  addiu       $a3, $v0, -0x5890
    ctx->pc = 0x44f9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
label_44f9cc:
    // 0x44f9cc: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x44f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_44f9d0:
    // 0x44f9d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44f9d4:
    // 0x44f9d4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x44f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44f9d8:
    // 0x44f9d8: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x44f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_44f9dc:
    // 0x44f9dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44f9e0:
    // 0x44f9e0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_44f9e4:
    if (ctx->pc == 0x44F9E4u) {
        ctx->pc = 0x44F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F9E0u;
        // 0x44f9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44F9E8u;
        goto label_44f9e8;
    }
    ctx->pc = 0x44F9E0u;
    {
        const bool branch_taken_0x44f9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44f9e0) {
            ctx->pc = 0x44F9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F9E0u;
            // 0x44f9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F9F0u;
            goto label_44f9f0;
        }
    }
    ctx->pc = 0x44F9E8u;
label_44f9e8:
    // 0x44f9e8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x44f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_44f9ec:
    // 0x44f9ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x44f9ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_44f9f0:
    // 0x44f9f0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x44f9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_44f9f4:
    // 0x44f9f4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x44f9f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_44f9f8:
    // 0x44f9f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x44f9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_44f9fc:
    // 0x44f9fc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x44f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_44fa00:
    // 0x44fa00: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x44fa00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44fa04:
    // 0x44fa04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_44fa08:
    if (ctx->pc == 0x44FA08u) {
        ctx->pc = 0x44FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA04u;
        // 0x44fa08: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FA0Cu;
        goto label_44fa0c;
    }
    ctx->pc = 0x44FA04u;
    {
        const bool branch_taken_0x44fa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA04u;
        // 0x44fa08: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fa04) {
            ctx->pc = 0x44F9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f9d0;
        }
    }
    ctx->pc = 0x44FA0Cu;
label_44fa0c:
    // 0x44fa0c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x44fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_44fa10:
    // 0x44fa10: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_44fa14:
    if (ctx->pc == 0x44FA14u) {
        ctx->pc = 0x44FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA10u;
        // 0x44fa14: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FA18u;
        goto label_44fa18;
    }
    ctx->pc = 0x44FA10u;
    {
        const bool branch_taken_0x44fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA10u;
        // 0x44fa14: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fa10) {
            ctx->pc = 0x44FC5Cu;
            goto label_44fc5c;
        }
    }
    ctx->pc = 0x44FA18u;
label_44fa18:
    // 0x44fa18: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x44fa18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
label_44fa1c:
    // 0x44fa1c: 0x26070090  addiu       $a3, $s0, 0x90
    ctx->pc = 0x44fa1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_44fa20:
    // 0x44fa20: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x44fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_44fa24:
    // 0x44fa24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44fa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44fa28:
    // 0x44fa28: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x44fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_44fa2c:
    // 0x44fa2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44fa30:
    // 0x44fa30: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x44fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_44fa34:
    // 0x44fa34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44fa38:
    // 0x44fa38: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_44fa3c:
    if (ctx->pc == 0x44FA3Cu) {
        ctx->pc = 0x44FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA38u;
        // 0x44fa3c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FA40u;
        goto label_44fa40;
    }
    ctx->pc = 0x44FA38u;
    {
        const bool branch_taken_0x44fa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fa38) {
            ctx->pc = 0x44FA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44FA38u;
            // 0x44fa3c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44FA5Cu;
            goto label_44fa5c;
        }
    }
    ctx->pc = 0x44FA40u;
label_44fa40:
    // 0x44fa40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44fa44:
    // 0x44fa44: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x44fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_44fa48:
    // 0x44fa48: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x44fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_44fa4c:
    // 0x44fa4c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x44fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_44fa50:
    // 0x44fa50: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x44fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
label_44fa54:
    // 0x44fa54: 0x10000009  b           . + 4 + (0x9 << 2)
label_44fa58:
    if (ctx->pc == 0x44FA58u) {
        ctx->pc = 0x44FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA54u;
        // 0x44fa58: 0xfce00000  sd          $zero, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FA5Cu;
        goto label_44fa5c;
    }
    ctx->pc = 0x44FA54u;
    {
        const bool branch_taken_0x44fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA54u;
        // 0x44fa58: 0xfce00000  sd          $zero, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fa54) {
            ctx->pc = 0x44FA7Cu;
            goto label_44fa7c;
        }
    }
    ctx->pc = 0x44FA5Cu;
label_44fa5c:
    // 0x44fa5c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x44fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_44fa60:
    // 0x44fa60: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x44fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_44fa64:
    // 0x44fa64: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x44fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44fa68:
    // 0x44fa68: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x44fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
label_44fa6c:
    // 0x44fa6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44fa70:
    // 0x44fa70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44fa74:
    // 0x44fa74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44fa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_44fa78:
    // 0x44fa78: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x44fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_44fa7c:
    // 0x44fa7c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x44fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_44fa80:
    // 0x44fa80: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x44fa80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_44fa84:
    // 0x44fa84: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x44fa84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_44fa88:
    // 0x44fa88: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x44fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_44fa8c:
    // 0x44fa8c: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x44fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
label_44fa90:
    // 0x44fa90: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x44fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_44fa94:
    // 0x44fa94: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x44fa94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44fa98:
    // 0x44fa98: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_44fa9c:
    if (ctx->pc == 0x44FA9Cu) {
        ctx->pc = 0x44FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA98u;
        // 0x44fa9c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FAA0u;
        goto label_44faa0;
    }
    ctx->pc = 0x44FA98u;
    {
        const bool branch_taken_0x44fa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FA98u;
        // 0x44fa9c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fa98) {
            ctx->pc = 0x44FA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44fa28;
        }
    }
    ctx->pc = 0x44FAA0u;
label_44faa0:
    // 0x44faa0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_44faa4:
    if (ctx->pc == 0x44FAA4u) {
        ctx->pc = 0x44FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAA0u;
        // 0x44faa4: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FAA8u;
        goto label_44faa8;
    }
    ctx->pc = 0x44FAA0u;
    {
        const bool branch_taken_0x44faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAA0u;
        // 0x44faa4: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44faa0) {
            ctx->pc = 0x44FC60u;
            goto label_44fc60;
        }
    }
    ctx->pc = 0x44FAA8u;
label_44faa8:
    // 0x44faa8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x44faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_44faac:
    // 0x44faac: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x44faacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_44fab0:
    // 0x44fab0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_44fab4:
    if (ctx->pc == 0x44FAB4u) {
        ctx->pc = 0x44FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAB0u;
        // 0x44fab4: 0x31620008  andi        $v0, $t3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FAB8u;
        goto label_44fab8;
    }
    ctx->pc = 0x44FAB0u;
    {
        const bool branch_taken_0x44fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAB0u;
        // 0x44fab4: 0x31620008  andi        $v0, $t3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fab0) {
            ctx->pc = 0x44FBBCu;
            goto label_44fbbc;
        }
    }
    ctx->pc = 0x44FAB8u;
label_44fab8:
    // 0x44fab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_44fabc:
    if (ctx->pc == 0x44FABCu) {
        ctx->pc = 0x44FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAB8u;
        // 0x44fabc: 0x82100  sll         $a0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FAC0u;
        goto label_44fac0;
    }
    ctx->pc = 0x44FAB8u;
    {
        const bool branch_taken_0x44fab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAB8u;
        // 0x44fabc: 0x82100  sll         $a0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fab8) {
            ctx->pc = 0x44FACCu;
            goto label_44facc;
        }
    }
    ctx->pc = 0x44FAC0u;
label_44fac0:
    // 0x44fac0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x44fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_44fac4:
    // 0x44fac4: 0x8c43e78c  lw          $v1, -0x1874($v0)
    ctx->pc = 0x44fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961036)));
label_44fac8:
    // 0x44fac8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44facc:
    // 0x44facc: 0x31620010  andi        $v0, $t3, 0x10
    ctx->pc = 0x44faccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16);
label_44fad0:
    // 0x44fad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fad4:
    if (ctx->pc == 0x44FAD4u) {
        ctx->pc = 0x44FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAD0u;
        // 0x44fad4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FAD8u;
        goto label_44fad8;
    }
    ctx->pc = 0x44FAD0u;
    {
        const bool branch_taken_0x44fad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAD0u;
        // 0x44fad4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fad0) {
            ctx->pc = 0x44FAE0u;
            goto label_44fae0;
        }
    }
    ctx->pc = 0x44FAD8u;
label_44fad8:
    // 0x44fad8: 0x8c43e790  lw          $v1, -0x1870($v0)
    ctx->pc = 0x44fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961040)));
label_44fadc:
    // 0x44fadc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44fae0:
    // 0x44fae0: 0x31620004  andi        $v0, $t3, 0x4
    ctx->pc = 0x44fae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
label_44fae4:
    // 0x44fae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fae8:
    if (ctx->pc == 0x44FAE8u) {
        ctx->pc = 0x44FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAE4u;
        // 0x44fae8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FAECu;
        goto label_44faec;
    }
    ctx->pc = 0x44FAE4u;
    {
        const bool branch_taken_0x44fae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAE4u;
        // 0x44fae8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fae4) {
            ctx->pc = 0x44FAF4u;
            goto label_44faf4;
        }
    }
    ctx->pc = 0x44FAECu;
label_44faec:
    // 0x44faec: 0x8c43e794  lw          $v1, -0x186C($v0)
    ctx->pc = 0x44faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961044)));
label_44faf0:
    // 0x44faf0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44faf4:
    // 0x44faf4: 0x31620002  andi        $v0, $t3, 0x2
    ctx->pc = 0x44faf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
label_44faf8:
    // 0x44faf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fafc:
    if (ctx->pc == 0x44FAFCu) {
        ctx->pc = 0x44FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAF8u;
        // 0x44fafc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FB00u;
        goto label_44fb00;
    }
    ctx->pc = 0x44FAF8u;
    {
        const bool branch_taken_0x44faf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FAF8u;
        // 0x44fafc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44faf8) {
            ctx->pc = 0x44FB08u;
            goto label_44fb08;
        }
    }
    ctx->pc = 0x44FB00u;
label_44fb00:
    // 0x44fb00: 0x8c43e798  lw          $v1, -0x1868($v0)
    ctx->pc = 0x44fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961048)));
label_44fb04:
    // 0x44fb04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44fb08:
    // 0x44fb08: 0x31620040  andi        $v0, $t3, 0x40
    ctx->pc = 0x44fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)64);
label_44fb0c:
    // 0x44fb0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fb10:
    if (ctx->pc == 0x44FB10u) {
        ctx->pc = 0x44FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB0Cu;
        // 0x44fb10: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FB14u;
        goto label_44fb14;
    }
    ctx->pc = 0x44FB0Cu;
    {
        const bool branch_taken_0x44fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB0Cu;
        // 0x44fb10: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fb0c) {
            ctx->pc = 0x44FB1Cu;
            goto label_44fb1c;
        }
    }
    ctx->pc = 0x44FB14u;
label_44fb14:
    // 0x44fb14: 0x8c43e79c  lw          $v1, -0x1864($v0)
    ctx->pc = 0x44fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961052)));
label_44fb18:
    // 0x44fb18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44fb1c:
    // 0x44fb1c: 0x31620020  andi        $v0, $t3, 0x20
    ctx->pc = 0x44fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32);
label_44fb20:
    // 0x44fb20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fb24:
    if (ctx->pc == 0x44FB24u) {
        ctx->pc = 0x44FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB20u;
        // 0x44fb24: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FB28u;
        goto label_44fb28;
    }
    ctx->pc = 0x44FB20u;
    {
        const bool branch_taken_0x44fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB20u;
        // 0x44fb24: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fb20) {
            ctx->pc = 0x44FB30u;
            goto label_44fb30;
        }
    }
    ctx->pc = 0x44FB28u;
label_44fb28:
    // 0x44fb28: 0x8c43e7a0  lw          $v1, -0x1860($v0)
    ctx->pc = 0x44fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961056)));
label_44fb2c:
    // 0x44fb2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44fb30:
    // 0x44fb30: 0x31620080  andi        $v0, $t3, 0x80
    ctx->pc = 0x44fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)128);
label_44fb34:
    // 0x44fb34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fb38:
    if (ctx->pc == 0x44FB38u) {
        ctx->pc = 0x44FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB34u;
        // 0x44fb38: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FB3Cu;
        goto label_44fb3c;
    }
    ctx->pc = 0x44FB34u;
    {
        const bool branch_taken_0x44fb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB34u;
        // 0x44fb38: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fb34) {
            ctx->pc = 0x44FB44u;
            goto label_44fb44;
        }
    }
    ctx->pc = 0x44FB3Cu;
label_44fb3c:
    // 0x44fb3c: 0x8c43e7a4  lw          $v1, -0x185C($v0)
    ctx->pc = 0x44fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961060)));
label_44fb40:
    // 0x44fb40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44fb44:
    // 0x44fb44: 0x31620100  andi        $v0, $t3, 0x100
    ctx->pc = 0x44fb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)256);
label_44fb48:
    // 0x44fb48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fb4c:
    if (ctx->pc == 0x44FB4Cu) {
        ctx->pc = 0x44FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB48u;
        // 0x44fb4c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FB50u;
        goto label_44fb50;
    }
    ctx->pc = 0x44FB48u;
    {
        const bool branch_taken_0x44fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB48u;
        // 0x44fb4c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fb48) {
            ctx->pc = 0x44FB58u;
            goto label_44fb58;
        }
    }
    ctx->pc = 0x44FB50u;
label_44fb50:
    // 0x44fb50: 0x8c43e7a8  lw          $v1, -0x1858($v0)
    ctx->pc = 0x44fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961064)));
label_44fb54:
    // 0x44fb54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44fb58:
    // 0x44fb58: 0x31620009  andi        $v0, $t3, 0x9
    ctx->pc = 0x44fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)9);
label_44fb5c:
    // 0x44fb5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_44fb60:
    if (ctx->pc == 0x44FB60u) {
        ctx->pc = 0x44FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FB5Cu;
        // 0x44fb60: 0x32630001  andi        $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FB64u;
        goto label_44fb64;
    }
    ctx->pc = 0x44FB5Cu;
    {
        const bool branch_taken_0x44fb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb5c) {
            ctx->pc = 0x44FB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44FB5Cu;
            // 0x44fb60: 0x32630001  andi        $v1, $s3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x44FB78u;
            goto label_44fb78;
        }
    }
    ctx->pc = 0x44FB64u;
label_44fb64:
    // 0x44fb64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44fb68:
    // 0x44fb68: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x44fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_44fb6c:
    // 0x44fb6c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x44fb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_44fb70:
    // 0x44fb70: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x44fb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44fb74:
    // 0x44fb74: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x44fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_44fb78:
    // 0x44fb78: 0xaea40054  sw          $a0, 0x54($s5)
    ctx->pc = 0x44fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 4));
label_44fb7c:
    // 0x44fb7c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x44fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_44fb80:
    // 0x44fb80: 0x2ede0002  sltiu       $fp, $s6, 0x2
    ctx->pc = 0x44fb80u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_44fb84:
    // 0x44fb84: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x44fb84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fb88:
    // 0x44fb88: 0x32700008  andi        $s0, $s3, 0x8
    ctx->pc = 0x44fb88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_44fb8c:
    // 0x44fb8c: 0x3c190071  lui         $t9, 0x71
    ctx->pc = 0x44fb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)113 << 16));
label_44fb90:
    // 0x44fb90: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x44fb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_44fb94:
    // 0x44fb94: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x44fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_44fb98:
    // 0x44fb98: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x44fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_44fb9c:
    // 0x44fb9c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x44fb9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_44fba0:
    // 0x44fba0: 0x2d820009  sltiu       $v0, $t4, 0x9
    ctx->pc = 0x44fba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_44fba4:
    // 0x44fba4: 0x0  nop
    ctx->pc = 0x44fba4u;
    // NOP
label_44fba8:
    // 0x44fba8: 0x0  nop
    ctx->pc = 0x44fba8u;
    // NOP
label_44fbac:
    // 0x44fbac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_44fbb0:
    if (ctx->pc == 0x44FBB0u) {
        ctx->pc = 0x44FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FBACu;
        // 0x44fbb0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FBB4u;
        goto label_44fbb4;
    }
    ctx->pc = 0x44FBACu;
    {
        const bool branch_taken_0x44fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FBACu;
        // 0x44fbb0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fbac) {
            ctx->pc = 0x44FB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44fb98;
        }
    }
    ctx->pc = 0x44FBB4u;
label_44fbb4:
    // 0x44fbb4: 0x10000019  b           . + 4 + (0x19 << 2)
label_44fbb8:
    if (ctx->pc == 0x44FBB8u) {
        ctx->pc = 0x44FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FBB4u;
        // 0x44fbb8: 0xe42018  mult        $a0, $a3, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FBBCu;
        goto label_44fbbc;
    }
    ctx->pc = 0x44FBB4u;
    {
        const bool branch_taken_0x44fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FBB4u;
        // 0x44fbb8: 0xe42018  mult        $a0, $a3, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fbb4) {
            ctx->pc = 0x44FC1Cu;
            goto label_44fc1c;
        }
    }
    ctx->pc = 0x44FBBCu;
label_44fbbc:
    // 0x44fbbc: 0x32640001  andi        $a0, $s3, 0x1
    ctx->pc = 0x44fbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_44fbc0:
    // 0x44fbc0: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x44fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
label_44fbc4:
    // 0x44fbc4: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x44fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_44fbc8:
    // 0x44fbc8: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x44fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
label_44fbcc:
    // 0x44fbcc: 0x2ede0002  sltiu       $fp, $s6, 0x2
    ctx->pc = 0x44fbccu;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_44fbd0:
    // 0x44fbd0: 0x2445a748  addiu       $a1, $v0, -0x58B8
    ctx->pc = 0x44fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944584));
label_44fbd4:
    // 0x44fbd4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x44fbd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fbd8:
    // 0x44fbd8: 0x32700008  andi        $s0, $s3, 0x8
    ctx->pc = 0x44fbd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_44fbdc:
    // 0x44fbdc: 0x3c190071  lui         $t9, 0x71
    ctx->pc = 0x44fbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)113 << 16));
label_44fbe0:
    // 0x44fbe0: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x44fbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_44fbe4:
    // 0x44fbe4: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x44fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_44fbe8:
    // 0x44fbe8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44fbec:
    // 0x44fbec: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x44fbecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_44fbf0:
    // 0x44fbf0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_44fbf4:
    // 0x44fbf4: 0x2d820009  sltiu       $v0, $t4, 0x9
    ctx->pc = 0x44fbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_44fbf8:
    // 0x44fbf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_44fbfc:
    // 0x44fbfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_44fc00:
    if (ctx->pc == 0x44FC00u) {
        ctx->pc = 0x44FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FBFCu;
        // 0x44fc00: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC04u;
        goto label_44fc04;
    }
    ctx->pc = 0x44FBFCu;
    {
        const bool branch_taken_0x44fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FBFCu;
        // 0x44fc00: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fbfc) {
            ctx->pc = 0x44FBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44fbe8;
        }
    }
    ctx->pc = 0x44FC04u;
label_44fc04:
    // 0x44fc04: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x44fc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44fc08:
    // 0x44fc08: 0x7fb90040  sq          $t9, 0x40($sp)
    ctx->pc = 0x44fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 25));
label_44fc0c:
    // 0x44fc0c: 0xc113d3c  jal         func_44F4F0
label_44fc10:
    if (ctx->pc == 0x44FC10u) {
        ctx->pc = 0x44FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC0Cu;
        // 0x44fc10: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC14u;
        goto label_44fc14;
    }
    ctx->pc = 0x44FC0Cu;
    SET_GPR_U32(ctx, 31, 0x44FC14u);
    ctx->pc = 0x44FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FC0Cu;
    // 0x44fc10: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F4F0u, 0x44FC0Cu, 0x44FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FC14u;
label_44fc14:
    // 0x44fc14: 0x7bb90040  lq          $t9, 0x40($sp)
    ctx->pc = 0x44fc14u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44fc18:
    // 0x44fc18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44fc1c:
    // 0x44fc1c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_44fc20:
    if (ctx->pc == 0x44FC20u) {
        ctx->pc = 0x44FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC1Cu;
        // 0x44fc20: 0x2723ad18  addiu       $v1, $t9, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC24u;
        goto label_44fc24;
    }
    ctx->pc = 0x44FC1Cu;
    {
        const bool branch_taken_0x44fc1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC1Cu;
        // 0x44fc20: 0x2723ad18  addiu       $v1, $t9, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fc1c) {
            ctx->pc = 0x44FC34u;
            goto label_44fc34;
        }
    }
    ctx->pc = 0x44FC24u;
label_44fc24:
    // 0x44fc24: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44fc28:
    // 0x44fc28: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x44fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_44fc2c:
    // 0x44fc2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_44fc30:
    if (ctx->pc == 0x44FC30u) {
        ctx->pc = 0x44FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC2Cu;
        // 0x44fc30: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC34u;
        goto label_44fc34;
    }
    ctx->pc = 0x44FC2Cu;
    {
        const bool branch_taken_0x44fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC2Cu;
        // 0x44fc30: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fc2c) {
            ctx->pc = 0x44FC40u;
            goto label_44fc40;
        }
    }
    ctx->pc = 0x44FC34u;
label_44fc34:
    // 0x44fc34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44fc38:
    // 0x44fc38: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x44fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_44fc3c:
    // 0x44fc3c: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x44fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_44fc40:
    // 0x44fc40: 0x40f809  jalr        $v0
label_44fc44:
    if (ctx->pc == 0x44FC44u) {
        ctx->pc = 0x44FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC40u;
        // 0x44fc44: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC48u;
        goto label_44fc48;
    }
    ctx->pc = 0x44FC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44FC48u);
        ctx->pc = 0x44FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC40u;
        // 0x44fc44: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FC40u, 0x44FC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44FC48u;
label_44fc48:
    // 0x44fc48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44fc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44fc4c:
    // 0x44fc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44fc50:
    // 0x44fc50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44fc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fc54:
    // 0x44fc54: 0xc10c1fa  jal         func_4307E8
label_44fc58:
    if (ctx->pc == 0x44FC58u) {
        ctx->pc = 0x44FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC54u;
        // 0x44fc58: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC5Cu;
        goto label_44fc5c;
    }
    ctx->pc = 0x44FC54u;
    SET_GPR_U32(ctx, 31, 0x44FC5Cu);
    ctx->pc = 0x44FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FC54u;
    // 0x44fc58: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x44FC54u, 0x44FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FC5Cu;
label_44fc5c:
    // 0x44fc5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x44fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_44fc60:
    // 0x44fc60: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x44fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_44fc64:
    // 0x44fc64: 0x3bc20001  xori        $v0, $fp, 0x1
    ctx->pc = 0x44fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
label_44fc68:
    // 0x44fc68: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x44fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
label_44fc6c:
    // 0x44fc6c: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x44fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
label_44fc70:
    // 0x44fc70: 0xfe0300c8  sd          $v1, 0xC8($s0)
    ctx->pc = 0x44fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 3));
label_44fc74:
    // 0x44fc74: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x44fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_44fc78:
    // 0x44fc78: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x44fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_44fc7c:
    // 0x44fc7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_44fc80:
    if (ctx->pc == 0x44FC80u) {
        ctx->pc = 0x44FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC7Cu;
        // 0x44fc80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FC84u;
        goto label_44fc84;
    }
    ctx->pc = 0x44FC7Cu;
    {
        const bool branch_taken_0x44fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FC7Cu;
        // 0x44fc80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fc7c) {
            ctx->pc = 0x44FC88u;
            goto label_44fc88;
        }
    }
    ctx->pc = 0x44FC84u;
label_44fc84:
    // 0x44fc84: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x44fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_44fc88:
    // 0x44fc88: 0xaeb0004c  sw          $s0, 0x4C($s5)
    ctx->pc = 0x44fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 16));
label_44fc8c:
    // 0x44fc8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44fc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44fc90:
    // 0x44fc90: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x44fc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_44fc94:
    // 0x44fc94: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x44fc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_44fc98:
    // 0x44fc98: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x44fc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_44fc9c:
    // 0x44fc9c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x44fc9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44fca0:
    // 0x44fca0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x44fca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_44fca4:
    // 0x44fca4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x44fca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44fca8:
    // 0x44fca8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x44fca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44fcac:
    // 0x44fcac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x44fcacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44fcb0:
    // 0x44fcb0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x44fcb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44fcb4:
    // 0x44fcb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44fcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44fcb8:
    // 0x44fcb8: 0x3e00008  jr          $ra
label_44fcbc:
    if (ctx->pc == 0x44FCBCu) {
        ctx->pc = 0x44FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FCB8u;
        // 0x44fcbc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FCC0u;
        goto label_fallthrough_0x44fcb8;
    }
    ctx->pc = 0x44FCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FCB8u;
        // 0x44fcbc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44fcb8:
    ctx->pc = 0x44FCC0u;
}
