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

// Function: sub_0026F860
// Address: 0x26f860 - 0x270028
void sub_0026F860_0x26f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F860_0x26f860");
#endif

    switch (ctx->pc) {
        case 0x26f860u: goto label_26f860;
        case 0x26f864u: goto label_26f864;
        case 0x26f868u: goto label_26f868;
        case 0x26f86cu: goto label_26f86c;
        case 0x26f870u: goto label_26f870;
        case 0x26f874u: goto label_26f874;
        case 0x26f878u: goto label_26f878;
        case 0x26f87cu: goto label_26f87c;
        case 0x26f880u: goto label_26f880;
        case 0x26f884u: goto label_26f884;
        case 0x26f888u: goto label_26f888;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f890u: goto label_26f890;
        case 0x26f894u: goto label_26f894;
        case 0x26f898u: goto label_26f898;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8b4u: goto label_26f8b4;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f8c4u: goto label_26f8c4;
        case 0x26f8c8u: goto label_26f8c8;
        case 0x26f8ccu: goto label_26f8cc;
        case 0x26f8d0u: goto label_26f8d0;
        case 0x26f8d4u: goto label_26f8d4;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f8dcu: goto label_26f8dc;
        case 0x26f8e0u: goto label_26f8e0;
        case 0x26f8e4u: goto label_26f8e4;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f8ecu: goto label_26f8ec;
        case 0x26f8f0u: goto label_26f8f0;
        case 0x26f8f4u: goto label_26f8f4;
        case 0x26f8f8u: goto label_26f8f8;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f900u: goto label_26f900;
        case 0x26f904u: goto label_26f904;
        case 0x26f908u: goto label_26f908;
        case 0x26f90cu: goto label_26f90c;
        case 0x26f910u: goto label_26f910;
        case 0x26f914u: goto label_26f914;
        case 0x26f918u: goto label_26f918;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f920u: goto label_26f920;
        case 0x26f924u: goto label_26f924;
        case 0x26f928u: goto label_26f928;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f930u: goto label_26f930;
        case 0x26f934u: goto label_26f934;
        case 0x26f938u: goto label_26f938;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f940u: goto label_26f940;
        case 0x26f944u: goto label_26f944;
        case 0x26f948u: goto label_26f948;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f950u: goto label_26f950;
        case 0x26f954u: goto label_26f954;
        case 0x26f958u: goto label_26f958;
        case 0x26f95cu: goto label_26f95c;
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26f9d0u: goto label_26f9d0;
        case 0x26f9d4u: goto label_26f9d4;
        case 0x26f9d8u: goto label_26f9d8;
        case 0x26f9dcu: goto label_26f9dc;
        case 0x26f9e0u: goto label_26f9e0;
        case 0x26f9e4u: goto label_26f9e4;
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        case 0x26fae0u: goto label_26fae0;
        case 0x26fae4u: goto label_26fae4;
        case 0x26fae8u: goto label_26fae8;
        case 0x26faecu: goto label_26faec;
        case 0x26faf0u: goto label_26faf0;
        case 0x26faf4u: goto label_26faf4;
        case 0x26faf8u: goto label_26faf8;
        case 0x26fafcu: goto label_26fafc;
        case 0x26fb00u: goto label_26fb00;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb10u: goto label_26fb10;
        case 0x26fb14u: goto label_26fb14;
        case 0x26fb18u: goto label_26fb18;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb20u: goto label_26fb20;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb28u: goto label_26fb28;
        case 0x26fb2cu: goto label_26fb2c;
        case 0x26fb30u: goto label_26fb30;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb38u: goto label_26fb38;
        case 0x26fb3cu: goto label_26fb3c;
        case 0x26fb40u: goto label_26fb40;
        case 0x26fb44u: goto label_26fb44;
        case 0x26fb48u: goto label_26fb48;
        case 0x26fb4cu: goto label_26fb4c;
        case 0x26fb50u: goto label_26fb50;
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb5cu: goto label_26fb5c;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb64u: goto label_26fb64;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb6cu: goto label_26fb6c;
        case 0x26fb70u: goto label_26fb70;
        case 0x26fb74u: goto label_26fb74;
        case 0x26fb78u: goto label_26fb78;
        case 0x26fb7cu: goto label_26fb7c;
        case 0x26fb80u: goto label_26fb80;
        case 0x26fb84u: goto label_26fb84;
        case 0x26fb88u: goto label_26fb88;
        case 0x26fb8cu: goto label_26fb8c;
        case 0x26fb90u: goto label_26fb90;
        case 0x26fb94u: goto label_26fb94;
        case 0x26fb98u: goto label_26fb98;
        case 0x26fb9cu: goto label_26fb9c;
        case 0x26fba0u: goto label_26fba0;
        case 0x26fba4u: goto label_26fba4;
        case 0x26fba8u: goto label_26fba8;
        case 0x26fbacu: goto label_26fbac;
        case 0x26fbb0u: goto label_26fbb0;
        case 0x26fbb4u: goto label_26fbb4;
        case 0x26fbb8u: goto label_26fbb8;
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbc0u: goto label_26fbc0;
        case 0x26fbc4u: goto label_26fbc4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbccu: goto label_26fbcc;
        case 0x26fbd0u: goto label_26fbd0;
        case 0x26fbd4u: goto label_26fbd4;
        case 0x26fbd8u: goto label_26fbd8;
        case 0x26fbdcu: goto label_26fbdc;
        case 0x26fbe0u: goto label_26fbe0;
        case 0x26fbe4u: goto label_26fbe4;
        case 0x26fbe8u: goto label_26fbe8;
        case 0x26fbecu: goto label_26fbec;
        case 0x26fbf0u: goto label_26fbf0;
        case 0x26fbf4u: goto label_26fbf4;
        case 0x26fbf8u: goto label_26fbf8;
        case 0x26fbfcu: goto label_26fbfc;
        case 0x26fc00u: goto label_26fc00;
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc08u: goto label_26fc08;
        case 0x26fc0cu: goto label_26fc0c;
        case 0x26fc10u: goto label_26fc10;
        case 0x26fc14u: goto label_26fc14;
        case 0x26fc18u: goto label_26fc18;
        case 0x26fc1cu: goto label_26fc1c;
        case 0x26fc20u: goto label_26fc20;
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc28u: goto label_26fc28;
        case 0x26fc2cu: goto label_26fc2c;
        case 0x26fc30u: goto label_26fc30;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fc38u: goto label_26fc38;
        case 0x26fc3cu: goto label_26fc3c;
        case 0x26fc40u: goto label_26fc40;
        case 0x26fc44u: goto label_26fc44;
        case 0x26fc48u: goto label_26fc48;
        case 0x26fc4cu: goto label_26fc4c;
        case 0x26fc50u: goto label_26fc50;
        case 0x26fc54u: goto label_26fc54;
        case 0x26fc58u: goto label_26fc58;
        case 0x26fc5cu: goto label_26fc5c;
        case 0x26fc60u: goto label_26fc60;
        case 0x26fc64u: goto label_26fc64;
        case 0x26fc68u: goto label_26fc68;
        case 0x26fc6cu: goto label_26fc6c;
        case 0x26fc70u: goto label_26fc70;
        case 0x26fc74u: goto label_26fc74;
        case 0x26fc78u: goto label_26fc78;
        case 0x26fc7cu: goto label_26fc7c;
        case 0x26fc80u: goto label_26fc80;
        case 0x26fc84u: goto label_26fc84;
        case 0x26fc88u: goto label_26fc88;
        case 0x26fc8cu: goto label_26fc8c;
        case 0x26fc90u: goto label_26fc90;
        case 0x26fc94u: goto label_26fc94;
        case 0x26fc98u: goto label_26fc98;
        case 0x26fc9cu: goto label_26fc9c;
        case 0x26fca0u: goto label_26fca0;
        case 0x26fca4u: goto label_26fca4;
        case 0x26fca8u: goto label_26fca8;
        case 0x26fcacu: goto label_26fcac;
        case 0x26fcb0u: goto label_26fcb0;
        case 0x26fcb4u: goto label_26fcb4;
        case 0x26fcb8u: goto label_26fcb8;
        case 0x26fcbcu: goto label_26fcbc;
        case 0x26fcc0u: goto label_26fcc0;
        case 0x26fcc4u: goto label_26fcc4;
        case 0x26fcc8u: goto label_26fcc8;
        case 0x26fcccu: goto label_26fccc;
        case 0x26fcd0u: goto label_26fcd0;
        case 0x26fcd4u: goto label_26fcd4;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fcdcu: goto label_26fcdc;
        case 0x26fce0u: goto label_26fce0;
        case 0x26fce4u: goto label_26fce4;
        case 0x26fce8u: goto label_26fce8;
        case 0x26fcecu: goto label_26fcec;
        case 0x26fcf0u: goto label_26fcf0;
        case 0x26fcf4u: goto label_26fcf4;
        case 0x26fcf8u: goto label_26fcf8;
        case 0x26fcfcu: goto label_26fcfc;
        case 0x26fd00u: goto label_26fd00;
        case 0x26fd04u: goto label_26fd04;
        case 0x26fd08u: goto label_26fd08;
        case 0x26fd0cu: goto label_26fd0c;
        case 0x26fd10u: goto label_26fd10;
        case 0x26fd14u: goto label_26fd14;
        case 0x26fd18u: goto label_26fd18;
        case 0x26fd1cu: goto label_26fd1c;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd24u: goto label_26fd24;
        case 0x26fd28u: goto label_26fd28;
        case 0x26fd2cu: goto label_26fd2c;
        case 0x26fd30u: goto label_26fd30;
        case 0x26fd34u: goto label_26fd34;
        case 0x26fd38u: goto label_26fd38;
        case 0x26fd3cu: goto label_26fd3c;
        case 0x26fd40u: goto label_26fd40;
        case 0x26fd44u: goto label_26fd44;
        case 0x26fd48u: goto label_26fd48;
        case 0x26fd4cu: goto label_26fd4c;
        case 0x26fd50u: goto label_26fd50;
        case 0x26fd54u: goto label_26fd54;
        case 0x26fd58u: goto label_26fd58;
        case 0x26fd5cu: goto label_26fd5c;
        case 0x26fd60u: goto label_26fd60;
        case 0x26fd64u: goto label_26fd64;
        case 0x26fd68u: goto label_26fd68;
        case 0x26fd6cu: goto label_26fd6c;
        case 0x26fd70u: goto label_26fd70;
        case 0x26fd74u: goto label_26fd74;
        case 0x26fd78u: goto label_26fd78;
        case 0x26fd7cu: goto label_26fd7c;
        case 0x26fd80u: goto label_26fd80;
        case 0x26fd84u: goto label_26fd84;
        case 0x26fd88u: goto label_26fd88;
        case 0x26fd8cu: goto label_26fd8c;
        case 0x26fd90u: goto label_26fd90;
        case 0x26fd94u: goto label_26fd94;
        case 0x26fd98u: goto label_26fd98;
        case 0x26fd9cu: goto label_26fd9c;
        case 0x26fda0u: goto label_26fda0;
        case 0x26fda4u: goto label_26fda4;
        case 0x26fda8u: goto label_26fda8;
        case 0x26fdacu: goto label_26fdac;
        case 0x26fdb0u: goto label_26fdb0;
        case 0x26fdb4u: goto label_26fdb4;
        case 0x26fdb8u: goto label_26fdb8;
        case 0x26fdbcu: goto label_26fdbc;
        case 0x26fdc0u: goto label_26fdc0;
        case 0x26fdc4u: goto label_26fdc4;
        case 0x26fdc8u: goto label_26fdc8;
        case 0x26fdccu: goto label_26fdcc;
        case 0x26fdd0u: goto label_26fdd0;
        case 0x26fdd4u: goto label_26fdd4;
        case 0x26fdd8u: goto label_26fdd8;
        case 0x26fddcu: goto label_26fddc;
        case 0x26fde0u: goto label_26fde0;
        case 0x26fde4u: goto label_26fde4;
        case 0x26fde8u: goto label_26fde8;
        case 0x26fdecu: goto label_26fdec;
        case 0x26fdf0u: goto label_26fdf0;
        case 0x26fdf4u: goto label_26fdf4;
        case 0x26fdf8u: goto label_26fdf8;
        case 0x26fdfcu: goto label_26fdfc;
        case 0x26fe00u: goto label_26fe00;
        case 0x26fe04u: goto label_26fe04;
        case 0x26fe08u: goto label_26fe08;
        case 0x26fe0cu: goto label_26fe0c;
        case 0x26fe10u: goto label_26fe10;
        case 0x26fe14u: goto label_26fe14;
        case 0x26fe18u: goto label_26fe18;
        case 0x26fe1cu: goto label_26fe1c;
        case 0x26fe20u: goto label_26fe20;
        case 0x26fe24u: goto label_26fe24;
        case 0x26fe28u: goto label_26fe28;
        case 0x26fe2cu: goto label_26fe2c;
        case 0x26fe30u: goto label_26fe30;
        case 0x26fe34u: goto label_26fe34;
        case 0x26fe38u: goto label_26fe38;
        case 0x26fe3cu: goto label_26fe3c;
        case 0x26fe40u: goto label_26fe40;
        case 0x26fe44u: goto label_26fe44;
        case 0x26fe48u: goto label_26fe48;
        case 0x26fe4cu: goto label_26fe4c;
        case 0x26fe50u: goto label_26fe50;
        case 0x26fe54u: goto label_26fe54;
        case 0x26fe58u: goto label_26fe58;
        case 0x26fe5cu: goto label_26fe5c;
        case 0x26fe60u: goto label_26fe60;
        case 0x26fe64u: goto label_26fe64;
        case 0x26fe68u: goto label_26fe68;
        case 0x26fe6cu: goto label_26fe6c;
        case 0x26fe70u: goto label_26fe70;
        case 0x26fe74u: goto label_26fe74;
        case 0x26fe78u: goto label_26fe78;
        case 0x26fe7cu: goto label_26fe7c;
        case 0x26fe80u: goto label_26fe80;
        case 0x26fe84u: goto label_26fe84;
        case 0x26fe88u: goto label_26fe88;
        case 0x26fe8cu: goto label_26fe8c;
        case 0x26fe90u: goto label_26fe90;
        case 0x26fe94u: goto label_26fe94;
        case 0x26fe98u: goto label_26fe98;
        case 0x26fe9cu: goto label_26fe9c;
        case 0x26fea0u: goto label_26fea0;
        case 0x26fea4u: goto label_26fea4;
        case 0x26fea8u: goto label_26fea8;
        case 0x26feacu: goto label_26feac;
        case 0x26feb0u: goto label_26feb0;
        case 0x26feb4u: goto label_26feb4;
        case 0x26feb8u: goto label_26feb8;
        case 0x26febcu: goto label_26febc;
        case 0x26fec0u: goto label_26fec0;
        case 0x26fec4u: goto label_26fec4;
        case 0x26fec8u: goto label_26fec8;
        case 0x26feccu: goto label_26fecc;
        case 0x26fed0u: goto label_26fed0;
        case 0x26fed4u: goto label_26fed4;
        case 0x26fed8u: goto label_26fed8;
        case 0x26fedcu: goto label_26fedc;
        case 0x26fee0u: goto label_26fee0;
        case 0x26fee4u: goto label_26fee4;
        case 0x26fee8u: goto label_26fee8;
        case 0x26feecu: goto label_26feec;
        case 0x26fef0u: goto label_26fef0;
        case 0x26fef4u: goto label_26fef4;
        case 0x26fef8u: goto label_26fef8;
        case 0x26fefcu: goto label_26fefc;
        case 0x26ff00u: goto label_26ff00;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff08u: goto label_26ff08;
        case 0x26ff0cu: goto label_26ff0c;
        case 0x26ff10u: goto label_26ff10;
        case 0x26ff14u: goto label_26ff14;
        case 0x26ff18u: goto label_26ff18;
        case 0x26ff1cu: goto label_26ff1c;
        case 0x26ff20u: goto label_26ff20;
        case 0x26ff24u: goto label_26ff24;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff2cu: goto label_26ff2c;
        case 0x26ff30u: goto label_26ff30;
        case 0x26ff34u: goto label_26ff34;
        case 0x26ff38u: goto label_26ff38;
        case 0x26ff3cu: goto label_26ff3c;
        case 0x26ff40u: goto label_26ff40;
        case 0x26ff44u: goto label_26ff44;
        case 0x26ff48u: goto label_26ff48;
        case 0x26ff4cu: goto label_26ff4c;
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff54u: goto label_26ff54;
        case 0x26ff58u: goto label_26ff58;
        case 0x26ff5cu: goto label_26ff5c;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff64u: goto label_26ff64;
        case 0x26ff68u: goto label_26ff68;
        case 0x26ff6cu: goto label_26ff6c;
        case 0x26ff70u: goto label_26ff70;
        case 0x26ff74u: goto label_26ff74;
        case 0x26ff78u: goto label_26ff78;
        case 0x26ff7cu: goto label_26ff7c;
        case 0x26ff80u: goto label_26ff80;
        case 0x26ff84u: goto label_26ff84;
        case 0x26ff88u: goto label_26ff88;
        case 0x26ff8cu: goto label_26ff8c;
        case 0x26ff90u: goto label_26ff90;
        case 0x26ff94u: goto label_26ff94;
        case 0x26ff98u: goto label_26ff98;
        case 0x26ff9cu: goto label_26ff9c;
        case 0x26ffa0u: goto label_26ffa0;
        case 0x26ffa4u: goto label_26ffa4;
        case 0x26ffa8u: goto label_26ffa8;
        case 0x26ffacu: goto label_26ffac;
        case 0x26ffb0u: goto label_26ffb0;
        case 0x26ffb4u: goto label_26ffb4;
        case 0x26ffb8u: goto label_26ffb8;
        case 0x26ffbcu: goto label_26ffbc;
        case 0x26ffc0u: goto label_26ffc0;
        case 0x26ffc4u: goto label_26ffc4;
        case 0x26ffc8u: goto label_26ffc8;
        case 0x26ffccu: goto label_26ffcc;
        case 0x26ffd0u: goto label_26ffd0;
        case 0x26ffd4u: goto label_26ffd4;
        case 0x26ffd8u: goto label_26ffd8;
        case 0x26ffdcu: goto label_26ffdc;
        case 0x26ffe0u: goto label_26ffe0;
        case 0x26ffe4u: goto label_26ffe4;
        case 0x26ffe8u: goto label_26ffe8;
        case 0x26ffecu: goto label_26ffec;
        case 0x26fff0u: goto label_26fff0;
        case 0x26fff4u: goto label_26fff4;
        case 0x26fff8u: goto label_26fff8;
        case 0x26fffcu: goto label_26fffc;
        case 0x270000u: goto label_270000;
        case 0x270004u: goto label_270004;
        case 0x270008u: goto label_270008;
        case 0x27000cu: goto label_27000c;
        case 0x270010u: goto label_270010;
        case 0x270014u: goto label_270014;
        case 0x270018u: goto label_270018;
        case 0x27001cu: goto label_27001c;
        case 0x270020u: goto label_270020;
        case 0x270024u: goto label_270024;
        default: break;
    }

    ctx->pc = 0x26f860u;

