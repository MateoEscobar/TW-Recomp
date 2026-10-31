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

// Function: sub_002C7FD8
// Address: 0x2c7fd8 - 0x2c88a8
void sub_002C7FD8_0x2c7fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7FD8_0x2c7fd8");
#endif

    switch (ctx->pc) {
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c7fdcu: goto label_2c7fdc;
        case 0x2c7fe0u: goto label_2c7fe0;
        case 0x2c7fe4u: goto label_2c7fe4;
        case 0x2c7fe8u: goto label_2c7fe8;
        case 0x2c7fecu: goto label_2c7fec;
        case 0x2c7ff0u: goto label_2c7ff0;
        case 0x2c7ff4u: goto label_2c7ff4;
        case 0x2c7ff8u: goto label_2c7ff8;
        case 0x2c7ffcu: goto label_2c7ffc;
        case 0x2c8000u: goto label_2c8000;
        case 0x2c8004u: goto label_2c8004;
        case 0x2c8008u: goto label_2c8008;
        case 0x2c800cu: goto label_2c800c;
        case 0x2c8010u: goto label_2c8010;
        case 0x2c8014u: goto label_2c8014;
        case 0x2c8018u: goto label_2c8018;
        case 0x2c801cu: goto label_2c801c;
        case 0x2c8020u: goto label_2c8020;
        case 0x2c8024u: goto label_2c8024;
        case 0x2c8028u: goto label_2c8028;
        case 0x2c802cu: goto label_2c802c;
        case 0x2c8030u: goto label_2c8030;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c8038u: goto label_2c8038;
        case 0x2c803cu: goto label_2c803c;
        case 0x2c8040u: goto label_2c8040;
        case 0x2c8044u: goto label_2c8044;
        case 0x2c8048u: goto label_2c8048;
        case 0x2c804cu: goto label_2c804c;
        case 0x2c8050u: goto label_2c8050;
        case 0x2c8054u: goto label_2c8054;
        case 0x2c8058u: goto label_2c8058;
        case 0x2c805cu: goto label_2c805c;
        case 0x2c8060u: goto label_2c8060;
        case 0x2c8064u: goto label_2c8064;
        case 0x2c8068u: goto label_2c8068;
        case 0x2c806cu: goto label_2c806c;
        case 0x2c8070u: goto label_2c8070;
        case 0x2c8074u: goto label_2c8074;
        case 0x2c8078u: goto label_2c8078;
        case 0x2c807cu: goto label_2c807c;
        case 0x2c8080u: goto label_2c8080;
        case 0x2c8084u: goto label_2c8084;
        case 0x2c8088u: goto label_2c8088;
        case 0x2c808cu: goto label_2c808c;
        case 0x2c8090u: goto label_2c8090;
        case 0x2c8094u: goto label_2c8094;
        case 0x2c8098u: goto label_2c8098;
        case 0x2c809cu: goto label_2c809c;
        case 0x2c80a0u: goto label_2c80a0;
        case 0x2c80a4u: goto label_2c80a4;
        case 0x2c80a8u: goto label_2c80a8;
        case 0x2c80acu: goto label_2c80ac;
        case 0x2c80b0u: goto label_2c80b0;
        case 0x2c80b4u: goto label_2c80b4;
        case 0x2c80b8u: goto label_2c80b8;
        case 0x2c80bcu: goto label_2c80bc;
        case 0x2c80c0u: goto label_2c80c0;
        case 0x2c80c4u: goto label_2c80c4;
        case 0x2c80c8u: goto label_2c80c8;
        case 0x2c80ccu: goto label_2c80cc;
        case 0x2c80d0u: goto label_2c80d0;
        case 0x2c80d4u: goto label_2c80d4;
        case 0x2c80d8u: goto label_2c80d8;
        case 0x2c80dcu: goto label_2c80dc;
        case 0x2c80e0u: goto label_2c80e0;
        case 0x2c80e4u: goto label_2c80e4;
        case 0x2c80e8u: goto label_2c80e8;
        case 0x2c80ecu: goto label_2c80ec;
        case 0x2c80f0u: goto label_2c80f0;
        case 0x2c80f4u: goto label_2c80f4;
        case 0x2c80f8u: goto label_2c80f8;
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8100u: goto label_2c8100;
        case 0x2c8104u: goto label_2c8104;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c810cu: goto label_2c810c;
        case 0x2c8110u: goto label_2c8110;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c8118u: goto label_2c8118;
        case 0x2c811cu: goto label_2c811c;
        case 0x2c8120u: goto label_2c8120;
        case 0x2c8124u: goto label_2c8124;
        case 0x2c8128u: goto label_2c8128;
        case 0x2c812cu: goto label_2c812c;
        case 0x2c8130u: goto label_2c8130;
        case 0x2c8134u: goto label_2c8134;
        case 0x2c8138u: goto label_2c8138;
        case 0x2c813cu: goto label_2c813c;
        case 0x2c8140u: goto label_2c8140;
        case 0x2c8144u: goto label_2c8144;
        case 0x2c8148u: goto label_2c8148;
        case 0x2c814cu: goto label_2c814c;
        case 0x2c8150u: goto label_2c8150;
        case 0x2c8154u: goto label_2c8154;
        case 0x2c8158u: goto label_2c8158;
        case 0x2c815cu: goto label_2c815c;
        case 0x2c8160u: goto label_2c8160;
        case 0x2c8164u: goto label_2c8164;
        case 0x2c8168u: goto label_2c8168;
        case 0x2c816cu: goto label_2c816c;
        case 0x2c8170u: goto label_2c8170;
        case 0x2c8174u: goto label_2c8174;
        case 0x2c8178u: goto label_2c8178;
        case 0x2c817cu: goto label_2c817c;
        case 0x2c8180u: goto label_2c8180;
        case 0x2c8184u: goto label_2c8184;
        case 0x2c8188u: goto label_2c8188;
        case 0x2c818cu: goto label_2c818c;
        case 0x2c8190u: goto label_2c8190;
        case 0x2c8194u: goto label_2c8194;
        case 0x2c8198u: goto label_2c8198;
        case 0x2c819cu: goto label_2c819c;
        case 0x2c81a0u: goto label_2c81a0;
        case 0x2c81a4u: goto label_2c81a4;
        case 0x2c81a8u: goto label_2c81a8;
        case 0x2c81acu: goto label_2c81ac;
        case 0x2c81b0u: goto label_2c81b0;
        case 0x2c81b4u: goto label_2c81b4;
        case 0x2c81b8u: goto label_2c81b8;
        case 0x2c81bcu: goto label_2c81bc;
        case 0x2c81c0u: goto label_2c81c0;
        case 0x2c81c4u: goto label_2c81c4;
        case 0x2c81c8u: goto label_2c81c8;
        case 0x2c81ccu: goto label_2c81cc;
        case 0x2c81d0u: goto label_2c81d0;
        case 0x2c81d4u: goto label_2c81d4;
        case 0x2c81d8u: goto label_2c81d8;
        case 0x2c81dcu: goto label_2c81dc;
        case 0x2c81e0u: goto label_2c81e0;
        case 0x2c81e4u: goto label_2c81e4;
        case 0x2c81e8u: goto label_2c81e8;
        case 0x2c81ecu: goto label_2c81ec;
        case 0x2c81f0u: goto label_2c81f0;
        case 0x2c81f4u: goto label_2c81f4;
        case 0x2c81f8u: goto label_2c81f8;
        case 0x2c81fcu: goto label_2c81fc;
        case 0x2c8200u: goto label_2c8200;
        case 0x2c8204u: goto label_2c8204;
        case 0x2c8208u: goto label_2c8208;
        case 0x2c820cu: goto label_2c820c;
        case 0x2c8210u: goto label_2c8210;
        case 0x2c8214u: goto label_2c8214;
        case 0x2c8218u: goto label_2c8218;
        case 0x2c821cu: goto label_2c821c;
        case 0x2c8220u: goto label_2c8220;
        case 0x2c8224u: goto label_2c8224;
        case 0x2c8228u: goto label_2c8228;
        case 0x2c822cu: goto label_2c822c;
        case 0x2c8230u: goto label_2c8230;
        case 0x2c8234u: goto label_2c8234;
        case 0x2c8238u: goto label_2c8238;
        case 0x2c823cu: goto label_2c823c;
        case 0x2c8240u: goto label_2c8240;
        case 0x2c8244u: goto label_2c8244;
        case 0x2c8248u: goto label_2c8248;
        case 0x2c824cu: goto label_2c824c;
        case 0x2c8250u: goto label_2c8250;
        case 0x2c8254u: goto label_2c8254;
        case 0x2c8258u: goto label_2c8258;
        case 0x2c825cu: goto label_2c825c;
        case 0x2c8260u: goto label_2c8260;
        case 0x2c8264u: goto label_2c8264;
        case 0x2c8268u: goto label_2c8268;
        case 0x2c826cu: goto label_2c826c;
        case 0x2c8270u: goto label_2c8270;
        case 0x2c8274u: goto label_2c8274;
        case 0x2c8278u: goto label_2c8278;
        case 0x2c827cu: goto label_2c827c;
        case 0x2c8280u: goto label_2c8280;
        case 0x2c8284u: goto label_2c8284;
        case 0x2c8288u: goto label_2c8288;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c8290u: goto label_2c8290;
        case 0x2c8294u: goto label_2c8294;
        case 0x2c8298u: goto label_2c8298;
        case 0x2c829cu: goto label_2c829c;
        case 0x2c82a0u: goto label_2c82a0;
        case 0x2c82a4u: goto label_2c82a4;
        case 0x2c82a8u: goto label_2c82a8;
        case 0x2c82acu: goto label_2c82ac;
        case 0x2c82b0u: goto label_2c82b0;
        case 0x2c82b4u: goto label_2c82b4;
        case 0x2c82b8u: goto label_2c82b8;
        case 0x2c82bcu: goto label_2c82bc;
        case 0x2c82c0u: goto label_2c82c0;
        case 0x2c82c4u: goto label_2c82c4;
        case 0x2c82c8u: goto label_2c82c8;
        case 0x2c82ccu: goto label_2c82cc;
        case 0x2c82d0u: goto label_2c82d0;
        case 0x2c82d4u: goto label_2c82d4;
        case 0x2c82d8u: goto label_2c82d8;
        case 0x2c82dcu: goto label_2c82dc;
        case 0x2c82e0u: goto label_2c82e0;
        case 0x2c82e4u: goto label_2c82e4;
        case 0x2c82e8u: goto label_2c82e8;
        case 0x2c82ecu: goto label_2c82ec;
        case 0x2c82f0u: goto label_2c82f0;
        case 0x2c82f4u: goto label_2c82f4;
        case 0x2c82f8u: goto label_2c82f8;
        case 0x2c82fcu: goto label_2c82fc;
        case 0x2c8300u: goto label_2c8300;
        case 0x2c8304u: goto label_2c8304;
        case 0x2c8308u: goto label_2c8308;
        case 0x2c830cu: goto label_2c830c;
        case 0x2c8310u: goto label_2c8310;
        case 0x2c8314u: goto label_2c8314;
        case 0x2c8318u: goto label_2c8318;
        case 0x2c831cu: goto label_2c831c;
        case 0x2c8320u: goto label_2c8320;
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8328u: goto label_2c8328;
        case 0x2c832cu: goto label_2c832c;
        case 0x2c8330u: goto label_2c8330;
        case 0x2c8334u: goto label_2c8334;
        case 0x2c8338u: goto label_2c8338;
        case 0x2c833cu: goto label_2c833c;
        case 0x2c8340u: goto label_2c8340;
        case 0x2c8344u: goto label_2c8344;
        case 0x2c8348u: goto label_2c8348;
        case 0x2c834cu: goto label_2c834c;
        case 0x2c8350u: goto label_2c8350;
        case 0x2c8354u: goto label_2c8354;
        case 0x2c8358u: goto label_2c8358;
        case 0x2c835cu: goto label_2c835c;
        case 0x2c8360u: goto label_2c8360;
        case 0x2c8364u: goto label_2c8364;
        case 0x2c8368u: goto label_2c8368;
        case 0x2c836cu: goto label_2c836c;
        case 0x2c8370u: goto label_2c8370;
        case 0x2c8374u: goto label_2c8374;
        case 0x2c8378u: goto label_2c8378;
        case 0x2c837cu: goto label_2c837c;
        case 0x2c8380u: goto label_2c8380;
        case 0x2c8384u: goto label_2c8384;
        case 0x2c8388u: goto label_2c8388;
        case 0x2c838cu: goto label_2c838c;
        case 0x2c8390u: goto label_2c8390;
        case 0x2c8394u: goto label_2c8394;
        case 0x2c8398u: goto label_2c8398;
        case 0x2c839cu: goto label_2c839c;
        case 0x2c83a0u: goto label_2c83a0;
        case 0x2c83a4u: goto label_2c83a4;
        case 0x2c83a8u: goto label_2c83a8;
        case 0x2c83acu: goto label_2c83ac;
        case 0x2c83b0u: goto label_2c83b0;
        case 0x2c83b4u: goto label_2c83b4;
        case 0x2c83b8u: goto label_2c83b8;
        case 0x2c83bcu: goto label_2c83bc;
        case 0x2c83c0u: goto label_2c83c0;
        case 0x2c83c4u: goto label_2c83c4;
        case 0x2c83c8u: goto label_2c83c8;
        case 0x2c83ccu: goto label_2c83cc;
        case 0x2c83d0u: goto label_2c83d0;
        case 0x2c83d4u: goto label_2c83d4;
        case 0x2c83d8u: goto label_2c83d8;
        case 0x2c83dcu: goto label_2c83dc;
        case 0x2c83e0u: goto label_2c83e0;
        case 0x2c83e4u: goto label_2c83e4;
        case 0x2c83e8u: goto label_2c83e8;
        case 0x2c83ecu: goto label_2c83ec;
        case 0x2c83f0u: goto label_2c83f0;
        case 0x2c83f4u: goto label_2c83f4;
        case 0x2c83f8u: goto label_2c83f8;
        case 0x2c83fcu: goto label_2c83fc;
        case 0x2c8400u: goto label_2c8400;
        case 0x2c8404u: goto label_2c8404;
        case 0x2c8408u: goto label_2c8408;
        case 0x2c840cu: goto label_2c840c;
        case 0x2c8410u: goto label_2c8410;
        case 0x2c8414u: goto label_2c8414;
        case 0x2c8418u: goto label_2c8418;
        case 0x2c841cu: goto label_2c841c;
        case 0x2c8420u: goto label_2c8420;
        case 0x2c8424u: goto label_2c8424;
        case 0x2c8428u: goto label_2c8428;
        case 0x2c842cu: goto label_2c842c;
        case 0x2c8430u: goto label_2c8430;
        case 0x2c8434u: goto label_2c8434;
        case 0x2c8438u: goto label_2c8438;
        case 0x2c843cu: goto label_2c843c;
        case 0x2c8440u: goto label_2c8440;
        case 0x2c8444u: goto label_2c8444;
        case 0x2c8448u: goto label_2c8448;
        case 0x2c844cu: goto label_2c844c;
        case 0x2c8450u: goto label_2c8450;
        case 0x2c8454u: goto label_2c8454;
        case 0x2c8458u: goto label_2c8458;
        case 0x2c845cu: goto label_2c845c;
        case 0x2c8460u: goto label_2c8460;
        case 0x2c8464u: goto label_2c8464;
        case 0x2c8468u: goto label_2c8468;
        case 0x2c846cu: goto label_2c846c;
        case 0x2c8470u: goto label_2c8470;
        case 0x2c8474u: goto label_2c8474;
        case 0x2c8478u: goto label_2c8478;
        case 0x2c847cu: goto label_2c847c;
        case 0x2c8480u: goto label_2c8480;
        case 0x2c8484u: goto label_2c8484;
        case 0x2c8488u: goto label_2c8488;
        case 0x2c848cu: goto label_2c848c;
        case 0x2c8490u: goto label_2c8490;
        case 0x2c8494u: goto label_2c8494;
        case 0x2c8498u: goto label_2c8498;
        case 0x2c849cu: goto label_2c849c;
        case 0x2c84a0u: goto label_2c84a0;
        case 0x2c84a4u: goto label_2c84a4;
        case 0x2c84a8u: goto label_2c84a8;
        case 0x2c84acu: goto label_2c84ac;
        case 0x2c84b0u: goto label_2c84b0;
        case 0x2c84b4u: goto label_2c84b4;
        case 0x2c84b8u: goto label_2c84b8;
        case 0x2c84bcu: goto label_2c84bc;
        case 0x2c84c0u: goto label_2c84c0;
        case 0x2c84c4u: goto label_2c84c4;
        case 0x2c84c8u: goto label_2c84c8;
        case 0x2c84ccu: goto label_2c84cc;
        case 0x2c84d0u: goto label_2c84d0;
        case 0x2c84d4u: goto label_2c84d4;
        case 0x2c84d8u: goto label_2c84d8;
        case 0x2c84dcu: goto label_2c84dc;
        case 0x2c84e0u: goto label_2c84e0;
        case 0x2c84e4u: goto label_2c84e4;
        case 0x2c84e8u: goto label_2c84e8;
        case 0x2c84ecu: goto label_2c84ec;
        case 0x2c84f0u: goto label_2c84f0;
        case 0x2c84f4u: goto label_2c84f4;
        case 0x2c84f8u: goto label_2c84f8;
        case 0x2c84fcu: goto label_2c84fc;
        case 0x2c8500u: goto label_2c8500;
        case 0x2c8504u: goto label_2c8504;
        case 0x2c8508u: goto label_2c8508;
        case 0x2c850cu: goto label_2c850c;
        case 0x2c8510u: goto label_2c8510;
        case 0x2c8514u: goto label_2c8514;
        case 0x2c8518u: goto label_2c8518;
        case 0x2c851cu: goto label_2c851c;
        case 0x2c8520u: goto label_2c8520;
        case 0x2c8524u: goto label_2c8524;
        case 0x2c8528u: goto label_2c8528;
        case 0x2c852cu: goto label_2c852c;
        case 0x2c8530u: goto label_2c8530;
        case 0x2c8534u: goto label_2c8534;
        case 0x2c8538u: goto label_2c8538;
        case 0x2c853cu: goto label_2c853c;
        case 0x2c8540u: goto label_2c8540;
        case 0x2c8544u: goto label_2c8544;
        case 0x2c8548u: goto label_2c8548;
        case 0x2c854cu: goto label_2c854c;
        case 0x2c8550u: goto label_2c8550;
        case 0x2c8554u: goto label_2c8554;
        case 0x2c8558u: goto label_2c8558;
        case 0x2c855cu: goto label_2c855c;
        case 0x2c8560u: goto label_2c8560;
        case 0x2c8564u: goto label_2c8564;
        case 0x2c8568u: goto label_2c8568;
        case 0x2c856cu: goto label_2c856c;
        case 0x2c8570u: goto label_2c8570;
        case 0x2c8574u: goto label_2c8574;
        case 0x2c8578u: goto label_2c8578;
        case 0x2c857cu: goto label_2c857c;
        case 0x2c8580u: goto label_2c8580;
        case 0x2c8584u: goto label_2c8584;
        case 0x2c8588u: goto label_2c8588;
        case 0x2c858cu: goto label_2c858c;
        case 0x2c8590u: goto label_2c8590;
        case 0x2c8594u: goto label_2c8594;
        case 0x2c8598u: goto label_2c8598;
        case 0x2c859cu: goto label_2c859c;
        case 0x2c85a0u: goto label_2c85a0;
        case 0x2c85a4u: goto label_2c85a4;
        case 0x2c85a8u: goto label_2c85a8;
        case 0x2c85acu: goto label_2c85ac;
        case 0x2c85b0u: goto label_2c85b0;
        case 0x2c85b4u: goto label_2c85b4;
        case 0x2c85b8u: goto label_2c85b8;
        case 0x2c85bcu: goto label_2c85bc;
        case 0x2c85c0u: goto label_2c85c0;
        case 0x2c85c4u: goto label_2c85c4;
        case 0x2c85c8u: goto label_2c85c8;
        case 0x2c85ccu: goto label_2c85cc;
        case 0x2c85d0u: goto label_2c85d0;
        case 0x2c85d4u: goto label_2c85d4;
        case 0x2c85d8u: goto label_2c85d8;
        case 0x2c85dcu: goto label_2c85dc;
        case 0x2c85e0u: goto label_2c85e0;
        case 0x2c85e4u: goto label_2c85e4;
        case 0x2c85e8u: goto label_2c85e8;
        case 0x2c85ecu: goto label_2c85ec;
        case 0x2c85f0u: goto label_2c85f0;
        case 0x2c85f4u: goto label_2c85f4;
        case 0x2c85f8u: goto label_2c85f8;
        case 0x2c85fcu: goto label_2c85fc;
        case 0x2c8600u: goto label_2c8600;
        case 0x2c8604u: goto label_2c8604;
        case 0x2c8608u: goto label_2c8608;
        case 0x2c860cu: goto label_2c860c;
        case 0x2c8610u: goto label_2c8610;
        case 0x2c8614u: goto label_2c8614;
        case 0x2c8618u: goto label_2c8618;
        case 0x2c861cu: goto label_2c861c;
        case 0x2c8620u: goto label_2c8620;
        case 0x2c8624u: goto label_2c8624;
        case 0x2c8628u: goto label_2c8628;
        case 0x2c862cu: goto label_2c862c;
        case 0x2c8630u: goto label_2c8630;
        case 0x2c8634u: goto label_2c8634;
        case 0x2c8638u: goto label_2c8638;
        case 0x2c863cu: goto label_2c863c;
        case 0x2c8640u: goto label_2c8640;
        case 0x2c8644u: goto label_2c8644;
        case 0x2c8648u: goto label_2c8648;
        case 0x2c864cu: goto label_2c864c;
        case 0x2c8650u: goto label_2c8650;
        case 0x2c8654u: goto label_2c8654;
        case 0x2c8658u: goto label_2c8658;
        case 0x2c865cu: goto label_2c865c;
        case 0x2c8660u: goto label_2c8660;
        case 0x2c8664u: goto label_2c8664;
        case 0x2c8668u: goto label_2c8668;
        case 0x2c866cu: goto label_2c866c;
        case 0x2c8670u: goto label_2c8670;
        case 0x2c8674u: goto label_2c8674;
        case 0x2c8678u: goto label_2c8678;
        case 0x2c867cu: goto label_2c867c;
        case 0x2c8680u: goto label_2c8680;
        case 0x2c8684u: goto label_2c8684;
        case 0x2c8688u: goto label_2c8688;
        case 0x2c868cu: goto label_2c868c;
        case 0x2c8690u: goto label_2c8690;
        case 0x2c8694u: goto label_2c8694;
        case 0x2c8698u: goto label_2c8698;
        case 0x2c869cu: goto label_2c869c;
        case 0x2c86a0u: goto label_2c86a0;
        case 0x2c86a4u: goto label_2c86a4;
        case 0x2c86a8u: goto label_2c86a8;
        case 0x2c86acu: goto label_2c86ac;
        case 0x2c86b0u: goto label_2c86b0;
        case 0x2c86b4u: goto label_2c86b4;
        case 0x2c86b8u: goto label_2c86b8;
        case 0x2c86bcu: goto label_2c86bc;
        case 0x2c86c0u: goto label_2c86c0;
        case 0x2c86c4u: goto label_2c86c4;
        case 0x2c86c8u: goto label_2c86c8;
        case 0x2c86ccu: goto label_2c86cc;
        case 0x2c86d0u: goto label_2c86d0;
        case 0x2c86d4u: goto label_2c86d4;
        case 0x2c86d8u: goto label_2c86d8;
        case 0x2c86dcu: goto label_2c86dc;
        case 0x2c86e0u: goto label_2c86e0;
        case 0x2c86e4u: goto label_2c86e4;
        case 0x2c86e8u: goto label_2c86e8;
        case 0x2c86ecu: goto label_2c86ec;
        case 0x2c86f0u: goto label_2c86f0;
        case 0x2c86f4u: goto label_2c86f4;
        case 0x2c86f8u: goto label_2c86f8;
        case 0x2c86fcu: goto label_2c86fc;
        case 0x2c8700u: goto label_2c8700;
        case 0x2c8704u: goto label_2c8704;
        case 0x2c8708u: goto label_2c8708;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c8710u: goto label_2c8710;
        case 0x2c8714u: goto label_2c8714;
        case 0x2c8718u: goto label_2c8718;
        case 0x2c871cu: goto label_2c871c;
        case 0x2c8720u: goto label_2c8720;
        case 0x2c8724u: goto label_2c8724;
        case 0x2c8728u: goto label_2c8728;
        case 0x2c872cu: goto label_2c872c;
        case 0x2c8730u: goto label_2c8730;
        case 0x2c8734u: goto label_2c8734;
        case 0x2c8738u: goto label_2c8738;
        case 0x2c873cu: goto label_2c873c;
        case 0x2c8740u: goto label_2c8740;
        case 0x2c8744u: goto label_2c8744;
        case 0x2c8748u: goto label_2c8748;
        case 0x2c874cu: goto label_2c874c;
        case 0x2c8750u: goto label_2c8750;
        case 0x2c8754u: goto label_2c8754;
        case 0x2c8758u: goto label_2c8758;
        case 0x2c875cu: goto label_2c875c;
        case 0x2c8760u: goto label_2c8760;
        case 0x2c8764u: goto label_2c8764;
        case 0x2c8768u: goto label_2c8768;
        case 0x2c876cu: goto label_2c876c;
        case 0x2c8770u: goto label_2c8770;
        case 0x2c8774u: goto label_2c8774;
        case 0x2c8778u: goto label_2c8778;
        case 0x2c877cu: goto label_2c877c;
        case 0x2c8780u: goto label_2c8780;
        case 0x2c8784u: goto label_2c8784;
        case 0x2c8788u: goto label_2c8788;
        case 0x2c878cu: goto label_2c878c;
        case 0x2c8790u: goto label_2c8790;
        case 0x2c8794u: goto label_2c8794;
        case 0x2c8798u: goto label_2c8798;
        case 0x2c879cu: goto label_2c879c;
        case 0x2c87a0u: goto label_2c87a0;
        case 0x2c87a4u: goto label_2c87a4;
        case 0x2c87a8u: goto label_2c87a8;
        case 0x2c87acu: goto label_2c87ac;
        case 0x2c87b0u: goto label_2c87b0;
        case 0x2c87b4u: goto label_2c87b4;
        case 0x2c87b8u: goto label_2c87b8;
        case 0x2c87bcu: goto label_2c87bc;
        case 0x2c87c0u: goto label_2c87c0;
        case 0x2c87c4u: goto label_2c87c4;
        case 0x2c87c8u: goto label_2c87c8;
        case 0x2c87ccu: goto label_2c87cc;
        case 0x2c87d0u: goto label_2c87d0;
        case 0x2c87d4u: goto label_2c87d4;
        case 0x2c87d8u: goto label_2c87d8;
        case 0x2c87dcu: goto label_2c87dc;
        case 0x2c87e0u: goto label_2c87e0;
        case 0x2c87e4u: goto label_2c87e4;
        case 0x2c87e8u: goto label_2c87e8;
        case 0x2c87ecu: goto label_2c87ec;
        case 0x2c87f0u: goto label_2c87f0;
        case 0x2c87f4u: goto label_2c87f4;
        case 0x2c87f8u: goto label_2c87f8;
        case 0x2c87fcu: goto label_2c87fc;
        case 0x2c8800u: goto label_2c8800;
        case 0x2c8804u: goto label_2c8804;
        case 0x2c8808u: goto label_2c8808;
        case 0x2c880cu: goto label_2c880c;
        case 0x2c8810u: goto label_2c8810;
        case 0x2c8814u: goto label_2c8814;
        case 0x2c8818u: goto label_2c8818;
        case 0x2c881cu: goto label_2c881c;
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8824u: goto label_2c8824;
        case 0x2c8828u: goto label_2c8828;
        case 0x2c882cu: goto label_2c882c;
        case 0x2c8830u: goto label_2c8830;
        case 0x2c8834u: goto label_2c8834;
        case 0x2c8838u: goto label_2c8838;
        case 0x2c883cu: goto label_2c883c;
        case 0x2c8840u: goto label_2c8840;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c8848u: goto label_2c8848;
        case 0x2c884cu: goto label_2c884c;
        case 0x2c8850u: goto label_2c8850;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8858u: goto label_2c8858;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8860u: goto label_2c8860;
        case 0x2c8864u: goto label_2c8864;
        case 0x2c8868u: goto label_2c8868;
        case 0x2c886cu: goto label_2c886c;
        case 0x2c8870u: goto label_2c8870;
        case 0x2c8874u: goto label_2c8874;
        case 0x2c8878u: goto label_2c8878;
        case 0x2c887cu: goto label_2c887c;
        case 0x2c8880u: goto label_2c8880;
        case 0x2c8884u: goto label_2c8884;
        case 0x2c8888u: goto label_2c8888;
        case 0x2c888cu: goto label_2c888c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c8894u: goto label_2c8894;
        case 0x2c8898u: goto label_2c8898;
        case 0x2c889cu: goto label_2c889c;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88a4u: goto label_2c88a4;
        default: break;
    }

    ctx->pc = 0x2c7fd8u;

