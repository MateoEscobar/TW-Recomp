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

// Function: sub_0040D0A8
// Address: 0x40d0a8 - 0x40d688
void sub_0040D0A8_0x40d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D0A8_0x40d0a8");
#endif

    switch (ctx->pc) {
        case 0x40d0a8u: goto label_40d0a8;
        case 0x40d0acu: goto label_40d0ac;
        case 0x40d0b0u: goto label_40d0b0;
        case 0x40d0b4u: goto label_40d0b4;
        case 0x40d0b8u: goto label_40d0b8;
        case 0x40d0bcu: goto label_40d0bc;
        case 0x40d0c0u: goto label_40d0c0;
        case 0x40d0c4u: goto label_40d0c4;
        case 0x40d0c8u: goto label_40d0c8;
        case 0x40d0ccu: goto label_40d0cc;
        case 0x40d0d0u: goto label_40d0d0;
        case 0x40d0d4u: goto label_40d0d4;
        case 0x40d0d8u: goto label_40d0d8;
        case 0x40d0dcu: goto label_40d0dc;
        case 0x40d0e0u: goto label_40d0e0;
        case 0x40d0e4u: goto label_40d0e4;
        case 0x40d0e8u: goto label_40d0e8;
        case 0x40d0ecu: goto label_40d0ec;
        case 0x40d0f0u: goto label_40d0f0;
        case 0x40d0f4u: goto label_40d0f4;
        case 0x40d0f8u: goto label_40d0f8;
        case 0x40d0fcu: goto label_40d0fc;
        case 0x40d100u: goto label_40d100;
        case 0x40d104u: goto label_40d104;
        case 0x40d108u: goto label_40d108;
        case 0x40d10cu: goto label_40d10c;
        case 0x40d110u: goto label_40d110;
        case 0x40d114u: goto label_40d114;
        case 0x40d118u: goto label_40d118;
        case 0x40d11cu: goto label_40d11c;
        case 0x40d120u: goto label_40d120;
        case 0x40d124u: goto label_40d124;
        case 0x40d128u: goto label_40d128;
        case 0x40d12cu: goto label_40d12c;
        case 0x40d130u: goto label_40d130;
        case 0x40d134u: goto label_40d134;
        case 0x40d138u: goto label_40d138;
        case 0x40d13cu: goto label_40d13c;
        case 0x40d140u: goto label_40d140;
        case 0x40d144u: goto label_40d144;
        case 0x40d148u: goto label_40d148;
        case 0x40d14cu: goto label_40d14c;
        case 0x40d150u: goto label_40d150;
        case 0x40d154u: goto label_40d154;
        case 0x40d158u: goto label_40d158;
        case 0x40d15cu: goto label_40d15c;
        case 0x40d160u: goto label_40d160;
        case 0x40d164u: goto label_40d164;
        case 0x40d168u: goto label_40d168;
        case 0x40d16cu: goto label_40d16c;
        case 0x40d170u: goto label_40d170;
        case 0x40d174u: goto label_40d174;
        case 0x40d178u: goto label_40d178;
        case 0x40d17cu: goto label_40d17c;
        case 0x40d180u: goto label_40d180;
        case 0x40d184u: goto label_40d184;
        case 0x40d188u: goto label_40d188;
        case 0x40d18cu: goto label_40d18c;
        case 0x40d190u: goto label_40d190;
        case 0x40d194u: goto label_40d194;
        case 0x40d198u: goto label_40d198;
        case 0x40d19cu: goto label_40d19c;
        case 0x40d1a0u: goto label_40d1a0;
        case 0x40d1a4u: goto label_40d1a4;
        case 0x40d1a8u: goto label_40d1a8;
        case 0x40d1acu: goto label_40d1ac;
        case 0x40d1b0u: goto label_40d1b0;
        case 0x40d1b4u: goto label_40d1b4;
        case 0x40d1b8u: goto label_40d1b8;
        case 0x40d1bcu: goto label_40d1bc;
        case 0x40d1c0u: goto label_40d1c0;
        case 0x40d1c4u: goto label_40d1c4;
        case 0x40d1c8u: goto label_40d1c8;
        case 0x40d1ccu: goto label_40d1cc;
        case 0x40d1d0u: goto label_40d1d0;
        case 0x40d1d4u: goto label_40d1d4;
        case 0x40d1d8u: goto label_40d1d8;
        case 0x40d1dcu: goto label_40d1dc;
        case 0x40d1e0u: goto label_40d1e0;
        case 0x40d1e4u: goto label_40d1e4;
        case 0x40d1e8u: goto label_40d1e8;
        case 0x40d1ecu: goto label_40d1ec;
        case 0x40d1f0u: goto label_40d1f0;
        case 0x40d1f4u: goto label_40d1f4;
        case 0x40d1f8u: goto label_40d1f8;
        case 0x40d1fcu: goto label_40d1fc;
        case 0x40d200u: goto label_40d200;
        case 0x40d204u: goto label_40d204;
        case 0x40d208u: goto label_40d208;
        case 0x40d20cu: goto label_40d20c;
        case 0x40d210u: goto label_40d210;
        case 0x40d214u: goto label_40d214;
        case 0x40d218u: goto label_40d218;
        case 0x40d21cu: goto label_40d21c;
        case 0x40d220u: goto label_40d220;
        case 0x40d224u: goto label_40d224;
        case 0x40d228u: goto label_40d228;
        case 0x40d22cu: goto label_40d22c;
        case 0x40d230u: goto label_40d230;
        case 0x40d234u: goto label_40d234;
        case 0x40d238u: goto label_40d238;
        case 0x40d23cu: goto label_40d23c;
        case 0x40d240u: goto label_40d240;
        case 0x40d244u: goto label_40d244;
        case 0x40d248u: goto label_40d248;
        case 0x40d24cu: goto label_40d24c;
        case 0x40d250u: goto label_40d250;
        case 0x40d254u: goto label_40d254;
        case 0x40d258u: goto label_40d258;
        case 0x40d25cu: goto label_40d25c;
        case 0x40d260u: goto label_40d260;
        case 0x40d264u: goto label_40d264;
        case 0x40d268u: goto label_40d268;
        case 0x40d26cu: goto label_40d26c;
        case 0x40d270u: goto label_40d270;
        case 0x40d274u: goto label_40d274;
        case 0x40d278u: goto label_40d278;
        case 0x40d27cu: goto label_40d27c;
        case 0x40d280u: goto label_40d280;
        case 0x40d284u: goto label_40d284;
        case 0x40d288u: goto label_40d288;
        case 0x40d28cu: goto label_40d28c;
        case 0x40d290u: goto label_40d290;
        case 0x40d294u: goto label_40d294;
        case 0x40d298u: goto label_40d298;
        case 0x40d29cu: goto label_40d29c;
        case 0x40d2a0u: goto label_40d2a0;
        case 0x40d2a4u: goto label_40d2a4;
        case 0x40d2a8u: goto label_40d2a8;
        case 0x40d2acu: goto label_40d2ac;
        case 0x40d2b0u: goto label_40d2b0;
        case 0x40d2b4u: goto label_40d2b4;
        case 0x40d2b8u: goto label_40d2b8;
        case 0x40d2bcu: goto label_40d2bc;
        case 0x40d2c0u: goto label_40d2c0;
        case 0x40d2c4u: goto label_40d2c4;
        case 0x40d2c8u: goto label_40d2c8;
        case 0x40d2ccu: goto label_40d2cc;
        case 0x40d2d0u: goto label_40d2d0;
        case 0x40d2d4u: goto label_40d2d4;
        case 0x40d2d8u: goto label_40d2d8;
        case 0x40d2dcu: goto label_40d2dc;
        case 0x40d2e0u: goto label_40d2e0;
        case 0x40d2e4u: goto label_40d2e4;
        case 0x40d2e8u: goto label_40d2e8;
        case 0x40d2ecu: goto label_40d2ec;
        case 0x40d2f0u: goto label_40d2f0;
        case 0x40d2f4u: goto label_40d2f4;
        case 0x40d2f8u: goto label_40d2f8;
        case 0x40d2fcu: goto label_40d2fc;
        case 0x40d300u: goto label_40d300;
        case 0x40d304u: goto label_40d304;
        case 0x40d308u: goto label_40d308;
        case 0x40d30cu: goto label_40d30c;
        case 0x40d310u: goto label_40d310;
        case 0x40d314u: goto label_40d314;
        case 0x40d318u: goto label_40d318;
        case 0x40d31cu: goto label_40d31c;
        case 0x40d320u: goto label_40d320;
        case 0x40d324u: goto label_40d324;
        case 0x40d328u: goto label_40d328;
        case 0x40d32cu: goto label_40d32c;
        case 0x40d330u: goto label_40d330;
        case 0x40d334u: goto label_40d334;
        case 0x40d338u: goto label_40d338;
        case 0x40d33cu: goto label_40d33c;
        case 0x40d340u: goto label_40d340;
        case 0x40d344u: goto label_40d344;
        case 0x40d348u: goto label_40d348;
        case 0x40d34cu: goto label_40d34c;
        case 0x40d350u: goto label_40d350;
        case 0x40d354u: goto label_40d354;
        case 0x40d358u: goto label_40d358;
        case 0x40d35cu: goto label_40d35c;
        case 0x40d360u: goto label_40d360;
        case 0x40d364u: goto label_40d364;
        case 0x40d368u: goto label_40d368;
        case 0x40d36cu: goto label_40d36c;
        case 0x40d370u: goto label_40d370;
        case 0x40d374u: goto label_40d374;
        case 0x40d378u: goto label_40d378;
        case 0x40d37cu: goto label_40d37c;
        case 0x40d380u: goto label_40d380;
        case 0x40d384u: goto label_40d384;
        case 0x40d388u: goto label_40d388;
        case 0x40d38cu: goto label_40d38c;
        case 0x40d390u: goto label_40d390;
        case 0x40d394u: goto label_40d394;
        case 0x40d398u: goto label_40d398;
        case 0x40d39cu: goto label_40d39c;
        case 0x40d3a0u: goto label_40d3a0;
        case 0x40d3a4u: goto label_40d3a4;
        case 0x40d3a8u: goto label_40d3a8;
        case 0x40d3acu: goto label_40d3ac;
        case 0x40d3b0u: goto label_40d3b0;
        case 0x40d3b4u: goto label_40d3b4;
        case 0x40d3b8u: goto label_40d3b8;
        case 0x40d3bcu: goto label_40d3bc;
        case 0x40d3c0u: goto label_40d3c0;
        case 0x40d3c4u: goto label_40d3c4;
        case 0x40d3c8u: goto label_40d3c8;
        case 0x40d3ccu: goto label_40d3cc;
        case 0x40d3d0u: goto label_40d3d0;
        case 0x40d3d4u: goto label_40d3d4;
        case 0x40d3d8u: goto label_40d3d8;
        case 0x40d3dcu: goto label_40d3dc;
        case 0x40d3e0u: goto label_40d3e0;
        case 0x40d3e4u: goto label_40d3e4;
        case 0x40d3e8u: goto label_40d3e8;
        case 0x40d3ecu: goto label_40d3ec;
        case 0x40d3f0u: goto label_40d3f0;
        case 0x40d3f4u: goto label_40d3f4;
        case 0x40d3f8u: goto label_40d3f8;
        case 0x40d3fcu: goto label_40d3fc;
        case 0x40d400u: goto label_40d400;
        case 0x40d404u: goto label_40d404;
        case 0x40d408u: goto label_40d408;
        case 0x40d40cu: goto label_40d40c;
        case 0x40d410u: goto label_40d410;
        case 0x40d414u: goto label_40d414;
        case 0x40d418u: goto label_40d418;
        case 0x40d41cu: goto label_40d41c;
        case 0x40d420u: goto label_40d420;
        case 0x40d424u: goto label_40d424;
        case 0x40d428u: goto label_40d428;
        case 0x40d42cu: goto label_40d42c;
        case 0x40d430u: goto label_40d430;
        case 0x40d434u: goto label_40d434;
        case 0x40d438u: goto label_40d438;
        case 0x40d43cu: goto label_40d43c;
        case 0x40d440u: goto label_40d440;
        case 0x40d444u: goto label_40d444;
        case 0x40d448u: goto label_40d448;
        case 0x40d44cu: goto label_40d44c;
        case 0x40d450u: goto label_40d450;
        case 0x40d454u: goto label_40d454;
        case 0x40d458u: goto label_40d458;
        case 0x40d45cu: goto label_40d45c;
        case 0x40d460u: goto label_40d460;
        case 0x40d464u: goto label_40d464;
        case 0x40d468u: goto label_40d468;
        case 0x40d46cu: goto label_40d46c;
        case 0x40d470u: goto label_40d470;
        case 0x40d474u: goto label_40d474;
        case 0x40d478u: goto label_40d478;
        case 0x40d47cu: goto label_40d47c;
        case 0x40d480u: goto label_40d480;
        case 0x40d484u: goto label_40d484;
        case 0x40d488u: goto label_40d488;
        case 0x40d48cu: goto label_40d48c;
        case 0x40d490u: goto label_40d490;
        case 0x40d494u: goto label_40d494;
        case 0x40d498u: goto label_40d498;
        case 0x40d49cu: goto label_40d49c;
        case 0x40d4a0u: goto label_40d4a0;
        case 0x40d4a4u: goto label_40d4a4;
        case 0x40d4a8u: goto label_40d4a8;
        case 0x40d4acu: goto label_40d4ac;
        case 0x40d4b0u: goto label_40d4b0;
        case 0x40d4b4u: goto label_40d4b4;
        case 0x40d4b8u: goto label_40d4b8;
        case 0x40d4bcu: goto label_40d4bc;
        case 0x40d4c0u: goto label_40d4c0;
        case 0x40d4c4u: goto label_40d4c4;
        case 0x40d4c8u: goto label_40d4c8;
        case 0x40d4ccu: goto label_40d4cc;
        case 0x40d4d0u: goto label_40d4d0;
        case 0x40d4d4u: goto label_40d4d4;
        case 0x40d4d8u: goto label_40d4d8;
        case 0x40d4dcu: goto label_40d4dc;
        case 0x40d4e0u: goto label_40d4e0;
        case 0x40d4e4u: goto label_40d4e4;
        case 0x40d4e8u: goto label_40d4e8;
        case 0x40d4ecu: goto label_40d4ec;
        case 0x40d4f0u: goto label_40d4f0;
        case 0x40d4f4u: goto label_40d4f4;
        case 0x40d4f8u: goto label_40d4f8;
        case 0x40d4fcu: goto label_40d4fc;
        case 0x40d500u: goto label_40d500;
        case 0x40d504u: goto label_40d504;
        case 0x40d508u: goto label_40d508;
        case 0x40d50cu: goto label_40d50c;
        case 0x40d510u: goto label_40d510;
        case 0x40d514u: goto label_40d514;
        case 0x40d518u: goto label_40d518;
        case 0x40d51cu: goto label_40d51c;
        case 0x40d520u: goto label_40d520;
        case 0x40d524u: goto label_40d524;
        case 0x40d528u: goto label_40d528;
        case 0x40d52cu: goto label_40d52c;
        case 0x40d530u: goto label_40d530;
        case 0x40d534u: goto label_40d534;
        case 0x40d538u: goto label_40d538;
        case 0x40d53cu: goto label_40d53c;
        case 0x40d540u: goto label_40d540;
        case 0x40d544u: goto label_40d544;
        case 0x40d548u: goto label_40d548;
        case 0x40d54cu: goto label_40d54c;
        case 0x40d550u: goto label_40d550;
        case 0x40d554u: goto label_40d554;
        case 0x40d558u: goto label_40d558;
        case 0x40d55cu: goto label_40d55c;
        case 0x40d560u: goto label_40d560;
        case 0x40d564u: goto label_40d564;
        case 0x40d568u: goto label_40d568;
        case 0x40d56cu: goto label_40d56c;
        case 0x40d570u: goto label_40d570;
        case 0x40d574u: goto label_40d574;
        case 0x40d578u: goto label_40d578;
        case 0x40d57cu: goto label_40d57c;
        case 0x40d580u: goto label_40d580;
        case 0x40d584u: goto label_40d584;
        case 0x40d588u: goto label_40d588;
        case 0x40d58cu: goto label_40d58c;
        case 0x40d590u: goto label_40d590;
        case 0x40d594u: goto label_40d594;
        case 0x40d598u: goto label_40d598;
        case 0x40d59cu: goto label_40d59c;
        case 0x40d5a0u: goto label_40d5a0;
        case 0x40d5a4u: goto label_40d5a4;
        case 0x40d5a8u: goto label_40d5a8;
        case 0x40d5acu: goto label_40d5ac;
        case 0x40d5b0u: goto label_40d5b0;
        case 0x40d5b4u: goto label_40d5b4;
        case 0x40d5b8u: goto label_40d5b8;
        case 0x40d5bcu: goto label_40d5bc;
        case 0x40d5c0u: goto label_40d5c0;
        case 0x40d5c4u: goto label_40d5c4;
        case 0x40d5c8u: goto label_40d5c8;
        case 0x40d5ccu: goto label_40d5cc;
        case 0x40d5d0u: goto label_40d5d0;
        case 0x40d5d4u: goto label_40d5d4;
        case 0x40d5d8u: goto label_40d5d8;
        case 0x40d5dcu: goto label_40d5dc;
        case 0x40d5e0u: goto label_40d5e0;
        case 0x40d5e4u: goto label_40d5e4;
        case 0x40d5e8u: goto label_40d5e8;
        case 0x40d5ecu: goto label_40d5ec;
        case 0x40d5f0u: goto label_40d5f0;
        case 0x40d5f4u: goto label_40d5f4;
        case 0x40d5f8u: goto label_40d5f8;
        case 0x40d5fcu: goto label_40d5fc;
        case 0x40d600u: goto label_40d600;
        case 0x40d604u: goto label_40d604;
        case 0x40d608u: goto label_40d608;
        case 0x40d60cu: goto label_40d60c;
        case 0x40d610u: goto label_40d610;
        case 0x40d614u: goto label_40d614;
        case 0x40d618u: goto label_40d618;
        case 0x40d61cu: goto label_40d61c;
        case 0x40d620u: goto label_40d620;
        case 0x40d624u: goto label_40d624;
        case 0x40d628u: goto label_40d628;
        case 0x40d62cu: goto label_40d62c;
        case 0x40d630u: goto label_40d630;
        case 0x40d634u: goto label_40d634;
        case 0x40d638u: goto label_40d638;
        case 0x40d63cu: goto label_40d63c;
        case 0x40d640u: goto label_40d640;
        case 0x40d644u: goto label_40d644;
        case 0x40d648u: goto label_40d648;
        case 0x40d64cu: goto label_40d64c;
        case 0x40d650u: goto label_40d650;
        case 0x40d654u: goto label_40d654;
        case 0x40d658u: goto label_40d658;
        case 0x40d65cu: goto label_40d65c;
        case 0x40d660u: goto label_40d660;
        case 0x40d664u: goto label_40d664;
        case 0x40d668u: goto label_40d668;
        case 0x40d66cu: goto label_40d66c;
        case 0x40d670u: goto label_40d670;
        case 0x40d674u: goto label_40d674;
        case 0x40d678u: goto label_40d678;
        case 0x40d67cu: goto label_40d67c;
        case 0x40d680u: goto label_40d680;
        case 0x40d684u: goto label_40d684;
        default: break;
    }

    ctx->pc = 0x40d0a8u;