label_26f860:
    // 0x26f860: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x26f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_26f864:
    // 0x26f864: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x26f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_26f868:
    // 0x26f868: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x26f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_26f86c:
    // 0x26f86c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f870:
    // 0x26f870: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x26f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_26f874:
    // 0x26f874: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26f874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26f878:
    // 0x26f878: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x26f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_26f87c:
    // 0x26f87c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x26f87cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26f880:
    // 0x26f880: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x26f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_26f884:
    // 0x26f884: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x26f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_26f888:
    // 0x26f888: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x26f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_26f88c:
    // 0x26f88c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_26f890:
    // 0x26f890: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x26f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_26f894:
    // 0x26f894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_26f898:
    // 0x26f898: 0xc08c6a0  jal         func_231A80
label_26f89c:
    if (ctx->pc == 0x26F89Cu) {
        ctx->pc = 0x26F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F898u;
        // 0x26f89c: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8A0u;
        goto label_26f8a0;
    }
    ctx->pc = 0x26F898u;
    SET_GPR_U32(ctx, 31, 0x26F8A0u);
    ctx->pc = 0x26F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F898u;
    // 0x26f89c: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26F898u, 0x26F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8A0u;
label_26f8a0:
    // 0x26f8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26f8a4:
    // 0x26f8a4: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_26f8a8:
    if (ctx->pc == 0x26F8A8u) {
        ctx->pc = 0x26F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8A4u;
        // 0x26f8a8: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8ACu;
        goto label_26f8ac;
    }
    ctx->pc = 0x26F8A4u;
    {
        const bool branch_taken_0x26f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8A4u;
        // 0x26f8a8: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8a4) {
            ctx->pc = 0x26F8F4u;
            goto label_26f8f4;
        }
    }
    ctx->pc = 0x26F8ACu;
label_26f8ac:
    // 0x26f8ac: 0xc08c6a0  jal         func_231A80
label_26f8b0:
    if (ctx->pc == 0x26F8B0u) {
        ctx->pc = 0x26F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8ACu;
        // 0x26f8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8B4u;
        goto label_26f8b4;
    }
    ctx->pc = 0x26F8ACu;
    SET_GPR_U32(ctx, 31, 0x26F8B4u);
    ctx->pc = 0x26F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8ACu;
    // 0x26f8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26F8ACu, 0x26F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8B4u;
