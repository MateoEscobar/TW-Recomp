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

// Function: sub_002BF118
// Address: 0x2bf118 - 0x2bf748
void sub_002BF118_0x2bf118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF118_0x2bf118");
#endif

    switch (ctx->pc) {
        case 0x2bf118u: goto label_2bf118;
        case 0x2bf11cu: goto label_2bf11c;
        case 0x2bf120u: goto label_2bf120;
        case 0x2bf124u: goto label_2bf124;
        case 0x2bf128u: goto label_2bf128;
        case 0x2bf12cu: goto label_2bf12c;
        case 0x2bf130u: goto label_2bf130;
        case 0x2bf134u: goto label_2bf134;
        case 0x2bf138u: goto label_2bf138;
        case 0x2bf13cu: goto label_2bf13c;
        case 0x2bf140u: goto label_2bf140;
        case 0x2bf144u: goto label_2bf144;
        case 0x2bf148u: goto label_2bf148;
        case 0x2bf14cu: goto label_2bf14c;
        case 0x2bf150u: goto label_2bf150;
        case 0x2bf154u: goto label_2bf154;
        case 0x2bf158u: goto label_2bf158;
        case 0x2bf15cu: goto label_2bf15c;
        case 0x2bf160u: goto label_2bf160;
        case 0x2bf164u: goto label_2bf164;
        case 0x2bf168u: goto label_2bf168;
        case 0x2bf16cu: goto label_2bf16c;
        case 0x2bf170u: goto label_2bf170;
        case 0x2bf174u: goto label_2bf174;
        case 0x2bf178u: goto label_2bf178;
        case 0x2bf17cu: goto label_2bf17c;
        case 0x2bf180u: goto label_2bf180;
        case 0x2bf184u: goto label_2bf184;
        case 0x2bf188u: goto label_2bf188;
        case 0x2bf18cu: goto label_2bf18c;
        case 0x2bf190u: goto label_2bf190;
        case 0x2bf194u: goto label_2bf194;
        case 0x2bf198u: goto label_2bf198;
        case 0x2bf19cu: goto label_2bf19c;
        case 0x2bf1a0u: goto label_2bf1a0;
        case 0x2bf1a4u: goto label_2bf1a4;
        case 0x2bf1a8u: goto label_2bf1a8;
        case 0x2bf1acu: goto label_2bf1ac;
        case 0x2bf1b0u: goto label_2bf1b0;
        case 0x2bf1b4u: goto label_2bf1b4;
        case 0x2bf1b8u: goto label_2bf1b8;
        case 0x2bf1bcu: goto label_2bf1bc;
        case 0x2bf1c0u: goto label_2bf1c0;
        case 0x2bf1c4u: goto label_2bf1c4;
        case 0x2bf1c8u: goto label_2bf1c8;
        case 0x2bf1ccu: goto label_2bf1cc;
        case 0x2bf1d0u: goto label_2bf1d0;
        case 0x2bf1d4u: goto label_2bf1d4;
        case 0x2bf1d8u: goto label_2bf1d8;
        case 0x2bf1dcu: goto label_2bf1dc;
        case 0x2bf1e0u: goto label_2bf1e0;
        case 0x2bf1e4u: goto label_2bf1e4;
        case 0x2bf1e8u: goto label_2bf1e8;
        case 0x2bf1ecu: goto label_2bf1ec;
        case 0x2bf1f0u: goto label_2bf1f0;
        case 0x2bf1f4u: goto label_2bf1f4;
        case 0x2bf1f8u: goto label_2bf1f8;
        case 0x2bf1fcu: goto label_2bf1fc;
        case 0x2bf200u: goto label_2bf200;
        case 0x2bf204u: goto label_2bf204;
        case 0x2bf208u: goto label_2bf208;
        case 0x2bf20cu: goto label_2bf20c;
        case 0x2bf210u: goto label_2bf210;
        case 0x2bf214u: goto label_2bf214;
        case 0x2bf218u: goto label_2bf218;
        case 0x2bf21cu: goto label_2bf21c;
        case 0x2bf220u: goto label_2bf220;
        case 0x2bf224u: goto label_2bf224;
        case 0x2bf228u: goto label_2bf228;
        case 0x2bf22cu: goto label_2bf22c;
        case 0x2bf230u: goto label_2bf230;
        case 0x2bf234u: goto label_2bf234;
        case 0x2bf238u: goto label_2bf238;
        case 0x2bf23cu: goto label_2bf23c;
        case 0x2bf240u: goto label_2bf240;
        case 0x2bf244u: goto label_2bf244;
        case 0x2bf248u: goto label_2bf248;
        case 0x2bf24cu: goto label_2bf24c;
        case 0x2bf250u: goto label_2bf250;
        case 0x2bf254u: goto label_2bf254;
        case 0x2bf258u: goto label_2bf258;
        case 0x2bf25cu: goto label_2bf25c;
        case 0x2bf260u: goto label_2bf260;
        case 0x2bf264u: goto label_2bf264;
        case 0x2bf268u: goto label_2bf268;
        case 0x2bf26cu: goto label_2bf26c;
        case 0x2bf270u: goto label_2bf270;
        case 0x2bf274u: goto label_2bf274;
        case 0x2bf278u: goto label_2bf278;
        case 0x2bf27cu: goto label_2bf27c;
        case 0x2bf280u: goto label_2bf280;
        case 0x2bf284u: goto label_2bf284;
        case 0x2bf288u: goto label_2bf288;
        case 0x2bf28cu: goto label_2bf28c;
        case 0x2bf290u: goto label_2bf290;
        case 0x2bf294u: goto label_2bf294;
        case 0x2bf298u: goto label_2bf298;
        case 0x2bf29cu: goto label_2bf29c;
        case 0x2bf2a0u: goto label_2bf2a0;
        case 0x2bf2a4u: goto label_2bf2a4;
        case 0x2bf2a8u: goto label_2bf2a8;
        case 0x2bf2acu: goto label_2bf2ac;
        case 0x2bf2b0u: goto label_2bf2b0;
        case 0x2bf2b4u: goto label_2bf2b4;
        case 0x2bf2b8u: goto label_2bf2b8;
        case 0x2bf2bcu: goto label_2bf2bc;
        case 0x2bf2c0u: goto label_2bf2c0;
        case 0x2bf2c4u: goto label_2bf2c4;
        case 0x2bf2c8u: goto label_2bf2c8;
        case 0x2bf2ccu: goto label_2bf2cc;
        case 0x2bf2d0u: goto label_2bf2d0;
        case 0x2bf2d4u: goto label_2bf2d4;
        case 0x2bf2d8u: goto label_2bf2d8;
        case 0x2bf2dcu: goto label_2bf2dc;
        case 0x2bf2e0u: goto label_2bf2e0;
        case 0x2bf2e4u: goto label_2bf2e4;
        case 0x2bf2e8u: goto label_2bf2e8;
        case 0x2bf2ecu: goto label_2bf2ec;
        case 0x2bf2f0u: goto label_2bf2f0;
        case 0x2bf2f4u: goto label_2bf2f4;
        case 0x2bf2f8u: goto label_2bf2f8;
        case 0x2bf2fcu: goto label_2bf2fc;
        case 0x2bf300u: goto label_2bf300;
        case 0x2bf304u: goto label_2bf304;
        case 0x2bf308u: goto label_2bf308;
        case 0x2bf30cu: goto label_2bf30c;
        case 0x2bf310u: goto label_2bf310;
        case 0x2bf314u: goto label_2bf314;
        case 0x2bf318u: goto label_2bf318;
        case 0x2bf31cu: goto label_2bf31c;
        case 0x2bf320u: goto label_2bf320;
        case 0x2bf324u: goto label_2bf324;
        case 0x2bf328u: goto label_2bf328;
        case 0x2bf32cu: goto label_2bf32c;
        case 0x2bf330u: goto label_2bf330;
        case 0x2bf334u: goto label_2bf334;
        case 0x2bf338u: goto label_2bf338;
        case 0x2bf33cu: goto label_2bf33c;
        case 0x2bf340u: goto label_2bf340;
        case 0x2bf344u: goto label_2bf344;
        case 0x2bf348u: goto label_2bf348;
        case 0x2bf34cu: goto label_2bf34c;
        case 0x2bf350u: goto label_2bf350;
        case 0x2bf354u: goto label_2bf354;
        case 0x2bf358u: goto label_2bf358;
        case 0x2bf35cu: goto label_2bf35c;
        case 0x2bf360u: goto label_2bf360;
        case 0x2bf364u: goto label_2bf364;
        case 0x2bf368u: goto label_2bf368;
        case 0x2bf36cu: goto label_2bf36c;
        case 0x2bf370u: goto label_2bf370;
        case 0x2bf374u: goto label_2bf374;
        case 0x2bf378u: goto label_2bf378;
        case 0x2bf37cu: goto label_2bf37c;
        case 0x2bf380u: goto label_2bf380;
        case 0x2bf384u: goto label_2bf384;
        case 0x2bf388u: goto label_2bf388;
        case 0x2bf38cu: goto label_2bf38c;
        case 0x2bf390u: goto label_2bf390;
        case 0x2bf394u: goto label_2bf394;
        case 0x2bf398u: goto label_2bf398;
        case 0x2bf39cu: goto label_2bf39c;
        case 0x2bf3a0u: goto label_2bf3a0;
        case 0x2bf3a4u: goto label_2bf3a4;
        case 0x2bf3a8u: goto label_2bf3a8;
        case 0x2bf3acu: goto label_2bf3ac;
        case 0x2bf3b0u: goto label_2bf3b0;
        case 0x2bf3b4u: goto label_2bf3b4;
        case 0x2bf3b8u: goto label_2bf3b8;
        case 0x2bf3bcu: goto label_2bf3bc;
        case 0x2bf3c0u: goto label_2bf3c0;
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3c8u: goto label_2bf3c8;
        case 0x2bf3ccu: goto label_2bf3cc;
        case 0x2bf3d0u: goto label_2bf3d0;
        case 0x2bf3d4u: goto label_2bf3d4;
        case 0x2bf3d8u: goto label_2bf3d8;
        case 0x2bf3dcu: goto label_2bf3dc;
        case 0x2bf3e0u: goto label_2bf3e0;
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf3e8u: goto label_2bf3e8;
        case 0x2bf3ecu: goto label_2bf3ec;
        case 0x2bf3f0u: goto label_2bf3f0;
        case 0x2bf3f4u: goto label_2bf3f4;
        case 0x2bf3f8u: goto label_2bf3f8;
        case 0x2bf3fcu: goto label_2bf3fc;
        case 0x2bf400u: goto label_2bf400;
        case 0x2bf404u: goto label_2bf404;
        case 0x2bf408u: goto label_2bf408;
        case 0x2bf40cu: goto label_2bf40c;
        case 0x2bf410u: goto label_2bf410;
        case 0x2bf414u: goto label_2bf414;
        case 0x2bf418u: goto label_2bf418;
        case 0x2bf41cu: goto label_2bf41c;
        case 0x2bf420u: goto label_2bf420;
        case 0x2bf424u: goto label_2bf424;
        case 0x2bf428u: goto label_2bf428;
        case 0x2bf42cu: goto label_2bf42c;
        case 0x2bf430u: goto label_2bf430;
        case 0x2bf434u: goto label_2bf434;
        case 0x2bf438u: goto label_2bf438;
        case 0x2bf43cu: goto label_2bf43c;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf444u: goto label_2bf444;
        case 0x2bf448u: goto label_2bf448;
        case 0x2bf44cu: goto label_2bf44c;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf454u: goto label_2bf454;
        case 0x2bf458u: goto label_2bf458;
        case 0x2bf45cu: goto label_2bf45c;
        case 0x2bf460u: goto label_2bf460;
        case 0x2bf464u: goto label_2bf464;
        case 0x2bf468u: goto label_2bf468;
        case 0x2bf46cu: goto label_2bf46c;
        case 0x2bf470u: goto label_2bf470;
        case 0x2bf474u: goto label_2bf474;
        case 0x2bf478u: goto label_2bf478;
        case 0x2bf47cu: goto label_2bf47c;
        case 0x2bf480u: goto label_2bf480;
        case 0x2bf484u: goto label_2bf484;
        case 0x2bf488u: goto label_2bf488;
        case 0x2bf48cu: goto label_2bf48c;
        case 0x2bf490u: goto label_2bf490;
        case 0x2bf494u: goto label_2bf494;
        case 0x2bf498u: goto label_2bf498;
        case 0x2bf49cu: goto label_2bf49c;
        case 0x2bf4a0u: goto label_2bf4a0;
        case 0x2bf4a4u: goto label_2bf4a4;
        case 0x2bf4a8u: goto label_2bf4a8;
        case 0x2bf4acu: goto label_2bf4ac;
        case 0x2bf4b0u: goto label_2bf4b0;
        case 0x2bf4b4u: goto label_2bf4b4;
        case 0x2bf4b8u: goto label_2bf4b8;
        case 0x2bf4bcu: goto label_2bf4bc;
        case 0x2bf4c0u: goto label_2bf4c0;
        case 0x2bf4c4u: goto label_2bf4c4;
        case 0x2bf4c8u: goto label_2bf4c8;
        case 0x2bf4ccu: goto label_2bf4cc;
        case 0x2bf4d0u: goto label_2bf4d0;
        case 0x2bf4d4u: goto label_2bf4d4;
        case 0x2bf4d8u: goto label_2bf4d8;
        case 0x2bf4dcu: goto label_2bf4dc;
        case 0x2bf4e0u: goto label_2bf4e0;
        case 0x2bf4e4u: goto label_2bf4e4;
        case 0x2bf4e8u: goto label_2bf4e8;
        case 0x2bf4ecu: goto label_2bf4ec;
        case 0x2bf4f0u: goto label_2bf4f0;
        case 0x2bf4f4u: goto label_2bf4f4;
        case 0x2bf4f8u: goto label_2bf4f8;
        case 0x2bf4fcu: goto label_2bf4fc;
        case 0x2bf500u: goto label_2bf500;
        case 0x2bf504u: goto label_2bf504;
        case 0x2bf508u: goto label_2bf508;
        case 0x2bf50cu: goto label_2bf50c;
        case 0x2bf510u: goto label_2bf510;
        case 0x2bf514u: goto label_2bf514;
        case 0x2bf518u: goto label_2bf518;
        case 0x2bf51cu: goto label_2bf51c;
        case 0x2bf520u: goto label_2bf520;
        case 0x2bf524u: goto label_2bf524;
        case 0x2bf528u: goto label_2bf528;
        case 0x2bf52cu: goto label_2bf52c;
        case 0x2bf530u: goto label_2bf530;
        case 0x2bf534u: goto label_2bf534;
        case 0x2bf538u: goto label_2bf538;
        case 0x2bf53cu: goto label_2bf53c;
        case 0x2bf540u: goto label_2bf540;
        case 0x2bf544u: goto label_2bf544;
        case 0x2bf548u: goto label_2bf548;
        case 0x2bf54cu: goto label_2bf54c;
        case 0x2bf550u: goto label_2bf550;
        case 0x2bf554u: goto label_2bf554;
        case 0x2bf558u: goto label_2bf558;
        case 0x2bf55cu: goto label_2bf55c;
        case 0x2bf560u: goto label_2bf560;
        case 0x2bf564u: goto label_2bf564;
        case 0x2bf568u: goto label_2bf568;
        case 0x2bf56cu: goto label_2bf56c;
        case 0x2bf570u: goto label_2bf570;
        case 0x2bf574u: goto label_2bf574;
        case 0x2bf578u: goto label_2bf578;
        case 0x2bf57cu: goto label_2bf57c;
        case 0x2bf580u: goto label_2bf580;
        case 0x2bf584u: goto label_2bf584;
        case 0x2bf588u: goto label_2bf588;
        case 0x2bf58cu: goto label_2bf58c;
        case 0x2bf590u: goto label_2bf590;
        case 0x2bf594u: goto label_2bf594;
        case 0x2bf598u: goto label_2bf598;
        case 0x2bf59cu: goto label_2bf59c;
        case 0x2bf5a0u: goto label_2bf5a0;
        case 0x2bf5a4u: goto label_2bf5a4;
        case 0x2bf5a8u: goto label_2bf5a8;
        case 0x2bf5acu: goto label_2bf5ac;
        case 0x2bf5b0u: goto label_2bf5b0;
        case 0x2bf5b4u: goto label_2bf5b4;
        case 0x2bf5b8u: goto label_2bf5b8;
        case 0x2bf5bcu: goto label_2bf5bc;
        case 0x2bf5c0u: goto label_2bf5c0;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5c8u: goto label_2bf5c8;
        case 0x2bf5ccu: goto label_2bf5cc;
        case 0x2bf5d0u: goto label_2bf5d0;
        case 0x2bf5d4u: goto label_2bf5d4;
        case 0x2bf5d8u: goto label_2bf5d8;
        case 0x2bf5dcu: goto label_2bf5dc;
        case 0x2bf5e0u: goto label_2bf5e0;
        case 0x2bf5e4u: goto label_2bf5e4;
        case 0x2bf5e8u: goto label_2bf5e8;
        case 0x2bf5ecu: goto label_2bf5ec;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf5f4u: goto label_2bf5f4;
        case 0x2bf5f8u: goto label_2bf5f8;
        case 0x2bf5fcu: goto label_2bf5fc;
        case 0x2bf600u: goto label_2bf600;
        case 0x2bf604u: goto label_2bf604;
        case 0x2bf608u: goto label_2bf608;
        case 0x2bf60cu: goto label_2bf60c;
        case 0x2bf610u: goto label_2bf610;
        case 0x2bf614u: goto label_2bf614;
        case 0x2bf618u: goto label_2bf618;
        case 0x2bf61cu: goto label_2bf61c;
        case 0x2bf620u: goto label_2bf620;
        case 0x2bf624u: goto label_2bf624;
        case 0x2bf628u: goto label_2bf628;
        case 0x2bf62cu: goto label_2bf62c;
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf634u: goto label_2bf634;
        case 0x2bf638u: goto label_2bf638;
        case 0x2bf63cu: goto label_2bf63c;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf644u: goto label_2bf644;
        case 0x2bf648u: goto label_2bf648;
        case 0x2bf64cu: goto label_2bf64c;
        case 0x2bf650u: goto label_2bf650;
        case 0x2bf654u: goto label_2bf654;
        case 0x2bf658u: goto label_2bf658;
        case 0x2bf65cu: goto label_2bf65c;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf664u: goto label_2bf664;
        case 0x2bf668u: goto label_2bf668;
        case 0x2bf66cu: goto label_2bf66c;
        case 0x2bf670u: goto label_2bf670;
        case 0x2bf674u: goto label_2bf674;
        case 0x2bf678u: goto label_2bf678;
        case 0x2bf67cu: goto label_2bf67c;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf684u: goto label_2bf684;
        case 0x2bf688u: goto label_2bf688;
        case 0x2bf68cu: goto label_2bf68c;
        case 0x2bf690u: goto label_2bf690;
        case 0x2bf694u: goto label_2bf694;
        case 0x2bf698u: goto label_2bf698;
        case 0x2bf69cu: goto label_2bf69c;
        case 0x2bf6a0u: goto label_2bf6a0;
        case 0x2bf6a4u: goto label_2bf6a4;
        case 0x2bf6a8u: goto label_2bf6a8;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6b0u: goto label_2bf6b0;
        case 0x2bf6b4u: goto label_2bf6b4;
        case 0x2bf6b8u: goto label_2bf6b8;
        case 0x2bf6bcu: goto label_2bf6bc;
        case 0x2bf6c0u: goto label_2bf6c0;
        case 0x2bf6c4u: goto label_2bf6c4;
        case 0x2bf6c8u: goto label_2bf6c8;
        case 0x2bf6ccu: goto label_2bf6cc;
        case 0x2bf6d0u: goto label_2bf6d0;
        case 0x2bf6d4u: goto label_2bf6d4;
        case 0x2bf6d8u: goto label_2bf6d8;
        case 0x2bf6dcu: goto label_2bf6dc;
        case 0x2bf6e0u: goto label_2bf6e0;
        case 0x2bf6e4u: goto label_2bf6e4;
        case 0x2bf6e8u: goto label_2bf6e8;
        case 0x2bf6ecu: goto label_2bf6ec;
        case 0x2bf6f0u: goto label_2bf6f0;
        case 0x2bf6f4u: goto label_2bf6f4;
        case 0x2bf6f8u: goto label_2bf6f8;
        case 0x2bf6fcu: goto label_2bf6fc;
        case 0x2bf700u: goto label_2bf700;
        case 0x2bf704u: goto label_2bf704;
        case 0x2bf708u: goto label_2bf708;
        case 0x2bf70cu: goto label_2bf70c;
        case 0x2bf710u: goto label_2bf710;
        case 0x2bf714u: goto label_2bf714;
        case 0x2bf718u: goto label_2bf718;
        case 0x2bf71cu: goto label_2bf71c;
        case 0x2bf720u: goto label_2bf720;
        case 0x2bf724u: goto label_2bf724;
        case 0x2bf728u: goto label_2bf728;
        case 0x2bf72cu: goto label_2bf72c;
        case 0x2bf730u: goto label_2bf730;
        case 0x2bf734u: goto label_2bf734;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf740u: goto label_2bf740;
        case 0x2bf744u: goto label_2bf744;
        default: break;
    }

    ctx->pc = 0x2bf118u;