label_40d0a8:
    // 0x40d0a8: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x40d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_40d0ac:
    // 0x40d0ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40d0b0:
    // 0x40d0b0: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x40d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_40d0b4:
    // 0x40d0b4: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x40d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_40d0b8:
    // 0x40d0b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x40d0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_40d0bc:
    // 0x40d0bc: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x40d0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_40d0c0:
    // 0x40d0c0: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x40d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_40d0c4:
    // 0x40d0c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40d0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40d0c8:
    // 0x40d0c8: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x40d0c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_40d0cc:
    // 0x40d0cc: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x40d0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_40d0d0:
    // 0x40d0d0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x40d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_40d0d4:
    // 0x40d0d4: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x40d0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_40d0d8:
    // 0x40d0d8: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x40d0d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_40d0dc:
    // 0x40d0dc: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x40d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_40d0e0:
    // 0x40d0e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x40d0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40d0e4:
    // 0x40d0e4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x40d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40d0e8:
    // 0x40d0e8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40d0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40d0ec:
    // 0x40d0ec: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40d0f0:
    // 0x40d0f0: 0x40f809  jalr        $v0
label_40d0f4:
    if (ctx->pc == 0x40D0F4u) {
        ctx->pc = 0x40D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D0F0u;
        // 0x40d0f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D0F8u;
        goto label_40d0f8;
    }
    ctx->pc = 0x40D0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D0F8u);
        ctx->pc = 0x40D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D0F0u;
        // 0x40d0f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D0F0u, 0x40D0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D0F8u;