label_2c7fd8:
    // 0x2c7fd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2c7fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2c7fdc:
    // 0x2c7fdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c7fe0:
    // 0x2c7fe0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2c7fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2c7fe4:
    // 0x2c7fe4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c7fe8:
    // 0x2c7fe8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2c7fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2c7fec:
    // 0x2c7fec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ff0:
    // 0x2c7ff0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2c7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2c7ff4:
    // 0x2c7ff4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c7ff8:
    // 0x2c7ff8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2c7ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2c7ffc:
    // 0x2c7ffc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c7ffcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8000:
    // 0x2c8000: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2c8000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2c8004:
    // 0x2c8004: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c8004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c8008:
    // 0x2c8008: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2c8008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2c800c:
    // 0x2c800c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2c800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2c8010:
    // 0x2c8010: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c8010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c8014:
    // 0x2c8014: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2c8014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2c8018:
    // 0x2c8018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c8018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c801c:
    // 0x2c801c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2c801cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2c8020:
    // 0x2c8020: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c8020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2c8024:
    // 0x2c8024: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c8024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8028:
    // 0x2c8028: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2c8028u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c802c:
    // 0x2c802c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2c8030:
    // 0x2c8030: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2c8030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2c8034:
    // 0x2c8034: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c8038:
    // 0x2c8038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c803c:
    // 0x2c803c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2c803cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_2c8040:
    // 0x2c8040: 0xc1067b8  jal         func_419EE0
