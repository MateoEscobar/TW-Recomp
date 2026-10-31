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

// Function: sub_001DBEE0
// Address: 0x1dbee0 - 0x1dcac0
void sub_001DBEE0_0x1dbee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBEE0_0x1dbee0");
#endif

    switch (ctx->pc) {
        case 0x1dbee0u: goto label_1dbee0;
        case 0x1dbee4u: goto label_1dbee4;
        case 0x1dbee8u: goto label_1dbee8;
        case 0x1dbeecu: goto label_1dbeec;
        case 0x1dbef0u: goto label_1dbef0;
        case 0x1dbef4u: goto label_1dbef4;
        case 0x1dbef8u: goto label_1dbef8;
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf00u: goto label_1dbf00;
        case 0x1dbf04u: goto label_1dbf04;
        case 0x1dbf08u: goto label_1dbf08;
        case 0x1dbf0cu: goto label_1dbf0c;
        case 0x1dbf10u: goto label_1dbf10;
        case 0x1dbf14u: goto label_1dbf14;
        case 0x1dbf18u: goto label_1dbf18;
        case 0x1dbf1cu: goto label_1dbf1c;
        case 0x1dbf20u: goto label_1dbf20;
        case 0x1dbf24u: goto label_1dbf24;
        case 0x1dbf28u: goto label_1dbf28;
        case 0x1dbf2cu: goto label_1dbf2c;
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        case 0x1dc00cu: goto label_1dc00c;
        case 0x1dc010u: goto label_1dc010;
        case 0x1dc014u: goto label_1dc014;
        case 0x1dc018u: goto label_1dc018;
        case 0x1dc01cu: goto label_1dc01c;
        case 0x1dc020u: goto label_1dc020;
        case 0x1dc024u: goto label_1dc024;
        case 0x1dc028u: goto label_1dc028;
        case 0x1dc02cu: goto label_1dc02c;
        case 0x1dc030u: goto label_1dc030;
        case 0x1dc034u: goto label_1dc034;
        case 0x1dc038u: goto label_1dc038;
        case 0x1dc03cu: goto label_1dc03c;
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc044u: goto label_1dc044;
        case 0x1dc048u: goto label_1dc048;
        case 0x1dc04cu: goto label_1dc04c;
        case 0x1dc050u: goto label_1dc050;
        case 0x1dc054u: goto label_1dc054;
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc05cu: goto label_1dc05c;
        case 0x1dc060u: goto label_1dc060;
        case 0x1dc064u: goto label_1dc064;
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc06cu: goto label_1dc06c;
        case 0x1dc070u: goto label_1dc070;
        case 0x1dc074u: goto label_1dc074;
        case 0x1dc078u: goto label_1dc078;
        case 0x1dc07cu: goto label_1dc07c;
        case 0x1dc080u: goto label_1dc080;
        case 0x1dc084u: goto label_1dc084;
        case 0x1dc088u: goto label_1dc088;
        case 0x1dc08cu: goto label_1dc08c;
        case 0x1dc090u: goto label_1dc090;
        case 0x1dc094u: goto label_1dc094;
        case 0x1dc098u: goto label_1dc098;
        case 0x1dc09cu: goto label_1dc09c;
        case 0x1dc0a0u: goto label_1dc0a0;
        case 0x1dc0a4u: goto label_1dc0a4;
        case 0x1dc0a8u: goto label_1dc0a8;
        case 0x1dc0acu: goto label_1dc0ac;
        case 0x1dc0b0u: goto label_1dc0b0;
        case 0x1dc0b4u: goto label_1dc0b4;
        case 0x1dc0b8u: goto label_1dc0b8;
        case 0x1dc0bcu: goto label_1dc0bc;
        case 0x1dc0c0u: goto label_1dc0c0;
        case 0x1dc0c4u: goto label_1dc0c4;
        case 0x1dc0c8u: goto label_1dc0c8;
        case 0x1dc0ccu: goto label_1dc0cc;
        case 0x1dc0d0u: goto label_1dc0d0;
        case 0x1dc0d4u: goto label_1dc0d4;
        case 0x1dc0d8u: goto label_1dc0d8;
        case 0x1dc0dcu: goto label_1dc0dc;
        case 0x1dc0e0u: goto label_1dc0e0;
        case 0x1dc0e4u: goto label_1dc0e4;
        case 0x1dc0e8u: goto label_1dc0e8;
        case 0x1dc0ecu: goto label_1dc0ec;
        case 0x1dc0f0u: goto label_1dc0f0;
        case 0x1dc0f4u: goto label_1dc0f4;
        case 0x1dc0f8u: goto label_1dc0f8;
        case 0x1dc0fcu: goto label_1dc0fc;
        case 0x1dc100u: goto label_1dc100;
        case 0x1dc104u: goto label_1dc104;
        case 0x1dc108u: goto label_1dc108;
        case 0x1dc10cu: goto label_1dc10c;
        case 0x1dc110u: goto label_1dc110;
        case 0x1dc114u: goto label_1dc114;
        case 0x1dc118u: goto label_1dc118;
        case 0x1dc11cu: goto label_1dc11c;
        case 0x1dc120u: goto label_1dc120;
        case 0x1dc124u: goto label_1dc124;
        case 0x1dc128u: goto label_1dc128;
        case 0x1dc12cu: goto label_1dc12c;
        case 0x1dc130u: goto label_1dc130;
        case 0x1dc134u: goto label_1dc134;
        case 0x1dc138u: goto label_1dc138;
        case 0x1dc13cu: goto label_1dc13c;
        case 0x1dc140u: goto label_1dc140;
        case 0x1dc144u: goto label_1dc144;
        case 0x1dc148u: goto label_1dc148;
        case 0x1dc14cu: goto label_1dc14c;
        case 0x1dc150u: goto label_1dc150;
        case 0x1dc154u: goto label_1dc154;
        case 0x1dc158u: goto label_1dc158;
        case 0x1dc15cu: goto label_1dc15c;
        case 0x1dc160u: goto label_1dc160;
        case 0x1dc164u: goto label_1dc164;
        case 0x1dc168u: goto label_1dc168;
        case 0x1dc16cu: goto label_1dc16c;
        case 0x1dc170u: goto label_1dc170;
        case 0x1dc174u: goto label_1dc174;
        case 0x1dc178u: goto label_1dc178;
        case 0x1dc17cu: goto label_1dc17c;
        case 0x1dc180u: goto label_1dc180;
        case 0x1dc184u: goto label_1dc184;
        case 0x1dc188u: goto label_1dc188;
        case 0x1dc18cu: goto label_1dc18c;
        case 0x1dc190u: goto label_1dc190;
        case 0x1dc194u: goto label_1dc194;
        case 0x1dc198u: goto label_1dc198;
        case 0x1dc19cu: goto label_1dc19c;
        case 0x1dc1a0u: goto label_1dc1a0;
        case 0x1dc1a4u: goto label_1dc1a4;
        case 0x1dc1a8u: goto label_1dc1a8;
        case 0x1dc1acu: goto label_1dc1ac;
        case 0x1dc1b0u: goto label_1dc1b0;
        case 0x1dc1b4u: goto label_1dc1b4;
        case 0x1dc1b8u: goto label_1dc1b8;
        case 0x1dc1bcu: goto label_1dc1bc;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1c4u: goto label_1dc1c4;
        case 0x1dc1c8u: goto label_1dc1c8;
        case 0x1dc1ccu: goto label_1dc1cc;
        case 0x1dc1d0u: goto label_1dc1d0;
        case 0x1dc1d4u: goto label_1dc1d4;
        case 0x1dc1d8u: goto label_1dc1d8;
        case 0x1dc1dcu: goto label_1dc1dc;
        case 0x1dc1e0u: goto label_1dc1e0;
        case 0x1dc1e4u: goto label_1dc1e4;
        case 0x1dc1e8u: goto label_1dc1e8;
        case 0x1dc1ecu: goto label_1dc1ec;
        case 0x1dc1f0u: goto label_1dc1f0;
        case 0x1dc1f4u: goto label_1dc1f4;
        case 0x1dc1f8u: goto label_1dc1f8;
        case 0x1dc1fcu: goto label_1dc1fc;
        case 0x1dc200u: goto label_1dc200;
        case 0x1dc204u: goto label_1dc204;
        case 0x1dc208u: goto label_1dc208;
        case 0x1dc20cu: goto label_1dc20c;
        case 0x1dc210u: goto label_1dc210;
        case 0x1dc214u: goto label_1dc214;
        case 0x1dc218u: goto label_1dc218;
        case 0x1dc21cu: goto label_1dc21c;
        case 0x1dc220u: goto label_1dc220;
        case 0x1dc224u: goto label_1dc224;
        case 0x1dc228u: goto label_1dc228;
        case 0x1dc22cu: goto label_1dc22c;
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc234u: goto label_1dc234;
        case 0x1dc238u: goto label_1dc238;
        case 0x1dc23cu: goto label_1dc23c;
        case 0x1dc240u: goto label_1dc240;
        case 0x1dc244u: goto label_1dc244;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc24cu: goto label_1dc24c;
        case 0x1dc250u: goto label_1dc250;
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc25cu: goto label_1dc25c;
        case 0x1dc260u: goto label_1dc260;
        case 0x1dc264u: goto label_1dc264;
        case 0x1dc268u: goto label_1dc268;
        case 0x1dc26cu: goto label_1dc26c;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc274u: goto label_1dc274;
        case 0x1dc278u: goto label_1dc278;
        case 0x1dc27cu: goto label_1dc27c;
        case 0x1dc280u: goto label_1dc280;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc288u: goto label_1dc288;
        case 0x1dc28cu: goto label_1dc28c;
        case 0x1dc290u: goto label_1dc290;
        case 0x1dc294u: goto label_1dc294;
        case 0x1dc298u: goto label_1dc298;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2a0u: goto label_1dc2a0;
        case 0x1dc2a4u: goto label_1dc2a4;
        case 0x1dc2a8u: goto label_1dc2a8;
        case 0x1dc2acu: goto label_1dc2ac;
        case 0x1dc2b0u: goto label_1dc2b0;
        case 0x1dc2b4u: goto label_1dc2b4;
        case 0x1dc2b8u: goto label_1dc2b8;
        case 0x1dc2bcu: goto label_1dc2bc;
        case 0x1dc2c0u: goto label_1dc2c0;
        case 0x1dc2c4u: goto label_1dc2c4;
        case 0x1dc2c8u: goto label_1dc2c8;
        case 0x1dc2ccu: goto label_1dc2cc;
        case 0x1dc2d0u: goto label_1dc2d0;
        case 0x1dc2d4u: goto label_1dc2d4;
        case 0x1dc2d8u: goto label_1dc2d8;
        case 0x1dc2dcu: goto label_1dc2dc;
        case 0x1dc2e0u: goto label_1dc2e0;
        case 0x1dc2e4u: goto label_1dc2e4;
        case 0x1dc2e8u: goto label_1dc2e8;
        case 0x1dc2ecu: goto label_1dc2ec;
        case 0x1dc2f0u: goto label_1dc2f0;
        case 0x1dc2f4u: goto label_1dc2f4;
        case 0x1dc2f8u: goto label_1dc2f8;
        case 0x1dc2fcu: goto label_1dc2fc;
        case 0x1dc300u: goto label_1dc300;
        case 0x1dc304u: goto label_1dc304;
        case 0x1dc308u: goto label_1dc308;
        case 0x1dc30cu: goto label_1dc30c;
        case 0x1dc310u: goto label_1dc310;
        case 0x1dc314u: goto label_1dc314;
        case 0x1dc318u: goto label_1dc318;
        case 0x1dc31cu: goto label_1dc31c;
        case 0x1dc320u: goto label_1dc320;
        case 0x1dc324u: goto label_1dc324;
        case 0x1dc328u: goto label_1dc328;
        case 0x1dc32cu: goto label_1dc32c;
        case 0x1dc330u: goto label_1dc330;
        case 0x1dc334u: goto label_1dc334;
        case 0x1dc338u: goto label_1dc338;
        case 0x1dc33cu: goto label_1dc33c;
        case 0x1dc340u: goto label_1dc340;
        case 0x1dc344u: goto label_1dc344;
        case 0x1dc348u: goto label_1dc348;
        case 0x1dc34cu: goto label_1dc34c;
        case 0x1dc350u: goto label_1dc350;
        case 0x1dc354u: goto label_1dc354;
        case 0x1dc358u: goto label_1dc358;
        case 0x1dc35cu: goto label_1dc35c;
        case 0x1dc360u: goto label_1dc360;
        case 0x1dc364u: goto label_1dc364;
        case 0x1dc368u: goto label_1dc368;
        case 0x1dc36cu: goto label_1dc36c;
        case 0x1dc370u: goto label_1dc370;
        case 0x1dc374u: goto label_1dc374;
        case 0x1dc378u: goto label_1dc378;
        case 0x1dc37cu: goto label_1dc37c;
        case 0x1dc380u: goto label_1dc380;
        case 0x1dc384u: goto label_1dc384;
        case 0x1dc388u: goto label_1dc388;
        case 0x1dc38cu: goto label_1dc38c;
        case 0x1dc390u: goto label_1dc390;
        case 0x1dc394u: goto label_1dc394;
        case 0x1dc398u: goto label_1dc398;
        case 0x1dc39cu: goto label_1dc39c;
        case 0x1dc3a0u: goto label_1dc3a0;
        case 0x1dc3a4u: goto label_1dc3a4;
        case 0x1dc3a8u: goto label_1dc3a8;
        case 0x1dc3acu: goto label_1dc3ac;
        case 0x1dc3b0u: goto label_1dc3b0;
        case 0x1dc3b4u: goto label_1dc3b4;
        case 0x1dc3b8u: goto label_1dc3b8;
        case 0x1dc3bcu: goto label_1dc3bc;
        case 0x1dc3c0u: goto label_1dc3c0;
        case 0x1dc3c4u: goto label_1dc3c4;
        case 0x1dc3c8u: goto label_1dc3c8;
        case 0x1dc3ccu: goto label_1dc3cc;
        case 0x1dc3d0u: goto label_1dc3d0;
        case 0x1dc3d4u: goto label_1dc3d4;
        case 0x1dc3d8u: goto label_1dc3d8;
        case 0x1dc3dcu: goto label_1dc3dc;
        case 0x1dc3e0u: goto label_1dc3e0;
        case 0x1dc3e4u: goto label_1dc3e4;
        case 0x1dc3e8u: goto label_1dc3e8;
        case 0x1dc3ecu: goto label_1dc3ec;
        case 0x1dc3f0u: goto label_1dc3f0;
        case 0x1dc3f4u: goto label_1dc3f4;
        case 0x1dc3f8u: goto label_1dc3f8;
        case 0x1dc3fcu: goto label_1dc3fc;
        case 0x1dc400u: goto label_1dc400;
        case 0x1dc404u: goto label_1dc404;
        case 0x1dc408u: goto label_1dc408;
        case 0x1dc40cu: goto label_1dc40c;
        case 0x1dc410u: goto label_1dc410;
        case 0x1dc414u: goto label_1dc414;
        case 0x1dc418u: goto label_1dc418;
        case 0x1dc41cu: goto label_1dc41c;
        case 0x1dc420u: goto label_1dc420;
        case 0x1dc424u: goto label_1dc424;
        case 0x1dc428u: goto label_1dc428;
        case 0x1dc42cu: goto label_1dc42c;
        case 0x1dc430u: goto label_1dc430;
        case 0x1dc434u: goto label_1dc434;
        case 0x1dc438u: goto label_1dc438;
        case 0x1dc43cu: goto label_1dc43c;
        case 0x1dc440u: goto label_1dc440;
        case 0x1dc444u: goto label_1dc444;
        case 0x1dc448u: goto label_1dc448;
        case 0x1dc44cu: goto label_1dc44c;
        case 0x1dc450u: goto label_1dc450;
        case 0x1dc454u: goto label_1dc454;
        case 0x1dc458u: goto label_1dc458;
        case 0x1dc45cu: goto label_1dc45c;
        case 0x1dc460u: goto label_1dc460;
        case 0x1dc464u: goto label_1dc464;
        case 0x1dc468u: goto label_1dc468;
        case 0x1dc46cu: goto label_1dc46c;
        case 0x1dc470u: goto label_1dc470;
        case 0x1dc474u: goto label_1dc474;
        case 0x1dc478u: goto label_1dc478;
        case 0x1dc47cu: goto label_1dc47c;
        case 0x1dc480u: goto label_1dc480;
        case 0x1dc484u: goto label_1dc484;
        case 0x1dc488u: goto label_1dc488;
        case 0x1dc48cu: goto label_1dc48c;
        case 0x1dc490u: goto label_1dc490;
        case 0x1dc494u: goto label_1dc494;
        case 0x1dc498u: goto label_1dc498;
        case 0x1dc49cu: goto label_1dc49c;
        case 0x1dc4a0u: goto label_1dc4a0;
        case 0x1dc4a4u: goto label_1dc4a4;
        case 0x1dc4a8u: goto label_1dc4a8;
        case 0x1dc4acu: goto label_1dc4ac;
        case 0x1dc4b0u: goto label_1dc4b0;
        case 0x1dc4b4u: goto label_1dc4b4;
        case 0x1dc4b8u: goto label_1dc4b8;
        case 0x1dc4bcu: goto label_1dc4bc;
        case 0x1dc4c0u: goto label_1dc4c0;
        case 0x1dc4c4u: goto label_1dc4c4;
        case 0x1dc4c8u: goto label_1dc4c8;
        case 0x1dc4ccu: goto label_1dc4cc;
        case 0x1dc4d0u: goto label_1dc4d0;
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4d8u: goto label_1dc4d8;
        case 0x1dc4dcu: goto label_1dc4dc;
        case 0x1dc4e0u: goto label_1dc4e0;
        case 0x1dc4e4u: goto label_1dc4e4;
        case 0x1dc4e8u: goto label_1dc4e8;
        case 0x1dc4ecu: goto label_1dc4ec;
        case 0x1dc4f0u: goto label_1dc4f0;
        case 0x1dc4f4u: goto label_1dc4f4;
        case 0x1dc4f8u: goto label_1dc4f8;
        case 0x1dc4fcu: goto label_1dc4fc;
        case 0x1dc500u: goto label_1dc500;
        case 0x1dc504u: goto label_1dc504;
        case 0x1dc508u: goto label_1dc508;
        case 0x1dc50cu: goto label_1dc50c;
        case 0x1dc510u: goto label_1dc510;
        case 0x1dc514u: goto label_1dc514;
        case 0x1dc518u: goto label_1dc518;
        case 0x1dc51cu: goto label_1dc51c;
        case 0x1dc520u: goto label_1dc520;
        case 0x1dc524u: goto label_1dc524;
        case 0x1dc528u: goto label_1dc528;
        case 0x1dc52cu: goto label_1dc52c;
        case 0x1dc530u: goto label_1dc530;
        case 0x1dc534u: goto label_1dc534;
        case 0x1dc538u: goto label_1dc538;
        case 0x1dc53cu: goto label_1dc53c;
        case 0x1dc540u: goto label_1dc540;
        case 0x1dc544u: goto label_1dc544;
        case 0x1dc548u: goto label_1dc548;
        case 0x1dc54cu: goto label_1dc54c;
        case 0x1dc550u: goto label_1dc550;
        case 0x1dc554u: goto label_1dc554;
        case 0x1dc558u: goto label_1dc558;
        case 0x1dc55cu: goto label_1dc55c;
        case 0x1dc560u: goto label_1dc560;
        case 0x1dc564u: goto label_1dc564;
        case 0x1dc568u: goto label_1dc568;
        case 0x1dc56cu: goto label_1dc56c;
        case 0x1dc570u: goto label_1dc570;
        case 0x1dc574u: goto label_1dc574;
        case 0x1dc578u: goto label_1dc578;
        case 0x1dc57cu: goto label_1dc57c;
        case 0x1dc580u: goto label_1dc580;
        case 0x1dc584u: goto label_1dc584;
        case 0x1dc588u: goto label_1dc588;
        case 0x1dc58cu: goto label_1dc58c;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc594u: goto label_1dc594;
        case 0x1dc598u: goto label_1dc598;
        case 0x1dc59cu: goto label_1dc59c;
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5a4u: goto label_1dc5a4;
        case 0x1dc5a8u: goto label_1dc5a8;
        case 0x1dc5acu: goto label_1dc5ac;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5b8u: goto label_1dc5b8;
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5c0u: goto label_1dc5c0;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5c8u: goto label_1dc5c8;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5d0u: goto label_1dc5d0;
        case 0x1dc5d4u: goto label_1dc5d4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc5dcu: goto label_1dc5dc;
        case 0x1dc5e0u: goto label_1dc5e0;
        case 0x1dc5e4u: goto label_1dc5e4;
        case 0x1dc5e8u: goto label_1dc5e8;
        case 0x1dc5ecu: goto label_1dc5ec;
        case 0x1dc5f0u: goto label_1dc5f0;
        case 0x1dc5f4u: goto label_1dc5f4;
        case 0x1dc5f8u: goto label_1dc5f8;
        case 0x1dc5fcu: goto label_1dc5fc;
        case 0x1dc600u: goto label_1dc600;
        case 0x1dc604u: goto label_1dc604;
        case 0x1dc608u: goto label_1dc608;
        case 0x1dc60cu: goto label_1dc60c;
        case 0x1dc610u: goto label_1dc610;
        case 0x1dc614u: goto label_1dc614;
        case 0x1dc618u: goto label_1dc618;
        case 0x1dc61cu: goto label_1dc61c;
        case 0x1dc620u: goto label_1dc620;
        case 0x1dc624u: goto label_1dc624;
        case 0x1dc628u: goto label_1dc628;
        case 0x1dc62cu: goto label_1dc62c;
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc634u: goto label_1dc634;
        case 0x1dc638u: goto label_1dc638;
        case 0x1dc63cu: goto label_1dc63c;
        case 0x1dc640u: goto label_1dc640;
        case 0x1dc644u: goto label_1dc644;
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc64cu: goto label_1dc64c;
        case 0x1dc650u: goto label_1dc650;
        case 0x1dc654u: goto label_1dc654;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc65cu: goto label_1dc65c;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc664u: goto label_1dc664;
        case 0x1dc668u: goto label_1dc668;
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc674u: goto label_1dc674;
        case 0x1dc678u: goto label_1dc678;
        case 0x1dc67cu: goto label_1dc67c;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc684u: goto label_1dc684;
        case 0x1dc688u: goto label_1dc688;
        case 0x1dc68cu: goto label_1dc68c;
        case 0x1dc690u: goto label_1dc690;
        case 0x1dc694u: goto label_1dc694;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc69cu: goto label_1dc69c;
        case 0x1dc6a0u: goto label_1dc6a0;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6acu: goto label_1dc6ac;
        case 0x1dc6b0u: goto label_1dc6b0;
        case 0x1dc6b4u: goto label_1dc6b4;
        case 0x1dc6b8u: goto label_1dc6b8;
        case 0x1dc6bcu: goto label_1dc6bc;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6c4u: goto label_1dc6c4;
        case 0x1dc6c8u: goto label_1dc6c8;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6d4u: goto label_1dc6d4;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc6dcu: goto label_1dc6dc;
        case 0x1dc6e0u: goto label_1dc6e0;
        case 0x1dc6e4u: goto label_1dc6e4;
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6ecu: goto label_1dc6ec;
        case 0x1dc6f0u: goto label_1dc6f0;
        case 0x1dc6f4u: goto label_1dc6f4;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc6fcu: goto label_1dc6fc;
        case 0x1dc700u: goto label_1dc700;
        case 0x1dc704u: goto label_1dc704;
        case 0x1dc708u: goto label_1dc708;
        case 0x1dc70cu: goto label_1dc70c;
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc714u: goto label_1dc714;
        case 0x1dc718u: goto label_1dc718;
        case 0x1dc71cu: goto label_1dc71c;
        case 0x1dc720u: goto label_1dc720;
        case 0x1dc724u: goto label_1dc724;
        case 0x1dc728u: goto label_1dc728;
        case 0x1dc72cu: goto label_1dc72c;
        case 0x1dc730u: goto label_1dc730;
        case 0x1dc734u: goto label_1dc734;
        case 0x1dc738u: goto label_1dc738;
        case 0x1dc73cu: goto label_1dc73c;
        case 0x1dc740u: goto label_1dc740;
        case 0x1dc744u: goto label_1dc744;
        case 0x1dc748u: goto label_1dc748;
        case 0x1dc74cu: goto label_1dc74c;
        case 0x1dc750u: goto label_1dc750;
        case 0x1dc754u: goto label_1dc754;
        case 0x1dc758u: goto label_1dc758;
        case 0x1dc75cu: goto label_1dc75c;
        case 0x1dc760u: goto label_1dc760;
        case 0x1dc764u: goto label_1dc764;
        case 0x1dc768u: goto label_1dc768;
        case 0x1dc76cu: goto label_1dc76c;
        case 0x1dc770u: goto label_1dc770;
        case 0x1dc774u: goto label_1dc774;
        case 0x1dc778u: goto label_1dc778;
        case 0x1dc77cu: goto label_1dc77c;
        case 0x1dc780u: goto label_1dc780;
        case 0x1dc784u: goto label_1dc784;
        case 0x1dc788u: goto label_1dc788;
        case 0x1dc78cu: goto label_1dc78c;
        case 0x1dc790u: goto label_1dc790;
        case 0x1dc794u: goto label_1dc794;
        case 0x1dc798u: goto label_1dc798;
        case 0x1dc79cu: goto label_1dc79c;
        case 0x1dc7a0u: goto label_1dc7a0;
        case 0x1dc7a4u: goto label_1dc7a4;
        case 0x1dc7a8u: goto label_1dc7a8;
        case 0x1dc7acu: goto label_1dc7ac;
        case 0x1dc7b0u: goto label_1dc7b0;
        case 0x1dc7b4u: goto label_1dc7b4;
        case 0x1dc7b8u: goto label_1dc7b8;
        case 0x1dc7bcu: goto label_1dc7bc;
        case 0x1dc7c0u: goto label_1dc7c0;
        case 0x1dc7c4u: goto label_1dc7c4;
        case 0x1dc7c8u: goto label_1dc7c8;
        case 0x1dc7ccu: goto label_1dc7cc;
        case 0x1dc7d0u: goto label_1dc7d0;
        case 0x1dc7d4u: goto label_1dc7d4;
        case 0x1dc7d8u: goto label_1dc7d8;
        case 0x1dc7dcu: goto label_1dc7dc;
        case 0x1dc7e0u: goto label_1dc7e0;
        case 0x1dc7e4u: goto label_1dc7e4;
        case 0x1dc7e8u: goto label_1dc7e8;
        case 0x1dc7ecu: goto label_1dc7ec;
        case 0x1dc7f0u: goto label_1dc7f0;
        case 0x1dc7f4u: goto label_1dc7f4;
        case 0x1dc7f8u: goto label_1dc7f8;
        case 0x1dc7fcu: goto label_1dc7fc;
        case 0x1dc800u: goto label_1dc800;
        case 0x1dc804u: goto label_1dc804;
        case 0x1dc808u: goto label_1dc808;
        case 0x1dc80cu: goto label_1dc80c;
        case 0x1dc810u: goto label_1dc810;
        case 0x1dc814u: goto label_1dc814;
        case 0x1dc818u: goto label_1dc818;
        case 0x1dc81cu: goto label_1dc81c;
        case 0x1dc820u: goto label_1dc820;
        case 0x1dc824u: goto label_1dc824;
        case 0x1dc828u: goto label_1dc828;
        case 0x1dc82cu: goto label_1dc82c;
        case 0x1dc830u: goto label_1dc830;
        case 0x1dc834u: goto label_1dc834;
        case 0x1dc838u: goto label_1dc838;
        case 0x1dc83cu: goto label_1dc83c;
        case 0x1dc840u: goto label_1dc840;
        case 0x1dc844u: goto label_1dc844;
        case 0x1dc848u: goto label_1dc848;
        case 0x1dc84cu: goto label_1dc84c;
        case 0x1dc850u: goto label_1dc850;
        case 0x1dc854u: goto label_1dc854;
        case 0x1dc858u: goto label_1dc858;
        case 0x1dc85cu: goto label_1dc85c;
        case 0x1dc860u: goto label_1dc860;
        case 0x1dc864u: goto label_1dc864;
        case 0x1dc868u: goto label_1dc868;
        case 0x1dc86cu: goto label_1dc86c;
        case 0x1dc870u: goto label_1dc870;
        case 0x1dc874u: goto label_1dc874;
        case 0x1dc878u: goto label_1dc878;
        case 0x1dc87cu: goto label_1dc87c;
        case 0x1dc880u: goto label_1dc880;
        case 0x1dc884u: goto label_1dc884;
        case 0x1dc888u: goto label_1dc888;
        case 0x1dc88cu: goto label_1dc88c;
        case 0x1dc890u: goto label_1dc890;
        case 0x1dc894u: goto label_1dc894;
        case 0x1dc898u: goto label_1dc898;
        case 0x1dc89cu: goto label_1dc89c;
        case 0x1dc8a0u: goto label_1dc8a0;
        case 0x1dc8a4u: goto label_1dc8a4;
        case 0x1dc8a8u: goto label_1dc8a8;
        case 0x1dc8acu: goto label_1dc8ac;
        case 0x1dc8b0u: goto label_1dc8b0;
        case 0x1dc8b4u: goto label_1dc8b4;
        case 0x1dc8b8u: goto label_1dc8b8;
        case 0x1dc8bcu: goto label_1dc8bc;
        case 0x1dc8c0u: goto label_1dc8c0;
        case 0x1dc8c4u: goto label_1dc8c4;
        case 0x1dc8c8u: goto label_1dc8c8;
        case 0x1dc8ccu: goto label_1dc8cc;
        case 0x1dc8d0u: goto label_1dc8d0;
        case 0x1dc8d4u: goto label_1dc8d4;
        case 0x1dc8d8u: goto label_1dc8d8;
        case 0x1dc8dcu: goto label_1dc8dc;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc8e4u: goto label_1dc8e4;
        case 0x1dc8e8u: goto label_1dc8e8;
        case 0x1dc8ecu: goto label_1dc8ec;
        case 0x1dc8f0u: goto label_1dc8f0;
        case 0x1dc8f4u: goto label_1dc8f4;
        case 0x1dc8f8u: goto label_1dc8f8;
        case 0x1dc8fcu: goto label_1dc8fc;
        case 0x1dc900u: goto label_1dc900;
        case 0x1dc904u: goto label_1dc904;
        case 0x1dc908u: goto label_1dc908;
        case 0x1dc90cu: goto label_1dc90c;
        case 0x1dc910u: goto label_1dc910;
        case 0x1dc914u: goto label_1dc914;
        case 0x1dc918u: goto label_1dc918;
        case 0x1dc91cu: goto label_1dc91c;
        case 0x1dc920u: goto label_1dc920;
        case 0x1dc924u: goto label_1dc924;
        case 0x1dc928u: goto label_1dc928;
        case 0x1dc92cu: goto label_1dc92c;
        case 0x1dc930u: goto label_1dc930;
        case 0x1dc934u: goto label_1dc934;
        case 0x1dc938u: goto label_1dc938;
        case 0x1dc93cu: goto label_1dc93c;
        case 0x1dc940u: goto label_1dc940;
        case 0x1dc944u: goto label_1dc944;
        case 0x1dc948u: goto label_1dc948;
        case 0x1dc94cu: goto label_1dc94c;
        case 0x1dc950u: goto label_1dc950;
        case 0x1dc954u: goto label_1dc954;
        case 0x1dc958u: goto label_1dc958;
        case 0x1dc95cu: goto label_1dc95c;
        case 0x1dc960u: goto label_1dc960;
        case 0x1dc964u: goto label_1dc964;
        case 0x1dc968u: goto label_1dc968;
        case 0x1dc96cu: goto label_1dc96c;
        case 0x1dc970u: goto label_1dc970;
        case 0x1dc974u: goto label_1dc974;
        case 0x1dc978u: goto label_1dc978;
        case 0x1dc97cu: goto label_1dc97c;
        case 0x1dc980u: goto label_1dc980;
        case 0x1dc984u: goto label_1dc984;
        case 0x1dc988u: goto label_1dc988;
        case 0x1dc98cu: goto label_1dc98c;
        case 0x1dc990u: goto label_1dc990;
        case 0x1dc994u: goto label_1dc994;
        case 0x1dc998u: goto label_1dc998;
        case 0x1dc99cu: goto label_1dc99c;
        case 0x1dc9a0u: goto label_1dc9a0;
        case 0x1dc9a4u: goto label_1dc9a4;
        case 0x1dc9a8u: goto label_1dc9a8;
        case 0x1dc9acu: goto label_1dc9ac;
        case 0x1dc9b0u: goto label_1dc9b0;
        case 0x1dc9b4u: goto label_1dc9b4;
        case 0x1dc9b8u: goto label_1dc9b8;
        case 0x1dc9bcu: goto label_1dc9bc;
        case 0x1dc9c0u: goto label_1dc9c0;
        case 0x1dc9c4u: goto label_1dc9c4;
        case 0x1dc9c8u: goto label_1dc9c8;
        case 0x1dc9ccu: goto label_1dc9cc;
        case 0x1dc9d0u: goto label_1dc9d0;
        case 0x1dc9d4u: goto label_1dc9d4;
        case 0x1dc9d8u: goto label_1dc9d8;
        case 0x1dc9dcu: goto label_1dc9dc;
        case 0x1dc9e0u: goto label_1dc9e0;
        case 0x1dc9e4u: goto label_1dc9e4;
        case 0x1dc9e8u: goto label_1dc9e8;
        case 0x1dc9ecu: goto label_1dc9ec;
        case 0x1dc9f0u: goto label_1dc9f0;
        case 0x1dc9f4u: goto label_1dc9f4;
        case 0x1dc9f8u: goto label_1dc9f8;
        case 0x1dc9fcu: goto label_1dc9fc;
        case 0x1dca00u: goto label_1dca00;
        case 0x1dca04u: goto label_1dca04;
        case 0x1dca08u: goto label_1dca08;
        case 0x1dca0cu: goto label_1dca0c;
        case 0x1dca10u: goto label_1dca10;
        case 0x1dca14u: goto label_1dca14;
        case 0x1dca18u: goto label_1dca18;
        case 0x1dca1cu: goto label_1dca1c;
        case 0x1dca20u: goto label_1dca20;
        case 0x1dca24u: goto label_1dca24;
        case 0x1dca28u: goto label_1dca28;
        case 0x1dca2cu: goto label_1dca2c;
        case 0x1dca30u: goto label_1dca30;
        case 0x1dca34u: goto label_1dca34;
        case 0x1dca38u: goto label_1dca38;
        case 0x1dca3cu: goto label_1dca3c;
        case 0x1dca40u: goto label_1dca40;
        case 0x1dca44u: goto label_1dca44;
        case 0x1dca48u: goto label_1dca48;
        case 0x1dca4cu: goto label_1dca4c;
        case 0x1dca50u: goto label_1dca50;
        case 0x1dca54u: goto label_1dca54;
        case 0x1dca58u: goto label_1dca58;
        case 0x1dca5cu: goto label_1dca5c;
        case 0x1dca60u: goto label_1dca60;
        case 0x1dca64u: goto label_1dca64;
        case 0x1dca68u: goto label_1dca68;
        case 0x1dca6cu: goto label_1dca6c;
        case 0x1dca70u: goto label_1dca70;
        case 0x1dca74u: goto label_1dca74;
        case 0x1dca78u: goto label_1dca78;
        case 0x1dca7cu: goto label_1dca7c;
        case 0x1dca80u: goto label_1dca80;
        case 0x1dca84u: goto label_1dca84;
        case 0x1dca88u: goto label_1dca88;
        case 0x1dca8cu: goto label_1dca8c;
        case 0x1dca90u: goto label_1dca90;
        case 0x1dca94u: goto label_1dca94;
        case 0x1dca98u: goto label_1dca98;
        case 0x1dca9cu: goto label_1dca9c;
        case 0x1dcaa0u: goto label_1dcaa0;
        case 0x1dcaa4u: goto label_1dcaa4;
        case 0x1dcaa8u: goto label_1dcaa8;
        case 0x1dcaacu: goto label_1dcaac;
        case 0x1dcab0u: goto label_1dcab0;
        case 0x1dcab4u: goto label_1dcab4;
        case 0x1dcab8u: goto label_1dcab8;
        case 0x1dcabcu: goto label_1dcabc;
        default: break;
    }

    ctx->pc = 0x1dbee0u;

