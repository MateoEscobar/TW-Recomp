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

// Function: sub_0020BE68
// Address: 0x20be68 - 0x20c460
void sub_0020BE68_0x20be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BE68_0x20be68");
#endif

    switch (ctx->pc) {
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c210u: goto label_20c210;
        case 0x20c214u: goto label_20c214;
        case 0x20c218u: goto label_20c218;
        case 0x20c21cu: goto label_20c21c;
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c250u: goto label_20c250;
        case 0x20c254u: goto label_20c254;
        case 0x20c258u: goto label_20c258;
        case 0x20c25cu: goto label_20c25c;
        case 0x20c260u: goto label_20c260;
        case 0x20c264u: goto label_20c264;
        case 0x20c268u: goto label_20c268;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c270u: goto label_20c270;
        case 0x20c274u: goto label_20c274;
        case 0x20c278u: goto label_20c278;
        case 0x20c27cu: goto label_20c27c;
        case 0x20c280u: goto label_20c280;
        case 0x20c284u: goto label_20c284;
        case 0x20c288u: goto label_20c288;
        case 0x20c28cu: goto label_20c28c;
        case 0x20c290u: goto label_20c290;
        case 0x20c294u: goto label_20c294;
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        case 0x20c2f0u: goto label_20c2f0;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c300u: goto label_20c300;
        case 0x20c304u: goto label_20c304;
        case 0x20c308u: goto label_20c308;
        case 0x20c30cu: goto label_20c30c;
        case 0x20c310u: goto label_20c310;
        case 0x20c314u: goto label_20c314;
        case 0x20c318u: goto label_20c318;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c320u: goto label_20c320;
        case 0x20c324u: goto label_20c324;
        case 0x20c328u: goto label_20c328;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c330u: goto label_20c330;
        case 0x20c334u: goto label_20c334;
        case 0x20c338u: goto label_20c338;
        case 0x20c33cu: goto label_20c33c;
        case 0x20c340u: goto label_20c340;
        case 0x20c344u: goto label_20c344;
        case 0x20c348u: goto label_20c348;
        case 0x20c34cu: goto label_20c34c;
        case 0x20c350u: goto label_20c350;
        case 0x20c354u: goto label_20c354;
        case 0x20c358u: goto label_20c358;
        case 0x20c35cu: goto label_20c35c;
        case 0x20c360u: goto label_20c360;
        case 0x20c364u: goto label_20c364;
        case 0x20c368u: goto label_20c368;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c370u: goto label_20c370;
        case 0x20c374u: goto label_20c374;
        case 0x20c378u: goto label_20c378;
        case 0x20c37cu: goto label_20c37c;
        case 0x20c380u: goto label_20c380;
        case 0x20c384u: goto label_20c384;
        case 0x20c388u: goto label_20c388;
        case 0x20c38cu: goto label_20c38c;
        case 0x20c390u: goto label_20c390;
        case 0x20c394u: goto label_20c394;
        case 0x20c398u: goto label_20c398;
        case 0x20c39cu: goto label_20c39c;
        case 0x20c3a0u: goto label_20c3a0;
        case 0x20c3a4u: goto label_20c3a4;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c3acu: goto label_20c3ac;
        case 0x20c3b0u: goto label_20c3b0;
        case 0x20c3b4u: goto label_20c3b4;
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3bcu: goto label_20c3bc;
        case 0x20c3c0u: goto label_20c3c0;
        case 0x20c3c4u: goto label_20c3c4;
        case 0x20c3c8u: goto label_20c3c8;
        case 0x20c3ccu: goto label_20c3cc;
        case 0x20c3d0u: goto label_20c3d0;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3d8u: goto label_20c3d8;
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3e0u: goto label_20c3e0;
        case 0x20c3e4u: goto label_20c3e4;
        case 0x20c3e8u: goto label_20c3e8;
        case 0x20c3ecu: goto label_20c3ec;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c3f4u: goto label_20c3f4;
        case 0x20c3f8u: goto label_20c3f8;
        case 0x20c3fcu: goto label_20c3fc;
        case 0x20c400u: goto label_20c400;
        case 0x20c404u: goto label_20c404;
        case 0x20c408u: goto label_20c408;
        case 0x20c40cu: goto label_20c40c;
        case 0x20c410u: goto label_20c410;
        case 0x20c414u: goto label_20c414;
        case 0x20c418u: goto label_20c418;
        case 0x20c41cu: goto label_20c41c;
        case 0x20c420u: goto label_20c420;
        case 0x20c424u: goto label_20c424;
        case 0x20c428u: goto label_20c428;
        case 0x20c42cu: goto label_20c42c;
        case 0x20c430u: goto label_20c430;
        case 0x20c434u: goto label_20c434;
        case 0x20c438u: goto label_20c438;
        case 0x20c43cu: goto label_20c43c;
        case 0x20c440u: goto label_20c440;
        case 0x20c444u: goto label_20c444;
        case 0x20c448u: goto label_20c448;
        case 0x20c44cu: goto label_20c44c;
        case 0x20c450u: goto label_20c450;
        case 0x20c454u: goto label_20c454;
        case 0x20c458u: goto label_20c458;
        case 0x20c45cu: goto label_20c45c;
        default: break;
    }

    ctx->pc = 0x20be68u;

label_20be68:
    // 0x20be68: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x20be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_20be6c:
    // 0x20be6c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x20be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_20be70:
    // 0x20be70: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x20be70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_20be74:
    // 0x20be74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20be74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20be78:
    // 0x20be78: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x20be78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_20be7c:
    // 0x20be7c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x20be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_20be80:
    // 0x20be80: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x20be80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_20be84:
    // 0x20be84: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x20be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_20be88:
    // 0x20be88: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20be8c:
    // 0x20be8c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x20be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_20be90:
    // 0x20be90: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x20be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_20be94:
    // 0x20be94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20be98:
    // 0x20be98: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x20be98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_20be9c:
    // 0x20be9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20bea0:
    // 0x20bea0: 0x14400163  bnez        $v0, . + 4 + (0x163 << 2)
