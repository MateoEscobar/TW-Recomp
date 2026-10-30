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

// Function: sub_004A81F0
// Address: 0x4a81f0 - 0x4a8700
void sub_004A81F0_0x4a81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A81F0_0x4a81f0");
#endif

    switch (ctx->pc) {
        case 0x4a81f0u: goto label_4a81f0;
        case 0x4a81f4u: goto label_4a81f4;
        case 0x4a81f8u: goto label_4a81f8;
        case 0x4a81fcu: goto label_4a81fc;
        case 0x4a8200u: goto label_4a8200;
        case 0x4a8204u: goto label_4a8204;
        case 0x4a8208u: goto label_4a8208;
        case 0x4a820cu: goto label_4a820c;
        case 0x4a8210u: goto label_4a8210;
        case 0x4a8214u: goto label_4a8214;
        case 0x4a8218u: goto label_4a8218;
        case 0x4a821cu: goto label_4a821c;
        case 0x4a8220u: goto label_4a8220;
        case 0x4a8224u: goto label_4a8224;
        case 0x4a8228u: goto label_4a8228;
        case 0x4a822cu: goto label_4a822c;
        case 0x4a8230u: goto label_4a8230;
        case 0x4a8234u: goto label_4a8234;
        case 0x4a8238u: goto label_4a8238;
        case 0x4a823cu: goto label_4a823c;
        case 0x4a8240u: goto label_4a8240;
        case 0x4a8244u: goto label_4a8244;
        case 0x4a8248u: goto label_4a8248;
        case 0x4a824cu: goto label_4a824c;
        case 0x4a8250u: goto label_4a8250;
        case 0x4a8254u: goto label_4a8254;
        case 0x4a8258u: goto label_4a8258;
        case 0x4a825cu: goto label_4a825c;
        case 0x4a8260u: goto label_4a8260;
        case 0x4a8264u: goto label_4a8264;
        case 0x4a8268u: goto label_4a8268;
        case 0x4a826cu: goto label_4a826c;
        case 0x4a8270u: goto label_4a8270;
        case 0x4a8274u: goto label_4a8274;
        case 0x4a8278u: goto label_4a8278;
        case 0x4a827cu: goto label_4a827c;
        case 0x4a8280u: goto label_4a8280;
        case 0x4a8284u: goto label_4a8284;
        case 0x4a8288u: goto label_4a8288;
        case 0x4a828cu: goto label_4a828c;
        case 0x4a8290u: goto label_4a8290;
        case 0x4a8294u: goto label_4a8294;
        case 0x4a8298u: goto label_4a8298;
        case 0x4a829cu: goto label_4a829c;
        case 0x4a82a0u: goto label_4a82a0;
        case 0x4a82a4u: goto label_4a82a4;
        case 0x4a82a8u: goto label_4a82a8;
        case 0x4a82acu: goto label_4a82ac;
        case 0x4a82b0u: goto label_4a82b0;
        case 0x4a82b4u: goto label_4a82b4;
        case 0x4a82b8u: goto label_4a82b8;
        case 0x4a82bcu: goto label_4a82bc;
        case 0x4a82c0u: goto label_4a82c0;
        case 0x4a82c4u: goto label_4a82c4;
        case 0x4a82c8u: goto label_4a82c8;
        case 0x4a82ccu: goto label_4a82cc;
        case 0x4a82d0u: goto label_4a82d0;
        case 0x4a82d4u: goto label_4a82d4;
        case 0x4a82d8u: goto label_4a82d8;
        case 0x4a82dcu: goto label_4a82dc;
        case 0x4a82e0u: goto label_4a82e0;
        case 0x4a82e4u: goto label_4a82e4;
        case 0x4a82e8u: goto label_4a82e8;
        case 0x4a82ecu: goto label_4a82ec;
        case 0x4a82f0u: goto label_4a82f0;
        case 0x4a82f4u: goto label_4a82f4;
        case 0x4a82f8u: goto label_4a82f8;
        case 0x4a82fcu: goto label_4a82fc;
        case 0x4a8300u: goto label_4a8300;
        case 0x4a8304u: goto label_4a8304;
        case 0x4a8308u: goto label_4a8308;
        case 0x4a830cu: goto label_4a830c;
        case 0x4a8310u: goto label_4a8310;
        case 0x4a8314u: goto label_4a8314;
        case 0x4a8318u: goto label_4a8318;
        case 0x4a831cu: goto label_4a831c;
        case 0x4a8320u: goto label_4a8320;
        case 0x4a8324u: goto label_4a8324;
        case 0x4a8328u: goto label_4a8328;
        case 0x4a832cu: goto label_4a832c;
        case 0x4a8330u: goto label_4a8330;
        case 0x4a8334u: goto label_4a8334;
        case 0x4a8338u: goto label_4a8338;
        case 0x4a833cu: goto label_4a833c;
        case 0x4a8340u: goto label_4a8340;
        case 0x4a8344u: goto label_4a8344;
        case 0x4a8348u: goto label_4a8348;
        case 0x4a834cu: goto label_4a834c;
        case 0x4a8350u: goto label_4a8350;
        case 0x4a8354u: goto label_4a8354;
        case 0x4a8358u: goto label_4a8358;
        case 0x4a835cu: goto label_4a835c;
        case 0x4a8360u: goto label_4a8360;
        case 0x4a8364u: goto label_4a8364;
        case 0x4a8368u: goto label_4a8368;
        case 0x4a836cu: goto label_4a836c;
        case 0x4a8370u: goto label_4a8370;
        case 0x4a8374u: goto label_4a8374;
        case 0x4a8378u: goto label_4a8378;
        case 0x4a837cu: goto label_4a837c;
        case 0x4a8380u: goto label_4a8380;
        case 0x4a8384u: goto label_4a8384;
        case 0x4a8388u: goto label_4a8388;
        case 0x4a838cu: goto label_4a838c;
        case 0x4a8390u: goto label_4a8390;
        case 0x4a8394u: goto label_4a8394;
        case 0x4a8398u: goto label_4a8398;
        case 0x4a839cu: goto label_4a839c;
        case 0x4a83a0u: goto label_4a83a0;
        case 0x4a83a4u: goto label_4a83a4;
        case 0x4a83a8u: goto label_4a83a8;
        case 0x4a83acu: goto label_4a83ac;
        case 0x4a83b0u: goto label_4a83b0;
        case 0x4a83b4u: goto label_4a83b4;
        case 0x4a83b8u: goto label_4a83b8;
        case 0x4a83bcu: goto label_4a83bc;
        case 0x4a83c0u: goto label_4a83c0;
        case 0x4a83c4u: goto label_4a83c4;
        case 0x4a83c8u: goto label_4a83c8;
        case 0x4a83ccu: goto label_4a83cc;
        case 0x4a83d0u: goto label_4a83d0;
        case 0x4a83d4u: goto label_4a83d4;
        case 0x4a83d8u: goto label_4a83d8;
        case 0x4a83dcu: goto label_4a83dc;
        case 0x4a83e0u: goto label_4a83e0;
        case 0x4a83e4u: goto label_4a83e4;
        case 0x4a83e8u: goto label_4a83e8;
        case 0x4a83ecu: goto label_4a83ec;
        case 0x4a83f0u: goto label_4a83f0;
        case 0x4a83f4u: goto label_4a83f4;
        case 0x4a83f8u: goto label_4a83f8;
        case 0x4a83fcu: goto label_4a83fc;
        case 0x4a8400u: goto label_4a8400;
        case 0x4a8404u: goto label_4a8404;
        case 0x4a8408u: goto label_4a8408;
        case 0x4a840cu: goto label_4a840c;
        case 0x4a8410u: goto label_4a8410;
        case 0x4a8414u: goto label_4a8414;
        case 0x4a8418u: goto label_4a8418;
        case 0x4a841cu: goto label_4a841c;
        case 0x4a8420u: goto label_4a8420;
        case 0x4a8424u: goto label_4a8424;
        case 0x4a8428u: goto label_4a8428;
        case 0x4a842cu: goto label_4a842c;
        case 0x4a8430u: goto label_4a8430;
        case 0x4a8434u: goto label_4a8434;
        case 0x4a8438u: goto label_4a8438;
        case 0x4a843cu: goto label_4a843c;
        case 0x4a8440u: goto label_4a8440;
        case 0x4a8444u: goto label_4a8444;
        case 0x4a8448u: goto label_4a8448;
        case 0x4a844cu: goto label_4a844c;
        case 0x4a8450u: goto label_4a8450;
        case 0x4a8454u: goto label_4a8454;
        case 0x4a8458u: goto label_4a8458;
        case 0x4a845cu: goto label_4a845c;
        case 0x4a8460u: goto label_4a8460;
        case 0x4a8464u: goto label_4a8464;
        case 0x4a8468u: goto label_4a8468;
        case 0x4a846cu: goto label_4a846c;
        case 0x4a8470u: goto label_4a8470;
        case 0x4a8474u: goto label_4a8474;
        case 0x4a8478u: goto label_4a8478;
        case 0x4a847cu: goto label_4a847c;
        case 0x4a8480u: goto label_4a8480;
        case 0x4a8484u: goto label_4a8484;
        case 0x4a8488u: goto label_4a8488;
        case 0x4a848cu: goto label_4a848c;
        case 0x4a8490u: goto label_4a8490;
        case 0x4a8494u: goto label_4a8494;
        case 0x4a8498u: goto label_4a8498;
        case 0x4a849cu: goto label_4a849c;
        case 0x4a84a0u: goto label_4a84a0;
        case 0x4a84a4u: goto label_4a84a4;
        case 0x4a84a8u: goto label_4a84a8;
        case 0x4a84acu: goto label_4a84ac;
        case 0x4a84b0u: goto label_4a84b0;
        case 0x4a84b4u: goto label_4a84b4;
        case 0x4a84b8u: goto label_4a84b8;
        case 0x4a84bcu: goto label_4a84bc;
        case 0x4a84c0u: goto label_4a84c0;
        case 0x4a84c4u: goto label_4a84c4;
        case 0x4a84c8u: goto label_4a84c8;
        case 0x4a84ccu: goto label_4a84cc;
        case 0x4a84d0u: goto label_4a84d0;
        case 0x4a84d4u: goto label_4a84d4;
        case 0x4a84d8u: goto label_4a84d8;
        case 0x4a84dcu: goto label_4a84dc;
        case 0x4a84e0u: goto label_4a84e0;
        case 0x4a84e4u: goto label_4a84e4;
        case 0x4a84e8u: goto label_4a84e8;
        case 0x4a84ecu: goto label_4a84ec;
        case 0x4a84f0u: goto label_4a84f0;
        case 0x4a84f4u: goto label_4a84f4;
        case 0x4a84f8u: goto label_4a84f8;
        case 0x4a84fcu: goto label_4a84fc;
        case 0x4a8500u: goto label_4a8500;
        case 0x4a8504u: goto label_4a8504;
        case 0x4a8508u: goto label_4a8508;
        case 0x4a850cu: goto label_4a850c;
        case 0x4a8510u: goto label_4a8510;
        case 0x4a8514u: goto label_4a8514;
        case 0x4a8518u: goto label_4a8518;
        case 0x4a851cu: goto label_4a851c;
        case 0x4a8520u: goto label_4a8520;
        case 0x4a8524u: goto label_4a8524;
        case 0x4a8528u: goto label_4a8528;
        case 0x4a852cu: goto label_4a852c;
        case 0x4a8530u: goto label_4a8530;
        case 0x4a8534u: goto label_4a8534;
        case 0x4a8538u: goto label_4a8538;
        case 0x4a853cu: goto label_4a853c;
        case 0x4a8540u: goto label_4a8540;
        case 0x4a8544u: goto label_4a8544;
        case 0x4a8548u: goto label_4a8548;
        case 0x4a854cu: goto label_4a854c;
        case 0x4a8550u: goto label_4a8550;
        case 0x4a8554u: goto label_4a8554;
        case 0x4a8558u: goto label_4a8558;
        case 0x4a855cu: goto label_4a855c;
        case 0x4a8560u: goto label_4a8560;
        case 0x4a8564u: goto label_4a8564;
        case 0x4a8568u: goto label_4a8568;
        case 0x4a856cu: goto label_4a856c;
        case 0x4a8570u: goto label_4a8570;
        case 0x4a8574u: goto label_4a8574;
        case 0x4a8578u: goto label_4a8578;
        case 0x4a857cu: goto label_4a857c;
        case 0x4a8580u: goto label_4a8580;
        case 0x4a8584u: goto label_4a8584;
        case 0x4a8588u: goto label_4a8588;
        case 0x4a858cu: goto label_4a858c;
        case 0x4a8590u: goto label_4a8590;
        case 0x4a8594u: goto label_4a8594;
        case 0x4a8598u: goto label_4a8598;
        case 0x4a859cu: goto label_4a859c;
        case 0x4a85a0u: goto label_4a85a0;
        case 0x4a85a4u: goto label_4a85a4;
        case 0x4a85a8u: goto label_4a85a8;
        case 0x4a85acu: goto label_4a85ac;
        case 0x4a85b0u: goto label_4a85b0;
        case 0x4a85b4u: goto label_4a85b4;
        case 0x4a85b8u: goto label_4a85b8;
        case 0x4a85bcu: goto label_4a85bc;
        case 0x4a85c0u: goto label_4a85c0;
        case 0x4a85c4u: goto label_4a85c4;
        case 0x4a85c8u: goto label_4a85c8;
        case 0x4a85ccu: goto label_4a85cc;
        case 0x4a85d0u: goto label_4a85d0;
        case 0x4a85d4u: goto label_4a85d4;
        case 0x4a85d8u: goto label_4a85d8;
        case 0x4a85dcu: goto label_4a85dc;
        case 0x4a85e0u: goto label_4a85e0;
        case 0x4a85e4u: goto label_4a85e4;
        case 0x4a85e8u: goto label_4a85e8;
        case 0x4a85ecu: goto label_4a85ec;
        case 0x4a85f0u: goto label_4a85f0;
        case 0x4a85f4u: goto label_4a85f4;
        case 0x4a85f8u: goto label_4a85f8;
        case 0x4a85fcu: goto label_4a85fc;
        case 0x4a8600u: goto label_4a8600;
        case 0x4a8604u: goto label_4a8604;
        case 0x4a8608u: goto label_4a8608;
        case 0x4a860cu: goto label_4a860c;
        case 0x4a8610u: goto label_4a8610;
        case 0x4a8614u: goto label_4a8614;
        case 0x4a8618u: goto label_4a8618;
        case 0x4a861cu: goto label_4a861c;
        case 0x4a8620u: goto label_4a8620;
        case 0x4a8624u: goto label_4a8624;
        case 0x4a8628u: goto label_4a8628;
        case 0x4a862cu: goto label_4a862c;
        case 0x4a8630u: goto label_4a8630;
        case 0x4a8634u: goto label_4a8634;
        case 0x4a8638u: goto label_4a8638;
        case 0x4a863cu: goto label_4a863c;
        case 0x4a8640u: goto label_4a8640;
        case 0x4a8644u: goto label_4a8644;
        case 0x4a8648u: goto label_4a8648;
        case 0x4a864cu: goto label_4a864c;
        case 0x4a8650u: goto label_4a8650;
        case 0x4a8654u: goto label_4a8654;
        case 0x4a8658u: goto label_4a8658;
        case 0x4a865cu: goto label_4a865c;
        case 0x4a8660u: goto label_4a8660;
        case 0x4a8664u: goto label_4a8664;
        case 0x4a8668u: goto label_4a8668;
        case 0x4a866cu: goto label_4a866c;
        case 0x4a8670u: goto label_4a8670;
        case 0x4a8674u: goto label_4a8674;
        case 0x4a8678u: goto label_4a8678;
        case 0x4a867cu: goto label_4a867c;
        case 0x4a8680u: goto label_4a8680;
        case 0x4a8684u: goto label_4a8684;
        case 0x4a8688u: goto label_4a8688;
        case 0x4a868cu: goto label_4a868c;
        case 0x4a8690u: goto label_4a8690;
        case 0x4a8694u: goto label_4a8694;
        case 0x4a8698u: goto label_4a8698;
        case 0x4a869cu: goto label_4a869c;
        case 0x4a86a0u: goto label_4a86a0;
        case 0x4a86a4u: goto label_4a86a4;
        case 0x4a86a8u: goto label_4a86a8;
        case 0x4a86acu: goto label_4a86ac;
        case 0x4a86b0u: goto label_4a86b0;
        case 0x4a86b4u: goto label_4a86b4;
        case 0x4a86b8u: goto label_4a86b8;
        case 0x4a86bcu: goto label_4a86bc;
        case 0x4a86c0u: goto label_4a86c0;
        case 0x4a86c4u: goto label_4a86c4;
        case 0x4a86c8u: goto label_4a86c8;
        case 0x4a86ccu: goto label_4a86cc;
        case 0x4a86d0u: goto label_4a86d0;
        case 0x4a86d4u: goto label_4a86d4;
        case 0x4a86d8u: goto label_4a86d8;
        case 0x4a86dcu: goto label_4a86dc;
        case 0x4a86e0u: goto label_4a86e0;
        case 0x4a86e4u: goto label_4a86e4;
        case 0x4a86e8u: goto label_4a86e8;
        case 0x4a86ecu: goto label_4a86ec;
        case 0x4a86f0u: goto label_4a86f0;
        case 0x4a86f4u: goto label_4a86f4;
        case 0x4a86f8u: goto label_4a86f8;
        case 0x4a86fcu: goto label_4a86fc;
        default: break;
    }

    ctx->pc = 0x4a81f0u;

