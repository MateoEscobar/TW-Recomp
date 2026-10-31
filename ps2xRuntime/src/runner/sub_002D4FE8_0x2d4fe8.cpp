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

// Function: sub_002D4FE8
// Address: 0x2d4fe8 - 0x2d5540
void sub_002D4FE8_0x2d4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4FE8_0x2d4fe8");
#endif

    switch (ctx->pc) {
        case 0x2d4fe8u: goto label_2d4fe8;
        case 0x2d4fecu: goto label_2d4fec;
        case 0x2d4ff0u: goto label_2d4ff0;
        case 0x2d4ff4u: goto label_2d4ff4;
        case 0x2d4ff8u: goto label_2d4ff8;
        case 0x2d4ffcu: goto label_2d4ffc;
        case 0x2d5000u: goto label_2d5000;
        case 0x2d5004u: goto label_2d5004;
        case 0x2d5008u: goto label_2d5008;
        case 0x2d500cu: goto label_2d500c;
        case 0x2d5010u: goto label_2d5010;
        case 0x2d5014u: goto label_2d5014;
        case 0x2d5018u: goto label_2d5018;
        case 0x2d501cu: goto label_2d501c;
        case 0x2d5020u: goto label_2d5020;
        case 0x2d5024u: goto label_2d5024;
        case 0x2d5028u: goto label_2d5028;
        case 0x2d502cu: goto label_2d502c;
        case 0x2d5030u: goto label_2d5030;
        case 0x2d5034u: goto label_2d5034;
        case 0x2d5038u: goto label_2d5038;
        case 0x2d503cu: goto label_2d503c;
        case 0x2d5040u: goto label_2d5040;
        case 0x2d5044u: goto label_2d5044;
        case 0x2d5048u: goto label_2d5048;
        case 0x2d504cu: goto label_2d504c;
        case 0x2d5050u: goto label_2d5050;
        case 0x2d5054u: goto label_2d5054;
        case 0x2d5058u: goto label_2d5058;
        case 0x2d505cu: goto label_2d505c;
        case 0x2d5060u: goto label_2d5060;
        case 0x2d5064u: goto label_2d5064;
        case 0x2d5068u: goto label_2d5068;
        case 0x2d506cu: goto label_2d506c;
        case 0x2d5070u: goto label_2d5070;
        case 0x2d5074u: goto label_2d5074;
        case 0x2d5078u: goto label_2d5078;
        case 0x2d507cu: goto label_2d507c;
        case 0x2d5080u: goto label_2d5080;
        case 0x2d5084u: goto label_2d5084;
        case 0x2d5088u: goto label_2d5088;
        case 0x2d508cu: goto label_2d508c;
        case 0x2d5090u: goto label_2d5090;
        case 0x2d5094u: goto label_2d5094;
        case 0x2d5098u: goto label_2d5098;
        case 0x2d509cu: goto label_2d509c;
        case 0x2d50a0u: goto label_2d50a0;
        case 0x2d50a4u: goto label_2d50a4;
        case 0x2d50a8u: goto label_2d50a8;
        case 0x2d50acu: goto label_2d50ac;
        case 0x2d50b0u: goto label_2d50b0;
        case 0x2d50b4u: goto label_2d50b4;
        case 0x2d50b8u: goto label_2d50b8;
        case 0x2d50bcu: goto label_2d50bc;
        case 0x2d50c0u: goto label_2d50c0;
        case 0x2d50c4u: goto label_2d50c4;
        case 0x2d50c8u: goto label_2d50c8;
        case 0x2d50ccu: goto label_2d50cc;
        case 0x2d50d0u: goto label_2d50d0;
        case 0x2d50d4u: goto label_2d50d4;
        case 0x2d50d8u: goto label_2d50d8;
        case 0x2d50dcu: goto label_2d50dc;
        case 0x2d50e0u: goto label_2d50e0;
        case 0x2d50e4u: goto label_2d50e4;
        case 0x2d50e8u: goto label_2d50e8;
        case 0x2d50ecu: goto label_2d50ec;
        case 0x2d50f0u: goto label_2d50f0;
        case 0x2d50f4u: goto label_2d50f4;
        case 0x2d50f8u: goto label_2d50f8;
        case 0x2d50fcu: goto label_2d50fc;
        case 0x2d5100u: goto label_2d5100;
        case 0x2d5104u: goto label_2d5104;
        case 0x2d5108u: goto label_2d5108;
        case 0x2d510cu: goto label_2d510c;
        case 0x2d5110u: goto label_2d5110;
        case 0x2d5114u: goto label_2d5114;
        case 0x2d5118u: goto label_2d5118;
        case 0x2d511cu: goto label_2d511c;
        case 0x2d5120u: goto label_2d5120;
        case 0x2d5124u: goto label_2d5124;
        case 0x2d5128u: goto label_2d5128;
        case 0x2d512cu: goto label_2d512c;
        case 0x2d5130u: goto label_2d5130;
        case 0x2d5134u: goto label_2d5134;
        case 0x2d5138u: goto label_2d5138;
        case 0x2d513cu: goto label_2d513c;
        case 0x2d5140u: goto label_2d5140;
        case 0x2d5144u: goto label_2d5144;
        case 0x2d5148u: goto label_2d5148;
        case 0x2d514cu: goto label_2d514c;
        case 0x2d5150u: goto label_2d5150;
        case 0x2d5154u: goto label_2d5154;
        case 0x2d5158u: goto label_2d5158;
        case 0x2d515cu: goto label_2d515c;
        case 0x2d5160u: goto label_2d5160;
        case 0x2d5164u: goto label_2d5164;
        case 0x2d5168u: goto label_2d5168;
        case 0x2d516cu: goto label_2d516c;
        case 0x2d5170u: goto label_2d5170;
        case 0x2d5174u: goto label_2d5174;
        case 0x2d5178u: goto label_2d5178;
        case 0x2d517cu: goto label_2d517c;
        case 0x2d5180u: goto label_2d5180;
        case 0x2d5184u: goto label_2d5184;
        case 0x2d5188u: goto label_2d5188;
        case 0x2d518cu: goto label_2d518c;
        case 0x2d5190u: goto label_2d5190;
        case 0x2d5194u: goto label_2d5194;
        case 0x2d5198u: goto label_2d5198;
        case 0x2d519cu: goto label_2d519c;
        case 0x2d51a0u: goto label_2d51a0;
        case 0x2d51a4u: goto label_2d51a4;
        case 0x2d51a8u: goto label_2d51a8;
        case 0x2d51acu: goto label_2d51ac;
        case 0x2d51b0u: goto label_2d51b0;
        case 0x2d51b4u: goto label_2d51b4;
        case 0x2d51b8u: goto label_2d51b8;
        case 0x2d51bcu: goto label_2d51bc;
        case 0x2d51c0u: goto label_2d51c0;
        case 0x2d51c4u: goto label_2d51c4;
        case 0x2d51c8u: goto label_2d51c8;
        case 0x2d51ccu: goto label_2d51cc;
        case 0x2d51d0u: goto label_2d51d0;
        case 0x2d51d4u: goto label_2d51d4;
        case 0x2d51d8u: goto label_2d51d8;
        case 0x2d51dcu: goto label_2d51dc;
        case 0x2d51e0u: goto label_2d51e0;
        case 0x2d51e4u: goto label_2d51e4;
        case 0x2d51e8u: goto label_2d51e8;
        case 0x2d51ecu: goto label_2d51ec;
        case 0x2d51f0u: goto label_2d51f0;
        case 0x2d51f4u: goto label_2d51f4;
        case 0x2d51f8u: goto label_2d51f8;
        case 0x2d51fcu: goto label_2d51fc;
        case 0x2d5200u: goto label_2d5200;
        case 0x2d5204u: goto label_2d5204;
        case 0x2d5208u: goto label_2d5208;
        case 0x2d520cu: goto label_2d520c;
        case 0x2d5210u: goto label_2d5210;
        case 0x2d5214u: goto label_2d5214;
        case 0x2d5218u: goto label_2d5218;
        case 0x2d521cu: goto label_2d521c;
        case 0x2d5220u: goto label_2d5220;
        case 0x2d5224u: goto label_2d5224;
        case 0x2d5228u: goto label_2d5228;
        case 0x2d522cu: goto label_2d522c;
        case 0x2d5230u: goto label_2d5230;
        case 0x2d5234u: goto label_2d5234;
        case 0x2d5238u: goto label_2d5238;
        case 0x2d523cu: goto label_2d523c;
        case 0x2d5240u: goto label_2d5240;
        case 0x2d5244u: goto label_2d5244;
        case 0x2d5248u: goto label_2d5248;
        case 0x2d524cu: goto label_2d524c;
        case 0x2d5250u: goto label_2d5250;
        case 0x2d5254u: goto label_2d5254;
        case 0x2d5258u: goto label_2d5258;
        case 0x2d525cu: goto label_2d525c;
        case 0x2d5260u: goto label_2d5260;
        case 0x2d5264u: goto label_2d5264;
        case 0x2d5268u: goto label_2d5268;
        case 0x2d526cu: goto label_2d526c;
        case 0x2d5270u: goto label_2d5270;
        case 0x2d5274u: goto label_2d5274;
        case 0x2d5278u: goto label_2d5278;
        case 0x2d527cu: goto label_2d527c;
        case 0x2d5280u: goto label_2d5280;
        case 0x2d5284u: goto label_2d5284;
        case 0x2d5288u: goto label_2d5288;
        case 0x2d528cu: goto label_2d528c;
        case 0x2d5290u: goto label_2d5290;
        case 0x2d5294u: goto label_2d5294;
        case 0x2d5298u: goto label_2d5298;
        case 0x2d529cu: goto label_2d529c;
        case 0x2d52a0u: goto label_2d52a0;
        case 0x2d52a4u: goto label_2d52a4;
        case 0x2d52a8u: goto label_2d52a8;
        case 0x2d52acu: goto label_2d52ac;
        case 0x2d52b0u: goto label_2d52b0;
        case 0x2d52b4u: goto label_2d52b4;
        case 0x2d52b8u: goto label_2d52b8;
        case 0x2d52bcu: goto label_2d52bc;
        case 0x2d52c0u: goto label_2d52c0;
        case 0x2d52c4u: goto label_2d52c4;
        case 0x2d52c8u: goto label_2d52c8;
        case 0x2d52ccu: goto label_2d52cc;
        case 0x2d52d0u: goto label_2d52d0;
        case 0x2d52d4u: goto label_2d52d4;
        case 0x2d52d8u: goto label_2d52d8;
        case 0x2d52dcu: goto label_2d52dc;
        case 0x2d52e0u: goto label_2d52e0;
        case 0x2d52e4u: goto label_2d52e4;
        case 0x2d52e8u: goto label_2d52e8;
        case 0x2d52ecu: goto label_2d52ec;
        case 0x2d52f0u: goto label_2d52f0;
        case 0x2d52f4u: goto label_2d52f4;
        case 0x2d52f8u: goto label_2d52f8;
        case 0x2d52fcu: goto label_2d52fc;
        case 0x2d5300u: goto label_2d5300;
        case 0x2d5304u: goto label_2d5304;
        case 0x2d5308u: goto label_2d5308;
        case 0x2d530cu: goto label_2d530c;
        case 0x2d5310u: goto label_2d5310;
        case 0x2d5314u: goto label_2d5314;
        case 0x2d5318u: goto label_2d5318;
        case 0x2d531cu: goto label_2d531c;
        case 0x2d5320u: goto label_2d5320;
        case 0x2d5324u: goto label_2d5324;
        case 0x2d5328u: goto label_2d5328;
        case 0x2d532cu: goto label_2d532c;
        case 0x2d5330u: goto label_2d5330;
        case 0x2d5334u: goto label_2d5334;
        case 0x2d5338u: goto label_2d5338;
        case 0x2d533cu: goto label_2d533c;
        case 0x2d5340u: goto label_2d5340;
        case 0x2d5344u: goto label_2d5344;
        case 0x2d5348u: goto label_2d5348;
        case 0x2d534cu: goto label_2d534c;
        case 0x2d5350u: goto label_2d5350;
        case 0x2d5354u: goto label_2d5354;
        case 0x2d5358u: goto label_2d5358;
        case 0x2d535cu: goto label_2d535c;
        case 0x2d5360u: goto label_2d5360;
        case 0x2d5364u: goto label_2d5364;
        case 0x2d5368u: goto label_2d5368;
        case 0x2d536cu: goto label_2d536c;
        case 0x2d5370u: goto label_2d5370;
        case 0x2d5374u: goto label_2d5374;
        case 0x2d5378u: goto label_2d5378;
        case 0x2d537cu: goto label_2d537c;
        case 0x2d5380u: goto label_2d5380;
        case 0x2d5384u: goto label_2d5384;
        case 0x2d5388u: goto label_2d5388;
        case 0x2d538cu: goto label_2d538c;
        case 0x2d5390u: goto label_2d5390;
        case 0x2d5394u: goto label_2d5394;
        case 0x2d5398u: goto label_2d5398;
        case 0x2d539cu: goto label_2d539c;
        case 0x2d53a0u: goto label_2d53a0;
        case 0x2d53a4u: goto label_2d53a4;
        case 0x2d53a8u: goto label_2d53a8;
        case 0x2d53acu: goto label_2d53ac;
        case 0x2d53b0u: goto label_2d53b0;
        case 0x2d53b4u: goto label_2d53b4;
        case 0x2d53b8u: goto label_2d53b8;
        case 0x2d53bcu: goto label_2d53bc;
        case 0x2d53c0u: goto label_2d53c0;
        case 0x2d53c4u: goto label_2d53c4;
        case 0x2d53c8u: goto label_2d53c8;
        case 0x2d53ccu: goto label_2d53cc;
        case 0x2d53d0u: goto label_2d53d0;
        case 0x2d53d4u: goto label_2d53d4;
        case 0x2d53d8u: goto label_2d53d8;
        case 0x2d53dcu: goto label_2d53dc;
        case 0x2d53e0u: goto label_2d53e0;
        case 0x2d53e4u: goto label_2d53e4;
        case 0x2d53e8u: goto label_2d53e8;
        case 0x2d53ecu: goto label_2d53ec;
        case 0x2d53f0u: goto label_2d53f0;
        case 0x2d53f4u: goto label_2d53f4;
        case 0x2d53f8u: goto label_2d53f8;
        case 0x2d53fcu: goto label_2d53fc;
        case 0x2d5400u: goto label_2d5400;
        case 0x2d5404u: goto label_2d5404;
        case 0x2d5408u: goto label_2d5408;
        case 0x2d540cu: goto label_2d540c;
        case 0x2d5410u: goto label_2d5410;
        case 0x2d5414u: goto label_2d5414;
        case 0x2d5418u: goto label_2d5418;
        case 0x2d541cu: goto label_2d541c;
        case 0x2d5420u: goto label_2d5420;
        case 0x2d5424u: goto label_2d5424;
        case 0x2d5428u: goto label_2d5428;
        case 0x2d542cu: goto label_2d542c;
        case 0x2d5430u: goto label_2d5430;
        case 0x2d5434u: goto label_2d5434;
        case 0x2d5438u: goto label_2d5438;
        case 0x2d543cu: goto label_2d543c;
        case 0x2d5440u: goto label_2d5440;
        case 0x2d5444u: goto label_2d5444;
        case 0x2d5448u: goto label_2d5448;
        case 0x2d544cu: goto label_2d544c;
        case 0x2d5450u: goto label_2d5450;
        case 0x2d5454u: goto label_2d5454;
        case 0x2d5458u: goto label_2d5458;
        case 0x2d545cu: goto label_2d545c;
        case 0x2d5460u: goto label_2d5460;
        case 0x2d5464u: goto label_2d5464;
        case 0x2d5468u: goto label_2d5468;
        case 0x2d546cu: goto label_2d546c;
        case 0x2d5470u: goto label_2d5470;
        case 0x2d5474u: goto label_2d5474;
        case 0x2d5478u: goto label_2d5478;
        case 0x2d547cu: goto label_2d547c;
        case 0x2d5480u: goto label_2d5480;
        case 0x2d5484u: goto label_2d5484;
        case 0x2d5488u: goto label_2d5488;
        case 0x2d548cu: goto label_2d548c;
        case 0x2d5490u: goto label_2d5490;
        case 0x2d5494u: goto label_2d5494;
        case 0x2d5498u: goto label_2d5498;
        case 0x2d549cu: goto label_2d549c;
        case 0x2d54a0u: goto label_2d54a0;
        case 0x2d54a4u: goto label_2d54a4;
        case 0x2d54a8u: goto label_2d54a8;
        case 0x2d54acu: goto label_2d54ac;
        case 0x2d54b0u: goto label_2d54b0;
        case 0x2d54b4u: goto label_2d54b4;
        case 0x2d54b8u: goto label_2d54b8;
        case 0x2d54bcu: goto label_2d54bc;
        case 0x2d54c0u: goto label_2d54c0;
        case 0x2d54c4u: goto label_2d54c4;
        case 0x2d54c8u: goto label_2d54c8;
        case 0x2d54ccu: goto label_2d54cc;
        case 0x2d54d0u: goto label_2d54d0;
        case 0x2d54d4u: goto label_2d54d4;
        case 0x2d54d8u: goto label_2d54d8;
        case 0x2d54dcu: goto label_2d54dc;
        case 0x2d54e0u: goto label_2d54e0;
        case 0x2d54e4u: goto label_2d54e4;
        case 0x2d54e8u: goto label_2d54e8;
        case 0x2d54ecu: goto label_2d54ec;
        case 0x2d54f0u: goto label_2d54f0;
        case 0x2d54f4u: goto label_2d54f4;
        case 0x2d54f8u: goto label_2d54f8;
        case 0x2d54fcu: goto label_2d54fc;
        case 0x2d5500u: goto label_2d5500;
        case 0x2d5504u: goto label_2d5504;
        case 0x2d5508u: goto label_2d5508;
        case 0x2d550cu: goto label_2d550c;
        case 0x2d5510u: goto label_2d5510;
        case 0x2d5514u: goto label_2d5514;
        case 0x2d5518u: goto label_2d5518;
        case 0x2d551cu: goto label_2d551c;
        case 0x2d5520u: goto label_2d5520;
        case 0x2d5524u: goto label_2d5524;
        case 0x2d5528u: goto label_2d5528;
        case 0x2d552cu: goto label_2d552c;
        case 0x2d5530u: goto label_2d5530;
        case 0x2d5534u: goto label_2d5534;
        case 0x2d5538u: goto label_2d5538;
        case 0x2d553cu: goto label_2d553c;
        default: break;
    }

    ctx->pc = 0x2d4fe8u;