label_26f8b4:
    // 0x26f8b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f8b8:
    // 0x26f8b8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_26f8bc:
    if (ctx->pc == 0x26F8BCu) {
        ctx->pc = 0x26F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8B8u;
        // 0x26f8bc: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8C0u;
        goto label_26f8c0;
    }
    ctx->pc = 0x26F8B8u;
    {
        const bool branch_taken_0x26f8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8B8u;
        // 0x26f8bc: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8b8) {
            ctx->pc = 0x26F8F4u;
            goto label_26f8f4;
        }
    }
    ctx->pc = 0x26F8C0u;
label_26f8c0:
    // 0x26f8c0: 0xc08c6a0  jal         func_231A80
label_26f8c4:
    if (ctx->pc == 0x26F8C4u) {
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8C8u;
        goto label_26f8c8;
    }
    ctx->pc = 0x26F8C0u;
    SET_GPR_U32(ctx, 31, 0x26F8C8u);
    ctx->pc = 0x26F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8C0u;
    // 0x26f8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26F8C0u, 0x26F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8C8u;
label_26f8c8:
    // 0x26f8c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f8cc:
    // 0x26f8cc: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_26f8d0:
    if (ctx->pc == 0x26F8D0u) {
        ctx->pc = 0x26F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8CCu;
        // 0x26f8d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8D4u;
        goto label_26f8d4;
    }
    ctx->pc = 0x26F8CCu;
    {
        const bool branch_taken_0x26f8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26f8cc) {
            ctx->pc = 0x26F8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F8CCu;
            // 0x26f8d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F8DCu;
            goto label_26f8dc;
        }
    }
    ctx->pc = 0x26F8D4u;
label_26f8d4:
    // 0x26f8d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_26f8d8:
    if (ctx->pc == 0x26F8D8u) {
        ctx->pc = 0x26F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8D4u;
        // 0x26f8d8: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8DCu;
        goto label_26f8dc;
    }
    ctx->pc = 0x26F8D4u;
    {
        const bool branch_taken_0x26f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8D4u;
        // 0x26f8d8: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8d4) {
            ctx->pc = 0x26F8F4u;
            goto label_26f8f4;
        }
    }
    ctx->pc = 0x26F8DCu;
label_26f8dc:
    // 0x26f8dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f8e0:
    // 0x26f8e0: 0xc0cd4ee  jal         func_3353B8
label_26f8e4:
    if (ctx->pc == 0x26F8E4u) {
        ctx->pc = 0x26F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E0u;
        // 0x26f8e4: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8E8u;
        goto label_26f8e8;
    }
    ctx->pc = 0x26F8E0u;
    SET_GPR_U32(ctx, 31, 0x26F8E8u);
    ctx->pc = 0x26F8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8E0u;
    // 0x26f8e4: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x26F8E0u, 0x26F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8E8u;
label_26f8e8:
    // 0x26f8e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26f8ec:
    // 0x26f8ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x26f8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26f8f0:
    // 0x26f8f0: 0x244200a3  addiu       $v0, $v0, 0xA3
    ctx->pc = 0x26f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
label_26f8f4:
    // 0x26f8f4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x26f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_26f8f8:
    // 0x26f8f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f8fc:
    // 0x26f8fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26f8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f900:
    // 0x26f900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f904:
    // 0x26f904: 0xc087570  jal         func_21D5C0
label_26f908:
    if (ctx->pc == 0x26F908u) {
        ctx->pc = 0x26F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F904u;
        // 0x26f908: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F90Cu;
        goto label_26f90c;
    }
    ctx->pc = 0x26F904u;
    SET_GPR_U32(ctx, 31, 0x26F90Cu);
    ctx->pc = 0x26F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F904u;
    // 0x26f908: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x26F904u, 0x26F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F90Cu;
label_26f90c:
    // 0x26f90c: 0x2614e160  addiu       $s4, $s0, -0x1EA0
    ctx->pc = 0x26f90cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959456));
label_26f910:
    // 0x26f910: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26f914:
    // 0x26f914: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26f918:
    // 0x26f918: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26f918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f91c:
    // 0x26f91c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26f91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f920:
    // 0x26f920: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_26f924:
    // 0x26f924: 0xc08ac68  jal         func_22B1A0
label_26f928:
    if (ctx->pc == 0x26F928u) {
        ctx->pc = 0x26F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F924u;
        // 0x26f928: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F92Cu;
        goto label_26f92c;
    }
    ctx->pc = 0x26F924u;
    SET_GPR_U32(ctx, 31, 0x26F92Cu);
    ctx->pc = 0x26F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F924u;
    // 0x26f928: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B1A0u, 0x26F924u, 0x26F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F92Cu;
label_26f92c:
    // 0x26f92c: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x26f92cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26f930:
    // 0x26f930: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26f930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f934:
    // 0x26f934: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26f934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26f938:
    // 0x26f938: 0xc09dd16  jal         func_277458
label_26f93c:
    if (ctx->pc == 0x26F93Cu) {
        ctx->pc = 0x26F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F938u;
        // 0x26f93c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F940u;
        goto label_26f940;
    }
    ctx->pc = 0x26F938u;
    SET_GPR_U32(ctx, 31, 0x26F940u);
    ctx->pc = 0x26F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F938u;
    // 0x26f93c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277458u, 0x26F938u, 0x26F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F940u;
label_26f940:
    // 0x26f940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f944:
    // 0x26f944: 0xc041532  jal         func_1054C8
label_26f948:
    if (ctx->pc == 0x26F948u) {
        ctx->pc = 0x26F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F944u;
        // 0x26f948: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F94Cu;
        goto label_26f94c;
    }
    ctx->pc = 0x26F944u;
    SET_GPR_U32(ctx, 31, 0x26F94Cu);
    ctx->pc = 0x26F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F944u;
    // 0x26f948: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F944u, 0x26F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F94Cu;
label_26f94c:
    // 0x26f94c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f950:
    // 0x26f950: 0xc041532  jal         func_1054C8
label_26f954:
    if (ctx->pc == 0x26F954u) {
        ctx->pc = 0x26F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F950u;
        // 0x26f954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F958u;
        goto label_26f958;
    }
    ctx->pc = 0x26F950u;
    SET_GPR_U32(ctx, 31, 0x26F958u);
    ctx->pc = 0x26F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F950u;
    // 0x26f954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F950u, 0x26F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F958u;
label_26f958:
    // 0x26f958: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26f958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_26f95c:
    // 0x26f95c: 0xc041532  jal         func_1054C8
label_26f960:
    if (ctx->pc == 0x26F960u) {
        ctx->pc = 0x26F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F95Cu;
        // 0x26f960: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F964u;
        goto label_26f964;
    }
    ctx->pc = 0x26F95Cu;
    SET_GPR_U32(ctx, 31, 0x26F964u);
    ctx->pc = 0x26F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F95Cu;
    // 0x26f960: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F95Cu, 0x26F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F964u;
label_26f964:
    // 0x26f964: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26f964u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f968:
    // 0x26f968: 0xc041532  jal         func_1054C8
label_26f96c:
    if (ctx->pc == 0x26F96Cu) {
        ctx->pc = 0x26F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F968u;
        // 0x26f96c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F970u;
        goto label_26f970;
    }
    ctx->pc = 0x26F968u;
    SET_GPR_U32(ctx, 31, 0x26F970u);
    ctx->pc = 0x26F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F968u;
    // 0x26f96c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F968u, 0x26F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F970u;
label_26f970:
    // 0x26f970: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_26f974:
    if (ctx->pc == 0x26F974u) {
        ctx->pc = 0x26F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F970u;
        // 0x26f974: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F978u;
        goto label_26f978;
    }
    ctx->pc = 0x26F970u;
    {
        const bool branch_taken_0x26f970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F970u;
        // 0x26f974: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f970) {
            ctx->pc = 0x26F998u;
            goto label_26f998;
        }
    }
    ctx->pc = 0x26F978u;
label_26f978:
    // 0x26f978: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26f97c:
    // 0x26f97c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26f980:
    // 0x26f980: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f984:
    // 0x26f984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f988:
    // 0x26f988: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26f988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26f98c:
    // 0x26f98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f990:
    // 0x26f990: 0xc04159e  jal         func_105678
label_26f994:
    if (ctx->pc == 0x26F994u) {
        ctx->pc = 0x26F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F990u;
        // 0x26f994: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F998u;
        goto label_26f998;
    }
    ctx->pc = 0x26F990u;
    SET_GPR_U32(ctx, 31, 0x26F998u);
    ctx->pc = 0x26F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F990u;
    // 0x26f994: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26F990u, 0x26F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F998u;
label_26f998:
    // 0x26f998: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26f99c:
    // 0x26f99c: 0x241e000b  addiu       $fp, $zero, 0xB
    ctx->pc = 0x26f99cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26f9a0:
    // 0x26f9a0: 0xac5e0018  sw          $fp, 0x18($v0)
    ctx->pc = 0x26f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
label_26f9a4:
    // 0x26f9a4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26f9a8:
    // 0x26f9a8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x26f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_26f9ac:
    // 0x26f9ac: 0x12e00019  beqz        $s7, . + 4 + (0x19 << 2)
label_26f9b0:
    if (ctx->pc == 0x26F9B0u) {
        ctx->pc = 0x26F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9ACu;
        // 0x26f9b0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9B4u;
        goto label_26f9b4;
    }
    ctx->pc = 0x26F9ACu;
    {
        const bool branch_taken_0x26f9ac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9ACu;
        // 0x26f9b0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9ac) {
            ctx->pc = 0x26FA14u;
            goto label_26fa14;
        }
    }
    ctx->pc = 0x26F9B4u;
label_26f9b4:
    // 0x26f9b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f9b8:
    // 0x26f9b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f9bc:
    // 0x26f9bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f9c0:
    // 0x26f9c0: 0x40f809  jalr        $v0
label_26f9c4:
    if (ctx->pc == 0x26F9C4u) {
        ctx->pc = 0x26F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C0u;
        // 0x26f9c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9C8u;
        goto label_26f9c8;
    }
    ctx->pc = 0x26F9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F9C8u);
        ctx->pc = 0x26F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C0u;
        // 0x26f9c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F9C0u, 0x26F9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F9C8u;
label_26f9c8:
    // 0x26f9c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f9cc:
    // 0x26f9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f9d0:
    // 0x26f9d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f9d4:
    // 0x26f9d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f9d8:
    // 0x26f9d8: 0x40f809  jalr        $v0
label_26f9dc:
    if (ctx->pc == 0x26F9DCu) {
        ctx->pc = 0x26F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D8u;
        // 0x26f9dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F9E0u;
        goto label_26f9e0;
    }
    ctx->pc = 0x26F9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F9E0u);
        ctx->pc = 0x26F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D8u;
        // 0x26f9dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F9D8u, 0x26F9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F9E0u;