label_2bf118:
    // 0x2bf118: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2bf118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2bf11c:
    // 0x2bf11c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2bf11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2bf120:
    // 0x2bf120: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2bf120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2bf124:
    // 0x2bf124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bf124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf128:
    // 0x2bf128: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2bf128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2bf12c:
    // 0x2bf12c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2bf12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2bf130:
    // 0x2bf130: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2bf130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2bf134:
    // 0x2bf134: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2bf134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2bf138:
    // 0x2bf138: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2bf138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2bf13c:
    // 0x2bf13c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2bf13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2bf140:
    // 0x2bf140: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2bf140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2bf144:
    // 0x2bf144: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bf144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2bf148:
    // 0x2bf148: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2bf148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2bf14c:
    // 0x2bf14c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bf14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf150:
    // 0x2bf150: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2bf150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2bf154:
    // 0x2bf154: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2bf154u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bf158:
    // 0x2bf158: 0xc05959e  jal         func_165678
label_2bf15c:
    if (ctx->pc == 0x2BF15Cu) {
        ctx->pc = 0x2BF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF158u;
        // 0x2bf15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF160u;
        goto label_2bf160;
    }
    ctx->pc = 0x2BF158u;
    SET_GPR_U32(ctx, 31, 0x2BF160u);
    ctx->pc = 0x2BF15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF158u;
    // 0x2bf15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BF158u, 0x2BF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF160u;