label_2d4fe8:
    // 0x2d4fe8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d4fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2d4fec:
    // 0x2d4fec: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2d4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2d4ff0:
    // 0x2d4ff0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2d4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2d4ff4:
    // 0x2d4ff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ff8:
    // 0x2d4ff8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2d4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2d4ffc:
    // 0x2d4ffc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2d4ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2d5000:
    // 0x2d5000: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2d5000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2d5004:
    // 0x2d5004: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2d5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2d5008:
    // 0x2d5008: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2d5008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2d500c:
    // 0x2d500c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2d500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2d5010:
    // 0x2d5010: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2d5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2d5014:
    // 0x2d5014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d5014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d5018:
    // 0x2d5018: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2d5018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2d501c:
    // 0x2d501c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2d501cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2d5020:
    // 0x2d5020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d5020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5024:
    // 0x2d5024: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2d5024u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5028:
    // 0x2d5028: 0xc089f98  jal         func_227E60
label_2d502c:
    if (ctx->pc == 0x2D502Cu) {
        ctx->pc = 0x2D502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5028u;
        // 0x2d502c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5030u;
        goto label_2d5030;
    }
    ctx->pc = 0x2D5028u;
    SET_GPR_U32(ctx, 31, 0x2D5030u);
    ctx->pc = 0x2D502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5028u;
    // 0x2d502c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2D5028u, 0x2D5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5030u;