label_4a81f0:
    // 0x4a81f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4a81f4:
    // 0x4a81f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a81f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a81f8:
    // 0x4a81f8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4a81fc:
    // 0x4a81fc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4a8200:
    // 0x4a8200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a8200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8204:
    // 0x4a8204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a8208:
    // 0x4a8208: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a8208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a820c:
    // 0x4a820c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4a8210:
    // 0x4a8210: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4a8214:
    // 0x4a8214: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4a8218:
    // 0x4a8218: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4a821c:
    // 0x4a821c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4a8220:
    // 0x4a8220: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_4a8224:
    // 0x4a8224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a8228:
    // 0x4a8228: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a8228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a822c:
    // 0x4a822c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4a822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4a8230:
    // 0x4a8230: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4a8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a8234:
    // 0x4a8234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a8238:
    // 0x4a8238: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4a823c:
    if (ctx->pc == 0x4A823Cu) {
        ctx->pc = 0x4A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8238u;
        // 0x4a823c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8240u;
        goto label_4a8240;
    }
    ctx->pc = 0x4A8238u;
    {
        const bool branch_taken_0x4a8238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8238u;
        // 0x4a823c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8238) {
            ctx->pc = 0x4A8274u;
            goto label_4a8274;
        }
    }
    ctx->pc = 0x4A8240u;