label_2bf160:
    // 0x2bf160: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bf160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf164:
    // 0x2bf164: 0x1280016a  beqz        $s4, . + 4 + (0x16A << 2)
label_2bf168:
    if (ctx->pc == 0x2BF168u) {
        ctx->pc = 0x2BF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF164u;
        // 0x2bf168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF16Cu;
        goto label_2bf16c;
    }
    ctx->pc = 0x2BF164u;
    {
        const bool branch_taken_0x2bf164 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF164u;
        // 0x2bf168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf164) {
            ctx->pc = 0x2BF710u;
            goto label_2bf710;
        }
    }
    ctx->pc = 0x2BF16Cu;
label_2bf16c:
    // 0x2bf16c: 0xc08a1a8  jal         func_2286A0
label_2bf170:
    if (ctx->pc == 0x2BF170u) {
        ctx->pc = 0x2BF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF16Cu;
        // 0x2bf170: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF174u;
        goto label_2bf174;
    }
    ctx->pc = 0x2BF16Cu;
    SET_GPR_U32(ctx, 31, 0x2BF174u);
    ctx->pc = 0x2BF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF16Cu;
    // 0x2bf170: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x2BF16Cu, 0x2BF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF174u;
label_2bf174:
    // 0x2bf174: 0x54550003  bnel        $v0, $s5, . + 4 + (0x3 << 2)
label_2bf178:
    if (ctx->pc == 0x2BF178u) {
        ctx->pc = 0x2BF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF174u;
        // 0x2bf178: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF17Cu;
        goto label_2bf17c;
    }
    ctx->pc = 0x2BF174u;
    {
        const bool branch_taken_0x2bf174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2bf174) {
            ctx->pc = 0x2BF178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF174u;
            // 0x2bf178: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF184u;
            goto label_2bf184;
        }
    }
    ctx->pc = 0x2BF17Cu;
label_2bf17c:
    // 0x2bf17c: 0x10000165  b           . + 4 + (0x165 << 2)
label_2bf180:
    if (ctx->pc == 0x2BF180u) {
        ctx->pc = 0x2BF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF17Cu;
        // 0x2bf180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF184u;
        goto label_2bf184;
    }
    ctx->pc = 0x2BF17Cu;
    {
        const bool branch_taken_0x2bf17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF17Cu;
        // 0x2bf180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf17c) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF184u;
label_2bf184:
    // 0x2bf184: 0x10a00163  beqz        $a1, . + 4 + (0x163 << 2)
label_2bf188:
    if (ctx->pc == 0x2BF188u) {
        ctx->pc = 0x2BF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF184u;
        // 0x2bf188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF18Cu;
        goto label_2bf18c;
    }
    ctx->pc = 0x2BF184u;
    {
        const bool branch_taken_0x2bf184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF184u;
        // 0x2bf188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf184) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF18Cu;
label_2bf18c:
    // 0x2bf18c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2bf18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2bf190:
    // 0x2bf190: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2bf190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2bf194:
    // 0x2bf194: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2bf194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2bf198:
    // 0x2bf198: 0x40f809  jalr        $v0
label_2bf19c:
    if (ctx->pc == 0x2BF19Cu) {
        ctx->pc = 0x2BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF198u;
        // 0x2bf19c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1A0u;
        goto label_2bf1a0;
    }
    ctx->pc = 0x2BF198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF1A0u);
        ctx->pc = 0x2BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF198u;
        // 0x2bf19c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF198u, 0x2BF1A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF1A0u;
label_2bf1a0:
    // 0x2bf1a0: 0x38420026  xori        $v0, $v0, 0x26
    ctx->pc = 0x2bf1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)38);
label_2bf1a4:
    // 0x2bf1a4: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
label_2bf1a8:
    if (ctx->pc == 0x2BF1A8u) {
        ctx->pc = 0x2BF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1A4u;
        // 0x2bf1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1ACu;
        goto label_2bf1ac;
    }
    ctx->pc = 0x2BF1A4u;
    {
        const bool branch_taken_0x2bf1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1A4u;
        // 0x2bf1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1a4) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF1ACu;
label_2bf1ac:
    // 0x2bf1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf1b0:
    // 0x2bf1b0: 0xc089bfc  jal         func_226FF0
label_2bf1b4:
    if (ctx->pc == 0x2BF1B4u) {
        ctx->pc = 0x2BF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B0u;
        // 0x2bf1b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1B8u;
        goto label_2bf1b8;
    }
    ctx->pc = 0x2BF1B0u;
    SET_GPR_U32(ctx, 31, 0x2BF1B8u);
    ctx->pc = 0x2BF1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1B0u;
    // 0x2bf1b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2BF1B0u, 0x2BF1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1B8u;
label_2bf1b8:
    // 0x2bf1b8: 0xc0e57ce  jal         func_395F38
label_2bf1bc:
    if (ctx->pc == 0x2BF1BCu) {
        ctx->pc = 0x2BF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B8u;
        // 0x2bf1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1C0u;
        goto label_2bf1c0;
    }
    ctx->pc = 0x2BF1B8u;
    SET_GPR_U32(ctx, 31, 0x2BF1C0u);
    ctx->pc = 0x2BF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1B8u;
    // 0x2bf1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2BF1B8u, 0x2BF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1C0u;
label_2bf1c0:
    // 0x2bf1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf1c4:
    // 0x2bf1c4: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
label_2bf1c8:
    if (ctx->pc == 0x2BF1C8u) {
        ctx->pc = 0x2BF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1C4u;
        // 0x2bf1c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1CCu;
        goto label_2bf1cc;
    }
    ctx->pc = 0x2BF1C4u;
    {
        const bool branch_taken_0x2bf1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf1c4) {
            ctx->pc = 0x2BF1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF1C4u;
            // 0x2bf1c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF1FCu;
            goto label_2bf1fc;
        }
    }
    ctx->pc = 0x2BF1CCu;
label_2bf1cc:
    // 0x2bf1cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2bf1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2bf1d0:
    // 0x2bf1d0: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x2bf1d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bf1d4:
    // 0x2bf1d4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2bf1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2bf1d8:
    // 0x2bf1d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2bf1dc:
    // 0x2bf1dc: 0x40f809  jalr        $v0
label_2bf1e0:
    if (ctx->pc == 0x2BF1E0u) {
        ctx->pc = 0x2BF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1DCu;
        // 0x2bf1e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1E4u;
        goto label_2bf1e4;
    }
    ctx->pc = 0x2BF1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF1E4u);
        ctx->pc = 0x2BF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1DCu;
        // 0x2bf1e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF1DCu, 0x2BF1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF1E4u;
label_2bf1e4:
    // 0x2bf1e4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2bf1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2bf1e8:
    // 0x2bf1e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bf1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2bf1ec:
    // 0x2bf1ec: 0x2b00a  movz        $s6, $zero, $v0
    ctx->pc = 0x2bf1ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2bf1f0:
    // 0x2bf1f0: 0x56d500ca  bnel        $s6, $s5, . + 4 + (0xCA << 2)
label_2bf1f4:
    if (ctx->pc == 0x2BF1F4u) {
        ctx->pc = 0x2BF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1F0u;
        // 0x2bf1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1F8u;
        goto label_2bf1f8;
    }
    ctx->pc = 0x2BF1F0u;
    {
        const bool branch_taken_0x2bf1f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 21));
        if (branch_taken_0x2bf1f0) {
            ctx->pc = 0x2BF1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF1F0u;
            // 0x2bf1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF51Cu;
            goto label_2bf51c;
        }
    }
    ctx->pc = 0x2BF1F8u;