label_2d5030:
    // 0x2d5030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5034:
    // 0x2d5034: 0x10450132  beq         $v0, $a1, . + 4 + (0x132 << 2)
label_2d5038:
    if (ctx->pc == 0x2D5038u) {
        ctx->pc = 0x2D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5034u;
        // 0x2d5038: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D503Cu;
        goto label_2d503c;
    }
    ctx->pc = 0x2D5034u;
    {
        const bool branch_taken_0x2d5034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5034u;
        // 0x2d5038: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5034) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D503Cu;
label_2d503c:
    // 0x2d503c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2d503cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2d5040:
    // 0x2d5040: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2d5040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2d5044:
    // 0x2d5044: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d5044u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5048:
    // 0x2d5048: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2d5048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d504c:
    // 0x2d504c: 0x92240014  lbu         $a0, 0x14($s1)
    ctx->pc = 0x2d504cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_2d5050:
    // 0x2d5050: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2d5054:
    // 0x2d5054: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d5054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d5058:
    // 0x2d5058: 0x1485001f  bne         $a0, $a1, . + 4 + (0x1F << 2)
label_2d505c:
    if (ctx->pc == 0x2D505Cu) {
        ctx->pc = 0x2D505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5058u;
        // 0x2d505c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5060u;
        goto label_2d5060;
    }
    ctx->pc = 0x2D5058u;
    {
        const bool branch_taken_0x2d5058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5058u;
        // 0x2d505c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5058) {
            ctx->pc = 0x2D50D8u;
            goto label_2d50d8;
        }
    }
    ctx->pc = 0x2D5060u;
label_2d5060:
    // 0x2d5060: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2d5060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2d5064:
    // 0x2d5064: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d5064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5068:
    // 0x2d5068: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2d506c:
    if (ctx->pc == 0x2D506Cu) {
        ctx->pc = 0x2D506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5068u;
        // 0x2d506c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5070u;
        goto label_2d5070;
    }
    ctx->pc = 0x2D5068u;
    {
        const bool branch_taken_0x2d5068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5068) {
            ctx->pc = 0x2D506Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5068u;
            // 0x2d506c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5070u;
            goto label_2d5070;
        }
    }
    ctx->pc = 0x2D5070u;
label_2d5070:
    // 0x2d5070: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2d5074:
    // 0x2d5074: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d5074u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2d5078:
    // 0x2d5078: 0x2010  mfhi        $a0
    ctx->pc = 0x2d5078u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d507c:
    // 0x2d507c: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
label_2d5080:
    if (ctx->pc == 0x2D5080u) {
        ctx->pc = 0x2D5084u;
        goto label_2d5084;
    }
    ctx->pc = 0x2D507Cu;
    {
        const bool branch_taken_0x2d507c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d507c) {
            ctx->pc = 0x2D50D8u;
            goto label_2d50d8;
        }
    }
    ctx->pc = 0x2D5084u;
label_2d5084:
    // 0x2d5084: 0x92420333  lbu         $v0, 0x333($s2)
    ctx->pc = 0x2d5084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
label_2d5088:
    // 0x2d5088: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2d508c:
    if (ctx->pc == 0x2D508Cu) {
        ctx->pc = 0x2D5090u;
        goto label_2d5090;
    }
    ctx->pc = 0x2D5088u;
    {
        const bool branch_taken_0x2d5088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5088) {
            ctx->pc = 0x2D50D8u;
            goto label_2d50d8;
        }
    }
    ctx->pc = 0x2D5090u;
label_2d5090:
    // 0x2d5090: 0xc04808c  jal         func_120230
label_2d5094:
    if (ctx->pc == 0x2D5094u) {
        ctx->pc = 0x2D5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5090u;
        // 0x2d5094: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5098u;
        goto label_2d5098;
    }
    ctx->pc = 0x2D5090u;
    SET_GPR_U32(ctx, 31, 0x2D5098u);
    ctx->pc = 0x2D5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5090u;
    // 0x2d5094: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2D5090u, 0x2D5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5098u;
label_2d5098:
    // 0x2d5098: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2d5098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2d509c:
    // 0x2d509c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d509cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d50a0:
    // 0x2d50a0: 0x0  nop
    ctx->pc = 0x2d50a0u;
    // NOP