label_20bea4:
    if (ctx->pc == 0x20BEA4u) {
        ctx->pc = 0x20BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA0u;
        // 0x20bea4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEA8u;
        goto label_20bea8;
    }
    ctx->pc = 0x20BEA0u;
    {
        const bool branch_taken_0x20bea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA0u;
        // 0x20bea4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bea0) {
            ctx->pc = 0x20C430u;
            goto label_20c430;
        }
    }
    ctx->pc = 0x20BEA8u;
label_20bea8:
    // 0x20bea8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x20bea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_20beac:
    // 0x20beac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20beb0:
    // 0x20beb0: 0xafb60030  sw          $s6, 0x30($sp)
    ctx->pc = 0x20beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 22));
label_20beb4:
    // 0x20beb4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x20beb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20beb8:
    // 0x20beb8: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x20beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_20bebc:
    // 0x20bebc: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x20bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_20bec0:
    // 0x20bec0: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_20bec4:
    // 0x20bec4: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_20bec8:
    // 0x20bec8: 0x40f809  jalr        $v0
label_20becc:
    if (ctx->pc == 0x20BECCu) {
        ctx->pc = 0x20BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEC8u;
        // 0x20becc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BED0u;
        goto label_20bed0;
    }
    ctx->pc = 0x20BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BED0u);
        ctx->pc = 0x20BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEC8u;
        // 0x20becc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BEC8u, 0x20BED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BED0u;
label_20bed0:
    // 0x20bed0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20bed4:
    if (ctx->pc == 0x20BED4u) {
        ctx->pc = 0x20BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BED0u;
        // 0x20bed4: 0x8e055024  lw          $a1, 0x5024($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BED8u;
        goto label_20bed8;
    }
    ctx->pc = 0x20BED0u;
    {
        const bool branch_taken_0x20bed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BED0u;
        // 0x20bed4: 0x8e055024  lw          $a1, 0x5024($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bed0) {
            ctx->pc = 0x20BEE4u;
            goto label_20bee4;
        }
    }
    ctx->pc = 0x20BED8u;
label_20bed8:
    // 0x20bed8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x20bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_20bedc:
    // 0x20bedc: 0x10000012  b           . + 4 + (0x12 << 2)
label_20bee0:
    if (ctx->pc == 0x20BEE0u) {
        ctx->pc = 0x20BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEDCu;
        // 0x20bee0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEE4u;
        goto label_20bee4;
    }
    ctx->pc = 0x20BEDCu;
    {
        const bool branch_taken_0x20bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEDCu;
        // 0x20bee0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bedc) {
            ctx->pc = 0x20BF28u;
            goto label_20bf28;
        }
    }
    ctx->pc = 0x20BEE4u;
label_20bee4:
    // 0x20bee4: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x20bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_20bee8:
    // 0x20bee8: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x20bee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_20beec:
    // 0x20beec: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x20beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_20bef0:
    // 0x20bef0: 0x40f809  jalr        $v0
label_20bef4:
    if (ctx->pc == 0x20BEF4u) {
        ctx->pc = 0x20BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEF0u;
        // 0x20bef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEF8u;
        goto label_20bef8;
    }
    ctx->pc = 0x20BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BEF8u);
        ctx->pc = 0x20BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEF0u;
        // 0x20bef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BEF0u, 0x20BEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BEF8u;
label_20bef8:
    // 0x20bef8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x20bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20befc:
    // 0x20befc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_20bf00:
    if (ctx->pc == 0x20BF00u) {
        ctx->pc = 0x20BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEFCu;
        // 0x20bf00: 0x8e055024  lw          $a1, 0x5024($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF04u;
        goto label_20bf04;
    }
    ctx->pc = 0x20BEFCu;
    {
        const bool branch_taken_0x20befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEFCu;
        // 0x20bf00: 0x8e055024  lw          $a1, 0x5024($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20befc) {
            ctx->pc = 0x20BF0Cu;
            goto label_20bf0c;
        }
    }
    ctx->pc = 0x20BF04u;
label_20bf04:
    // 0x20bf04: 0x10000008  b           . + 4 + (0x8 << 2)
label_20bf08:
    if (ctx->pc == 0x20BF08u) {
        ctx->pc = 0x20BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF04u;
        // 0x20bf08: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF0Cu;
        goto label_20bf0c;
    }
    ctx->pc = 0x20BF04u;
    {
        const bool branch_taken_0x20bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF04u;
        // 0x20bf08: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf04) {
            ctx->pc = 0x20BF28u;
            goto label_20bf28;
        }
    }
    ctx->pc = 0x20BF0Cu;
label_20bf0c:
    // 0x20bf0c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20bf0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bf10:
    // 0x20bf10: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x20bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_20bf14:
    // 0x20bf14: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x20bf14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_20bf18:
    // 0x20bf18: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_20bf1c:
    // 0x20bf1c: 0x40f809  jalr        $v0
label_20bf20:
    if (ctx->pc == 0x20BF20u) {
        ctx->pc = 0x20BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF1Cu;
        // 0x20bf20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF24u;
        goto label_20bf24;
    }
    ctx->pc = 0x20BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BF24u);
        ctx->pc = 0x20BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF1Cu;
        // 0x20bf20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BF1Cu, 0x20BF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BF24u;
label_20bf24:
    // 0x20bf24: 0x2e2b00b  movn        $s6, $s7, $v0
    ctx->pc = 0x20bf24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_20bf28:
    // 0x20bf28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_20bf2c:
    // 0x20bf2c: 0x16882b  sltu        $s1, $zero, $s6
    ctx->pc = 0x20bf2cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_20bf30:
    // 0x20bf30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20bf34:
    // 0x20bf34: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x20bf34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20bf38:
    // 0x20bf38: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x20bf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_20bf3c:
    // 0x20bf3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20bf3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20bf40:
    // 0x20bf40: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
label_20bf44:
    if (ctx->pc == 0x20BF44u) {
        ctx->pc = 0x20BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF40u;
        // 0x20bf44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF48u;
        goto label_20bf48;
    }
    ctx->pc = 0x20BF40u;
    {
        const bool branch_taken_0x20bf40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF40u;
        // 0x20bf44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf40) {
            ctx->pc = 0x20BF70u;
            goto label_20bf70;
        }
    }
    ctx->pc = 0x20BF48u;
label_20bf48:
    // 0x20bf48: 0xc080ebe  jal         func_203AF8