label_2c8044:
    if (ctx->pc == 0x2C8044u) {
        ctx->pc = 0x2C8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8040u;
        // 0x2c8044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8048u;
        goto label_2c8048;
    }
    ctx->pc = 0x2C8040u;
    SET_GPR_U32(ctx, 31, 0x2C8048u);
    ctx->pc = 0x2C8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8040u;
    // 0x2c8044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2C8040u, 0x2C8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8048u;
label_2c8048:
    // 0x2c8048: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2c8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c804c:
    // 0x2c804c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c804cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8050:
    // 0x2c8050: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c8054:
    // 0x2c8054: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c8054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2c8058:
    // 0x2c8058: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x2c8058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_2c805c:
    // 0x2c805c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c805cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8060:
    // 0x2c8060: 0x0  nop
    ctx->pc = 0x2c8060u;
    // NOP
label_2c8064:
    // 0x2c8064: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2c8068:
    if (ctx->pc == 0x2C8068u) {
        ctx->pc = 0x2C8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8064u;
        // 0x2c8068: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C806Cu;
        goto label_2c806c;
    }
    ctx->pc = 0x2C8064u;
    {
        const bool branch_taken_0x2c8064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8064u;
        // 0x2c8068: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8064) {
            ctx->pc = 0x2C8078u;
            goto label_2c8078;
        }
    }
    ctx->pc = 0x2C806Cu;
label_2c806c:
    // 0x2c806c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8070:
    // 0x2c8070: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c8074:
    if (ctx->pc == 0x2C8074u) {
        ctx->pc = 0x2C8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8070u;
        // 0x2c8074: 0xa242003e  sb          $v0, 0x3E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8078u;
        goto label_2c8078;
    }
    ctx->pc = 0x2C8070u;
    {
        const bool branch_taken_0x2c8070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8070u;
        // 0x2c8074: 0xa242003e  sb          $v0, 0x3E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8070) {
            ctx->pc = 0x2C807Cu;
            goto label_2c807c;
        }
    }
    ctx->pc = 0x2C8078u;
label_2c8078:
    // 0x2c8078: 0xa240003e  sb          $zero, 0x3E($s2)
    ctx->pc = 0x2c8078u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 0));
label_2c807c:
    // 0x2c807c: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x2c807cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_2c8080:
    // 0x2c8080: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_2c8084:
    if (ctx->pc == 0x2C8084u) {
        ctx->pc = 0x2C8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8080u;
        // 0x2c8084: 0x9243003e  lbu         $v1, 0x3E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8088u;
        goto label_2c8088;
    }
    ctx->pc = 0x2C8080u;
    {
        const bool branch_taken_0x2c8080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8080) {
            ctx->pc = 0x2C8084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8080u;
            // 0x2c8084: 0x9243003e  lbu         $v1, 0x3E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8168u;
            goto label_2c8168;
        }
    }
    ctx->pc = 0x2C8088u;
label_2c8088:
    // 0x2c8088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c808c:
    // 0x2c808c: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_2c8090:
    if (ctx->pc == 0x2C8090u) {
        ctx->pc = 0x2C8094u;
        goto label_2c8094;
    }
    ctx->pc = 0x2C808Cu;
    {
        const bool branch_taken_0x2c808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c808c) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C8094u;
label_2c8094:
    // 0x2c8094: 0x92440042  lbu         $a0, 0x42($s2)
    ctx->pc = 0x2c8094u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
label_2c8098:
    // 0x2c8098: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
label_2c809c:
    if (ctx->pc == 0x2C809Cu) {
        ctx->pc = 0x2C809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8098u;
        // 0x2c809c: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80A0u;
        goto label_2c80a0;
    }
    ctx->pc = 0x2C8098u;
    {
        const bool branch_taken_0x2c8098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8098u;
        // 0x2c809c: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8098) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C80A0u;
label_2c80a0:
    // 0x2c80a0: 0x9243003f  lbu         $v1, 0x3F($s2)
    ctx->pc = 0x2c80a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
label_2c80a4:
    // 0x2c80a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c80a8:
    // 0x2c80a8: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_2c80ac:
    if (ctx->pc == 0x2C80ACu) {
        ctx->pc = 0x2C80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80A8u;
        // 0x2c80ac: 0x43980a  movz        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80B0u;
        goto label_2c80b0;
    }
    ctx->pc = 0x2C80A8u;
    {
        const bool branch_taken_0x2c80a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80A8u;
        // 0x2c80ac: 0x43980a  movz        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80a8) {
            ctx->pc = 0x2C80BCu;
            goto label_2c80bc;
        }
    }
    ctx->pc = 0x2C80B0u;
label_2c80b0:
    // 0x2c80b0: 0x92420040  lbu         $v0, 0x40($s2)
    ctx->pc = 0x2c80b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 64)));
label_2c80b4:
    // 0x2c80b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2c80b8:
    if (ctx->pc == 0x2C80B8u) {
        ctx->pc = 0x2C80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80B4u;
        // 0x2c80b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80BCu;
        goto label_2c80bc;
    }
    ctx->pc = 0x2C80B4u;
    {
        const bool branch_taken_0x2c80b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c80b4) {
            ctx->pc = 0x2C80B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C80B4u;
            // 0x2c80b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C80D0u;
            goto label_2c80d0;
        }
    }
    ctx->pc = 0x2C80BCu;
label_2c80bc:
    // 0x2c80bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c80bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c80c0:
    // 0x2c80c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c80c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c80c4:
    // 0x2c80c4: 0xc0b1c92  jal         func_2C7248
label_2c80c8:
    if (ctx->pc == 0x2C80C8u) {
        ctx->pc = 0x2C80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80C4u;
        // 0x2c80c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80CCu;
        goto label_2c80cc;
    }
    ctx->pc = 0x2C80C4u;
    SET_GPR_U32(ctx, 31, 0x2C80CCu);
    ctx->pc = 0x2C80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C80C4u;
    // 0x2c80c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C80C4u, 0x2C80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80CCu;
label_2c80cc:
    // 0x2c80cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c80d0:
    // 0x2c80d0: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2c80d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2c80d4:
    // 0x2c80d4: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
label_2c80d8:
    if (ctx->pc == 0x2C80D8u) {
        ctx->pc = 0x2C80DCu;
        goto label_2c80dc;
    }
    ctx->pc = 0x2C80D4u;
    {
        const bool branch_taken_0x2c80d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2c80d4) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C80DCu;
label_2c80dc:
    // 0x2c80dc: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_2c80e0:
    if (ctx->pc == 0x2C80E0u) {
        ctx->pc = 0x2C80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80DCu;
        // 0x2c80e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80E4u;
        goto label_2c80e4;
    }
    ctx->pc = 0x2C80DCu;
    {
        const bool branch_taken_0x2c80dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80DCu;
        // 0x2c80e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80dc) {
            ctx->pc = 0x2C812Cu;
            goto label_2c812c;
        }
    }
    ctx->pc = 0x2C80E4u;
label_2c80e4:
    // 0x2c80e4: 0xc0a367c  jal         func_28D9F0
label_2c80e8:
    if (ctx->pc == 0x2C80E8u) {
        ctx->pc = 0x2C80ECu;
        goto label_2c80ec;
    }
    ctx->pc = 0x2C80E4u;
    SET_GPR_U32(ctx, 31, 0x2C80ECu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C80E4u, 0x2C80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80ECu;
label_2c80ec:
    // 0x2c80ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c80ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c80f0:
    // 0x2c80f0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c80f4:
    if (ctx->pc == 0x2C80F4u) {
        ctx->pc = 0x2C80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80F0u;
        // 0x2c80f4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80F8u;
        goto label_2c80f8;
    }
    ctx->pc = 0x2C80F0u;
    {
        const bool branch_taken_0x2c80f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80F0u;
        // 0x2c80f4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80f0) {
            ctx->pc = 0x2C8128u;
            goto label_2c8128;
        }
    }
    ctx->pc = 0x2C80F8u;
label_2c80f8:
    // 0x2c80f8: 0x86b00092  lh          $s0, 0x92($s5)
    ctx->pc = 0x2c80f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c80fc:
    // 0x2c80fc: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c8100:
    // 0x2c8100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c8100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c8104:
    // 0x2c8104: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c8104u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c8108:
    // 0x2c8108: 0xc0884f6  jal         func_2213D8
label_2c810c:
    if (ctx->pc == 0x2C810Cu) {
        ctx->pc = 0x2C810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8108u;
        // 0x2c810c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8110u;
        goto label_2c8110;
    }
    ctx->pc = 0x2C8108u;
    SET_GPR_U32(ctx, 31, 0x2C8110u);
    ctx->pc = 0x2C810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8108u;
    // 0x2c810c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C8108u, 0x2C8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8110u;
label_2c8110:
    // 0x2c8110: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8114:
    // 0x2c8114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8118:
    // 0x2c8118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c8118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c811c:
    // 0x2c811c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c811cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c8120:
    // 0x2c8120: 0xc0bf800  jal         func_2FE000
label_2c8124:
    if (ctx->pc == 0x2C8124u) {
        ctx->pc = 0x2C8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8120u;
        // 0x2c8124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8128u;
        goto label_2c8128;
    }
    ctx->pc = 0x2C8120u;
    SET_GPR_U32(ctx, 31, 0x2C8128u);
    ctx->pc = 0x2C8124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8120u;
    // 0x2c8124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C8120u, 0x2C8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8128u;
label_2c8128:
    // 0x2c8128: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c8128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c812c:
    // 0x2c812c: 0xc0b1c56  jal         func_2C7158
label_2c8130:
    if (ctx->pc == 0x2C8130u) {
        ctx->pc = 0x2C8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C812Cu;
        // 0x2c8130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8134u;
        goto label_2c8134;
    }
    ctx->pc = 0x2C812Cu;
    SET_GPR_U32(ctx, 31, 0x2C8134u);
    ctx->pc = 0x2C8130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C812Cu;
    // 0x2c8130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7158u, 0x2C812Cu, 0x2C8134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8134u;
label_2c8134:
    // 0x2c8134: 0xc0b1f7a  jal         func_2C7DE8
label_2c8138:
    if (ctx->pc == 0x2C8138u) {
        ctx->pc = 0x2C8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8134u;
        // 0x2c8138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C813Cu;
        goto label_2c813c;
    }
    ctx->pc = 0x2C8134u;
    SET_GPR_U32(ctx, 31, 0x2C813Cu);
    ctx->pc = 0x2C8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8134u;
    // 0x2c8138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DE8u, 0x2C8134u, 0x2C813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C813Cu;
label_2c813c:
    // 0x2c813c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2c813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c8140:
    // 0x2c8140: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c8140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2c8144:
    // 0x2c8144: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c8144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2c8148:
    // 0x2c8148: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c8148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2c814c:
    // 0x2c814c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c8150:
    // 0x2c8150: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c8150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2c8154:
    // 0x2c8154: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8158:
    // 0x2c8158: 0x0  nop
    ctx->pc = 0x2c8158u;
    // NOP
label_2c815c:
    // 0x2c815c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2c8160:
    if (ctx->pc == 0x2C8160u) {
        ctx->pc = 0x2C8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C815Cu;
        // 0x2c8160: 0xa240003d  sb          $zero, 0x3D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8164u;
        goto label_2c8164;
    }
    ctx->pc = 0x2C815Cu;
    {
        const bool branch_taken_0x2c815c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c815c) {
            ctx->pc = 0x2C8160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C815Cu;
            // 0x2c8160: 0xa240003d  sb          $zero, 0x3D($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8164u;
            goto label_2c8164;
        }
    }
    ctx->pc = 0x2C8164u;