label_2bf1f8:
    // 0x2bf1f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2bf1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf1fc:
    // 0x2bf1fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2bf1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2bf200:
    // 0x2bf200: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2bf204:
    // 0x2bf204: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
label_2bf208:
    if (ctx->pc == 0x2BF208u) {
        ctx->pc = 0x2BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF204u;
        // 0x2bf208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF20Cu;
        goto label_2bf20c;
    }
    ctx->pc = 0x2BF204u;
    {
        const bool branch_taken_0x2bf204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF204u;
        // 0x2bf208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf204) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF20Cu;
label_2bf20c:
    // 0x2bf20c: 0x26910090  addiu       $s1, $s4, 0x90
    ctx->pc = 0x2bf20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2bf210:
    // 0x2bf210: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2bf210u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bf214:
    // 0x2bf214: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2bf214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2bf218:
    // 0x2bf218: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2bf218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2bf21c:
    // 0x2bf21c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2bf21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2bf220:
    // 0x2bf220: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bf220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bf224:
    // 0x2bf224: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bf224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bf228:
    // 0x2bf228: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2bf228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2bf22c:
    // 0x2bf22c: 0xc0cdb38  jal         func_336CE0
label_2bf230:
    if (ctx->pc == 0x2BF230u) {
        ctx->pc = 0x2BF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF22Cu;
        // 0x2bf230: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF234u;
        goto label_2bf234;
    }
    ctx->pc = 0x2BF22Cu;
    SET_GPR_U32(ctx, 31, 0x2BF234u);
    ctx->pc = 0x2BF230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF22Cu;
    // 0x2bf230: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BF22Cu, 0x2BF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF234u;
label_2bf234:
    // 0x2bf234: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bf234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bf238:
    // 0x2bf238: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2bf238u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2bf23c:
    // 0x2bf23c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x2bf23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_2bf240:
    // 0x2bf240: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bf240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bf244:
    // 0x2bf244: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bf244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bf248:
    // 0x2bf248: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bf248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2bf24c:
    // 0x2bf24c: 0x8c640844  lw          $a0, 0x844($v1)
    ctx->pc = 0x2bf24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2116)));
label_2bf250:
    // 0x2bf250: 0xc0e397e  jal         func_38E5F8
label_2bf254:
    if (ctx->pc == 0x2BF254u) {
        ctx->pc = 0x2BF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF250u;
        // 0x2bf254: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF258u;
        goto label_2bf258;
    }
    ctx->pc = 0x2BF250u;
    SET_GPR_U32(ctx, 31, 0x2BF258u);
    ctx->pc = 0x2BF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF250u;
    // 0x2bf254: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E5F8u, 0x2BF250u, 0x2BF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF258u;
label_2bf258:
    // 0x2bf258: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf25c:
    // 0x2bf25c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_2bf260:
    if (ctx->pc == 0x2BF260u) {
        ctx->pc = 0x2BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF25Cu;
        // 0x2bf260: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF264u;
        goto label_2bf264;
    }
    ctx->pc = 0x2BF25Cu;
    {
        const bool branch_taken_0x2bf25c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF25Cu;
        // 0x2bf260: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf25c) {
            ctx->pc = 0x2BF334u;
            goto label_2bf334;
        }
    }
    ctx->pc = 0x2BF264u;
label_2bf264:
    // 0x2bf264: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2bf264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2bf268:
    // 0x2bf268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf26c:
    // 0x2bf26c: 0x0  nop
    ctx->pc = 0x2bf26cu;
    // NOP
label_2bf270:
    // 0x2bf270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bf274:
    // 0x2bf274: 0x0  nop
    ctx->pc = 0x2bf274u;
    // NOP
label_2bf278:
    // 0x2bf278: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
label_2bf27c:
    if (ctx->pc == 0x2BF27Cu) {
        ctx->pc = 0x2BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF278u;
        // 0x2bf27c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF280u;
        goto label_2bf280;
    }
    ctx->pc = 0x2BF278u;
    {
        const bool branch_taken_0x2bf278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf278) {
            ctx->pc = 0x2BF27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF278u;
            // 0x2bf27c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF338u;
            goto label_2bf338;
        }
    }
    ctx->pc = 0x2BF280u;
label_2bf280:
    // 0x2bf280: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2bf280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2bf284:
    // 0x2bf284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf288:
    // 0x2bf288: 0x0  nop
    ctx->pc = 0x2bf288u;
    // NOP
label_2bf28c:
    // 0x2bf28c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bf28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bf290:
    // 0x2bf290: 0x0  nop
    ctx->pc = 0x2bf290u;
    // NOP
label_2bf294:
    // 0x2bf294: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
label_2bf298:
    if (ctx->pc == 0x2BF298u) {
        ctx->pc = 0x2BF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF294u;
        // 0x2bf298: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF29Cu;
        goto label_2bf29c;
    }
    ctx->pc = 0x2BF294u;
    {
        const bool branch_taken_0x2bf294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf294) {
            ctx->pc = 0x2BF298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF294u;
            // 0x2bf298: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF338u;
            goto label_2bf338;
        }
    }
    ctx->pc = 0x2BF29Cu;
label_2bf29c:
    // 0x2bf29c: 0xc0e36b8  jal         func_38DAE0
label_2bf2a0:
    if (ctx->pc == 0x2BF2A0u) {
        ctx->pc = 0x2BF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF29Cu;
        // 0x2bf2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2A4u;
        goto label_2bf2a4;
    }
    ctx->pc = 0x2BF29Cu;
    SET_GPR_U32(ctx, 31, 0x2BF2A4u);
    ctx->pc = 0x2BF2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF29Cu;
    // 0x2bf2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DAE0u, 0x2BF29Cu, 0x2BF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2A4u;
label_2bf2a4:
    // 0x2bf2a4: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2bf2a8:
    if (ctx->pc == 0x2BF2A8u) {
        ctx->pc = 0x2BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2A4u;
        // 0x2bf2a8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2ACu;
        goto label_2bf2ac;
    }
    ctx->pc = 0x2BF2A4u;
    {
        const bool branch_taken_0x2bf2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2a4) {
            ctx->pc = 0x2BF2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF2A4u;
            // 0x2bf2a8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF338u;
            goto label_2bf338;
        }
    }
    ctx->pc = 0x2BF2ACu;
label_2bf2ac:
    // 0x2bf2ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bf2b0:
    // 0x2bf2b0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2bf2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2bf2b4:
    // 0x2bf2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf2b8:
    // 0x2bf2b8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2bf2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2bf2bc:
    // 0x2bf2bc: 0xc0888dc  jal         func_222370
label_2bf2c0:
    if (ctx->pc == 0x2BF2C0u) {
        ctx->pc = 0x2BF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2BCu;
        // 0x2bf2c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2C4u;
        goto label_2bf2c4;
    }
    ctx->pc = 0x2BF2BCu;
    SET_GPR_U32(ctx, 31, 0x2BF2C4u);
    ctx->pc = 0x2BF2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2BCu;
    // 0x2bf2c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x2BF2BCu, 0x2BF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2C4u;
label_2bf2c4:
    // 0x2bf2c4: 0x1455001c  bne         $v0, $s5, . + 4 + (0x1C << 2)
label_2bf2c8:
    if (ctx->pc == 0x2BF2C8u) {
        ctx->pc = 0x2BF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2C4u;
        // 0x2bf2c8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2CCu;
        goto label_2bf2cc;
    }
    ctx->pc = 0x2BF2C4u;
    {
        const bool branch_taken_0x2bf2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2BF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2C4u;
        // 0x2bf2c8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2c4) {
            ctx->pc = 0x2BF338u;
            goto label_2bf338;
        }
    }
    ctx->pc = 0x2BF2CCu;
label_2bf2cc:
    // 0x2bf2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf2d0:
    // 0x2bf2d0: 0xc0e3604  jal         func_38D810
label_2bf2d4:
    if (ctx->pc == 0x2BF2D4u) {
        ctx->pc = 0x2BF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2D0u;
        // 0x2bf2d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2D8u;
        goto label_2bf2d8;
    }
    ctx->pc = 0x2BF2D0u;
    SET_GPR_U32(ctx, 31, 0x2BF2D8u);
    ctx->pc = 0x2BF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2D0u;
    // 0x2bf2d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D810u, 0x2BF2D0u, 0x2BF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2D8u;
label_2bf2d8:
    // 0x2bf2d8: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x2bf2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_2bf2dc:
    // 0x2bf2dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2bf2e0:
    if (ctx->pc == 0x2BF2E0u) {
        ctx->pc = 0x2BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2DCu;
        // 0x2bf2e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2E4u;
        goto label_2bf2e4;
    }
    ctx->pc = 0x2BF2DCu;
    {
        const bool branch_taken_0x2bf2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2DCu;
        // 0x2bf2e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2dc) {
            ctx->pc = 0x2BF334u;
            goto label_2bf334;
        }
    }
    ctx->pc = 0x2BF2E4u;
label_2bf2e4:
    // 0x2bf2e4: 0xc0e3666  jal         func_38D998
label_2bf2e8:
    if (ctx->pc == 0x2BF2E8u) {
        ctx->pc = 0x2BF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2E4u;
        // 0x2bf2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2ECu;
        goto label_2bf2ec;
    }
    ctx->pc = 0x2BF2E4u;
    SET_GPR_U32(ctx, 31, 0x2BF2ECu);
    ctx->pc = 0x2BF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2E4u;
    // 0x2bf2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D998u, 0x2BF2E4u, 0x2BF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2ECu;
label_2bf2ec:
    // 0x2bf2ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf2f0:
    // 0x2bf2f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf2f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf2f4:
    // 0x2bf2f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf2f8:
    // 0x2bf2f8: 0x40f809  jalr        $v0
label_2bf2fc:
    if (ctx->pc == 0x2BF2FCu) {
        ctx->pc = 0x2BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2F8u;
        // 0x2bf2fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF300u;
        goto label_2bf300;
    }
    ctx->pc = 0x2BF2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF300u);
        ctx->pc = 0x2BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2F8u;
        // 0x2bf2fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF2F8u, 0x2BF300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF300u;