label_40d0f8:
    // 0x40d0f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40d0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d0fc:
    // 0x40d0fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40d100:
    // 0x40d100: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_40d104:
    // 0x40d104: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x40d104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_40d108:
    // 0x40d108: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x40d108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40d10c:
    // 0x40d10c: 0xc10c190  jal         func_430640
label_40d110:
    if (ctx->pc == 0x40D110u) {
        ctx->pc = 0x40D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D10Cu;
        // 0x40d110: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D114u;
        goto label_40d114;
    }
    ctx->pc = 0x40D10Cu;
    SET_GPR_U32(ctx, 31, 0x40D114u);
    ctx->pc = 0x40D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D10Cu;
    // 0x40d110: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x40D10Cu, 0x40D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D114u;
label_40d114:
    // 0x40d114: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x40d114u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d118:
    // 0x40d118: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x40d118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d11c:
    // 0x40d11c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x40d11cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d120:
    // 0x40d120: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x40d120u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d124:
    // 0x40d124: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x40d124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_40d128:
    // 0x40d128: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x40d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_40d12c:
    // 0x40d12c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x40d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_40d130:
    // 0x40d130: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x40d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_40d134:
    // 0x40d134: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x40d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d138:
    // 0x40d138: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x40d138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_40d13c:
    // 0x40d13c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x40d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_40d140:
    // 0x40d140: 0x60f809  jalr        $v1
label_40d144:
    if (ctx->pc == 0x40D144u) {
        ctx->pc = 0x40D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D140u;
        // 0x40d144: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D148u;
        goto label_40d148;
    }
    ctx->pc = 0x40D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D148u);
        ctx->pc = 0x40D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D140u;
        // 0x40d144: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D140u, 0x40D148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D148u;
label_40d148:
    // 0x40d148: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x40d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d14c:
    // 0x40d14c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40d14cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40d150:
    // 0x40d150: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x40d150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_40d154:
    // 0x40d154: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x40d154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_40d158:
    // 0x40d158: 0x60f809  jalr        $v1
label_40d15c:
    if (ctx->pc == 0x40D15Cu) {
        ctx->pc = 0x40D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D158u;
        // 0x40d15c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D160u;
        goto label_40d160;
    }
    ctx->pc = 0x40D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D160u);
        ctx->pc = 0x40D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D158u;
        // 0x40d15c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D158u, 0x40D160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D160u;
label_40d160:
    // 0x40d160: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x40d160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_40d164:
    // 0x40d164: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x40d164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