label_20bf4c:
    if (ctx->pc == 0x20BF4Cu) {
        ctx->pc = 0x20BF50u;
        goto label_20bf50;
    }
    ctx->pc = 0x20BF48u;
    SET_GPR_U32(ctx, 31, 0x20BF50u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20BF48u, 0x20BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF50u;
label_20bf50:
    // 0x20bf50: 0xc080ee2  jal         func_203B88
label_20bf54:
    if (ctx->pc == 0x20BF54u) {
        ctx->pc = 0x20BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF50u;
        // 0x20bf54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF58u;
        goto label_20bf58;
    }
    ctx->pc = 0x20BF50u;
    SET_GPR_U32(ctx, 31, 0x20BF58u);
    ctx->pc = 0x20BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF50u;
    // 0x20bf54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B88u, 0x20BF50u, 0x20BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF58u;
label_20bf58:
    // 0x20bf58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20bf5c:
    // 0x20bf5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20bf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bf60:
    // 0x20bf60: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20bf60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20bf64:
    // 0x20bf64: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20bf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20bf68:
    // 0x20bf68: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x20bf68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20bf6c:
    // 0x20bf6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20bf70:
    // 0x20bf70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20bf74:
    // 0x20bf74: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_20bf78:
    if (ctx->pc == 0x20BF78u) {
        ctx->pc = 0x20BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF74u;
        // 0x20bf78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF7Cu;
        goto label_20bf7c;
    }
    ctx->pc = 0x20BF74u;
    {
        const bool branch_taken_0x20bf74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF74u;
        // 0x20bf78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf74) {
            ctx->pc = 0x20BFA8u;
            goto label_20bfa8;
        }
    }
    ctx->pc = 0x20BF7Cu;
label_20bf7c:
    // 0x20bf7c: 0xc080ebe  jal         func_203AF8
label_20bf80:
    if (ctx->pc == 0x20BF80u) {
        ctx->pc = 0x20BF84u;
        goto label_20bf84;
    }
    ctx->pc = 0x20BF7Cu;
    SET_GPR_U32(ctx, 31, 0x20BF84u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20BF7Cu, 0x20BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF84u;
label_20bf84:
    // 0x20bf84: 0xc080ede  jal         func_203B78
label_20bf88:
    if (ctx->pc == 0x20BF88u) {
        ctx->pc = 0x20BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF84u;
        // 0x20bf88: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF8Cu;
        goto label_20bf8c;
    }
    ctx->pc = 0x20BF84u;
    SET_GPR_U32(ctx, 31, 0x20BF8Cu);
    ctx->pc = 0x20BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF84u;
    // 0x20bf88: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B78u, 0x20BF84u, 0x20BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF8Cu;
label_20bf8c:
    // 0x20bf8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20bf90:
    // 0x20bf90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20bf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bf94:
    // 0x20bf94: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20bf94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20bf98:
    // 0x20bf98: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20bf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20bf9c:
    // 0x20bf9c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x20bf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20bfa0:
    // 0x20bfa0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20bfa4:
    // 0x20bfa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bfa8:
    // 0x20bfa8: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
label_20bfac:
    if (ctx->pc == 0x20BFACu) {
        ctx->pc = 0x20BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFA8u;
        // 0x20bfac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BFB0u;
        goto label_20bfb0;
    }
    ctx->pc = 0x20BFA8u;
    {
        const bool branch_taken_0x20bfa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFA8u;
        // 0x20bfac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfa8) {
            ctx->pc = 0x20BFD8u;
            goto label_20bfd8;
        }
    }
    ctx->pc = 0x20BFB0u;
label_20bfb0:
    // 0x20bfb0: 0xc080ebe  jal         func_203AF8
label_20bfb4:
    if (ctx->pc == 0x20BFB4u) {
        ctx->pc = 0x20BFB8u;
        goto label_20bfb8;
    }
    ctx->pc = 0x20BFB0u;
    SET_GPR_U32(ctx, 31, 0x20BFB8u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20BFB0u, 0x20BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFB8u;
label_20bfb8:
    // 0x20bfb8: 0xc080eda  jal         func_203B68
label_20bfbc:
    if (ctx->pc == 0x20BFBCu) {
        ctx->pc = 0x20BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFB8u;
        // 0x20bfbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BFC0u;
        goto label_20bfc0;
    }
    ctx->pc = 0x20BFB8u;
    SET_GPR_U32(ctx, 31, 0x20BFC0u);
    ctx->pc = 0x20BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFB8u;
    // 0x20bfbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B68u, 0x20BFB8u, 0x20BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFC0u;
label_20bfc0:
    // 0x20bfc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20bfc4:
    // 0x20bfc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20bfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bfc8:
    // 0x20bfc8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20bfc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20bfcc:
    // 0x20bfcc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20bfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20bfd0:
    // 0x20bfd0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x20bfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20bfd4:
    // 0x20bfd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20bfd8:
    // 0x20bfd8: 0x1633000c  bne         $s1, $s3, . + 4 + (0xC << 2)
label_20bfdc:
    if (ctx->pc == 0x20BFDCu) {
        ctx->pc = 0x20BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFD8u;
        // 0x20bfdc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BFE0u;
        goto label_20bfe0;
    }
    ctx->pc = 0x20BFD8u;
    {
        const bool branch_taken_0x20bfd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x20BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFD8u;
        // 0x20bfdc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfd8) {
            ctx->pc = 0x20C00Cu;
            goto label_20c00c;
        }
    }
    ctx->pc = 0x20BFE0u;
label_20bfe0:
    // 0x20bfe0: 0xc080ebe  jal         func_203AF8