label_26f9e0:
    // 0x26f9e0: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26f9e4:
    // 0x26f9e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26f9e8:
    // 0x26f9e8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26f9e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26f9ec:
    // 0x26f9ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26f9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f9f0:
    // 0x26f9f0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x26f9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_26f9f4:
    // 0x26f9f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26f9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f9f8:
    // 0x26f9f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26f9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f9fc:
    // 0x26f9fc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26f9fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fa00:
    // 0x26fa00: 0x256bf760  addiu       $t3, $t3, -0x8A0
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965088));
label_26fa04:
    // 0x26fa04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26fa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26fa08:
    // 0x26fa08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fa0c:
    // 0x26fa0c: 0xc04229e  jal         func_108A78
label_26fa10:
    if (ctx->pc == 0x26FA10u) {
        ctx->pc = 0x26FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA0Cu;
        // 0x26fa10: 0x3c090080  lui         $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA14u;
        goto label_26fa14;
    }
    ctx->pc = 0x26FA0Cu;
    SET_GPR_U32(ctx, 31, 0x26FA14u);
    ctx->pc = 0x26FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA0Cu;
    // 0x26fa10: 0x3c090080  lui         $t1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FA0Cu, 0x26FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA14u;
label_26fa14:
    // 0x26fa14: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x26fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26fa18:
    // 0x26fa18: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_26fa1c:
    // 0x26fa1c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x26fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_26fa20:
    // 0x26fa20: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x26fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fa24:
    // 0x26fa24: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_26fa28:
    if (ctx->pc == 0x26FA28u) {
        ctx->pc = 0x26FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA24u;
        // 0x26fa28: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA2Cu;
        goto label_26fa2c;
    }
    ctx->pc = 0x26FA24u;
    {
        const bool branch_taken_0x26fa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA24u;
        // 0x26fa28: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa24) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26FA2Cu;
label_26fa2c:
    // 0x26fa2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fa30:
    // 0x26fa30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fa30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fa34:
    // 0x26fa34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fa38:
    // 0x26fa38: 0x40f809  jalr        $v0
label_26fa3c:
    if (ctx->pc == 0x26FA3Cu) {
        ctx->pc = 0x26FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA38u;
        // 0x26fa3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA40u;
        goto label_26fa40;
    }
    ctx->pc = 0x26FA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FA40u);
        ctx->pc = 0x26FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA38u;
        // 0x26fa3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FA38u, 0x26FA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FA40u;
label_26fa40:
    // 0x26fa40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fa44:
    // 0x26fa44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fa44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fa48:
    // 0x26fa48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fa48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fa4c:
    // 0x26fa4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fa50:
    // 0x26fa50: 0x40f809  jalr        $v0
label_26fa54:
    if (ctx->pc == 0x26FA54u) {
        ctx->pc = 0x26FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA50u;
        // 0x26fa54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA58u;
        goto label_26fa58;
    }
    ctx->pc = 0x26FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FA58u);
        ctx->pc = 0x26FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA50u;
        // 0x26fa54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FA50u, 0x26FA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26fa5c:
    // 0x26fa5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fa5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fa60:
    // 0x26fa60: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x26fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fa64:
    // 0x26fa64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26fa64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fa68:
    // 0x26fa68: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26fa6c:
    // 0x26fa6c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x26fa6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26fa70:
    // 0x26fa70: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26fa70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fa74:
    // 0x26fa74: 0x256bf758  addiu       $t3, $t3, -0x8A8
    ctx->pc = 0x26fa74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965080));
label_26fa78:
    // 0x26fa78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fa7c:
    // 0x26fa7c: 0xc04229e  jal         func_108A78
label_26fa80:
    if (ctx->pc == 0x26FA80u) {
        ctx->pc = 0x26FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA7Cu;
        // 0x26fa80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA84u;
        goto label_26fa84;
    }
    ctx->pc = 0x26FA7Cu;
    SET_GPR_U32(ctx, 31, 0x26FA84u);
    ctx->pc = 0x26FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA7Cu;
    // 0x26fa80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FA7Cu, 0x26FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA84u;
label_26fa84:
    // 0x26fa84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26fa88:
    // 0x26fa88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26fa8c:
    if (ctx->pc == 0x26FA8Cu) {
        ctx->pc = 0x26FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA88u;
        // 0x26fa8c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA90u;
        goto label_26fa90;
    }
    ctx->pc = 0x26FA88u;
    {
        const bool branch_taken_0x26fa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA88u;
        // 0x26fa8c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa88) {
            ctx->pc = 0x26FAB0u;
            goto label_26fab0;
        }
    }
    ctx->pc = 0x26FA90u;
label_26fa90:
    // 0x26fa90: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26fa94:
    // 0x26fa94: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26fa98:
    // 0x26fa98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fa98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fa9c:
    // 0x26fa9c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26fa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26faa0:
    // 0x26faa0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26faa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26faa4:
    // 0x26faa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26faa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26faa8:
    // 0x26faa8: 0xc041b20  jal         func_106C80
label_26faac:
    if (ctx->pc == 0x26FAACu) {
        ctx->pc = 0x26FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAA8u;
        // 0x26faac: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAB0u;
        goto label_26fab0;
    }
    ctx->pc = 0x26FAA8u;
    SET_GPR_U32(ctx, 31, 0x26FAB0u);
    ctx->pc = 0x26FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAA8u;
    // 0x26faac: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26FAA8u, 0x26FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAB0u;
label_26fab0:
    // 0x26fab0: 0xc05d484  jal         func_175210
label_26fab4:
    if (ctx->pc == 0x26FAB4u) {
        ctx->pc = 0x26FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAB0u;
        // 0x26fab4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAB8u;
        goto label_26fab8;
    }
    ctx->pc = 0x26FAB0u;
    SET_GPR_U32(ctx, 31, 0x26FAB8u);
    ctx->pc = 0x26FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAB0u;
    // 0x26fab4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26FAB0u, 0x26FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAB8u;
label_26fab8:
    // 0x26fab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26fabc:
    // 0x26fabc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26fabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26fac0:
    // 0x26fac0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26fac4:
    // 0x26fac4: 0xa0f809  jalr        $a1
label_26fac8:
    if (ctx->pc == 0x26FAC8u) {
        ctx->pc = 0x26FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAC4u;
        // 0x26fac8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FACCu;
        goto label_26facc;
    }
    ctx->pc = 0x26FAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26FACCu);
        ctx->pc = 0x26FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAC4u;
        // 0x26fac8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FAC4u, 0x26FACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FACCu;
label_26facc:
    // 0x26facc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26fad0:
    // 0x26fad0: 0xc087016  jal         func_21C058
label_26fad4:
    if (ctx->pc == 0x26FAD4u) {
        ctx->pc = 0x26FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD0u;
        // 0x26fad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAD8u;
        goto label_26fad8;
    }
    ctx->pc = 0x26FAD0u;
    SET_GPR_U32(ctx, 31, 0x26FAD8u);
    ctx->pc = 0x26FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAD0u;
    // 0x26fad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26FAD0u, 0x26FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAD8u;
label_26fad8:
    // 0x26fad8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x26fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fadc:
    // 0x26fadc: 0xc05d53a  jal         func_1754E8
label_26fae0:
    if (ctx->pc == 0x26FAE0u) {
        ctx->pc = 0x26FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FADCu;
        // 0x26fae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAE4u;
        goto label_26fae4;
    }
    ctx->pc = 0x26FADCu;
    SET_GPR_U32(ctx, 31, 0x26FAE4u);
    ctx->pc = 0x26FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FADCu;
    // 0x26fae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26FADCu, 0x26FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAE4u;
label_26fae4:
    // 0x26fae4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26fae8:
    // 0x26fae8: 0xc05d4f6  jal         func_1753D8
label_26faec:
    if (ctx->pc == 0x26FAECu) {
        ctx->pc = 0x26FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAE8u;
        // 0x26faec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAF0u;
        goto label_26faf0;
    }
    ctx->pc = 0x26FAE8u;
    SET_GPR_U32(ctx, 31, 0x26FAF0u);
    ctx->pc = 0x26FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAE8u;
    // 0x26faec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26FAE8u, 0x26FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAF0u;
label_26faf0:
    // 0x26faf0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x26faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_26faf4:
    // 0x26faf4: 0xc089990  jal         func_226640
label_26faf8:
    if (ctx->pc == 0x26FAF8u) {
        ctx->pc = 0x26FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAF4u;
        // 0x26faf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAFCu;
        goto label_26fafc;
    }
    ctx->pc = 0x26FAF4u;
    SET_GPR_U32(ctx, 31, 0x26FAFCu);
    ctx->pc = 0x26FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAF4u;
    // 0x26faf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26FAF4u, 0x26FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAFCu;
label_26fafc:
    // 0x26fafc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26fb00:
    // 0x26fb00: 0xc041532  jal         func_1054C8
label_26fb04:
    if (ctx->pc == 0x26FB04u) {
        ctx->pc = 0x26FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB00u;
        // 0x26fb04: 0x8e7500d8  lw          $s5, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB08u;
        goto label_26fb08;
    }
    ctx->pc = 0x26FB00u;
    SET_GPR_U32(ctx, 31, 0x26FB08u);
    ctx->pc = 0x26FB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB00u;
    // 0x26fb04: 0x8e7500d8  lw          $s5, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FB00u, 0x26FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB08u;
label_26fb08:
    // 0x26fb08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26fb0c:
    // 0x26fb0c: 0xc041532  jal         func_1054C8
label_26fb10:
    if (ctx->pc == 0x26FB10u) {
        ctx->pc = 0x26FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB0Cu;
        // 0x26fb10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB14u;
        goto label_26fb14;
    }
    ctx->pc = 0x26FB0Cu;
    SET_GPR_U32(ctx, 31, 0x26FB14u);
    ctx->pc = 0x26FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB0Cu;
    // 0x26fb10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FB0Cu, 0x26FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB14u;
label_26fb14:
    // 0x26fb14: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_26fb18:
    // 0x26fb18: 0xc041532  jal         func_1054C8
label_26fb1c:
    if (ctx->pc == 0x26FB1Cu) {
        ctx->pc = 0x26FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB18u;
        // 0x26fb1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB20u;
        goto label_26fb20;
    }
    ctx->pc = 0x26FB18u;
    SET_GPR_U32(ctx, 31, 0x26FB20u);
    ctx->pc = 0x26FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB18u;
    // 0x26fb1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FB18u, 0x26FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB20u;
label_26fb20:
    // 0x26fb20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26fb20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fb24:
    // 0x26fb24: 0xc041532  jal         func_1054C8