label_4a8240:
    // 0x4a8240: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4a8244:
    // 0x4a8244: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4a8244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a8248:
    // 0x4a8248: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a8248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a824c:
    // 0x4a824c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x4a824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4a8250:
    // 0x4a8250: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a8250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8254:
    // 0x4a8254: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x4a8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4a8258:
    // 0x4a8258: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a8258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a825c:
    // 0x4a825c: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x4a825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_4a8260:
    // 0x4a8260: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a8264:
    // 0x4a8264: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x4a8264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4a8268:
    // 0x4a8268: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x4a8268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a826c:
    // 0x4a826c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_4a8270:
    if (ctx->pc == 0x4A8270u) {
        ctx->pc = 0x4A8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A826Cu;
        // 0x4a8270: 0x82a80a  movz        $s5, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8274u;
        goto label_4a8274;
    }
    ctx->pc = 0x4A826Cu;
    {
        const bool branch_taken_0x4a826c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A826Cu;
        // 0x4a8270: 0x82a80a  movz        $s5, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a826c) {
            ctx->pc = 0x4A8250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8250;
        }
    }
    ctx->pc = 0x4A8274u;
label_4a8274:
    // 0x4a8274: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x4a8274u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a8278:
    // 0x4a8278: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a8278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a827c:
    // 0x4a827c: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_4a8280:
    if (ctx->pc == 0x4A8280u) {
        ctx->pc = 0x4A8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A827Cu;
        // 0x4a8280: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8284u;
        goto label_4a8284;
    }
    ctx->pc = 0x4A827Cu;
    {
        const bool branch_taken_0x4a827c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A827Cu;
        // 0x4a8280: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a827c) {
            ctx->pc = 0x4A82E4u;
            goto label_4a82e4;
        }
    }
    ctx->pc = 0x4A8284u;
label_4a8284:
    // 0x4a8284: 0x0  nop
    ctx->pc = 0x4a8284u;
    // NOP
label_4a8288:
    // 0x4a8288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a8288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a828c:
    // 0x4a828c: 0x26c90001  addiu       $t1, $s6, 0x1
    ctx->pc = 0x4a828cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4a8290:
    // 0x4a8290: 0x12660010  beq         $s3, $a2, . + 4 + (0x10 << 2)
label_4a8294:
    if (ctx->pc == 0x4A8294u) {
        ctx->pc = 0x4A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8290u;
        // 0x4a8294: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8298u;
        goto label_4a8298;
    }
    ctx->pc = 0x4A8290u;
    {
        const bool branch_taken_0x4a8290 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8290u;
        // 0x4a8294: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8290) {
            ctx->pc = 0x4A82D4u;
            goto label_4a82d4;
        }
    }
    ctx->pc = 0x4A8298u;