label_2c8164:
    // 0x2c8164: 0x9243003e  lbu         $v1, 0x3E($s2)
    ctx->pc = 0x2c8164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_2c8168:
    // 0x2c8168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c816c:
    // 0x2c816c: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_2c8170:
    if (ctx->pc == 0x2C8170u) {
        ctx->pc = 0x2C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C816Cu;
        // 0x2c8170: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8174u;
        goto label_2c8174;
    }
    ctx->pc = 0x2C816Cu;
    {
        const bool branch_taken_0x2c816c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C816Cu;
        // 0x2c8170: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c816c) {
            ctx->pc = 0x2C81F8u;
            goto label_2c81f8;
        }
    }
    ctx->pc = 0x2C8174u;
label_2c8174:
    // 0x2c8174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c8174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c8178:
    // 0x2c8178: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c8178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c817c:
    // 0x2c817c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c817cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8180:
    // 0x2c8180: 0xc0888a2  jal         func_222288
label_2c8184:
    if (ctx->pc == 0x2C8184u) {
        ctx->pc = 0x2C8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8180u;
        // 0x2c8184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8188u;
        goto label_2c8188;
    }
    ctx->pc = 0x2C8180u;
    SET_GPR_U32(ctx, 31, 0x2C8188u);
    ctx->pc = 0x2C8184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8180u;
    // 0x2c8184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C8180u, 0x2C8188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8188u;
label_2c8188:
    // 0x2c8188: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c818c:
    // 0x2c818c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2c8190:
    // 0x2c8190: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2c8190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2c8194:
    // 0x2c8194: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_2c8198:
    if (ctx->pc == 0x2C8198u) {
        ctx->pc = 0x2C8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8194u;
        // 0x2c8198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C819Cu;
        goto label_2c819c;
    }
    ctx->pc = 0x2C8194u;
    {
        const bool branch_taken_0x2c8194 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8194u;
        // 0x2c8198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8194) {
            ctx->pc = 0x2C81F8u;
            goto label_2c81f8;
        }
    }
    ctx->pc = 0x2C819Cu;
label_2c819c:
    // 0x2c819c: 0x3c170056  lui         $s7, 0x56
    ctx->pc = 0x2c819cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)86 << 16));
label_2c81a0:
    // 0x2c81a0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c81a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c81a4:
    // 0x2c81a4: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x2c81a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2c81a8:
    // 0x2c81a8: 0x26500043  addiu       $s0, $s2, 0x43
    ctx->pc = 0x2c81a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 67));
label_2c81ac:
    // 0x2c81ac: 0x0  nop
    ctx->pc = 0x2c81acu;
    // NOP
label_2c81b0:
    // 0x2c81b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2c81b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2c81b4:
    // 0x2c81b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2c81b8:
    if (ctx->pc == 0x2C81B8u) {
        ctx->pc = 0x2C81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81B4u;
        // 0x2c81b8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81BCu;
        goto label_2c81bc;
    }
    ctx->pc = 0x2C81B4u;
    {
        const bool branch_taken_0x2c81b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81B4u;
        // 0x2c81b8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81b4) {
            ctx->pc = 0x2C81E0u;
            goto label_2c81e0;
        }
    }
    ctx->pc = 0x2C81BCu;
label_2c81bc:
    // 0x2c81bc: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x2c81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c81c0:
    // 0x2c81c0: 0xc0e409a  jal         func_390268
label_2c81c4:
    if (ctx->pc == 0x2C81C4u) {
        ctx->pc = 0x2C81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81C0u;
        // 0x2c81c4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81C8u;
        goto label_2c81c8;
    }
    ctx->pc = 0x2C81C0u;
    SET_GPR_U32(ctx, 31, 0x2C81C8u);
    ctx->pc = 0x2C81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C81C0u;
    // 0x2c81c4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C81C0u, 0x2C81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81C8u;
label_2c81c8:
    // 0x2c81c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c81c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c81cc:
    // 0x2c81cc: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2c81ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c81d0:
    // 0x2c81d0: 0xc0886a8  jal         func_221AA0
label_2c81d4:
    if (ctx->pc == 0x2C81D4u) {
        ctx->pc = 0x2C81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81D0u;
        // 0x2c81d4: 0x26e656d8  addiu       $a2, $s7, 0x56D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 22232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81D8u;
        goto label_2c81d8;
    }
    ctx->pc = 0x2C81D0u;
    SET_GPR_U32(ctx, 31, 0x2C81D8u);
    ctx->pc = 0x2C81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C81D0u;
    // 0x2c81d4: 0x26e656d8  addiu       $a2, $s7, 0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 22232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C81D0u, 0x2C81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81D8u;
label_2c81d8:
    // 0x2c81d8: 0xa2160000  sb          $s6, 0x0($s0)
    ctx->pc = 0x2c81d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 22));
label_2c81dc:
    // 0x2c81dc: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x2c81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c81e0:
    // 0x2c81e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c81e4:
    // 0x2c81e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2c81e8:
    // 0x2c81e8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2c81e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2c81ec:
    // 0x2c81ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2c81ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c81f0:
    // 0x2c81f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2c81f4:
    if (ctx->pc == 0x2C81F4u) {
        ctx->pc = 0x2C81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81F0u;
        // 0x2c81f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81F8u;
        goto label_2c81f8;
    }
    ctx->pc = 0x2C81F0u;
    {
        const bool branch_taken_0x2c81f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81F0u;
        // 0x2c81f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81f0) {
            ctx->pc = 0x2C81B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c81b0;
        }
    }
    ctx->pc = 0x2C81F8u;
label_2c81f8:
    // 0x2c81f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c81fc:
    // 0x2c81fc: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c81fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2c8200:
    // 0x2c8200: 0x1c400199  bgtz        $v0, . + 4 + (0x199 << 2)
label_2c8204:
    if (ctx->pc == 0x2C8204u) {
        ctx->pc = 0x2C8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8200u;
        // 0x2c8204: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8208u;
        goto label_2c8208;
    }
    ctx->pc = 0x2C8200u;
    {
        const bool branch_taken_0x2c8200 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8200u;
        // 0x2c8204: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8200) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C8208u;
label_2c8208:
    // 0x2c8208: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2c8208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2c820c:
    // 0x2c820c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8210:
    // 0x2c8210: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_2c8214:
    if (ctx->pc == 0x2C8214u) {
        ctx->pc = 0x2C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8210u;
        // 0x2c8214: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8218u;
        goto label_2c8218;
    }
    ctx->pc = 0x2C8210u;
    {
        const bool branch_taken_0x2c8210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8210u;
        // 0x2c8214: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8210) {
            ctx->pc = 0x2C829Cu;
            goto label_2c829c;
        }
    }
    ctx->pc = 0x2C8218u;
label_2c8218:
    // 0x2c8218: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2c8218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2c821c:
    // 0x2c821c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c821cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c8220:
    // 0x2c8220: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c8220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c8224:
    // 0x2c8224: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c8224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c8228:
    // 0x2c8228: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c8228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c822c:
    // 0x2c822c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c822cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8230:
    // 0x2c8230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8234:
    // 0x2c8234: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c8234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c8238:
    // 0x2c8238: 0xc105df6  jal         func_4177D8
label_2c823c:
    if (ctx->pc == 0x2C823Cu) {
        ctx->pc = 0x2C823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8238u;
        // 0x2c823c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8240u;
        goto label_2c8240;
    }
    ctx->pc = 0x2C8238u;
    SET_GPR_U32(ctx, 31, 0x2C8240u);
    ctx->pc = 0x2C823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8238u;
    // 0x2c823c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2C8238u, 0x2C8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8240u;
label_2c8240:
    // 0x2c8240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c8240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8244:
    // 0x2c8244: 0x12200188  beqz        $s1, . + 4 + (0x188 << 2)
label_2c8248:
    if (ctx->pc == 0x2C8248u) {
        ctx->pc = 0x2C8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8244u;
        // 0x2c8248: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C824Cu;
        goto label_2c824c;
    }
    ctx->pc = 0x2C8244u;
    {
        const bool branch_taken_0x2c8244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8244u;
        // 0x2c8248: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8244) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C824Cu;
label_2c824c:
    // 0x2c824c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8250:
    // 0x2c8250: 0xc0a4e54  jal         func_293950
label_2c8254:
    if (ctx->pc == 0x2C8254u) {
        ctx->pc = 0x2C8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8250u;
        // 0x2c8254: 0xac62026c  sw          $v0, 0x26C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8258u;
        goto label_2c8258;
    }
    ctx->pc = 0x2C8250u;
    SET_GPR_U32(ctx, 31, 0x2C8258u);
    ctx->pc = 0x2C8254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8250u;
    // 0x2c8254: 0xac62026c  sw          $v0, 0x26C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C8250u, 0x2C8258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8258u;
label_2c8258:
    // 0x2c8258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c825c:
    // 0x2c825c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c8260:
    if (ctx->pc == 0x2C8260u) {
        ctx->pc = 0x2C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C825Cu;
        // 0x2c8260: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8264u;
        goto label_2c8264;
    }
    ctx->pc = 0x2C825Cu;
    {
        const bool branch_taken_0x2c825c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C825Cu;
        // 0x2c8260: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c825c) {
            ctx->pc = 0x2C8288u;
            goto label_2c8288;
        }
    }
    ctx->pc = 0x2C8264u;
label_2c8264:
    // 0x2c8264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8268:
    // 0x2c8268: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c826c:
    // 0x2c826c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8270:
    // 0x2c8270: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c8274:
    // 0x2c8274: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c8274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c8278:
    // 0x2c8278: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c8278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c827c:
    // 0x2c827c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c827cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c8280:
    // 0x2c8280: 0xc0b6a3e  jal         func_2DA8F8
label_2c8284:
    if (ctx->pc == 0x2C8284u) {
        ctx->pc = 0x2C8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8280u;
        // 0x2c8284: 0x24080066  addiu       $t0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8288u;
        goto label_2c8288;
    }
    ctx->pc = 0x2C8280u;
    SET_GPR_U32(ctx, 31, 0x2C8288u);
    ctx->pc = 0x2C8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8280u;
    // 0x2c8284: 0x24080066  addiu       $t0, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2C8280u, 0x2C8288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8288u;
label_2c8288:
    // 0x2c8288: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c8288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c828c:
    // 0x2c828c: 0xc0a35d6  jal         func_28D758
label_2c8290:
    if (ctx->pc == 0x2C8290u) {
        ctx->pc = 0x2C8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C828Cu;
        // 0x2c8290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8294u;
        goto label_2c8294;
    }
    ctx->pc = 0x2C828Cu;
    SET_GPR_U32(ctx, 31, 0x2C8294u);
    ctx->pc = 0x2C8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C828Cu;
    // 0x2c8290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C828Cu, 0x2C8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8294u;
label_2c8294:
    // 0x2c8294: 0x10000175  b           . + 4 + (0x175 << 2)
label_2c8298:
    if (ctx->pc == 0x2C8298u) {
        ctx->pc = 0x2C8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8294u;
        // 0x2c8298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C829Cu;
        goto label_2c829c;
    }
    ctx->pc = 0x2C8294u;
    {
        const bool branch_taken_0x2c8294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8294u;
        // 0x2c8298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8294) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C829Cu;
label_2c829c:
    // 0x2c829c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_2c82a0:
    if (ctx->pc == 0x2C82A0u) {
        ctx->pc = 0x2C82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C829Cu;
        // 0x2c82a0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82A4u;
        goto label_2c82a4;
    }
    ctx->pc = 0x2C829Cu;
    {
        const bool branch_taken_0x2c829c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C829Cu;
        // 0x2c82a0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c829c) {
            ctx->pc = 0x2C8348u;
            goto label_2c8348;
        }
    }
    ctx->pc = 0x2C82A4u;
label_2c82a4:
    // 0x2c82a4: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2c82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
label_2c82a8:
    // 0x2c82a8: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2c82a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2c82ac:
    // 0x2c82ac: 0xc043d5e  jal         func_10F578
label_2c82b0:
    if (ctx->pc == 0x2C82B0u) {
        ctx->pc = 0x2C82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82ACu;
        // 0x2c82b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82B4u;
        goto label_2c82b4;
    }
    ctx->pc = 0x2C82ACu;
    SET_GPR_U32(ctx, 31, 0x2C82B4u);
    ctx->pc = 0x2C82B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82ACu;
    // 0x2c82b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C82ACu, 0x2C82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82B4u;
label_2c82b4:
    // 0x2c82b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c82b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c82b8:
    // 0x2c82b8: 0x1053016b  beq         $v0, $s3, . + 4 + (0x16B << 2)