label_1dbee0:
    // 0x1dbee0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1dbee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1dbee4:
    // 0x1dbee4: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1dbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1dbee8:
    // 0x1dbee8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dbee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbeec:
    // 0x1dbeec: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1dbeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1dbef0:
    // 0x1dbef0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1dbef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1dbef4:
    // 0x1dbef4: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1dbef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1dbef8:
    // 0x1dbef8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dbef8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1dbefc:
    // 0x1dbefc: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1dbefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_1dbf00:
    // 0x1dbf00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dbf00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf04:
    // 0x1dbf04: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1dbf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_1dbf08:
    // 0x1dbf08: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1dbf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_1dbf0c:
    // 0x1dbf0c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1dbf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_1dbf10:
    // 0x1dbf10: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x1dbf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_1dbf14:
    // 0x1dbf14: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1dbf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1dbf18:
    // 0x1dbf18: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1dbf1c:
    // 0x1dbf1c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1dbf1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1dbf20:
    // 0x1dbf20: 0xc076ede  jal         func_1DBB78
label_1dbf24:
    if (ctx->pc == 0x1DBF24u) {
        ctx->pc = 0x1DBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF20u;
        // 0x1dbf24: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF28u;
        goto label_1dbf28;
    }
    ctx->pc = 0x1DBF20u;
    SET_GPR_U32(ctx, 31, 0x1DBF28u);
    ctx->pc = 0x1DBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF20u;
    // 0x1dbf24: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB78u, 0x1DBF20u, 0x1DBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF28u;