label_20bfe4:
    if (ctx->pc == 0x20BFE4u) {
        ctx->pc = 0x20BFE8u;
        goto label_20bfe8;
    }
    ctx->pc = 0x20BFE0u;
    SET_GPR_U32(ctx, 31, 0x20BFE8u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20BFE0u, 0x20BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFE8u;
label_20bfe8:
    // 0x20bfe8: 0xc080ed6  jal         func_203B58
label_20bfec:
    if (ctx->pc == 0x20BFECu) {
        ctx->pc = 0x20BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFE8u;
        // 0x20bfec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BFF0u;
        goto label_20bff0;
    }
    ctx->pc = 0x20BFE8u;
    SET_GPR_U32(ctx, 31, 0x20BFF0u);
    ctx->pc = 0x20BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFE8u;
    // 0x20bfec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B58u, 0x20BFE8u, 0x20BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFF0u;
label_20bff0:
    // 0x20bff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20bff4:
    // 0x20bff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20bff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bff8:
    // 0x20bff8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20bff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20bffc:
    // 0x20bffc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20bffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20c000:
    // 0x20c000: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x20c000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20c004:
    // 0x20c004: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20c008:
    // 0x20c008: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20c008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20c00c:
    // 0x20c00c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x20c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20c010:
    // 0x20c010: 0x8c6b27e4  lw          $t3, 0x27E4($v1)
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_20c014:
    // 0x20c014: 0x245e92c0  addiu       $fp, $v0, -0x6D40
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_20c018:
    // 0x20c018: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20c018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20c01c:
    // 0x20c01c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20c01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20c020:
    // 0x20c020: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x20c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_20c024:
    // 0x20c024: 0x24a592b0  addiu       $a1, $a1, -0x6D50
    ctx->pc = 0x20c024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939312));
label_20c028:
    // 0x20c028: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20c028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c02c:
    // 0x20c02c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x20c02cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20c030:
    // 0x20c030: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20c030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20c034:
    // 0x20c034: 0x24090054  addiu       $t1, $zero, 0x54
    ctx->pc = 0x20c034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20c038:
    // 0x20c038: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20c03c:
    // 0x20c03c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20c03cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c040:
    // 0x20c040: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x20c040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_20c044:
    // 0x20c044: 0x40f809  jalr        $v0
label_20c048:
    if (ctx->pc == 0x20C048u) {
        ctx->pc = 0x20C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C044u;
        // 0x20c048: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C04Cu;
        goto label_20c04c;
    }
    ctx->pc = 0x20C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C04Cu);
        ctx->pc = 0x20C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C044u;
        // 0x20c048: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C044u, 0x20C04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C04Cu;
label_20c04c:
    // 0x20c04c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20c050:
    if (ctx->pc == 0x20C050u) {
        ctx->pc = 0x20C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C04Cu;
        // 0x20c050: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C054u;
        goto label_20c054;
    }
    ctx->pc = 0x20C04Cu;
    {
        const bool branch_taken_0x20c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C04Cu;
        // 0x20c050: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c04c) {
            ctx->pc = 0x20C060u;
            goto label_20c060;
        }
    }
    ctx->pc = 0x20C054u;
label_20c054:
    // 0x20c054: 0xc0733e2  jal         func_1CCF88
label_20c058:
    if (ctx->pc == 0x20C058u) {
        ctx->pc = 0x20C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C054u;
        // 0x20c058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C05Cu;
        goto label_20c05c;
    }
    ctx->pc = 0x20C054u;
    SET_GPR_U32(ctx, 31, 0x20C05Cu);
    ctx->pc = 0x20C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C054u;
    // 0x20c058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20C054u, 0x20C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C05Cu;
label_20c05c:
    // 0x20c05c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x20c05cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20c060:
    // 0x20c060: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x20c060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_20c064:
    // 0x20c064: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20c064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20c068:
    // 0x20c068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20c068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c06c:
    // 0x20c06c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c070:
    // 0x20c070: 0xc05e602  jal         func_179808
label_20c074:
    if (ctx->pc == 0x20C074u) {
        ctx->pc = 0x20C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C070u;
        // 0x20c074: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C078u;
        goto label_20c078;
    }
    ctx->pc = 0x20C070u;
    SET_GPR_U32(ctx, 31, 0x20C078u);
    ctx->pc = 0x20C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C070u;
    // 0x20c074: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x20C070u, 0x20C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C078u;
label_20c078:
    // 0x20c078: 0x8e4a008c  lw          $t2, 0x8C($s2)
    ctx->pc = 0x20c078u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20c07c:
    // 0x20c07c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20c07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20c080:
    // 0x20c080: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20c084:
    // 0x20c084: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20c088:
    // 0x20c088: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x20c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_20c08c:
    // 0x20c08c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20c08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c090:
    // 0x20c090: 0x8c55d328  lw          $s5, -0x2CD8($v0)
    ctx->pc = 0x20c090u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_20c094:
    // 0x20c094: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c098:
    // 0x20c098: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_20c09c:
    // 0x20c09c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c0a0:
    // 0x20c0a0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x20c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_20c0a4:
    // 0x20c0a4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x20c0a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c0a8:
    // 0x20c0a8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_20c0ac:
    // 0x20c0ac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x20c0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c0b0:
    // 0x20c0b0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20c0b4:
    // 0x20c0b4: 0x40f809  jalr        $v0
label_20c0b8:
    if (ctx->pc == 0x20C0B8u) {
        ctx->pc = 0x20C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0B4u;
        // 0x20c0b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0BCu;
        goto label_20c0bc;
    }
    ctx->pc = 0x20C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C0BCu);
        ctx->pc = 0x20C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0B4u;
        // 0x20c0b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C0B4u, 0x20C0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C0BCu;
label_20c0bc:
    // 0x20c0bc: 0xc067b9c  jal         func_19EE70
label_20c0c0:
    if (ctx->pc == 0x20C0C0u) {
        ctx->pc = 0x20C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0BCu;
        // 0x20c0c0: 0x2404007b  addiu       $a0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0C4u;
        goto label_20c0c4;
    }
    ctx->pc = 0x20C0BCu;
    SET_GPR_U32(ctx, 31, 0x20C0C4u);
    ctx->pc = 0x20C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0BCu;
    // 0x20c0c0: 0x2404007b  addiu       $a0, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20C0BCu, 0x20C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0C4u;
label_20c0c4:
    // 0x20c0c4: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20c0c8:
    // 0x20c0c8: 0xc073478  jal         func_1CD1E0
label_20c0cc:
    if (ctx->pc == 0x20C0CCu) {
        ctx->pc = 0x20C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0C8u;
        // 0x20c0cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0D0u;
        goto label_20c0d0;
    }
    ctx->pc = 0x20C0C8u;
    SET_GPR_U32(ctx, 31, 0x20C0D0u);
    ctx->pc = 0x20C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0C8u;
    // 0x20c0cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x20C0C8u, 0x20C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0D0u;