label_2c82bc:
    if (ctx->pc == 0x2C82BCu) {
        ctx->pc = 0x2C82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82B8u;
        // 0x2c82bc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82C0u;
        goto label_2c82c0;
    }
    ctx->pc = 0x2C82B8u;
    {
        const bool branch_taken_0x2c82b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82B8u;
        // 0x2c82bc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82b8) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C82C0u;
label_2c82c0:
    // 0x2c82c0: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2c82c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2c82c4:
    // 0x2c82c4: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c82c8:
    // 0x2c82c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c82cc:
    // 0x2c82cc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c82ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c82d0:
    // 0x2c82d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c82d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c82d4:
    // 0x2c82d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c82d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c82d8:
    // 0x2c82d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c82dc:
    // 0x2c82dc: 0xc105df6  jal         func_4177D8
label_2c82e0:
    if (ctx->pc == 0x2C82E0u) {
        ctx->pc = 0x2C82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82DCu;
        // 0x2c82e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82E4u;
        goto label_2c82e4;
    }
    ctx->pc = 0x2C82DCu;
    SET_GPR_U32(ctx, 31, 0x2C82E4u);
    ctx->pc = 0x2C82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82DCu;
    // 0x2c82e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2C82DCu, 0x2C82E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82E4u;
label_2c82e4:
    // 0x2c82e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c82e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c82e8:
    // 0x2c82e8: 0x12200160  beqz        $s1, . + 4 + (0x160 << 2)
label_2c82ec:
    if (ctx->pc == 0x2C82ECu) {
        ctx->pc = 0x2C82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82E8u;
        // 0x2c82ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82F0u;
        goto label_2c82f0;
    }
    ctx->pc = 0x2C82E8u;
    {
        const bool branch_taken_0x2c82e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82E8u;
        // 0x2c82ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82e8) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C82F0u;
label_2c82f0:
    // 0x2c82f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c82f4:
    // 0x2c82f4: 0xc0a2ab0  jal         func_28AAC0
label_2c82f8:
    if (ctx->pc == 0x2C82F8u) {
        ctx->pc = 0x2C82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82F4u;
        // 0x2c82f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82FCu;
        goto label_2c82fc;
    }
    ctx->pc = 0x2C82F4u;
    SET_GPR_U32(ctx, 31, 0x2C82FCu);
    ctx->pc = 0x2C82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82F4u;
    // 0x2c82f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C82F4u, 0x2C82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82FCu;
label_2c82fc:
    // 0x2c82fc: 0xc0a4e54  jal         func_293950
label_2c8300:
    if (ctx->pc == 0x2C8300u) {
        ctx->pc = 0x2C8304u;
        goto label_2c8304;
    }
    ctx->pc = 0x2C82FCu;
    SET_GPR_U32(ctx, 31, 0x2C8304u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C82FCu, 0x2C8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8304u;
label_2c8304:
    // 0x2c8304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8308:
    // 0x2c8308: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c830c:
    if (ctx->pc == 0x2C830Cu) {
        ctx->pc = 0x2C830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8308u;
        // 0x2c830c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8310u;
        goto label_2c8310;
    }
    ctx->pc = 0x2C8308u;
    {
        const bool branch_taken_0x2c8308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8308u;
        // 0x2c830c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8308) {
            ctx->pc = 0x2C8334u;
            goto label_2c8334;
        }
    }
    ctx->pc = 0x2C8310u;
label_2c8310:
    // 0x2c8310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8314:
    // 0x2c8314: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8318:
    // 0x2c8318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c831c:
    // 0x2c831c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c831cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c8320:
    // 0x2c8320: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c8320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c8324:
    // 0x2c8324: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c8324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8328:
    // 0x2c8328: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8328u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c832c:
    // 0x2c832c: 0xc0b6a3e  jal         func_2DA8F8
label_2c8330:
    if (ctx->pc == 0x2C8330u) {
        ctx->pc = 0x2C8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C832Cu;
        // 0x2c8330: 0x24080066  addiu       $t0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8334u;
        goto label_2c8334;
    }
    ctx->pc = 0x2C832Cu;
    SET_GPR_U32(ctx, 31, 0x2C8334u);
    ctx->pc = 0x2C8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C832Cu;
    // 0x2c8330: 0x24080066  addiu       $t0, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2C832Cu, 0x2C8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8334u;
label_2c8334:
    // 0x2c8334: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c8334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8338:
    // 0x2c8338: 0xc0a35d6  jal         func_28D758
label_2c833c:
    if (ctx->pc == 0x2C833Cu) {
        ctx->pc = 0x2C833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8338u;
        // 0x2c833c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8340u;
        goto label_2c8340;
    }
    ctx->pc = 0x2C8338u;
    SET_GPR_U32(ctx, 31, 0x2C8340u);
    ctx->pc = 0x2C833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8338u;
    // 0x2c833c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C8338u, 0x2C8340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8340u;
label_2c8340:
    // 0x2c8340: 0x1000014a  b           . + 4 + (0x14A << 2)
label_2c8344:
    if (ctx->pc == 0x2C8344u) {
        ctx->pc = 0x2C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8340u;
        // 0x2c8344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8348u;
        goto label_2c8348;
    }
    ctx->pc = 0x2C8340u;
    {
        const bool branch_taken_0x2c8340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8340u;
        // 0x2c8344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8340) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C8348u;
label_2c8348:
    // 0x2c8348: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
label_2c834c:
    if (ctx->pc == 0x2C834Cu) {
        ctx->pc = 0x2C834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8348u;
        // 0x2c834c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8350u;
        goto label_2c8350;
    }
    ctx->pc = 0x2C8348u;
    {
        const bool branch_taken_0x2c8348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8348u;
        // 0x2c834c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8348) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C8350u;
label_2c8350:
    // 0x2c8350: 0x12a00147  beqz        $s5, . + 4 + (0x147 << 2)
label_2c8354:
    if (ctx->pc == 0x2C8354u) {
        ctx->pc = 0x2C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8350u;
        // 0x2c8354: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8358u;
        goto label_2c8358;
    }
    ctx->pc = 0x2C8350u;
    {
        const bool branch_taken_0x2c8350 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8350u;
        // 0x2c8354: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8350) {
            ctx->pc = 0x2C8870u;
            goto label_2c8870;
        }
    }
    ctx->pc = 0x2C8358u;
label_2c8358:
    // 0x2c8358: 0xc08a096  jal         func_228258
label_2c835c:
    if (ctx->pc == 0x2C835Cu) {
        ctx->pc = 0x2C835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8358u;
        // 0x2c835c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8360u;
        goto label_2c8360;
    }
    ctx->pc = 0x2C8358u;
    SET_GPR_U32(ctx, 31, 0x2C8360u);
    ctx->pc = 0x2C835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8358u;
    // 0x2c835c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2C8358u, 0x2C8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8360u;
label_2c8360:
    // 0x2c8360: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
label_2c8364:
    if (ctx->pc == 0x2C8364u) {
        ctx->pc = 0x2C8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8360u;
        // 0x2c8364: 0x26820090  addiu       $v0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8368u;
        goto label_2c8368;
    }
    ctx->pc = 0x2C8360u;
    {
        const bool branch_taken_0x2c8360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8360u;
        // 0x2c8364: 0x26820090  addiu       $v0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8360) {
            ctx->pc = 0x2C8388u;
            goto label_2c8388;
        }
    }
    ctx->pc = 0x2C8368u;
label_2c8368:
    // 0x2c8368: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c8368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c836c:
    // 0x2c836c: 0xa28001b2  sb          $zero, 0x1B2($s4)
    ctx->pc = 0x2c836cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 434), (uint8_t)GPR_U32(ctx, 0));
label_2c8370:
    // 0x2c8370: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2c8370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2c8374:
    // 0x2c8374: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2c8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2c8378:
    // 0x2c8378: 0x60f809  jalr        $v1
label_2c837c:
    if (ctx->pc == 0x2C837Cu) {
        ctx->pc = 0x2C837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8378u;
        // 0x2c837c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8380u;
        goto label_2c8380;
    }
    ctx->pc = 0x2C8378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C8380u);
        ctx->pc = 0x2C837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8378u;
        // 0x2c837c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8378u, 0x2C8380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8380u;
label_2c8380:
    // 0x2c8380: 0x1000013a  b           . + 4 + (0x13A << 2)
label_2c8384:
    if (ctx->pc == 0x2C8384u) {
        ctx->pc = 0x2C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8380u;
        // 0x2c8384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8388u;
        goto label_2c8388;
    }
    ctx->pc = 0x2C8380u;
    {
        const bool branch_taken_0x2c8380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8380u;
        // 0x2c8384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8380) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C8388u;
label_2c8388:
    // 0x2c8388: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c8388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c838c:
    // 0x2c838c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2c838cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2c8390:
    // 0x2c8390: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c8390u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8394:
    // 0x2c8394: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2c8394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2c8398:
    // 0x2c8398: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2c8398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2c839c:
    // 0x2c839c: 0x86a60092  lh          $a2, 0x92($s5)
    ctx->pc = 0x2c839cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c83a0:
    // 0x2c83a0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c83a4:
    // 0x2c83a4: 0x24714b00  addiu       $s1, $v1, 0x4B00
    ctx->pc = 0x2c83a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c83a8:
    // 0x2c83a8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c83ac:
    // 0x2c83ac: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2c83b0:
    // 0x2c83b0: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x2c83b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2c83b4:
    // 0x2c83b4: 0xd1b021  addu        $s6, $a2, $s1
    ctx->pc = 0x2c83b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_2c83b8:
    // 0x2c83b8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2c83b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c83bc:
    // 0x2c83bc: 0xc0cdb38  jal         func_336CE0
label_2c83c0:
    if (ctx->pc == 0x2C83C0u) {
        ctx->pc = 0x2C83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83BCu;
        // 0x2c83c0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83C4u;
        goto label_2c83c4;
    }
    ctx->pc = 0x2C83BCu;
    SET_GPR_U32(ctx, 31, 0x2C83C4u);
    ctx->pc = 0x2C83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C83BCu;
    // 0x2c83c0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C83BCu, 0x2C83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83C4u;
label_2c83c4:
    // 0x2c83c4: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2c83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2c83c8:
    // 0x2c83c8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2c83c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c83cc:
    // 0x2c83cc: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_2c83d0:
    if (ctx->pc == 0x2C83D0u) {
        ctx->pc = 0x2C83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83CCu;
        // 0x2c83d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83D4u;
        goto label_2c83d4;
    }
    ctx->pc = 0x2C83CCu;
    {
        const bool branch_taken_0x2c83cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83CCu;
        // 0x2c83d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83cc) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C83D4u;
label_2c83d4:
    // 0x2c83d4: 0x260207d0  addiu       $v0, $s0, 0x7D0
    ctx->pc = 0x2c83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
label_2c83d8:
    // 0x2c83d8: 0xa2400046  sb          $zero, 0x46($s2)
    ctx->pc = 0x2c83d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 0));