label_4a8298:
    // 0x4a8298: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a829c:
    // 0x4a829c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4a829cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a82a0:
    // 0x4a82a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a82a4:
    // 0x4a82a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4a82a8:
    // 0x4a82a8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_4a82ac:
    if (ctx->pc == 0x4A82ACu) {
        ctx->pc = 0x4A82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82A8u;
        // 0x4a82ac: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A82B0u;
        goto label_4a82b0;
    }
    ctx->pc = 0x4A82A8u;
    {
        const bool branch_taken_0x4a82a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82A8u;
        // 0x4a82ac: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82a8) {
            ctx->pc = 0x4A82D8u;
            goto label_4a82d8;
        }
    }
    ctx->pc = 0x4A82B0u;
label_4a82b0:
    // 0x4a82b0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x4a82b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a82b4:
    // 0x4a82b4: 0x0  nop
    ctx->pc = 0x4a82b4u;
    // NOP
label_4a82b8:
    // 0x4a82b8: 0x10a60007  beq         $a1, $a2, . + 4 + (0x7 << 2)
label_4a82bc:
    if (ctx->pc == 0x4A82BCu) {
        ctx->pc = 0x4A82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82B8u;
        // 0x4a82bc: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A82C0u;
        goto label_4a82c0;
    }
    ctx->pc = 0x4A82B8u;
    {
        const bool branch_taken_0x4a82b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82B8u;
        // 0x4a82bc: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82b8) {
            ctx->pc = 0x4A82D8u;
            goto label_4a82d8;
        }
    }
    ctx->pc = 0x4A82C0u;
label_4a82c0:
    // 0x4a82c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a82c4:
    // 0x4a82c4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4a82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4a82c8:
    // 0x4a82c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a82cc:
    // 0x4a82cc: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
label_4a82d0:
    if (ctx->pc == 0x4A82D0u) {
        ctx->pc = 0x4A82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82CCu;
        // 0x4a82d0: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A82D4u;
        goto label_4a82d4;
    }
    ctx->pc = 0x4A82CCu;
    {
        const bool branch_taken_0x4a82cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4a82cc) {
            ctx->pc = 0x4A82D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A82CCu;
            // 0x4a82d0: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A82B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a82b8;
        }
    }
    ctx->pc = 0x4A82D4u;
label_4a82d4:
    // 0x4a82d4: 0xa61026  xor         $v0, $a1, $a2
    ctx->pc = 0x4a82d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_4a82d8:
    // 0x4a82d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4a82d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a82dc:
    // 0x4a82dc: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
label_4a82e0:
    if (ctx->pc == 0x4A82E0u) {
        ctx->pc = 0x4A82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82DCu;
        // 0x4a82e0: 0x122b00a  movz        $s6, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A82E4u;
        goto label_4a82e4;
    }
    ctx->pc = 0x4A82DCu;
    {
        const bool branch_taken_0x4a82dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82DCu;
        // 0x4a82e0: 0x122b00a  movz        $s6, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82dc) {
            ctx->pc = 0x4A8288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8288;
        }
    }
    ctx->pc = 0x4A82E4u;
label_4a82e4:
    // 0x4a82e4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_4a82e8:
    // 0x4a82e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a82e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a82ec:
    // 0x4a82ec: 0x24578838  addiu       $s7, $v0, -0x77C8
    ctx->pc = 0x4a82ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936632));
label_4a82f0:
    // 0x4a82f0: 0xc129c0e  jal         func_4A7038
label_4a82f4:
    if (ctx->pc == 0x4A82F4u) {
        ctx->pc = 0x4A82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82F0u;
        // 0x4a82f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A82F8u;
        goto label_4a82f8;
    }
    ctx->pc = 0x4A82F0u;
    SET_GPR_U32(ctx, 31, 0x4A82F8u);
    ctx->pc = 0x4A82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82F0u;
    // 0x4a82f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7038u, 0x4A82F0u, 0x4A82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82F8u;
label_4a82f8:
    // 0x4a82f8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4a82f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a82fc:
    // 0x4a82fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a82fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8300:
    // 0x4a8300: 0xc129c2a  jal         func_4A70A8
label_4a8304:
    if (ctx->pc == 0x4A8304u) {
        ctx->pc = 0x4A8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8300u;
        // 0x4a8304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8308u;
        goto label_4a8308;
    }
    ctx->pc = 0x4A8300u;
    SET_GPR_U32(ctx, 31, 0x4A8308u);
    ctx->pc = 0x4A8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8300u;
    // 0x4a8304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A8300u, 0x4A8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8308u;
label_4a8308:
    // 0x4a8308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a8308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a830c:
    // 0x4a830c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8310:
    // 0x4a8310: 0xc10c1fa  jal         func_4307E8
label_4a8314:
    if (ctx->pc == 0x4A8314u) {
        ctx->pc = 0x4A8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8310u;
        // 0x4a8314: 0x2043023  subu        $a2, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8318u;
        goto label_4a8318;
    }
    ctx->pc = 0x4A8310u;
    SET_GPR_U32(ctx, 31, 0x4A8318u);
    ctx->pc = 0x4A8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8310u;
    // 0x4a8314: 0x2043023  subu        $a2, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4A8310u, 0x4A8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8318u;
label_4a8318:
    // 0x4a8318: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4a8318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a831c:
    // 0x4a831c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x4a831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a8320:
    // 0x4a8320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4a8320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a8324:
    // 0x4a8324: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4a8324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a8328:
    // 0x4a8328: 0xc129c2a  jal         func_4A70A8
label_4a832c:
    if (ctx->pc == 0x4A832Cu) {
        ctx->pc = 0x4A832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8328u;
        // 0x4a832c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8330u;
        goto label_4a8330;
    }
    ctx->pc = 0x4A8328u;
    SET_GPR_U32(ctx, 31, 0x4A8330u);
    ctx->pc = 0x4A832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8328u;
    // 0x4a832c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A8328u, 0x4A8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8330u;
label_4a8330:
    // 0x4a8330: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x4a8330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_4a8334:
    // 0x4a8334: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x4a8334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8338:
    // 0x4a8338: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x4a8338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_4a833c:
    // 0x4a833c: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x4a833cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_4a8340:
    // 0x4a8340: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a8344:
    // 0x4a8344: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x4a8344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_4a8348:
    // 0x4a8348: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x4a8348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_4a834c:
    // 0x4a834c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_4a8350:
    if (ctx->pc == 0x4A8350u) {
        ctx->pc = 0x4A8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A834Cu;
        // 0x4a8350: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8354u;
        goto label_4a8354;
    }
    ctx->pc = 0x4A834Cu;
    {
        const bool branch_taken_0x4a834c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A834Cu;
        // 0x4a8350: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a834c) {
            ctx->pc = 0x4A83CCu;
            goto label_4a83cc;
        }
    }
    ctx->pc = 0x4A8354u;
label_4a8354:
    // 0x4a8354: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a8354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8358:
    // 0x4a8358: 0x10b10012  beq         $a1, $s1, . + 4 + (0x12 << 2)
label_4a835c:
    if (ctx->pc == 0x4A835Cu) {
        ctx->pc = 0x4A8360u;
        goto label_4a8360;
    }
    ctx->pc = 0x4A8358u;
    {
        const bool branch_taken_0x4a8358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x4a8358) {
            ctx->pc = 0x4A83A4u;
            goto label_4a83a4;
        }
    }
    ctx->pc = 0x4A8360u;