label_2bf300:
    // 0x2bf300: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bf300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf304:
    // 0x2bf304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf308:
    // 0x2bf308: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf30c:
    // 0x2bf30c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf310:
    // 0x2bf310: 0x40f809  jalr        $v0
label_2bf314:
    if (ctx->pc == 0x2BF314u) {
        ctx->pc = 0x2BF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF310u;
        // 0x2bf314: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF318u;
        goto label_2bf318;
    }
    ctx->pc = 0x2BF310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF318u);
        ctx->pc = 0x2BF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF310u;
        // 0x2bf314: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF310u, 0x2BF318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF318u;
label_2bf318:
    // 0x2bf318: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2bf318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2bf31c:
    // 0x2bf31c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf320:
    // 0x2bf320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf324:
    // 0x2bf324: 0xc0b76d0  jal         func_2DDB40
label_2bf328:
    if (ctx->pc == 0x2BF328u) {
        ctx->pc = 0x2BF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF324u;
        // 0x2bf328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF32Cu;
        goto label_2bf32c;
    }
    ctx->pc = 0x2BF324u;
    SET_GPR_U32(ctx, 31, 0x2BF32Cu);
    ctx->pc = 0x2BF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF324u;
    // 0x2bf328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDB40u, 0x2BF324u, 0x2BF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF32Cu;
label_2bf32c:
    // 0x2bf32c: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_2bf330:
    if (ctx->pc == 0x2BF330u) {
        ctx->pc = 0x2BF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF32Cu;
        // 0x2bf330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF334u;
        goto label_2bf334;
    }
    ctx->pc = 0x2BF32Cu;
    {
        const bool branch_taken_0x2bf32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF32Cu;
        // 0x2bf330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf32c) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF334u;
label_2bf334:
    // 0x2bf334: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x2bf334u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_2bf338:
    // 0x2bf338: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2bf338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2bf33c:
    // 0x2bf33c: 0xc6a048b8  lwc1        $f0, 0x48B8($s5)
    ctx->pc = 0x2bf33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 18616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bf340:
    // 0x2bf340: 0x2442f230  addiu       $v0, $v0, -0xDD0
    ctx->pc = 0x2bf340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963760));
label_2bf344:
    // 0x2bf344: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2bf344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2bf348:
    // 0x2bf348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf34c:
    // 0x2bf34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf350:
    // 0x2bf350: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bf350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2bf354:
    // 0x2bf354: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2bf354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2bf358:
    // 0x2bf358: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x2bf358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
label_2bf35c:
    // 0x2bf35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bf35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf360:
    // 0x2bf360: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bf360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bf364:
    // 0x2bf364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bf364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf368:
    // 0x2bf368: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bf368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bf36c:
    // 0x2bf36c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bf36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf370:
    // 0x2bf370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bf370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf374:
    // 0x2bf374: 0xc0a757c  jal         func_29D5F0
label_2bf378:
    if (ctx->pc == 0x2BF378u) {
        ctx->pc = 0x2BF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF374u;
        // 0x2bf378: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF37Cu;
        goto label_2bf37c;
    }
    ctx->pc = 0x2BF374u;
    SET_GPR_U32(ctx, 31, 0x2BF37Cu);
    ctx->pc = 0x2BF378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF374u;
    // 0x2bf378: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2BF374u, 0x2BF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF37Cu;
label_2bf37c:
    // 0x2bf37c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2bf37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2bf380:
    // 0x2bf380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf384:
    // 0x2bf384: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2bf384u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bf388:
    // 0x2bf388: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_2bf38c:
    if (ctx->pc == 0x2BF38Cu) {
        ctx->pc = 0x2BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF388u;
        // 0x2bf38c: 0x2477f2f0  addiu       $s7, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF390u;
        goto label_2bf390;
    }
    ctx->pc = 0x2BF388u;
    {
        const bool branch_taken_0x2bf388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF388u;
        // 0x2bf38c: 0x2477f2f0  addiu       $s7, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf388) {
            ctx->pc = 0x2BF470u;
            goto label_2bf470;
        }
    }
    ctx->pc = 0x2BF390u;
label_2bf390:
    // 0x2bf390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bf390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bf394:
    // 0x2bf394: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2bf394u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2bf398:
    // 0x2bf398: 0xc0e44cc  jal         func_391330
label_2bf39c:
    if (ctx->pc == 0x2BF39Cu) {
        ctx->pc = 0x2BF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF398u;
        // 0x2bf39c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3A0u;
        goto label_2bf3a0;
    }
    ctx->pc = 0x2BF398u;
    SET_GPR_U32(ctx, 31, 0x2BF3A0u);
    ctx->pc = 0x2BF39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF398u;
    // 0x2bf39c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2BF398u, 0x2BF3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3A0u;
label_2bf3a0:
    // 0x2bf3a0: 0x9443005e  lhu         $v1, 0x5E($v0)
    ctx->pc = 0x2bf3a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
label_2bf3a4:
    // 0x2bf3a4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2bf3a8:
    if (ctx->pc == 0x2BF3A8u) {
        ctx->pc = 0x2BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3A4u;
        // 0x2bf3a8: 0x80440087  lb          $a0, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3ACu;
        goto label_2bf3ac;
    }
    ctx->pc = 0x2BF3A4u;
    {
        const bool branch_taken_0x2bf3a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3A4u;
        // 0x2bf3a8: 0x80440087  lb          $a0, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3a4) {
            ctx->pc = 0x2BF3B8u;
            goto label_2bf3b8;
        }
    }
    ctx->pc = 0x2BF3ACu;
label_2bf3ac:
    // 0x2bf3ac: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2bf3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2bf3b0:
    // 0x2bf3b0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2bf3b4:
    if (ctx->pc == 0x2BF3B4u) {
        ctx->pc = 0x2BF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3B0u;
        // 0x2bf3b4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3B8u;
        goto label_2bf3b8;
    }
    ctx->pc = 0x2BF3B0u;
    {
        const bool branch_taken_0x2bf3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3b0) {
            ctx->pc = 0x2BF3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF3B0u;
            // 0x2bf3b4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF414u;
            goto label_2bf414;
        }
    }
    ctx->pc = 0x2BF3B8u;
label_2bf3b8:
    // 0x2bf3b8: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x2bf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2bf3bc:
    // 0x2bf3bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bf3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2bf3c0:
    // 0x2bf3c0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2bf3c4:
    if (ctx->pc == 0x2BF3C4u) {
        ctx->pc = 0x2BF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3C0u;
        // 0x2bf3c4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3C8u;
        goto label_2bf3c8;
    }
    ctx->pc = 0x2BF3C0u;
    {
        const bool branch_taken_0x2bf3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3c0) {
            ctx->pc = 0x2BF3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF3C0u;
            // 0x2bf3c4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF414u;
            goto label_2bf414;
        }
    }
    ctx->pc = 0x2BF3C8u;
label_2bf3c8:
    // 0x2bf3c8: 0xc095fce  jal         func_257F38
label_2bf3cc:
    if (ctx->pc == 0x2BF3CCu) {
        ctx->pc = 0x2BF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3C8u;
        // 0x2bf3cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3D0u;
        goto label_2bf3d0;
    }
    ctx->pc = 0x2BF3C8u;
    SET_GPR_U32(ctx, 31, 0x2BF3D0u);
    ctx->pc = 0x2BF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3C8u;
    // 0x2bf3cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2BF3C8u, 0x2BF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3D0u;
label_2bf3d0:
    // 0x2bf3d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bf3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf3d4:
    // 0x2bf3d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf3d8:
    // 0x2bf3d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf3dc:
    // 0x2bf3dc: 0x40f809  jalr        $v0
label_2bf3e0:
    if (ctx->pc == 0x2BF3E0u) {
        ctx->pc = 0x2BF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3DCu;
        // 0x2bf3e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3E4u;
        goto label_2bf3e4;
    }
    ctx->pc = 0x2BF3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF3E4u);
        ctx->pc = 0x2BF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3DCu;
        // 0x2bf3e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3DCu, 0x2BF3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF3E4u;
label_2bf3e4:
    // 0x2bf3e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf3e8:
    // 0x2bf3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf3ec:
    // 0x2bf3ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf3ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf3f0:
    // 0x2bf3f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf3f4:
    // 0x2bf3f4: 0x40f809  jalr        $v0
label_2bf3f8:
    if (ctx->pc == 0x2BF3F8u) {
        ctx->pc = 0x2BF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3F4u;
        // 0x2bf3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3FCu;
        goto label_2bf3fc;
    }
    ctx->pc = 0x2BF3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF3FCu);
        ctx->pc = 0x2BF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3F4u;
        // 0x2bf3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3F4u, 0x2BF3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF3FCu;
label_2bf3fc:
    // 0x2bf3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf400:
    // 0x2bf400: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bf400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf404:
    // 0x2bf404: 0xc0b71c2  jal         func_2DC708
label_2bf408:
    if (ctx->pc == 0x2BF408u) {
        ctx->pc = 0x2BF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF404u;
        // 0x2bf408: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF40Cu;
        goto label_2bf40c;
    }
    ctx->pc = 0x2BF404u;
    SET_GPR_U32(ctx, 31, 0x2BF40Cu);
    ctx->pc = 0x2BF408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF404u;
    // 0x2bf408: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2BF404u, 0x2BF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF40Cu;
label_2bf40c:
    // 0x2bf40c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2bf410:
    if (ctx->pc == 0x2BF410u) {
        ctx->pc = 0x2BF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF40Cu;
        // 0x2bf410: 0x27c3f2f0  addiu       $v1, $fp, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF414u;
        goto label_2bf414;
    }
    ctx->pc = 0x2BF40Cu;
    {
        const bool branch_taken_0x2bf40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF40Cu;
        // 0x2bf410: 0x27c3f2f0  addiu       $v1, $fp, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf40c) {
            ctx->pc = 0x2BF464u;
            goto label_2bf464;
        }
    }
    ctx->pc = 0x2BF414u;