label_2d50a4:
    // 0x2d50a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d50a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d50a8:
    // 0x2d50a8: 0x0  nop
    ctx->pc = 0x2d50a8u;
    // NOP
label_2d50ac:
    // 0x2d50ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2d50b0:
    if (ctx->pc == 0x2D50B0u) {
        ctx->pc = 0x2D50B4u;
        goto label_2d50b4;
    }
    ctx->pc = 0x2D50ACu;
    {
        const bool branch_taken_0x2d50ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d50ac) {
            ctx->pc = 0x2D50D8u;
            goto label_2d50d8;
        }
    }
    ctx->pc = 0x2D50B4u;
label_2d50b4:
    // 0x2d50b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d50b8:
    // 0x2d50b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d50b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d50bc:
    // 0x2d50bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d50c0:
    // 0x2d50c0: 0x40f809  jalr        $v0
label_2d50c4:
    if (ctx->pc == 0x2D50C4u) {
        ctx->pc = 0x2D50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50C0u;
        // 0x2d50c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D50C8u;
        goto label_2d50c8;
    }
    ctx->pc = 0x2D50C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D50C8u);
        ctx->pc = 0x2D50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50C0u;
        // 0x2d50c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D50C0u, 0x2D50C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D50C8u;
label_2d50c8:
    // 0x2d50c8: 0xc08cfbc  jal         func_233EF0
label_2d50cc:
    if (ctx->pc == 0x2D50CCu) {
        ctx->pc = 0x2D50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50C8u;
        // 0x2d50cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D50D0u;
        goto label_2d50d0;
    }
    ctx->pc = 0x2D50C8u;
    SET_GPR_U32(ctx, 31, 0x2D50D0u);
    ctx->pc = 0x2D50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50C8u;
    // 0x2d50cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x2D50C8u, 0x2D50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50D0u;
label_2d50d0:
    // 0x2d50d0: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2d50d4:
    if (ctx->pc == 0x2D50D4u) {
        ctx->pc = 0x2D50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50D0u;
        // 0x2d50d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D50D8u;
        goto label_2d50d8;
    }
    ctx->pc = 0x2D50D0u;
    {
        const bool branch_taken_0x2d50d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50D0u;
        // 0x2d50d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50d0) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D50D8u;
label_2d50d8:
    // 0x2d50d8: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2d50d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2d50dc:
    // 0x2d50dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2d50dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2d50e0:
    // 0x2d50e0: 0x34a5d1ef  ori         $a1, $a1, 0xD1EF
    ctx->pc = 0x2d50e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53743);
label_2d50e4:
    // 0x2d50e4: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2d50e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2d50e8:
    // 0x2d50e8: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2d50e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2d50ec:
    // 0x2d50ec: 0xc08997c  jal         func_2265F0
label_2d50f0:
    if (ctx->pc == 0x2D50F0u) {
        ctx->pc = 0x2D50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50ECu;
        // 0x2d50f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D50F4u;
        goto label_2d50f4;
    }
    ctx->pc = 0x2D50ECu;
    SET_GPR_U32(ctx, 31, 0x2D50F4u);
    ctx->pc = 0x2D50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50ECu;
    // 0x2d50f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2D50ECu, 0x2D50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50F4u;
label_2d50f4:
    // 0x2d50f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2d50f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d50f8:
    // 0x2d50f8: 0x10500101  beq         $v0, $s0, . + 4 + (0x101 << 2)
label_2d50fc:
    if (ctx->pc == 0x2D50FCu) {
        ctx->pc = 0x2D50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50F8u;
        // 0x2d50fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5100u;
        goto label_2d5100;
    }
    ctx->pc = 0x2D50F8u;
    {
        const bool branch_taken_0x2d50f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50F8u;
        // 0x2d50fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50f8) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D5100u;
label_2d5100:
    // 0x2d5100: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2d5100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2d5104:
    // 0x2d5104: 0xc089998  jal         func_226660
label_2d5108:
    if (ctx->pc == 0x2D5108u) {
        ctx->pc = 0x2D5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5104u;
        // 0x2d5108: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D510Cu;
        goto label_2d510c;
    }
    ctx->pc = 0x2D5104u;
    SET_GPR_U32(ctx, 31, 0x2D510Cu);
    ctx->pc = 0x2D5108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5104u;
    // 0x2d5108: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D5104u, 0x2D510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D510Cu;
label_2d510c:
    // 0x2d510c: 0x105000fc  beq         $v0, $s0, . + 4 + (0xFC << 2)
label_2d5110:
    if (ctx->pc == 0x2D5110u) {
        ctx->pc = 0x2D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D510Cu;
        // 0x2d5110: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5114u;
        goto label_2d5114;
    }
    ctx->pc = 0x2D510Cu;
    {
        const bool branch_taken_0x2d510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D510Cu;
        // 0x2d5110: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d510c) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D5114u;
label_2d5114:
    // 0x2d5114: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d5118:
    // 0x2d5118: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d5118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d511c:
    // 0x2d511c: 0xc0e409a  jal         func_390268
label_2d5120:
    if (ctx->pc == 0x2D5120u) {
        ctx->pc = 0x2D5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D511Cu;
        // 0x2d5120: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5124u;
        goto label_2d5124;
    }
    ctx->pc = 0x2D511Cu;
    SET_GPR_U32(ctx, 31, 0x2D5124u);
    ctx->pc = 0x2D5120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D511Cu;
    // 0x2d5120: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D511Cu, 0x2D5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5124u;
label_2d5124:
    // 0x2d5124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5128:
    // 0x2d5128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d512c:
    // 0x2d512c: 0xc0a352c  jal         func_28D4B0
label_2d5130:
    if (ctx->pc == 0x2D5130u) {
        ctx->pc = 0x2D5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D512Cu;
        // 0x2d5130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5134u;
        goto label_2d5134;
    }
    ctx->pc = 0x2D512Cu;
    SET_GPR_U32(ctx, 31, 0x2D5134u);
    ctx->pc = 0x2D5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D512Cu;
    // 0x2d5130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D512Cu, 0x2D5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5134u;
label_2d5134:
    // 0x2d5134: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2d5134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2d5138:
    // 0x2d5138: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d5138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d513c:
    // 0x2d513c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2d5140:
    if (ctx->pc == 0x2D5140u) {
        ctx->pc = 0x2D5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D513Cu;
        // 0x2d5140: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5144u;
        goto label_2d5144;
    }
    ctx->pc = 0x2D513Cu;
    {
        const bool branch_taken_0x2d513c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d513c) {
            ctx->pc = 0x2D5140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D513Cu;
            // 0x2d5140: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5144u;
            goto label_2d5144;
        }
    }
    ctx->pc = 0x2D5144u;
label_2d5144:
    // 0x2d5144: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d5144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5148:
    // 0x2d5148: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2d514c:
    // 0x2d514c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d514cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2d5150:
    // 0x2d5150: 0x2010  mfhi        $a0
    ctx->pc = 0x2d5150u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d5154:
    // 0x2d5154: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
label_2d5158:
    if (ctx->pc == 0x2D5158u) {
        ctx->pc = 0x2D5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5154u;
        // 0x2d5158: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D515Cu;
        goto label_2d515c;
    }
    ctx->pc = 0x2D5154u;
    {
        const bool branch_taken_0x2d5154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5154) {
            ctx->pc = 0x2D5158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5154u;
            // 0x2d5158: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5180u;
            goto label_2d5180;
        }
    }
    ctx->pc = 0x2D515Cu;
label_2d515c:
    // 0x2d515c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_2d5160:
    if (ctx->pc == 0x2D5160u) {
        ctx->pc = 0x2D5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D515Cu;
        // 0x2d5160: 0x26440284  addiu       $a0, $s2, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5164u;
        goto label_2d5164;
    }
    ctx->pc = 0x2D515Cu;
    {
        const bool branch_taken_0x2d515c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D515Cu;
        // 0x2d5160: 0x26440284  addiu       $a0, $s2, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d515c) {
            ctx->pc = 0x2D517Cu;
            goto label_2d517c;
        }
    }
    ctx->pc = 0x2D5164u;