label_26fb28:
    if (ctx->pc == 0x26FB28u) {
        ctx->pc = 0x26FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB24u;
        // 0x26fb28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB2Cu;
        goto label_26fb2c;
    }
    ctx->pc = 0x26FB24u;
    SET_GPR_U32(ctx, 31, 0x26FB2Cu);
    ctx->pc = 0x26FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB24u;
    // 0x26fb28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FB24u, 0x26FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB2Cu;
label_26fb2c:
    // 0x26fb2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26fb30:
    if (ctx->pc == 0x26FB30u) {
        ctx->pc = 0x26FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB2Cu;
        // 0x26fb30: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB34u;
        goto label_26fb34;
    }
    ctx->pc = 0x26FB2Cu;
    {
        const bool branch_taken_0x26fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB2Cu;
        // 0x26fb30: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb2c) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FB34u;
label_26fb34:
    // 0x26fb34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26fb38:
    // 0x26fb38: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26fb3c:
    // 0x26fb3c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26fb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26fb40:
    // 0x26fb40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb44:
    // 0x26fb44: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26fb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26fb48:
    // 0x26fb48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26fb48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26fb4c:
    // 0x26fb4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26fb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fb50:
    // 0x26fb50: 0xc041b20  jal         func_106C80
label_26fb54:
    if (ctx->pc == 0x26FB54u) {
        ctx->pc = 0x26FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB50u;
        // 0x26fb54: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB58u;
        goto label_26fb58;
    }
    ctx->pc = 0x26FB50u;
    SET_GPR_U32(ctx, 31, 0x26FB58u);
    ctx->pc = 0x26FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB50u;
    // 0x26fb54: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26FB50u, 0x26FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB58u;
label_26fb58:
    // 0x26fb58: 0xc05d484  jal         func_175210
label_26fb5c:
    if (ctx->pc == 0x26FB5Cu) {
        ctx->pc = 0x26FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB58u;
        // 0x26fb5c: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB60u;
        goto label_26fb60;
    }
    ctx->pc = 0x26FB58u;
    SET_GPR_U32(ctx, 31, 0x26FB60u);
    ctx->pc = 0x26FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB58u;
    // 0x26fb5c: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26FB58u, 0x26FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB60u;
label_26fb60:
    // 0x26fb60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26fb64:
    // 0x26fb64: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26fb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26fb68:
    // 0x26fb68: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26fb6c:
    // 0x26fb6c: 0xa0f809  jalr        $a1
label_26fb70:
    if (ctx->pc == 0x26FB70u) {
        ctx->pc = 0x26FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB6Cu;
        // 0x26fb70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB74u;
        goto label_26fb74;
    }
    ctx->pc = 0x26FB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26FB74u);
        ctx->pc = 0x26FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB6Cu;
        // 0x26fb70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB6Cu, 0x26FB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FB74u;
label_26fb74:
    // 0x26fb74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fb78:
    // 0x26fb78: 0xc087016  jal         func_21C058
label_26fb7c:
    if (ctx->pc == 0x26FB7Cu) {
        ctx->pc = 0x26FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB78u;
        // 0x26fb7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB80u;
        goto label_26fb80;
    }
    ctx->pc = 0x26FB78u;
    SET_GPR_U32(ctx, 31, 0x26FB80u);
    ctx->pc = 0x26FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB78u;
    // 0x26fb7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26FB78u, 0x26FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB80u;
label_26fb80:
    // 0x26fb80: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_26fb84:
    if (ctx->pc == 0x26FB84u) {
        ctx->pc = 0x26FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB80u;
        // 0x26fb84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB88u;
        goto label_26fb88;
    }
    ctx->pc = 0x26FB80u;
    {
        const bool branch_taken_0x26fb80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB80u;
        // 0x26fb84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb80) {
            ctx->pc = 0x26FBA8u;
            goto label_26fba8;
        }
    }
    ctx->pc = 0x26FB88u;
label_26fb88:
    // 0x26fb88: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26fb8c:
    // 0x26fb8c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26fb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26fb90:
    // 0x26fb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fb94:
    // 0x26fb94: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26fb98:
    // 0x26fb98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26fb98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb9c:
    // 0x26fb9c: 0xc04159e  jal         func_105678
label_26fba0:
    if (ctx->pc == 0x26FBA0u) {
        ctx->pc = 0x26FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB9Cu;
        // 0x26fba0: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBA4u;
        goto label_26fba4;
    }
    ctx->pc = 0x26FB9Cu;
    SET_GPR_U32(ctx, 31, 0x26FBA4u);
    ctx->pc = 0x26FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB9Cu;
    // 0x26fba0: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26FB9Cu, 0x26FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBA4u;
label_26fba4:
    // 0x26fba4: 0x0  nop
    ctx->pc = 0x26fba4u;
    // NOP
label_26fba8:
    // 0x26fba8: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26fbac:
    // 0x26fbac: 0xac5e0018  sw          $fp, 0x18($v0)
    ctx->pc = 0x26fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
label_26fbb0:
    // 0x26fbb0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x26fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26fbb4:
    // 0x26fbb4: 0x245e0004  addiu       $fp, $v0, 0x4
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_26fbb8:
    // 0x26fbb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26fbbc:
    // 0x26fbbc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x26fbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26fbc0:
    // 0x26fbc0: 0xc040698  jal         func_101A60
label_26fbc4:
    if (ctx->pc == 0x26FBC4u) {
        ctx->pc = 0x26FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBC0u;
        // 0x26fbc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBC8u;
        goto label_26fbc8;
    }
    ctx->pc = 0x26FBC0u;
    SET_GPR_U32(ctx, 31, 0x26FBC8u);
    ctx->pc = 0x26FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBC0u;
    // 0x26fbc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x26FBC0u, 0x26FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBC8u;
label_26fbc8:
    // 0x26fbc8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x26fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26fbcc:
    // 0x26fbcc: 0xc0950ba  jal         func_2542E8
label_26fbd0:
    if (ctx->pc == 0x26FBD0u) {
        ctx->pc = 0x26FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBCCu;
        // 0x26fbd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBD4u;
        goto label_26fbd4;
    }
    ctx->pc = 0x26FBCCu;
    SET_GPR_U32(ctx, 31, 0x26FBD4u);
    ctx->pc = 0x26FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBCCu;
    // 0x26fbd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26FBCCu, 0x26FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBD4u;
label_26fbd4:
    // 0x26fbd4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x26fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_26fbd8:
    // 0x26fbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26fbdc:
    // 0x26fbdc: 0xc0950ba  jal         func_2542E8
label_26fbe0:
    if (ctx->pc == 0x26FBE0u) {
        ctx->pc = 0x26FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBDCu;
        // 0x26fbe0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBE4u;
        goto label_26fbe4;
    }
    ctx->pc = 0x26FBDCu;
    SET_GPR_U32(ctx, 31, 0x26FBE4u);
    ctx->pc = 0x26FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBDCu;
    // 0x26fbe0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26FBDCu, 0x26FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBE4u;
label_26fbe4:
    // 0x26fbe4: 0xc10b1c6  jal         func_42C718
label_26fbe8:
    if (ctx->pc == 0x26FBE8u) {
        ctx->pc = 0x26FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBE4u;
        // 0x26fbe8: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBECu;
        goto label_26fbec;
    }
    ctx->pc = 0x26FBE4u;
    SET_GPR_U32(ctx, 31, 0x26FBECu);
    ctx->pc = 0x26FBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBE4u;
    // 0x26fbe8: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x26FBE4u, 0x26FBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBECu;
label_26fbec:
    // 0x26fbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fbf0:
    // 0x26fbf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fbf4:
    // 0x26fbf4: 0xc09970a  jal         func_265C28
label_26fbf8:
    if (ctx->pc == 0x26FBF8u) {
        ctx->pc = 0x26FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBF4u;
        // 0x26fbf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBFCu;
        goto label_26fbfc;
    }
    ctx->pc = 0x26FBF4u;
    SET_GPR_U32(ctx, 31, 0x26FBFCu);
    ctx->pc = 0x26FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBF4u;
    // 0x26fbf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x26FBF4u, 0x26FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBFCu;
label_26fbfc:
    // 0x26fbfc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_26fc00:
    if (ctx->pc == 0x26FC00u) {
        ctx->pc = 0x26FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBFCu;
        // 0x26fc00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC04u;
        goto label_26fc04;
    }
    ctx->pc = 0x26FBFCu;
    {
        const bool branch_taken_0x26fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBFCu;
        // 0x26fc00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbfc) {
            ctx->pc = 0x26FC58u;
            goto label_26fc58;
        }
    }
    ctx->pc = 0x26FC04u;
label_26fc04:
    // 0x26fc04: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x26fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_26fc08:
    // 0x26fc08: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x26fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_26fc0c:
    // 0x26fc0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26fc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26fc10:
    // 0x26fc10: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x26fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_26fc14:
    // 0x26fc14: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x26fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_26fc18:
    // 0x26fc18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_26fc1c:
    // 0x26fc1c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x26fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_26fc20:
    // 0x26fc20: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_26fc24:
    // 0x26fc24: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26fc28:
    // 0x26fc28: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26fc28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26fc2c:
    // 0x26fc2c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26fc30:
    // 0x26fc30: 0x40f809  jalr        $v0
label_26fc34:
    if (ctx->pc == 0x26FC34u) {
        ctx->pc = 0x26FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC30u;
        // 0x26fc34: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC38u;
        goto label_26fc38;
    }
    ctx->pc = 0x26FC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FC38u);
        ctx->pc = 0x26FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC30u;
        // 0x26fc34: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC30u, 0x26FC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FC38u;
label_26fc38:
    // 0x26fc38: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x26fc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26fc3c:
    // 0x26fc3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fc40:
    // 0x26fc40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26fc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26fc44:
    // 0x26fc44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26fc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fc48:
    // 0x26fc48: 0xc099e80  jal         func_267A00
label_26fc4c:
    if (ctx->pc == 0x26FC4Cu) {
        ctx->pc = 0x26FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC48u;
        // 0x26fc4c: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC50u;
        goto label_26fc50;
    }
    ctx->pc = 0x26FC48u;
    SET_GPR_U32(ctx, 31, 0x26FC50u);
    ctx->pc = 0x26FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC48u;
    // 0x26fc4c: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x26FC48u, 0x26FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC50u;
label_26fc50:
    // 0x26fc50: 0x1000004f  b           . + 4 + (0x4F << 2)
label_26fc54:
    if (ctx->pc == 0x26FC54u) {
        ctx->pc = 0x26FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC50u;
        // 0x26fc54: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC58u;
        goto label_26fc58;
    }
    ctx->pc = 0x26FC50u;
    {
        const bool branch_taken_0x26fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC50u;
        // 0x26fc54: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc50) {
            ctx->pc = 0x26FD90u;
            goto label_26fd90;
        }
    }
    ctx->pc = 0x26FC58u;