label_2c83dc:
    // 0x2c83dc: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2c83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2c83e0:
    // 0x2c83e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c83e4:
    // 0x2c83e4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2c83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2c83e8:
    // 0x2c83e8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_2c83ec:
    if (ctx->pc == 0x2C83ECu) {
        ctx->pc = 0x2C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E8u;
        // 0x2c83ec: 0x27b00008  addiu       $s0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83F0u;
        goto label_2c83f0;
    }
    ctx->pc = 0x2C83E8u;
    {
        const bool branch_taken_0x2c83e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E8u;
        // 0x2c83ec: 0x27b00008  addiu       $s0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83e8) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C83F0u;
label_2c83f0:
    // 0x2c83f0: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2c83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2c83f4:
    // 0x2c83f4: 0xc05b25e  jal         func_16C978
label_2c83f8:
    if (ctx->pc == 0x2C83F8u) {
        ctx->pc = 0x2C83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83F4u;
        // 0x2c83f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83FCu;
        goto label_2c83fc;
    }
    ctx->pc = 0x2C83F4u;
    SET_GPR_U32(ctx, 31, 0x2C83FCu);
    ctx->pc = 0x2C83F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C83F4u;
    // 0x2c83f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C978u, 0x2C83F4u, 0x2C83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83FCu;
label_2c83fc:
    // 0x2c83fc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_2c8400:
    if (ctx->pc == 0x2C8400u) {
        ctx->pc = 0x2C8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83FCu;
        // 0x2c8400: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8404u;
        goto label_2c8404;
    }
    ctx->pc = 0x2C83FCu;
    {
        const bool branch_taken_0x2c83fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83FCu;
        // 0x2c8400: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83fc) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8404u;
label_2c8404:
    // 0x2c8404: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2c8404u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2c8408:
    // 0x2c8408: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c8408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c840c:
    // 0x2c840c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c840cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8410:
    // 0x2c8410: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c8410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c8414:
    // 0x2c8414: 0xc136d6c  jal         func_4DB5B0
label_2c8418:
    if (ctx->pc == 0x2C8418u) {
        ctx->pc = 0x2C8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8414u;
        // 0x2c8418: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C841Cu;
        goto label_2c841c;
    }
    ctx->pc = 0x2C8414u;
    SET_GPR_U32(ctx, 31, 0x2C841Cu);
    ctx->pc = 0x2C8418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8414u;
    // 0x2c8418: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2C8414u, 0x2C841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C841Cu;
label_2c841c:
    // 0x2c841c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2c841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2c8420:
    // 0x2c8420: 0xc0e409a  jal         func_390268
label_2c8424:
    if (ctx->pc == 0x2C8424u) {
        ctx->pc = 0x2C8424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8420u;
        // 0x2c8424: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8428u;
        goto label_2c8428;
    }
    ctx->pc = 0x2C8420u;
    SET_GPR_U32(ctx, 31, 0x2C8428u);
    ctx->pc = 0x2C8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8420u;
    // 0x2c8424: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C8420u, 0x2C8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8428u;
label_2c8428:
    // 0x2c8428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c8428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c842c:
    // 0x2c842c: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c8430:
    if (ctx->pc == 0x2C8430u) {
        ctx->pc = 0x2C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C842Cu;
        // 0x2c8430: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8434u;
        goto label_2c8434;
    }
    ctx->pc = 0x2C842Cu;
    {
        const bool branch_taken_0x2c842c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C842Cu;
        // 0x2c8430: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c842c) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8434u;
label_2c8434:
    // 0x2c8434: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2c8434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2c8438:
    // 0x2c8438: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c843c:
    // 0x2c843c: 0x0  nop
    ctx->pc = 0x2c843cu;
    // NOP
label_2c8440:
    // 0x2c8440: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8444:
    // 0x2c8444: 0x0  nop
    ctx->pc = 0x2c8444u;
    // NOP
label_2c8448:
    // 0x2c8448: 0x45000045  bc1f        . + 4 + (0x45 << 2)
label_2c844c:
    if (ctx->pc == 0x2C844Cu) {
        ctx->pc = 0x2C8450u;
        goto label_2c8450;
    }
    ctx->pc = 0x2C8448u;
    {
        const bool branch_taken_0x2c8448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8448) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8450u;
label_2c8450:
    // 0x2c8450: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2c8450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8454:
    // 0x2c8454: 0x0  nop
    ctx->pc = 0x2c8454u;
    // NOP
label_2c8458:
    // 0x2c8458: 0x45000041  bc1f        . + 4 + (0x41 << 2)
label_2c845c:
    if (ctx->pc == 0x2C845Cu) {
        ctx->pc = 0x2C8460u;
        goto label_2c8460;
    }
    ctx->pc = 0x2C8458u;
    {
        const bool branch_taken_0x2c8458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8458) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8460u;
label_2c8460:
    // 0x2c8460: 0xc087502  jal         func_21D408
label_2c8464:
    if (ctx->pc == 0x2C8464u) {
        ctx->pc = 0x2C8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8460u;
        // 0x2c8464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8468u;
        goto label_2c8468;
    }
    ctx->pc = 0x2C8460u;
    SET_GPR_U32(ctx, 31, 0x2C8468u);
    ctx->pc = 0x2C8464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8460u;
    // 0x2c8464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C8460u, 0x2C8468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8468u;
label_2c8468:
    // 0x2c8468: 0xc136b80  jal         func_4DAE00
label_2c846c:
    if (ctx->pc == 0x2C846Cu) {
        ctx->pc = 0x2C846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8468u;
        // 0x2c846c: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8470u;
        goto label_2c8470;
    }
    ctx->pc = 0x2C8468u;
    SET_GPR_U32(ctx, 31, 0x2C8470u);
    ctx->pc = 0x2C846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8468u;
    // 0x2c846c: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2C8468u, 0x2C8470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8470u;
label_2c8470:
    // 0x2c8470: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_2c8474:
    if (ctx->pc == 0x2C8474u) {
        ctx->pc = 0x2C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8470u;
        // 0x2c8474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8478u;
        goto label_2c8478;
    }
    ctx->pc = 0x2C8470u;
    {
        const bool branch_taken_0x2c8470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8470u;
        // 0x2c8474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8470) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8478u;
label_2c8478:
    // 0x2c8478: 0xa2530046  sb          $s3, 0x46($s2)
    ctx->pc = 0x2c8478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 19));
label_2c847c:
    // 0x2c847c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8480:
    // 0x2c8480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8484:
    // 0x2c8484: 0xc0888a2  jal         func_222288
label_2c8488:
    if (ctx->pc == 0x2C8488u) {
        ctx->pc = 0x2C8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8484u;
        // 0x2c8488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C848Cu;
        goto label_2c848c;
    }
    ctx->pc = 0x2C8484u;
    SET_GPR_U32(ctx, 31, 0x2C848Cu);
    ctx->pc = 0x2C8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8484u;
    // 0x2c8488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C8484u, 0x2C848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C848Cu;
label_2c848c:
    // 0x2c848c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c848cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8490:
    // 0x2c8490: 0x16130033  bne         $s0, $s3, . + 4 + (0x33 << 2)
label_2c8494:
    if (ctx->pc == 0x2C8494u) {
        ctx->pc = 0x2C8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8490u;
        // 0x2c8494: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8498u;
        goto label_2c8498;
    }
    ctx->pc = 0x2C8490u;
    {
        const bool branch_taken_0x2c8490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8490u;
        // 0x2c8494: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8490) {
            ctx->pc = 0x2C8560u;
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8498u;
label_2c8498:
    // 0x2c8498: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
label_2c849c:
    // 0x2c849c: 0xc043d5e  jal         func_10F578
label_2c84a0:
    if (ctx->pc == 0x2C84A0u) {
        ctx->pc = 0x2C84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C849Cu;
        // 0x2c84a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84A4u;
        goto label_2c84a4;
    }
    ctx->pc = 0x2C849Cu;
    SET_GPR_U32(ctx, 31, 0x2C84A4u);
    ctx->pc = 0x2C84A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C849Cu;
    // 0x2c84a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C849Cu, 0x2C84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84A4u;
label_2c84a4:
    // 0x2c84a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c84a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c84a8:
    // 0x2c84a8: 0x105000f0  beq         $v0, $s0, . + 4 + (0xF0 << 2)
label_2c84ac:
    if (ctx->pc == 0x2C84ACu) {
        ctx->pc = 0x2C84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84A8u;
        // 0x2c84ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84B0u;
        goto label_2c84b0;
    }
    ctx->pc = 0x2C84A8u;
    {
        const bool branch_taken_0x2c84a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84A8u;
        // 0x2c84ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84a8) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C84B0u;
label_2c84b0:
    // 0x2c84b0: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x2c84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_2c84b4:
    // 0x2c84b4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2c84b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2c84b8:
    // 0x2c84b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2c84bc:
    if (ctx->pc == 0x2C84BCu) {
        ctx->pc = 0x2C84C0u;
        goto label_2c84c0;
    }
    ctx->pc = 0x2C84B8u;
    {
        const bool branch_taken_0x2c84b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c84b8) {
            ctx->pc = 0x2C8508u;
            goto label_2c8508;
        }
    }
    ctx->pc = 0x2C84C0u;
label_2c84c0:
    // 0x2c84c0: 0xc0a4e54  jal         func_293950
label_2c84c4:
    if (ctx->pc == 0x2C84C4u) {
        ctx->pc = 0x2C84C8u;
        goto label_2c84c8;
    }
    ctx->pc = 0x2C84C0u;
    SET_GPR_U32(ctx, 31, 0x2C84C8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C84C0u, 0x2C84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84C8u;
label_2c84c8:
    // 0x2c84c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c84c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c84cc:
    // 0x2c84cc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2c84d0:
    if (ctx->pc == 0x2C84D0u) {
        ctx->pc = 0x2C84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84CCu;
        // 0x2c84d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84D4u;
        goto label_2c84d4;
    }
    ctx->pc = 0x2C84CCu;
    {
        const bool branch_taken_0x2c84cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84CCu;
        // 0x2c84d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84cc) {
            ctx->pc = 0x2C84FCu;
            goto label_2c84fc;
        }
    }
    ctx->pc = 0x2C84D4u;
label_2c84d4:
    // 0x2c84d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c84d8:
    // 0x2c84d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c84d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c84dc:
    // 0x2c84dc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2c84dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_2c84e0:
    // 0x2c84e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c84e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c84e4:
    // 0x2c84e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c84e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c84e8:
    // 0x2c84e8: 0x240807d0  addiu       $t0, $zero, 0x7D0
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2c84ec:
    // 0x2c84ec: 0x24090fa0  addiu       $t1, $zero, 0xFA0
    ctx->pc = 0x2c84ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2c84f0:
    // 0x2c84f0: 0x240a1f40  addiu       $t2, $zero, 0x1F40
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
label_2c84f4:
    // 0x2c84f4: 0xc0ad026  jal         func_2B4098
label_2c84f8:
    if (ctx->pc == 0x2C84F8u) {
        ctx->pc = 0x2C84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84F4u;
        // 0x2c84f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84FCu;
        goto label_2c84fc;
    }
    ctx->pc = 0x2C84F4u;
    SET_GPR_U32(ctx, 31, 0x2C84FCu);
    ctx->pc = 0x2C84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C84F4u;
    // 0x2c84f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4098u, 0x2C84F4u, 0x2C84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84FCu;
label_2c84fc:
    // 0x2c84fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8500:
    // 0x2c8500: 0xc0a35d6  jal         func_28D758
label_2c8504:
    if (ctx->pc == 0x2C8504u) {
        ctx->pc = 0x2C8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8500u;
        // 0x2c8504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8508u;
        goto label_2c8508;
    }
    ctx->pc = 0x2C8500u;
    SET_GPR_U32(ctx, 31, 0x2C8508u);
    ctx->pc = 0x2C8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8500u;
    // 0x2c8504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C8500u, 0x2C8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8508u;
label_2c8508:
    // 0x2c8508: 0xc0a367c  jal         func_28D9F0
label_2c850c:
    if (ctx->pc == 0x2C850Cu) {
        ctx->pc = 0x2C850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8508u;
        // 0x2c850c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8510u;
        goto label_2c8510;
    }
    ctx->pc = 0x2C8508u;
    SET_GPR_U32(ctx, 31, 0x2C8510u);
    ctx->pc = 0x2C850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8508u;
    // 0x2c850c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C8508u, 0x2C8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8510u;
label_2c8510:
    // 0x2c8510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8514:
    // 0x2c8514: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c8518:
    if (ctx->pc == 0x2C8518u) {
        ctx->pc = 0x2C8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8514u;
        // 0x2c8518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C851Cu;
        goto label_2c851c;
    }
    ctx->pc = 0x2C8514u;
    {
        const bool branch_taken_0x2c8514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8514u;
        // 0x2c8518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8514) {
            ctx->pc = 0x2C8540u;
            goto label_2c8540;
        }
    }
    ctx->pc = 0x2C851Cu;
label_2c851c:
    // 0x2c851c: 0xc0884f6  jal         func_2213D8
label_2c8520:
    if (ctx->pc == 0x2C8520u) {
        ctx->pc = 0x2C8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C851Cu;
        // 0x2c8520: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8524u;
        goto label_2c8524;
    }
    ctx->pc = 0x2C851Cu;
    SET_GPR_U32(ctx, 31, 0x2C8524u);
    ctx->pc = 0x2C8520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C851Cu;
    // 0x2c8520: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C851Cu, 0x2C8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8524u;
label_2c8524:
    // 0x2c8524: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8528:
    // 0x2c8528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c852c:
    // 0x2c852c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c852cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c8530:
    // 0x2c8530: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c8530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c8534:
    // 0x2c8534: 0xc0bf800  jal         func_2FE000
label_2c8538:
    if (ctx->pc == 0x2C8538u) {
        ctx->pc = 0x2C8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8534u;
        // 0x2c8538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C853Cu;
        goto label_2c853c;
    }
    ctx->pc = 0x2C8534u;
    SET_GPR_U32(ctx, 31, 0x2C853Cu);
    ctx->pc = 0x2C8538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8534u;
    // 0x2c8538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C8534u, 0x2C853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C853Cu;
label_2c853c:
    // 0x2c853c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c8540:
    // 0x2c8540: 0xc0b1c56  jal         func_2C7158
label_2c8544:
    if (ctx->pc == 0x2C8544u) {
        ctx->pc = 0x2C8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8540u;
        // 0x2c8544: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8548u;
        goto label_2c8548;
    }
    ctx->pc = 0x2C8540u;
    SET_GPR_U32(ctx, 31, 0x2C8548u);
    ctx->pc = 0x2C8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8540u;
    // 0x2c8544: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7158u, 0x2C8540u, 0x2C8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8548u;
label_2c8548:
    // 0x2c8548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c854c:
    // 0x2c854c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2c8550:
    // 0x2c8550: 0xc0b1c92  jal         func_2C7248
label_2c8554:
    if (ctx->pc == 0x2C8554u) {
        ctx->pc = 0x2C8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8550u;
        // 0x2c8554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8558u;
        goto label_2c8558;
    }
    ctx->pc = 0x2C8550u;
    SET_GPR_U32(ctx, 31, 0x2C8558u);
    ctx->pc = 0x2C8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8550u;
    // 0x2c8554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C8550u, 0x2C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8558u;
label_2c8558:
    // 0x2c8558: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_2c855c:
    if (ctx->pc == 0x2C855Cu) {
        ctx->pc = 0x2C855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8558u;
        // 0x2c855c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8560u;
        goto label_2c8560;
    }
    ctx->pc = 0x2C8558u;
    {
        const bool branch_taken_0x2c8558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8558u;
        // 0x2c855c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8558) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C8560u;
label_2c8560:
    // 0x2c8560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c8564:
    // 0x2c8564: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c8564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c8568:
    // 0x2c8568: 0x0  nop
    ctx->pc = 0x2c8568u;
    // NOP
label_2c856c:
    // 0x2c856c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2c856cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8570:
    // 0x2c8570: 0x0  nop
    ctx->pc = 0x2c8570u;
    // NOP
label_2c8574:
    // 0x2c8574: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_2c8578:
    if (ctx->pc == 0x2C8578u) {
        ctx->pc = 0x2C8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8574u;
        // 0x2c8578: 0x86e40002  lh          $a0, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C857Cu;
        goto label_2c857c;
    }
    ctx->pc = 0x2C8574u;
    {
        const bool branch_taken_0x2c8574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8574) {
            ctx->pc = 0x2C8578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8574u;
            // 0x2c8578: 0x86e40002  lh          $a0, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C85D0u;
            goto label_2c85d0;
        }
    }
    ctx->pc = 0x2C857Cu;
label_2c857c:
    // 0x2c857c: 0xc0899ae  jal         func_2266B8
label_2c8580:
    if (ctx->pc == 0x2C8580u) {
        ctx->pc = 0x2C8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C857Cu;
        // 0x2c8580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8584u;
        goto label_2c8584;
    }
    ctx->pc = 0x2C857Cu;
    SET_GPR_U32(ctx, 31, 0x2C8584u);
    ctx->pc = 0x2C8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C857Cu;
    // 0x2c8580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2C857Cu, 0x2C8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8584u;
label_2c8584:
    // 0x2c8584: 0x3842029c  xori        $v0, $v0, 0x29C
    ctx->pc = 0x2c8584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)668);
label_2c8588:
    // 0x2c8588: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2c858c:
    if (ctx->pc == 0x2C858Cu) {
        ctx->pc = 0x2C858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8588u;
        // 0x2c858c: 0x86e40002  lh          $a0, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8590u;
        goto label_2c8590;
    }
    ctx->pc = 0x2C8588u;
    {
        const bool branch_taken_0x2c8588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8588) {
            ctx->pc = 0x2C858Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8588u;
            // 0x2c858c: 0x86e40002  lh          $a0, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C85D0u;
            goto label_2c85d0;
        }
    }
    ctx->pc = 0x2C8590u;
label_2c8590:
    // 0x2c8590: 0xc0a367c  jal         func_28D9F0
label_2c8594:
    if (ctx->pc == 0x2C8594u) {
        ctx->pc = 0x2C8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8590u;
        // 0x2c8594: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8598u;
        goto label_2c8598;
    }
    ctx->pc = 0x2C8590u;
    SET_GPR_U32(ctx, 31, 0x2C8598u);
    ctx->pc = 0x2C8594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8590u;
    // 0x2c8594: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C8590u, 0x2C8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8598u;
label_2c8598:
    // 0x2c8598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c859c:
    // 0x2c859c: 0x108000b2  beqz        $a0, . + 4 + (0xB2 << 2)