label_40d168:
    // 0x40d168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40d168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40d16c:
    // 0x40d16c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40d16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d170:
    // 0x40d170: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40d170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40d174:
    // 0x40d174: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x40d174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40d178:
    // 0x40d178: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40d178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d17c:
    // 0x40d17c: 0x8e04cce4  lw          $a0, -0x331C($s0)
    ctx->pc = 0x40d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
label_40d180:
    // 0x40d180: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x40d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_40d184:
    // 0x40d184: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40d184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40d188:
    // 0x40d188: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x40d188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40d18c:
    // 0x40d18c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x40d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_40d190:
    // 0x40d190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40d190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d194:
    // 0x40d194: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x40d194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_40d198:
    // 0x40d198: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x40d198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_40d19c:
    // 0x40d19c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x40d19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_40d1a0:
    // 0x40d1a0: 0xc05f784  jal         func_17DE10
label_40d1a4:
    if (ctx->pc == 0x40D1A4u) {
        ctx->pc = 0x40D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1A0u;
        // 0x40d1a4: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D1A8u;
        goto label_40d1a8;
    }
    ctx->pc = 0x40D1A0u;
    SET_GPR_U32(ctx, 31, 0x40D1A8u);
    ctx->pc = 0x40D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D1A0u;
    // 0x40d1a4: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE10u, 0x40D1A0u, 0x40D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D1A8u;
label_40d1a8:
    // 0x40d1a8: 0xc05fa04  jal         func_17E810
label_40d1ac:
    if (ctx->pc == 0x40D1ACu) {
        ctx->pc = 0x40D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1A8u;
        // 0x40d1ac: 0x8e04cce4  lw          $a0, -0x331C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D1B0u;
        goto label_40d1b0;
    }
    ctx->pc = 0x40D1A8u;
    SET_GPR_U32(ctx, 31, 0x40D1B0u);
    ctx->pc = 0x40D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D1A8u;
    // 0x40d1ac: 0x8e04cce4  lw          $a0, -0x331C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E810u, 0x40D1A8u, 0x40D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D1B0u;
label_40d1b0:
    // 0x40d1b0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x40d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_40d1b4:
    // 0x40d1b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d1b8:
    // 0x40d1b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x40d1b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d1bc:
    // 0x40d1bc: 0x24425348  addiu       $v0, $v0, 0x5348
    ctx->pc = 0x40d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21320));
label_40d1c0:
    // 0x40d1c0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x40d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_40d1c4:
    // 0x40d1c4: 0x54640090  bnel        $v1, $a0, . + 4 + (0x90 << 2)
label_40d1c8:
    if (ctx->pc == 0x40D1C8u) {
        ctx->pc = 0x40D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1C4u;
        // 0x40d1c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D1CCu;
        goto label_40d1cc;
    }
    ctx->pc = 0x40D1C4u;
    {
        const bool branch_taken_0x40d1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x40d1c4) {
            ctx->pc = 0x40D1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40D1C4u;
            // 0x40d1c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40D408u;
            goto label_40d408;
        }
    }
    ctx->pc = 0x40D1CCu;
label_40d1cc:
    // 0x40d1cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x40d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d1d0:
    // 0x40d1d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x40d1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_40d1d4:
    // 0x40d1d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40d1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40d1d8:
    // 0x40d1d8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x40d1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_40d1dc:
    // 0x40d1dc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x40d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_40d1e0:
    // 0x40d1e0: 0x60f809  jalr        $v1
label_40d1e4:
    if (ctx->pc == 0x40D1E4u) {
        ctx->pc = 0x40D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1E0u;
        // 0x40d1e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D1E8u;
        goto label_40d1e8;
    }
    ctx->pc = 0x40D1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D1E8u);
        ctx->pc = 0x40D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1E0u;
        // 0x40d1e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D1E0u, 0x40D1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D1E8u;
label_40d1e8:
    // 0x40d1e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x40d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d1ec:
    // 0x40d1ec: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x40d1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_40d1f0:
    // 0x40d1f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x40d1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_40d1f4:
    // 0x40d1f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40d1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40d1f8:
    // 0x40d1f8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x40d1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_40d1fc:
    // 0x40d1fc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x40d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_40d200:
    // 0x40d200: 0x60f809  jalr        $v1
label_40d204:
    if (ctx->pc == 0x40D204u) {
        ctx->pc = 0x40D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D200u;
        // 0x40d204: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D208u;
        goto label_40d208;
    }
    ctx->pc = 0x40D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D208u);
        ctx->pc = 0x40D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D200u;
        // 0x40d204: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D200u, 0x40D208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D208u;
label_40d208:
    // 0x40d208: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x40d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_40d20c:
    // 0x40d20c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40d210:
    // 0x40d210: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x40d210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_40d214:
    // 0x40d214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40d218:
    // 0x40d218: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x40d218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_40d21c:
    // 0x40d21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40d21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d220:
    // 0x40d220: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x40d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_40d224:
    // 0x40d224: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x40d224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_40d228:
    // 0x40d228: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_40d22c:
    // 0x40d22c: 0xc120efe  jal         func_483BF8
label_40d230:
    if (ctx->pc == 0x40D230u) {
        ctx->pc = 0x40D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D22Cu;
        // 0x40d230: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D234u;
        goto label_40d234;
    }
    ctx->pc = 0x40D22Cu;
    SET_GPR_U32(ctx, 31, 0x40D234u);
    ctx->pc = 0x40D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D22Cu;
    // 0x40d230: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x40D22Cu, 0x40D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D234u;
label_40d234:
    // 0x40d234: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d238:
    // 0x40d238: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40d238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40d23c:
    // 0x40d23c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40d240:
    // 0x40d240: 0x40f809  jalr        $v0
label_40d244:
    if (ctx->pc == 0x40D244u) {
        ctx->pc = 0x40D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D240u;
        // 0x40d244: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D248u;
        goto label_40d248;
    }
    ctx->pc = 0x40D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D248u);
        ctx->pc = 0x40D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D240u;
        // 0x40d244: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D240u, 0x40D248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D248u;
label_40d248:
    // 0x40d248: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_40d24c:
    if (ctx->pc == 0x40D24Cu) {
        ctx->pc = 0x40D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D248u;
        // 0x40d24c: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D250u;
        goto label_40d250;
    }
    ctx->pc = 0x40D248u;
    {
        const bool branch_taken_0x40d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D248u;
        // 0x40d24c: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d248) {
            ctx->pc = 0x40D2A0u;
            goto label_40d2a0;
        }
    }
    ctx->pc = 0x40D250u;
label_40d250:
    // 0x40d250: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40d254:
    // 0x40d254: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x40d254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_40d258:
    // 0x40d258: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d25c:
    // 0x40d25c: 0x40f809  jalr        $v0
label_40d260:
    if (ctx->pc == 0x40D260u) {
        ctx->pc = 0x40D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D25Cu;
        // 0x40d260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D264u;
        goto label_40d264;
    }
    ctx->pc = 0x40D25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D264u);
        ctx->pc = 0x40D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D25Cu;
        // 0x40d260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D25Cu, 0x40D264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D264u;
label_40d264:
    // 0x40d264: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d268:
    // 0x40d268: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40d26c:
    // 0x40d26c: 0x40f809  jalr        $v0
label_40d270:
    if (ctx->pc == 0x40D270u) {
        ctx->pc = 0x40D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D26Cu;
        // 0x40d270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D274u;
        goto label_40d274;
    }
    ctx->pc = 0x40D26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D274u);
        ctx->pc = 0x40D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D26Cu;
        // 0x40d270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D26Cu, 0x40D274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D274u;
label_40d274:
    // 0x40d274: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d278:
    // 0x40d278: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40d27c:
    // 0x40d27c: 0x40f809  jalr        $v0
label_40d280:
    if (ctx->pc == 0x40D280u) {
        ctx->pc = 0x40D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D27Cu;
        // 0x40d280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D284u;
        goto label_40d284;
    }
    ctx->pc = 0x40D27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D284u);
        ctx->pc = 0x40D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D27Cu;
        // 0x40d280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D27Cu, 0x40D284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D284u;