label_2d5164:
    // 0x2d5164: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d5168:
    // 0x2d5168: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d516c:
    // 0x2d516c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d516cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d5170:
    // 0x2d5170: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2d5174:
    // 0x2d5174: 0xc0a6800  jal         func_29A000
label_2d5178:
    if (ctx->pc == 0x2D5178u) {
        ctx->pc = 0x2D5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5174u;
        // 0x2d5178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D517Cu;
        goto label_2d517c;
    }
    ctx->pc = 0x2D5174u;
    SET_GPR_U32(ctx, 31, 0x2D517Cu);
    ctx->pc = 0x2D5178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5174u;
    // 0x2d5178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D5174u, 0x2D517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D517Cu;
label_2d517c:
    // 0x2d517c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5180:
    // 0x2d5180: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d5180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d5184:
    // 0x2d5184: 0x1c4000de  bgtz        $v0, . + 4 + (0xDE << 2)
label_2d5188:
    if (ctx->pc == 0x2D5188u) {
        ctx->pc = 0x2D5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5184u;
        // 0x2d5188: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D518Cu;
        goto label_2d518c;
    }
    ctx->pc = 0x2D5184u;
    {
        const bool branch_taken_0x2d5184 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5184u;
        // 0x2d5188: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5184) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D518Cu;
label_2d518c:
    // 0x2d518c: 0xc08bfbc  jal         func_22FEF0
label_2d5190:
    if (ctx->pc == 0x2D5190u) {
        ctx->pc = 0x2D5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D518Cu;
        // 0x2d5190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5194u;
        goto label_2d5194;
    }
    ctx->pc = 0x2D518Cu;
    SET_GPR_U32(ctx, 31, 0x2D5194u);
    ctx->pc = 0x2D5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D518Cu;
    // 0x2d5190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D518Cu, 0x2D5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5194u;
label_2d5194:
    // 0x2d5194: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2d5198:
    // 0x2d5198: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d5198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d519c:
    // 0x2d519c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2d51a0:
    if (ctx->pc == 0x2D51A0u) {
        ctx->pc = 0x2D51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D519Cu;
        // 0x2d51a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D51A4u;
        goto label_2d51a4;
    }
    ctx->pc = 0x2D519Cu;
    {
        const bool branch_taken_0x2d519c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d519c) {
            ctx->pc = 0x2D51A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D519Cu;
            // 0x2d51a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D51A4u;
            goto label_2d51a4;
        }
    }
    ctx->pc = 0x2D51A4u;
label_2d51a4:
    // 0x2d51a4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2d51a8:
    // 0x2d51a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d51a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2d51ac:
    // 0x2d51ac: 0x2010  mfhi        $a0
    ctx->pc = 0x2d51acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d51b0:
    // 0x2d51b0: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_2d51b4:
    if (ctx->pc == 0x2D51B4u) {
        ctx->pc = 0x2D51B8u;
        goto label_2d51b8;
    }
    ctx->pc = 0x2D51B0u;
    {
        const bool branch_taken_0x2d51b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d51b0) {
            ctx->pc = 0x2D51E8u;
            goto label_2d51e8;
        }
    }
    ctx->pc = 0x2D51B8u;
label_2d51b8:
    // 0x2d51b8: 0xc0b53d0  jal         func_2D4F40
label_2d51bc:
    if (ctx->pc == 0x2D51BCu) {
        ctx->pc = 0x2D51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51B8u;
        // 0x2d51bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D51C0u;
        goto label_2d51c0;
    }
    ctx->pc = 0x2D51B8u;
    SET_GPR_U32(ctx, 31, 0x2D51C0u);
    ctx->pc = 0x2D51BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D51B8u;
    // 0x2d51bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4F40u, 0x2D51B8u, 0x2D51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51C0u;
label_2d51c0:
    // 0x2d51c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d51c4:
    // 0x2d51c4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2d51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2d51c8:
    // 0x2d51c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d51c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d51cc:
    // 0x2d51cc: 0xc0e409a  jal         func_390268
label_2d51d0:
    if (ctx->pc == 0x2D51D0u) {
        ctx->pc = 0x2D51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51CCu;
        // 0x2d51d0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D51D4u;
        goto label_2d51d4;
    }
    ctx->pc = 0x2D51CCu;
    SET_GPR_U32(ctx, 31, 0x2D51D4u);
    ctx->pc = 0x2D51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D51CCu;
    // 0x2d51d0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D51CCu, 0x2D51D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51D4u;
label_2d51d4:
    // 0x2d51d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d51d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d51d8:
    // 0x2d51d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d51d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d51dc:
    // 0x2d51dc: 0xc0a352c  jal         func_28D4B0
label_2d51e0:
    if (ctx->pc == 0x2D51E0u) {
        ctx->pc = 0x2D51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51DCu;
        // 0x2d51e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D51E4u;
        goto label_2d51e4;
    }
    ctx->pc = 0x2D51DCu;
    SET_GPR_U32(ctx, 31, 0x2D51E4u);
    ctx->pc = 0x2D51E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D51DCu;
    // 0x2d51e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D51DCu, 0x2D51E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51E4u;
label_2d51e4:
    // 0x2d51e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d51e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d51e8:
    // 0x2d51e8: 0x126000c5  beqz        $s3, . + 4 + (0xC5 << 2)
label_2d51ec:
    if (ctx->pc == 0x2D51ECu) {
        ctx->pc = 0x2D51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51E8u;
        // 0x2d51ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D51F0u;
        goto label_2d51f0;
    }
    ctx->pc = 0x2D51E8u;
    {
        const bool branch_taken_0x2d51e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51E8u;
        // 0x2d51ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51e8) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D51F0u;
label_2d51f0:
    // 0x2d51f0: 0x8e7001a8  lw          $s0, 0x1A8($s3)
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2d51f4:
    // 0x2d51f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d51f8:
    // 0x2d51f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d51f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d51fc:
    // 0x2d51fc: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x2d51fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2d5200:
    // 0x2d5200: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x2d5200u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_2d5204:
    // 0x2d5204: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2d5204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2d5208:
    // 0x2d5208: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2d520c:
    if (ctx->pc == 0x2D520Cu) {
        ctx->pc = 0x2D520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5208u;
        // 0x2d520c: 0xc495013c  lwc1        $f21, 0x13C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5210u;
        goto label_2d5210;
    }
    ctx->pc = 0x2D5208u;
    {
        const bool branch_taken_0x2d5208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5208u;
        // 0x2d520c: 0xc495013c  lwc1        $f21, 0x13C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5208) {
            ctx->pc = 0x2D521Cu;
            goto label_2d521c;
        }
    }
    ctx->pc = 0x2D5210u;
label_2d5210:
    // 0x2d5210: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2d5210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d5214:
    // 0x2d5214: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x2d5214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2d5218:
    // 0x2d5218: 0x202300a  movz        $a2, $s0, $v0
    ctx->pc = 0x2d5218u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_2d521c:
    // 0x2d521c: 0x26750090  addiu       $s5, $s3, 0x90
    ctx->pc = 0x2d521cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2d5220:
    // 0x2d5220: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2d5220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2d5224:
    // 0x2d5224: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2d5224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d5228:
    // 0x2d5228: 0x26944b00  addiu       $s4, $s4, 0x4B00
    ctx->pc = 0x2d5228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
label_2d522c:
    // 0x2d522c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d522cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d5230:
    // 0x2d5230: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d5230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d5234:
    // 0x2d5234: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d5234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d5238:
    // 0x2d5238: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d5238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d523c:
    // 0x2d523c: 0xc0cdb38  jal         func_336CE0
label_2d5240:
    if (ctx->pc == 0x2D5240u) {
        ctx->pc = 0x2D5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D523Cu;
        // 0x2d5240: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5244u;
        goto label_2d5244;
    }
    ctx->pc = 0x2D523Cu;
    SET_GPR_U32(ctx, 31, 0x2D5244u);
    ctx->pc = 0x2D5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D523Cu;
    // 0x2d5240: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D523Cu, 0x2D5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5244u;