label_26fc58:
    // 0x26fc58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_26fc5c:
    // 0x26fc5c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_26fc60:
    if (ctx->pc == 0x26FC60u) {
        ctx->pc = 0x26FC64u;
        goto label_26fc64;
    }
    ctx->pc = 0x26FC5Cu;
    {
        const bool branch_taken_0x26fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc5c) {
            ctx->pc = 0x26FCCCu;
            goto label_26fccc;
        }
    }
    ctx->pc = 0x26FC64u;
label_26fc64:
    // 0x26fc64: 0x52e00048  beql        $s7, $zero, . + 4 + (0x48 << 2)
label_26fc68:
    if (ctx->pc == 0x26FC68u) {
        ctx->pc = 0x26FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC64u;
        // 0x26fc68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC6Cu;
        goto label_26fc6c;
    }
    ctx->pc = 0x26FC64u;
    {
        const bool branch_taken_0x26fc64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc64) {
            ctx->pc = 0x26FC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC64u;
            // 0x26fc68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD88u;
            goto label_26fd88;
        }
    }
    ctx->pc = 0x26FC6Cu;
label_26fc6c:
    // 0x26fc6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fc70:
    // 0x26fc70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fc74:
    // 0x26fc74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fc78:
    // 0x26fc78: 0x40f809  jalr        $v0
label_26fc7c:
    if (ctx->pc == 0x26FC7Cu) {
        ctx->pc = 0x26FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC78u;
        // 0x26fc7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC80u;
        goto label_26fc80;
    }
    ctx->pc = 0x26FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FC80u);
        ctx->pc = 0x26FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC78u;
        // 0x26fc7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC78u, 0x26FC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FC80u;
label_26fc80:
    // 0x26fc80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26fc84:
    // 0x26fc84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fc88:
    // 0x26fc88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fc8c:
    // 0x26fc8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fc90:
    // 0x26fc90: 0x40f809  jalr        $v0
label_26fc94:
    if (ctx->pc == 0x26FC94u) {
        ctx->pc = 0x26FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC90u;
        // 0x26fc94: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC98u;
        goto label_26fc98;
    }
    ctx->pc = 0x26FC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FC98u);
        ctx->pc = 0x26FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC90u;
        // 0x26fc94: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC90u, 0x26FC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FC98u;
label_26fc98:
    // 0x26fc98: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26fc98u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26fc9c:
    // 0x26fc9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fca0:
    // 0x26fca0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26fca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fca4:
    // 0x26fca4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x26fca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26fca8:
    // 0x26fca8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26fca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fcac:
    // 0x26fcac: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26fcacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fcb0:
    // 0x26fcb0: 0x256bf830  addiu       $t3, $t3, -0x7D0
    ctx->pc = 0x26fcb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965296));
label_26fcb4:
    // 0x26fcb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26fcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26fcb8:
    // 0x26fcb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fcbc:
    // 0x26fcbc: 0xc04229e  jal         func_108A78
label_26fcc0:
    if (ctx->pc == 0x26FCC0u) {
        ctx->pc = 0x26FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCBCu;
        // 0x26fcc0: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCC4u;
        goto label_26fcc4;
    }
    ctx->pc = 0x26FCBCu;
    SET_GPR_U32(ctx, 31, 0x26FCC4u);
    ctx->pc = 0x26FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FCBCu;
    // 0x26fcc0: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FCBCu, 0x26FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCC4u;
label_26fcc4:
    // 0x26fcc4: 0x10000030  b           . + 4 + (0x30 << 2)
label_26fcc8:
    if (ctx->pc == 0x26FCC8u) {
        ctx->pc = 0x26FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCC4u;
        // 0x26fcc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCCCu;
        goto label_26fccc;
    }
    ctx->pc = 0x26FCC4u;
    {
        const bool branch_taken_0x26fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCC4u;
        // 0x26fcc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcc4) {
            ctx->pc = 0x26FD88u;
            goto label_26fd88;
        }
    }
    ctx->pc = 0x26FCCCu;
label_26fccc:
    // 0x26fccc: 0xc041532  jal         func_1054C8
label_26fcd0:
    if (ctx->pc == 0x26FCD0u) {
        ctx->pc = 0x26FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCCCu;
        // 0x26fcd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCD4u;
        goto label_26fcd4;
    }
    ctx->pc = 0x26FCCCu;
    SET_GPR_U32(ctx, 31, 0x26FCD4u);
    ctx->pc = 0x26FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FCCCu;
    // 0x26fcd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FCCCu, 0x26FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCD4u;
label_26fcd4:
    // 0x26fcd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26fcd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fcd8:
    // 0x26fcd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fcdc:
    // 0x26fcdc: 0xc089990  jal         func_226640
label_26fce0:
    if (ctx->pc == 0x26FCE0u) {
        ctx->pc = 0x26FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCDCu;
        // 0x26fce0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCE4u;
        goto label_26fce4;
    }
    ctx->pc = 0x26FCDCu;
    SET_GPR_U32(ctx, 31, 0x26FCE4u);
    ctx->pc = 0x26FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FCDCu;
    // 0x26fce0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26FCDCu, 0x26FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCE4u;
label_26fce4:
    // 0x26fce4: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_26fce8:
    if (ctx->pc == 0x26FCE8u) {
        ctx->pc = 0x26FCECu;
        goto label_26fcec;
    }
    ctx->pc = 0x26FCE4u;
    {
        const bool branch_taken_0x26fce4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fce4) {
            ctx->pc = 0x26FD24u;
            goto label_26fd24;
        }
    }
    ctx->pc = 0x26FCECu;
label_26fcec:
    // 0x26fcec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26fcf0:
    // 0x26fcf0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fcf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fcf4:
    // 0x26fcf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fcf8:
    // 0x26fcf8: 0x40f809  jalr        $v0
label_26fcfc:
    if (ctx->pc == 0x26FCFCu) {
        ctx->pc = 0x26FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCF8u;
        // 0x26fcfc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD00u;
        goto label_26fd00;
    }
    ctx->pc = 0x26FCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FD00u);
        ctx->pc = 0x26FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCF8u;
        // 0x26fcfc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FCF8u, 0x26FD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FD00u;
label_26fd00:
    // 0x26fd00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fd04:
    // 0x26fd04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26fd04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fd08:
    // 0x26fd08: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26fd08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fd0c:
    // 0x26fd0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26fd10:
    // 0x26fd10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fd14:
    // 0x26fd14: 0x240600c6  addiu       $a2, $zero, 0xC6
    ctx->pc = 0x26fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_26fd18:
    // 0x26fd18: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x26fd18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
label_26fd1c:
    // 0x26fd1c: 0xc041664  jal         func_105990
label_26fd20:
    if (ctx->pc == 0x26FD20u) {
        ctx->pc = 0x26FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD1Cu;
        // 0x26fd20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD24u;
        goto label_26fd24;
    }
    ctx->pc = 0x26FD1Cu;
    SET_GPR_U32(ctx, 31, 0x26FD24u);
    ctx->pc = 0x26FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD1Cu;
    // 0x26fd20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26FD1Cu, 0x26FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD24u;
label_26fd24:
    // 0x26fd24: 0x52e00018  beql        $s7, $zero, . + 4 + (0x18 << 2)
label_26fd28:
    if (ctx->pc == 0x26FD28u) {
        ctx->pc = 0x26FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD24u;
        // 0x26fd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD2Cu;
        goto label_26fd2c;
    }
    ctx->pc = 0x26FD24u;
    {
        const bool branch_taken_0x26fd24 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd24) {
            ctx->pc = 0x26FD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD24u;
            // 0x26fd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD88u;
            goto label_26fd88;
        }
    }
    ctx->pc = 0x26FD2Cu;
label_26fd2c:
    // 0x26fd2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fd30:
    // 0x26fd30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fd30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fd34:
    // 0x26fd34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fd38:
    // 0x26fd38: 0x40f809  jalr        $v0
label_26fd3c:
    if (ctx->pc == 0x26FD3Cu) {
        ctx->pc = 0x26FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD38u;
        // 0x26fd3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD40u;
        goto label_26fd40;
    }
    ctx->pc = 0x26FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FD40u);
        ctx->pc = 0x26FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD38u;
        // 0x26fd3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD38u, 0x26FD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FD40u;
label_26fd40:
    // 0x26fd40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26fd44:
    // 0x26fd44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fd48:
    // 0x26fd48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fd48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fd4c:
    // 0x26fd4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fd50:
    // 0x26fd50: 0x40f809  jalr        $v0
label_26fd54:
    if (ctx->pc == 0x26FD54u) {
        ctx->pc = 0x26FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD50u;
        // 0x26fd54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD58u;
        goto label_26fd58;
    }
    ctx->pc = 0x26FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FD58u);
        ctx->pc = 0x26FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD50u;
        // 0x26fd54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD50u, 0x26FD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FD58u;
label_26fd58:
    // 0x26fd58: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26fd58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26fd5c:
    // 0x26fd5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fd5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fd60:
    // 0x26fd60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26fd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fd64:
    // 0x26fd64: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x26fd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26fd68:
    // 0x26fd68: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x26fd68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26fd6c:
    // 0x26fd6c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26fd6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fd70:
    // 0x26fd70: 0x256bf830  addiu       $t3, $t3, -0x7D0
    ctx->pc = 0x26fd70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965296));
label_26fd74:
    // 0x26fd74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26fd78:
    // 0x26fd78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fd7c:
    // 0x26fd7c: 0xc04229e  jal         func_108A78
label_26fd80:
    if (ctx->pc == 0x26FD80u) {
        ctx->pc = 0x26FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD7Cu;
        // 0x26fd80: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD84u;
        goto label_26fd84;
    }
    ctx->pc = 0x26FD7Cu;
    SET_GPR_U32(ctx, 31, 0x26FD84u);
    ctx->pc = 0x26FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD7Cu;
    // 0x26fd80: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FD7Cu, 0x26FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD84u;
label_26fd84:
    // 0x26fd84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fd88:
    // 0x26fd88: 0xc089990  jal         func_226640
label_26fd8c:
    if (ctx->pc == 0x26FD8Cu) {
        ctx->pc = 0x26FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD88u;
        // 0x26fd8c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD90u;
        goto label_26fd90;
    }
    ctx->pc = 0x26FD88u;
    SET_GPR_U32(ctx, 31, 0x26FD90u);
    ctx->pc = 0x26FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD88u;
    // 0x26fd8c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26FD88u, 0x26FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD90u;
label_26fd90:
    // 0x26fd90: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x26fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fd94:
    // 0x26fd94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_26fd98:
    if (ctx->pc == 0x26FD98u) {
        ctx->pc = 0x26FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD94u;
        // 0x26fd98: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD9Cu;
        goto label_26fd9c;
    }
    ctx->pc = 0x26FD94u;
    {
        const bool branch_taken_0x26fd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD94u;
        // 0x26fd98: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd94) {
            ctx->pc = 0x26FDF8u;
            goto label_26fdf8;
        }
    }
    ctx->pc = 0x26FD9Cu;