label_40d284:
    // 0x40d284: 0xc11a840  jal         func_46A100
label_40d288:
    if (ctx->pc == 0x40D288u) {
        ctx->pc = 0x40D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D284u;
        // 0x40d288: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D28Cu;
        goto label_40d28c;
    }
    ctx->pc = 0x40D284u;
    SET_GPR_U32(ctx, 31, 0x40D28Cu);
    ctx->pc = 0x40D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D284u;
    // 0x40d288: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A100u, 0x40D284u, 0x40D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D28Cu;
label_40d28c:
    // 0x40d28c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d290:
    // 0x40d290: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40d290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40d294:
    // 0x40d294: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40d298:
    // 0x40d298: 0x40f809  jalr        $v0
label_40d29c:
    if (ctx->pc == 0x40D29Cu) {
        ctx->pc = 0x40D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D298u;
        // 0x40d29c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D2A0u;
        goto label_40d2a0;
    }
    ctx->pc = 0x40D298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D2A0u);
        ctx->pc = 0x40D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D298u;
        // 0x40d29c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D298u, 0x40D2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D2A0u;
label_40d2a0:
    // 0x40d2a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40d2a4:
    // 0x40d2a4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x40d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_40d2a8:
    // 0x40d2a8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x40d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_40d2ac:
    // 0x40d2ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_40d2b0:
    if (ctx->pc == 0x40D2B0u) {
        ctx->pc = 0x40D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D2ACu;
        // 0x40d2b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D2B4u;
        goto label_40d2b4;
    }
    ctx->pc = 0x40D2ACu;
    {
        const bool branch_taken_0x40d2ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x40D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D2ACu;
        // 0x40d2b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d2ac) {
            ctx->pc = 0x40D2C8u;
            goto label_40d2c8;
        }
    }
    ctx->pc = 0x40D2B4u;
label_40d2b4:
    // 0x40d2b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40d2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40d2b8:
    // 0x40d2b8: 0x0  nop
    ctx->pc = 0x40d2b8u;
    // NOP
label_40d2bc:
    // 0x40d2bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40d2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40d2c0:
    // 0x40d2c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_40d2c4:
    if (ctx->pc == 0x40D2C4u) {
        ctx->pc = 0x40D2C8u;
        goto label_40d2c8;
    }
    ctx->pc = 0x40D2C0u;
    {
        const bool branch_taken_0x40d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d2c0) {
            ctx->pc = 0x40D2E0u;
            goto label_40d2e0;
        }
    }
    ctx->pc = 0x40D2C8u;
label_40d2c8:
    // 0x40d2c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40d2cc:
    // 0x40d2cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_40d2d0:
    // 0x40d2d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40d2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40d2d4:
    // 0x40d2d4: 0x0  nop
    ctx->pc = 0x40d2d4u;
    // NOP
label_40d2d8:
    // 0x40d2d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40d2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40d2dc:
    // 0x40d2dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40d2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40d2e0:
    // 0x40d2e0: 0x3c01378b  lui         $at, 0x378B
    ctx->pc = 0x40d2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14219 << 16));
label_40d2e4:
    // 0x40d2e4: 0x3421cf65  ori         $at, $at, 0xCF65
    ctx->pc = 0x40d2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53093);
label_40d2e8:
    // 0x40d2e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x40d2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40d2ec:
    // 0x40d2ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40d2f0:
    // 0x40d2f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x40d2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_40d2f4:
    // 0x40d2f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40d2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40d2f8:
    // 0x40d2f8: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x40d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_40d2fc:
    // 0x40d2fc: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x40d2fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_40d300:
    // 0x40d300: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x40d300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_40d304:
    // 0x40d304: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x40d304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_40d308:
    // 0x40d308: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x40d308u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_40d30c:
    // 0x40d30c: 0xc12e310  jal         func_4B8C40
label_40d310:
    if (ctx->pc == 0x40D310u) {
        ctx->pc = 0x40D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D30Cu;
        // 0x40d310: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D314u;
        goto label_40d314;
    }
    ctx->pc = 0x40D30Cu;
    SET_GPR_U32(ctx, 31, 0x40D314u);
    ctx->pc = 0x40D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D30Cu;
    // 0x40d310: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x40D30Cu, 0x40D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D314u;
label_40d314:
    // 0x40d314: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40d314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40d318:
    // 0x40d318: 0xc12e29c  jal         func_4B8A70
label_40d31c:
    if (ctx->pc == 0x40D31Cu) {
        ctx->pc = 0x40D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D318u;
        // 0x40d31c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D320u;
        goto label_40d320;
    }
    ctx->pc = 0x40D318u;
    SET_GPR_U32(ctx, 31, 0x40D320u);
    ctx->pc = 0x40D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D318u;
    // 0x40d31c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x40D318u, 0x40D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D320u;
label_40d320:
    // 0x40d320: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x40d320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_40d324:
    // 0x40d324: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x40d324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_40d328:
    // 0x40d328: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x40d328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_40d32c:
    // 0x40d32c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x40d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_40d330:
    // 0x40d330: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x40d330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_40d334:
    // 0x40d334: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x40d334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_40d338:
    // 0x40d338: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x40d338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_40d33c:
    // 0x40d33c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x40d33cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_40d340:
    // 0x40d340: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x40d340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_40d344:
    // 0x40d344: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x40d344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_40d348:
    // 0x40d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d34c:
    // 0x40d34c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x40d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_40d350:
    // 0x40d350: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x40d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40d354:
    // 0x40d354: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x40d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40d358:
    // 0x40d358: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x40d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40d35c:
    // 0x40d35c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x40d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_40d360:
    // 0x40d360: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x40d360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_40d364:
    // 0x40d364: 0xc0cd940  jal         func_336500
label_40d368:
    if (ctx->pc == 0x40D368u) {
        ctx->pc = 0x40D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D364u;
        // 0x40d368: 0xe7a20118  swc1        $f2, 0x118($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D36Cu;
        goto label_40d36c;
    }
    ctx->pc = 0x40D364u;
    SET_GPR_U32(ctx, 31, 0x40D36Cu);
    ctx->pc = 0x40D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D364u;
    // 0x40d368: 0xe7a20118  swc1        $f2, 0x118($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x40D364u, 0x40D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D36Cu;
label_40d36c:
    // 0x40d36c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_40d370:
    // 0x40d370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40d374:
    // 0x40d374: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x40d374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_40d378:
    // 0x40d378: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x40d378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40d37c:
    // 0x40d37c: 0xc10c190  jal         func_430640
label_40d380:
    if (ctx->pc == 0x40D380u) {
        ctx->pc = 0x40D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D37Cu;
        // 0x40d380: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D384u;
        goto label_40d384;
    }
    ctx->pc = 0x40D37Cu;
    SET_GPR_U32(ctx, 31, 0x40D384u);
    ctx->pc = 0x40D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D37Cu;
    // 0x40d380: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x40D37Cu, 0x40D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D384u;
label_40d384:
    // 0x40d384: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x40d384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40d388:
    // 0x40d388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40d38c:
    // 0x40d38c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40d38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d390:
    // 0x40d390: 0xc11f4a0  jal         func_47D280
label_40d394:
    if (ctx->pc == 0x40D394u) {
        ctx->pc = 0x40D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D390u;
        // 0x40d394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D398u;
        goto label_40d398;
    }
    ctx->pc = 0x40D390u;
    SET_GPR_U32(ctx, 31, 0x40D398u);
    ctx->pc = 0x40D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D390u;
    // 0x40d394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x40D390u, 0x40D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D398u;
label_40d398:
    // 0x40d398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40d398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40d39c:
    // 0x40d39c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x40d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_40d3a0:
    // 0x40d3a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40d3a4:
    // 0x40d3a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40d3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d3a8:
    // 0x40d3a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x40d3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_40d3ac:
    // 0x40d3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40d3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d3b0:
    // 0x40d3b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x40d3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_40d3b4:
    // 0x40d3b4: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x40d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_40d3b8:
    // 0x40d3b8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x40d3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_40d3bc:
    // 0x40d3bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_40d3c0:
    // 0x40d3c0: 0xc120efe  jal         func_483BF8