label_2d5244:
    // 0x2d5244: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2d5244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2d5248:
    // 0x2d5248: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2d5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d524c:
    // 0x2d524c: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2d524cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d5250:
    // 0x2d5250: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2d5250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d5254:
    // 0x2d5254: 0x0  nop
    ctx->pc = 0x2d5254u;
    // NOP
label_2d5258:
    // 0x2d5258: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2d5258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2d525c:
    // 0x2d525c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d525cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d5260:
    // 0x2d5260: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2d5260u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d5264:
    // 0x2d5264: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d5264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d5268:
    // 0x2d5268: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d5268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d526c:
    // 0x2d526c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d5270:
    // 0x2d5270: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d5270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2d5274:
    // 0x2d5274: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2d5274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d5278:
    // 0x2d5278: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x2d5278u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_2d527c:
    // 0x2d527c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d527cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d5280:
    // 0x2d5280: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d5280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d5284:
    // 0x2d5284: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d5284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d5288:
    // 0x2d5288: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d5288u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d528c:
    // 0x2d528c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d528cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d5290:
    // 0x2d5290: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d5290u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2d5294:
    // 0x2d5294: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d5294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d5298:
    // 0x2d5298: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2d5298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d529c:
    // 0x2d529c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d529cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d52a0:
    // 0x2d52a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d52a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d52a4:
    // 0x2d52a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d52a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2d52a8:
    // 0x2d52a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d52a8u;
    // VWAITQ (Q already resolved in this runtime)
label_2d52ac:
    // 0x2d52ac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2d52acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d52b0:
    // 0x2d52b0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2d52b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2d52b4:
    // 0x2d52b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d52b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2d52b8:
    // 0x2d52b8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2d52bc:
    // 0x2d52bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d52c0:
    // 0x2d52c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2d52c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2d52c4:
    // 0x2d52c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2d52c8:
    // 0x2d52c8: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2d52c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d52cc:
    // 0x2d52cc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2d52ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2d52d0:
    // 0x2d52d0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d52d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d52d4:
    // 0x2d52d4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d52d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d52d8:
    // 0x2d52d8: 0xc0cd8ec  jal         func_3363B0
label_2d52dc:
    if (ctx->pc == 0x2D52DCu) {
        ctx->pc = 0x2D52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52D8u;
        // 0x2d52dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D52E0u;
        goto label_2d52e0;
    }
    ctx->pc = 0x2D52D8u;
    SET_GPR_U32(ctx, 31, 0x2D52E0u);
    ctx->pc = 0x2D52DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D52D8u;
    // 0x2d52dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D52D8u, 0x2D52E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52E0u;
label_2d52e0:
    // 0x2d52e0: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2d52e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2d52e4:
    // 0x2d52e4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2d52e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d52e8:
    // 0x2d52e8: 0x0  nop
    ctx->pc = 0x2d52e8u;
    // NOP
label_2d52ec:
    // 0x2d52ec: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_2d52f0:
    if (ctx->pc == 0x2D52F0u) {
        ctx->pc = 0x2D52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52ECu;
        // 0x2d52f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D52F4u;
        goto label_2d52f4;
    }
    ctx->pc = 0x2D52ECu;
    {
        const bool branch_taken_0x2d52ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52ECu;
        // 0x2d52f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52ec) {
            ctx->pc = 0x2D53FCu;
            goto label_2d53fc;
        }
    }
    ctx->pc = 0x2D52F4u;
label_2d52f4:
    // 0x2d52f4: 0xc088bd2  jal         func_222F48
label_2d52f8:
    if (ctx->pc == 0x2D52F8u) {
        ctx->pc = 0x2D52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52F4u;
        // 0x2d52f8: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D52FCu;
        goto label_2d52fc;
    }
    ctx->pc = 0x2D52F4u;
    SET_GPR_U32(ctx, 31, 0x2D52FCu);
    ctx->pc = 0x2D52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D52F4u;
    // 0x2d52f8: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222F48u, 0x2D52F4u, 0x2D52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52FCu;
label_2d52fc:
    // 0x2d52fc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2d52fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2d5300:
    // 0x2d5300: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d5300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d5304:
    // 0x2d5304: 0x0  nop
    ctx->pc = 0x2d5304u;
    // NOP
label_2d5308:
    // 0x2d5308: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d5308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d530c:
    // 0x2d530c: 0x0  nop
    ctx->pc = 0x2d530cu;
    // NOP
label_2d5310:
    // 0x2d5310: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d5314:
    if (ctx->pc == 0x2D5314u) {
        ctx->pc = 0x2D5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5310u;
        // 0x2d5314: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5318u;
        goto label_2d5318;
    }
    ctx->pc = 0x2D5310u;
    {
        const bool branch_taken_0x2d5310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5310) {
            ctx->pc = 0x2D5314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5310u;
            // 0x2d5314: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5318u;
            goto label_2d5318;
        }
    }
    ctx->pc = 0x2D5318u;
label_2d5318:
    // 0x2d5318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d5318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d531c:
    // 0x2d531c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5320:
    // 0x2d5320: 0xc0b53f0  jal         func_2D4FC0
label_2d5324:
    if (ctx->pc == 0x2D5324u) {
        ctx->pc = 0x2D5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5320u;
        // 0x2d5324: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5328u;
        goto label_2d5328;
    }
    ctx->pc = 0x2D5320u;
    SET_GPR_U32(ctx, 31, 0x2D5328u);
    ctx->pc = 0x2D5324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5320u;
    // 0x2d5324: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4FC0u, 0x2D5320u, 0x2D5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5328u;
label_2d5328:
    // 0x2d5328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d532c:
    // 0x2d532c: 0x161e0075  bne         $s0, $fp, . + 4 + (0x75 << 2)
label_2d5330:
    if (ctx->pc == 0x2D5330u) {
        ctx->pc = 0x2D5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D532Cu;
        // 0x2d5330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5334u;
        goto label_2d5334;
    }
    ctx->pc = 0x2D532Cu;
    {
        const bool branch_taken_0x2d532c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        ctx->pc = 0x2D5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D532Cu;
        // 0x2d5330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d532c) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D5334u;
label_2d5334:
    // 0x2d5334: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d5334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5338:
    // 0x2d5338: 0xc088e88  jal         func_223A20
label_2d533c:
    if (ctx->pc == 0x2D533Cu) {
        ctx->pc = 0x2D533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5338u;
        // 0x2d533c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5340u;
        goto label_2d5340;
    }
    ctx->pc = 0x2D5338u;
    SET_GPR_U32(ctx, 31, 0x2D5340u);
    ctx->pc = 0x2D533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5338u;
    // 0x2d533c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D5338u, 0x2D5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5340u;
label_2d5340:
    // 0x2d5340: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_2d5344:
    if (ctx->pc == 0x2D5344u) {
        ctx->pc = 0x2D5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5340u;
        // 0x2d5344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5348u;
        goto label_2d5348;
    }
    ctx->pc = 0x2D5340u;
    {
        const bool branch_taken_0x2d5340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5340u;
        // 0x2d5344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5340) {
            ctx->pc = 0x2D5360u;
            goto label_2d5360;
        }
    }
    ctx->pc = 0x2D5348u;
label_2d5348:
    // 0x2d5348: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2d5348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_2d534c:
    // 0x2d534c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2d534cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2d5350:
    // 0x2d5350: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d5354:
    // 0x2d5354: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d5354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d5358:
    // 0x2d5358: 0xc088708  jal         func_221C20
label_2d535c:
    if (ctx->pc == 0x2D535Cu) {
        ctx->pc = 0x2D535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5358u;
        // 0x2d535c: 0x24130042  addiu       $s3, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5360u;
        goto label_2d5360;
    }
    ctx->pc = 0x2D5358u;
    SET_GPR_U32(ctx, 31, 0x2D5360u);
    ctx->pc = 0x2D535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5358u;
    // 0x2d535c: 0x24130042  addiu       $s3, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2D5358u, 0x2D5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5360u;
label_2d5360:
    // 0x2d5360: 0xc0a367c  jal         func_28D9F0
label_2d5364:
    if (ctx->pc == 0x2D5364u) {
        ctx->pc = 0x2D5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5360u;
        // 0x2d5364: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5368u;
        goto label_2d5368;
    }
    ctx->pc = 0x2D5360u;
    SET_GPR_U32(ctx, 31, 0x2D5368u);
    ctx->pc = 0x2D5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5360u;
    // 0x2d5364: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D5360u, 0x2D5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5368u;