label_4a8360:
    // 0x4a8360: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8364:
    // 0x4a8364: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4a8364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a8368:
    // 0x4a8368: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a8368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a836c:
    // 0x4a836c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a8370:
    // 0x4a8370: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_4a8374:
    if (ctx->pc == 0x4A8374u) {
        ctx->pc = 0x4A8378u;
        goto label_4a8378;
    }
    ctx->pc = 0x4A8370u;
    {
        const bool branch_taken_0x4a8370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a8370) {
            ctx->pc = 0x4A839Cu;
            goto label_4a839c;
        }
    }
    ctx->pc = 0x4A8378u;
label_4a8378:
    // 0x4a8378: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x4a8378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a837c:
    // 0x4a837c: 0x0  nop
    ctx->pc = 0x4a837cu;
    // NOP
label_4a8380:
    // 0x4a8380: 0x10b10008  beq         $a1, $s1, . + 4 + (0x8 << 2)
label_4a8384:
    if (ctx->pc == 0x4A8384u) {
        ctx->pc = 0x4A8388u;
        goto label_4a8388;
    }
    ctx->pc = 0x4A8380u;
    {
        const bool branch_taken_0x4a8380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x4a8380) {
            ctx->pc = 0x4A83A4u;
            goto label_4a83a4;
        }
    }
    ctx->pc = 0x4A8388u;
label_4a8388:
    // 0x4a8388: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a8388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a838c:
    // 0x4a838c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a8390:
    // 0x4a8390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a8390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a8394:
    // 0x4a8394: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
label_4a8398:
    if (ctx->pc == 0x4A8398u) {
        ctx->pc = 0x4A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8394u;
        // 0x4a8398: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A839Cu;
        goto label_4a839c;
    }
    ctx->pc = 0x4A8394u;
    {
        const bool branch_taken_0x4a8394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4a8394) {
            ctx->pc = 0x4A8398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8394u;
            // 0x4a8398: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8380;
        }
    }
    ctx->pc = 0x4A839Cu;
label_4a839c:
    // 0x4a839c: 0x54b10009  bnel        $a1, $s1, . + 4 + (0x9 << 2)
label_4a83a0:
    if (ctx->pc == 0x4A83A0u) {
        ctx->pc = 0x4A83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A839Cu;
        // 0x4a83a0: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83A4u;
        goto label_4a83a4;
    }
    ctx->pc = 0x4A839Cu;
    {
        const bool branch_taken_0x4a839c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a839c) {
            ctx->pc = 0x4A83A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A839Cu;
            // 0x4a83a0: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A83C4u;
            goto label_4a83c4;
        }
    }
    ctx->pc = 0x4A83A4u;
label_4a83a4:
    // 0x4a83a4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_4a83a8:
    if (ctx->pc == 0x4A83A8u) {
        ctx->pc = 0x4A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83A4u;
        // 0x4a83a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83ACu;
        goto label_4a83ac;
    }
    ctx->pc = 0x4A83A4u;
    {
        const bool branch_taken_0x4a83a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83A4u;
        // 0x4a83a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83a4) {
            ctx->pc = 0x4A83BCu;
            goto label_4a83bc;
        }
    }
    ctx->pc = 0x4A83ACu;
label_4a83ac:
    // 0x4a83ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a83acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a83b0:
    // 0x4a83b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a83b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a83b4:
    // 0x4a83b4: 0x2e0f809  jalr        $s7
label_4a83b8:
    if (ctx->pc == 0x4A83B8u) {
        ctx->pc = 0x4A83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83B4u;
        // 0x4a83b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83BCu;
        goto label_4a83bc;
    }
    ctx->pc = 0x4A83B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4A83BCu);
        ctx->pc = 0x4A83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83B4u;
        // 0x4a83b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A83B4u, 0x4A83BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A83BCu;
label_4a83bc:
    // 0x4a83bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4a83bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4a83c0:
    // 0x4a83c0: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x4a83c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4a83c4:
    // 0x4a83c4: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
label_4a83c8:
    if (ctx->pc == 0x4A83C8u) {
        ctx->pc = 0x4A83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83C4u;
        // 0x4a83c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83CCu;
        goto label_4a83cc;
    }
    ctx->pc = 0x4A83C4u;
    {
        const bool branch_taken_0x4a83c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83C4u;
        // 0x4a83c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83c4) {
            ctx->pc = 0x4A8358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8358;
        }
    }
    ctx->pc = 0x4A83CCu;
label_4a83cc:
    // 0x4a83cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a83d0:
    // 0x4a83d0: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_4a83d4:
    if (ctx->pc == 0x4A83D4u) {
        ctx->pc = 0x4A83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83D0u;
        // 0x4a83d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83D8u;
        goto label_4a83d8;
    }
    ctx->pc = 0x4A83D0u;
    {
        const bool branch_taken_0x4a83d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83D0u;
        // 0x4a83d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83d0) {
            ctx->pc = 0x4A8604u;
            goto label_4a8604;
        }
    }
    ctx->pc = 0x4A83D8u;
label_4a83d8:
    // 0x4a83d8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a83dc:
    // 0x4a83dc: 0x0  nop
    ctx->pc = 0x4a83dcu;
    // NOP
label_4a83e0:
    // 0x4a83e0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a83e4:
    // 0x4a83e4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4a83e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a83e8:
    // 0x4a83e8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4a83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a83ec:
    // 0x4a83ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4a83f0:
    if (ctx->pc == 0x4A83F0u) {
        ctx->pc = 0x4A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83ECu;
        // 0x4a83f0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83F4u;
        goto label_4a83f4;
    }
    ctx->pc = 0x4A83ECu;
    {
        const bool branch_taken_0x4a83ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83ECu;
        // 0x4a83f0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83ec) {
            ctx->pc = 0x4A8404u;
            goto label_4a8404;
        }
    }
    ctx->pc = 0x4A83F4u;
label_4a83f4:
    // 0x4a83f4: 0xc129c2a  jal         func_4A70A8
label_4a83f8:
    if (ctx->pc == 0x4A83F8u) {
        ctx->pc = 0x4A83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83F4u;
        // 0x4a83f8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83FCu;
        goto label_4a83fc;
    }
    ctx->pc = 0x4A83F4u;
    SET_GPR_U32(ctx, 31, 0x4A83FCu);
    ctx->pc = 0x4A83F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A83F4u;
    // 0x4a83f8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A83F4u, 0x4A83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A83FCu;
label_4a83fc:
    // 0x4a83fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4a83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4a8400:
    // 0x4a8400: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4a8400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a8404:
    // 0x4a8404: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a8404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a8408:
    // 0x4a8408: 0xc129c2a  jal         func_4A70A8
label_4a840c:
    if (ctx->pc == 0x4A840Cu) {
        ctx->pc = 0x4A840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8408u;
        // 0x4a840c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8410u;
        goto label_4a8410;
    }
    ctx->pc = 0x4A8408u;
    SET_GPR_U32(ctx, 31, 0x4A8410u);
    ctx->pc = 0x4A840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8408u;
    // 0x4a840c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A8408u, 0x4A8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8410u;
label_4a8410:
    // 0x4a8410: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4a8410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4a8414:
    // 0x4a8414: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a8418:
    // 0x4a8418: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x4a8418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4a841c:
    // 0x4a841c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a8420:
    if (ctx->pc == 0x4A8420u) {
        ctx->pc = 0x4A8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A841Cu;
        // 0x4a8420: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8424u;
        goto label_4a8424;
    }
    ctx->pc = 0x4A841Cu;
    {
        const bool branch_taken_0x4a841c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a841c) {
            ctx->pc = 0x4A8420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A841Cu;
            // 0x4a8420: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8438u;
            goto label_4a8438;
        }
    }
    ctx->pc = 0x4A8424u;