label_26fd9c:
    // 0x26fd9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fda0:
    // 0x26fda0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fda0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fda4:
    // 0x26fda4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26fda8:
    // 0x26fda8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fdac:
    // 0x26fdac: 0x40f809  jalr        $v0
label_26fdb0:
    if (ctx->pc == 0x26FDB0u) {
        ctx->pc = 0x26FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDACu;
        // 0x26fdb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDB4u;
        goto label_26fdb4;
    }
    ctx->pc = 0x26FDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FDB4u);
        ctx->pc = 0x26FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDACu;
        // 0x26fdb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FDACu, 0x26FDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FDB4u;
label_26fdb4:
    // 0x26fdb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26fdb8:
    // 0x26fdb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fdbc:
    // 0x26fdbc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fdbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fdc0:
    // 0x26fdc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fdc4:
    // 0x26fdc4: 0x40f809  jalr        $v0
label_26fdc8:
    if (ctx->pc == 0x26FDC8u) {
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDCCu;
        goto label_26fdcc;
    }
    ctx->pc = 0x26FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FDCCu);
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FDC4u, 0x26FDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FDCCu;
label_26fdcc:
    // 0x26fdcc: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26fdccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26fdd0:
    // 0x26fdd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fdd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fdd4:
    // 0x26fdd4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x26fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fdd8:
    // 0x26fdd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26fdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fddc:
    // 0x26fddc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26fddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fde0:
    // 0x26fde0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x26fde0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26fde4:
    // 0x26fde4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26fde4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fde8:
    // 0x26fde8: 0x256bf780  addiu       $t3, $t3, -0x880
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965120));
label_26fdec:
    // 0x26fdec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fdf0:
    // 0x26fdf0: 0xc04229e  jal         func_108A78
label_26fdf4:
    if (ctx->pc == 0x26FDF4u) {
        ctx->pc = 0x26FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDF0u;
        // 0x26fdf4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDF8u;
        goto label_26fdf8;
    }
    ctx->pc = 0x26FDF0u;
    SET_GPR_U32(ctx, 31, 0x26FDF8u);
    ctx->pc = 0x26FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDF0u;
    // 0x26fdf4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FDF0u, 0x26FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDF8u;
label_26fdf8:
    // 0x26fdf8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x26fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fdfc:
    // 0x26fdfc: 0xc05d53a  jal         func_1754E8
label_26fe00:
    if (ctx->pc == 0x26FE00u) {
        ctx->pc = 0x26FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDFCu;
        // 0x26fe00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE04u;
        goto label_26fe04;
    }
    ctx->pc = 0x26FDFCu;
    SET_GPR_U32(ctx, 31, 0x26FE04u);
    ctx->pc = 0x26FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDFCu;
    // 0x26fe00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26FDFCu, 0x26FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE04u;
label_26fe04:
    // 0x26fe04: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26fe08:
    // 0x26fe08: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26fe0c:
    // 0x26fe0c: 0x2450e160  addiu       $s0, $v0, -0x1EA0
    ctx->pc = 0x26fe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26fe10:
    // 0x26fe10: 0xc05d4f6  jal         func_1753D8
label_26fe14:
    if (ctx->pc == 0x26FE14u) {
        ctx->pc = 0x26FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE10u;
        // 0x26fe14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE18u;
        goto label_26fe18;
    }
    ctx->pc = 0x26FE10u;
    SET_GPR_U32(ctx, 31, 0x26FE18u);
    ctx->pc = 0x26FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE10u;
    // 0x26fe14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26FE10u, 0x26FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE18u;
label_26fe18:
    // 0x26fe18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fe1c:
    // 0x26fe1c: 0xc041532  jal         func_1054C8
label_26fe20:
    if (ctx->pc == 0x26FE20u) {
        ctx->pc = 0x26FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE1Cu;
        // 0x26fe20: 0x8ed500d8  lw          $s5, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE24u;
        goto label_26fe24;
    }
    ctx->pc = 0x26FE1Cu;
    SET_GPR_U32(ctx, 31, 0x26FE24u);
    ctx->pc = 0x26FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE1Cu;
    // 0x26fe20: 0x8ed500d8  lw          $s5, 0xD8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FE1Cu, 0x26FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE24u;
label_26fe24:
    // 0x26fe24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fe28:
    // 0x26fe28: 0xc041532  jal         func_1054C8
label_26fe2c:
    if (ctx->pc == 0x26FE2Cu) {
        ctx->pc = 0x26FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE28u;
        // 0x26fe2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE30u;
        goto label_26fe30;
    }
    ctx->pc = 0x26FE28u;
    SET_GPR_U32(ctx, 31, 0x26FE30u);
    ctx->pc = 0x26FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE28u;
    // 0x26fe2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FE28u, 0x26FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE30u;
label_26fe30:
    // 0x26fe30: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_26fe34:
    // 0x26fe34: 0xc041532  jal         func_1054C8
label_26fe38:
    if (ctx->pc == 0x26FE38u) {
        ctx->pc = 0x26FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE34u;
        // 0x26fe38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE3Cu;
        goto label_26fe3c;
    }
    ctx->pc = 0x26FE34u;
    SET_GPR_U32(ctx, 31, 0x26FE3Cu);
    ctx->pc = 0x26FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE34u;
    // 0x26fe38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FE34u, 0x26FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE3Cu;
label_26fe3c:
    // 0x26fe3c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26fe3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fe40:
    // 0x26fe40: 0xc041532  jal         func_1054C8
label_26fe44:
    if (ctx->pc == 0x26FE44u) {
        ctx->pc = 0x26FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE40u;
        // 0x26fe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE48u;
        goto label_26fe48;
    }
    ctx->pc = 0x26FE40u;
    SET_GPR_U32(ctx, 31, 0x26FE48u);
    ctx->pc = 0x26FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE40u;
    // 0x26fe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26FE40u, 0x26FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE48u;
label_26fe48:
    // 0x26fe48: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_26fe4c:
    if (ctx->pc == 0x26FE4Cu) {
        ctx->pc = 0x26FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE48u;
        // 0x26fe4c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE50u;
        goto label_26fe50;
    }
    ctx->pc = 0x26FE48u;
    {
        const bool branch_taken_0x26fe48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE48u;
        // 0x26fe4c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe48) {
            ctx->pc = 0x26FE70u;
            goto label_26fe70;
        }
    }
    ctx->pc = 0x26FE50u;
label_26fe50:
    // 0x26fe50: 0x8ec300d4  lw          $v1, 0xD4($s6)
    ctx->pc = 0x26fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
label_26fe54:
    // 0x26fe54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26fe58:
    // 0x26fe58: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26fe5c:
    // 0x26fe5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fe60:
    // 0x26fe60: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26fe64:
    // 0x26fe64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26fe64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fe68:
    // 0x26fe68: 0xc04159e  jal         func_105678
label_26fe6c:
    if (ctx->pc == 0x26FE6Cu) {
        ctx->pc = 0x26FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE68u;
        // 0x26fe6c: 0x8ec500d8  lw          $a1, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE70u;
        goto label_26fe70;
    }
    ctx->pc = 0x26FE68u;
    SET_GPR_U32(ctx, 31, 0x26FE70u);
    ctx->pc = 0x26FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE68u;
    // 0x26fe6c: 0x8ec500d8  lw          $a1, 0xD8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26FE68u, 0x26FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE70u;
label_26fe70:
    // 0x26fe70: 0x8ec300d4  lw          $v1, 0xD4($s6)
    ctx->pc = 0x26fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
label_26fe74:
    // 0x26fe74: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26fe78:
    // 0x26fe78: 0x12e00019  beqz        $s7, . + 4 + (0x19 << 2)
label_26fe7c:
    if (ctx->pc == 0x26FE7Cu) {
        ctx->pc = 0x26FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE78u;
        // 0x26fe7c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE80u;
        goto label_26fe80;
    }
    ctx->pc = 0x26FE78u;
    {
        const bool branch_taken_0x26fe78 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE78u;
        // 0x26fe7c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe78) {
            ctx->pc = 0x26FEE0u;
            goto label_26fee0;
        }
    }
    ctx->pc = 0x26FE80u;
label_26fe80:
    // 0x26fe80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fe84:
    // 0x26fe84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fe84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fe88:
    // 0x26fe88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fe8c:
    // 0x26fe8c: 0x40f809  jalr        $v0
label_26fe90:
    if (ctx->pc == 0x26FE90u) {
        ctx->pc = 0x26FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE8Cu;
        // 0x26fe90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE94u;
        goto label_26fe94;
    }
    ctx->pc = 0x26FE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FE94u);
        ctx->pc = 0x26FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE8Cu;
        // 0x26fe90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FE8Cu, 0x26FE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FE94u;
label_26fe94:
    // 0x26fe94: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x26fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_26fe98:
    // 0x26fe98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fe98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fe9c:
    // 0x26fe9c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fe9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fea0:
    // 0x26fea0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fea4:
    // 0x26fea4: 0x40f809  jalr        $v0
label_26fea8:
    if (ctx->pc == 0x26FEA8u) {
        ctx->pc = 0x26FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEA4u;
        // 0x26fea8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FEACu;
        goto label_26feac;
    }
    ctx->pc = 0x26FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FEACu);
        ctx->pc = 0x26FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEA4u;
        // 0x26fea8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FEA4u, 0x26FEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FEACu;
label_26feac:
    // 0x26feac: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26feacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26feb0:
    // 0x26feb0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26feb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26feb4:
    // 0x26feb4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26feb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26feb8:
    // 0x26feb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26feb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26febc:
    // 0x26febc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26febcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26fec0:
    // 0x26fec0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26fec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fec4:
    // 0x26fec4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26fec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26fec8:
    // 0x26fec8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26fec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fecc:
    // 0x26fecc: 0x256bf840  addiu       $t3, $t3, -0x7C0
    ctx->pc = 0x26feccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965312));
label_26fed0:
    // 0x26fed0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26fed4:
    // 0x26fed4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26fed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26fed8:
    // 0x26fed8: 0xc04229e  jal         func_108A78
label_26fedc:
    if (ctx->pc == 0x26FEDCu) {
        ctx->pc = 0x26FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FED8u;
        // 0x26fedc: 0x3c090080  lui         $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FEE0u;
        goto label_26fee0;
    }
    ctx->pc = 0x26FED8u;
    SET_GPR_U32(ctx, 31, 0x26FEE0u);
    ctx->pc = 0x26FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FED8u;
    // 0x26fedc: 0x3c090080  lui         $t1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FED8u, 0x26FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEE0u;