label_20c0d0:
    // 0x20c0d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20c0d4:
    // 0x20c0d4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20c0d8:
    // 0x20c0d8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x20c0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_20c0dc:
    // 0x20c0dc: 0x24a59300  addiu       $a1, $a1, -0x6D00
    ctx->pc = 0x20c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
label_20c0e0:
    // 0x20c0e0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20c0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20c0e4:
    // 0x20c0e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20c0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c0e8:
    // 0x20c0e8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20c0ec:
    // 0x20c0ec: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x20c0ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20c0f0:
    // 0x20c0f0: 0x2409005a  addiu       $t1, $zero, 0x5A
    ctx->pc = 0x20c0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_20c0f4:
    // 0x20c0f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20c0f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c0f8:
    // 0x20c0f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20c0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20c0fc:
    // 0x20c0fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20c0fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c100:
    // 0x20c100: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20c104:
    // 0x20c104: 0x40f809  jalr        $v0
label_20c108:
    if (ctx->pc == 0x20C108u) {
        ctx->pc = 0x20C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C104u;
        // 0x20c108: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C10Cu;
        goto label_20c10c;
    }
    ctx->pc = 0x20C104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C10Cu);
        ctx->pc = 0x20C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C104u;
        // 0x20c108: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C104u, 0x20C10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C10Cu;
label_20c10c:
    // 0x20c10c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20c110:
    if (ctx->pc == 0x20C110u) {
        ctx->pc = 0x20C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C10Cu;
        // 0x20c110: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C114u;
        goto label_20c114;
    }
    ctx->pc = 0x20C10Cu;
    {
        const bool branch_taken_0x20c10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C10Cu;
        // 0x20c110: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c10c) {
            ctx->pc = 0x20C120u;
            goto label_20c120;
        }
    }
    ctx->pc = 0x20C114u;
label_20c114:
    // 0x20c114: 0xc074fbc  jal         func_1D3EF0
label_20c118:
    if (ctx->pc == 0x20C118u) {
        ctx->pc = 0x20C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C114u;
        // 0x20c118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C11Cu;
        goto label_20c11c;
    }
    ctx->pc = 0x20C114u;
    SET_GPR_U32(ctx, 31, 0x20C11Cu);
    ctx->pc = 0x20C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C114u;
    // 0x20c118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x20C114u, 0x20C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C11Cu;
label_20c11c:
    // 0x20c11c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c120:
    // 0x20c120: 0x1623000f  bne         $s1, $v1, . + 4 + (0xF << 2)
label_20c124:
    if (ctx->pc == 0x20C124u) {
        ctx->pc = 0x20C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C120u;
        // 0x20c124: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C128u;
        goto label_20c128;
    }
    ctx->pc = 0x20C120u;
    {
        const bool branch_taken_0x20c120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C120u;
        // 0x20c124: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c120) {
            ctx->pc = 0x20C160u;
            goto label_20c160;
        }
    }
    ctx->pc = 0x20C128u;
label_20c128:
    // 0x20c128: 0xc080ed2  jal         func_203B48
label_20c12c:
    if (ctx->pc == 0x20C12Cu) {
        ctx->pc = 0x20C130u;
        goto label_20c130;
    }
    ctx->pc = 0x20C128u;
    SET_GPR_U32(ctx, 31, 0x20C130u);
    ctx->pc = 0x203B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B48u, 0x20C128u, 0x20C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C130u;
label_20c130:
    // 0x20c130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20c134:
    // 0x20c134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20c134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c138:
    // 0x20c138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20c13c:
    // 0x20c13c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20c140:
    // 0x20c140: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20c140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20c144:
    // 0x20c144: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20c148:
    // 0x20c148: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x20c148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20c14c:
    // 0x20c14c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20c150:
    // 0x20c150: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x20c150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_20c154:
    // 0x20c154: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x20c154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_20c158:
    // 0x20c158: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x20c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_20c15c:
    // 0x20c15c: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x20c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
label_20c160:
    // 0x20c160: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20c164:
    // 0x20c164: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
label_20c168:
    if (ctx->pc == 0x20C168u) {
        ctx->pc = 0x20C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C164u;
        // 0x20c168: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C16Cu;
        goto label_20c16c;
    }
    ctx->pc = 0x20C164u;
    {
        const bool branch_taken_0x20c164 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C164u;
        // 0x20c168: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c164) {
            ctx->pc = 0x20C1A8u;
            goto label_20c1a8;
        }
    }
    ctx->pc = 0x20C16Cu;
label_20c16c:
    // 0x20c16c: 0xc080ece  jal         func_203B38
label_20c170:
    if (ctx->pc == 0x20C170u) {
        ctx->pc = 0x20C174u;
        goto label_20c174;
    }
    ctx->pc = 0x20C16Cu;
    SET_GPR_U32(ctx, 31, 0x20C174u);
    ctx->pc = 0x203B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B38u, 0x20C16Cu, 0x20C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C174u;
label_20c174:
    // 0x20c174: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20c178:
    // 0x20c178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20c178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c17c:
    // 0x20c17c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20c180:
    // 0x20c180: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20c184:
    // 0x20c184: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20c184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20c188:
    // 0x20c188: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20c18c:
    // 0x20c18c: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x20c18cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20c190:
    // 0x20c190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20c194:
    // 0x20c194: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x20c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_20c198:
    // 0x20c198: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x20c198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_20c19c:
    // 0x20c19c: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x20c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_20c1a0:
    // 0x20c1a0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x20c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_20c1a4:
    // 0x20c1a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c1a8:
    // 0x20c1a8: 0x56230010  bnel        $s1, $v1, . + 4 + (0x10 << 2)
label_20c1ac:
    if (ctx->pc == 0x20C1ACu) {
        ctx->pc = 0x20C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1A8u;
        // 0x20c1ac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1B0u;
        goto label_20c1b0;
    }
    ctx->pc = 0x20C1A8u;
    {
        const bool branch_taken_0x20c1a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x20c1a8) {
            ctx->pc = 0x20C1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C1A8u;
            // 0x20c1ac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C1ECu;
            goto label_20c1ec;
        }
    }
    ctx->pc = 0x20C1B0u;
label_20c1b0:
    // 0x20c1b0: 0xc080eca  jal         func_203B28