label_4a8424:
    // 0x4a8424: 0xc129c2a  jal         func_4A70A8
label_4a8428:
    if (ctx->pc == 0x4A8428u) {
        ctx->pc = 0x4A8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8424u;
        // 0x4a8428: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A842Cu;
        goto label_4a842c;
    }
    ctx->pc = 0x4A8424u;
    SET_GPR_U32(ctx, 31, 0x4A842Cu);
    ctx->pc = 0x4A8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8424u;
    // 0x4a8428: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A8424u, 0x4A842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A842Cu;
label_4a842c:
    // 0x4a842c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4a842cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_4a8430:
    // 0x4a8430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a8434:
    // 0x4a8434: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x4a8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_4a8438:
    // 0x4a8438: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a843c:
    if (ctx->pc == 0x4A843Cu) {
        ctx->pc = 0x4A843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8438u;
        // 0x4a843c: 0x24420003  addiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8440u;
        goto label_4a8440;
    }
    ctx->pc = 0x4A8438u;
    {
        const bool branch_taken_0x4a8438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8438u;
        // 0x4a843c: 0x24420003  addiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8438) {
            ctx->pc = 0x4A8454u;
            goto label_4a8454;
        }
    }
    ctx->pc = 0x4A8440u;
label_4a8440:
    // 0x4a8440: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a8440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4a8444:
    // 0x4a8444: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x4a8444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
label_4a8448:
    // 0x4a8448: 0xc129c2a  jal         func_4A70A8
label_4a844c:
    if (ctx->pc == 0x4A844Cu) {
        ctx->pc = 0x4A844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8448u;
        // 0x4a844c: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8450u;
        goto label_4a8450;
    }
    ctx->pc = 0x4A8448u;
    SET_GPR_U32(ctx, 31, 0x4A8450u);
    ctx->pc = 0x4A844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8448u;
    // 0x4a844c: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A8448u, 0x4A8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8450u;
label_4a8450:
    // 0x4a8450: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4a8450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4a8454:
    // 0x4a8454: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x4a8454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4a8458:
    // 0x4a8458: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a8458u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4a845c:
    // 0x4a845c: 0x262e0001  addiu       $t6, $s1, 0x1
    ctx->pc = 0x4a845cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a8460:
    // 0x4a8460: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a8460u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a8464:
    // 0x4a8464: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4a8464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a8468:
    // 0x4a8468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a8468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a846c:
    // 0x4a846c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_4a8470:
    if (ctx->pc == 0x4A8470u) {
        ctx->pc = 0x4A8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A846Cu;
        // 0x4a8470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8474u;
        goto label_4a8474;
    }
    ctx->pc = 0x4A846Cu;
    {
        const bool branch_taken_0x4a846c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A846Cu;
        // 0x4a8470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a846c) {
            ctx->pc = 0x4A8540u;
            goto label_4a8540;
        }
    }
    ctx->pc = 0x4A8474u;
label_4a8474:
    // 0x4a8474: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x4a8474u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a8478:
    // 0x4a8478: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4a8478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a847c:
    // 0x4a847c: 0x0  nop
    ctx->pc = 0x4a847cu;
    // NOP
label_4a8480:
    // 0x4a8480: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a8480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a8484:
    // 0x4a8484: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a8484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a8488:
    // 0x4a8488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4a848c:
    if (ctx->pc == 0x4A848Cu) {
        ctx->pc = 0x4A848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8488u;
        // 0x4a848c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8490u;
        goto label_4a8490;
    }
    ctx->pc = 0x4A8488u;
    {
        const bool branch_taken_0x4a8488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8488u;
        // 0x4a848c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8488) {
            ctx->pc = 0x4A84A0u;
            goto label_4a84a0;
        }
    }
    ctx->pc = 0x4A8490u;
label_4a8490:
    // 0x4a8490: 0xed1818  mult        $v1, $a3, $t5
    ctx->pc = 0x4a8490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a8494:
    // 0x4a8494: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a8494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8498:
    // 0x4a8498: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a849c:
    if (ctx->pc == 0x4A849Cu) {
        ctx->pc = 0x4A849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8498u;
        // 0x4a849c: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84A0u;
        goto label_4a84a0;
    }
    ctx->pc = 0x4A8498u;
    {
        const bool branch_taken_0x4a8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8498u;
        // 0x4a849c: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8498) {
            ctx->pc = 0x4A84A4u;
            goto label_4a84a4;
        }
    }
    ctx->pc = 0x4A84A0u;
label_4a84a0:
    // 0x4a84a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a84a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a84a4:
    // 0x4a84a4: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x4a84a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a84a8:
    // 0x4a84a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a84a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a84ac:
    // 0x4a84ac: 0x8d07001c  lw          $a3, 0x1C($t0)
    ctx->pc = 0x4a84acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_4a84b0:
    // 0x4a84b0: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
label_4a84b4:
    if (ctx->pc == 0x4A84B4u) {
        ctx->pc = 0x4A84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84B0u;
        // 0x4a84b4: 0x8e0b000c  lw          $t3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84B8u;
        goto label_4a84b8;
    }
    ctx->pc = 0x4A84B0u;
    {
        const bool branch_taken_0x4a84b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84B0u;
        // 0x4a84b4: 0x8e0b000c  lw          $t3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84b0) {
            ctx->pc = 0x4A84FCu;
            goto label_4a84fc;
        }
    }
    ctx->pc = 0x4A84B8u;
label_4a84b8:
    // 0x4a84b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a84bc:
    // 0x4a84bc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4a84c0:
    // 0x4a84c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a84c4:
    // 0x4a84c4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_4a84c8:
    if (ctx->pc == 0x4A84C8u) {
        ctx->pc = 0x4A84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84C4u;
        // 0x4a84c8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84CCu;
        goto label_4a84cc;
    }
    ctx->pc = 0x4A84C4u;
    {
        const bool branch_taken_0x4a84c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4A84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84C4u;
        // 0x4a84c8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84c4) {
            ctx->pc = 0x4A84D8u;
            goto label_4a84d8;
        }
    }
    ctx->pc = 0x4A84CCu;
label_4a84cc:
    // 0x4a84cc: 0x1000000b  b           . + 4 + (0xB << 2)
label_4a84d0:
    if (ctx->pc == 0x4A84D0u) {
        ctx->pc = 0x4A84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84CCu;
        // 0x4a84d0: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84D4u;
        goto label_4a84d4;
    }
    ctx->pc = 0x4A84CCu;
    {
        const bool branch_taken_0x4a84cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84CCu;
        // 0x4a84d0: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84cc) {
            ctx->pc = 0x4A84FCu;
            goto label_4a84fc;
        }
    }
    ctx->pc = 0x4A84D4u;
label_4a84d4:
    // 0x4a84d4: 0x0  nop
    ctx->pc = 0x4a84d4u;
    // NOP