label_2bf414:
    // 0x2bf414: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf418:
    // 0x2bf418: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf41c:
    // 0x2bf41c: 0x40f809  jalr        $v0
label_2bf420:
    if (ctx->pc == 0x2BF420u) {
        ctx->pc = 0x2BF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF41Cu;
        // 0x2bf420: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF424u;
        goto label_2bf424;
    }
    ctx->pc = 0x2BF41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF424u);
        ctx->pc = 0x2BF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF41Cu;
        // 0x2bf420: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF41Cu, 0x2BF424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF424u;
label_2bf424:
    // 0x2bf424: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2bf424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2bf428:
    // 0x2bf428: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bf428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf42c:
    // 0x2bf42c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf430:
    // 0x2bf430: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf434:
    // 0x2bf434: 0x40f809  jalr        $v0
label_2bf438:
    if (ctx->pc == 0x2BF438u) {
        ctx->pc = 0x2BF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF434u;
        // 0x2bf438: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF43Cu;
        goto label_2bf43c;
    }
    ctx->pc = 0x2BF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF43Cu);
        ctx->pc = 0x2BF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF434u;
        // 0x2bf438: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF434u, 0x2BF43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF43Cu;
label_2bf43c:
    // 0x2bf43c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf440:
    // 0x2bf440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf444:
    // 0x2bf444: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf448:
    // 0x2bf448: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf44c:
    // 0x2bf44c: 0x40f809  jalr        $v0
label_2bf450:
    if (ctx->pc == 0x2BF450u) {
        ctx->pc = 0x2BF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF44Cu;
        // 0x2bf450: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF454u;
        goto label_2bf454;
    }
    ctx->pc = 0x2BF44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF454u);
        ctx->pc = 0x2BF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF44Cu;
        // 0x2bf450: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF44Cu, 0x2BF454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF454u;
label_2bf454:
    // 0x2bf454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf458:
    // 0x2bf458: 0xc0b7432  jal         func_2DD0C8
label_2bf45c:
    if (ctx->pc == 0x2BF45Cu) {
        ctx->pc = 0x2BF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF458u;
        // 0x2bf45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF460u;
        goto label_2bf460;
    }
    ctx->pc = 0x2BF458u;
    SET_GPR_U32(ctx, 31, 0x2BF460u);
    ctx->pc = 0x2BF45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF458u;
    // 0x2bf45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD0C8u, 0x2BF458u, 0x2BF460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF460u;
label_2bf460:
    // 0x2bf460: 0x27c3f2f0  addiu       $v1, $fp, -0xD10
    ctx->pc = 0x2bf460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963952));
label_2bf464:
    // 0x2bf464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf468:
    // 0x2bf468: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2bf46c:
    if (ctx->pc == 0x2BF46Cu) {
        ctx->pc = 0x2BF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF468u;
        // 0x2bf46c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF470u;
        goto label_2bf470;
    }
    ctx->pc = 0x2BF468u;
    {
        const bool branch_taken_0x2bf468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF468u;
        // 0x2bf46c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf468) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF470u;
label_2bf470:
    // 0x2bf470: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bf470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bf474:
    // 0x2bf474: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2bf474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2bf478:
    // 0x2bf478: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2bf47c:
    // 0x2bf47c: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bf480:
    // 0x2bf480: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2bf480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2bf484:
    // 0x2bf484: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2bf488:
    if (ctx->pc == 0x2BF488u) {
        ctx->pc = 0x2BF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF484u;
        // 0x2bf488: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF48Cu;
        goto label_2bf48c;
    }
    ctx->pc = 0x2BF484u;
    {
        const bool branch_taken_0x2bf484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF484u;
        // 0x2bf488: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf484) {
            ctx->pc = 0x2BF510u;
            goto label_2bf510;
        }
    }
    ctx->pc = 0x2BF48Cu;
label_2bf48c:
    // 0x2bf48c: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x2bf48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2bf490:
    // 0x2bf490: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bf490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2bf494:
    // 0x2bf494: 0xc0cd4fc  jal         func_3353F0
label_2bf498:
    if (ctx->pc == 0x2BF498u) {
        ctx->pc = 0x2BF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF494u;
        // 0x2bf498: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF49Cu;
        goto label_2bf49c;
    }
    ctx->pc = 0x2BF494u;
    SET_GPR_U32(ctx, 31, 0x2BF49Cu);
    ctx->pc = 0x2BF498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF494u;
    // 0x2bf498: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BF494u, 0x2BF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF49Cu;
label_2bf49c:
    // 0x2bf49c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2bf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2bf4a0:
    // 0x2bf4a0: 0xc6ac48b8  lwc1        $f12, 0x48B8($s5)
    ctx->pc = 0x2bf4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 18616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bf4a4:
    // 0x2bf4a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bf4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf4a8:
    // 0x2bf4a8: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x2bf4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_2bf4ac:
    // 0x2bf4ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bf4b0:
    // 0x2bf4b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf4b4:
    // 0x2bf4b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bf4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf4b8:
    // 0x2bf4b8: 0xc0a764a  jal         func_29D928
label_2bf4bc:
    if (ctx->pc == 0x2BF4BCu) {
        ctx->pc = 0x2BF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4B8u;
        // 0x2bf4bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF4C0u;
        goto label_2bf4c0;
    }
    ctx->pc = 0x2BF4B8u;
    SET_GPR_U32(ctx, 31, 0x2BF4C0u);
    ctx->pc = 0x2BF4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4B8u;
    // 0x2bf4bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D928u, 0x2BF4B8u, 0x2BF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4C0u;
label_2bf4c0:
    // 0x2bf4c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf4c4:
    // 0x2bf4c4: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
label_2bf4c8:
    if (ctx->pc == 0x2BF4C8u) {
        ctx->pc = 0x2BF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4C4u;
        // 0x2bf4c8: 0x27c2f2f0  addiu       $v0, $fp, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF4CCu;
        goto label_2bf4cc;
    }
    ctx->pc = 0x2BF4C4u;
    {
        const bool branch_taken_0x2bf4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf4c4) {
            ctx->pc = 0x2BF4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF4C4u;
            // 0x2bf4c8: 0x27c2f2f0  addiu       $v0, $fp, -0xD10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963952));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF514u;
            goto label_2bf514;
        }
    }
    ctx->pc = 0x2BF4CCu;
label_2bf4cc:
    // 0x2bf4cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2bf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2bf4d0:
    // 0x2bf4d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf4d4:
    // 0x2bf4d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf4d8:
    // 0x2bf4d8: 0x40f809  jalr        $v0
label_2bf4dc:
    if (ctx->pc == 0x2BF4DCu) {
        ctx->pc = 0x2BF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4D8u;
        // 0x2bf4dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF4E0u;
        goto label_2bf4e0;
    }
    ctx->pc = 0x2BF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF4E0u);
        ctx->pc = 0x2BF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4D8u;
        // 0x2bf4dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF4D8u, 0x2BF4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF4E0u;
label_2bf4e0:
    // 0x2bf4e0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2bf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2bf4e4:
    // 0x2bf4e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bf4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf4e8:
    // 0x2bf4e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf4ec:
    // 0x2bf4ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf4f0:
    // 0x2bf4f0: 0x40f809  jalr        $v0
label_2bf4f4:
    if (ctx->pc == 0x2BF4F4u) {
        ctx->pc = 0x2BF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4F0u;
        // 0x2bf4f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF4F8u;
        goto label_2bf4f8;
    }
    ctx->pc = 0x2BF4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF4F8u);
        ctx->pc = 0x2BF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4F0u;
        // 0x2bf4f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF4F0u, 0x2BF4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF4F8u;
label_2bf4f8:
    // 0x2bf4f8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2bf4fc:
    // 0x2bf4fc: 0xc0b7432  jal         func_2DD0C8
label_2bf500:
    if (ctx->pc == 0x2BF500u) {
        ctx->pc = 0x2BF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4FCu;
        // 0x2bf500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF504u;
        goto label_2bf504;
    }
    ctx->pc = 0x2BF4FCu;
    SET_GPR_U32(ctx, 31, 0x2BF504u);
    ctx->pc = 0x2BF500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4FCu;
    // 0x2bf500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD0C8u, 0x2BF4FCu, 0x2BF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF504u;
label_2bf504:
    // 0x2bf504: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x2bf504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_2bf508:
    // 0x2bf508: 0x10000082  b           . + 4 + (0x82 << 2)
label_2bf50c:
    if (ctx->pc == 0x2BF50Cu) {
        ctx->pc = 0x2BF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF508u;
        // 0x2bf50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF510u;
        goto label_2bf510;
    }
    ctx->pc = 0x2BF508u;
    {
        const bool branch_taken_0x2bf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF508u;
        // 0x2bf50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf508) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF510u;
label_2bf510:
    // 0x2bf510: 0x27c2f2f0  addiu       $v0, $fp, -0xD10
    ctx->pc = 0x2bf510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963952));
label_2bf514:
    // 0x2bf514: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2bf518:
    if (ctx->pc == 0x2BF518u) {
        ctx->pc = 0x2BF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF514u;
        // 0x2bf518: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF51Cu;
        goto label_2bf51c;
    }
    ctx->pc = 0x2BF514u;
    {
        const bool branch_taken_0x2bf514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF514u;
        // 0x2bf518: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf514) {
            ctx->pc = 0x2BF710u;
            goto label_2bf710;
        }
    }
    ctx->pc = 0x2BF51Cu;
label_2bf51c:
    // 0x2bf51c: 0xc088fa8  jal         func_223EA0
label_2bf520:
    if (ctx->pc == 0x2BF520u) {
        ctx->pc = 0x2BF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF51Cu;
        // 0x2bf520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF524u;
        goto label_2bf524;
    }
    ctx->pc = 0x2BF51Cu;
    SET_GPR_U32(ctx, 31, 0x2BF524u);
    ctx->pc = 0x2BF520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF51Cu;
    // 0x2bf520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2BF51Cu, 0x2BF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF524u;
label_2bf524:
    // 0x2bf524: 0x10550005  beq         $v0, $s5, . + 4 + (0x5 << 2)