label_40d3c4:
    if (ctx->pc == 0x40D3C4u) {
        ctx->pc = 0x40D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3C0u;
        // 0x40d3c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D3C8u;
        goto label_40d3c8;
    }
    ctx->pc = 0x40D3C0u;
    SET_GPR_U32(ctx, 31, 0x40D3C8u);
    ctx->pc = 0x40D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D3C0u;
    // 0x40d3c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x40D3C0u, 0x40D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D3C8u;
label_40d3c8:
    // 0x40d3c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d3cc:
    // 0x40d3cc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40d3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40d3d0:
    // 0x40d3d0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40d3d4:
    // 0x40d3d4: 0x40f809  jalr        $v0
label_40d3d8:
    if (ctx->pc == 0x40D3D8u) {
        ctx->pc = 0x40D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3D4u;
        // 0x40d3d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D3DCu;
        goto label_40d3dc;
    }
    ctx->pc = 0x40D3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D3DCu);
        ctx->pc = 0x40D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3D4u;
        // 0x40d3d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D3D4u, 0x40D3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D3DCu;
label_40d3dc:
    // 0x40d3dc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_40d3e0:
    if (ctx->pc == 0x40D3E0u) {
        ctx->pc = 0x40D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3DCu;
        // 0x40d3e0: 0x26825348  addiu       $v0, $s4, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D3E4u;
        goto label_40d3e4;
    }
    ctx->pc = 0x40D3DCu;
    {
        const bool branch_taken_0x40d3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3DCu;
        // 0x40d3e0: 0x26825348  addiu       $v0, $s4, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d3dc) {
            ctx->pc = 0x40D46Cu;
            goto label_40d46c;
        }
    }
    ctx->pc = 0x40D3E4u;
label_40d3e4:
    // 0x40d3e4: 0xc11a840  jal         func_46A100
label_40d3e8:
    if (ctx->pc == 0x40D3E8u) {
        ctx->pc = 0x40D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3E4u;
        // 0x40d3e8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D3ECu;
        goto label_40d3ec;
    }
    ctx->pc = 0x40D3E4u;
    SET_GPR_U32(ctx, 31, 0x40D3ECu);
    ctx->pc = 0x40D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D3E4u;
    // 0x40d3e8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A100u, 0x40D3E4u, 0x40D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D3ECu;
label_40d3ec:
    // 0x40d3ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d3f0:
    // 0x40d3f0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40d3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40d3f4:
    // 0x40d3f4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40d3f8:
    // 0x40d3f8: 0x40f809  jalr        $v0
label_40d3fc:
    if (ctx->pc == 0x40D3FCu) {
        ctx->pc = 0x40D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3F8u;
        // 0x40d3fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D400u;
        goto label_40d400;
    }
    ctx->pc = 0x40D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D400u);
        ctx->pc = 0x40D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3F8u;
        // 0x40d3fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D3F8u, 0x40D400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D400u;
label_40d400:
    // 0x40d400: 0x1000001a  b           . + 4 + (0x1A << 2)
label_40d404:
    if (ctx->pc == 0x40D404u) {
        ctx->pc = 0x40D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D400u;
        // 0x40d404: 0x26825348  addiu       $v0, $s4, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D408u;
        goto label_40d408;
    }
    ctx->pc = 0x40D400u;
    {
        const bool branch_taken_0x40d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D400u;
        // 0x40d404: 0x26825348  addiu       $v0, $s4, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d400) {
            ctx->pc = 0x40D46Cu;
            goto label_40d46c;
        }
    }
    ctx->pc = 0x40D408u;
label_40d408:
    // 0x40d408: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40d408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40d40c:
    // 0x40d40c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40d410:
    // 0x40d410: 0x40f809  jalr        $v0
label_40d414:
    if (ctx->pc == 0x40D414u) {
        ctx->pc = 0x40D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D410u;
        // 0x40d414: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D418u;
        goto label_40d418;
    }
    ctx->pc = 0x40D410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D418u);
        ctx->pc = 0x40D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D410u;
        // 0x40d414: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D410u, 0x40D418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D418u;
label_40d418:
    // 0x40d418: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_40d41c:
    if (ctx->pc == 0x40D41Cu) {
        ctx->pc = 0x40D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D418u;
        // 0x40d41c: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D420u;
        goto label_40d420;
    }
    ctx->pc = 0x40D418u;
    {
        const bool branch_taken_0x40d418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D418u;
        // 0x40d41c: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d418) {
            ctx->pc = 0x40D468u;
            goto label_40d468;
        }
    }
    ctx->pc = 0x40D420u;
label_40d420:
    // 0x40d420: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40d420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40d424:
    // 0x40d424: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x40d424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_40d428:
    // 0x40d428: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d42c:
    // 0x40d42c: 0x40f809  jalr        $v0
label_40d430:
    if (ctx->pc == 0x40D430u) {
        ctx->pc = 0x40D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D42Cu;
        // 0x40d430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D434u;
        goto label_40d434;
    }
    ctx->pc = 0x40D42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D434u);
        ctx->pc = 0x40D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D42Cu;
        // 0x40d430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D42Cu, 0x40D434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D434u;
label_40d434:
    // 0x40d434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d438:
    // 0x40d438: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40d43c:
    // 0x40d43c: 0x40f809  jalr        $v0
label_40d440:
    if (ctx->pc == 0x40D440u) {
        ctx->pc = 0x40D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D43Cu;
        // 0x40d440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D444u;
        goto label_40d444;
    }
    ctx->pc = 0x40D43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D444u);
        ctx->pc = 0x40D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D43Cu;
        // 0x40d440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D43Cu, 0x40D444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D444u;
label_40d444:
    // 0x40d444: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d448:
    // 0x40d448: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40d44c:
    // 0x40d44c: 0x40f809  jalr        $v0
label_40d450:
    if (ctx->pc == 0x40D450u) {
        ctx->pc = 0x40D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D44Cu;
        // 0x40d450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D454u;
        goto label_40d454;
    }
    ctx->pc = 0x40D44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D454u);
        ctx->pc = 0x40D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D44Cu;
        // 0x40d450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D44Cu, 0x40D454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D454u;
label_40d454:
    // 0x40d454: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d458:
    // 0x40d458: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40d458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40d45c:
    // 0x40d45c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40d460:
    // 0x40d460: 0x40f809  jalr        $v0
label_40d464:
    if (ctx->pc == 0x40D464u) {
        ctx->pc = 0x40D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D460u;
        // 0x40d464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D468u;
        goto label_40d468;
    }
    ctx->pc = 0x40D460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D468u);
        ctx->pc = 0x40D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D460u;
        // 0x40d464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D460u, 0x40D468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D468u;
label_40d468:
    // 0x40d468: 0x26825348  addiu       $v0, $s4, 0x5348
    ctx->pc = 0x40d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
label_40d46c:
    // 0x40d46c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d470:
    // 0x40d470: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x40d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_40d474:
    // 0x40d474: 0x1464004e  bne         $v1, $a0, . + 4 + (0x4E << 2)
label_40d478:
    if (ctx->pc == 0x40D478u) {
        ctx->pc = 0x40D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D474u;
        // 0x40d478: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D47Cu;
        goto label_40d47c;
    }
    ctx->pc = 0x40D474u;
    {
        const bool branch_taken_0x40d474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x40D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D474u;
        // 0x40d478: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d474) {
            ctx->pc = 0x40D5B0u;
            goto label_40d5b0;
        }
    }
    ctx->pc = 0x40D47Cu;
label_40d47c:
    // 0x40d47c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x40d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40d480:
    // 0x40d480: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x40d480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_40d484:
    // 0x40d484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d488:
    // 0x40d488: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_40d48c:
    // 0x40d48c: 0xc120efe  jal         func_483BF8