label_4a84d8:
    // 0x4a84d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a84dc:
    // 0x4a84dc: 0xd6102b  sltu        $v0, $a2, $s6
    ctx->pc = 0x4a84dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4a84e0:
    // 0x4a84e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a84e4:
    if (ctx->pc == 0x4A84E4u) {
        ctx->pc = 0x4A84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E0u;
        // 0x4a84e4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84E8u;
        goto label_4a84e8;
    }
    ctx->pc = 0x4A84E0u;
    {
        const bool branch_taken_0x4a84e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E0u;
        // 0x4a84e4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84e0) {
            ctx->pc = 0x4A84FCu;
            goto label_4a84fc;
        }
    }
    ctx->pc = 0x4A84E8u;
label_4a84e8:
    // 0x4a84e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4a84ec:
    // 0x4a84ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a84f0:
    // 0x4a84f0: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
label_4a84f4:
    if (ctx->pc == 0x4A84F4u) {
        ctx->pc = 0x4A84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84F0u;
        // 0x4a84f4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84F8u;
        goto label_4a84f8;
    }
    ctx->pc = 0x4A84F0u;
    {
        const bool branch_taken_0x4a84f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4a84f0) {
            ctx->pc = 0x4A84F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A84F0u;
            // 0x4a84f4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A84DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a84dc;
        }
    }
    ctx->pc = 0x4A84F8u;
label_4a84f8:
    // 0x4a84f8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4a84f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a84fc:
    // 0x4a84fc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4a84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4a8500:
    // 0x4a8500: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4a8500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4a8504:
    // 0x4a8504: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4a8504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a8508:
    // 0x4a8508: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x4a8508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
label_4a850c:
    // 0x4a850c: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x4a850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_4a8510:
    // 0x4a8510: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4a8510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a8514:
    // 0x4a8514: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x4a8514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_4a8518:
    // 0x4a8518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a8518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a851c:
    // 0x4a851c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a8520:
    // 0x4a8520: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4a8520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4a8524:
    // 0x4a8524: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x4a8524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4a8528:
    // 0x4a8528: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x4a8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_4a852c:
    // 0x4a852c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4a852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a8530:
    // 0x4a8530: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a8534:
    // 0x4a8534: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a8534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a8538:
    // 0x4a8538: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_4a853c:
    if (ctx->pc == 0x4A853Cu) {
        ctx->pc = 0x4A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8538u;
        // 0x4a853c: 0x1435024  and         $t2, $t2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8540u;
        goto label_4a8540;
    }
    ctx->pc = 0x4A8538u;
    {
        const bool branch_taken_0x4a8538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8538u;
        // 0x4a853c: 0x1435024  and         $t2, $t2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8538) {
            ctx->pc = 0x4A8480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8480;
        }
    }
    ctx->pc = 0x4A8540u;
label_4a8540:
    // 0x4a8540: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a8544:
    // 0x4a8544: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x4a8544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
label_4a8548:
    // 0x4a8548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a8548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a854c:
    // 0x4a854c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x4a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4a8550:
    // 0x4a8550: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4a8554:
    if (ctx->pc == 0x4A8554u) {
        ctx->pc = 0x4A8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8550u;
        // 0x4a8554: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8558u;
        goto label_4a8558;
    }
    ctx->pc = 0x4A8550u;
    {
        const bool branch_taken_0x4a8550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8550u;
        // 0x4a8554: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8550) {
            ctx->pc = 0x4A85F0u;
            goto label_4a85f0;
        }
    }
    ctx->pc = 0x4A8558u;
label_4a8558:
    // 0x4a8558: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a8558u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4a855c:
    // 0x4a855c: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x4a855cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a8560:
    // 0x4a8560: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a8560u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a8564:
    // 0x4a8564: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4a8564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4a8568:
    // 0x4a8568: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4a8568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4a856c:
    // 0x4a856c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a856cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8570:
    // 0x4a8570: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a8570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a8574:
    // 0x4a8574: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x4a8574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
label_4a8578:
    // 0x4a8578: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x4a8578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a857c:
    // 0x4a857c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a8580:
    if (ctx->pc == 0x4A8580u) {
        ctx->pc = 0x4A8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A857Cu;
        // 0x4a8580: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8584u;
        goto label_4a8584;
    }
    ctx->pc = 0x4A857Cu;
    {
        const bool branch_taken_0x4a857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A857Cu;
        // 0x4a8580: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a857c) {
            ctx->pc = 0x4A858Cu;
            goto label_4a858c;
        }
    }
    ctx->pc = 0x4A8584u;
label_4a8584:
    // 0x4a8584: 0x0  nop
    ctx->pc = 0x4a8584u;
    // NOP
label_4a8588:
    // 0x4a8588: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a8588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a858c:
    // 0x4a858c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a8590:
    // 0x4a8590: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x4a8590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a8594:
    // 0x4a8594: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4a8598:
    if (ctx->pc == 0x4A8598u) {
        ctx->pc = 0x4A8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8594u;
        // 0x4a8598: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A859Cu;
        goto label_4a859c;
    }
    ctx->pc = 0x4A8594u;
    {
        const bool branch_taken_0x4a8594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8594u;
        // 0x4a8598: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8594) {
            ctx->pc = 0x4A85D8u;
            goto label_4a85d8;
        }
    }
    ctx->pc = 0x4A859Cu;
label_4a859c:
    // 0x4a859c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a85a0:
    // 0x4a85a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a85a4:
    // 0x4a85a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a85a8:
    // 0x4a85a8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_4a85ac:
    if (ctx->pc == 0x4A85ACu) {
        ctx->pc = 0x4A85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85A8u;
        // 0x4a85ac: 0xeb2018  mult        $a0, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85B0u;
        goto label_4a85b0;
    }
    ctx->pc = 0x4A85A8u;
    {
        const bool branch_taken_0x4a85a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85A8u;
        // 0x4a85ac: 0xeb2018  mult        $a0, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a85a8) {
            ctx->pc = 0x4A8588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8588;
        }
    }
    ctx->pc = 0x4A85B0u;
label_4a85b0:
    // 0x4a85b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a85b4:
    // 0x4a85b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a85b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a85b8:
    // 0x4a85b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4a85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4a85bc:
    // 0x4a85bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a85c0:
    // 0x4a85c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a85c4:
    // 0x4a85c4: 0x54a3fff1  bnel        $a1, $v1, . + 4 + (-0xF << 2)
label_4a85c8:
    if (ctx->pc == 0x4A85C8u) {
        ctx->pc = 0x4A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85C4u;
        // 0x4a85c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85CCu;
        goto label_4a85cc;
    }
    ctx->pc = 0x4A85C4u;
    {
        const bool branch_taken_0x4a85c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a85c4) {
            ctx->pc = 0x4A85C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A85C4u;
            // 0x4a85c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A858Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a858c;
        }
    }
    ctx->pc = 0x4A85CCu;
label_4a85cc:
    // 0x4a85cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4a85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4a85d0:
    // 0x4a85d0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4a85d4:
    // 0x4a85d4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4a85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_4a85d8:
    // 0x4a85d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a85dc:
    // 0x4a85dc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4a85dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a85e0:
    // 0x4a85e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x4a85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4a85e4:
    // 0x4a85e4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a85e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a85e8:
    // 0x4a85e8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_4a85ec:
    if (ctx->pc == 0x4A85ECu) {
        ctx->pc = 0x4A85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85E8u;
        // 0x4a85ec: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85F0u;
        goto label_4a85f0;
    }
    ctx->pc = 0x4A85E8u;
    {
        const bool branch_taken_0x4a85e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a85e8) {
            ctx->pc = 0x4A85ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A85E8u;
            // 0x4a85ec: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8568;
        }
    }
    ctx->pc = 0x4A85F0u;