label_2bf528:
    if (ctx->pc == 0x2BF528u) {
        ctx->pc = 0x2BF52Cu;
        goto label_2bf52c;
    }
    ctx->pc = 0x2BF524u;
    {
        const bool branch_taken_0x2bf524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2bf524) {
            ctx->pc = 0x2BF53Cu;
            goto label_2bf53c;
        }
    }
    ctx->pc = 0x2BF52Cu;
label_2bf52c:
    // 0x2bf52c: 0xc089000  jal         func_224000
label_2bf530:
    if (ctx->pc == 0x2BF530u) {
        ctx->pc = 0x2BF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF52Cu;
        // 0x2bf530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF534u;
        goto label_2bf534;
    }
    ctx->pc = 0x2BF52Cu;
    SET_GPR_U32(ctx, 31, 0x2BF534u);
    ctx->pc = 0x2BF530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF52Cu;
    // 0x2bf530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2BF52Cu, 0x2BF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF534u;
label_2bf534:
    // 0x2bf534: 0x14550077  bne         $v0, $s5, . + 4 + (0x77 << 2)
label_2bf538:
    if (ctx->pc == 0x2BF538u) {
        ctx->pc = 0x2BF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF534u;
        // 0x2bf538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF53Cu;
        goto label_2bf53c;
    }
    ctx->pc = 0x2BF534u;
    {
        const bool branch_taken_0x2bf534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2BF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF534u;
        // 0x2bf538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf534) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF53Cu;
label_2bf53c:
    // 0x2bf53c: 0xc089bdc  jal         func_226F70
label_2bf540:
    if (ctx->pc == 0x2BF540u) {
        ctx->pc = 0x2BF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF53Cu;
        // 0x2bf540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF544u;
        goto label_2bf544;
    }
    ctx->pc = 0x2BF53Cu;
    SET_GPR_U32(ctx, 31, 0x2BF544u);
    ctx->pc = 0x2BF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF53Cu;
    // 0x2bf540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2BF53Cu, 0x2BF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF544u;
label_2bf544:
    // 0x2bf544: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2bf544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2bf548:
    // 0x2bf548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf54c:
    // 0x2bf54c: 0xc089998  jal         func_226660
label_2bf550:
    if (ctx->pc == 0x2BF550u) {
        ctx->pc = 0x2BF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF54Cu;
        // 0x2bf550: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF554u;
        goto label_2bf554;
    }
    ctx->pc = 0x2BF54Cu;
    SET_GPR_U32(ctx, 31, 0x2BF554u);
    ctx->pc = 0x2BF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF54Cu;
    // 0x2bf550: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2BF54Cu, 0x2BF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF554u;
label_2bf554:
    // 0x2bf554: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_2bf558:
    if (ctx->pc == 0x2BF558u) {
        ctx->pc = 0x2BF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF554u;
        // 0x2bf558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF55Cu;
        goto label_2bf55c;
    }
    ctx->pc = 0x2BF554u;
    {
        const bool branch_taken_0x2bf554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF554u;
        // 0x2bf558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf554) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF55Cu;
label_2bf55c:
    // 0x2bf55c: 0x9262002a  lbu         $v0, 0x2A($s3)
    ctx->pc = 0x2bf55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
label_2bf560:
    // 0x2bf560: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2bf564:
    if (ctx->pc == 0x2BF564u) {
        ctx->pc = 0x2BF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF560u;
        // 0x2bf564: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF568u;
        goto label_2bf568;
    }
    ctx->pc = 0x2BF560u;
    {
        const bool branch_taken_0x2bf560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF560u;
        // 0x2bf564: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf560) {
            ctx->pc = 0x2BF5FCu;
            goto label_2bf5fc;
        }
    }
    ctx->pc = 0x2BF568u;
label_2bf568:
    // 0x2bf568: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2bf568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2bf56c:
    // 0x2bf56c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2bf56cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bf570:
    // 0x2bf570: 0x8c662c7c  lw          $a2, 0x2C7C($v1)
    ctx->pc = 0x2bf570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_2bf574:
    // 0x2bf574: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2bf574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2bf578:
    // 0x2bf578: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bf578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bf57c:
    // 0x2bf57c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2bf57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2bf580:
    // 0x2bf580: 0x8cc4084c  lw          $a0, 0x84C($a2)
    ctx->pc = 0x2bf580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_2bf584:
    // 0x2bf584: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2bf584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2bf588:
    // 0x2bf588: 0xc0e3ec8  jal         func_38FB20
label_2bf58c:
    if (ctx->pc == 0x2BF58Cu) {
        ctx->pc = 0x2BF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF588u;
        // 0x2bf58c: 0x27a60054  addiu       $a2, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF590u;
        goto label_2bf590;
    }
    ctx->pc = 0x2BF588u;
    SET_GPR_U32(ctx, 31, 0x2BF590u);
    ctx->pc = 0x2BF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF588u;
    // 0x2bf58c: 0x27a60054  addiu       $a2, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FB20u, 0x2BF588u, 0x2BF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF590u;
label_2bf590:
    // 0x2bf590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf594:
    // 0x2bf594: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2bf598:
    if (ctx->pc == 0x2BF598u) {
        ctx->pc = 0x2BF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF594u;
        // 0x2bf598: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF59Cu;
        goto label_2bf59c;
    }
    ctx->pc = 0x2BF594u;
    {
        const bool branch_taken_0x2bf594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF594u;
        // 0x2bf598: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf594) {
            ctx->pc = 0x2BF5F8u;
            goto label_2bf5f8;
        }
    }
    ctx->pc = 0x2BF59Cu;
label_2bf59c:
    // 0x2bf59c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2bf59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2bf5a0:
    // 0x2bf5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf5a4:
    // 0x2bf5a4: 0x0  nop
    ctx->pc = 0x2bf5a4u;
    // NOP
label_2bf5a8:
    // 0x2bf5a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bf5ac:
    // 0x2bf5ac: 0x0  nop
    ctx->pc = 0x2bf5acu;
    // NOP
label_2bf5b0:
    // 0x2bf5b0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2bf5b4:
    if (ctx->pc == 0x2BF5B4u) {
        ctx->pc = 0x2BF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5B0u;
        // 0x2bf5b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5B8u;
        goto label_2bf5b8;
    }
    ctx->pc = 0x2BF5B0u;
    {
        const bool branch_taken_0x2bf5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5B0u;
        // 0x2bf5b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5b0) {
            ctx->pc = 0x2BF5FCu;
            goto label_2bf5fc;
        }
    }
    ctx->pc = 0x2BF5B8u;
label_2bf5b8:
    // 0x2bf5b8: 0xc0a367c  jal         func_28D9F0
label_2bf5bc:
    if (ctx->pc == 0x2BF5BCu) {
        ctx->pc = 0x2BF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5B8u;
        // 0x2bf5bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5C0u;
        goto label_2bf5c0;
    }
    ctx->pc = 0x2BF5B8u;
    SET_GPR_U32(ctx, 31, 0x2BF5C0u);
    ctx->pc = 0x2BF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5B8u;
    // 0x2bf5bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BF5B8u, 0x2BF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5C0u;
label_2bf5c0:
    // 0x2bf5c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf5c4:
    // 0x2bf5c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2bf5c8:
    if (ctx->pc == 0x2BF5C8u) {
        ctx->pc = 0x2BF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5C4u;
        // 0x2bf5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5CCu;
        goto label_2bf5cc;
    }
    ctx->pc = 0x2BF5C4u;
    {
        const bool branch_taken_0x2bf5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5C4u;
        // 0x2bf5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5c4) {
            ctx->pc = 0x2BF5ECu;
            goto label_2bf5ec;
        }
    }
    ctx->pc = 0x2BF5CCu;
label_2bf5cc:
    // 0x2bf5cc: 0xc0884f6  jal         func_2213D8
label_2bf5d0:
    if (ctx->pc == 0x2BF5D0u) {
        ctx->pc = 0x2BF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5CCu;
        // 0x2bf5d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5D4u;
        goto label_2bf5d4;
    }
    ctx->pc = 0x2BF5CCu;
    SET_GPR_U32(ctx, 31, 0x2BF5D4u);
    ctx->pc = 0x2BF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5CCu;
    // 0x2bf5d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BF5CCu, 0x2BF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5D4u;
label_2bf5d4:
    // 0x2bf5d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2bf5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf5d8:
    // 0x2bf5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf5dc:
    // 0x2bf5dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bf5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf5e0:
    // 0x2bf5e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bf5e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bf5e4:
    // 0x2bf5e4: 0xc0bf800  jal         func_2FE000
label_2bf5e8:
    if (ctx->pc == 0x2BF5E8u) {
        ctx->pc = 0x2BF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5E4u;
        // 0x2bf5e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5ECu;
        goto label_2bf5ec;
    }
    ctx->pc = 0x2BF5E4u;
    SET_GPR_U32(ctx, 31, 0x2BF5ECu);
    ctx->pc = 0x2BF5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5E4u;
    // 0x2bf5e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BF5E4u, 0x2BF5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5ECu;
label_2bf5ec:
    // 0x2bf5ec: 0xa275002a  sb          $s5, 0x2A($s3)
    ctx->pc = 0x2bf5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 21));
label_2bf5f0:
    // 0x2bf5f0: 0x10000048  b           . + 4 + (0x48 << 2)