label_2c85a0:
    if (ctx->pc == 0x2C85A0u) {
        ctx->pc = 0x2C85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C859Cu;
        // 0x2c85a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85A4u;
        goto label_2c85a4;
    }
    ctx->pc = 0x2C859Cu;
    {
        const bool branch_taken_0x2c859c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C859Cu;
        // 0x2c85a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c859c) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C85A4u;
label_2c85a4:
    // 0x2c85a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c85a8:
    // 0x2c85a8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c85a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c85ac:
    // 0x2c85ac: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2c85acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c85b0:
    // 0x2c85b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c85b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c85b4:
    // 0x2c85b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c85b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c85b8:
    // 0x2c85b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c85b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c85bc:
    // 0x2c85bc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2c85bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c85c0:
    // 0x2c85c0: 0xc0bee7a  jal         func_2FB9E8
label_2c85c4:
    if (ctx->pc == 0x2C85C4u) {
        ctx->pc = 0x2C85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C0u;
        // 0x2c85c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85C8u;
        goto label_2c85c8;
    }
    ctx->pc = 0x2C85C0u;
    SET_GPR_U32(ctx, 31, 0x2C85C8u);
    ctx->pc = 0x2C85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85C0u;
    // 0x2c85c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C85C0u, 0x2C85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85C8u;
label_2c85c8:
    // 0x2c85c8: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_2c85cc:
    if (ctx->pc == 0x2C85CCu) {
        ctx->pc = 0x2C85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C8u;
        // 0x2c85cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85D0u;
        goto label_2c85d0;
    }
    ctx->pc = 0x2C85C8u;
    {
        const bool branch_taken_0x2c85c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C8u;
        // 0x2c85cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85c8) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C85D0u;
label_2c85d0:
    // 0x2c85d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c85d4:
    // 0x2c85d4: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c85d8:
    // 0x2c85d8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c85dc:
    // 0x2c85dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c85e0:
    // 0x2c85e0: 0xc0cd7d2  jal         func_335F48
label_2c85e4:
    if (ctx->pc == 0x2C85E4u) {
        ctx->pc = 0x2C85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85E0u;
        // 0x2c85e4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85E8u;
        goto label_2c85e8;
    }
    ctx->pc = 0x2C85E0u;
    SET_GPR_U32(ctx, 31, 0x2C85E8u);
    ctx->pc = 0x2C85E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85E0u;
    // 0x2c85e4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2C85E0u, 0x2C85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85E8u;
label_2c85e8:
    // 0x2c85e8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2c85ec:
    // 0x2c85ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c85ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c85f0:
    // 0x2c85f0: 0xc0cd780  jal         func_335E00
label_2c85f4:
    if (ctx->pc == 0x2C85F4u) {
        ctx->pc = 0x2C85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85F0u;
        // 0x2c85f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85F8u;
        goto label_2c85f8;
    }
    ctx->pc = 0x2C85F0u;
    SET_GPR_U32(ctx, 31, 0x2C85F8u);
    ctx->pc = 0x2C85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85F0u;
    // 0x2c85f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2C85F0u, 0x2C85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85F8u;
label_2c85f8:
    // 0x2c85f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c85f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c85fc:
    // 0x2c85fc: 0xc0cd742  jal         func_335D08
label_2c8600:
    if (ctx->pc == 0x2C8600u) {
        ctx->pc = 0x2C8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85FCu;
        // 0x2c8600: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8604u;
        goto label_2c8604;
    }
    ctx->pc = 0x2C85FCu;
    SET_GPR_U32(ctx, 31, 0x2C8604u);
    ctx->pc = 0x2C8600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85FCu;
    // 0x2c8600: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2C85FCu, 0x2C8604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8604u;
label_2c8604:
    // 0x2c8604: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c8604u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c8608:
    // 0x2c8608: 0xc0cdd2e  jal         func_3374B8
label_2c860c:
    if (ctx->pc == 0x2C860Cu) {
        ctx->pc = 0x2C860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8608u;
        // 0x2c860c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8610u;
        goto label_2c8610;
    }
    ctx->pc = 0x2C8608u;
    SET_GPR_U32(ctx, 31, 0x2C8610u);
    ctx->pc = 0x2C860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8608u;
    // 0x2c860c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2C8608u, 0x2C8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8610u;
label_2c8610:
    // 0x2c8610: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2c8610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2c8614:
    // 0x2c8614: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c8614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2c8618:
    // 0x2c8618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c861c:
    // 0x2c861c: 0x0  nop
    ctx->pc = 0x2c861cu;
    // NOP
label_2c8620:
    // 0x2c8620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8624:
    // 0x2c8624: 0x0  nop
    ctx->pc = 0x2c8624u;
    // NOP
label_2c8628:
    // 0x2c8628: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
label_2c862c:
    if (ctx->pc == 0x2C862Cu) {
        ctx->pc = 0x2C862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8628u;
        // 0x2c862c: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8630u;
        goto label_2c8630;
    }
    ctx->pc = 0x2C8628u;
    {
        const bool branch_taken_0x2c8628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8628) {
            ctx->pc = 0x2C862Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8628u;
            // 0x2c862c: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86A4u;
            goto label_2c86a4;
        }
    }
    ctx->pc = 0x2C8630u;
label_2c8630:
    // 0x2c8630: 0x9242003d  lbu         $v0, 0x3D($s2)
    ctx->pc = 0x2c8630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
label_2c8634:
    // 0x2c8634: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2c8638:
    if (ctx->pc == 0x2C8638u) {
        ctx->pc = 0x2C863Cu;
        goto label_2c863c;
    }
    ctx->pc = 0x2C8634u;
    {
        const bool branch_taken_0x2c8634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8634) {
            ctx->pc = 0x2C8668u;
            goto label_2c8668;
        }
    }
    ctx->pc = 0x2C863Cu;
label_2c863c:
    // 0x2c863c: 0x8ea201a8  lw          $v0, 0x1A8($s5)
    ctx->pc = 0x2c863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
label_2c8640:
    // 0x2c8640: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2c8644:
    if (ctx->pc == 0x2C8644u) {
        ctx->pc = 0x2C8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8640u;
        // 0x2c8644: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8648u;
        goto label_2c8648;
    }
    ctx->pc = 0x2C8640u;
    {
        const bool branch_taken_0x2c8640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8640) {
            ctx->pc = 0x2C8644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8640u;
            // 0x2c8644: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86A4u;
            goto label_2c86a4;
        }
    }
    ctx->pc = 0x2C8648u;
label_2c8648:
    // 0x2c8648: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c864c:
    // 0x2c864c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c864cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2c8650:
    // 0x2c8650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c8654:
    // 0x2c8654: 0x0  nop
    ctx->pc = 0x2c8654u;
    // NOP
label_2c8658:
    // 0x2c8658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c865c:
    // 0x2c865c: 0x0  nop
    ctx->pc = 0x2c865cu;
    // NOP
label_2c8660:
    // 0x2c8660: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2c8664:
    if (ctx->pc == 0x2C8664u) {
        ctx->pc = 0x2C8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8660u;
        // 0x2c8664: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8668u;
        goto label_2c8668;
    }
    ctx->pc = 0x2C8660u;
    {
        const bool branch_taken_0x2c8660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8660) {
            ctx->pc = 0x2C8664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8660u;
            // 0x2c8664: 0x8e820178  lw          $v0, 0x178($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86A4u;
            goto label_2c86a4;
        }
    }
    ctx->pc = 0x2C8668u;
label_2c8668:
    // 0x2c8668: 0xc0a367c  jal         func_28D9F0
label_2c866c:
    if (ctx->pc == 0x2C866Cu) {
        ctx->pc = 0x2C866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8668u;
        // 0x2c866c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8670u;
        goto label_2c8670;
    }
    ctx->pc = 0x2C8668u;
    SET_GPR_U32(ctx, 31, 0x2C8670u);
    ctx->pc = 0x2C866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8668u;
    // 0x2c866c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C8668u, 0x2C8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8670u;
label_2c8670:
    // 0x2c8670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8674:
    // 0x2c8674: 0x1200007d  beqz        $s0, . + 4 + (0x7D << 2)
label_2c8678:
    if (ctx->pc == 0x2C8678u) {
        ctx->pc = 0x2C8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8674u;
        // 0x2c8678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C867Cu;
        goto label_2c867c;
    }
    ctx->pc = 0x2C8674u;
    {
        const bool branch_taken_0x2c8674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8674u;
        // 0x2c8678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8674) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C867Cu;
label_2c867c:
    // 0x2c867c: 0xc0884f6  jal         func_2213D8
label_2c8680:
    if (ctx->pc == 0x2C8680u) {
        ctx->pc = 0x2C8680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C867Cu;
        // 0x2c8680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8684u;
        goto label_2c8684;
    }
    ctx->pc = 0x2C867Cu;
    SET_GPR_U32(ctx, 31, 0x2C8684u);
    ctx->pc = 0x2C8680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C867Cu;
    // 0x2c8680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C867Cu, 0x2C8684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8684u;
label_2c8684:
    // 0x2c8684: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8688:
    // 0x2c8688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c868c:
    // 0x2c868c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c868cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c8690:
    // 0x2c8690: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c8690u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c8694:
    // 0x2c8694: 0xc0bf800  jal         func_2FE000
label_2c8698:
    if (ctx->pc == 0x2C8698u) {
        ctx->pc = 0x2C8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8694u;
        // 0x2c8698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C869Cu;
        goto label_2c869c;
    }
    ctx->pc = 0x2C8694u;
    SET_GPR_U32(ctx, 31, 0x2C869Cu);
    ctx->pc = 0x2C8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8694u;
    // 0x2c8698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C8694u, 0x2C869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C869Cu;
label_2c869c:
    // 0x2c869c: 0x10000073  b           . + 4 + (0x73 << 2)
label_2c86a0:
    if (ctx->pc == 0x2C86A0u) {
        ctx->pc = 0x2C86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C869Cu;
        // 0x2c86a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86A4u;
        goto label_2c86a4;
    }
    ctx->pc = 0x2C869Cu;
    {
        const bool branch_taken_0x2c869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C869Cu;
        // 0x2c86a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c869c) {
            ctx->pc = 0x2C886Cu;
            goto label_2c886c;
        }
    }
    ctx->pc = 0x2C86A4u;
label_2c86a4:
    // 0x2c86a4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2c86a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2c86a8:
    // 0x2c86a8: 0xc043d5e  jal         func_10F578
label_2c86ac:
    if (ctx->pc == 0x2C86ACu) {
        ctx->pc = 0x2C86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86A8u;
        // 0x2c86ac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86B0u;
        goto label_2c86b0;
    }
    ctx->pc = 0x2C86A8u;
    SET_GPR_U32(ctx, 31, 0x2C86B0u);
    ctx->pc = 0x2C86ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C86A8u;
    // 0x2c86ac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C86A8u, 0x2C86B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86B0u;
label_2c86b0:
    // 0x2c86b0: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_2c86b4:
    if (ctx->pc == 0x2C86B4u) {
        ctx->pc = 0x2C86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86B0u;
        // 0x2c86b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86B8u;
        goto label_2c86b8;
    }
    ctx->pc = 0x2C86B0u;
    {
        const bool branch_taken_0x2c86b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86B0u;
        // 0x2c86b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86b0) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C86B8u;
label_2c86b8:
    // 0x2c86b8: 0x8e530024  lw          $s3, 0x24($s2)
    ctx->pc = 0x2c86b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2c86bc:
    // 0x2c86bc: 0x56630029  bnel        $s3, $v1, . + 4 + (0x29 << 2)
label_2c86c0:
    if (ctx->pc == 0x2C86C0u) {
        ctx->pc = 0x2C86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86BCu;
        // 0x2c86c0: 0x9242003d  lbu         $v0, 0x3D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86C4u;
        goto label_2c86c4;
    }
    ctx->pc = 0x2C86BCu;
    {
        const bool branch_taken_0x2c86bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c86bc) {
            ctx->pc = 0x2C86C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86BCu;
            // 0x2c86c0: 0x9242003d  lbu         $v0, 0x3D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8764u;
            goto label_2c8764;
        }
    }
    ctx->pc = 0x2C86C4u;
label_2c86c4:
    // 0x2c86c4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c86c8:
    // 0x2c86c8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2c86c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2c86cc:
    // 0x2c86cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c86ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c86d0:
    // 0x2c86d0: 0x0  nop
    ctx->pc = 0x2c86d0u;
    // NOP
label_2c86d4:
    // 0x2c86d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c86d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c86d8:
    // 0x2c86d8: 0x0  nop
    ctx->pc = 0x2c86d8u;
    // NOP
label_2c86dc:
    // 0x2c86dc: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2c86e0:
    if (ctx->pc == 0x2C86E0u) {
        ctx->pc = 0x2C86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86DCu;
        // 0x2c86e0: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86E4u;
        goto label_2c86e4;
    }
    ctx->pc = 0x2C86DCu;
    {
        const bool branch_taken_0x2c86dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86DCu;
        // 0x2c86e0: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86dc) {
            ctx->pc = 0x2C8760u;
            goto label_2c8760;
        }
    }
    ctx->pc = 0x2C86E4u;
label_2c86e4:
    // 0x2c86e4: 0x8ea20178  lw          $v0, 0x178($s5)
    ctx->pc = 0x2c86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_2c86e8:
    // 0x2c86e8: 0xc043d5e  jal         func_10F578
label_2c86ec:
    if (ctx->pc == 0x2C86ECu) {
        ctx->pc = 0x2C86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E8u;
        // 0x2c86ec: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86F0u;
        goto label_2c86f0;
    }
    ctx->pc = 0x2C86E8u;
    SET_GPR_U32(ctx, 31, 0x2C86F0u);
    ctx->pc = 0x2C86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C86E8u;
    // 0x2c86ec: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C86E8u, 0x2C86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86F0u;
label_2c86f0:
    // 0x2c86f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c86f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c86f4:
    // 0x2c86f4: 0x1053005c  beq         $v0, $s3, . + 4 + (0x5C << 2)