label_40d490:
    if (ctx->pc == 0x40D490u) {
        ctx->pc = 0x40D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D48Cu;
        // 0x40d490: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D494u;
        goto label_40d494;
    }
    ctx->pc = 0x40D48Cu;
    SET_GPR_U32(ctx, 31, 0x40D494u);
    ctx->pc = 0x40D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D48Cu;
    // 0x40d490: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x40D48Cu, 0x40D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D494u;
label_40d494:
    // 0x40d494: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d498:
    // 0x40d498: 0x3c01440c  lui         $at, 0x440C
    ctx->pc = 0x40d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17420 << 16));
label_40d49c:
    // 0x40d49c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40d49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40d4a0:
    // 0x40d4a0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x40d4a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_40d4a4:
    // 0x40d4a4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x40d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_40d4a8:
    // 0x40d4a8: 0x40f809  jalr        $v0
label_40d4ac:
    if (ctx->pc == 0x40D4ACu) {
        ctx->pc = 0x40D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D4A8u;
        // 0x40d4ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D4B0u;
        goto label_40d4b0;
    }
    ctx->pc = 0x40D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D4B0u);
        ctx->pc = 0x40D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D4A8u;
        // 0x40d4ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D4A8u, 0x40D4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D4B0u;
label_40d4b0:
    // 0x40d4b0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x40d4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d4b4:
    // 0x40d4b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40d4b8:
    // 0x40d4b8: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x40d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_40d4bc:
    // 0x40d4bc: 0x86300030  lh          $s0, 0x30($s1)
    ctx->pc = 0x40d4bcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_40d4c0:
    // 0x40d4c0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x40d4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_40d4c4:
    // 0x40d4c4: 0xc103840  jal         func_40E100
label_40d4c8:
    if (ctx->pc == 0x40D4C8u) {
        ctx->pc = 0x40D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D4C4u;
        // 0x40d4c8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D4CCu;
        goto label_40d4cc;
    }
    ctx->pc = 0x40D4C4u;
    SET_GPR_U32(ctx, 31, 0x40D4CCu);
    ctx->pc = 0x40D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D4C4u;
    // 0x40d4c8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E100u, 0x40D4C4u, 0x40D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D4CCu;
label_40d4cc:
    // 0x40d4cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x40d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40d4d0:
    // 0x40d4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d4d4:
    // 0x40d4d4: 0x3c01421c  lui         $at, 0x421C
    ctx->pc = 0x40d4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16924 << 16));
label_40d4d8:
    // 0x40d4d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40d4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40d4dc:
    // 0x40d4dc: 0x0  nop
    ctx->pc = 0x40d4dcu;
    // NOP
label_40d4e0:
    // 0x40d4e0: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x40d4e0u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_40d4e4:
    // 0x40d4e4: 0x40f809  jalr        $v0
label_40d4e8:
    if (ctx->pc == 0x40D4E8u) {
        ctx->pc = 0x40D4ECu;
        goto label_40d4ec;
    }
    ctx->pc = 0x40D4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D4ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D4E4u, 0x40D4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D4ECu;
label_40d4ec:
    // 0x40d4ec: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x40d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40d4f0:
    // 0x40d4f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x40d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40d4f4:
    // 0x40d4f4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x40d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_40d4f8:
    // 0x40d4f8: 0xc123c3e  jal         func_48F0F8
label_40d4fc:
    if (ctx->pc == 0x40D4FCu) {
        ctx->pc = 0x40D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D4F8u;
        // 0x40d4fc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D500u;
        goto label_40d500;
    }
    ctx->pc = 0x40D4F8u;
    SET_GPR_U32(ctx, 31, 0x40D500u);
    ctx->pc = 0x40D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D4F8u;
    // 0x40d4fc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F0F8u, 0x40D4F8u, 0x40D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D500u;
label_40d500:
    // 0x40d500: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d504:
    // 0x40d504: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40d504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40d508:
    // 0x40d508: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40d50c:
    // 0x40d50c: 0x40f809  jalr        $v0
label_40d510:
    if (ctx->pc == 0x40D510u) {
        ctx->pc = 0x40D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D50Cu;
        // 0x40d510: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D514u;
        goto label_40d514;
    }
    ctx->pc = 0x40D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D514u);
        ctx->pc = 0x40D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D50Cu;
        // 0x40d510: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D50Cu, 0x40D514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D514u;
label_40d514:
    // 0x40d514: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_40d518:
    if (ctx->pc == 0x40D518u) {
        ctx->pc = 0x40D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D514u;
        // 0x40d518: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D51Cu;
        goto label_40d51c;
    }
    ctx->pc = 0x40D514u;
    {
        const bool branch_taken_0x40d514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D514u;
        // 0x40d518: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d514) {
            ctx->pc = 0x40D56Cu;
            goto label_40d56c;
        }
    }
    ctx->pc = 0x40D51Cu;
label_40d51c:
    // 0x40d51c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40d520:
    // 0x40d520: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x40d520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_40d524:
    // 0x40d524: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d528:
    // 0x40d528: 0x40f809  jalr        $v0
label_40d52c:
    if (ctx->pc == 0x40D52Cu) {
        ctx->pc = 0x40D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D528u;
        // 0x40d52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D530u;
        goto label_40d530;
    }
    ctx->pc = 0x40D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D530u);
        ctx->pc = 0x40D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D528u;
        // 0x40d52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D528u, 0x40D530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D530u;
label_40d530:
    // 0x40d530: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d534:
    // 0x40d534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40d534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d538:
    // 0x40d538: 0x40f809  jalr        $v0
label_40d53c:
    if (ctx->pc == 0x40D53Cu) {
        ctx->pc = 0x40D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D538u;
        // 0x40d53c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D540u;
        goto label_40d540;
    }
    ctx->pc = 0x40D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D540u);
        ctx->pc = 0x40D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D538u;
        // 0x40d53c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D538u, 0x40D540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D540u;
label_40d540:
    // 0x40d540: 0xc11a840  jal         func_46A100
label_40d544:
    if (ctx->pc == 0x40D544u) {
        ctx->pc = 0x40D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D540u;
        // 0x40d544: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D548u;
        goto label_40d548;
    }
    ctx->pc = 0x40D540u;
    SET_GPR_U32(ctx, 31, 0x40D548u);
    ctx->pc = 0x40D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D540u;
    // 0x40d544: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A100u, 0x40D540u, 0x40D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D548u;
label_40d548:
    // 0x40d548: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d54c:
    // 0x40d54c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40d550:
    // 0x40d550: 0x40f809  jalr        $v0
label_40d554:
    if (ctx->pc == 0x40D554u) {
        ctx->pc = 0x40D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D550u;
        // 0x40d554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D558u;
        goto label_40d558;
    }
    ctx->pc = 0x40D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D558u);
        ctx->pc = 0x40D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D550u;
        // 0x40d554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D550u, 0x40D558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D558u;
label_40d558:
    // 0x40d558: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d55c:
    // 0x40d55c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40d55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40d560:
    // 0x40d560: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40d564:
    // 0x40d564: 0x40f809  jalr        $v0
label_40d568:
    if (ctx->pc == 0x40D568u) {
        ctx->pc = 0x40D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D564u;
        // 0x40d568: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D56Cu;
        goto label_40d56c;
    }
    ctx->pc = 0x40D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D56Cu);
        ctx->pc = 0x40D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D564u;
        // 0x40d568: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D564u, 0x40D56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D56Cu;
label_40d56c:
    // 0x40d56c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40d56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40d570:
    // 0x40d570: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x40d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_40d574:
    // 0x40d574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40d574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40d578:
    // 0x40d578: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x40d578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_40d57c:
    // 0x40d57c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40d57cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40d580:
    // 0x40d580: 0xc05eb2a  jal         func_17ACA8