label_20c1b4:
    if (ctx->pc == 0x20C1B4u) {
        ctx->pc = 0x20C1B8u;
        goto label_20c1b8;
    }
    ctx->pc = 0x20C1B0u;
    SET_GPR_U32(ctx, 31, 0x20C1B8u);
    ctx->pc = 0x203B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B28u, 0x20C1B0u, 0x20C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1B8u;
label_20c1b8:
    // 0x20c1b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20c1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20c1bc:
    // 0x20c1bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20c1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c1c0:
    // 0x20c1c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20c1c4:
    // 0x20c1c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20c1c8:
    // 0x20c1c8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20c1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20c1cc:
    // 0x20c1cc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20c1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20c1d0:
    // 0x20c1d0: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x20c1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20c1d4:
    // 0x20c1d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20c1d8:
    // 0x20c1d8: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x20c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_20c1dc:
    // 0x20c1dc: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x20c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_20c1e0:
    // 0x20c1e0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x20c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_20c1e4:
    // 0x20c1e4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x20c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_20c1e8:
    // 0x20c1e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20c1e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c1ec:
    // 0x20c1ec: 0x56330010  bnel        $s1, $s3, . + 4 + (0x10 << 2)
label_20c1f0:
    if (ctx->pc == 0x20C1F0u) {
        ctx->pc = 0x20C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1ECu;
        // 0x20c1f0: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1F4u;
        goto label_20c1f4;
    }
    ctx->pc = 0x20C1ECu;
    {
        const bool branch_taken_0x20c1ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x20c1ec) {
            ctx->pc = 0x20C1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C1ECu;
            // 0x20c1f0: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C230u;
            goto label_20c230;
        }
    }
    ctx->pc = 0x20C1F4u;
label_20c1f4:
    // 0x20c1f4: 0xc080ec6  jal         func_203B18
label_20c1f8:
    if (ctx->pc == 0x20C1F8u) {
        ctx->pc = 0x20C1FCu;
        goto label_20c1fc;
    }
    ctx->pc = 0x20C1F4u;
    SET_GPR_U32(ctx, 31, 0x20C1FCu);
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x20C1F4u, 0x20C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1FCu;
label_20c1fc:
    // 0x20c1fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20c1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20c200:
    // 0x20c200: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20c200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c204:
    // 0x20c204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20c208:
    // 0x20c208: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20c20c:
    // 0x20c20c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20c20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20c210:
    // 0x20c210: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20c210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20c214:
    // 0x20c214: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x20c214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20c218:
    // 0x20c218: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20c21c:
    // 0x20c21c: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x20c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_20c220:
    // 0x20c220: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x20c220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_20c224:
    // 0x20c224: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x20c224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_20c228:
    // 0x20c228: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x20c228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_20c22c:
    // 0x20c22c: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c230:
    // 0x20c230: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20c230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c234:
    // 0x20c234: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x20c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20c238:
    // 0x20c238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c23c:
    // 0x20c23c: 0xc075044  jal         func_1D4110
label_20c240:
    if (ctx->pc == 0x20C240u) {
        ctx->pc = 0x20C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C23Cu;
        // 0x20c240: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C244u;
        goto label_20c244;
    }
    ctx->pc = 0x20C23Cu;
    SET_GPR_U32(ctx, 31, 0x20C244u);
    ctx->pc = 0x20C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C23Cu;
    // 0x20c240: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x20C23Cu, 0x20C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C244u;
label_20c244:
    // 0x20c244: 0xc080ebe  jal         func_203AF8
label_20c248:
    if (ctx->pc == 0x20C248u) {
        ctx->pc = 0x20C24Cu;
        goto label_20c24c;
    }
    ctx->pc = 0x20C244u;
    SET_GPR_U32(ctx, 31, 0x20C24Cu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20C244u, 0x20C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C24Cu;
label_20c24c:
    // 0x20c24c: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x20c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c250:
    // 0x20c250: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20c254:
    // 0x20c254: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x20c254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
label_20c258:
    // 0x20c258: 0xac530088  sw          $s3, 0x88($v0)
    ctx->pc = 0x20c258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 19));
label_20c25c:
    // 0x20c25c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x20c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c260:
    // 0x20c260: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x20c260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
label_20c264:
    // 0x20c264: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_20c268:
    // 0x20c268: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20c26c:
    if (ctx->pc == 0x20C26Cu) {
        ctx->pc = 0x20C270u;
        goto label_20c270;
    }
    ctx->pc = 0x20C268u;
    {
        const bool branch_taken_0x20c268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c268) {
            ctx->pc = 0x20C2ACu;
            goto label_20c2ac;
        }
    }
    ctx->pc = 0x20C270u;
label_20c270:
    // 0x20c270: 0xc067b9c  jal         func_19EE70
label_20c274:
    if (ctx->pc == 0x20C274u) {
        ctx->pc = 0x20C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C270u;
        // 0x20c274: 0x2404007d  addiu       $a0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C278u;
        goto label_20c278;
    }
    ctx->pc = 0x20C270u;
    SET_GPR_U32(ctx, 31, 0x20C278u);
    ctx->pc = 0x20C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C270u;
    // 0x20c274: 0x2404007d  addiu       $a0, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20C270u, 0x20C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C278u;
label_20c278:
    // 0x20c278: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20c278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c27c:
    // 0x20c27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c280:
    // 0x20c280: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20c280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20c284:
    // 0x20c284: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20c284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20c288:
    // 0x20c288: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20c288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c28c:
    // 0x20c28c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20c28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c290:
    // 0x20c290: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20c290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20c294:
    // 0x20c294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c298:
    // 0x20c298: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20c298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c29c:
    // 0x20c29c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c29cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2a0:
    // 0x20c2a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x20c2a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c2a4:
    // 0x20c2a4: 0xc07508c  jal         func_1D4230
label_20c2a8:
    if (ctx->pc == 0x20C2A8u) {
        ctx->pc = 0x20C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2A4u;
        // 0x20c2a8: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2ACu;
        goto label_20c2ac;
    }
    ctx->pc = 0x20C2A4u;
    SET_GPR_U32(ctx, 31, 0x20C2ACu);
    ctx->pc = 0x20C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2A4u;
    // 0x20c2a8: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20C2A4u, 0x20C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2ACu;