label_2bf5f4:
    if (ctx->pc == 0x2BF5F4u) {
        ctx->pc = 0x2BF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5F0u;
        // 0x2bf5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5F8u;
        goto label_2bf5f8;
    }
    ctx->pc = 0x2BF5F0u;
    {
        const bool branch_taken_0x2bf5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5F0u;
        // 0x2bf5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5f0) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF5F8u;
label_2bf5f8:
    // 0x2bf5f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bf5fc:
    // 0x2bf5fc: 0xc0a774e  jal         func_29DD38
label_2bf600:
    if (ctx->pc == 0x2BF600u) {
        ctx->pc = 0x2BF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5FCu;
        // 0x2bf600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF604u;
        goto label_2bf604;
    }
    ctx->pc = 0x2BF5FCu;
    SET_GPR_U32(ctx, 31, 0x2BF604u);
    ctx->pc = 0x2BF600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5FCu;
    // 0x2bf600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD38u, 0x2BF5FCu, 0x2BF604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF604u;
label_2bf604:
    // 0x2bf604: 0xc0a367c  jal         func_28D9F0
label_2bf608:
    if (ctx->pc == 0x2BF608u) {
        ctx->pc = 0x2BF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF604u;
        // 0x2bf608: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF60Cu;
        goto label_2bf60c;
    }
    ctx->pc = 0x2BF604u;
    SET_GPR_U32(ctx, 31, 0x2BF60Cu);
    ctx->pc = 0x2BF608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF604u;
    // 0x2bf608: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BF604u, 0x2BF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF60Cu;
label_2bf60c:
    // 0x2bf60c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf610:
    // 0x2bf610: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2bf614:
    if (ctx->pc == 0x2BF614u) {
        ctx->pc = 0x2BF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF610u;
        // 0x2bf614: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF618u;
        goto label_2bf618;
    }
    ctx->pc = 0x2BF610u;
    {
        const bool branch_taken_0x2bf610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF610u;
        // 0x2bf614: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf610) {
            ctx->pc = 0x2BF674u;
            goto label_2bf674;
        }
    }
    ctx->pc = 0x2BF618u;
label_2bf618:
    // 0x2bf618: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2bf618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bf61c:
    // 0x2bf61c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2bf61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2bf620:
    // 0x2bf620: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x2bf620u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf624:
    // 0x2bf624: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2bf628:
    // 0x2bf628: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf62c:
    // 0x2bf62c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bf630:
    // 0x2bf630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf634:
    // 0x2bf634: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2bf634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2bf638:
    // 0x2bf638: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bf638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2bf63c:
    // 0x2bf63c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2bf63cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2bf640:
    // 0x2bf640: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2bf640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2bf644:
    // 0x2bf644: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2bf644u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2bf648:
    // 0x2bf648: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2bf648u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2bf64c:
    // 0x2bf64c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2bf64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2bf650:
    // 0x2bf650: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2bf650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2bf654:
    // 0x2bf654: 0xc0884f6  jal         func_2213D8
label_2bf658:
    if (ctx->pc == 0x2BF658u) {
        ctx->pc = 0x2BF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF654u;
        // 0x2bf658: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF65Cu;
        goto label_2bf65c;
    }
    ctx->pc = 0x2BF654u;
    SET_GPR_U32(ctx, 31, 0x2BF65Cu);
    ctx->pc = 0x2BF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF654u;
    // 0x2bf658: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BF654u, 0x2BF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF65Cu;
label_2bf65c:
    // 0x2bf65c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2bf65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf660:
    // 0x2bf660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf664:
    // 0x2bf664: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bf664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf668:
    // 0x2bf668: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bf668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bf66c:
    // 0x2bf66c: 0xc0bf800  jal         func_2FE000
label_2bf670:
    if (ctx->pc == 0x2BF670u) {
        ctx->pc = 0x2BF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF66Cu;
        // 0x2bf670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF674u;
        goto label_2bf674;
    }
    ctx->pc = 0x2BF66Cu;
    SET_GPR_U32(ctx, 31, 0x2BF674u);
    ctx->pc = 0x2BF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF66Cu;
    // 0x2bf670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BF66Cu, 0x2BF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF674u;
label_2bf674:
    // 0x2bf674: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2bf674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf678:
    // 0x2bf678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf67c:
    // 0x2bf67c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bf67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2bf680:
    // 0x2bf680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf684:
    // 0x2bf684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf688:
    // 0x2bf688: 0xc0a3892  jal         func_28E248
label_2bf68c:
    if (ctx->pc == 0x2BF68Cu) {
        ctx->pc = 0x2BF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF688u;
        // 0x2bf68c: 0x2407007d  addiu       $a3, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF690u;
        goto label_2bf690;
    }
    ctx->pc = 0x2BF688u;
    SET_GPR_U32(ctx, 31, 0x2BF690u);
    ctx->pc = 0x2BF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF688u;
    // 0x2bf68c: 0x2407007d  addiu       $a3, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2BF688u, 0x2BF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF690u;
label_2bf690:
    // 0x2bf690: 0xc0a47b4  jal         func_291ED0
label_2bf694:
    if (ctx->pc == 0x2BF694u) {
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF690u;
        // 0x2bf694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF698u;
        goto label_2bf698;
    }
    ctx->pc = 0x2BF690u;
    SET_GPR_U32(ctx, 31, 0x2BF698u);
    ctx->pc = 0x2BF694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF690u;
    // 0x2bf694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2BF690u, 0x2BF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF698u;
label_2bf698:
    // 0x2bf698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf69c:
    // 0x2bf69c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf6a0:
    // 0x2bf6a0: 0x5602001c  bnel        $s0, $v0, . + 4 + (0x1C << 2)
label_2bf6a4:
    if (ctx->pc == 0x2BF6A4u) {
        ctx->pc = 0x2BF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A0u;
        // 0x2bf6a4: 0xa260002a  sb          $zero, 0x2A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6A8u;
        goto label_2bf6a8;
    }
    ctx->pc = 0x2BF6A0u;
    {
        const bool branch_taken_0x2bf6a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf6a0) {
            ctx->pc = 0x2BF6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF6A0u;
            // 0x2bf6a4: 0xa260002a  sb          $zero, 0x2A($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF6A8u;
label_2bf6a8:
    // 0x2bf6a8: 0xc0a4802  jal         func_292008
label_2bf6ac:
    if (ctx->pc == 0x2BF6ACu) {
        ctx->pc = 0x2BF6B0u;
        goto label_2bf6b0;
    }
    ctx->pc = 0x2BF6A8u;
    SET_GPR_U32(ctx, 31, 0x2BF6B0u);
    ctx->pc = 0x292008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292008u, 0x2BF6A8u, 0x2BF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6B0u;
label_2bf6b0:
    // 0x2bf6b0: 0x54500015  bnel        $v0, $s0, . + 4 + (0x15 << 2)
label_2bf6b4:
    if (ctx->pc == 0x2BF6B4u) {
        ctx->pc = 0x2BF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6B0u;
        // 0x2bf6b4: 0xa260002a  sb          $zero, 0x2A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6B8u;
        goto label_2bf6b8;
    }
    ctx->pc = 0x2BF6B0u;
    {
        const bool branch_taken_0x2bf6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bf6b0) {
            ctx->pc = 0x2BF6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF6B0u;
            // 0x2bf6b4: 0xa260002a  sb          $zero, 0x2A($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF708u;
            goto label_2bf708;
        }
    }
    ctx->pc = 0x2BF6B8u;
label_2bf6b8:
    // 0x2bf6b8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bf6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bf6bc:
    // 0x2bf6bc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2bf6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2bf6c0:
    // 0x2bf6c0: 0xc0cd4ee  jal         func_3353B8
label_2bf6c4:
    if (ctx->pc == 0x2BF6C4u) {
        ctx->pc = 0x2BF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6C0u;
        // 0x2bf6c4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6C8u;
        goto label_2bf6c8;
    }
    ctx->pc = 0x2BF6C0u;
    SET_GPR_U32(ctx, 31, 0x2BF6C8u);
    ctx->pc = 0x2BF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6C0u;
    // 0x2bf6c4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BF6C0u, 0x2BF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6C8u;
label_2bf6c8:
    // 0x2bf6c8: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2bf6cc:
    // 0x2bf6cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bf6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bf6d0:
    // 0x2bf6d0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2bf6d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bf6d4:
    // 0x2bf6d4: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2bf6d8:
    // 0x2bf6d8: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2bf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2bf6dc:
    // 0x2bf6dc: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2bf6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_2bf6e0:
    // 0x2bf6e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bf6e4:
    // 0x2bf6e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf6e8:
    // 0x2bf6e8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2bf6e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2bf6ec:
    // 0x2bf6ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf6f0:
    // 0x2bf6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf6f4:
    // 0x2bf6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bf6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf6f8:
    // 0x2bf6f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bf6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf6fc:
    // 0x2bf6fc: 0xc088178  jal         func_2205E0
label_2bf700:
    if (ctx->pc == 0x2BF700u) {
        ctx->pc = 0x2BF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6FCu;
        // 0x2bf700: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF704u;
        goto label_2bf704;
    }
    ctx->pc = 0x2BF6FCu;
    SET_GPR_U32(ctx, 31, 0x2BF704u);
    ctx->pc = 0x2BF700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6FCu;
    // 0x2bf700: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2BF6FCu, 0x2BF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF704u;
label_2bf704:
    // 0x2bf704: 0xa260002a  sb          $zero, 0x2A($s3)
    ctx->pc = 0x2bf704u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
label_2bf708:
    // 0x2bf708: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bf70c:
    if (ctx->pc == 0x2BF70Cu) {
        ctx->pc = 0x2BF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF708u;
        // 0x2bf70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF710u;
        goto label_2bf710;
    }
    ctx->pc = 0x2BF708u;
    {
        const bool branch_taken_0x2bf708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF708u;
        // 0x2bf70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf708) {
            ctx->pc = 0x2BF714u;
            goto label_2bf714;
        }
    }
    ctx->pc = 0x2BF710u;
label_2bf710:
    // 0x2bf710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf714:
    // 0x2bf714: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2bf714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2bf718:
    // 0x2bf718: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2bf718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2bf71c:
    // 0x2bf71c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2bf71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2bf720:
    // 0x2bf720: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2bf720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2bf724:
    // 0x2bf724: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2bf724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2bf728:
    // 0x2bf728: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2bf728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bf72c:
    // 0x2bf72c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2bf72cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2bf730:
    // 0x2bf730: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2bf730u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bf734:
    // 0x2bf734: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2bf734u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bf738:
    // 0x2bf738: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bf738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bf73c:
    // 0x2bf73c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2bf73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bf740:
    // 0x2bf740: 0x3e00008  jr          $ra
label_2bf744:
    if (ctx->pc == 0x2BF744u) {
        ctx->pc = 0x2BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF740u;
        // 0x2bf744: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF748u;
        goto label_fallthrough_0x2bf740;
    }
    ctx->pc = 0x2BF740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF740u;
        // 0x2bf744: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bf740:
    ctx->pc = 0x2BF748u;
}