label_40d584:
    if (ctx->pc == 0x40D584u) {
        ctx->pc = 0x40D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D580u;
        // 0x40d584: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D588u;
        goto label_40d588;
    }
    ctx->pc = 0x40D580u;
    SET_GPR_U32(ctx, 31, 0x40D588u);
    ctx->pc = 0x40D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D580u;
    // 0x40d584: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x40D580u, 0x40D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D588u;
label_40d588:
    // 0x40d588: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d58c:
    // 0x40d58c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40d58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d590:
    // 0x40d590: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x40d590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_40d594:
    // 0x40d594: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x40d594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d598:
    // 0x40d598: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x40d598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_40d59c:
    // 0x40d59c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x40d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_40d5a0:
    // 0x40d5a0: 0x40f809  jalr        $v0
label_40d5a4:
    if (ctx->pc == 0x40D5A4u) {
        ctx->pc = 0x40D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5A0u;
        // 0x40d5a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D5A8u;
        goto label_40d5a8;
    }
    ctx->pc = 0x40D5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D5A8u);
        ctx->pc = 0x40D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5A0u;
        // 0x40d5a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D5A0u, 0x40D5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D5A8u;
label_40d5a8:
    // 0x40d5a8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_40d5ac:
    if (ctx->pc == 0x40D5ACu) {
        ctx->pc = 0x40D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5A8u;
        // 0x40d5ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D5B0u;
        goto label_40d5b0;
    }
    ctx->pc = 0x40D5A8u;
    {
        const bool branch_taken_0x40d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5A8u;
        // 0x40d5ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d5a8) {
            ctx->pc = 0x40D620u;
            goto label_40d620;
        }
    }
    ctx->pc = 0x40D5B0u;
label_40d5b0:
    // 0x40d5b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x40d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40d5b4:
    // 0x40d5b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x40d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_40d5b8:
    // 0x40d5b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40d5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d5bc:
    // 0x40d5bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x40d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_40d5c0:
    // 0x40d5c0: 0xc120efe  jal         func_483BF8
label_40d5c4:
    if (ctx->pc == 0x40D5C4u) {
        ctx->pc = 0x40D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5C0u;
        // 0x40d5c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D5C8u;
        goto label_40d5c8;
    }
    ctx->pc = 0x40D5C0u;
    SET_GPR_U32(ctx, 31, 0x40D5C8u);
    ctx->pc = 0x40D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D5C0u;
    // 0x40d5c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x40D5C0u, 0x40D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D5C8u;
label_40d5c8:
    // 0x40d5c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d5cc:
    // 0x40d5cc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40d5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40d5d0:
    // 0x40d5d0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40d5d4:
    // 0x40d5d4: 0x40f809  jalr        $v0
label_40d5d8:
    if (ctx->pc == 0x40D5D8u) {
        ctx->pc = 0x40D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5D4u;
        // 0x40d5d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D5DCu;
        goto label_40d5dc;
    }
    ctx->pc = 0x40D5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D5DCu);
        ctx->pc = 0x40D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5D4u;
        // 0x40d5d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D5D4u, 0x40D5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D5DCu;
label_40d5dc:
    // 0x40d5dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_40d5e0:
    if (ctx->pc == 0x40D5E0u) {
        ctx->pc = 0x40D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5DCu;
        // 0x40d5e0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D5E4u;
        goto label_40d5e4;
    }
    ctx->pc = 0x40D5DCu;
    {
        const bool branch_taken_0x40d5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5DCu;
        // 0x40d5e0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d5dc) {
            ctx->pc = 0x40D61Cu;
            goto label_40d61c;
        }
    }
    ctx->pc = 0x40D5E4u;
label_40d5e4:
    // 0x40d5e4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40d5e8:
    // 0x40d5e8: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x40d5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_40d5ec:
    // 0x40d5ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d5f0:
    // 0x40d5f0: 0x40f809  jalr        $v0
label_40d5f4:
    if (ctx->pc == 0x40D5F4u) {
        ctx->pc = 0x40D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5F0u;
        // 0x40d5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D5F8u;
        goto label_40d5f8;
    }
    ctx->pc = 0x40D5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D5F8u);
        ctx->pc = 0x40D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5F0u;
        // 0x40d5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D5F0u, 0x40D5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D5F8u;
label_40d5f8:
    // 0x40d5f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40d5fc:
    // 0x40d5fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40d600:
    // 0x40d600: 0x40f809  jalr        $v0
label_40d604:
    if (ctx->pc == 0x40D604u) {
        ctx->pc = 0x40D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D600u;
        // 0x40d604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D608u;
        goto label_40d608;
    }
    ctx->pc = 0x40D600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D608u);
        ctx->pc = 0x40D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D600u;
        // 0x40d604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D600u, 0x40D608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D608u;
label_40d608:
    // 0x40d608: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d60c:
    // 0x40d60c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40d60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40d610:
    // 0x40d610: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40d614:
    // 0x40d614: 0x40f809  jalr        $v0
label_40d618:
    if (ctx->pc == 0x40D618u) {
        ctx->pc = 0x40D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D614u;
        // 0x40d618: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D61Cu;
        goto label_40d61c;
    }
    ctx->pc = 0x40D614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D61Cu);
        ctx->pc = 0x40D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D614u;
        // 0x40d618: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D614u, 0x40D61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D61Cu;
label_40d61c:
    // 0x40d61c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x40d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40d620:
    // 0x40d620: 0xc123c3e  jal         func_48F0F8
label_40d624:
    if (ctx->pc == 0x40D624u) {
        ctx->pc = 0x40D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D620u;
        // 0x40d624: 0x27a50158  addiu       $a1, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D628u;
        goto label_40d628;
    }
    ctx->pc = 0x40D620u;
    SET_GPR_U32(ctx, 31, 0x40D628u);
    ctx->pc = 0x40D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D620u;
    // 0x40d624: 0x27a50158  addiu       $a1, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F0F8u, 0x40D620u, 0x40D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D628u;
label_40d628:
    // 0x40d628: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d62c:
    // 0x40d62c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x40d62cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40d630:
    // 0x40d630: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x40d630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40d634:
    // 0x40d634: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40d638:
    // 0x40d638: 0x40f809  jalr        $v0
label_40d63c:
    if (ctx->pc == 0x40D63Cu) {
        ctx->pc = 0x40D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D638u;
        // 0x40d63c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D640u;
        goto label_40d640;
    }
    ctx->pc = 0x40D638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D640u);
        ctx->pc = 0x40D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D638u;
        // 0x40d63c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D638u, 0x40D640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D640u;
label_40d640:
    // 0x40d640: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x40d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40d644:
    // 0x40d644: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x40d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40d648:
    // 0x40d648: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x40d648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_40d64c:
    // 0x40d64c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x40d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_40d650:
    // 0x40d650: 0x40f809  jalr        $v0
label_40d654:
    if (ctx->pc == 0x40D654u) {
        ctx->pc = 0x40D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D650u;
        // 0x40d654: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D658u;
        goto label_40d658;
    }
    ctx->pc = 0x40D650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D658u);
        ctx->pc = 0x40D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D650u;
        // 0x40d654: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D650u, 0x40D658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D658u;
label_40d658:
    // 0x40d658: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x40d658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_40d65c:
    // 0x40d65c: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x40d65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_40d660:
    // 0x40d660: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x40d660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_40d664:
    // 0x40d664: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x40d664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_40d668:
    // 0x40d668: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x40d668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_40d66c:
    // 0x40d66c: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x40d66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_40d670:
    // 0x40d670: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x40d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40d674:
    // 0x40d674: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x40d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40d678:
    // 0x40d678: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x40d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40d67c:
    // 0x40d67c: 0x3e00008  jr          $ra
label_40d680:
    if (ctx->pc == 0x40D680u) {
        ctx->pc = 0x40D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D67Cu;
        // 0x40d680: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D684u;
        goto label_40d684;
    }
    ctx->pc = 0x40D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D67Cu;
        // 0x40d680: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D684u;
label_40d684:
    // 0x40d684: 0x0  nop
    ctx->pc = 0x40d684u;
    // NOP
    ctx->pc = 0x40d688u;
}