label_1dbf28:
    // 0x1dbf28: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1dbf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1dbf2c:
    // 0x1dbf2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dbf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dbf30:
    // 0x1dbf30: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1dbf30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1dbf34:
    // 0x1dbf34: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1dbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1dbf38:
    // 0x1dbf38: 0x40f809  jalr        $v0
label_1dbf3c:
    if (ctx->pc == 0x1DBF3Cu) {
        ctx->pc = 0x1DBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF38u;
        // 0x1dbf3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF40u;
        goto label_1dbf40;
    }
    ctx->pc = 0x1DBF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DBF40u);
        ctx->pc = 0x1DBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF38u;
        // 0x1dbf3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBF38u, 0x1DBF40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBF40u;
label_1dbf40:
    // 0x1dbf40: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1dbf44:
    // 0x1dbf44: 0xae420790  sw          $v0, 0x790($s2)
    ctx->pc = 0x1dbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1936), GPR_U32(ctx, 2));
label_1dbf48:
    // 0x1dbf48: 0xae4020b0  sw          $zero, 0x20B0($s2)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8368), GPR_U32(ctx, 0));
label_1dbf4c:
    // 0x1dbf4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dbf50:
    // 0x1dbf50: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1dbf54:
    // 0x1dbf54: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1dbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1dbf58:
    // 0x1dbf58: 0x40f809  jalr        $v0
label_1dbf5c:
    if (ctx->pc == 0x1DBF5Cu) {
        ctx->pc = 0x1DBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF58u;
        // 0x1dbf5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF60u;
        goto label_1dbf60;
    }
    ctx->pc = 0x1DBF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DBF60u);
        ctx->pc = 0x1DBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF58u;
        // 0x1dbf5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBF58u, 0x1DBF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBF60u;
label_1dbf60:
    // 0x1dbf60: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dbf64:
    // 0x1dbf64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1dbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1dbf68:
    // 0x1dbf68: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1dbf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dbf6c:
    // 0x1dbf6c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1dbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_1dbf70:
    // 0x1dbf70: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x1dbf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_1dbf74:
    // 0x1dbf74: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x1dbf74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1dbf78:
    // 0x1dbf78: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x1dbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
label_1dbf7c:
    // 0x1dbf7c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dbf80:
    // 0x1dbf80: 0xae423ba4  sw          $v0, 0x3BA4($s2)
    ctx->pc = 0x1dbf80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15268), GPR_U32(ctx, 2));
label_1dbf84:
    // 0x1dbf84: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dbf88:
    // 0x1dbf88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1dbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1dbf8c:
    // 0x1dbf8c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1dbf8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1dbf90:
    // 0x1dbf90: 0x27b60084  addiu       $s6, $sp, 0x84
    ctx->pc = 0x1dbf90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1dbf94:
    // 0x1dbf94: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_1dbf98:
    // 0x1dbf98: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1dbf98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_1dbf9c:
    // 0x1dbf9c: 0x0  nop
    ctx->pc = 0x1dbf9cu;
    // NOP
label_1dbfa0:
    // 0x1dbfa0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1dbfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1dbfa4:
    // 0x1dbfa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dbfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dbfa8:
    // 0x1dbfa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dbfac:
    // 0x1dbfac: 0x8cc5d260  lw          $a1, -0x2DA0($a2)
    ctx->pc = 0x1dbfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955616)));
label_1dbfb0:
    // 0x1dbfb0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1dbfb4:
    // 0x1dbfb4: 0xc063262  jal         func_18C988
label_1dbfb8:
    if (ctx->pc == 0x1DBFB8u) {
        ctx->pc = 0x1DBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFB4u;
        // 0x1dbfb8: 0xc4ecee5c  lwc1        $f12, -0x11A4($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294962780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFBCu;
        goto label_1dbfbc;
    }
    ctx->pc = 0x1DBFB4u;
    SET_GPR_U32(ctx, 31, 0x1DBFBCu);
    ctx->pc = 0x1DBFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFB4u;
    // 0x1dbfb8: 0xc4ecee5c  lwc1        $f12, -0x11A4($a3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294962780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x1DBFB4u, 0x1DBFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFBCu;
label_1dbfbc:
    // 0x1dbfbc: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1dbfbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1dbfc0:
    // 0x1dbfc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1dbfc4:
    if (ctx->pc == 0x1DBFC4u) {
        ctx->pc = 0x1DBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFC0u;
        // 0x1dbfc4: 0x3c060060  lui         $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFC8u;
        goto label_1dbfc8;
    }
    ctx->pc = 0x1DBFC0u;
    {
        const bool branch_taken_0x1dbfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFC0u;
        // 0x1dbfc4: 0x3c060060  lui         $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfc0) {
            ctx->pc = 0x1DBFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbfa0;
        }
    }
    ctx->pc = 0x1DBFC8u;
label_1dbfc8:
    // 0x1dbfc8: 0x8e451bc0  lw          $a1, 0x1BC0($s2)
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7104)));
label_1dbfcc:
    // 0x1dbfcc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1dbfd0:
    // 0x1dbfd0: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1dbfd4:
    // 0x1dbfd4: 0xc06ba26  jal         func_1AE898
label_1dbfd8:
    if (ctx->pc == 0x1DBFD8u) {
        ctx->pc = 0x1DBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD4u;
        // 0x1dbfd8: 0x26503bb0  addiu       $s0, $s2, 0x3BB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFDCu;
        goto label_1dbfdc;
    }
    ctx->pc = 0x1DBFD4u;
    SET_GPR_U32(ctx, 31, 0x1DBFDCu);
    ctx->pc = 0x1DBFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFD4u;
    // 0x1dbfd8: 0x26503bb0  addiu       $s0, $s2, 0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1DBFD4u, 0x1DBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFDCu;
label_1dbfdc:
    // 0x1dbfdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfe0:
    // 0x1dbfe0: 0xc051800  jal         func_146000
label_1dbfe4:
    if (ctx->pc == 0x1DBFE4u) {
        ctx->pc = 0x1DBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFE0u;
        // 0x1dbfe4: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFE8u;
        goto label_1dbfe8;
    }
    ctx->pc = 0x1DBFE0u;
    SET_GPR_U32(ctx, 31, 0x1DBFE8u);
    ctx->pc = 0x1DBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFE0u;
    // 0x1dbfe4: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1DBFE0u, 0x1DBFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFE8u;
label_1dbfe8:
    // 0x1dbfe8: 0x8e451bc0  lw          $a1, 0x1BC0($s2)
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7104)));
label_1dbfec:
    // 0x1dbfec: 0xc079586  jal         func_1E5618
label_1dbff0:
    if (ctx->pc == 0x1DBFF0u) {
        ctx->pc = 0x1DBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFECu;
        // 0x1dbff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFF4u;
        goto label_1dbff4;
    }
    ctx->pc = 0x1DBFECu;
    SET_GPR_U32(ctx, 31, 0x1DBFF4u);
    ctx->pc = 0x1DBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFECu;
    // 0x1dbff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5618u, 0x1DBFECu, 0x1DBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFF4u;
label_1dbff4:
    // 0x1dbff4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1dbff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1dbff8:
    // 0x1dbff8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1dbffc:
    // 0x1dbffc: 0xc107458  jal         func_41D160
label_1dc000:
    if (ctx->pc == 0x1DC000u) {
        ctx->pc = 0x1DC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFFCu;
        // 0x1dc000: 0x8d04489c  lw          $a0, 0x489C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC004u;
        goto label_1dc004;
    }
    ctx->pc = 0x1DBFFCu;
    SET_GPR_U32(ctx, 31, 0x1DC004u);
    ctx->pc = 0x1DC000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFFCu;
    // 0x1dc000: 0x8d04489c  lw          $a0, 0x489C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DBFFCu, 0x1DC004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC004u;
label_1dc004:
    // 0x1dc004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1dc008:
    if (ctx->pc == 0x1DC008u) {
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC00Cu;
        goto label_1dc00c;
    }
    ctx->pc = 0x1DC004u;
    {
        const bool branch_taken_0x1dc004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc004) {
            ctx->pc = 0x1DC01Cu;
            goto label_1dc01c;
        }
    }
    ctx->pc = 0x1DC00Cu;
label_1dc00c:
    // 0x1dc00c: 0xc07f84c  jal         func_1FE130
label_1dc010:
    if (ctx->pc == 0x1DC010u) {
        ctx->pc = 0x1DC014u;
        goto label_1dc014;
    }
    ctx->pc = 0x1DC00Cu;
    SET_GPR_U32(ctx, 31, 0x1DC014u);
    ctx->pc = 0x1FE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE130u, 0x1DC00Cu, 0x1DC014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC014u;
label_1dc014:
    // 0x1dc014: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dc018:
    if (ctx->pc == 0x1DC018u) {
        ctx->pc = 0x1DC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC014u;
        // 0x1dc018: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC01Cu;
        goto label_1dc01c;
    }
    ctx->pc = 0x1DC014u;
    {
        const bool branch_taken_0x1dc014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC014u;
        // 0x1dc018: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc014) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DC01Cu;
label_1dc01c:
    // 0x1dc01c: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x1dc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1dc020:
    // 0x1dc020: 0x24420134  addiu       $v0, $v0, 0x134
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1dc024:
    // 0x1dc024: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1dc024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_1dc028:
    // 0x1dc028: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1dc02c:
    // 0x1dc02c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dc02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1dc030:
    // 0x1dc030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc034:
    // 0x1dc034: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1dc034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1dc038:
    // 0x1dc038: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1dc038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1dc03c:
    // 0x1dc03c: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1dc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1dc040:
    // 0x1dc040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dc044:
    // 0x1dc044: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dc044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dc048:
    // 0x1dc048: 0x946256dc  lhu         $v0, 0x56DC($v1)
    ctx->pc = 0x1dc048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
label_1dc04c:
    // 0x1dc04c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1dc04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1dc050:
    // 0x1dc050: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1dc050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1dc054:
    // 0x1dc054: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dc054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc058:
    // 0x1dc058: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1dc058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1dc05c:
    // 0x1dc05c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1dc05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1dc060:
    // 0x1dc060: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1dc064:
    // 0x1dc064: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1dc064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1dc068:
    // 0x1dc068: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1dc068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1dc06c:
    // 0x1dc06c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1dc06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1dc070:
    // 0x1dc070: 0x8cc5cdb4  lw          $a1, -0x324C($a2)
    ctx->pc = 0x1dc070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954420)));
label_1dc074:
    // 0x1dc074: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1dc074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1dc078:
    // 0x1dc078: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1dc078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1dc07c:
    // 0x1dc07c: 0xe7c1ee64  swc1        $f1, -0x119C($fp)
    ctx->pc = 0x1dc07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294962788), bits); }
label_1dc080:
    // 0x1dc080: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1dc084:
    // 0x1dc084: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1dc084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1dc088:
    // 0x1dc088: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1dc08c:
    // 0x1dc08c: 0x40f809  jalr        $v0
label_1dc090:
    if (ctx->pc == 0x1DC090u) {
        ctx->pc = 0x1DC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC08Cu;
        // 0x1dc090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC094u;
        goto label_1dc094;
    }
    ctx->pc = 0x1DC08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC094u);
        ctx->pc = 0x1DC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC08Cu;
        // 0x1dc090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC08Cu, 0x1DC094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC094u;