label_2c86f8:
    if (ctx->pc == 0x2C86F8u) {
        ctx->pc = 0x2C86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86F4u;
        // 0x2c86f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86FCu;
        goto label_2c86fc;
    }
    ctx->pc = 0x2C86F4u;
    {
        const bool branch_taken_0x2c86f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86F4u;
        // 0x2c86f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86f4) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C86FCu;
label_2c86fc:
    // 0x2c86fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c86fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8700:
    // 0x2c8700: 0xc0b1c92  jal         func_2C7248
label_2c8704:
    if (ctx->pc == 0x2C8704u) {
        ctx->pc = 0x2C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8700u;
        // 0x2c8704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8708u;
        goto label_2c8708;
    }
    ctx->pc = 0x2C8700u;
    SET_GPR_U32(ctx, 31, 0x2C8708u);
    ctx->pc = 0x2C8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8700u;
    // 0x2c8704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C8700u, 0x2C8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8708u;
label_2c8708:
    // 0x2c8708: 0xa29301b2  sb          $s3, 0x1B2($s4)
    ctx->pc = 0x2c8708u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 434), (uint8_t)GPR_U32(ctx, 19));
label_2c870c:
    // 0x2c870c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c870cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c8710:
    // 0x2c8710: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2c8710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c8714:
    // 0x2c8714: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x2c8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
label_2c8718:
    // 0x2c8718: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c8718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c871c:
    // 0x2c871c: 0x86110120  lh          $s1, 0x120($s0)
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
label_2c8720:
    // 0x2c8720: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c8720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c8724:
    // 0x2c8724: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x2c8724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2c8728:
    // 0x2c8728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c872c:
    // 0x2c872c: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2c8730:
    // 0x2c8730: 0xc067b9c  jal         func_19EE70
label_2c8734:
    if (ctx->pc == 0x2C8734u) {
        ctx->pc = 0x2C8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8730u;
        // 0x2c8734: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8738u;
        goto label_2c8738;
    }
    ctx->pc = 0x2C8730u;
    SET_GPR_U32(ctx, 31, 0x2C8738u);
    ctx->pc = 0x2C8734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8730u;
    // 0x2c8734: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2C8730u, 0x2C8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8738u;
label_2c8738:
    // 0x2c8738: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c8738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c873c:
    // 0x2c873c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c873cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8740:
    // 0x2c8740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8744:
    // 0x2c8744: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c8744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8748:
    // 0x2c8748: 0x60f809  jalr        $v1
label_2c874c:
    if (ctx->pc == 0x2C874Cu) {
        ctx->pc = 0x2C874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8748u;
        // 0x2c874c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8750u;
        goto label_2c8750;
    }
    ctx->pc = 0x2C8748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C8750u);
        ctx->pc = 0x2C874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8748u;
        // 0x2c874c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8748u, 0x2C8750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8750u;
label_2c8750:
    // 0x2c8750: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c8754:
    // 0x2c8754: 0xa2530042  sb          $s3, 0x42($s2)
    ctx->pc = 0x2c8754u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 19));
label_2c8758:
    // 0x2c8758: 0x10000043  b           . + 4 + (0x43 << 2)
label_2c875c:
    if (ctx->pc == 0x2C875Cu) {
        ctx->pc = 0x2C875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8758u;
        // 0x2c875c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8760u;
        goto label_2c8760;
    }
    ctx->pc = 0x2C8758u;
    {
        const bool branch_taken_0x2c8758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8758u;
        // 0x2c875c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8758) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C8760u;
label_2c8760:
    // 0x2c8760: 0x9242003d  lbu         $v0, 0x3D($s2)
    ctx->pc = 0x2c8760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
label_2c8764:
    // 0x2c8764: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_2c8768:
    if (ctx->pc == 0x2C8768u) {
        ctx->pc = 0x2C8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8764u;
        // 0x2c8768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C876Cu;
        goto label_2c876c;
    }
    ctx->pc = 0x2C8764u;
    {
        const bool branch_taken_0x2c8764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8764u;
        // 0x2c8768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8764) {
            ctx->pc = 0x2C8820u;
            goto label_2c8820;
        }
    }
    ctx->pc = 0x2C876Cu;
label_2c876c:
    // 0x2c876c: 0xc0a367c  jal         func_28D9F0
label_2c8770:
    if (ctx->pc == 0x2C8770u) {
        ctx->pc = 0x2C8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C876Cu;
        // 0x2c8770: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8774u;
        goto label_2c8774;
    }
    ctx->pc = 0x2C876Cu;
    SET_GPR_U32(ctx, 31, 0x2C8774u);
    ctx->pc = 0x2C8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C876Cu;
    // 0x2c8770: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C876Cu, 0x2C8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8774u;
label_2c8774:
    // 0x2c8774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8778:
    // 0x2c8778: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c877c:
    if (ctx->pc == 0x2C877Cu) {
        ctx->pc = 0x2C877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8778u;
        // 0x2c877c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8780u;
        goto label_2c8780;
    }
    ctx->pc = 0x2C8778u;
    {
        const bool branch_taken_0x2c8778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8778u;
        // 0x2c877c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8778) {
            ctx->pc = 0x2C87A4u;
            goto label_2c87a4;
        }
    }
    ctx->pc = 0x2C8780u;
label_2c8780:
    // 0x2c8780: 0xc0884f6  jal         func_2213D8
label_2c8784:
    if (ctx->pc == 0x2C8784u) {
        ctx->pc = 0x2C8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8780u;
        // 0x2c8784: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8788u;
        goto label_2c8788;
    }
    ctx->pc = 0x2C8780u;
    SET_GPR_U32(ctx, 31, 0x2C8788u);
    ctx->pc = 0x2C8784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8780u;
    // 0x2c8784: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C8780u, 0x2C8788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8788u;
label_2c8788:
    // 0x2c8788: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c878c:
    // 0x2c878c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8790:
    // 0x2c8790: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c8790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c8794:
    // 0x2c8794: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c8794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c8798:
    // 0x2c8798: 0xc0bf800  jal         func_2FE000
label_2c879c:
    if (ctx->pc == 0x2C879Cu) {
        ctx->pc = 0x2C879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8798u;
        // 0x2c879c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C87A0u;
        goto label_2c87a0;
    }
    ctx->pc = 0x2C8798u;
    SET_GPR_U32(ctx, 31, 0x2C87A0u);
    ctx->pc = 0x2C879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8798u;
    // 0x2c879c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C8798u, 0x2C87A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87A0u;
label_2c87a0:
    // 0x2c87a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c87a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c87a4:
    // 0x2c87a4: 0xc0b1c56  jal         func_2C7158
label_2c87a8:
    if (ctx->pc == 0x2C87A8u) {
        ctx->pc = 0x2C87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87A4u;
        // 0x2c87a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C87ACu;
        goto label_2c87ac;
    }
    ctx->pc = 0x2C87A4u;
    SET_GPR_U32(ctx, 31, 0x2C87ACu);
    ctx->pc = 0x2C87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87A4u;
    // 0x2c87a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7158u, 0x2C87A4u, 0x2C87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87ACu;
label_2c87ac:
    // 0x2c87ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c87acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c87b0:
    // 0x2c87b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c87b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c87b4:
    // 0x2c87b4: 0xc0b1c92  jal         func_2C7248
label_2c87b8:
    if (ctx->pc == 0x2C87B8u) {
        ctx->pc = 0x2C87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87B4u;
        // 0x2c87b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C87BCu;
        goto label_2c87bc;
    }
    ctx->pc = 0x2C87B4u;
    SET_GPR_U32(ctx, 31, 0x2C87BCu);
    ctx->pc = 0x2C87B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87B4u;
    // 0x2c87b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C87B4u, 0x2C87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87BCu;
label_2c87bc:
    // 0x2c87bc: 0x9243003c  lbu         $v1, 0x3C($s2)
    ctx->pc = 0x2c87bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_2c87c0:
    // 0x2c87c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c87c4:
    // 0x2c87c4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2c87c8:
    if (ctx->pc == 0x2C87C8u) {
        ctx->pc = 0x2C87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87C4u;
        // 0x2c87c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C87CCu;
        goto label_2c87cc;
    }
    ctx->pc = 0x2C87C4u;
    {
        const bool branch_taken_0x2c87c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87C4u;
        // 0x2c87c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87c4) {
            ctx->pc = 0x2C8810u;
            goto label_2c8810;
        }
    }
    ctx->pc = 0x2C87CCu;
label_2c87cc:
    // 0x2c87cc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c87d0:
    // 0x2c87d0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2c87d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2c87d4:
    // 0x2c87d4: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x2c87d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_2c87d8:
    // 0x2c87d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c87dc:
    // 0x2c87dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c87e0:
    // 0x2c87e0: 0x40f809  jalr        $v0
label_2c87e4:
    if (ctx->pc == 0x2C87E4u) {
        ctx->pc = 0x2C87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87E0u;
        // 0x2c87e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C87E8u;
        goto label_2c87e8;
    }
    ctx->pc = 0x2C87E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C87E8u);
        ctx->pc = 0x2C87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87E0u;
        // 0x2c87e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87E0u, 0x2C87E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C87E8u;
label_2c87e8:
    // 0x2c87e8: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x2c87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
label_2c87ec:
    // 0x2c87ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c87ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c87f0:
    // 0x2c87f0: 0xc071462  jal         func_1C5188
label_2c87f4:
    if (ctx->pc == 0x2C87F4u) {
        ctx->pc = 0x2C87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87F0u;
        // 0x2c87f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C87F8u;
        goto label_2c87f8;
    }
    ctx->pc = 0x2C87F0u;
    SET_GPR_U32(ctx, 31, 0x2C87F8u);
    ctx->pc = 0x2C87F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87F0u;
    // 0x2c87f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2C87F0u, 0x2C87F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87F8u;
label_2c87f8:
    // 0x2c87f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c87f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2c87fc:
    // 0x2c87fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c8800:
    if (ctx->pc == 0x2C8800u) {
        ctx->pc = 0x2C8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87FCu;
        // 0x2c8800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8804u;
        goto label_2c8804;
    }
    ctx->pc = 0x2C87FCu;
    {
        const bool branch_taken_0x2c87fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87FCu;
        // 0x2c8800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87fc) {
            ctx->pc = 0x2C8810u;
            goto label_2c8810;
        }
    }
    ctx->pc = 0x2C8804u;
label_2c8804:
    // 0x2c8804: 0xc0b1fb8  jal         func_2C7EE0
label_2c8808:
    if (ctx->pc == 0x2C8808u) {
        ctx->pc = 0x2C8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8804u;
        // 0x2c8808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C880Cu;
        goto label_2c880c;
    }
    ctx->pc = 0x2C8804u;
    SET_GPR_U32(ctx, 31, 0x2C880Cu);
    ctx->pc = 0x2C8808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8804u;
    // 0x2c8808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EE0u, 0x2C8804u, 0x2C880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C880Cu;
label_2c880c:
    // 0x2c880c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8810:
    // 0x2c8810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8814:
    // 0x2c8814: 0xa242003d  sb          $v0, 0x3D($s2)
    ctx->pc = 0x2c8814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 2));
label_2c8818:
    // 0x2c8818: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x2c8818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_2c881c:
    // 0x2c881c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8820:
    // 0x2c8820: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c8820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c8824:
    // 0x2c8824: 0xa28201b2  sb          $v0, 0x1B2($s4)
    ctx->pc = 0x2c8824u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 434), (uint8_t)GPR_U32(ctx, 2));
label_2c8828:
    // 0x2c8828: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c8828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c882c:
    // 0x2c882c: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x2c882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
label_2c8830:
    // 0x2c8830: 0x24910120  addiu       $s1, $a0, 0x120
    ctx->pc = 0x2c8830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_2c8834:
    // 0x2c8834: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c8838:
    // 0x2c8838: 0x84900120  lh          $s0, 0x120($a0)
    ctx->pc = 0x2c8838u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
label_2c883c:
    // 0x2c883c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c883cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c8840:
    // 0x2c8840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8844:
    // 0x2c8844: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2c8844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2c8848:
    // 0x2c8848: 0xc067b9c  jal         func_19EE70
label_2c884c:
    if (ctx->pc == 0x2C884Cu) {
        ctx->pc = 0x2C884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8848u;
        // 0x2c884c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8850u;
        goto label_2c8850;
    }
    ctx->pc = 0x2C8848u;
    SET_GPR_U32(ctx, 31, 0x2C8850u);
    ctx->pc = 0x2C884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8848u;
    // 0x2c884c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2C8848u, 0x2C8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8850u;
label_2c8850:
    // 0x2c8850: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c8850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c8854:
    // 0x2c8854: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8858:
    // 0x2c8858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c885c:
    // 0x2c885c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8860:
    // 0x2c8860: 0x60f809  jalr        $v1
label_2c8864:
    if (ctx->pc == 0x2C8864u) {
        ctx->pc = 0x2C8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8860u;
        // 0x2c8864: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8868u;
        goto label_2c8868;
    }
    ctx->pc = 0x2C8860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C8868u);
        ctx->pc = 0x2C8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8860u;
        // 0x2c8864: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8860u, 0x2C8868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8868u;
label_2c8868:
    // 0x2c8868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c886c:
    // 0x2c886c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2c886cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c8870:
    // 0x2c8870: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2c8870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c8874:
    // 0x2c8874: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2c8874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c8878:
    // 0x2c8878: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2c8878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c887c:
    // 0x2c887c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2c887cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c8880:
    // 0x2c8880: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2c8880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c8884:
    // 0x2c8884: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c8884u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c8888:
    // 0x2c8888: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2c8888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c888c:
    // 0x2c888c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2c888cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8890:
    // 0x2c8890: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c8890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8894:
    // 0x2c8894: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2c8894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c8898:
    // 0x2c8898: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c8898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c889c:
    // 0x2c889c: 0x3e00008  jr          $ra
label_2c88a0:
    if (ctx->pc == 0x2C88A0u) {
        ctx->pc = 0x2C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C889Cu;
        // 0x2c88a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88A4u;
        goto label_2c88a4;
    }
    ctx->pc = 0x2C889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C889Cu;
        // 0x2c88a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C889Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C88A4u;
label_2c88a4:
    // 0x2c88a4: 0x0  nop
    ctx->pc = 0x2c88a4u;
    // NOP
    ctx->pc = 0x2c88a8u;
}