label_20c2ac:
    // 0x20c2ac: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_20c2b0:
    if (ctx->pc == 0x20C2B0u) {
        ctx->pc = 0x20C2B4u;
        goto label_20c2b4;
    }
    ctx->pc = 0x20C2ACu;
    {
        const bool branch_taken_0x20c2ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2ac) {
            ctx->pc = 0x20C2F0u;
            goto label_20c2f0;
        }
    }
    ctx->pc = 0x20C2B4u;
label_20c2b4:
    // 0x20c2b4: 0xc067b9c  jal         func_19EE70
label_20c2b8:
    if (ctx->pc == 0x20C2B8u) {
        ctx->pc = 0x20C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2B4u;
        // 0x20c2b8: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2BCu;
        goto label_20c2bc;
    }
    ctx->pc = 0x20C2B4u;
    SET_GPR_U32(ctx, 31, 0x20C2BCu);
    ctx->pc = 0x20C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2B4u;
    // 0x20c2b8: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20C2B4u, 0x20C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2BCu;
label_20c2bc:
    // 0x20c2bc: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c2c0:
    // 0x20c2c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c2c4:
    // 0x20c2c4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20c2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20c2c8:
    // 0x20c2c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20c2c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20c2cc:
    // 0x20c2cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20c2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c2d0:
    // 0x20c2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20c2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c2d4:
    // 0x20c2d4: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20c2d8:
    // 0x20c2d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20c2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2dc:
    // 0x20c2dc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c2e0:
    // 0x20c2e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2e4:
    // 0x20c2e4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x20c2e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c2e8:
    // 0x20c2e8: 0xc07508c  jal         func_1D4230
label_20c2ec:
    if (ctx->pc == 0x20C2ECu) {
        ctx->pc = 0x20C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2E8u;
        // 0x20c2ec: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2F0u;
        goto label_20c2f0;
    }
    ctx->pc = 0x20C2E8u;
    SET_GPR_U32(ctx, 31, 0x20C2F0u);
    ctx->pc = 0x20C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2E8u;
    // 0x20c2ec: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20C2E8u, 0x20C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2F0u;
label_20c2f0:
    // 0x20c2f0: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_20c2f4:
    if (ctx->pc == 0x20C2F4u) {
        ctx->pc = 0x20C2F8u;
        goto label_20c2f8;
    }
    ctx->pc = 0x20C2F0u;
    {
        const bool branch_taken_0x20c2f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2f0) {
            ctx->pc = 0x20C334u;
            goto label_20c334;
        }
    }
    ctx->pc = 0x20C2F8u;
label_20c2f8:
    // 0x20c2f8: 0xc067b9c  jal         func_19EE70
label_20c2fc:
    if (ctx->pc == 0x20C2FCu) {
        ctx->pc = 0x20C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2F8u;
        // 0x20c2fc: 0x2404007e  addiu       $a0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C300u;
        goto label_20c300;
    }
    ctx->pc = 0x20C2F8u;
    SET_GPR_U32(ctx, 31, 0x20C300u);
    ctx->pc = 0x20C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2F8u;
    // 0x20c2fc: 0x2404007e  addiu       $a0, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20C2F8u, 0x20C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C300u;
label_20c300:
    // 0x20c300: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c304:
    // 0x20c304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c308:
    // 0x20c308: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20c308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20c30c:
    // 0x20c30c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20c30cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20c310:
    // 0x20c310: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20c310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c314:
    // 0x20c314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20c314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c318:
    // 0x20c318: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20c31c:
    // 0x20c31c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c320:
    // 0x20c320: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20c320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c324:
    // 0x20c324: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c328:
    // 0x20c328: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x20c328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c32c:
    // 0x20c32c: 0xc07508c  jal         func_1D4230
label_20c330:
    if (ctx->pc == 0x20C330u) {
        ctx->pc = 0x20C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C32Cu;
        // 0x20c330: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C334u;
        goto label_20c334;
    }
    ctx->pc = 0x20C32Cu;
    SET_GPR_U32(ctx, 31, 0x20C334u);
    ctx->pc = 0x20C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C32Cu;
    // 0x20c330: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20C32Cu, 0x20C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C334u;
label_20c334:
    // 0x20c334: 0xc067b9c  jal         func_19EE70
label_20c338:
    if (ctx->pc == 0x20C338u) {
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C33Cu;
        goto label_20c33c;
    }
    ctx->pc = 0x20C334u;
    SET_GPR_U32(ctx, 31, 0x20C33Cu);
    ctx->pc = 0x20C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C334u;
    // 0x20c338: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20C334u, 0x20C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C33Cu;
label_20c33c:
    // 0x20c33c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20c33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20c340:
    // 0x20c340: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20c340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20c344:
    // 0x20c344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20c344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c348:
    // 0x20c348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c34c:
    // 0x20c34c: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c350:
    // 0x20c350: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x20c350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c354:
    // 0x20c354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20c354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c358:
    // 0x20c358: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20c358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20c35c:
    // 0x20c35c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20c35cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c360:
    // 0x20c360: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c364:
    // 0x20c364: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x20c364u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20c368:
    // 0x20c368: 0xc07508c  jal         func_1D4230
label_20c36c:
    if (ctx->pc == 0x20C36Cu) {
        ctx->pc = 0x20C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C368u;
        // 0x20c36c: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C370u;
        goto label_20c370;
    }
    ctx->pc = 0x20C368u;
    SET_GPR_U32(ctx, 31, 0x20C370u);
    ctx->pc = 0x20C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C368u;
    // 0x20c36c: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20C368u, 0x20C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C370u;
label_20c370:
    // 0x20c370: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x20c370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20c374:
    // 0x20c374: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c378:
    // 0x20c378: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20c378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20c37c:
    // 0x20c37c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20c380:
    // 0x20c380: 0x60f809  jalr        $v1
label_20c384:
    if (ctx->pc == 0x20C384u) {
        ctx->pc = 0x20C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C380u;
        // 0x20c384: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C388u;
        goto label_20c388;
    }
    ctx->pc = 0x20C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C388u);
        ctx->pc = 0x20C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C380u;
        // 0x20c384: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C380u, 0x20C388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C388u;