label_1dc094:
    // 0x1dc094: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc098:
    if (ctx->pc == 0x1DC098u) {
        ctx->pc = 0x1DC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC094u;
        // 0x1dc098: 0xc7ccee64  lwc1        $f12, -0x119C($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC09Cu;
        goto label_1dc09c;
    }
    ctx->pc = 0x1DC094u;
    {
        const bool branch_taken_0x1dc094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC094u;
        // 0x1dc098: 0xc7ccee64  lwc1        $f12, -0x119C($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc094) {
            ctx->pc = 0x1DC0B4u;
            goto label_1dc0b4;
        }
    }
    ctx->pc = 0x1DC09Cu;
label_1dc09c:
    // 0x1dc09c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1dc09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1dc0a0:
    // 0x1dc0a0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1dc0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1dc0a4:
    // 0x1dc0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc0a8:
    // 0x1dc0a8: 0x0  nop
    ctx->pc = 0x1dc0a8u;
    // NOP
label_1dc0ac:
    // 0x1dc0ac: 0xe7c0ee64  swc1        $f0, -0x119C($fp)
    ctx->pc = 0x1dc0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294962788), bits); }
label_1dc0b0:
    // 0x1dc0b0: 0xc7ccee64  lwc1        $f12, -0x119C($fp)
    ctx->pc = 0x1dc0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dc0b4:
    // 0x1dc0b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1dc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1dc0b8:
    // 0x1dc0b8: 0x3c0145da  lui         $at, 0x45DA
    ctx->pc = 0x1dc0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17882 << 16));
label_1dc0bc:
    // 0x1dc0bc: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x1dc0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
label_1dc0c0:
    // 0x1dc0c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1dc0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dc0c4:
    // 0x1dc0c4: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x1dc0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1dc0c8:
    // 0x1dc0c8: 0x8c46d268  lw          $a2, -0x2D98($v0)
    ctx->pc = 0x1dc0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955624)));
label_1dc0cc:
    // 0x1dc0cc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1dc0ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc0d0:
    // 0x1dc0d0: 0x3c09000c  lui         $t1, 0xC
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12 << 16));
label_1dc0d4:
    // 0x1dc0d4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1dc0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1dc0d8:
    // 0x1dc0d8: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x1dc0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_1dc0dc:
    // 0x1dc0dc: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1dc0dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1dc0e0:
    // 0x1dc0e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1dc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1dc0e4:
    // 0x1dc0e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dc0e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0e8:
    // 0x1dc0e8: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1dc0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_1dc0ec:
    // 0x1dc0ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc0f0:
    // 0x1dc0f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1dc0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc0f4:
    // 0x1dc0f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dc0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0f8:
    // 0x1dc0f8: 0x26443a90  addiu       $a0, $s2, 0x3A90
    ctx->pc = 0x1dc0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14992));
label_1dc0fc:
    // 0x1dc0fc: 0xc06876e  jal         func_1A1DB8
label_1dc100:
    if (ctx->pc == 0x1DC100u) {
        ctx->pc = 0x1DC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0FCu;
        // 0x1dc100: 0x35290005  ori         $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC104u;
        goto label_1dc104;
    }
    ctx->pc = 0x1DC0FCu;
    SET_GPR_U32(ctx, 31, 0x1DC104u);
    ctx->pc = 0x1DC100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC0FCu;
    // 0x1dc100: 0x35290005  ori         $t1, $t1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1DC0FCu, 0x1DC104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC104u;
label_1dc104:
    // 0x1dc104: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1dc104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1dc108:
    // 0x1dc108: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dc108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1dc10c:
    // 0x1dc10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc110:
    // 0x1dc110: 0x264520d0  addiu       $a1, $s2, 0x20D0
    ctx->pc = 0x1dc110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
label_1dc114:
    // 0x1dc114: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1dc114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_1dc118:
    // 0x1dc118: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dc118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1dc11c:
    // 0x1dc11c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dc11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc120:
    // 0x1dc120: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1dc120u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1dc124:
    // 0x1dc124: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1dc124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1dc128:
    // 0x1dc128: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1dc128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1dc12c:
    // 0x1dc12c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1dc12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_1dc130:
    // 0x1dc130: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x1dc130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_1dc134:
    // 0x1dc134: 0xc500ee0c  lwc1        $f0, -0x11F4($t0)
    ctx->pc = 0x1dc134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc138:
    // 0x1dc138: 0x24f040c0  addiu       $s0, $a3, 0x40C0
    ctx->pc = 0x1dc138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16576));
label_1dc13c:
    // 0x1dc13c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1dc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1dc140:
    // 0x1dc140: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1dc140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc144:
    // 0x1dc144: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1dc144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1dc148:
    // 0x1dc148: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1dc148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dc14c:
    // 0x1dc14c: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1dc14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1dc150:
    // 0x1dc150: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1dc150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc154:
    // 0x1dc154: 0xc4415354  lwc1        $f1, 0x5354($v0)
    ctx->pc = 0x1dc154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc158:
    // 0x1dc158: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1dc158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dc15c:
    // 0x1dc15c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dc15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1dc160:
    // 0x1dc160: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc164:
    // 0x1dc164: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1dc164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1dc168:
    // 0x1dc168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc16c:
    // 0x1dc16c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1dc16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1dc170:
    // 0x1dc170: 0xc440ee04  lwc1        $f0, -0x11FC($v0)
    ctx->pc = 0x1dc170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc174:
    // 0x1dc174: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1dc174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1dc178:
    // 0x1dc178: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1dc178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1dc17c:
    // 0x1dc17c: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1dc17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1dc180:
    // 0x1dc180: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1dc180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1dc184:
    // 0x1dc184: 0xc07a0da  jal         func_1E8368
label_1dc188:
    if (ctx->pc == 0x1DC188u) {
        ctx->pc = 0x1DC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC184u;
        // 0x1dc188: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC18Cu;
        goto label_1dc18c;
    }
    ctx->pc = 0x1DC184u;
    SET_GPR_U32(ctx, 31, 0x1DC18Cu);
    ctx->pc = 0x1DC188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC184u;
    // 0x1dc188: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8368u, 0x1DC184u, 0x1DC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC18Cu;
label_1dc18c:
    // 0x1dc18c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1dc18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1dc190:
    // 0x1dc190: 0xc076e4a  jal         func_1DB928
label_1dc194:
    if (ctx->pc == 0x1DC194u) {
        ctx->pc = 0x1DC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC190u;
        // 0x1dc194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC198u;
        goto label_1dc198;
    }
    ctx->pc = 0x1DC190u;
    SET_GPR_U32(ctx, 31, 0x1DC198u);
    ctx->pc = 0x1DC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC190u;
    // 0x1dc194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB928u, 0x1DC190u, 0x1DC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC198u;
label_1dc198:
    // 0x1dc198: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x1dc198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1dc19c:
    // 0x1dc19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1a0:
    // 0x1dc1a0: 0xc07a17a  jal         func_1E85E8
label_1dc1a4:
    if (ctx->pc == 0x1DC1A4u) {
        ctx->pc = 0x1DC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1A0u;
        // 0x1dc1a4: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1A8u;
        goto label_1dc1a8;
    }
    ctx->pc = 0x1DC1A0u;
    SET_GPR_U32(ctx, 31, 0x1DC1A8u);
    ctx->pc = 0x1DC1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC1A0u;
    // 0x1dc1a4: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E85E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E85E8u, 0x1DC1A0u, 0x1DC1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1A8u;
label_1dc1a8:
    // 0x1dc1a8: 0x240200ba  addiu       $v0, $zero, 0xBA
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1dc1ac:
    // 0x1dc1ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1dc1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1dc1b0:
    // 0x1dc1b0: 0xa3a20084  sb          $v0, 0x84($sp)
    ctx->pc = 0x1dc1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 2));
label_1dc1b4:
    // 0x1dc1b4: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x1dc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_1dc1b8:
    // 0x1dc1b8: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1dc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1dc1bc:
    // 0x1dc1bc: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x1dc1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
label_1dc1c0:
    // 0x1dc1c0: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x1dc1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
label_1dc1c4:
    // 0x1dc1c4: 0xa2d10003  sb          $s1, 0x3($s6)
    ctx->pc = 0x1dc1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 17));
label_1dc1c8:
    // 0x1dc1c8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1dc1cc:
    // 0x1dc1cc: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_1dc1d0:
    if (ctx->pc == 0x1DC1D0u) {
        ctx->pc = 0x1DC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1CCu;
        // 0x1dc1d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1D4u;
        goto label_1dc1d4;
    }
    ctx->pc = 0x1DC1CCu;
    {
        const bool branch_taken_0x1dc1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1CCu;
        // 0x1dc1d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1cc) {
            ctx->pc = 0x1DC1F8u;
            goto label_1dc1f8;
        }
    }
    ctx->pc = 0x1DC1D4u;
label_1dc1d4:
    // 0x1dc1d4: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x1dc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1dc1d8:
    // 0x1dc1d8: 0xa3a00088  sb          $zero, 0x88($sp)
    ctx->pc = 0x1dc1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 0));
label_1dc1dc:
    // 0x1dc1dc: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x1dc1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_1dc1e0:
    // 0x1dc1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1e4:
    // 0x1dc1e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1e8:
    // 0x1dc1e8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1dc1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1dc1ec:
    // 0x1dc1ec: 0xc07a196  jal         func_1E8658
label_1dc1f0:
    if (ctx->pc == 0x1DC1F0u) {
        ctx->pc = 0x1DC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1ECu;
        // 0x1dc1f0: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1F4u;
        goto label_1dc1f4;
    }
    ctx->pc = 0x1DC1ECu;
    SET_GPR_U32(ctx, 31, 0x1DC1F4u);
    ctx->pc = 0x1DC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC1ECu;
    // 0x1dc1f0: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8658u, 0x1DC1ECu, 0x1DC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1F4u;
label_1dc1f4:
    // 0x1dc1f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1dc1f8:
    // 0x1dc1f8: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1dc1fc:
    // 0x1dc1fc: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_1dc200:
    // 0x1dc200: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1dc204:
    if (ctx->pc == 0x1DC204u) {
        ctx->pc = 0x1DC208u;
        goto label_1dc208;
    }
    ctx->pc = 0x1DC200u;
    {
        const bool branch_taken_0x1dc200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc200) {
            ctx->pc = 0x1DC248u;
            goto label_1dc248;
        }
    }
    ctx->pc = 0x1DC208u;
label_1dc208:
    // 0x1dc208: 0xae5e3a78  sw          $fp, 0x3A78($s2)
    ctx->pc = 0x1dc208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14968), GPR_U32(ctx, 30));
label_1dc20c:
    // 0x1dc20c: 0xc067b9c  jal         func_19EE70
label_1dc210:
    if (ctx->pc == 0x1DC210u) {
        ctx->pc = 0x1DC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC20Cu;
        // 0x1dc210: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC214u;
        goto label_1dc214;
    }
    ctx->pc = 0x1DC20Cu;
    SET_GPR_U32(ctx, 31, 0x1DC214u);
    ctx->pc = 0x1DC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC20Cu;
    // 0x1dc210: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC20Cu, 0x1DC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC214u;
label_1dc214:
    // 0x1dc214: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1dc218:
    // 0x1dc218: 0xc079f96  jal         func_1E7E58
label_1dc21c:
    if (ctx->pc == 0x1DC21Cu) {
        ctx->pc = 0x1DC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC218u;
        // 0x1dc21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC220u;
        goto label_1dc220;
    }
    ctx->pc = 0x1DC218u;
    SET_GPR_U32(ctx, 31, 0x1DC220u);
    ctx->pc = 0x1DC21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC218u;
    // 0x1dc21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DC218u, 0x1DC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC220u;
label_1dc220:
    // 0x1dc220: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1dc224:
    // 0x1dc224: 0xc079f9e  jal         func_1E7E78
label_1dc228:
    if (ctx->pc == 0x1DC228u) {
        ctx->pc = 0x1DC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC224u;
        // 0x1dc228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC22Cu;
        goto label_1dc22c;
    }
    ctx->pc = 0x1DC224u;
    SET_GPR_U32(ctx, 31, 0x1DC22Cu);
    ctx->pc = 0x1DC228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC224u;
    // 0x1dc228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DC224u, 0x1DC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC22Cu;
label_1dc22c:
    // 0x1dc22c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc230:
    // 0x1dc230: 0x8c45ecec  lw          $a1, -0x1314($v0)
    ctx->pc = 0x1dc230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1dc234:
    // 0x1dc234: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dc234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dc238:
    // 0x1dc238: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1dc238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1dc23c:
    // 0x1dc23c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1dc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1dc240:
    // 0x1dc240: 0x40f809  jalr        $v0
label_1dc244:
    if (ctx->pc == 0x1DC244u) {
        ctx->pc = 0x1DC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC240u;
        // 0x1dc244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC248u;
        goto label_1dc248;
    }
    ctx->pc = 0x1DC240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC248u);
        ctx->pc = 0x1DC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC240u;
        // 0x1dc244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC240u, 0x1DC248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC248u;
label_1dc248:
    // 0x1dc248: 0xc047e6c  jal         func_11F9B0
label_1dc24c:
    if (ctx->pc == 0x1DC24Cu) {
        ctx->pc = 0x1DC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC248u;
        // 0x1dc24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC250u;
        goto label_1dc250;
    }
    ctx->pc = 0x1DC248u;
    SET_GPR_U32(ctx, 31, 0x1DC250u);
    ctx->pc = 0x1DC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC248u;
    // 0x1dc24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1DC248u, 0x1DC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC250u;
label_1dc250:
    // 0x1dc250: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dc254:
    if (ctx->pc == 0x1DC254u) {
        ctx->pc = 0x1DC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC250u;
        // 0x1dc254: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC258u;
        goto label_1dc258;
    }
    ctx->pc = 0x1DC250u;
    {
        const bool branch_taken_0x1dc250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC250u;
        // 0x1dc254: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc250) {
            ctx->pc = 0x1DC2B4u;
            goto label_1dc2b4;
        }
    }
    ctx->pc = 0x1DC258u;
label_1dc258:
    // 0x1dc258: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1dc25c:
    // 0x1dc25c: 0x8c85cdb4  lw          $a1, -0x324C($a0)
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_1dc260:
    // 0x1dc260: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1dc264:
    // 0x1dc264: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1dc264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1dc268:
    // 0x1dc268: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1dc268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1dc26c:
    // 0x1dc26c: 0x60f809  jalr        $v1
label_1dc270:
    if (ctx->pc == 0x1DC270u) {
        ctx->pc = 0x1DC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC26Cu;
        // 0x1dc270: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC274u;
        goto label_1dc274;
    }
    ctx->pc = 0x1DC26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC274u);
        ctx->pc = 0x1DC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC26Cu;
        // 0x1dc270: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC26Cu, 0x1DC274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC274u;
label_1dc274:
    // 0x1dc274: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1dc274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1dc278:
    // 0x1dc278: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1dc278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1dc27c:
    // 0x1dc27c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1dc27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1dc280:
    // 0x1dc280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dc280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc284:
    // 0x1dc284: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1dc284u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1dc288:
    // 0x1dc288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dc28c:
    // 0x1dc28c: 0x0  nop
    ctx->pc = 0x1dc28cu;
    // NOP
label_1dc290:
    // 0x1dc290: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1dc294:
    if (ctx->pc == 0x1DC294u) {
        ctx->pc = 0x1DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC290u;
        // 0x1dc294: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC298u;
        goto label_1dc298;
    }
    ctx->pc = 0x1DC290u;
    {
        const bool branch_taken_0x1dc290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC290u;
        // 0x1dc294: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc290) {
            ctx->pc = 0x1DC2B0u;
            goto label_1dc2b0;
        }
    }
    ctx->pc = 0x1DC298u;
label_1dc298:
    // 0x1dc298: 0x8cc5cdb4  lw          $a1, -0x324C($a2)
    ctx->pc = 0x1dc298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954420)));
label_1dc29c:
    // 0x1dc29c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1dc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1dc2a0:
    // 0x1dc2a0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1dc2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1dc2a4:
    // 0x1dc2a4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1dc2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1dc2a8:
    // 0x1dc2a8: 0x60f809  jalr        $v1