label_4a85f0:
    // 0x4a85f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a85f4:
    // 0x4a85f4: 0x1c0882d  daddu       $s1, $t6, $zero
    ctx->pc = 0x4a85f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4a85f8:
    // 0x4a85f8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a85f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a85fc:
    // 0x4a85fc: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_4a8600:
    if (ctx->pc == 0x4A8600u) {
        ctx->pc = 0x4A8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85FCu;
        // 0x4a8600: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8604u;
        goto label_4a8604;
    }
    ctx->pc = 0x4A85FCu;
    {
        const bool branch_taken_0x4a85fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85FCu;
        // 0x4a8600: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a85fc) {
            ctx->pc = 0x4A83E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a83e0;
        }
    }
    ctx->pc = 0x4A8604u;
label_4a8604:
    // 0x4a8604: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_4a8608:
    if (ctx->pc == 0x4A8608u) {
        ctx->pc = 0x4A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8604u;
        // 0x4a8608: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A860Cu;
        goto label_4a860c;
    }
    ctx->pc = 0x4A8604u;
    {
        const bool branch_taken_0x4a8604 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8604u;
        // 0x4a8608: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8604) {
            ctx->pc = 0x4A8618u;
            goto label_4a8618;
        }
    }
    ctx->pc = 0x4A860Cu;
label_4a860c:
    // 0x4a860c: 0xc129c2a  jal         func_4A70A8
label_4a8610:
    if (ctx->pc == 0x4A8610u) {
        ctx->pc = 0x4A8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A860Cu;
        // 0x4a8610: 0x3c42018  mult        $a0, $fp, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8614u;
        goto label_4a8614;
    }
    ctx->pc = 0x4A860Cu;
    SET_GPR_U32(ctx, 31, 0x4A8614u);
    ctx->pc = 0x4A8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A860Cu;
    // 0x4a8610: 0x3c42018  mult        $a0, $fp, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A860Cu, 0x4A8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8614u;
label_4a8614:
    // 0x4a8614: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4a8614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_4a8618:
    // 0x4a8618: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x4a8618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a861c:
    // 0x4a861c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a861cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8620:
    // 0x4a8620: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4a8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4a8624:
    // 0x4a8624: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a8624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a8628:
    // 0x4a8628: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a8628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a862c:
    // 0x4a862c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_4a8630:
    if (ctx->pc == 0x4A8630u) {
        ctx->pc = 0x4A8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A862Cu;
        // 0x4a8630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8634u;
        goto label_4a8634;
    }
    ctx->pc = 0x4A862Cu;
    {
        const bool branch_taken_0x4a862c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A862Cu;
        // 0x4a8630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a862c) {
            ctx->pc = 0x4A86A8u;
            goto label_4a86a8;
        }
    }
    ctx->pc = 0x4A8634u;
label_4a8634:
    // 0x4a8634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a8634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8638:
    // 0x4a8638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a8638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a863c:
    // 0x4a863c: 0x0  nop
    ctx->pc = 0x4a863cu;
    // NOP
label_4a8640:
    // 0x4a8640: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4a8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4a8644:
    // 0x4a8644: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a8644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a8648:
    // 0x4a8648: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4a8648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4a864c:
    // 0x4a864c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x4a864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_4a8650:
    // 0x4a8650: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a8654:
    // 0x4a8654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a8654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a8658:
    // 0x4a8658: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a8658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4a865c:
    // 0x4a865c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4a8660:
    if (ctx->pc == 0x4A8660u) {
        ctx->pc = 0x4A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A865Cu;
        // 0x4a8660: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8664u;
        goto label_4a8664;
    }
    ctx->pc = 0x4A865Cu;
    {
        const bool branch_taken_0x4a865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a865c) {
            ctx->pc = 0x4A8660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A865Cu;
            // 0x4a8660: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8690u;
            goto label_4a8690;
        }
    }
    ctx->pc = 0x4A8664u;
label_4a8664:
    // 0x4a8664: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x4a8664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4a8668:
    // 0x4a8668: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a8668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a866c:
    // 0x4a866c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a8670:
    // 0x4a8670: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4a8670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_4a8674:
    // 0x4a8674: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a8674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4a8678:
    // 0x4a8678: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x4a8678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_4a867c:
    // 0x4a867c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a8680:
    // 0x4a8680: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4a8680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4a8684:
    // 0x4a8684: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x4a8684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4a8688:
    // 0x4a8688: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a8688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_4a868c:
    // 0x4a868c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x4a868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4a8690:
    // 0x4a8690: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4a8690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4a8694:
    // 0x4a8694: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a8694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a8698:
    // 0x4a8698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a869c:
    // 0x4a869c: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x4a869cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a86a0:
    // 0x4a86a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_4a86a4:
    if (ctx->pc == 0x4A86A4u) {
        ctx->pc = 0x4A86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86A0u;
        // 0x4a86a4: 0x25080024  addiu       $t0, $t0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A86A8u;
        goto label_4a86a8;
    }
    ctx->pc = 0x4A86A0u;
    {
        const bool branch_taken_0x4a86a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86A0u;
        // 0x4a86a4: 0x25080024  addiu       $t0, $t0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86a0) {
            ctx->pc = 0x4A8640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8640;
        }
    }
    ctx->pc = 0x4A86A8u;
label_4a86a8:
    // 0x4a86a8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x4a86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4a86ac:
    // 0x4a86ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a86acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a86b0:
    // 0x4a86b0: 0xae460018  sw          $a2, 0x18($s2)
    ctx->pc = 0x4a86b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
label_4a86b4:
    // 0x4a86b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a86b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a86b8:
    // 0x4a86b8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4a86b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a86bc:
    // 0x4a86bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a86bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a86c0:
    // 0x4a86c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a86c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a86c4:
    // 0x4a86c4: 0xc12a456  jal         func_4A9158
label_4a86c8:
    if (ctx->pc == 0x4A86C8u) {
        ctx->pc = 0x4A86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86C4u;
        // 0x4a86c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A86CCu;
        goto label_4a86cc;
    }
    ctx->pc = 0x4A86C4u;
    SET_GPR_U32(ctx, 31, 0x4A86CCu);
    ctx->pc = 0x4A86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A86C4u;
    // 0x4a86c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9158u, 0x4A86C4u, 0x4A86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A86CCu;
label_4a86cc:
    // 0x4a86cc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a86ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a86d0:
    // 0x4a86d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a86d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a86d4:
    // 0x4a86d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a86d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a86d8:
    // 0x4a86d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a86d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a86dc:
    // 0x4a86dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a86dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a86e0:
    // 0x4a86e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a86e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a86e4:
    // 0x4a86e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a86e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a86e8:
    // 0x4a86e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a86e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a86ec:
    // 0x4a86ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a86ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a86f0:
    // 0x4a86f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a86f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a86f4:
    // 0x4a86f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a86f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a86f8:
    // 0x4a86f8: 0x3e00008  jr          $ra
label_4a86fc:
    if (ctx->pc == 0x4A86FCu) {
        ctx->pc = 0x4A86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86F8u;
        // 0x4a86fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8700u;
        goto label_fallthrough_0x4a86f8;
    }
    ctx->pc = 0x4A86F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86F8u;
        // 0x4a86fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A86F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a86f8:
    ctx->pc = 0x4A8700u;
}