label_26fee0:
    // 0x26fee0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x26fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26fee4:
    // 0x26fee4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_26fee8:
    if (ctx->pc == 0x26FEE8u) {
        ctx->pc = 0x26FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEE4u;
        // 0x26fee8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FEECu;
        goto label_26feec;
    }
    ctx->pc = 0x26FEE4u;
    {
        const bool branch_taken_0x26fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEE4u;
        // 0x26fee8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fee4) {
            ctx->pc = 0x26FF48u;
            goto label_26ff48;
        }
    }
    ctx->pc = 0x26FEECu;
label_26feec:
    // 0x26feec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26feecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26fef0:
    // 0x26fef0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26fef4:
    // 0x26fef4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26fef8:
    // 0x26fef8: 0x40f809  jalr        $v0
label_26fefc:
    if (ctx->pc == 0x26FEFCu) {
        ctx->pc = 0x26FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEF8u;
        // 0x26fefc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF00u;
        goto label_26ff00;
    }
    ctx->pc = 0x26FEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FF00u);
        ctx->pc = 0x26FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEF8u;
        // 0x26fefc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FEF8u, 0x26FF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FF00u;
label_26ff00:
    // 0x26ff00: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x26ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_26ff04:
    // 0x26ff04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ff04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ff08:
    // 0x26ff08: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ff08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ff0c:
    // 0x26ff0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ff10:
    // 0x26ff10: 0x40f809  jalr        $v0
label_26ff14:
    if (ctx->pc == 0x26FF14u) {
        ctx->pc = 0x26FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF10u;
        // 0x26ff14: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF18u;
        goto label_26ff18;
    }
    ctx->pc = 0x26FF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FF18u);
        ctx->pc = 0x26FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF10u;
        // 0x26ff14: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF10u, 0x26FF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FF18u;
label_26ff18:
    // 0x26ff18: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26ff18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26ff1c:
    // 0x26ff1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ff1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ff20:
    // 0x26ff20: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x26ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26ff24:
    // 0x26ff24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26ff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ff28:
    // 0x26ff28: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x26ff28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26ff2c:
    // 0x26ff2c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x26ff2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ff30:
    // 0x26ff30: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26ff30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ff34:
    // 0x26ff34: 0x256bf838  addiu       $t3, $t3, -0x7C8
    ctx->pc = 0x26ff34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965304));
label_26ff38:
    // 0x26ff38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ff3c:
    // 0x26ff3c: 0xc04229e  jal         func_108A78
label_26ff40:
    if (ctx->pc == 0x26FF40u) {
        ctx->pc = 0x26FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF3Cu;
        // 0x26ff40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF44u;
        goto label_26ff44;
    }
    ctx->pc = 0x26FF3Cu;
    SET_GPR_U32(ctx, 31, 0x26FF44u);
    ctx->pc = 0x26FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF3Cu;
    // 0x26ff40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26FF3Cu, 0x26FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF44u;
label_26ff44:
    // 0x26ff44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26ff48:
    // 0x26ff48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26ff4c:
    if (ctx->pc == 0x26FF4Cu) {
        ctx->pc = 0x26FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF48u;
        // 0x26ff4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF50u;
        goto label_26ff50;
    }
    ctx->pc = 0x26FF48u;
    {
        const bool branch_taken_0x26ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF48u;
        // 0x26ff4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff48) {
            ctx->pc = 0x26FF70u;
            goto label_26ff70;
        }
    }
    ctx->pc = 0x26FF50u;
label_26ff50:
    // 0x26ff50: 0x8ec500d8  lw          $a1, 0xD8($s6)
    ctx->pc = 0x26ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
label_26ff54:
    // 0x26ff54: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ff54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ff58:
    // 0x26ff58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ff58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ff5c:
    // 0x26ff5c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26ff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26ff60:
    // 0x26ff60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26ff60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26ff64:
    // 0x26ff64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ff64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ff68:
    // 0x26ff68: 0xc041b20  jal         func_106C80
label_26ff6c:
    if (ctx->pc == 0x26FF6Cu) {
        ctx->pc = 0x26FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF68u;
        // 0x26ff6c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF70u;
        goto label_26ff70;
    }
    ctx->pc = 0x26FF68u;
    SET_GPR_U32(ctx, 31, 0x26FF70u);
    ctx->pc = 0x26FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF68u;
    // 0x26ff6c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26FF68u, 0x26FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF70u;
label_26ff70:
    // 0x26ff70: 0xc05d484  jal         func_175210
label_26ff74:
    if (ctx->pc == 0x26FF74u) {
        ctx->pc = 0x26FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF70u;
        // 0x26ff74: 0x8ec400d8  lw          $a0, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF78u;
        goto label_26ff78;
    }
    ctx->pc = 0x26FF70u;
    SET_GPR_U32(ctx, 31, 0x26FF78u);
    ctx->pc = 0x26FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF70u;
    // 0x26ff74: 0x8ec400d8  lw          $a0, 0xD8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26FF70u, 0x26FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF78u;
label_26ff78:
    // 0x26ff78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ff7c:
    // 0x26ff7c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26ff7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26ff80:
    // 0x26ff80: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26ff84:
    // 0x26ff84: 0xa0f809  jalr        $a1
label_26ff88:
    if (ctx->pc == 0x26FF88u) {
        ctx->pc = 0x26FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF84u;
        // 0x26ff88: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF8Cu;
        goto label_26ff8c;
    }
    ctx->pc = 0x26FF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26FF8Cu);
        ctx->pc = 0x26FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF84u;
        // 0x26ff88: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF84u, 0x26FF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FF8Cu;
label_26ff8c:
    // 0x26ff8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ff90:
    // 0x26ff90: 0xc087016  jal         func_21C058
label_26ff94:
    if (ctx->pc == 0x26FF94u) {
        ctx->pc = 0x26FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF90u;
        // 0x26ff94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF98u;
        goto label_26ff98;
    }
    ctx->pc = 0x26FF90u;
    SET_GPR_U32(ctx, 31, 0x26FF98u);
    ctx->pc = 0x26FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF90u;
    // 0x26ff94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26FF90u, 0x26FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF98u;
label_26ff98:
    // 0x26ff98: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x26ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26ff9c:
    // 0x26ff9c: 0xc05d53a  jal         func_1754E8
label_26ffa0:
    if (ctx->pc == 0x26FFA0u) {
        ctx->pc = 0x26FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF9Cu;
        // 0x26ffa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFA4u;
        goto label_26ffa4;
    }
    ctx->pc = 0x26FF9Cu;
    SET_GPR_U32(ctx, 31, 0x26FFA4u);
    ctx->pc = 0x26FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF9Cu;
    // 0x26ffa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26FF9Cu, 0x26FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFA4u;
label_26ffa4:
    // 0x26ffa4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26ffa8:
    // 0x26ffa8: 0xc05d4f6  jal         func_1753D8
label_26ffac:
    if (ctx->pc == 0x26FFACu) {
        ctx->pc = 0x26FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFA8u;
        // 0x26ffac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFB0u;
        goto label_26ffb0;
    }
    ctx->pc = 0x26FFA8u;
    SET_GPR_U32(ctx, 31, 0x26FFB0u);
    ctx->pc = 0x26FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFA8u;
    // 0x26ffac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26FFA8u, 0x26FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFB0u;
label_26ffb0:
    // 0x26ffb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ffb4:
    // 0x26ffb4: 0xc089990  jal         func_226640
label_26ffb8:
    if (ctx->pc == 0x26FFB8u) {
        ctx->pc = 0x26FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFB4u;
        // 0x26ffb8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFBCu;
        goto label_26ffbc;
    }
    ctx->pc = 0x26FFB4u;
    SET_GPR_U32(ctx, 31, 0x26FFBCu);
    ctx->pc = 0x26FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFB4u;
    // 0x26ffb8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26FFB4u, 0x26FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFBCu;
label_26ffbc:
    // 0x26ffbc: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x26ffbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_26ffc0:
    // 0x26ffc0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x26ffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_26ffc4:
    // 0x26ffc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26ffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26ffc8:
    // 0x26ffc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_26ffcc:
    if (ctx->pc == 0x26FFCCu) {
        ctx->pc = 0x26FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFC8u;
        // 0x26ffcc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFD0u;
        goto label_26ffd0;
    }
    ctx->pc = 0x26FFC8u;
    {
        const bool branch_taken_0x26ffc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFC8u;
        // 0x26ffcc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffc8) {
            ctx->pc = 0x26FFF4u;
            goto label_26fff4;
        }
    }
    ctx->pc = 0x26FFD0u;
label_26ffd0:
    // 0x26ffd0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x26ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26ffd4:
    // 0x26ffd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ffd8:
    // 0x26ffd8: 0xc0993e8  jal         func_264FA0
label_26ffdc:
    if (ctx->pc == 0x26FFDCu) {
        ctx->pc = 0x26FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFD8u;
        // 0x26ffdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFE0u;
        goto label_26ffe0;
    }
    ctx->pc = 0x26FFD8u;
    SET_GPR_U32(ctx, 31, 0x26FFE0u);
    ctx->pc = 0x26FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFD8u;
    // 0x26ffdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x26FFD8u, 0x26FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFE0u;
label_26ffe0:
    // 0x26ffe0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x26ffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26ffe4:
    // 0x26ffe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ffe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ffe8:
    // 0x26ffe8: 0xc0993e8  jal         func_264FA0
label_26ffec:
    if (ctx->pc == 0x26FFECu) {
        ctx->pc = 0x26FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFE8u;
        // 0x26ffec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFF0u;
        goto label_26fff0;
    }
    ctx->pc = 0x26FFE8u;
    SET_GPR_U32(ctx, 31, 0x26FFF0u);
    ctx->pc = 0x26FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFE8u;
    // 0x26ffec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x26FFE8u, 0x26FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFF0u;
label_26fff0:
    // 0x26fff0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x26fff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_26fff4:
    // 0x26fff4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x26fff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_26fff8:
    // 0x26fff8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x26fff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_26fffc:
    // 0x26fffc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x26fffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_270000:
    // 0x270000: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x270000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_270004:
    // 0x270004: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x270004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_270008:
    // 0x270008: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x270008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27000c:
    // 0x27000c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27000cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_270010:
    // 0x270010: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x270010u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_270014:
    // 0x270014: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x270014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_270018:
    // 0x270018: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x270018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27001c:
    // 0x27001c: 0x3e00008  jr          $ra
label_270020:
    if (ctx->pc == 0x270020u) {
        ctx->pc = 0x270020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27001Cu;
        // 0x270020: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270024u;
        goto label_270024;
    }
    ctx->pc = 0x27001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27001Cu;
        // 0x270020: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270024u;
label_270024:
    // 0x270024: 0x0  nop
    ctx->pc = 0x270024u;
    // NOP
    ctx->pc = 0x270028u;
}