label_1dc2ac:
    if (ctx->pc == 0x1DC2ACu) {
        ctx->pc = 0x1DC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2A8u;
        // 0x1dc2ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2B0u;
        goto label_1dc2b0;
    }
    ctx->pc = 0x1DC2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC2B0u);
        ctx->pc = 0x1DC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2A8u;
        // 0x1dc2ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC2A8u, 0x1DC2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC2B0u;
label_1dc2b0:
    // 0x1dc2b0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1dc2b4:
    // 0x1dc2b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1dc2b8:
    // 0x1dc2b8: 0xc4e0ee0c  lwc1        $f0, -0x11F4($a3)
    ctx->pc = 0x1dc2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc2bc:
    // 0x1dc2bc: 0x3c0a000c  lui         $t2, 0xC
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12 << 16));
label_1dc2c0:
    // 0x1dc2c0: 0xc4415358  lwc1        $f1, 0x5358($v0)
    ctx->pc = 0x1dc2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc2c4:
    // 0x1dc2c4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_1dc2c8:
    // 0x1dc2c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dc2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1dc2cc:
    // 0x1dc2cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc2d0:
    // 0x1dc2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dc2d4:
    // 0x1dc2d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dc2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dc2d8:
    // 0x1dc2d8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1dc2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2dc:
    // 0x1dc2dc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1dc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1dc2e0:
    // 0x1dc2e0: 0x26452430  addiu       $a1, $s2, 0x2430
    ctx->pc = 0x1dc2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
label_1dc2e4:
    // 0x1dc2e4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1dc2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1dc2e8:
    // 0x1dc2e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1dc2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2ec:
    // 0x1dc2ec: 0xc440ee08  lwc1        $f0, -0x11F8($v0)
    ctx->pc = 0x1dc2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc2f0:
    // 0x1dc2f0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1dc2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2f4:
    // 0x1dc2f4: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1dc2f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1dc2f8:
    // 0x1dc2f8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dc2fc:
    // 0x1dc2fc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1dc2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1dc300:
    // 0x1dc300: 0x354a0003  ori         $t2, $t2, 0x3
    ctx->pc = 0x1dc300u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)3);
label_1dc304:
    // 0x1dc304: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1dc304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1dc308:
    // 0x1dc308: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1dc308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_1dc30c:
    // 0x1dc30c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1dc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1dc310:
    // 0x1dc310: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1dc310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1dc314:
    // 0x1dc314: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dc314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1dc318:
    // 0x1dc318: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1dc318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1dc31c:
    // 0x1dc31c: 0x8e4c2af4  lw          $t4, 0x2AF4($s2)
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dc320:
    // 0x1dc320: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1dc324:
    // 0x1dc324: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1dc328:
    // 0x1dc328: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1dc32c:
    // 0x1dc32c: 0x60f809  jalr        $v1
label_1dc330:
    if (ctx->pc == 0x1DC330u) {
        ctx->pc = 0x1DC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC32Cu;
        // 0x1dc330: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC334u;
        goto label_1dc334;
    }
    ctx->pc = 0x1DC32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC334u);
        ctx->pc = 0x1DC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC32Cu;
        // 0x1dc330: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC32Cu, 0x1DC334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC334u;
label_1dc334:
    // 0x1dc334: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1dc334u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1dc338:
    // 0x1dc338: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1dc338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1dc33c:
    // 0x1dc33c: 0xc500ee0c  lwc1        $f0, -0x11F4($t0)
    ctx->pc = 0x1dc33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc340:
    // 0x1dc340: 0x3c0a000c  lui         $t2, 0xC
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12 << 16));
label_1dc344:
    // 0x1dc344: 0xc4415350  lwc1        $f1, 0x5350($v0)
    ctx->pc = 0x1dc344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc348:
    // 0x1dc348: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_1dc34c:
    // 0x1dc34c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dc34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1dc350:
    // 0x1dc350: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc354:
    // 0x1dc354: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1dc354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1dc358:
    // 0x1dc358: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1dc358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dc35c:
    // 0x1dc35c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1dc35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1dc360:
    // 0x1dc360: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1dc360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc364:
    // 0x1dc364: 0xc440ee00  lwc1        $f0, -0x1200($v0)
    ctx->pc = 0x1dc364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc368:
    // 0x1dc368: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1dc368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dc36c:
    // 0x1dc36c: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1dc36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1dc370:
    // 0x1dc370: 0x354a0003  ori         $t2, $t2, 0x3
    ctx->pc = 0x1dc370u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)3);
label_1dc374:
    // 0x1dc374: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1dc374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1dc378:
    // 0x1dc378: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1dc378u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_1dc37c:
    // 0x1dc37c: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1dc37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1dc380:
    // 0x1dc380: 0x26452790  addiu       $a1, $s2, 0x2790
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10128));
label_1dc384:
    // 0x1dc384: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1dc384u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1dc388:
    // 0x1dc388: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1dc388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc38c:
    // 0x1dc38c: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1dc38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1dc390:
    // 0x1dc390: 0x8e4c2af8  lw          $t4, 0x2AF8($s2)
    ctx->pc = 0x1dc390u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dc394:
    // 0x1dc394: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1dc394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1dc398:
    // 0x1dc398: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1dc398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1dc39c:
    // 0x1dc39c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1dc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1dc3a0:
    // 0x1dc3a0: 0x60f809  jalr        $v1
label_1dc3a4:
    if (ctx->pc == 0x1DC3A4u) {
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3A8u;
        goto label_1dc3a8;
    }
    ctx->pc = 0x1DC3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC3A8u);
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC3A0u, 0x1DC3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC3A8u;
label_1dc3a8:
    // 0x1dc3a8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1dc3ac:
    // 0x1dc3ac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1dc3acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1dc3b0:
    // 0x1dc3b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc3b4:
    // 0x1dc3b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dc3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc3b8:
    // 0x1dc3b8: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1dc3b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1dc3bc:
    // 0x1dc3bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc3c0:
    // 0x1dc3c0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1dc3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1dc3c4:
    // 0x1dc3c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc3c8:
    // 0x1dc3c8: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1dc3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1dc3cc:
    // 0x1dc3cc: 0xc048b52  jal         func_122D48
label_1dc3d0:
    if (ctx->pc == 0x1DC3D0u) {
        ctx->pc = 0x1DC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3CCu;
        // 0x1dc3d0: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3D4u;
        goto label_1dc3d4;
    }
    ctx->pc = 0x1DC3CCu;
    SET_GPR_U32(ctx, 31, 0x1DC3D4u);
    ctx->pc = 0x1DC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3CCu;
    // 0x1dc3d0: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1DC3CCu, 0x1DC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3D4u;
label_1dc3d4:
    // 0x1dc3d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc3d8:
    // 0x1dc3d8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1dc3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1dc3dc:
    // 0x1dc3dc: 0xc440ee0c  lwc1        $f0, -0x11F4($v0)
    ctx->pc = 0x1dc3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc3e0:
    // 0x1dc3e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dc3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc3e4:
    // 0x1dc3e4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1dc3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1dc3e8:
    // 0x1dc3e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc3ec:
    // 0x1dc3ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dc3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1dc3f0:
    // 0x1dc3f0: 0x26442dd0  addiu       $a0, $s2, 0x2DD0
    ctx->pc = 0x1dc3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11728));
label_1dc3f4:
    // 0x1dc3f4: 0xc073ad0  jal         func_1CEB40
label_1dc3f8:
    if (ctx->pc == 0x1DC3F8u) {
        ctx->pc = 0x1DC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F4u;
        // 0x1dc3f8: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3FCu;
        goto label_1dc3fc;
    }
    ctx->pc = 0x1DC3F4u;
    SET_GPR_U32(ctx, 31, 0x1DC3FCu);
    ctx->pc = 0x1DC3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3F4u;
    // 0x1dc3f8: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1DC3F4u, 0x1DC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3FCu;
label_1dc3fc:
    // 0x1dc3fc: 0xc07928c  jal         func_1E4A30
label_1dc400:
    if (ctx->pc == 0x1DC400u) {
        ctx->pc = 0x1DC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3FCu;
        // 0x1dc400: 0x264430a0  addiu       $a0, $s2, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC404u;
        goto label_1dc404;
    }
    ctx->pc = 0x1DC3FCu;
    SET_GPR_U32(ctx, 31, 0x1DC404u);
    ctx->pc = 0x1DC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3FCu;
    // 0x1dc400: 0x264430a0  addiu       $a0, $s2, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4A30u, 0x1DC3FCu, 0x1DC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC404u;
label_1dc404:
    // 0x1dc404: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1dc404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1dc408:
    // 0x1dc408: 0x24466498  addiu       $a2, $v0, 0x6498
    ctx->pc = 0x1dc408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25752));
label_1dc40c:
    // 0x1dc40c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1dc40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1dc410:
    // 0x1dc410: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1dc410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1dc414:
    // 0x1dc414: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x1dc414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dc418:
    // 0x1dc418: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x1dc418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dc41c:
    // 0x1dc41c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc420:
    // 0x1dc420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc424:
    // 0x1dc424: 0xc440ee28  lwc1        $f0, -0x11D8($v0)
    ctx->pc = 0x1dc424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc428:
    // 0x1dc428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc42c:
    // 0x1dc42c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1dc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1dc430:
    // 0x1dc430: 0x244464a0  addiu       $a0, $v0, 0x64A0
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
label_1dc434:
    // 0x1dc434: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x1dc434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1dc438:
    // 0x1dc438: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x1dc438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1dc43c:
    // 0x1dc43c: 0xb3a70077  sdl         $a3, 0x77($sp)
    ctx->pc = 0x1dc43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dc440:
    // 0x1dc440: 0xb7a70070  sdr         $a3, 0x70($sp)
    ctx->pc = 0x1dc440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dc444:
    // 0x1dc444: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1dc444u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1dc448:
    // 0x1dc448: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dc448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc44c:
    // 0x1dc44c: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1dc44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1dc450:
    // 0x1dc450: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1dc450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1dc454:
    // 0x1dc454: 0xc048b52  jal         func_122D48
label_1dc458:
    if (ctx->pc == 0x1DC458u) {
        ctx->pc = 0x1DC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC454u;
        // 0x1dc458: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC45Cu;
        goto label_1dc45c;
    }
    ctx->pc = 0x1DC454u;
    SET_GPR_U32(ctx, 31, 0x1DC45Cu);
    ctx->pc = 0x1DC458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC454u;
    // 0x1dc458: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1DC454u, 0x1DC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC45Cu;
label_1dc45c:
    // 0x1dc45c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1dc45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1dc460:
    // 0x1dc460: 0x8cb1489c  lw          $s1, 0x489C($a1)
    ctx->pc = 0x1dc460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_1dc464:
    // 0x1dc464: 0xc136ad6  jal         func_4DAB58
label_1dc468:
    if (ctx->pc == 0x1DC468u) {
        ctx->pc = 0x1DC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC464u;
        // 0x1dc468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC46Cu;
        goto label_1dc46c;
    }
    ctx->pc = 0x1DC464u;
    SET_GPR_U32(ctx, 31, 0x1DC46Cu);
    ctx->pc = 0x1DC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC464u;
    // 0x1dc468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1DC464u, 0x1DC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC46Cu;
label_1dc46c:
    // 0x1dc46c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc470:
    // 0x1dc470: 0xc136ad4  jal         func_4DAB50
label_1dc474:
    if (ctx->pc == 0x1DC474u) {
        ctx->pc = 0x1DC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC470u;
        // 0x1dc474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC478u;
        goto label_1dc478;
    }
    ctx->pc = 0x1DC470u;
    SET_GPR_U32(ctx, 31, 0x1DC478u);
    ctx->pc = 0x1DC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC470u;
    // 0x1dc474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1DC470u, 0x1DC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC478u;
label_1dc478:
    // 0x1dc478: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1dc47c:
    // 0x1dc47c: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x1dc47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_1dc480:
    // 0x1dc480: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1dc480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dc484:
    // 0x1dc484: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1dc484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc488:
    // 0x1dc488: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dc488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dc48c:
    // 0x1dc48c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_1dc490:
    if (ctx->pc == 0x1DC490u) {
        ctx->pc = 0x1DC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC48Cu;
        // 0x1dc490: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC494u;
        goto label_1dc494;
    }
    ctx->pc = 0x1DC48Cu;
    {
        const bool branch_taken_0x1dc48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC48Cu;
        // 0x1dc490: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc48c) {
            ctx->pc = 0x1DC4A4u;
            goto label_1dc4a4;
        }
    }
    ctx->pc = 0x1DC494u;
label_1dc494:
    // 0x1dc494: 0xc107458  jal         func_41D160
label_1dc498:
    if (ctx->pc == 0x1DC498u) {
        ctx->pc = 0x1DC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC494u;
        // 0x1dc498: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC49Cu;
        goto label_1dc49c;
    }
    ctx->pc = 0x1DC494u;
    SET_GPR_U32(ctx, 31, 0x1DC49Cu);
    ctx->pc = 0x1DC498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC494u;
    // 0x1dc498: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DC494u, 0x1DC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC49Cu;
label_1dc49c:
    // 0x1dc49c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dc4a0:
    if (ctx->pc == 0x1DC4A0u) {
        ctx->pc = 0x1DC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC49Cu;
        // 0x1dc4a0: 0x26502b00  addiu       $s0, $s2, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4A4u;
        goto label_1dc4a4;
    }
    ctx->pc = 0x1DC49Cu;
    {
        const bool branch_taken_0x1dc49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC49Cu;
        // 0x1dc4a0: 0x26502b00  addiu       $s0, $s2, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc49c) {
            ctx->pc = 0x1DC4C8u;
            goto label_1dc4c8;
        }
    }
    ctx->pc = 0x1DC4A4u;
label_1dc4a4:
    // 0x1dc4a4: 0x26502b00  addiu       $s0, $s2, 0x2B00
    ctx->pc = 0x1dc4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
label_1dc4a8:
    // 0x1dc4a8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1dc4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dc4ac:
    // 0x1dc4ac: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1dc4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1dc4b0:
    // 0x1dc4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4b4:
    // 0x1dc4b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc4b8:
    // 0x1dc4b8: 0xc075044  jal         func_1D4110
label_1dc4bc:
    if (ctx->pc == 0x1DC4BCu) {
        ctx->pc = 0x1DC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4B8u;
        // 0x1dc4bc: 0x26470040  addiu       $a3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4C0u;
        goto label_1dc4c0;
    }
    ctx->pc = 0x1DC4B8u;
    SET_GPR_U32(ctx, 31, 0x1DC4C0u);
    ctx->pc = 0x1DC4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4B8u;
    // 0x1dc4bc: 0x26470040  addiu       $a3, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1DC4B8u, 0x1DC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4C0u;
label_1dc4c0:
    // 0x1dc4c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dc4c4:
    if (ctx->pc == 0x1DC4C4u) {
        ctx->pc = 0x1DC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4C0u;
        // 0x1dc4c4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4C8u;
        goto label_1dc4c8;
    }
    ctx->pc = 0x1DC4C0u;
    {
        const bool branch_taken_0x1dc4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4C0u;
        // 0x1dc4c4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4c0) {
            ctx->pc = 0x1DC4E4u;
            goto label_1dc4e4;
        }
    }
    ctx->pc = 0x1DC4C8u;
label_1dc4c8:
    // 0x1dc4c8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1dc4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dc4cc:
    // 0x1dc4cc: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1dc4d0:
    // 0x1dc4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4d4:
    // 0x1dc4d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc4d8:
    // 0x1dc4d8: 0xc075044  jal         func_1D4110
label_1dc4dc:
    if (ctx->pc == 0x1DC4DCu) {
        ctx->pc = 0x1DC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4D8u;
        // 0x1dc4dc: 0x26470040  addiu       $a3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4E0u;
        goto label_1dc4e0;
    }
    ctx->pc = 0x1DC4D8u;
    SET_GPR_U32(ctx, 31, 0x1DC4E0u);
    ctx->pc = 0x1DC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D8u;
    // 0x1dc4dc: 0x26470040  addiu       $a3, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1DC4D8u, 0x1DC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E0u;
label_1dc4e0:
    // 0x1dc4e0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1dc4e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4e4:
    // 0x1dc4e4: 0x8e451bc0  lw          $a1, 0x1BC0($s2)
    ctx->pc = 0x1dc4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7104)));
label_1dc4e8:
    // 0x1dc4e8: 0xc075080  jal         func_1D4200
label_1dc4ec:
    if (ctx->pc == 0x1DC4ECu) {
        ctx->pc = 0x1DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E8u;
        // 0x1dc4ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4F0u;
        goto label_1dc4f0;
    }
    ctx->pc = 0x1DC4E8u;
    SET_GPR_U32(ctx, 31, 0x1DC4F0u);
    ctx->pc = 0x1DC4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4E8u;
    // 0x1dc4ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4200u, 0x1DC4E8u, 0x1DC4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4F0u;