label_20c388:
    // 0x20c388: 0xc080ebe  jal         func_203AF8
label_20c38c:
    if (ctx->pc == 0x20C38Cu) {
        ctx->pc = 0x20C390u;
        goto label_20c390;
    }
    ctx->pc = 0x20C388u;
    SET_GPR_U32(ctx, 31, 0x20C390u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20C388u, 0x20C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C390u;
label_20c390:
    // 0x20c390: 0xc080ec2  jal         func_203B08
label_20c394:
    if (ctx->pc == 0x20C394u) {
        ctx->pc = 0x20C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C390u;
        // 0x20c394: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C398u;
        goto label_20c398;
    }
    ctx->pc = 0x20C390u;
    SET_GPR_U32(ctx, 31, 0x20C398u);
    ctx->pc = 0x20C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C390u;
    // 0x20c394: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20C390u, 0x20C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C398u;
label_20c398:
    // 0x20c398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20c39c:
    // 0x20c39c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20c39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c3a0:
    // 0x20c3a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20c3a4:
    // 0x20c3a4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20c3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20c3a8:
    // 0x20c3a8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20c3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20c3ac:
    // 0x20c3ac: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_20c3b0:
    // 0x20c3b0: 0x24a59310  addiu       $a1, $a1, -0x6CF0
    ctx->pc = 0x20c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939408));
label_20c3b4:
    // 0x20c3b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20c3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20c3b8:
    // 0x20c3b8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x20c3b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20c3bc:
    // 0x20c3bc: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x20c3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20c3c0:
    // 0x20c3c0: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x20c3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_20c3c4:
    // 0x20c3c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20c3c8:
    // 0x20c3c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c3cc:
    // 0x20c3cc: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x20c3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_20c3d0:
    // 0x20c3d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20c3d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c3d4:
    // 0x20c3d4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20c3d8:
    // 0x20c3d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20c3d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c3dc:
    // 0x20c3dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20c3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20c3e0:
    // 0x20c3e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20c3e4:
    // 0x20c3e4: 0x40f809  jalr        $v0
label_20c3e8:
    if (ctx->pc == 0x20C3E8u) {
        ctx->pc = 0x20C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3E4u;
        // 0x20c3e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3ECu;
        goto label_20c3ec;
    }
    ctx->pc = 0x20C3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C3ECu);
        ctx->pc = 0x20C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3E4u;
        // 0x20c3e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C3E4u, 0x20C3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C3ECu;
label_20c3ec:
    // 0x20c3ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20c3f0:
    if (ctx->pc == 0x20C3F0u) {
        ctx->pc = 0x20C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3ECu;
        // 0x20c3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3F4u;
        goto label_20c3f4;
    }
    ctx->pc = 0x20C3ECu;
    {
        const bool branch_taken_0x20c3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c3ec) {
            ctx->pc = 0x20C3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C3ECu;
            // 0x20c3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C400u;
            goto label_20c400;
        }
    }
    ctx->pc = 0x20C3F4u;
label_20c3f4:
    // 0x20c3f4: 0xc073a9c  jal         func_1CEA70
label_20c3f8:
    if (ctx->pc == 0x20C3F8u) {
        ctx->pc = 0x20C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3F4u;
        // 0x20c3f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3FCu;
        goto label_20c3fc;
    }
    ctx->pc = 0x20C3F4u;
    SET_GPR_U32(ctx, 31, 0x20C3FCu);
    ctx->pc = 0x20C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3F4u;
    // 0x20c3f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x20C3F4u, 0x20C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3FCu;
label_20c3fc:
    // 0x20c3fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c400:
    // 0x20c400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c404:
    // 0x20c404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c408:
    // 0x20c408: 0xc073ad0  jal         func_1CEB40
label_20c40c:
    if (ctx->pc == 0x20C40Cu) {
        ctx->pc = 0x20C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C408u;
        // 0x20c40c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C410u;
        goto label_20c410;
    }
    ctx->pc = 0x20C408u;
    SET_GPR_U32(ctx, 31, 0x20C410u);
    ctx->pc = 0x20C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C408u;
    // 0x20c40c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20C408u, 0x20C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C410u;
label_20c410:
    // 0x20c410: 0xc067b9c  jal         func_19EE70
label_20c414:
    if (ctx->pc == 0x20C414u) {
        ctx->pc = 0x20C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C410u;
        // 0x20c414: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C418u;
        goto label_20c418;
    }
    ctx->pc = 0x20C410u;
    SET_GPR_U32(ctx, 31, 0x20C418u);
    ctx->pc = 0x20C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C410u;
    // 0x20c414: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20C410u, 0x20C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C418u;
label_20c418:
    // 0x20c418: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20c41c:
    // 0x20c41c: 0xc073b0a  jal         func_1CEC28
label_20c420:
    if (ctx->pc == 0x20C420u) {
        ctx->pc = 0x20C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C41Cu;
        // 0x20c420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C424u;
        goto label_20c424;
    }
    ctx->pc = 0x20C41Cu;
    SET_GPR_U32(ctx, 31, 0x20C424u);
    ctx->pc = 0x20C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C41Cu;
    // 0x20c420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20C41Cu, 0x20C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C424u;
label_20c424:
    // 0x20c424: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x20c424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_20c428:
    // 0x20c428: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x20c428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_20c42c:
    // 0x20c42c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x20c42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20c430:
    // 0x20c430: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x20c430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20c434:
    // 0x20c434: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x20c434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20c438:
    // 0x20c438: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x20c438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20c43c:
    // 0x20c43c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x20c43cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20c440:
    // 0x20c440: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x20c440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20c444:
    // 0x20c444: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20c444u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20c448:
    // 0x20c448: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x20c448u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20c44c:
    // 0x20c44c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x20c44cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20c450:
    // 0x20c450: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20c450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20c454:
    // 0x20c454: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x20c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c458:
    // 0x20c458: 0x3e00008  jr          $ra
label_20c45c:
    if (ctx->pc == 0x20C45Cu) {
        ctx->pc = 0x20C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C458u;
        // 0x20c45c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C460u;
        goto label_fallthrough_0x20c458;
    }
    ctx->pc = 0x20C458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C458u;
        // 0x20c45c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20c458:
    ctx->pc = 0x20C460u;
}