label_2d5368:
    // 0x2d5368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d536c:
    // 0x2d536c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2d5370:
    if (ctx->pc == 0x2D5370u) {
        ctx->pc = 0x2D5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D536Cu;
        // 0x2d5370: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5374u;
        goto label_2d5374;
    }
    ctx->pc = 0x2D536Cu;
    {
        const bool branch_taken_0x2d536c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D536Cu;
        // 0x2d5370: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d536c) {
            ctx->pc = 0x2D53A0u;
            goto label_2d53a0;
        }
    }
    ctx->pc = 0x2D5374u;
label_2d5374:
    // 0x2d5374: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d5374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5378:
    // 0x2d5378: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d5378u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d537c:
    // 0x2d537c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d537cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d5380:
    // 0x2d5380: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d5380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2d5384:
    // 0x2d5384: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2d5384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2d5388:
    // 0x2d5388: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d538c:
    // 0x2d538c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d538cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d5390:
    // 0x2d5390: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2d5390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d5394:
    // 0x2d5394: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5398:
    // 0x2d5398: 0xc0bee7a  jal         func_2FB9E8
label_2d539c:
    if (ctx->pc == 0x2D539Cu) {
        ctx->pc = 0x2D539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5398u;
        // 0x2d539c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53A0u;
        goto label_2d53a0;
    }
    ctx->pc = 0x2D5398u;
    SET_GPR_U32(ctx, 31, 0x2D53A0u);
    ctx->pc = 0x2D539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5398u;
    // 0x2d539c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D5398u, 0x2D53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53A0u;
label_2d53a0:
    // 0x2d53a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d53a4:
    // 0x2d53a4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d53a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2d53a8:
    // 0x2d53a8: 0xc0cd4ee  jal         func_3353B8
label_2d53ac:
    if (ctx->pc == 0x2D53ACu) {
        ctx->pc = 0x2D53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53A8u;
        // 0x2d53ac: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53B0u;
        goto label_2d53b0;
    }
    ctx->pc = 0x2D53A8u;
    SET_GPR_U32(ctx, 31, 0x2D53B0u);
    ctx->pc = 0x2D53ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53A8u;
    // 0x2d53ac: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D53A8u, 0x2D53B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53B0u;