label_1dc4f0:
    // 0x1dc4f0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1dc4f4:
    // 0x1dc4f4: 0xc107458  jal         func_41D160
label_1dc4f8:
    if (ctx->pc == 0x1DC4F8u) {
        ctx->pc = 0x1DC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F4u;
        // 0x1dc4f8: 0x8ce4489c  lw          $a0, 0x489C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4FCu;
        goto label_1dc4fc;
    }
    ctx->pc = 0x1DC4F4u;
    SET_GPR_U32(ctx, 31, 0x1DC4FCu);
    ctx->pc = 0x1DC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4F4u;
    // 0x1dc4f8: 0x8ce4489c  lw          $a0, 0x489C($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DC4F4u, 0x1DC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4FCu;
label_1dc4fc:
    // 0x1dc4fc: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
label_1dc500:
    if (ctx->pc == 0x1DC500u) {
        ctx->pc = 0x1DC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FCu;
        // 0x1dc500: 0x240400fa  addiu       $a0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC504u;
        goto label_1dc504;
    }
    ctx->pc = 0x1DC4FCu;
    {
        const bool branch_taken_0x1dc4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4fc) {
            ctx->pc = 0x1DC500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC4FCu;
            // 0x1dc500: 0x240400fa  addiu       $a0, $zero, 0xFA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC680u;
            goto label_1dc680;
        }
    }
    ctx->pc = 0x1DC504u;
label_1dc504:
    // 0x1dc504: 0x240400fb  addiu       $a0, $zero, 0xFB
    ctx->pc = 0x1dc504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_1dc508:
    // 0x1dc508: 0xc067b9c  jal         func_19EE70
label_1dc50c:
    if (ctx->pc == 0x1DC50Cu) {
        ctx->pc = 0x1DC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC508u;
        // 0x1dc50c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC510u;
        goto label_1dc510;
    }
    ctx->pc = 0x1DC508u;
    SET_GPR_U32(ctx, 31, 0x1DC510u);
    ctx->pc = 0x1DC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC508u;
    // 0x1dc50c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC508u, 0x1DC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC510u;
label_1dc510:
    // 0x1dc510: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x1dc510u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_1dc514:
    // 0x1dc514: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc518:
    // 0x1dc518: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc51c:
    // 0x1dc51c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc520:
    // 0x1dc520: 0x8d10d320  lw          $s0, -0x2CE0($t0)
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294955808)));
label_1dc524:
    // 0x1dc524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc528:
    // 0x1dc528: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1dc528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1dc52c:
    // 0x1dc52c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc530:
    // 0x1dc530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc534:
    // 0x1dc534: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc538:
    // 0x1dc538: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc53c:
    // 0x1dc53c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1dc53cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc540:
    // 0x1dc540: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc540u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc544:
    // 0x1dc544: 0xc07508c  jal         func_1D4230
label_1dc548:
    if (ctx->pc == 0x1DC548u) {
        ctx->pc = 0x1DC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC544u;
        // 0x1dc548: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC54Cu;
        goto label_1dc54c;
    }
    ctx->pc = 0x1DC544u;
    SET_GPR_U32(ctx, 31, 0x1DC54Cu);
    ctx->pc = 0x1DC548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC544u;
    // 0x1dc548: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC544u, 0x1DC54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC54Cu;
label_1dc54c:
    // 0x1dc54c: 0xc067b9c  jal         func_19EE70
label_1dc550:
    if (ctx->pc == 0x1DC550u) {
        ctx->pc = 0x1DC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC54Cu;
        // 0x1dc550: 0x240400f7  addiu       $a0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC554u;
        goto label_1dc554;
    }
    ctx->pc = 0x1DC54Cu;
    SET_GPR_U32(ctx, 31, 0x1DC554u);
    ctx->pc = 0x1DC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC54Cu;
    // 0x1dc550: 0x240400f7  addiu       $a0, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC54Cu, 0x1DC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC554u;
label_1dc554:
    // 0x1dc554: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc558:
    // 0x1dc558: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc55c:
    // 0x1dc55c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc560:
    // 0x1dc560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc564:
    // 0x1dc564: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1dc564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1dc568:
    // 0x1dc568: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc56c:
    // 0x1dc56c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc570:
    // 0x1dc570: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc574:
    // 0x1dc574: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc578:
    // 0x1dc578: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc57c:
    // 0x1dc57c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc57cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc580:
    // 0x1dc580: 0xc07508c  jal         func_1D4230
label_1dc584:
    if (ctx->pc == 0x1DC584u) {
        ctx->pc = 0x1DC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC580u;
        // 0x1dc584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC588u;
        goto label_1dc588;
    }
    ctx->pc = 0x1DC580u;
    SET_GPR_U32(ctx, 31, 0x1DC588u);
    ctx->pc = 0x1DC584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC580u;
    // 0x1dc584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC580u, 0x1DC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC588u;
label_1dc588:
    // 0x1dc588: 0xc067b9c  jal         func_19EE70
label_1dc58c:
    if (ctx->pc == 0x1DC58Cu) {
        ctx->pc = 0x1DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC588u;
        // 0x1dc58c: 0x240400f9  addiu       $a0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC590u;
        goto label_1dc590;
    }
    ctx->pc = 0x1DC588u;
    SET_GPR_U32(ctx, 31, 0x1DC590u);
    ctx->pc = 0x1DC58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC588u;
    // 0x1dc58c: 0x240400f9  addiu       $a0, $zero, 0xF9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC588u, 0x1DC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC590u;
label_1dc590:
    // 0x1dc590: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc594:
    // 0x1dc594: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc598:
    // 0x1dc598: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc59c:
    // 0x1dc59c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5a0:
    // 0x1dc5a0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1dc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1dc5a4:
    // 0x1dc5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5a8:
    // 0x1dc5a8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc5ac:
    // 0x1dc5ac: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc5b0:
    // 0x1dc5b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc5b4:
    // 0x1dc5b4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1dc5b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5b8:
    // 0x1dc5b8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc5bc:
    // 0x1dc5bc: 0xc07508c  jal         func_1D4230
label_1dc5c0:
    if (ctx->pc == 0x1DC5C0u) {
        ctx->pc = 0x1DC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5BCu;
        // 0x1dc5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5C4u;
        goto label_1dc5c4;
    }
    ctx->pc = 0x1DC5BCu;
    SET_GPR_U32(ctx, 31, 0x1DC5C4u);
    ctx->pc = 0x1DC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC5BCu;
    // 0x1dc5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC5BCu, 0x1DC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5C4u;
label_1dc5c4:
    // 0x1dc5c4: 0xc067b9c  jal         func_19EE70
label_1dc5c8:
    if (ctx->pc == 0x1DC5C8u) {
        ctx->pc = 0x1DC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5C4u;
        // 0x1dc5c8: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5CCu;
        goto label_1dc5cc;
    }
    ctx->pc = 0x1DC5C4u;
    SET_GPR_U32(ctx, 31, 0x1DC5CCu);
    ctx->pc = 0x1DC5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC5C4u;
    // 0x1dc5c8: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC5C4u, 0x1DC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5CCu;
label_1dc5cc:
    // 0x1dc5cc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc5d0:
    // 0x1dc5d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc5d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc5d4:
    // 0x1dc5d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc5d8:
    // 0x1dc5d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5dc:
    // 0x1dc5dc: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1dc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1dc5e0:
    // 0x1dc5e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc5e4:
    // 0x1dc5e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc5e8:
    // 0x1dc5e8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc5ec:
    // 0x1dc5ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc5f0:
    // 0x1dc5f0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1dc5f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5f4:
    // 0x1dc5f4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc5f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc5f8:
    // 0x1dc5f8: 0xc07508c  jal         func_1D4230
label_1dc5fc:
    if (ctx->pc == 0x1DC5FCu) {
        ctx->pc = 0x1DC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5F8u;
        // 0x1dc5fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC600u;
        goto label_1dc600;
    }
    ctx->pc = 0x1DC5F8u;
    SET_GPR_U32(ctx, 31, 0x1DC600u);
    ctx->pc = 0x1DC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC5F8u;
    // 0x1dc5fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC5F8u, 0x1DC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC600u;
label_1dc600:
    // 0x1dc600: 0xc067b9c  jal         func_19EE70
label_1dc604:
    if (ctx->pc == 0x1DC604u) {
        ctx->pc = 0x1DC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC600u;
        // 0x1dc604: 0x240400fc  addiu       $a0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC608u;
        goto label_1dc608;
    }
    ctx->pc = 0x1DC600u;
    SET_GPR_U32(ctx, 31, 0x1DC608u);
    ctx->pc = 0x1DC604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC600u;
    // 0x1dc604: 0x240400fc  addiu       $a0, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC600u, 0x1DC608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC608u;
label_1dc608:
    // 0x1dc608: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc60c:
    // 0x1dc60c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc610:
    // 0x1dc610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc614:
    // 0x1dc614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc618:
    // 0x1dc618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc61c:
    // 0x1dc61c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dc620:
    // 0x1dc620: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc624:
    // 0x1dc624: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc628:
    // 0x1dc628: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1dc628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc62c:
    // 0x1dc62c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc62cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc630:
    // 0x1dc630: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1dc630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1dc634:
    // 0x1dc634: 0xc07508c  jal         func_1D4230
label_1dc638:
    if (ctx->pc == 0x1DC638u) {
        ctx->pc = 0x1DC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC634u;
        // 0x1dc638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC63Cu;
        goto label_1dc63c;
    }
    ctx->pc = 0x1DC634u;
    SET_GPR_U32(ctx, 31, 0x1DC63Cu);
    ctx->pc = 0x1DC638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC634u;
    // 0x1dc638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC634u, 0x1DC63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC63Cu;
label_1dc63c:
    // 0x1dc63c: 0xc067b9c  jal         func_19EE70
label_1dc640:
    if (ctx->pc == 0x1DC640u) {
        ctx->pc = 0x1DC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC63Cu;
        // 0x1dc640: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC644u;
        goto label_1dc644;
    }
    ctx->pc = 0x1DC63Cu;
    SET_GPR_U32(ctx, 31, 0x1DC644u);
    ctx->pc = 0x1DC640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC63Cu;
    // 0x1dc640: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC63Cu, 0x1DC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC644u;
label_1dc644:
    // 0x1dc644: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc648:
    // 0x1dc648: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc64c:
    // 0x1dc64c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc650:
    // 0x1dc650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc654:
    // 0x1dc654: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1dc654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1dc658:
    // 0x1dc658: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1dc658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc65c:
    // 0x1dc65c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dc65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc660:
    // 0x1dc660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc664:
    // 0x1dc664: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1dc664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dc668:
    // 0x1dc668: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc66c:
    // 0x1dc66c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc670:
    // 0x1dc670: 0xc07508c  jal         func_1D4230
label_1dc674:
    if (ctx->pc == 0x1DC674u) {
        ctx->pc = 0x1DC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC670u;
        // 0x1dc674: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC678u;
        goto label_1dc678;
    }
    ctx->pc = 0x1DC670u;
    SET_GPR_U32(ctx, 31, 0x1DC678u);
    ctx->pc = 0x1DC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC670u;
    // 0x1dc674: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC670u, 0x1DC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC678u;
label_1dc678:
    // 0x1dc678: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1dc67c:
    if (ctx->pc == 0x1DC67Cu) {
        ctx->pc = 0x1DC680u;
        goto label_1dc680;
    }
    ctx->pc = 0x1DC678u;
    {
        const bool branch_taken_0x1dc678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc678) {
            ctx->pc = 0x1DC864u;
            goto label_1dc864;
        }
    }
    ctx->pc = 0x1DC680u;
label_1dc680:
    // 0x1dc680: 0xc067b9c  jal         func_19EE70
label_1dc684:
    if (ctx->pc == 0x1DC684u) {
        ctx->pc = 0x1DC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC680u;
        // 0x1dc684: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC688u;
        goto label_1dc688;
    }
    ctx->pc = 0x1DC680u;
    SET_GPR_U32(ctx, 31, 0x1DC688u);
    ctx->pc = 0x1DC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC680u;
    // 0x1dc684: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC680u, 0x1DC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC688u;
label_1dc688:
    // 0x1dc688: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1dc68c:
    // 0x1dc68c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc690:
    // 0x1dc690: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc694:
    // 0x1dc694: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc698:
    // 0x1dc698: 0x8c74d320  lw          $s4, -0x2CE0($v1)
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1dc69c:
    // 0x1dc69c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6a0:
    // 0x1dc6a0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc6a4:
    // 0x1dc6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6a8:
    // 0x1dc6a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6ac:
    // 0x1dc6ac: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc6b0:
    // 0x1dc6b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6b4:
    // 0x1dc6b4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc6b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6b8:
    // 0x1dc6b8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc6b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc6bc:
    // 0x1dc6bc: 0xc07508c  jal         func_1D4230
label_1dc6c0:
    if (ctx->pc == 0x1DC6C0u) {
        ctx->pc = 0x1DC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6BCu;
        // 0x1dc6c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6C4u;
        goto label_1dc6c4;
    }
    ctx->pc = 0x1DC6BCu;
    SET_GPR_U32(ctx, 31, 0x1DC6C4u);
    ctx->pc = 0x1DC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6BCu;
    // 0x1dc6c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC6BCu, 0x1DC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6C4u;
label_1dc6c4:
    // 0x1dc6c4: 0xc067b9c  jal         func_19EE70
label_1dc6c8:
    if (ctx->pc == 0x1DC6C8u) {
        ctx->pc = 0x1DC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6C4u;
        // 0x1dc6c8: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6CCu;
        goto label_1dc6cc;
    }
    ctx->pc = 0x1DC6C4u;
    SET_GPR_U32(ctx, 31, 0x1DC6CCu);
    ctx->pc = 0x1DC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6C4u;
    // 0x1dc6c8: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC6C4u, 0x1DC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6CCu;
label_1dc6cc:
    // 0x1dc6cc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc6d0:
    // 0x1dc6d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc6d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc6d4:
    // 0x1dc6d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc6d8:
    // 0x1dc6d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6dc:
    // 0x1dc6dc: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc6e0:
    // 0x1dc6e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6e4:
    // 0x1dc6e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6e8:
    // 0x1dc6e8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc6ec:
    // 0x1dc6ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6f0:
    // 0x1dc6f0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6f4:
    // 0x1dc6f4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc6f8:
    // 0x1dc6f8: 0xc07508c  jal         func_1D4230
label_1dc6fc:
    if (ctx->pc == 0x1DC6FCu) {
        ctx->pc = 0x1DC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6F8u;
        // 0x1dc6fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC700u;
        goto label_1dc700;
    }
    ctx->pc = 0x1DC6F8u;
    SET_GPR_U32(ctx, 31, 0x1DC700u);
    ctx->pc = 0x1DC6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6F8u;
    // 0x1dc6fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC6F8u, 0x1DC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC700u;
label_1dc700:
    // 0x1dc700: 0xc067b9c  jal         func_19EE70
label_1dc704:
    if (ctx->pc == 0x1DC704u) {
        ctx->pc = 0x1DC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC700u;
        // 0x1dc704: 0x240400f7  addiu       $a0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC708u;
        goto label_1dc708;
    }
    ctx->pc = 0x1DC700u;
    SET_GPR_U32(ctx, 31, 0x1DC708u);
    ctx->pc = 0x1DC704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC700u;
    // 0x1dc704: 0x240400f7  addiu       $a0, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC700u, 0x1DC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC708u;
label_1dc708:
    // 0x1dc708: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc70c:
    // 0x1dc70c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc710:
    // 0x1dc710: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc714:
    // 0x1dc714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc718:
    // 0x1dc718: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc71c:
    // 0x1dc71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc720:
    // 0x1dc720: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc724:
    // 0x1dc724: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc728:
    // 0x1dc728: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc72c:
    // 0x1dc72c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc72cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc730:
    // 0x1dc730: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc734:
    // 0x1dc734: 0xc07508c  jal         func_1D4230
label_1dc738:
    if (ctx->pc == 0x1DC738u) {
        ctx->pc = 0x1DC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC734u;
        // 0x1dc738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC73Cu;
        goto label_1dc73c;
    }
    ctx->pc = 0x1DC734u;
    SET_GPR_U32(ctx, 31, 0x1DC73Cu);
    ctx->pc = 0x1DC738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC734u;
    // 0x1dc738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC734u, 0x1DC73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC73Cu;
label_1dc73c:
    // 0x1dc73c: 0xc067b9c  jal         func_19EE70
label_1dc740:
    if (ctx->pc == 0x1DC740u) {
        ctx->pc = 0x1DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC73Cu;
        // 0x1dc740: 0x240400f9  addiu       $a0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC744u;
        goto label_1dc744;
    }
    ctx->pc = 0x1DC73Cu;
    SET_GPR_U32(ctx, 31, 0x1DC744u);
    ctx->pc = 0x1DC740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC73Cu;
    // 0x1dc740: 0x240400f9  addiu       $a0, $zero, 0xF9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC73Cu, 0x1DC744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC744u;
label_1dc744:
    // 0x1dc744: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc748:
    // 0x1dc748: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc74c:
    // 0x1dc74c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc750:
    // 0x1dc750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc754:
    // 0x1dc754: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc758:
    // 0x1dc758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc75c:
    // 0x1dc75c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1dc75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc760:
    // 0x1dc760: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc764:
    // 0x1dc764: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc768:
    // 0x1dc768: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc768u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc76c:
    // 0x1dc76c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc770:
    // 0x1dc770: 0xc07508c  jal         func_1D4230
label_1dc774:
    if (ctx->pc == 0x1DC774u) {
        ctx->pc = 0x1DC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC770u;
        // 0x1dc774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC778u;
        goto label_1dc778;
    }
    ctx->pc = 0x1DC770u;
    SET_GPR_U32(ctx, 31, 0x1DC778u);
    ctx->pc = 0x1DC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC770u;
    // 0x1dc774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC770u, 0x1DC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC778u;
label_1dc778:
    // 0x1dc778: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dc778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1dc77c:
    // 0x1dc77c: 0x8c91489c  lw          $s1, 0x489C($a0)
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1dc780:
    // 0x1dc780: 0xc136ad6  jal         func_4DAB58
label_1dc784:
    if (ctx->pc == 0x1DC784u) {
        ctx->pc = 0x1DC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC780u;
        // 0x1dc784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC788u;
        goto label_1dc788;
    }
    ctx->pc = 0x1DC780u;
    SET_GPR_U32(ctx, 31, 0x1DC788u);
    ctx->pc = 0x1DC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC780u;
    // 0x1dc784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1DC780u, 0x1DC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC788u;
label_1dc788:
    // 0x1dc788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc78c:
    // 0x1dc78c: 0xc136ad4  jal         func_4DAB50
label_1dc790:
    if (ctx->pc == 0x1DC790u) {
        ctx->pc = 0x1DC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC78Cu;
        // 0x1dc790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC794u;
        goto label_1dc794;
    }
    ctx->pc = 0x1DC78Cu;
    SET_GPR_U32(ctx, 31, 0x1DC794u);
    ctx->pc = 0x1DC790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC78Cu;
    // 0x1dc790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1DC78Cu, 0x1DC794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC794u;
label_1dc794:
    // 0x1dc794: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1dc794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1dc798:
    // 0x1dc798: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x1dc798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_1dc79c:
    // 0x1dc79c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1dc79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dc7a0:
    // 0x1dc7a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1dc7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc7a4:
    // 0x1dc7a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dc7a8:
    // 0x1dc7a8: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
label_1dc7ac:
    if (ctx->pc == 0x1DC7ACu) {
        ctx->pc = 0x1DC7B0u;
        goto label_1dc7b0;
    }
    ctx->pc = 0x1DC7A8u;
    {
        const bool branch_taken_0x1dc7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1dc7a8) {
            ctx->pc = 0x1DC7ECu;
            goto label_1dc7ec;
        }
    }
    ctx->pc = 0x1DC7B0u;
label_1dc7b0:
    // 0x1dc7b0: 0xc067b9c  jal         func_19EE70
label_1dc7b4:
    if (ctx->pc == 0x1DC7B4u) {
        ctx->pc = 0x1DC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7B0u;
        // 0x1dc7b4: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7B8u;
        goto label_1dc7b8;
    }
    ctx->pc = 0x1DC7B0u;
    SET_GPR_U32(ctx, 31, 0x1DC7B8u);
    ctx->pc = 0x1DC7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7B0u;
    // 0x1dc7b4: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC7B0u, 0x1DC7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7B8u;
label_1dc7b8:
    // 0x1dc7b8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc7bc:
    // 0x1dc7bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc7bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc7c0:
    // 0x1dc7c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc7c4:
    // 0x1dc7c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc7c8:
    // 0x1dc7c8: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc7cc:
    // 0x1dc7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dc7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc7d0:
    // 0x1dc7d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc7d4:
    // 0x1dc7d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc7d8:
    // 0x1dc7d8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc7dc:
    // 0x1dc7dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc7e0:
    // 0x1dc7e0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc7e4:
    // 0x1dc7e4: 0xc07508c  jal         func_1D4230
label_1dc7e8:
    if (ctx->pc == 0x1DC7E8u) {
        ctx->pc = 0x1DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7E4u;
        // 0x1dc7e8: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7ECu;
        goto label_1dc7ec;
    }
    ctx->pc = 0x1DC7E4u;
    SET_GPR_U32(ctx, 31, 0x1DC7ECu);
    ctx->pc = 0x1DC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7E4u;
    // 0x1dc7e8: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC7E4u, 0x1DC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7ECu;
label_1dc7ec:
    // 0x1dc7ec: 0xc067b9c  jal         func_19EE70
label_1dc7f0:
    if (ctx->pc == 0x1DC7F0u) {
        ctx->pc = 0x1DC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7ECu;
        // 0x1dc7f0: 0x240400fc  addiu       $a0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7F4u;
        goto label_1dc7f4;
    }
    ctx->pc = 0x1DC7ECu;
    SET_GPR_U32(ctx, 31, 0x1DC7F4u);
    ctx->pc = 0x1DC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7ECu;
    // 0x1dc7f0: 0x240400fc  addiu       $a0, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC7ECu, 0x1DC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7F4u;
label_1dc7f4:
    // 0x1dc7f4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc7f8:
    // 0x1dc7f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc7f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc7fc:
    // 0x1dc7fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc800:
    // 0x1dc800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc804:
    // 0x1dc804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc808:
    // 0x1dc808: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1dc808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dc80c:
    // 0x1dc80c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc810:
    // 0x1dc810: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc814:
    // 0x1dc814: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc818:
    // 0x1dc818: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dc818u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc81c:
    // 0x1dc81c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc820:
    // 0x1dc820: 0xc07508c  jal         func_1D4230
label_1dc824:
    if (ctx->pc == 0x1DC824u) {
        ctx->pc = 0x1DC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC820u;
        // 0x1dc824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC828u;
        goto label_1dc828;
    }
    ctx->pc = 0x1DC820u;
    SET_GPR_U32(ctx, 31, 0x1DC828u);
    ctx->pc = 0x1DC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC820u;
    // 0x1dc824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC820u, 0x1DC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC828u;
label_1dc828:
    // 0x1dc828: 0xc067b9c  jal         func_19EE70
label_1dc82c:
    if (ctx->pc == 0x1DC82Cu) {
        ctx->pc = 0x1DC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC828u;
        // 0x1dc82c: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC830u;
        goto label_1dc830;
    }
    ctx->pc = 0x1DC828u;
    SET_GPR_U32(ctx, 31, 0x1DC830u);
    ctx->pc = 0x1DC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC828u;
    // 0x1dc82c: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC828u, 0x1DC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC830u;
label_1dc830:
    // 0x1dc830: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1dc830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1dc834:
    // 0x1dc834: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dc834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1dc838:
    // 0x1dc838: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc83c:
    // 0x1dc83c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc840:
    // 0x1dc840: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1dc840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1dc844:
    // 0x1dc844: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1dc844u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc848:
    // 0x1dc848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dc848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc84c:
    // 0x1dc84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc850:
    // 0x1dc850: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dc854:
    // 0x1dc854: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dc854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc858:
    // 0x1dc858: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc85c:
    // 0x1dc85c: 0xc07508c  jal         func_1D4230
label_1dc860:
    if (ctx->pc == 0x1DC860u) {
        ctx->pc = 0x1DC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC85Cu;
        // 0x1dc860: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC864u;
        goto label_1dc864;
    }
    ctx->pc = 0x1DC85Cu;
    SET_GPR_U32(ctx, 31, 0x1DC864u);
    ctx->pc = 0x1DC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC85Cu;
    // 0x1dc860: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1DC85Cu, 0x1DC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC864u;
label_1dc864:
    // 0x1dc864: 0xc07534a  jal         func_1D4D28
label_1dc868:
    if (ctx->pc == 0x1DC868u) {
        ctx->pc = 0x1DC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC864u;
        // 0x1dc868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC86Cu;
        goto label_1dc86c;
    }
    ctx->pc = 0x1DC864u;
    SET_GPR_U32(ctx, 31, 0x1DC86Cu);
    ctx->pc = 0x1DC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC864u;
    // 0x1dc868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1DC864u, 0x1DC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC86Cu;
label_1dc86c:
    // 0x1dc86c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x1dc86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1dc870:
    // 0x1dc870: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x1dc870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_1dc874:
    // 0x1dc874: 0xc07a3b8  jal         func_1E8EE0
label_1dc878:
    if (ctx->pc == 0x1DC878u) {
        ctx->pc = 0x1DC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC874u;
        // 0x1dc878: 0x24c440c0  addiu       $a0, $a2, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC87Cu;
        goto label_1dc87c;
    }
    ctx->pc = 0x1DC874u;
    SET_GPR_U32(ctx, 31, 0x1DC87Cu);
    ctx->pc = 0x1DC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC874u;
    // 0x1dc878: 0x24c440c0  addiu       $a0, $a2, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EE0u, 0x1DC874u, 0x1DC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC87Cu;
label_1dc87c:
    // 0x1dc87c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1dc880:
    // 0x1dc880: 0x8ce5b8b8  lw          $a1, -0x4748($a3)
    ctx->pc = 0x1dc880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294949048)));
label_1dc884:
    // 0x1dc884: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dc888:
    // 0x1dc888: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1dc888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1dc88c:
    // 0x1dc88c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1dc88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1dc890:
    // 0x1dc890: 0x40f809  jalr        $v0
label_1dc894:
    if (ctx->pc == 0x1DC894u) {
        ctx->pc = 0x1DC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC890u;
        // 0x1dc894: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC898u;
        goto label_1dc898;
    }
    ctx->pc = 0x1DC890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC898u);
        ctx->pc = 0x1DC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC890u;
        // 0x1dc894: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC890u, 0x1DC898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC898u;
label_1dc898:
    // 0x1dc898: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1dc898u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1dc89c:
    // 0x1dc89c: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x1dc89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_1dc8a0:
    // 0x1dc8a0: 0x8d04489c  lw          $a0, 0x489C($t0)
    ctx->pc = 0x1dc8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18588)));
label_1dc8a4:
    // 0x1dc8a4: 0xae433b94  sw          $v1, 0x3B94($s2)
    ctx->pc = 0x1dc8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15252), GPR_U32(ctx, 3));
label_1dc8a8:
    // 0x1dc8a8: 0xc10746c  jal         func_41D1B0
label_1dc8ac:
    if (ctx->pc == 0x1DC8ACu) {
        ctx->pc = 0x1DC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8A8u;
        // 0x1dc8ac: 0xae423b90  sw          $v0, 0x3B90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 15248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8B0u;
        goto label_1dc8b0;
    }
    ctx->pc = 0x1DC8A8u;
    SET_GPR_U32(ctx, 31, 0x1DC8B0u);
    ctx->pc = 0x1DC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC8A8u;
    // 0x1dc8ac: 0xae423b90  sw          $v0, 0x3B90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 15248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x1DC8A8u, 0x1DC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC8B0u;
label_1dc8b0:
    // 0x1dc8b0: 0xae403a70  sw          $zero, 0x3A70($s2)
    ctx->pc = 0x1dc8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14960), GPR_U32(ctx, 0));
label_1dc8b4:
    // 0x1dc8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc8b8:
    // 0x1dc8b8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1dc8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1dc8bc:
    // 0x1dc8bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8c0:
    // 0x1dc8c0: 0xae401b7c  sw          $zero, 0x1B7C($s2)
    ctx->pc = 0x1dc8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7036), GPR_U32(ctx, 0));
label_1dc8c4:
    // 0x1dc8c4: 0xae401b80  sw          $zero, 0x1B80($s2)
    ctx->pc = 0x1dc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7040), GPR_U32(ctx, 0));
label_1dc8c8:
    // 0x1dc8c8: 0xae401b88  sw          $zero, 0x1B88($s2)
    ctx->pc = 0x1dc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7048), GPR_U32(ctx, 0));
label_1dc8cc:
    // 0x1dc8cc: 0xae401ba0  sw          $zero, 0x1BA0($s2)
    ctx->pc = 0x1dc8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7072), GPR_U32(ctx, 0));
label_1dc8d0:
    // 0x1dc8d0: 0xae401b94  sw          $zero, 0x1B94($s2)
    ctx->pc = 0x1dc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7060), GPR_U32(ctx, 0));
label_1dc8d4:
    // 0x1dc8d4: 0xae401b98  sw          $zero, 0x1B98($s2)
    ctx->pc = 0x1dc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7064), GPR_U32(ctx, 0));
label_1dc8d8:
    // 0x1dc8d8: 0xc077922  jal         func_1DE488
label_1dc8dc:
    if (ctx->pc == 0x1DC8DCu) {
        ctx->pc = 0x1DC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8D8u;
        // 0x1dc8dc: 0xae421bac  sw          $v0, 0x1BAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8E0u;
        goto label_1dc8e0;
    }
    ctx->pc = 0x1DC8D8u;
    SET_GPR_U32(ctx, 31, 0x1DC8E0u);
    ctx->pc = 0x1DC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC8D8u;
    // 0x1dc8dc: 0xae421bac  sw          $v0, 0x1BAC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 7084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE488u, 0x1DC8D8u, 0x1DC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC8E0u;
label_1dc8e0:
    // 0x1dc8e0: 0xae403a74  sw          $zero, 0x3A74($s2)
    ctx->pc = 0x1dc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14964), GPR_U32(ctx, 0));
label_1dc8e4:
    // 0x1dc8e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1dc8e8:
    // 0x1dc8e8: 0xae401ba4  sw          $zero, 0x1BA4($s2)
    ctx->pc = 0x1dc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7076), GPR_U32(ctx, 0));
label_1dc8ec:
    // 0x1dc8ec: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1dc8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1dc8f0:
    // 0x1dc8f0: 0xae401b9c  sw          $zero, 0x1B9C($s2)
    ctx->pc = 0x1dc8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7068), GPR_U32(ctx, 0));
label_1dc8f4:
    // 0x1dc8f4: 0xae401bb0  sw          $zero, 0x1BB0($s2)
    ctx->pc = 0x1dc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7088), GPR_U32(ctx, 0));
label_1dc8f8:
    // 0x1dc8f8: 0xae403a78  sw          $zero, 0x3A78($s2)
    ctx->pc = 0x1dc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14968), GPR_U32(ctx, 0));
label_1dc8fc:
    // 0x1dc8fc: 0xae401ba8  sw          $zero, 0x1BA8($s2)
    ctx->pc = 0x1dc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7080), GPR_U32(ctx, 0));
label_1dc900:
    // 0x1dc900: 0xc0692f0  jal         func_1A4BC0
label_1dc904:
    if (ctx->pc == 0x1DC904u) {
        ctx->pc = 0x1DC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC900u;
        // 0x1dc904: 0xa2423b9c  sb          $v0, 0x3B9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 15260), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC908u;
        goto label_1dc908;
    }
    ctx->pc = 0x1DC900u;
    SET_GPR_U32(ctx, 31, 0x1DC908u);
    ctx->pc = 0x1DC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC900u;
    // 0x1dc904: 0xa2423b9c  sb          $v0, 0x3B9C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 15260), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BC0u, 0x1DC900u, 0x1DC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC908u;
label_1dc908:
    // 0x1dc908: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dc908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1dc90c:
    // 0x1dc90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc910:
    // 0x1dc910: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x1dc910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
label_1dc914:
    // 0x1dc914: 0xc10c46c  jal         func_4311B0
label_1dc918:
    if (ctx->pc == 0x1DC918u) {
        ctx->pc = 0x1DC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC914u;
        // 0x1dc918: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC91Cu;
        goto label_1dc91c;
    }
    ctx->pc = 0x1DC914u;
    SET_GPR_U32(ctx, 31, 0x1DC91Cu);
    ctx->pc = 0x1DC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC914u;
    // 0x1dc918: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DC914u, 0x1DC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC91Cu;