label_2d53b0:
    // 0x2d53b0: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2d53b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2d53b4:
    // 0x2d53b4: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2d53b8:
    if (ctx->pc == 0x2D53B8u) {
        ctx->pc = 0x2D53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53B4u;
        // 0x2d53b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53BCu;
        goto label_2d53bc;
    }
    ctx->pc = 0x2D53B4u;
    {
        const bool branch_taken_0x2d53b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53B4u;
        // 0x2d53b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53b4) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D53BCu;
label_2d53bc:
    // 0x2d53bc: 0xc0a47b4  jal         func_291ED0
label_2d53c0:
    if (ctx->pc == 0x2D53C0u) {
        ctx->pc = 0x2D53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53BCu;
        // 0x2d53c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53C4u;
        goto label_2d53c4;
    }
    ctx->pc = 0x2D53BCu;
    SET_GPR_U32(ctx, 31, 0x2D53C4u);
    ctx->pc = 0x2D53C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53BCu;
    // 0x2d53c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D53BCu, 0x2D53C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53C4u;
label_2d53c4:
    // 0x2d53c4: 0x1450004f  bne         $v0, $s0, . + 4 + (0x4F << 2)
label_2d53c8:
    if (ctx->pc == 0x2D53C8u) {
        ctx->pc = 0x2D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53C4u;
        // 0x2d53c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53CCu;
        goto label_2d53cc;
    }
    ctx->pc = 0x2D53C4u;
    {
        const bool branch_taken_0x2d53c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53C4u;
        // 0x2d53c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53c4) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D53CCu;
label_2d53cc:
    // 0x2d53cc: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x2d53ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d53d0:
    // 0x2d53d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d53d4:
    // 0x2d53d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d53d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d53d8:
    // 0x2d53d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d53d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d53dc:
    // 0x2d53dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2d53e0:
    // 0x2d53e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d53e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d53e4:
    // 0x2d53e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d53e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d53e8:
    // 0x2d53e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d53e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d53ec:
    // 0x2d53ec: 0xc088178  jal         func_2205E0
label_2d53f0:
    if (ctx->pc == 0x2D53F0u) {
        ctx->pc = 0x2D53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53ECu;
        // 0x2d53f0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53F4u;
        goto label_2d53f4;
    }
    ctx->pc = 0x2D53ECu;
    SET_GPR_U32(ctx, 31, 0x2D53F4u);
    ctx->pc = 0x2D53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53ECu;
    // 0x2d53f0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D53ECu, 0x2D53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53F4u;
label_2d53f4:
    // 0x2d53f4: 0x10000043  b           . + 4 + (0x43 << 2)
label_2d53f8:
    if (ctx->pc == 0x2D53F8u) {
        ctx->pc = 0x2D53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53F4u;
        // 0x2d53f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D53FCu;
        goto label_2d53fc;
    }
    ctx->pc = 0x2D53F4u;
    {
        const bool branch_taken_0x2d53f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53F4u;
        // 0x2d53f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53f4) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D53FCu;
label_2d53fc:
    // 0x2d53fc: 0xc088e88  jal         func_223A20
label_2d5400:
    if (ctx->pc == 0x2D5400u) {
        ctx->pc = 0x2D5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53FCu;
        // 0x2d5400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5404u;
        goto label_2d5404;
    }
    ctx->pc = 0x2D53FCu;
    SET_GPR_U32(ctx, 31, 0x2D5404u);
    ctx->pc = 0x2D5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53FCu;
    // 0x2d5400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D53FCu, 0x2D5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5404u;
label_2d5404:
    // 0x2d5404: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2d5408:
    if (ctx->pc == 0x2D5408u) {
        ctx->pc = 0x2D5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5404u;
        // 0x2d5408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D540Cu;
        goto label_2d540c;
    }
    ctx->pc = 0x2D5404u;
    {
        const bool branch_taken_0x2d5404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5404u;
        // 0x2d5408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5404) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D540Cu;
label_2d540c:
    // 0x2d540c: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2d540cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2d5410:
    // 0x2d5410: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d5410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d5414:
    // 0x2d5414: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d5414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d5418:
    // 0x2d5418: 0xc0cd7d2  jal         func_335F48
label_2d541c:
    if (ctx->pc == 0x2D541Cu) {
        ctx->pc = 0x2D541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5418u;
        // 0x2d541c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5420u;
        goto label_2d5420;
    }
    ctx->pc = 0x2D5418u;
    SET_GPR_U32(ctx, 31, 0x2D5420u);
    ctx->pc = 0x2D541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5418u;
    // 0x2d541c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D5418u, 0x2D5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5420u;
label_2d5420:
    // 0x2d5420: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2d5420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2d5424:
    // 0x2d5424: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d5424u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2d5428:
    // 0x2d5428: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2d5428u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d542c:
    // 0x2d542c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d542cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d5430:
    // 0x2d5430: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d5430u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d5434:
    // 0x2d5434: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d5434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d5438:
    // 0x2d5438: 0xc0cd780  jal         func_335E00
label_2d543c:
    if (ctx->pc == 0x2D543Cu) {
        ctx->pc = 0x2D543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5438u;
        // 0x2d543c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5440u;
        goto label_2d5440;
    }
    ctx->pc = 0x2D5438u;
    SET_GPR_U32(ctx, 31, 0x2D5440u);
    ctx->pc = 0x2D543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5438u;
    // 0x2d543c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2D5438u, 0x2D5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5440u;
label_2d5440:
    // 0x2d5440: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d5440u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d5444:
    // 0x2d5444: 0xc0cd742  jal         func_335D08
label_2d5448:
    if (ctx->pc == 0x2D5448u) {
        ctx->pc = 0x2D5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5444u;
        // 0x2d5448: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D544Cu;
        goto label_2d544c;
    }
    ctx->pc = 0x2D5444u;
    SET_GPR_U32(ctx, 31, 0x2D544Cu);
    ctx->pc = 0x2D5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5444u;
    // 0x2d5448: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D5444u, 0x2D544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D544Cu;
label_2d544c:
    // 0x2d544c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d544cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2d5450:
    // 0x2d5450: 0xc0cdd2e  jal         func_3374B8
label_2d5454:
    if (ctx->pc == 0x2D5454u) {
        ctx->pc = 0x2D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5450u;
        // 0x2d5454: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5458u;
        goto label_2d5458;
    }
    ctx->pc = 0x2D5450u;
    SET_GPR_U32(ctx, 31, 0x2D5458u);
    ctx->pc = 0x2D5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5450u;
    // 0x2d5454: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D5450u, 0x2D5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5458u;
label_2d5458:
    // 0x2d5458: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2d5458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_2d545c:
    // 0x2d545c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d545cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d5460:
    // 0x2d5460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d5460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d5464:
    // 0x2d5464: 0x0  nop
    ctx->pc = 0x2d5464u;
    // NOP
label_2d5468:
    // 0x2d5468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d5468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d546c:
    // 0x2d546c: 0x0  nop
    ctx->pc = 0x2d546cu;
    // NOP
label_2d5470:
    // 0x2d5470: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2d5474:
    if (ctx->pc == 0x2D5474u) {
        ctx->pc = 0x2D5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5470u;
        // 0x2d5474: 0x8e4300d4  lw          $v1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5478u;
        goto label_2d5478;
    }
    ctx->pc = 0x2D5470u;
    {
        const bool branch_taken_0x2d5470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5470) {
            ctx->pc = 0x2D5474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5470u;
            // 0x2d5474: 0x8e4300d4  lw          $v1, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54B4u;
            goto label_2d54b4;
        }
    }
    ctx->pc = 0x2D5478u;
label_2d5478:
    // 0x2d5478: 0xc0a367c  jal         func_28D9F0
label_2d547c:
    if (ctx->pc == 0x2D547Cu) {
        ctx->pc = 0x2D547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5478u;
        // 0x2d547c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5480u;
        goto label_2d5480;
    }
    ctx->pc = 0x2D5478u;
    SET_GPR_U32(ctx, 31, 0x2D5480u);
    ctx->pc = 0x2D547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5478u;
    // 0x2d547c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D5478u, 0x2D5480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5480u;
label_2d5480:
    // 0x2d5480: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2d5484:
    if (ctx->pc == 0x2D5484u) {
        ctx->pc = 0x2D5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5480u;
        // 0x2d5484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5488u;
        goto label_2d5488;
    }
    ctx->pc = 0x2D5480u;
    {
        const bool branch_taken_0x2d5480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5480u;
        // 0x2d5484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5480) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D5488u;
label_2d5488:
    // 0x2d5488: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x2d5488u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2d548c:
    // 0x2d548c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5490:
    // 0x2d5490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5494:
    // 0x2d5494: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2d5494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2d5498:
    // 0x2d5498: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d5498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d549c:
    // 0x2d549c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d549cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d54a0:
    // 0x2d54a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d54a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d54a4:
    // 0x2d54a4: 0xc0bf800  jal         func_2FE000
label_2d54a8:
    if (ctx->pc == 0x2D54A8u) {
        ctx->pc = 0x2D54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54A4u;
        // 0x2d54a8: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54ACu;
        goto label_2d54ac;
    }
    ctx->pc = 0x2D54A4u;
    SET_GPR_U32(ctx, 31, 0x2D54ACu);
    ctx->pc = 0x2D54A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54A4u;
    // 0x2d54a8: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D54A4u, 0x2D54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54ACu;
label_2d54ac:
    // 0x2d54ac: 0x10000015  b           . + 4 + (0x15 << 2)
label_2d54b0:
    if (ctx->pc == 0x2D54B0u) {
        ctx->pc = 0x2D54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54ACu;
        // 0x2d54b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54B4u;
        goto label_2d54b4;
    }
    ctx->pc = 0x2D54ACu;
    {
        const bool branch_taken_0x2d54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54ACu;
        // 0x2d54b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54ac) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D54B4u;
label_2d54b4:
    // 0x2d54b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d54b8:
    // 0x2d54b8: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x2d54b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
label_2d54bc:
    // 0x2d54bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2d54c0:
    if (ctx->pc == 0x2D54C0u) {
        ctx->pc = 0x2D54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54BCu;
        // 0x2d54c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54C4u;
        goto label_2d54c4;
    }
    ctx->pc = 0x2D54BCu;
    {
        const bool branch_taken_0x2d54bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54BCu;
        // 0x2d54c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54bc) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D54C4u;
label_2d54c4:
    // 0x2d54c4: 0xc0b53c0  jal         func_2D4F00
label_2d54c8:
    if (ctx->pc == 0x2D54C8u) {
        ctx->pc = 0x2D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54C4u;
        // 0x2d54c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54CCu;
        goto label_2d54cc;
    }
    ctx->pc = 0x2D54C4u;
    SET_GPR_U32(ctx, 31, 0x2D54CCu);
    ctx->pc = 0x2D54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54C4u;
    // 0x2d54c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4F00u, 0x2D54C4u, 0x2D54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54CCu;
label_2d54cc:
    // 0x2d54cc: 0x145e000d  bne         $v0, $fp, . + 4 + (0xD << 2)
label_2d54d0:
    if (ctx->pc == 0x2D54D0u) {
        ctx->pc = 0x2D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54CCu;
        // 0x2d54d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54D4u;
        goto label_2d54d4;
    }
    ctx->pc = 0x2D54CCu;
    {
        const bool branch_taken_0x2d54cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54CCu;
        // 0x2d54d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54cc) {
            ctx->pc = 0x2D5504u;
            goto label_2d5504;
        }
    }
    ctx->pc = 0x2D54D4u;
label_2d54d4:
    // 0x2d54d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d54d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d54d8:
    // 0x2d54d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d54d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d54dc:
    // 0x2d54dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d54dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d54e0:
    // 0x2d54e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d54e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d54e4:
    // 0x2d54e4: 0x2405029f  addiu       $a1, $zero, 0x29F
    ctx->pc = 0x2d54e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2d54e8:
    // 0x2d54e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d54e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d54ec:
    // 0x2d54ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d54ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d54f0:
    // 0x2d54f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d54f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d54f4:
    // 0x2d54f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d54f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d54f8:
    // 0x2d54f8: 0xc0968f8  jal         func_25A3E0
label_2d54fc:
    if (ctx->pc == 0x2D54FCu) {
        ctx->pc = 0x2D54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54F8u;
        // 0x2d54fc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5500u;
        goto label_2d5500;
    }
    ctx->pc = 0x2D54F8u;
    SET_GPR_U32(ctx, 31, 0x2D5500u);
    ctx->pc = 0x2D54FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54F8u;
    // 0x2d54fc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2D54F8u, 0x2D5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5500u;
label_2d5500:
    // 0x2d5500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5504:
    // 0x2d5504: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2d5504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2d5508:
    // 0x2d5508: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2d5508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2d550c:
    // 0x2d550c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2d550cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d5510:
    // 0x2d5510: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2d5510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d5514:
    // 0x2d5514: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2d5514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d5518:
    // 0x2d5518: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2d5518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d551c:
    // 0x2d551c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2d551cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d5520:
    // 0x2d5520: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2d5520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d5524:
    // 0x2d5524: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2d5524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d5528:
    // 0x2d5528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d5528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d552c:
    // 0x2d552c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2d552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d5530:
    // 0x2d5530: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2d5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d5534:
    // 0x2d5534: 0x3e00008  jr          $ra
label_2d5538:
    if (ctx->pc == 0x2D5538u) {
        ctx->pc = 0x2D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5534u;
        // 0x2d5538: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D553Cu;
        goto label_2d553c;
    }
    ctx->pc = 0x2D5534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5534u;
        // 0x2d5538: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D553Cu;
label_2d553c:
    // 0x2d553c: 0x0  nop
    ctx->pc = 0x2d553cu;
    // NOP
    ctx->pc = 0x2d5540u;
}