label_1dc91c:
    // 0x1dc91c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1dc920:
    if (ctx->pc == 0x1DC920u) {
        ctx->pc = 0x1DC924u;
        goto label_1dc924;
    }
    ctx->pc = 0x1DC91Cu;
    {
        const bool branch_taken_0x1dc91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc91c) {
            ctx->pc = 0x1DC940u;
            goto label_1dc940;
        }
    }
    ctx->pc = 0x1DC924u;
label_1dc924:
    // 0x1dc924: 0xc067b9c  jal         func_19EE70
label_1dc928:
    if (ctx->pc == 0x1DC928u) {
        ctx->pc = 0x1DC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC924u;
        // 0x1dc928: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC92Cu;
        goto label_1dc92c;
    }
    ctx->pc = 0x1DC924u;
    SET_GPR_U32(ctx, 31, 0x1DC92Cu);
    ctx->pc = 0x1DC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC924u;
    // 0x1dc928: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC924u, 0x1DC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC92Cu;
label_1dc92c:
    // 0x1dc92c: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1dc930:
    // 0x1dc930: 0xc079f96  jal         func_1E7E58
label_1dc934:
    if (ctx->pc == 0x1DC934u) {
        ctx->pc = 0x1DC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC930u;
        // 0x1dc934: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC938u;
        goto label_1dc938;
    }
    ctx->pc = 0x1DC930u;
    SET_GPR_U32(ctx, 31, 0x1DC938u);
    ctx->pc = 0x1DC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC930u;
    // 0x1dc934: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DC930u, 0x1DC938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC938u;
label_1dc938:
    // 0x1dc938: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dc93c:
    if (ctx->pc == 0x1DC93Cu) {
        ctx->pc = 0x1DC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC938u;
        // 0x1dc93c: 0xae403a80  sw          $zero, 0x3A80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 14976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC940u;
        goto label_1dc940;
    }
    ctx->pc = 0x1DC938u;
    {
        const bool branch_taken_0x1dc938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC938u;
        // 0x1dc93c: 0xae403a80  sw          $zero, 0x3A80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 14976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc938) {
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC940u;
label_1dc940:
    // 0x1dc940: 0xc067b9c  jal         func_19EE70
label_1dc944:
    if (ctx->pc == 0x1DC944u) {
        ctx->pc = 0x1DC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC940u;
        // 0x1dc944: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC948u;
        goto label_1dc948;
    }
    ctx->pc = 0x1DC940u;
    SET_GPR_U32(ctx, 31, 0x1DC948u);
    ctx->pc = 0x1DC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC940u;
    // 0x1dc944: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC940u, 0x1DC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC948u;
label_1dc948:
    // 0x1dc948: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1dc94c:
    // 0x1dc94c: 0xc079f96  jal         func_1E7E58
label_1dc950:
    if (ctx->pc == 0x1DC950u) {
        ctx->pc = 0x1DC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC94Cu;
        // 0x1dc950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC954u;
        goto label_1dc954;
    }
    ctx->pc = 0x1DC94Cu;
    SET_GPR_U32(ctx, 31, 0x1DC954u);
    ctx->pc = 0x1DC950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC94Cu;
    // 0x1dc950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DC94Cu, 0x1DC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC954u;
label_1dc954:
    // 0x1dc954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc958:
    // 0x1dc958: 0xae423a80  sw          $v0, 0x3A80($s2)
    ctx->pc = 0x1dc958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14976), GPR_U32(ctx, 2));
label_1dc95c:
    // 0x1dc95c: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x1dc95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1dc960:
    // 0x1dc960: 0xc067b9c  jal         func_19EE70
label_1dc964:
    if (ctx->pc == 0x1DC964u) {
        ctx->pc = 0x1DC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC960u;
        // 0x1dc964: 0x26511bd0  addiu       $s1, $s2, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC968u;
        goto label_1dc968;
    }
    ctx->pc = 0x1DC960u;
    SET_GPR_U32(ctx, 31, 0x1DC968u);
    ctx->pc = 0x1DC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC960u;
    // 0x1dc964: 0x26511bd0  addiu       $s1, $s2, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC960u, 0x1DC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC968u;
label_1dc968:
    // 0x1dc968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc96c:
    // 0x1dc96c: 0xc067b9c  jal         func_19EE70
label_1dc970:
    if (ctx->pc == 0x1DC970u) {
        ctx->pc = 0x1DC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC96Cu;
        // 0x1dc970: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC974u;
        goto label_1dc974;
    }
    ctx->pc = 0x1DC96Cu;
    SET_GPR_U32(ctx, 31, 0x1DC974u);
    ctx->pc = 0x1DC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC96Cu;
    // 0x1dc970: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC96Cu, 0x1DC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC974u;
label_1dc974:
    // 0x1dc974: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dc974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc978:
    // 0x1dc978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc97c:
    // 0x1dc97c: 0xc075a44  jal         func_1D6910
label_1dc980:
    if (ctx->pc == 0x1DC980u) {
        ctx->pc = 0x1DC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC97Cu;
        // 0x1dc980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC984u;
        goto label_1dc984;
    }
    ctx->pc = 0x1DC97Cu;
    SET_GPR_U32(ctx, 31, 0x1DC984u);
    ctx->pc = 0x1DC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC97Cu;
    // 0x1dc980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1DC97Cu, 0x1DC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC984u;
label_1dc984:
    // 0x1dc984: 0xc067b9c  jal         func_19EE70
label_1dc988:
    if (ctx->pc == 0x1DC988u) {
        ctx->pc = 0x1DC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC984u;
        // 0x1dc988: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC98Cu;
        goto label_1dc98c;
    }
    ctx->pc = 0x1DC984u;
    SET_GPR_U32(ctx, 31, 0x1DC98Cu);
    ctx->pc = 0x1DC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC984u;
    // 0x1dc988: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC984u, 0x1DC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC98Cu;
label_1dc98c:
    // 0x1dc98c: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1dc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1dc990:
    // 0x1dc990: 0xc079f96  jal         func_1E7E58
label_1dc994:
    if (ctx->pc == 0x1DC994u) {
        ctx->pc = 0x1DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC990u;
        // 0x1dc994: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC998u;
        goto label_1dc998;
    }
    ctx->pc = 0x1DC990u;
    SET_GPR_U32(ctx, 31, 0x1DC998u);
    ctx->pc = 0x1DC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC990u;
    // 0x1dc994: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DC990u, 0x1DC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC998u;
label_1dc998:
    // 0x1dc998: 0xc067b9c  jal         func_19EE70
label_1dc99c:
    if (ctx->pc == 0x1DC99Cu) {
        ctx->pc = 0x1DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC998u;
        // 0x1dc99c: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9A0u;
        goto label_1dc9a0;
    }
    ctx->pc = 0x1DC998u;
    SET_GPR_U32(ctx, 31, 0x1DC9A0u);
    ctx->pc = 0x1DC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC998u;
    // 0x1dc99c: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC998u, 0x1DC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9A0u;
label_1dc9a0:
    // 0x1dc9a0: 0x8e442af4  lw          $a0, 0x2AF4($s2)
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dc9a4:
    // 0x1dc9a4: 0xc079f96  jal         func_1E7E58
label_1dc9a8:
    if (ctx->pc == 0x1DC9A8u) {
        ctx->pc = 0x1DC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9A4u;
        // 0x1dc9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9ACu;
        goto label_1dc9ac;
    }
    ctx->pc = 0x1DC9A4u;
    SET_GPR_U32(ctx, 31, 0x1DC9ACu);
    ctx->pc = 0x1DC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9A4u;
    // 0x1dc9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DC9A4u, 0x1DC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9ACu;
label_1dc9ac:
    // 0x1dc9ac: 0xc067b9c  jal         func_19EE70
label_1dc9b0:
    if (ctx->pc == 0x1DC9B0u) {
        ctx->pc = 0x1DC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9ACu;
        // 0x1dc9b0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9B4u;
        goto label_1dc9b4;
    }
    ctx->pc = 0x1DC9ACu;
    SET_GPR_U32(ctx, 31, 0x1DC9B4u);
    ctx->pc = 0x1DC9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9ACu;
    // 0x1dc9b0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DC9ACu, 0x1DC9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9B4u;
label_1dc9b4:
    // 0x1dc9b4: 0x8e442af8  lw          $a0, 0x2AF8($s2)
    ctx->pc = 0x1dc9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dc9b8:
    // 0x1dc9b8: 0xc079f96  jal         func_1E7E58
label_1dc9bc:
    if (ctx->pc == 0x1DC9BCu) {
        ctx->pc = 0x1DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B8u;
        // 0x1dc9bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9C0u;
        goto label_1dc9c0;
    }
    ctx->pc = 0x1DC9B8u;
    SET_GPR_U32(ctx, 31, 0x1DC9C0u);
    ctx->pc = 0x1DC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9B8u;
    // 0x1dc9bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DC9B8u, 0x1DC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9C0u;
label_1dc9c0:
    // 0x1dc9c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dc9c4:
    // 0x1dc9c4: 0xc107458  jal         func_41D160
label_1dc9c8:
    if (ctx->pc == 0x1DC9C8u) {
        ctx->pc = 0x1DC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9C4u;
        // 0x1dc9c8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9CCu;
        goto label_1dc9cc;
    }
    ctx->pc = 0x1DC9C4u;
    SET_GPR_U32(ctx, 31, 0x1DC9CCu);
    ctx->pc = 0x1DC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9C4u;
    // 0x1dc9c8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DC9C4u, 0x1DC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9CCu;
label_1dc9cc:
    // 0x1dc9cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1dc9d0:
    if (ctx->pc == 0x1DC9D0u) {
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9CCu;
        // 0x1dc9d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9D4u;
        goto label_1dc9d4;
    }
    ctx->pc = 0x1DC9CCu;
    {
        const bool branch_taken_0x1dc9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9CCu;
        // 0x1dc9d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9cc) {
            ctx->pc = 0x1DCA18u;
            goto label_1dca18;
        }
    }
    ctx->pc = 0x1DC9D4u;
label_1dc9d4:
    // 0x1dc9d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1dc9d8:
    // 0x1dc9d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dc9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dc9dc:
    // 0x1dc9dc: 0xc441ee60  lwc1        $f1, -0x11A0($v0)
    ctx->pc = 0x1dc9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc9e0:
    // 0x1dc9e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dc9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc9e4:
    // 0x1dc9e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dc9e8:
    // 0x1dc9e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc9ec:
    // 0x1dc9ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc9f0:
    // 0x1dc9f0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1dc9f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1dc9f4:
    // 0x1dc9f4: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x1dc9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1dc9f8:
    // 0x1dc9f8: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x1dc9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1dc9fc:
    // 0x1dc9fc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1dc9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1dca00:
    // 0x1dca00: 0x8e472af8  lw          $a3, 0x2AF8($s2)
    ctx->pc = 0x1dca00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dca04:
    // 0x1dca04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dca08:
    // 0x1dca08: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dca0c:
    // 0x1dca0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dca10:
    // 0x1dca10: 0x60f809  jalr        $v1
label_1dca14:
    if (ctx->pc == 0x1DCA14u) {
        ctx->pc = 0x1DCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA10u;
        // 0x1dca14: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA18u;
        goto label_1dca18;
    }
    ctx->pc = 0x1DCA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DCA18u);
        ctx->pc = 0x1DCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA10u;
        // 0x1dca14: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA10u, 0x1DCA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCA18u;
label_1dca18:
    // 0x1dca18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1dca1c:
    // 0x1dca1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dca1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dca20:
    // 0x1dca20: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1dca24:
    // 0x1dca24: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dca28:
    // 0x1dca28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dca2c:
    // 0x1dca2c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1dca2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1dca30:
    // 0x1dca30: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1dca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1dca34:
    // 0x1dca34: 0x40f809  jalr        $v0
label_1dca38:
    if (ctx->pc == 0x1DCA38u) {
        ctx->pc = 0x1DCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA34u;
        // 0x1dca38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA3Cu;
        goto label_1dca3c;
    }
    ctx->pc = 0x1DCA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCA3Cu);
        ctx->pc = 0x1DCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA34u;
        // 0x1dca38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA34u, 0x1DCA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCA3Cu;
label_1dca3c:
    // 0x1dca3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1dca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1dca40:
    // 0x1dca40: 0xae423ba8  sw          $v0, 0x3BA8($s2)
    ctx->pc = 0x1dca40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15272), GPR_U32(ctx, 2));
label_1dca44:
    // 0x1dca44: 0x24711e10  addiu       $s1, $v1, 0x1E10
    ctx->pc = 0x1dca44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7696));
label_1dca48:
    // 0x1dca48: 0xa2403bac  sb          $zero, 0x3BAC($s2)
    ctx->pc = 0x1dca48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15276), (uint8_t)GPR_U32(ctx, 0));
label_1dca4c:
    // 0x1dca4c: 0x26322940  addiu       $s2, $s1, 0x2940
    ctx->pc = 0x1dca4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 10560));
label_1dca50:
    // 0x1dca50: 0x2630ea30  addiu       $s0, $s1, -0x15D0
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961712));
label_1dca54:
    // 0x1dca54: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1dca54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
label_1dca58:
    // 0x1dca58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dca58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dca5c:
    // 0x1dca5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dca60:
    // 0x1dca60: 0xc06c996  jal         func_1B2658
label_1dca64:
    if (ctx->pc == 0x1DCA64u) {
        ctx->pc = 0x1DCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA60u;
        // 0x1dca64: 0xae540004  sw          $s4, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA68u;
        goto label_1dca68;
    }
    ctx->pc = 0x1DCA60u;
    SET_GPR_U32(ctx, 31, 0x1DCA68u);
    ctx->pc = 0x1DCA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA60u;
    // 0x1dca64: 0xae540004  sw          $s4, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1DCA60u, 0x1DCA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA68u;
label_1dca68:
    // 0x1dca68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1dca6c:
    // 0x1dca6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dca70:
    // 0x1dca70: 0xc06c996  jal         func_1B2658
label_1dca74:
    if (ctx->pc == 0x1DCA74u) {
        ctx->pc = 0x1DCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA70u;
        // 0x1dca74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA78u;
        goto label_1dca78;
    }
    ctx->pc = 0x1DCA70u;
    SET_GPR_U32(ctx, 31, 0x1DCA78u);
    ctx->pc = 0x1DCA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA70u;
    // 0x1dca74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1DCA70u, 0x1DCA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA78u;
label_1dca78:
    // 0x1dca78: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1dca78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1dca7c:
    // 0x1dca7c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_1dca80:
    if (ctx->pc == 0x1DCA80u) {
        ctx->pc = 0x1DCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA7Cu;
        // 0x1dca80: 0xae340004  sw          $s4, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA84u;
        goto label_1dca84;
    }
    ctx->pc = 0x1DCA7Cu;
    {
        const bool branch_taken_0x1dca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dca7c) {
            ctx->pc = 0x1DCA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA7Cu;
            // 0x1dca80: 0xae340004  sw          $s4, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dca58;
        }
    }
    ctx->pc = 0x1DCA84u;
label_1dca84:
    // 0x1dca84: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1dca84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1dca88:
    // 0x1dca88: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1dca88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1dca8c:
    // 0x1dca8c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1dca8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1dca90:
    // 0x1dca90: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1dca90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1dca94:
    // 0x1dca94: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1dca94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1dca98:
    // 0x1dca98: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1dca98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1dca9c:
    // 0x1dca9c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1dca9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1dcaa0:
    // 0x1dcaa0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1dcaa0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1dcaa4:
    // 0x1dcaa4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1dcaa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1dcaa8:
    // 0x1dcaa8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1dcaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1dcaac:
    // 0x1dcaac: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1dcaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1dcab0:
    // 0x1dcab0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1dcab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dcab4:
    // 0x1dcab4: 0x3e00008  jr          $ra
label_1dcab8:
    if (ctx->pc == 0x1DCAB8u) {
        ctx->pc = 0x1DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAB4u;
        // 0x1dcab8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCABCu;
        goto label_1dcabc;
    }
    ctx->pc = 0x1DCAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAB4u;
        // 0x1dcab8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCABCu;
label_1dcabc:
    // 0x1dcabc: 0x0  nop
    ctx->pc = 0x1dcabcu;
    // NOP
    ctx->pc = 0x1dcac0u;
}
