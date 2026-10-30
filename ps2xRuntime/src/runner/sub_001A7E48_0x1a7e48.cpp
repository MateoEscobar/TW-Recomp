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

// Function: sub_001A7E48
// Address: 0x1a7e48 - 0x1a8530
void sub_001A7E48_0x1a7e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7E48_0x1a7e48");
#endif

    switch (ctx->pc) {
        case 0x1a7e48u: goto label_1a7e48;
        case 0x1a7e4cu: goto label_1a7e4c;
        case 0x1a7e50u: goto label_1a7e50;
        case 0x1a7e54u: goto label_1a7e54;
        case 0x1a7e58u: goto label_1a7e58;
        case 0x1a7e5cu: goto label_1a7e5c;
        case 0x1a7e60u: goto label_1a7e60;
        case 0x1a7e64u: goto label_1a7e64;
        case 0x1a7e68u: goto label_1a7e68;
        case 0x1a7e6cu: goto label_1a7e6c;
        case 0x1a7e70u: goto label_1a7e70;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e78u: goto label_1a7e78;
        case 0x1a7e7cu: goto label_1a7e7c;
        case 0x1a7e80u: goto label_1a7e80;
        case 0x1a7e84u: goto label_1a7e84;
        case 0x1a7e88u: goto label_1a7e88;
        case 0x1a7e8cu: goto label_1a7e8c;
        case 0x1a7e90u: goto label_1a7e90;
        case 0x1a7e94u: goto label_1a7e94;
        case 0x1a7e98u: goto label_1a7e98;
        case 0x1a7e9cu: goto label_1a7e9c;
        case 0x1a7ea0u: goto label_1a7ea0;
        case 0x1a7ea4u: goto label_1a7ea4;
        case 0x1a7ea8u: goto label_1a7ea8;
        case 0x1a7eacu: goto label_1a7eac;
        case 0x1a7eb0u: goto label_1a7eb0;
        case 0x1a7eb4u: goto label_1a7eb4;
        case 0x1a7eb8u: goto label_1a7eb8;
        case 0x1a7ebcu: goto label_1a7ebc;
        case 0x1a7ec0u: goto label_1a7ec0;
        case 0x1a7ec4u: goto label_1a7ec4;
        case 0x1a7ec8u: goto label_1a7ec8;
        case 0x1a7eccu: goto label_1a7ecc;
        case 0x1a7ed0u: goto label_1a7ed0;
        case 0x1a7ed4u: goto label_1a7ed4;
        case 0x1a7ed8u: goto label_1a7ed8;
        case 0x1a7edcu: goto label_1a7edc;
        case 0x1a7ee0u: goto label_1a7ee0;
        case 0x1a7ee4u: goto label_1a7ee4;
        case 0x1a7ee8u: goto label_1a7ee8;
        case 0x1a7eecu: goto label_1a7eec;
        case 0x1a7ef0u: goto label_1a7ef0;
        case 0x1a7ef4u: goto label_1a7ef4;
        case 0x1a7ef8u: goto label_1a7ef8;
        case 0x1a7efcu: goto label_1a7efc;
        case 0x1a7f00u: goto label_1a7f00;
        case 0x1a7f04u: goto label_1a7f04;
        case 0x1a7f08u: goto label_1a7f08;
        case 0x1a7f0cu: goto label_1a7f0c;
        case 0x1a7f10u: goto label_1a7f10;
        case 0x1a7f14u: goto label_1a7f14;
        case 0x1a7f18u: goto label_1a7f18;
        case 0x1a7f1cu: goto label_1a7f1c;
        case 0x1a7f20u: goto label_1a7f20;
        case 0x1a7f24u: goto label_1a7f24;
        case 0x1a7f28u: goto label_1a7f28;
        case 0x1a7f2cu: goto label_1a7f2c;
        case 0x1a7f30u: goto label_1a7f30;
        case 0x1a7f34u: goto label_1a7f34;
        case 0x1a7f38u: goto label_1a7f38;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f40u: goto label_1a7f40;
        case 0x1a7f44u: goto label_1a7f44;
        case 0x1a7f48u: goto label_1a7f48;
        case 0x1a7f4cu: goto label_1a7f4c;
        case 0x1a7f50u: goto label_1a7f50;
        case 0x1a7f54u: goto label_1a7f54;
        case 0x1a7f58u: goto label_1a7f58;
        case 0x1a7f5cu: goto label_1a7f5c;
        case 0x1a7f60u: goto label_1a7f60;
        case 0x1a7f64u: goto label_1a7f64;
        case 0x1a7f68u: goto label_1a7f68;
        case 0x1a7f6cu: goto label_1a7f6c;
        case 0x1a7f70u: goto label_1a7f70;
        case 0x1a7f74u: goto label_1a7f74;
        case 0x1a7f78u: goto label_1a7f78;
        case 0x1a7f7cu: goto label_1a7f7c;
        case 0x1a7f80u: goto label_1a7f80;
        case 0x1a7f84u: goto label_1a7f84;
        case 0x1a7f88u: goto label_1a7f88;
        case 0x1a7f8cu: goto label_1a7f8c;
        case 0x1a7f90u: goto label_1a7f90;
        case 0x1a7f94u: goto label_1a7f94;
        case 0x1a7f98u: goto label_1a7f98;
        case 0x1a7f9cu: goto label_1a7f9c;
        case 0x1a7fa0u: goto label_1a7fa0;
        case 0x1a7fa4u: goto label_1a7fa4;
        case 0x1a7fa8u: goto label_1a7fa8;
        case 0x1a7facu: goto label_1a7fac;
        case 0x1a7fb0u: goto label_1a7fb0;
        case 0x1a7fb4u: goto label_1a7fb4;
        case 0x1a7fb8u: goto label_1a7fb8;
        case 0x1a7fbcu: goto label_1a7fbc;
        case 0x1a7fc0u: goto label_1a7fc0;
        case 0x1a7fc4u: goto label_1a7fc4;
        case 0x1a7fc8u: goto label_1a7fc8;
        case 0x1a7fccu: goto label_1a7fcc;
        case 0x1a7fd0u: goto label_1a7fd0;
        case 0x1a7fd4u: goto label_1a7fd4;
        case 0x1a7fd8u: goto label_1a7fd8;
        case 0x1a7fdcu: goto label_1a7fdc;
        case 0x1a7fe0u: goto label_1a7fe0;
        case 0x1a7fe4u: goto label_1a7fe4;
        case 0x1a7fe8u: goto label_1a7fe8;
        case 0x1a7fecu: goto label_1a7fec;
        case 0x1a7ff0u: goto label_1a7ff0;
        case 0x1a7ff4u: goto label_1a7ff4;
        case 0x1a7ff8u: goto label_1a7ff8;
        case 0x1a7ffcu: goto label_1a7ffc;
        case 0x1a8000u: goto label_1a8000;
        case 0x1a8004u: goto label_1a8004;
        case 0x1a8008u: goto label_1a8008;
        case 0x1a800cu: goto label_1a800c;
        case 0x1a8010u: goto label_1a8010;
        case 0x1a8014u: goto label_1a8014;
        case 0x1a8018u: goto label_1a8018;
        case 0x1a801cu: goto label_1a801c;
        case 0x1a8020u: goto label_1a8020;
        case 0x1a8024u: goto label_1a8024;
        case 0x1a8028u: goto label_1a8028;
        case 0x1a802cu: goto label_1a802c;
        case 0x1a8030u: goto label_1a8030;
        case 0x1a8034u: goto label_1a8034;
        case 0x1a8038u: goto label_1a8038;
        case 0x1a803cu: goto label_1a803c;
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8044u: goto label_1a8044;
        case 0x1a8048u: goto label_1a8048;
        case 0x1a804cu: goto label_1a804c;
        case 0x1a8050u: goto label_1a8050;
        case 0x1a8054u: goto label_1a8054;
        case 0x1a8058u: goto label_1a8058;
        case 0x1a805cu: goto label_1a805c;
        case 0x1a8060u: goto label_1a8060;
        case 0x1a8064u: goto label_1a8064;
        case 0x1a8068u: goto label_1a8068;
        case 0x1a806cu: goto label_1a806c;
        case 0x1a8070u: goto label_1a8070;
        case 0x1a8074u: goto label_1a8074;
        case 0x1a8078u: goto label_1a8078;
        case 0x1a807cu: goto label_1a807c;
        case 0x1a8080u: goto label_1a8080;
        case 0x1a8084u: goto label_1a8084;
        case 0x1a8088u: goto label_1a8088;
        case 0x1a808cu: goto label_1a808c;
        case 0x1a8090u: goto label_1a8090;
        case 0x1a8094u: goto label_1a8094;
        case 0x1a8098u: goto label_1a8098;
        case 0x1a809cu: goto label_1a809c;
        case 0x1a80a0u: goto label_1a80a0;
        case 0x1a80a4u: goto label_1a80a4;
        case 0x1a80a8u: goto label_1a80a8;
        case 0x1a80acu: goto label_1a80ac;
        case 0x1a80b0u: goto label_1a80b0;
        case 0x1a80b4u: goto label_1a80b4;
        case 0x1a80b8u: goto label_1a80b8;
        case 0x1a80bcu: goto label_1a80bc;
        case 0x1a80c0u: goto label_1a80c0;
        case 0x1a80c4u: goto label_1a80c4;
        case 0x1a80c8u: goto label_1a80c8;
        case 0x1a80ccu: goto label_1a80cc;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80d4u: goto label_1a80d4;
        case 0x1a80d8u: goto label_1a80d8;
        case 0x1a80dcu: goto label_1a80dc;
        case 0x1a80e0u: goto label_1a80e0;
        case 0x1a80e4u: goto label_1a80e4;
        case 0x1a80e8u: goto label_1a80e8;
        case 0x1a80ecu: goto label_1a80ec;
        case 0x1a80f0u: goto label_1a80f0;
        case 0x1a80f4u: goto label_1a80f4;
        case 0x1a80f8u: goto label_1a80f8;
        case 0x1a80fcu: goto label_1a80fc;
        case 0x1a8100u: goto label_1a8100;
        case 0x1a8104u: goto label_1a8104;
        case 0x1a8108u: goto label_1a8108;
        case 0x1a810cu: goto label_1a810c;
        case 0x1a8110u: goto label_1a8110;
        case 0x1a8114u: goto label_1a8114;
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        case 0x1a8140u: goto label_1a8140;
        case 0x1a8144u: goto label_1a8144;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a814cu: goto label_1a814c;
        case 0x1a8150u: goto label_1a8150;
        case 0x1a8154u: goto label_1a8154;
        case 0x1a8158u: goto label_1a8158;
        case 0x1a815cu: goto label_1a815c;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8164u: goto label_1a8164;
        case 0x1a8168u: goto label_1a8168;
        case 0x1a816cu: goto label_1a816c;
        case 0x1a8170u: goto label_1a8170;
        case 0x1a8174u: goto label_1a8174;
        case 0x1a8178u: goto label_1a8178;
        case 0x1a817cu: goto label_1a817c;
        case 0x1a8180u: goto label_1a8180;
        case 0x1a8184u: goto label_1a8184;
        case 0x1a8188u: goto label_1a8188;
        case 0x1a818cu: goto label_1a818c;
        case 0x1a8190u: goto label_1a8190;
        case 0x1a8194u: goto label_1a8194;
        case 0x1a8198u: goto label_1a8198;
        case 0x1a819cu: goto label_1a819c;
        case 0x1a81a0u: goto label_1a81a0;
        case 0x1a81a4u: goto label_1a81a4;
        case 0x1a81a8u: goto label_1a81a8;
        case 0x1a81acu: goto label_1a81ac;
        case 0x1a81b0u: goto label_1a81b0;
        case 0x1a81b4u: goto label_1a81b4;
        case 0x1a81b8u: goto label_1a81b8;
        case 0x1a81bcu: goto label_1a81bc;
        case 0x1a81c0u: goto label_1a81c0;
        case 0x1a81c4u: goto label_1a81c4;
        case 0x1a81c8u: goto label_1a81c8;
        case 0x1a81ccu: goto label_1a81cc;
        case 0x1a81d0u: goto label_1a81d0;
        case 0x1a81d4u: goto label_1a81d4;
        case 0x1a81d8u: goto label_1a81d8;
        case 0x1a81dcu: goto label_1a81dc;
        case 0x1a81e0u: goto label_1a81e0;
        case 0x1a81e4u: goto label_1a81e4;
        case 0x1a81e8u: goto label_1a81e8;
        case 0x1a81ecu: goto label_1a81ec;
        case 0x1a81f0u: goto label_1a81f0;
        case 0x1a81f4u: goto label_1a81f4;
        case 0x1a81f8u: goto label_1a81f8;
        case 0x1a81fcu: goto label_1a81fc;
        case 0x1a8200u: goto label_1a8200;
        case 0x1a8204u: goto label_1a8204;
        case 0x1a8208u: goto label_1a8208;
        case 0x1a820cu: goto label_1a820c;
        case 0x1a8210u: goto label_1a8210;
        case 0x1a8214u: goto label_1a8214;
        case 0x1a8218u: goto label_1a8218;
        case 0x1a821cu: goto label_1a821c;
        case 0x1a8220u: goto label_1a8220;
        case 0x1a8224u: goto label_1a8224;
        case 0x1a8228u: goto label_1a8228;
        case 0x1a822cu: goto label_1a822c;
        case 0x1a8230u: goto label_1a8230;
        case 0x1a8234u: goto label_1a8234;
        case 0x1a8238u: goto label_1a8238;
        case 0x1a823cu: goto label_1a823c;
        case 0x1a8240u: goto label_1a8240;
        case 0x1a8244u: goto label_1a8244;
        case 0x1a8248u: goto label_1a8248;
        case 0x1a824cu: goto label_1a824c;
        case 0x1a8250u: goto label_1a8250;
        case 0x1a8254u: goto label_1a8254;
        case 0x1a8258u: goto label_1a8258;
        case 0x1a825cu: goto label_1a825c;
        case 0x1a8260u: goto label_1a8260;
        case 0x1a8264u: goto label_1a8264;
        case 0x1a8268u: goto label_1a8268;
        case 0x1a826cu: goto label_1a826c;
        case 0x1a8270u: goto label_1a8270;
        case 0x1a8274u: goto label_1a8274;
        case 0x1a8278u: goto label_1a8278;
        case 0x1a827cu: goto label_1a827c;
        case 0x1a8280u: goto label_1a8280;
        case 0x1a8284u: goto label_1a8284;
        case 0x1a8288u: goto label_1a8288;
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8290u: goto label_1a8290;
        case 0x1a8294u: goto label_1a8294;
        case 0x1a8298u: goto label_1a8298;
        case 0x1a829cu: goto label_1a829c;
        case 0x1a82a0u: goto label_1a82a0;
        case 0x1a82a4u: goto label_1a82a4;
        case 0x1a82a8u: goto label_1a82a8;
        case 0x1a82acu: goto label_1a82ac;
        case 0x1a82b0u: goto label_1a82b0;
        case 0x1a82b4u: goto label_1a82b4;
        case 0x1a82b8u: goto label_1a82b8;
        case 0x1a82bcu: goto label_1a82bc;
        case 0x1a82c0u: goto label_1a82c0;
        case 0x1a82c4u: goto label_1a82c4;
        case 0x1a82c8u: goto label_1a82c8;
        case 0x1a82ccu: goto label_1a82cc;
        case 0x1a82d0u: goto label_1a82d0;
        case 0x1a82d4u: goto label_1a82d4;
        case 0x1a82d8u: goto label_1a82d8;
        case 0x1a82dcu: goto label_1a82dc;
        case 0x1a82e0u: goto label_1a82e0;
        case 0x1a82e4u: goto label_1a82e4;
        case 0x1a82e8u: goto label_1a82e8;
        case 0x1a82ecu: goto label_1a82ec;
        case 0x1a82f0u: goto label_1a82f0;
        case 0x1a82f4u: goto label_1a82f4;
        case 0x1a82f8u: goto label_1a82f8;
        case 0x1a82fcu: goto label_1a82fc;
        case 0x1a8300u: goto label_1a8300;
        case 0x1a8304u: goto label_1a8304;
        case 0x1a8308u: goto label_1a8308;
        case 0x1a830cu: goto label_1a830c;
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8314u: goto label_1a8314;
        case 0x1a8318u: goto label_1a8318;
        case 0x1a831cu: goto label_1a831c;
        case 0x1a8320u: goto label_1a8320;
        case 0x1a8324u: goto label_1a8324;
        case 0x1a8328u: goto label_1a8328;
        case 0x1a832cu: goto label_1a832c;
        case 0x1a8330u: goto label_1a8330;
        case 0x1a8334u: goto label_1a8334;
        case 0x1a8338u: goto label_1a8338;
        case 0x1a833cu: goto label_1a833c;
        case 0x1a8340u: goto label_1a8340;
        case 0x1a8344u: goto label_1a8344;
        case 0x1a8348u: goto label_1a8348;
        case 0x1a834cu: goto label_1a834c;
        case 0x1a8350u: goto label_1a8350;
        case 0x1a8354u: goto label_1a8354;
        case 0x1a8358u: goto label_1a8358;
        case 0x1a835cu: goto label_1a835c;
        case 0x1a8360u: goto label_1a8360;
        case 0x1a8364u: goto label_1a8364;
        case 0x1a8368u: goto label_1a8368;
        case 0x1a836cu: goto label_1a836c;
        case 0x1a8370u: goto label_1a8370;
        case 0x1a8374u: goto label_1a8374;
        case 0x1a8378u: goto label_1a8378;
        case 0x1a837cu: goto label_1a837c;
        case 0x1a8380u: goto label_1a8380;
        case 0x1a8384u: goto label_1a8384;
        case 0x1a8388u: goto label_1a8388;
        case 0x1a838cu: goto label_1a838c;
        case 0x1a8390u: goto label_1a8390;
        case 0x1a8394u: goto label_1a8394;
        case 0x1a8398u: goto label_1a8398;
        case 0x1a839cu: goto label_1a839c;
        case 0x1a83a0u: goto label_1a83a0;
        case 0x1a83a4u: goto label_1a83a4;
        case 0x1a83a8u: goto label_1a83a8;
        case 0x1a83acu: goto label_1a83ac;
        case 0x1a83b0u: goto label_1a83b0;
        case 0x1a83b4u: goto label_1a83b4;
        case 0x1a83b8u: goto label_1a83b8;
        case 0x1a83bcu: goto label_1a83bc;
        case 0x1a83c0u: goto label_1a83c0;
        case 0x1a83c4u: goto label_1a83c4;
        case 0x1a83c8u: goto label_1a83c8;
        case 0x1a83ccu: goto label_1a83cc;
        case 0x1a83d0u: goto label_1a83d0;
        case 0x1a83d4u: goto label_1a83d4;
        case 0x1a83d8u: goto label_1a83d8;
        case 0x1a83dcu: goto label_1a83dc;
        case 0x1a83e0u: goto label_1a83e0;
        case 0x1a83e4u: goto label_1a83e4;
        case 0x1a83e8u: goto label_1a83e8;
        case 0x1a83ecu: goto label_1a83ec;
        case 0x1a83f0u: goto label_1a83f0;
        case 0x1a83f4u: goto label_1a83f4;
        case 0x1a83f8u: goto label_1a83f8;
        case 0x1a83fcu: goto label_1a83fc;
        case 0x1a8400u: goto label_1a8400;
        case 0x1a8404u: goto label_1a8404;
        case 0x1a8408u: goto label_1a8408;
        case 0x1a840cu: goto label_1a840c;
        case 0x1a8410u: goto label_1a8410;
        case 0x1a8414u: goto label_1a8414;
        case 0x1a8418u: goto label_1a8418;
        case 0x1a841cu: goto label_1a841c;
        case 0x1a8420u: goto label_1a8420;
        case 0x1a8424u: goto label_1a8424;
        case 0x1a8428u: goto label_1a8428;
        case 0x1a842cu: goto label_1a842c;
        case 0x1a8430u: goto label_1a8430;
        case 0x1a8434u: goto label_1a8434;
        case 0x1a8438u: goto label_1a8438;
        case 0x1a843cu: goto label_1a843c;
        case 0x1a8440u: goto label_1a8440;
        case 0x1a8444u: goto label_1a8444;
        case 0x1a8448u: goto label_1a8448;
        case 0x1a844cu: goto label_1a844c;
        case 0x1a8450u: goto label_1a8450;
        case 0x1a8454u: goto label_1a8454;
        case 0x1a8458u: goto label_1a8458;
        case 0x1a845cu: goto label_1a845c;
        case 0x1a8460u: goto label_1a8460;
        case 0x1a8464u: goto label_1a8464;
        case 0x1a8468u: goto label_1a8468;
        case 0x1a846cu: goto label_1a846c;
        case 0x1a8470u: goto label_1a8470;
        case 0x1a8474u: goto label_1a8474;
        case 0x1a8478u: goto label_1a8478;
        case 0x1a847cu: goto label_1a847c;
        case 0x1a8480u: goto label_1a8480;
        case 0x1a8484u: goto label_1a8484;
        case 0x1a8488u: goto label_1a8488;
        case 0x1a848cu: goto label_1a848c;
        case 0x1a8490u: goto label_1a8490;
        case 0x1a8494u: goto label_1a8494;
        case 0x1a8498u: goto label_1a8498;
        case 0x1a849cu: goto label_1a849c;
        case 0x1a84a0u: goto label_1a84a0;
        case 0x1a84a4u: goto label_1a84a4;
        case 0x1a84a8u: goto label_1a84a8;
        case 0x1a84acu: goto label_1a84ac;
        case 0x1a84b0u: goto label_1a84b0;
        case 0x1a84b4u: goto label_1a84b4;
        case 0x1a84b8u: goto label_1a84b8;
        case 0x1a84bcu: goto label_1a84bc;
        case 0x1a84c0u: goto label_1a84c0;
        case 0x1a84c4u: goto label_1a84c4;
        case 0x1a84c8u: goto label_1a84c8;
        case 0x1a84ccu: goto label_1a84cc;
        case 0x1a84d0u: goto label_1a84d0;
        case 0x1a84d4u: goto label_1a84d4;
        case 0x1a84d8u: goto label_1a84d8;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a84e0u: goto label_1a84e0;
        case 0x1a84e4u: goto label_1a84e4;
        case 0x1a84e8u: goto label_1a84e8;
        case 0x1a84ecu: goto label_1a84ec;
        case 0x1a84f0u: goto label_1a84f0;
        case 0x1a84f4u: goto label_1a84f4;
        case 0x1a84f8u: goto label_1a84f8;
        case 0x1a84fcu: goto label_1a84fc;
        case 0x1a8500u: goto label_1a8500;
        case 0x1a8504u: goto label_1a8504;
        case 0x1a8508u: goto label_1a8508;
        case 0x1a850cu: goto label_1a850c;
        case 0x1a8510u: goto label_1a8510;
        case 0x1a8514u: goto label_1a8514;
        case 0x1a8518u: goto label_1a8518;
        case 0x1a851cu: goto label_1a851c;
        case 0x1a8520u: goto label_1a8520;
        case 0x1a8524u: goto label_1a8524;
        case 0x1a8528u: goto label_1a8528;
        case 0x1a852cu: goto label_1a852c;
        default: break;
    }

    ctx->pc = 0x1a7e48u;

label_1a7e48:
    // 0x1a7e48: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1a7e4c:
    // 0x1a7e4c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1a7e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1a7e50:
    // 0x1a7e50: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1a7e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1a7e54:
    // 0x1a7e54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a7e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7e58:
    // 0x1a7e58: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1a7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1a7e5c:
    // 0x1a7e5c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1a7e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1a7e60:
    // 0x1a7e60: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1a7e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1a7e64:
    // 0x1a7e64: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1a7e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1a7e68:
    // 0x1a7e68: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a7e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1a7e6c:
    // 0x1a7e6c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1a7e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1a7e70:
    // 0x1a7e70: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1a7e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1a7e74:
    // 0x1a7e74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a7e78:
    // 0x1a7e78: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1a7e78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1a7e7c:
    // 0x1a7e7c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1a7e7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1a7e80:
    // 0x1a7e80: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1a7e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1a7e84:
    // 0x1a7e84: 0xc089f76  jal         func_227DD8
label_1a7e88:
    if (ctx->pc == 0x1A7E88u) {
        ctx->pc = 0x1A7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E84u;
        // 0x1a7e88: 0x8e84156c  lw          $a0, 0x156C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E8Cu;
        goto label_1a7e8c;
    }
    ctx->pc = 0x1A7E84u;
    SET_GPR_U32(ctx, 31, 0x1A7E8Cu);
    ctx->pc = 0x1A7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E84u;
    // 0x1a7e88: 0x8e84156c  lw          $a0, 0x156C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1A7E84u, 0x1A7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E8Cu;
label_1a7e8c:
    // 0x1a7e8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1a7e90:
    if (ctx->pc == 0x1A7E90u) {
        ctx->pc = 0x1A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E8Cu;
        // 0x1a7e90: 0x8e821554  lw          $v0, 0x1554($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E94u;
        goto label_1a7e94;
    }
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7E8Cu;
            // 0x1a7e90: 0x8e821554  lw          $v0, 0x1554($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7E9Cu;
            goto label_1a7e9c;
        }
    }
    ctx->pc = 0x1A7E94u;
label_1a7e94:
    // 0x1a7e94: 0x10000197  b           . + 4 + (0x197 << 2)
label_1a7e98:
    if (ctx->pc == 0x1A7E98u) {
        ctx->pc = 0x1A7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E94u;
        // 0x1a7e98: 0xae801554  sw          $zero, 0x1554($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E9Cu;
        goto label_1a7e9c;
    }
    ctx->pc = 0x1A7E94u;
    {
        const bool branch_taken_0x1a7e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E94u;
        // 0x1a7e98: 0xae801554  sw          $zero, 0x1554($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e94) {
            ctx->pc = 0x1A84F4u;
            goto label_1a84f4;
        }
    }
    ctx->pc = 0x1A7E9Cu;
label_1a7e9c:
    // 0x1a7e9c: 0x10400196  beqz        $v0, . + 4 + (0x196 << 2)
label_1a7ea0:
    if (ctx->pc == 0x1A7EA0u) {
        ctx->pc = 0x1A7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E9Cu;
        // 0x1a7ea0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EA4u;
        goto label_1a7ea4;
    }
    ctx->pc = 0x1A7E9Cu;
    {
        const bool branch_taken_0x1a7e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E9Cu;
        // 0x1a7ea0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e9c) {
            ctx->pc = 0x1A84F8u;
            goto label_1a84f8;
        }
    }
    ctx->pc = 0x1A7EA4u;
label_1a7ea4:
    // 0x1a7ea4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1a7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1a7ea8:
    // 0x1a7ea8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a7eac:
    if (ctx->pc == 0x1A7EACu) {
        ctx->pc = 0x1A7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EA8u;
        // 0x1a7eac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EB0u;
        goto label_1a7eb0;
    }
    ctx->pc = 0x1A7EA8u;
    {
        const bool branch_taken_0x1a7ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EA8u;
        // 0x1a7eac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ea8) {
            ctx->pc = 0x1A7ED0u;
            goto label_1a7ed0;
        }
    }
    ctx->pc = 0x1A7EB0u;
label_1a7eb0:
    // 0x1a7eb0: 0xc069c08  jal         func_1A7020
label_1a7eb4:
    if (ctx->pc == 0x1A7EB4u) {
        ctx->pc = 0x1A7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB0u;
        // 0x1a7eb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EB8u;
        goto label_1a7eb8;
    }
    ctx->pc = 0x1A7EB0u;
    SET_GPR_U32(ctx, 31, 0x1A7EB8u);
    ctx->pc = 0x1A7EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EB0u;
    // 0x1a7eb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7020u, 0x1A7EB0u, 0x1A7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EB8u;
label_1a7eb8:
    // 0x1a7eb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a7ebc:
    if (ctx->pc == 0x1A7EBCu) {
        ctx->pc = 0x1A7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB8u;
        // 0x1a7ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EC0u;
        goto label_1a7ec0;
    }
    ctx->pc = 0x1A7EB8u;
    {
        const bool branch_taken_0x1a7eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB8u;
        // 0x1a7ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7eb8) {
            ctx->pc = 0x1A7EC4u;
            goto label_1a7ec4;
        }
    }
    ctx->pc = 0x1A7EC0u;
label_1a7ec0:
    // 0x1a7ec0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1a7ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1a7ec4:
    // 0x1a7ec4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1a7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1a7ec8:
    // 0x1a7ec8: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
label_1a7ecc:
    if (ctx->pc == 0x1A7ECCu) {
        ctx->pc = 0x1A7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EC8u;
        // 0x1a7ecc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7ED0u;
        goto label_1a7ed0;
    }
    ctx->pc = 0x1A7EC8u;
    {
        const bool branch_taken_0x1a7ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EC8u;
        // 0x1a7ecc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ec8) {
            ctx->pc = 0x1A84F4u;
            goto label_1a84f4;
        }
    }
    ctx->pc = 0x1A7ED0u;
label_1a7ed0:
    // 0x1a7ed0: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1a7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a7ed4:
    // 0x1a7ed4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a7ed8:
    // 0x1a7ed8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a7ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1a7edc:
    // 0x1a7edc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1a7ee0:
    if (ctx->pc == 0x1A7EE0u) {
        ctx->pc = 0x1A7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EDCu;
        // 0x1a7ee0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EE4u;
        goto label_1a7ee4;
    }
    ctx->pc = 0x1A7EDCu;
    {
        const bool branch_taken_0x1a7edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EDCu;
        // 0x1a7ee0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7edc) {
            ctx->pc = 0x1A7FD0u;
            goto label_1a7fd0;
        }
    }
    ctx->pc = 0x1A7EE4u;
label_1a7ee4:
    // 0x1a7ee4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1a7ee8:
    // 0x1a7ee8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a7ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a7eec:
    // 0x1a7eec: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1a7eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1a7ef0:
    // 0x1a7ef0: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1a7ef4:
    // 0x1a7ef4: 0x3c01bcd4  lui         $at, 0xBCD4
    ctx->pc = 0x1a7ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48340 << 16));
label_1a7ef8:
    // 0x1a7ef8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1a7ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_1a7efc:
    // 0x1a7efc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1a7efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1a7f00:
    // 0x1a7f00: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1a7f04:
    // 0x1a7f04: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1a7f08:
    // 0x1a7f08: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1a7f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1a7f0c:
    // 0x1a7f0c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1a7f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1a7f10:
    // 0x1a7f10: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1a7f10u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1a7f14:
    // 0x1a7f14: 0x3c013ce5  lui         $at, 0x3CE5
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15589 << 16));
label_1a7f18:
    // 0x1a7f18: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1a7f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1a7f1c:
    // 0x1a7f1c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a7f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1a7f20:
    // 0x1a7f20: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1a7f24:
    // 0x1a7f24: 0x3c01bcfd  lui         $at, 0xBCFD
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48381 << 16));
label_1a7f28:
    // 0x1a7f28: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x1a7f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
label_1a7f2c:
    // 0x1a7f2c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a7f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1a7f30:
    // 0x1a7f30: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1a7f30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1a7f34:
    // 0x1a7f34: 0x3c01bdd2  lui         $at, 0xBDD2
    ctx->pc = 0x1a7f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48594 << 16));
label_1a7f38:
    // 0x1a7f38: 0x3421f1aa  ori         $at, $at, 0xF1AA
    ctx->pc = 0x1a7f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61866);
label_1a7f3c:
    // 0x1a7f3c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a7f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1a7f40:
    // 0x1a7f40: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1a7f44:
    // 0x1a7f44: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a7f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1a7f48:
    // 0x1a7f48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a7f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a7f4c:
    // 0x1a7f4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a7f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a7f50:
    // 0x1a7f50: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a7f50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a7f54:
    // 0x1a7f54: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
label_1a7f58:
    // 0x1a7f58: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1a7f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1a7f5c:
    // 0x1a7f5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a7f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a7f60:
    // 0x1a7f60: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a7f64:
    // 0x1a7f64: 0x3c013d44  lui         $at, 0x3D44
    ctx->pc = 0x1a7f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15684 << 16));
label_1a7f68:
    // 0x1a7f68: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1a7f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1a7f6c:
    // 0x1a7f6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a7f70:
    // 0x1a7f70: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a7f74:
    // 0x1a7f74: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x1a7f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
label_1a7f78:
    // 0x1a7f78: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1a7f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1a7f7c:
    // 0x1a7f7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7f80:
    // 0x1a7f80: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a7f84:
    // 0x1a7f84: 0x3c01bd07  lui         $at, 0xBD07
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48391 << 16));
label_1a7f88:
    // 0x1a7f88: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x1a7f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
label_1a7f8c:
    // 0x1a7f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7f90:
    // 0x1a7f90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7f94:
    // 0x1a7f94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7f98:
    // 0x1a7f98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a7f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a7f9c:
    // 0x1a7f9c: 0xe5aad304  swc1        $f10, -0x2CFC($t5)
    ctx->pc = 0x1a7f9cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294955780), bits); }
label_1a7fa0:
    // 0x1a7fa0: 0xe589d1f8  swc1        $f9, -0x2E08($t4)
    ctx->pc = 0x1a7fa0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294955512), bits); }
label_1a7fa4:
    // 0x1a7fa4: 0xe568d20c  swc1        $f8, -0x2DF4($t3)
    ctx->pc = 0x1a7fa4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294955532), bits); }
label_1a7fa8:
    // 0x1a7fa8: 0xe547d218  swc1        $f7, -0x2DE8($t2)
    ctx->pc = 0x1a7fa8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294955544), bits); }
label_1a7fac:
    // 0x1a7fac: 0xe526d230  swc1        $f6, -0x2DD0($t1)
    ctx->pc = 0x1a7facu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294955568), bits); }
label_1a7fb0:
    // 0x1a7fb0: 0xe505d234  swc1        $f5, -0x2DCC($t0)
    ctx->pc = 0x1a7fb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955572), bits); }
label_1a7fb4:
    // 0x1a7fb4: 0xe4e4d23c  swc1        $f4, -0x2DC4($a3)
    ctx->pc = 0x1a7fb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294955580), bits); }
label_1a7fb8:
    // 0x1a7fb8: 0xe4c3d2fc  swc1        $f3, -0x2D04($a2)
    ctx->pc = 0x1a7fb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294955772), bits); }
label_1a7fbc:
    // 0x1a7fbc: 0xe482d214  swc1        $f2, -0x2DEC($a0)
    ctx->pc = 0x1a7fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955540), bits); }
label_1a7fc0:
    // 0x1a7fc0: 0xe441d220  swc1        $f1, -0x2DE0($v0)
    ctx->pc = 0x1a7fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955552), bits); }
label_1a7fc4:
    // 0x1a7fc4: 0xe460d224  swc1        $f0, -0x2DDC($v1)
    ctx->pc = 0x1a7fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955556), bits); }
label_1a7fc8:
    // 0x1a7fc8: 0xe5cad210  swc1        $f10, -0x2DF0($t6)
    ctx->pc = 0x1a7fc8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294955536), bits); }
label_1a7fcc:
    // 0x1a7fcc: 0xaca0d21c  sw          $zero, -0x2DE4($a1)
    ctx->pc = 0x1a7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955548), GPR_U32(ctx, 0));
label_1a7fd0:
    // 0x1a7fd0: 0x8e85156c  lw          $a1, 0x156C($s4)
    ctx->pc = 0x1a7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
label_1a7fd4:
    // 0x1a7fd4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a7fd8:
    // 0x1a7fd8: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1a7fdc:
    // 0x1a7fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7fe0:
    // 0x1a7fe0: 0x80a301b0  lb          $v1, 0x1B0($a1)
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_1a7fe4:
    // 0x1a7fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7fe8:
    // 0x1a7fe8: 0x9044042e  lbu         $a0, 0x42E($v0)
    ctx->pc = 0x1a7fe8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1070)));
label_1a7fec:
    // 0x1a7fec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1a7ff0:
    if (ctx->pc == 0x1A7FF0u) {
        ctx->pc = 0x1A7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FECu;
        // 0x1a7ff0: 0x8e821548  lw          $v0, 0x1548($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7FF4u;
        goto label_1a7ff4;
    }
    ctx->pc = 0x1A7FECu;
    {
        const bool branch_taken_0x1a7fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FECu;
        // 0x1a7ff0: 0x8e821548  lw          $v0, 0x1548($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fec) {
            ctx->pc = 0x1A8008u;
            goto label_1a8008;
        }
    }
    ctx->pc = 0x1A7FF4u;
label_1a7ff4:
    // 0x1a7ff4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1a7ff8:
    if (ctx->pc == 0x1A7FF8u) {
        ctx->pc = 0x1A7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FF4u;
        // 0x1a7ff8: 0x8e84156c  lw          $a0, 0x156C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7FFCu;
        goto label_1a7ffc;
    }
    ctx->pc = 0x1A7FF4u;
    {
        const bool branch_taken_0x1a7ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ff4) {
            ctx->pc = 0x1A7FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7FF4u;
            // 0x1a7ff8: 0x8e84156c  lw          $a0, 0x156C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A801Cu;
            goto label_1a801c;
        }
    }
    ctx->pc = 0x1A7FFCu;
label_1a7ffc:
    // 0x1a7ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8000:
    // 0x1a8000: 0x1000013c  b           . + 4 + (0x13C << 2)
label_1a8004:
    if (ctx->pc == 0x1A8004u) {
        ctx->pc = 0x1A8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8000u;
        // 0x1a8004: 0xae821548  sw          $v0, 0x1548($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8008u;
        goto label_1a8008;
    }
    ctx->pc = 0x1A8000u;
    {
        const bool branch_taken_0x1a8000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8000u;
        // 0x1a8004: 0xae821548  sw          $v0, 0x1548($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8000) {
            ctx->pc = 0x1A84F4u;
            goto label_1a84f4;
        }
    }
    ctx->pc = 0x1A8008u;
label_1a8008:
    // 0x1a8008: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1a800c:
    if (ctx->pc == 0x1A800Cu) {
        ctx->pc = 0x1A800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8008u;
        // 0x1a800c: 0x8e84156c  lw          $a0, 0x156C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8010u;
        goto label_1a8010;
    }
    ctx->pc = 0x1A8008u;
    {
        const bool branch_taken_0x1a8008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8008) {
            ctx->pc = 0x1A800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8008u;
            // 0x1a800c: 0x8e84156c  lw          $a0, 0x156C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A801Cu;
            goto label_1a801c;
        }
    }
    ctx->pc = 0x1A8010u;
label_1a8010:
    // 0x1a8010: 0xc069c10  jal         func_1A7040
label_1a8014:
    if (ctx->pc == 0x1A8014u) {
        ctx->pc = 0x1A8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8010u;
        // 0x1a8014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8018u;
        goto label_1a8018;
    }
    ctx->pc = 0x1A8010u;
    SET_GPR_U32(ctx, 31, 0x1A8018u);
    ctx->pc = 0x1A8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8010u;
    // 0x1a8014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7040u, 0x1A8010u, 0x1A8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8018u;
label_1a8018:
    // 0x1a8018: 0x8e84156c  lw          $a0, 0x156C($s4)
    ctx->pc = 0x1a8018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5484)));
label_1a801c:
    // 0x1a801c: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x1a801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1a8020:
    // 0x1a8020: 0x808301b0  lb          $v1, 0x1B0($a0)
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_1a8024:
    // 0x1a8024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8028:
    // 0x1a8028: 0x90440414  lbu         $a0, 0x414($v0)
    ctx->pc = 0x1a8028u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1044)));
label_1a802c:
    // 0x1a802c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a8030:
    if (ctx->pc == 0x1A8030u) {
        ctx->pc = 0x1A8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A802Cu;
        // 0x1a8030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8034u;
        goto label_1a8034;
    }
    ctx->pc = 0x1A802Cu;
    {
        const bool branch_taken_0x1a802c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A802Cu;
        // 0x1a8030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a802c) {
            ctx->pc = 0x1A803Cu;
            goto label_1a803c;
        }
    }
    ctx->pc = 0x1A8034u;
label_1a8034:
    // 0x1a8034: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8038:
    if (ctx->pc == 0x1A8038u) {
        ctx->pc = 0x1A8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8034u;
        // 0x1a8038: 0xae82154c  sw          $v0, 0x154C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A803Cu;
        goto label_1a803c;
    }
    ctx->pc = 0x1A8034u;
    {
        const bool branch_taken_0x1a8034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8034u;
        // 0x1a8038: 0xae82154c  sw          $v0, 0x154C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8034) {
            ctx->pc = 0x1A8040u;
            goto label_1a8040;
        }
    }
    ctx->pc = 0x1A803Cu;
label_1a803c:
    // 0x1a803c: 0xae80154c  sw          $zero, 0x154C($s4)
    ctx->pc = 0x1a803cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5452), GPR_U32(ctx, 0));
label_1a8040:
    // 0x1a8040: 0x8e821548  lw          $v0, 0x1548($s4)
    ctx->pc = 0x1a8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5448)));
label_1a8044:
    // 0x1a8044: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1a8048:
    if (ctx->pc == 0x1A8048u) {
        ctx->pc = 0x1A8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8044u;
        // 0x1a8048: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A804Cu;
        goto label_1a804c;
    }
    ctx->pc = 0x1A8044u;
    {
        const bool branch_taken_0x1a8044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8044u;
        // 0x1a8048: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8044) {
            ctx->pc = 0x1A8084u;
            goto label_1a8084;
        }
    }
    ctx->pc = 0x1A804Cu;
label_1a804c:
    // 0x1a804c: 0x8e841568  lw          $a0, 0x1568($s4)
    ctx->pc = 0x1a804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5480)));
label_1a8050:
    // 0x1a8050: 0x8c62d300  lw          $v0, -0x2D00($v1)
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955776)));
label_1a8054:
    // 0x1a8054: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a8054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8058:
    // 0x1a8058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a805c:
    if (ctx->pc == 0x1A805Cu) {
        ctx->pc = 0x1A805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8058u;
        // 0x1a805c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8060u;
        goto label_1a8060;
    }
    ctx->pc = 0x1A8058u;
    {
        const bool branch_taken_0x1a8058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8058u;
        // 0x1a805c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8058) {
            ctx->pc = 0x1A8070u;
            goto label_1a8070;
        }
    }
    ctx->pc = 0x1A8060u;
label_1a8060:
    // 0x1a8060: 0xc069c00  jal         func_1A7000
label_1a8064:
    if (ctx->pc == 0x1A8064u) {
        ctx->pc = 0x1A8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8060u;
        // 0x1a8064: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8068u;
        goto label_1a8068;
    }
    ctx->pc = 0x1A8060u;
    SET_GPR_U32(ctx, 31, 0x1A8068u);
    ctx->pc = 0x1A8064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8060u;
    // 0x1a8064: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7000u, 0x1A8060u, 0x1A8068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8068u;
label_1a8068:
    // 0x1a8068: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a806c:
    if (ctx->pc == 0x1A806Cu) {
        ctx->pc = 0x1A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8068u;
        // 0x1a806c: 0x8e821548  lw          $v0, 0x1548($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8070u;
        goto label_1a8070;
    }
    ctx->pc = 0x1A8068u;
    {
        const bool branch_taken_0x1a8068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8068u;
        // 0x1a806c: 0x8e821548  lw          $v0, 0x1548($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8068) {
            ctx->pc = 0x1A807Cu;
            goto label_1a807c;
        }
    }
    ctx->pc = 0x1A8070u;
label_1a8070:
    // 0x1a8070: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a8074:
    // 0x1a8074: 0xae821568  sw          $v0, 0x1568($s4)
    ctx->pc = 0x1a8074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5480), GPR_U32(ctx, 2));
label_1a8078:
    // 0x1a8078: 0x8e821548  lw          $v0, 0x1548($s4)
    ctx->pc = 0x1a8078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5448)));
label_1a807c:
    // 0x1a807c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_1a8080:
    if (ctx->pc == 0x1A8080u) {
        ctx->pc = 0x1A8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A807Cu;
        // 0x1a8080: 0x8e03d300  lw          $v1, -0x2D00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8084u;
        goto label_1a8084;
    }
    ctx->pc = 0x1A807Cu;
    {
        const bool branch_taken_0x1a807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A807Cu;
        // 0x1a8080: 0x8e03d300  lw          $v1, -0x2D00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a807c) {
            ctx->pc = 0x1A81D4u;
            goto label_1a81d4;
        }
    }
    ctx->pc = 0x1A8084u;
label_1a8084:
    // 0x1a8084: 0x8e82154c  lw          $v0, 0x154C($s4)
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5452)));
label_1a8088:
    // 0x1a8088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a808c:
    if (ctx->pc == 0x1A808Cu) {
        ctx->pc = 0x1A808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8088u;
        // 0x1a808c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8090u;
        goto label_1a8090;
    }
    ctx->pc = 0x1A8088u;
    {
        const bool branch_taken_0x1a8088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8088u;
        // 0x1a808c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8088) {
            ctx->pc = 0x1A809Cu;
            goto label_1a809c;
        }
    }
    ctx->pc = 0x1A8090u;
label_1a8090:
    // 0x1a8090: 0x26830050  addiu       $v1, $s4, 0x50
    ctx->pc = 0x1a8090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1a8094:
    // 0x1a8094: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a8098:
    if (ctx->pc == 0x1A8098u) {
        ctx->pc = 0x1A8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8094u;
        // 0x1a8098: 0x8c4507d8  lw          $a1, 0x7D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A809Cu;
        goto label_1a809c;
    }
    ctx->pc = 0x1A8094u;
    {
        const bool branch_taken_0x1a8094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8094u;
        // 0x1a8098: 0x8c4507d8  lw          $a1, 0x7D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8094) {
            ctx->pc = 0x1A80D8u;
            goto label_1a80d8;
        }
    }
    ctx->pc = 0x1A809Cu;
label_1a809c:
    // 0x1a809c: 0x8e851540  lw          $a1, 0x1540($s4)
    ctx->pc = 0x1a809cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
label_1a80a0:
    // 0x1a80a0: 0xc06a14c  jal         func_1A8530
label_1a80a4:
    if (ctx->pc == 0x1A80A4u) {
        ctx->pc = 0x1A80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A0u;
        // 0x1a80a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80A8u;
        goto label_1a80a8;
    }
    ctx->pc = 0x1A80A0u;
    SET_GPR_U32(ctx, 31, 0x1A80A8u);
    ctx->pc = 0x1A80A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80A0u;
    // 0x1a80a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A80A0u, 0x1A80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80A8u;
label_1a80a8:
    // 0x1a80a8: 0x8e851574  lw          $a1, 0x1574($s4)
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5492)));
label_1a80ac:
    // 0x1a80ac: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1a80b0:
    // 0x1a80b0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a80b4:
    // 0x1a80b4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a80b8:
    // 0x1a80b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a80bc:
    // 0x1a80bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a80bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a80c0:
    // 0x1a80c0: 0x9082041e  lbu         $v0, 0x41E($a0)
    ctx->pc = 0x1a80c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1054)));
label_1a80c4:
    // 0x1a80c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1a80c8:
    if (ctx->pc == 0x1A80C8u) {
        ctx->pc = 0x1A80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80C4u;
        // 0x1a80c8: 0x8e821540  lw          $v0, 0x1540($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80CCu;
        goto label_1a80cc;
    }
    ctx->pc = 0x1A80C4u;
    {
        const bool branch_taken_0x1a80c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a80c4) {
            ctx->pc = 0x1A80C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A80C4u;
            // 0x1a80c8: 0x8e821540  lw          $v0, 0x1540($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A80ECu;
            goto label_1a80ec;
        }
    }
    ctx->pc = 0x1A80CCu;
label_1a80cc:
    // 0x1a80cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a80d0:
    // 0x1a80d0: 0x26830050  addiu       $v1, $s4, 0x50
    ctx->pc = 0x1a80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1a80d4:
    // 0x1a80d4: 0x8c4507dc  lw          $a1, 0x7DC($v0)
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
label_1a80d8:
    // 0x1a80d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a80d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a80dc:
    // 0x1a80dc: 0xc06ec94  jal         func_1BB250
label_1a80e0:
    if (ctx->pc == 0x1A80E0u) {
        ctx->pc = 0x1A80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80DCu;
        // 0x1a80e0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80E4u;
        goto label_1a80e4;
    }
    ctx->pc = 0x1A80DCu;
    SET_GPR_U32(ctx, 31, 0x1A80E4u);
    ctx->pc = 0x1A80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80DCu;
    // 0x1a80e0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1A80DCu, 0x1A80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80E4u;
label_1a80e4:
    // 0x1a80e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a80e8:
    if (ctx->pc == 0x1A80E8u) {
        ctx->pc = 0x1A80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E4u;
        // 0x1a80e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80ECu;
        goto label_1a80ec;
    }
    ctx->pc = 0x1A80E4u;
    {
        const bool branch_taken_0x1a80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E4u;
        // 0x1a80e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e4) {
            ctx->pc = 0x1A8114u;
            goto label_1a8114;
        }
    }
    ctx->pc = 0x1A80ECu;
label_1a80ec:
    // 0x1a80ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1a80f0:
    // 0x1a80f0: 0x246307c0  addiu       $v1, $v1, 0x7C0
    ctx->pc = 0x1a80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1984));
label_1a80f4:
    // 0x1a80f4: 0x26860050  addiu       $a2, $s4, 0x50
    ctx->pc = 0x1a80f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1a80f8:
    // 0x1a80f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a80fc:
    // 0x1a80fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a80fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8100:
    // 0x1a8100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8104:
    // 0x1a8104: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8108:
    // 0x1a8108: 0xc06ec94  jal         func_1BB250
label_1a810c:
    if (ctx->pc == 0x1A810Cu) {
        ctx->pc = 0x1A810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8108u;
        // 0x1a810c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8110u;
        goto label_1a8110;
    }
    ctx->pc = 0x1A8108u;
    SET_GPR_U32(ctx, 31, 0x1A8110u);
    ctx->pc = 0x1A810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8108u;
    // 0x1a810c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1A8108u, 0x1A8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8110u;
label_1a8110:
    // 0x1a8110: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a8110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a8114:
    // 0x1a8114: 0xc069dec  jal         func_1A77B0
label_1a8118:
    if (ctx->pc == 0x1A8118u) {
        ctx->pc = 0x1A8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8114u;
        // 0x1a8118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A811Cu;
        goto label_1a811c;
    }
    ctx->pc = 0x1A8114u;
    SET_GPR_U32(ctx, 31, 0x1A811Cu);
    ctx->pc = 0x1A8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8114u;
    // 0x1a8118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77B0u, 0x1A8114u, 0x1A811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A811Cu;
label_1a811c:
    // 0x1a811c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1a811cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1a8120:
    // 0x1a8120: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1a8124:
    // 0x1a8124: 0x26900f40  addiu       $s0, $s4, 0xF40
    ctx->pc = 0x1a8124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3904));
label_1a8128:
    // 0x1a8128: 0x26920340  addiu       $s2, $s4, 0x340
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_1a812c:
    // 0x1a812c: 0x26910940  addiu       $s1, $s4, 0x940
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_1a8130:
    // 0x1a8130: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a8134:
    // 0x1a8134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8138:
    // 0x1a8138: 0xc44cd210  lwc1        $f12, -0x2DF0($v0)
    ctx->pc = 0x1a8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a813c:
    // 0x1a813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8140:
    // 0x1a8140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a8140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a8144:
    // 0x1a8144: 0xc068848  jal         func_1A2120
label_1a8148:
    if (ctx->pc == 0x1A8148u) {
        ctx->pc = 0x1A8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8144u;
        // 0x1a8148: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A814Cu;
        goto label_1a814c;
    }
    ctx->pc = 0x1A8144u;
    SET_GPR_U32(ctx, 31, 0x1A814Cu);
    ctx->pc = 0x1A8148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8144u;
    // 0x1a8148: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A8144u, 0x1A814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A814Cu;
label_1a814c:
    // 0x1a814c: 0x8e02fa00  lw          $v0, -0x600($s0)
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
label_1a8150:
    // 0x1a8150: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a8154:
    // 0x1a8154: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a8158:
    // 0x1a8158: 0x60f809  jalr        $v1
label_1a815c:
    if (ctx->pc == 0x1A815Cu) {
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8158u;
        // 0x1a815c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8160u;
        goto label_1a8160;
    }
    ctx->pc = 0x1A8158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8160u);
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8158u;
        // 0x1a815c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8158u, 0x1A8160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8160u;
label_1a8160:
    // 0x1a8160: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1a8160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1a8164:
    // 0x1a8164: 0xc6acd304  lwc1        $f12, -0x2CFC($s5)
    ctx->pc = 0x1a8164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8168:
    // 0x1a8168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a816c:
    // 0x1a816c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8170:
    // 0x1a8170: 0xc068848  jal         func_1A2120
label_1a8174:
    if (ctx->pc == 0x1A8174u) {
        ctx->pc = 0x1A8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8170u;
        // 0x1a8174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8178u;
        goto label_1a8178;
    }
    ctx->pc = 0x1A8170u;
    SET_GPR_U32(ctx, 31, 0x1A8178u);
    ctx->pc = 0x1A8174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8170u;
    // 0x1a8174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A8170u, 0x1A8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8178u;
label_1a8178:
    // 0x1a8178: 0x8e02f400  lw          $v0, -0xC00($s0)
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964224)));
label_1a817c:
    // 0x1a817c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a817cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a8180:
    // 0x1a8180: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a8184:
    // 0x1a8184: 0x60f809  jalr        $v1
label_1a8188:
    if (ctx->pc == 0x1A8188u) {
        ctx->pc = 0x1A8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8184u;
        // 0x1a8188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A818Cu;
        goto label_1a818c;
    }
    ctx->pc = 0x1A8184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A818Cu);
        ctx->pc = 0x1A8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8184u;
        // 0x1a8188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8184u, 0x1A818Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A818Cu;
label_1a818c:
    // 0x1a818c: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1a818cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1a8190:
    // 0x1a8190: 0xc7c0d314  lwc1        $f0, -0x2CEC($fp)
    ctx->pc = 0x1a8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8194:
    // 0x1a8194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8198:
    // 0x1a8198: 0xc6acd304  lwc1        $f12, -0x2CFC($s5)
    ctx->pc = 0x1a8198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a819c:
    // 0x1a819c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a81a0:
    // 0x1a81a0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1a81a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1a81a4:
    // 0x1a81a4: 0xc068848  jal         func_1A2120
label_1a81a8:
    if (ctx->pc == 0x1A81A8u) {
        ctx->pc = 0x1A81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81A4u;
        // 0x1a81a8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81ACu;
        goto label_1a81ac;
    }
    ctx->pc = 0x1A81A4u;
    SET_GPR_U32(ctx, 31, 0x1A81ACu);
    ctx->pc = 0x1A81A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81A4u;
    // 0x1a81a8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A81A4u, 0x1A81ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81ACu;
label_1a81ac:
    // 0x1a81ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a81b0:
    // 0x1a81b0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a81b4:
    // 0x1a81b4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a81b8:
    // 0x1a81b8: 0x60f809  jalr        $v1
label_1a81bc:
    if (ctx->pc == 0x1A81BCu) {
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81C0u;
        goto label_1a81c0;
    }
    ctx->pc = 0x1A81B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A81C0u);
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A81B8u, 0x1A81C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A81C0u;
label_1a81c0:
    // 0x1a81c0: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x1a81c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a81c4:
    // 0x1a81c4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1a81c8:
    if (ctx->pc == 0x1A81C8u) {
        ctx->pc = 0x1A81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81C4u;
        // 0x1a81c8: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81CCu;
        goto label_1a81cc;
    }
    ctx->pc = 0x1A81C4u;
    {
        const bool branch_taken_0x1a81c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81C4u;
        // 0x1a81c8: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81c4) {
            ctx->pc = 0x1A8130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8130;
        }
    }
    ctx->pc = 0x1A81CCu;
label_1a81cc:
    // 0x1a81cc: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1a81d0:
    if (ctx->pc == 0x1A81D0u) {
        ctx->pc = 0x1A81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81CCu;
        // 0x1a81d0: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81D4u;
        goto label_1a81d4;
    }
    ctx->pc = 0x1A81CCu;
    {
        const bool branch_taken_0x1a81cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81CCu;
        // 0x1a81d0: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81cc) {
            ctx->pc = 0x1A83B8u;
            goto label_1a83b8;
        }
    }
    ctx->pc = 0x1A81D4u;
label_1a81d4:
    // 0x1a81d4: 0x26960050  addiu       $s6, $s4, 0x50
    ctx->pc = 0x1a81d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1a81d8:
    // 0x1a81d8: 0x8e821568  lw          $v0, 0x1568($s4)
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5480)));
label_1a81dc:
    // 0x1a81dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a81dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a81e0:
    // 0x1a81e0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1a81e4:
    if (ctx->pc == 0x1A81E4u) {
        ctx->pc = 0x1A81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81E0u;
        // 0x1a81e4: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81E8u;
        goto label_1a81e8;
    }
    ctx->pc = 0x1A81E0u;
    {
        const bool branch_taken_0x1a81e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81E0u;
        // 0x1a81e4: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81e0) {
            ctx->pc = 0x1A82A4u;
            goto label_1a82a4;
        }
    }
    ctx->pc = 0x1A81E8u;
label_1a81e8:
    // 0x1a81e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a81ec:
    // 0x1a81ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a81f0:
    // 0x1a81f0: 0x8c53d30c  lw          $s3, -0x2CF4($v0)
    ctx->pc = 0x1a81f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955788)));
label_1a81f4:
    // 0x1a81f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a81f8:
    // 0x1a81f8: 0x8c77d310  lw          $s7, -0x2CF0($v1)
    ctx->pc = 0x1a81f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
label_1a81fc:
    // 0x1a81fc: 0x26920f40  addiu       $s2, $s4, 0xF40
    ctx->pc = 0x1a81fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3904));
label_1a8200:
    // 0x1a8200: 0x26910940  addiu       $s1, $s4, 0x940
    ctx->pc = 0x1a8200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_1a8204:
    // 0x1a8204: 0x26900340  addiu       $s0, $s4, 0x340
    ctx->pc = 0x1a8204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_1a8208:
    // 0x1a8208: 0x8e821540  lw          $v0, 0x1540($s4)
    ctx->pc = 0x1a8208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
label_1a820c:
    // 0x1a820c: 0x16a20011  bne         $s5, $v0, . + 4 + (0x11 << 2)
label_1a8210:
    if (ctx->pc == 0x1A8210u) {
        ctx->pc = 0x1A8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A820Cu;
        // 0x1a8210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8214u;
        goto label_1a8214;
    }
    ctx->pc = 0x1A820Cu;
    {
        const bool branch_taken_0x1a820c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A820Cu;
        // 0x1a8210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a820c) {
            ctx->pc = 0x1A8254u;
            goto label_1a8254;
        }
    }
    ctx->pc = 0x1A8214u;
label_1a8214:
    // 0x1a8214: 0xc06894e  jal         func_1A2538
label_1a8218:
    if (ctx->pc == 0x1A8218u) {
        ctx->pc = 0x1A8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8214u;
        // 0x1a8218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A821Cu;
        goto label_1a821c;
    }
    ctx->pc = 0x1A8214u;
    SET_GPR_U32(ctx, 31, 0x1A821Cu);
    ctx->pc = 0x1A8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8214u;
    // 0x1a8218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1A8214u, 0x1A821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A821Cu;
label_1a821c:
    // 0x1a821c: 0xc068970  jal         func_1A25C0
label_1a8220:
    if (ctx->pc == 0x1A8220u) {
        ctx->pc = 0x1A8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A821Cu;
        // 0x1a8220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8224u;
        goto label_1a8224;
    }
    ctx->pc = 0x1A821Cu;
    SET_GPR_U32(ctx, 31, 0x1A8224u);
    ctx->pc = 0x1A8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A821Cu;
    // 0x1a8220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1A821Cu, 0x1A8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8224u;
label_1a8224:
    // 0x1a8224: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a8224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a8228:
    // 0x1a8228: 0xc06894e  jal         func_1A2538
label_1a822c:
    if (ctx->pc == 0x1A822Cu) {
        ctx->pc = 0x1A822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8228u;
        // 0x1a822c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8230u;
        goto label_1a8230;
    }
    ctx->pc = 0x1A8228u;
    SET_GPR_U32(ctx, 31, 0x1A8230u);
    ctx->pc = 0x1A822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8228u;
    // 0x1a822c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1A8228u, 0x1A8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8230u;
label_1a8230:
    // 0x1a8230: 0xc068970  jal         func_1A25C0
label_1a8234:
    if (ctx->pc == 0x1A8234u) {
        ctx->pc = 0x1A8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8230u;
        // 0x1a8234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8238u;
        goto label_1a8238;
    }
    ctx->pc = 0x1A8230u;
    SET_GPR_U32(ctx, 31, 0x1A8238u);
    ctx->pc = 0x1A8234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8230u;
    // 0x1a8234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1A8230u, 0x1A8238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8238u;
label_1a8238:
    // 0x1a8238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a823c:
    // 0x1a823c: 0xc06894e  jal         func_1A2538
label_1a8240:
    if (ctx->pc == 0x1A8240u) {
        ctx->pc = 0x1A8240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A823Cu;
        // 0x1a8240: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8244u;
        goto label_1a8244;
    }
    ctx->pc = 0x1A823Cu;
    SET_GPR_U32(ctx, 31, 0x1A8244u);
    ctx->pc = 0x1A8240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A823Cu;
    // 0x1a8240: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1A823Cu, 0x1A8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8244u;
label_1a8244:
    // 0x1a8244: 0xc068970  jal         func_1A25C0
label_1a8248:
    if (ctx->pc == 0x1A8248u) {
        ctx->pc = 0x1A8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8244u;
        // 0x1a8248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A824Cu;
        goto label_1a824c;
    }
    ctx->pc = 0x1A8244u;
    SET_GPR_U32(ctx, 31, 0x1A824Cu);
    ctx->pc = 0x1A8248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8244u;
    // 0x1a8248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1A8244u, 0x1A824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A824Cu;
label_1a824c:
    // 0x1a824c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a8250:
    if (ctx->pc == 0x1A8250u) {
        ctx->pc = 0x1A8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A824Cu;
        // 0x1a8250: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8254u;
        goto label_1a8254;
    }
    ctx->pc = 0x1A824Cu;
    {
        const bool branch_taken_0x1a824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A824Cu;
        // 0x1a8250: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a824c) {
            ctx->pc = 0x1A8290u;
            goto label_1a8290;
        }
    }
    ctx->pc = 0x1A8254u;
label_1a8254:
    // 0x1a8254: 0xc06894e  jal         func_1A2538
label_1a8258:
    if (ctx->pc == 0x1A8258u) {
        ctx->pc = 0x1A8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8254u;
        // 0x1a8258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A825Cu;
        goto label_1a825c;
    }
    ctx->pc = 0x1A8254u;
    SET_GPR_U32(ctx, 31, 0x1A825Cu);
    ctx->pc = 0x1A8258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8254u;
    // 0x1a8258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1A8254u, 0x1A825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A825Cu;
label_1a825c:
    // 0x1a825c: 0xc068970  jal         func_1A25C0
label_1a8260:
    if (ctx->pc == 0x1A8260u) {
        ctx->pc = 0x1A8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A825Cu;
        // 0x1a8260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8264u;
        goto label_1a8264;
    }
    ctx->pc = 0x1A825Cu;
    SET_GPR_U32(ctx, 31, 0x1A8264u);
    ctx->pc = 0x1A8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A825Cu;
    // 0x1a8260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1A825Cu, 0x1A8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8264u;
label_1a8264:
    // 0x1a8264: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8268:
    // 0x1a8268: 0xc06894e  jal         func_1A2538
label_1a826c:
    if (ctx->pc == 0x1A826Cu) {
        ctx->pc = 0x1A826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8268u;
        // 0x1a826c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8270u;
        goto label_1a8270;
    }
    ctx->pc = 0x1A8268u;
    SET_GPR_U32(ctx, 31, 0x1A8270u);
    ctx->pc = 0x1A826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8268u;
    // 0x1a826c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1A8268u, 0x1A8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8270u;
label_1a8270:
    // 0x1a8270: 0xc068970  jal         func_1A25C0
label_1a8274:
    if (ctx->pc == 0x1A8274u) {
        ctx->pc = 0x1A8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8270u;
        // 0x1a8274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8278u;
        goto label_1a8278;
    }
    ctx->pc = 0x1A8270u;
    SET_GPR_U32(ctx, 31, 0x1A8278u);
    ctx->pc = 0x1A8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8270u;
    // 0x1a8274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1A8270u, 0x1A8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8278u;
label_1a8278:
    // 0x1a8278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a827c:
    // 0x1a827c: 0xc06894e  jal         func_1A2538
label_1a8280:
    if (ctx->pc == 0x1A8280u) {
        ctx->pc = 0x1A8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A827Cu;
        // 0x1a8280: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8284u;
        goto label_1a8284;
    }
    ctx->pc = 0x1A827Cu;
    SET_GPR_U32(ctx, 31, 0x1A8284u);
    ctx->pc = 0x1A8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A827Cu;
    // 0x1a8280: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1A827Cu, 0x1A8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8284u;
label_1a8284:
    // 0x1a8284: 0xc068970  jal         func_1A25C0
label_1a8288:
    if (ctx->pc == 0x1A8288u) {
        ctx->pc = 0x1A8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8284u;
        // 0x1a8288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A828Cu;
        goto label_1a828c;
    }
    ctx->pc = 0x1A8284u;
    SET_GPR_U32(ctx, 31, 0x1A828Cu);
    ctx->pc = 0x1A8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8284u;
    // 0x1a8288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1A8284u, 0x1A828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A828Cu;
label_1a828c:
    // 0x1a828c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a828cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a8290:
    // 0x1a8290: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1a8294:
    // 0x1a8294: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1a8294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1a8298:
    // 0x1a8298: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x1a8298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a829c:
    // 0x1a829c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1a82a0:
    if (ctx->pc == 0x1A82A0u) {
        ctx->pc = 0x1A82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A829Cu;
        // 0x1a82a0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82A4u;
        goto label_1a82a4;
    }
    ctx->pc = 0x1A829Cu;
    {
        const bool branch_taken_0x1a829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A829Cu;
        // 0x1a82a0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a829c) {
            ctx->pc = 0x1A8208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8208;
        }
    }
    ctx->pc = 0x1A82A4u;
label_1a82a4:
    // 0x1a82a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a82a8:
    // 0x1a82a8: 0xc069dec  jal         func_1A77B0
label_1a82ac:
    if (ctx->pc == 0x1A82ACu) {
        ctx->pc = 0x1A82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82A8u;
        // 0x1a82ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82B0u;
        goto label_1a82b0;
    }
    ctx->pc = 0x1A82A8u;
    SET_GPR_U32(ctx, 31, 0x1A82B0u);
    ctx->pc = 0x1A82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82A8u;
    // 0x1a82ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77B0u, 0x1A82A8u, 0x1A82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82B0u;
label_1a82b0:
    // 0x1a82b0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1a82b4:
    // 0x1a82b4: 0x26900f40  addiu       $s0, $s4, 0xF40
    ctx->pc = 0x1a82b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3904));
label_1a82b8:
    // 0x1a82b8: 0x26920940  addiu       $s2, $s4, 0x940
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_1a82bc:
    // 0x1a82bc: 0x26910340  addiu       $s1, $s4, 0x340
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_1a82c0:
    // 0x1a82c0: 0x8e821540  lw          $v0, 0x1540($s4)
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
label_1a82c4:
    // 0x1a82c4: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_1a82c8:
    if (ctx->pc == 0x1A82C8u) {
        ctx->pc = 0x1A82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82C4u;
        // 0x1a82c8: 0xc6acd304  lwc1        $f12, -0x2CFC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82CCu;
        goto label_1a82cc;
    }
    ctx->pc = 0x1A82C4u;
    {
        const bool branch_taken_0x1a82c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82C4u;
        // 0x1a82c8: 0xc6acd304  lwc1        $f12, -0x2CFC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82c4) {
            ctx->pc = 0x1A82DCu;
            goto label_1a82dc;
        }
    }
    ctx->pc = 0x1A82CCu;
label_1a82cc:
    // 0x1a82cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a82ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a82d0:
    // 0x1a82d0: 0xc069f44  jal         func_1A7D10
label_1a82d4:
    if (ctx->pc == 0x1A82D4u) {
        ctx->pc = 0x1A82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82D0u;
        // 0x1a82d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82D8u;
        goto label_1a82d8;
    }
    ctx->pc = 0x1A82D0u;
    SET_GPR_U32(ctx, 31, 0x1A82D8u);
    ctx->pc = 0x1A82D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82D0u;
    // 0x1a82d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7D10u, 0x1A82D0u, 0x1A82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82D8u;
label_1a82d8:
    // 0x1a82d8: 0xc6acd304  lwc1        $f12, -0x2CFC($s5)
    ctx->pc = 0x1a82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a82dc:
    // 0x1a82dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a82dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a82e0:
    // 0x1a82e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a82e4:
    // 0x1a82e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a82e8:
    // 0x1a82e8: 0xc068848  jal         func_1A2120
label_1a82ec:
    if (ctx->pc == 0x1A82ECu) {
        ctx->pc = 0x1A82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82E8u;
        // 0x1a82ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82F0u;
        goto label_1a82f0;
    }
    ctx->pc = 0x1A82E8u;
    SET_GPR_U32(ctx, 31, 0x1A82F0u);
    ctx->pc = 0x1A82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82E8u;
    // 0x1a82ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A82E8u, 0x1A82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82F0u;
label_1a82f0:
    // 0x1a82f0: 0x8e02f400  lw          $v0, -0xC00($s0)
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964224)));
label_1a82f4:
    // 0x1a82f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a82f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a82f8:
    // 0x1a82f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a82fc:
    // 0x1a82fc: 0x60f809  jalr        $v1
label_1a8300:
    if (ctx->pc == 0x1A8300u) {
        ctx->pc = 0x1A8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82FCu;
        // 0x1a8300: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8304u;
        goto label_1a8304;
    }
    ctx->pc = 0x1A82FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8304u);
        ctx->pc = 0x1A8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82FCu;
        // 0x1a8300: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A82FCu, 0x1A8304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8304u;
label_1a8304:
    // 0x1a8304: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1a8308:
    // 0x1a8308: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a830c:
    // 0x1a830c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8310:
    // 0x1a8310: 0xc44cd210  lwc1        $f12, -0x2DF0($v0)
    ctx->pc = 0x1a8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8314:
    // 0x1a8314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8318:
    // 0x1a8318: 0xc068848  jal         func_1A2120
label_1a831c:
    if (ctx->pc == 0x1A831Cu) {
        ctx->pc = 0x1A831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8318u;
        // 0x1a831c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8320u;
        goto label_1a8320;
    }
    ctx->pc = 0x1A8318u;
    SET_GPR_U32(ctx, 31, 0x1A8320u);
    ctx->pc = 0x1A831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8318u;
    // 0x1a831c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A8318u, 0x1A8320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8320u;
label_1a8320:
    // 0x1a8320: 0x8e02fa00  lw          $v0, -0x600($s0)
    ctx->pc = 0x1a8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
label_1a8324:
    // 0x1a8324: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a8324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a8328:
    // 0x1a8328: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a8328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a832c:
    // 0x1a832c: 0x60f809  jalr        $v1
label_1a8330:
    if (ctx->pc == 0x1A8330u) {
        ctx->pc = 0x1A8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A832Cu;
        // 0x1a8330: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8334u;
        goto label_1a8334;
    }
    ctx->pc = 0x1A832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8334u);
        ctx->pc = 0x1A8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A832Cu;
        // 0x1a8330: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A832Cu, 0x1A8334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8334u;
label_1a8334:
    // 0x1a8334: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1a8338:
    // 0x1a8338: 0xc7c0d314  lwc1        $f0, -0x2CEC($fp)
    ctx->pc = 0x1a8338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a833c:
    // 0x1a833c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8340:
    // 0x1a8340: 0xc6acd304  lwc1        $f12, -0x2CFC($s5)
    ctx->pc = 0x1a8340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8344:
    // 0x1a8344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8348:
    // 0x1a8348: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1a8348u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1a834c:
    // 0x1a834c: 0xc068848  jal         func_1A2120
label_1a8350:
    if (ctx->pc == 0x1A8350u) {
        ctx->pc = 0x1A8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A834Cu;
        // 0x1a8350: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8354u;
        goto label_1a8354;
    }
    ctx->pc = 0x1A834Cu;
    SET_GPR_U32(ctx, 31, 0x1A8354u);
    ctx->pc = 0x1A8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A834Cu;
    // 0x1a8350: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A834Cu, 0x1A8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8354u;
label_1a8354:
    // 0x1a8354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8358:
    // 0x1a8358: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a8358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a835c:
    // 0x1a835c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a8360:
    // 0x1a8360: 0x60f809  jalr        $v1
label_1a8364:
    if (ctx->pc == 0x1A8364u) {
        ctx->pc = 0x1A8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8360u;
        // 0x1a8364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8368u;
        goto label_1a8368;
    }
    ctx->pc = 0x1A8360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8368u);
        ctx->pc = 0x1A8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8360u;
        // 0x1a8364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8360u, 0x1A8368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8368u;
label_1a8368:
    // 0x1a8368: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x1a8368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a836c:
    // 0x1a836c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1a8370:
    if (ctx->pc == 0x1A8370u) {
        ctx->pc = 0x1A8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A836Cu;
        // 0x1a8370: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8374u;
        goto label_1a8374;
    }
    ctx->pc = 0x1A836Cu;
    {
        const bool branch_taken_0x1a836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A836Cu;
        // 0x1a8370: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a836c) {
            ctx->pc = 0x1A82C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a82c0;
        }
    }
    ctx->pc = 0x1A8374u;
label_1a8374:
    // 0x1a8374: 0x8e821578  lw          $v0, 0x1578($s4)
    ctx->pc = 0x1a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5496)));
label_1a8378:
    // 0x1a8378: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a8378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a837c:
    // 0x1a837c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8380:
    // 0x1a8380: 0xc06ecbc  jal         func_1BB2F0
label_1a8384:
    if (ctx->pc == 0x1A8384u) {
        ctx->pc = 0x1A8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8380u;
        // 0x1a8384: 0xae821578  sw          $v0, 0x1578($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8388u;
        goto label_1a8388;
    }
    ctx->pc = 0x1A8380u;
    SET_GPR_U32(ctx, 31, 0x1A8388u);
    ctx->pc = 0x1A8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8380u;
    // 0x1a8384: 0xae821578  sw          $v0, 0x1578($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 5496), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2F0u, 0x1A8380u, 0x1A8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8388u;
label_1a8388:
    // 0x1a8388: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1a838c:
    if (ctx->pc == 0x1A838Cu) {
        ctx->pc = 0x1A838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8388u;
        // 0x1a838c: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8390u;
        goto label_1a8390;
    }
    ctx->pc = 0x1A8388u;
    {
        const bool branch_taken_0x1a8388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8388) {
            ctx->pc = 0x1A838Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8388u;
            // 0x1a838c: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A83B8u;
            goto label_1a83b8;
        }
    }
    ctx->pc = 0x1A8390u;
label_1a8390:
    // 0x1a8390: 0xc06e4a4  jal         func_1B9290
label_1a8394:
    if (ctx->pc == 0x1A8394u) {
        ctx->pc = 0x1A8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8390u;
        // 0x1a8394: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8398u;
        goto label_1a8398;
    }
    ctx->pc = 0x1A8390u;
    SET_GPR_U32(ctx, 31, 0x1A8398u);
    ctx->pc = 0x1A8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8390u;
    // 0x1a8394: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1A8390u, 0x1A8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8398u;
label_1a8398:
    // 0x1a8398: 0xae801560  sw          $zero, 0x1560($s4)
    ctx->pc = 0x1a8398u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5472), GPR_U32(ctx, 0));
label_1a839c:
    // 0x1a839c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1a83a0:
    // 0x1a83a0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1a83a4:
    // 0x1a83a4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1a83a8:
    // 0x1a83a8: 0x60f809  jalr        $v1
label_1a83ac:
    if (ctx->pc == 0x1A83ACu) {
        ctx->pc = 0x1A83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83A8u;
        // 0x1a83ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A83B0u;
        goto label_1a83b0;
    }
    ctx->pc = 0x1A83A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A83B0u);
        ctx->pc = 0x1A83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83A8u;
        // 0x1a83ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A83A8u, 0x1A83B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A83B0u;
label_1a83b0:
    // 0x1a83b0: 0x10000051  b           . + 4 + (0x51 << 2)
label_1a83b4:
    if (ctx->pc == 0x1A83B4u) {
        ctx->pc = 0x1A83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83B0u;
        // 0x1a83b4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A83B8u;
        goto label_1a83b8;
    }
    ctx->pc = 0x1A83B0u;
    {
        const bool branch_taken_0x1a83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83B0u;
        // 0x1a83b4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83b0) {
            ctx->pc = 0x1A84F8u;
            goto label_1a84f8;
        }
    }
    ctx->pc = 0x1A83B8u;
label_1a83b8:
    // 0x1a83b8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1a83b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1a83bc:
    // 0x1a83bc: 0x261006a0  addiu       $s0, $s0, 0x6A0
    ctx->pc = 0x1a83bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
label_1a83c0:
    // 0x1a83c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a83c4:
    // 0x1a83c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a83c8:
    // 0x1a83c8: 0xc461d2fc  lwc1        $f1, -0x2D04($v1)
    ctx->pc = 0x1a83c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a83cc:
    // 0x1a83cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a83d0:
    // 0x1a83d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a83d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a83d4:
    // 0x1a83d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a83d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a83d8:
    // 0x1a83d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a83d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a83dc:
    // 0x1a83dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a83e0:
    // 0x1a83e0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1a83e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a83e4:
    // 0x1a83e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a83e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a83e8:
    // 0x1a83e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a83e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a83ec:
    // 0x1a83ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a83ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a83f0:
    // 0x1a83f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a83f4:
    // 0x1a83f4: 0x26910240  addiu       $s1, $s4, 0x240
    ctx->pc = 0x1a83f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_1a83f8:
    // 0x1a83f8: 0xc06e4dc  jal         func_1B9370
label_1a83fc:
    if (ctx->pc == 0x1A83FCu) {
        ctx->pc = 0x1A83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83F8u;
        // 0x1a83fc: 0xe7b6000c  swc1        $f22, 0xC($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8400u;
        goto label_1a8400;
    }
    ctx->pc = 0x1A83F8u;
    SET_GPR_U32(ctx, 31, 0x1A8400u);
    ctx->pc = 0x1A83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83F8u;
    // 0x1a83fc: 0xe7b6000c  swc1        $f22, 0xC($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1A83F8u, 0x1A8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8400u;
label_1a8400:
    // 0x1a8400: 0xc06e552  jal         func_1B9548
label_1a8404:
    if (ctx->pc == 0x1A8404u) {
        ctx->pc = 0x1A8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8400u;
        // 0x1a8404: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8408u;
        goto label_1a8408;
    }
    ctx->pc = 0x1A8400u;
    SET_GPR_U32(ctx, 31, 0x1A8408u);
    ctx->pc = 0x1A8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8400u;
    // 0x1a8404: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1A8400u, 0x1A8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8408u;
label_1a8408:
    // 0x1a8408: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1a8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1a840c:
    // 0x1a840c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a8410:
    // 0x1a8410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8414:
    // 0x1a8414: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a8414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a8418:
    // 0x1a8418: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a841c:
    // 0x1a841c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1a8420:
    // 0x1a8420: 0xc068992  jal         func_1A2648
label_1a8424:
    if (ctx->pc == 0x1A8424u) {
        ctx->pc = 0x1A8424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8420u;
        // 0x1a8424: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8428u;
        goto label_1a8428;
    }
    ctx->pc = 0x1A8420u;
    SET_GPR_U32(ctx, 31, 0x1A8428u);
    ctx->pc = 0x1A8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8420u;
    // 0x1a8424: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1A8420u, 0x1A8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8428u;
label_1a8428:
    // 0x1a8428: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a842c:
    // 0x1a842c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a8430:
    // 0x1a8430: 0xc06e4ea  jal         func_1B93A8
label_1a8434:
    if (ctx->pc == 0x1A8434u) {
        ctx->pc = 0x1A8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8430u;
        // 0x1a8434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8438u;
        goto label_1a8438;
    }
    ctx->pc = 0x1A8430u;
    SET_GPR_U32(ctx, 31, 0x1A8438u);
    ctx->pc = 0x1A8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8430u;
    // 0x1a8434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1A8430u, 0x1A8438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8438u;
label_1a8438:
    // 0x1a8438: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1a843c:
    // 0x1a843c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a8440:
    // 0x1a8440: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1a8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a8444:
    // 0x1a8444: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a8444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a8448:
    // 0x1a8448: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1a8448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a844c:
    // 0x1a844c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a8450:
    // 0x1a8450: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1a8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a8454:
    // 0x1a8454: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a8454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a8458:
    // 0x1a8458: 0xc7b4001c  lwc1        $f20, 0x1C($sp)
    ctx->pc = 0x1a8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a845c:
    // 0x1a845c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a845cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a8460:
    // 0x1a8460: 0xc4a4d1f8  lwc1        $f4, -0x2E08($a1)
    ctx->pc = 0x1a8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294955512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a8464:
    // 0x1a8464: 0x4603ad41  sub.s       $f21, $f21, $f3
    ctx->pc = 0x1a8464u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_1a8468:
    // 0x1a8468: 0xc481d1f4  lwc1        $f1, -0x2E0C($a0)
    ctx->pc = 0x1a8468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a846c:
    // 0x1a846c: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x1a846cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_1a8470:
    // 0x1a8470: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1a8470u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1a8474:
    // 0x1a8474: 0xc460d1fc  lwc1        $f0, -0x2E04($v1)
    ctx->pc = 0x1a8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8478:
    // 0x1a8478: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1a8478u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1a847c:
    // 0x1a847c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a847cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8480:
    // 0x1a8480: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x1a8480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8484:
    // 0x1a8484: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1a8484u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1a8488:
    // 0x1a8488: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1a8488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a848c:
    // 0x1a848c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1a848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a8490:
    // 0x1a8490: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1a8490u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_1a8494:
    // 0x1a8494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a8498:
    // 0x1a8498: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a8498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a849c:
    // 0x1a849c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1a849cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a84a0:
    // 0x1a84a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a84a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a84a4:
    // 0x1a84a4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a84a8:
    // 0x1a84a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a84ac:
    // 0x1a84ac: 0xe456000c  swc1        $f22, 0xC($v0)
    ctx->pc = 0x1a84acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1a84b0:
    // 0x1a84b0: 0x4602a0c2  mul.s       $f3, $f20, $f2
    ctx->pc = 0x1a84b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1a84b4:
    // 0x1a84b4: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1a84b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_1a84b8:
    // 0x1a84b8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a84b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a84bc:
    // 0x1a84bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a84c0:
    // 0x1a84c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a84c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a84c4:
    // 0x1a84c4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a84c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a84c8:
    // 0x1a84c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a84c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a84cc:
    // 0x1a84cc: 0xc068818  jal         func_1A2060
label_1a84d0:
    if (ctx->pc == 0x1A84D0u) {
        ctx->pc = 0x1A84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84CCu;
        // 0x1a84d0: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84D4u;
        goto label_1a84d4;
    }
    ctx->pc = 0x1A84CCu;
    SET_GPR_U32(ctx, 31, 0x1A84D4u);
    ctx->pc = 0x1A84D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84CCu;
    // 0x1a84d0: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A84CCu, 0x1A84D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84D4u;
label_1a84d4:
    // 0x1a84d4: 0xc06886e  jal         func_1A21B8
label_1a84d8:
    if (ctx->pc == 0x1A84D8u) {
        ctx->pc = 0x1A84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84D4u;
        // 0x1a84d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84DCu;
        goto label_1a84dc;
    }
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84D4u;
    // 0x1a84d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A84D4u, 0x1A84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a84dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a84e0:
    // 0x1a84e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a84e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1a84e4:
    // 0x1a84e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a84e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a84e8:
    // 0x1a84e8: 0xc068848  jal         func_1A2120
label_1a84ec:
    if (ctx->pc == 0x1A84ECu) {
        ctx->pc = 0x1A84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84E8u;
        // 0x1a84ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84F0u;
        goto label_1a84f0;
    }
    ctx->pc = 0x1A84E8u;
    SET_GPR_U32(ctx, 31, 0x1A84F0u);
    ctx->pc = 0x1A84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84E8u;
    // 0x1a84ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A84E8u, 0x1A84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84F0u;
label_1a84f0:
    // 0x1a84f0: 0xae801558  sw          $zero, 0x1558($s4)
    ctx->pc = 0x1a84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5464), GPR_U32(ctx, 0));
label_1a84f4:
    // 0x1a84f4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1a84f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a84f8:
    // 0x1a84f8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1a84f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a84fc:
    // 0x1a84fc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1a84fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a8500:
    // 0x1a8500: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1a8500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8504:
    // 0x1a8504: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1a8504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a8508:
    // 0x1a8508: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1a8508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a850c:
    // 0x1a850c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a850cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a8510:
    // 0x1a8510: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1a8510u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8514:
    // 0x1a8514: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1a8514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8518:
    // 0x1a8518: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a851c:
    // 0x1a851c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1a851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a8520:
    // 0x1a8520: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1a8520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a8524:
    // 0x1a8524: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1a8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a8528:
    // 0x1a8528: 0x3e00008  jr          $ra
label_1a852c:
    if (ctx->pc == 0x1A852Cu) {
        ctx->pc = 0x1A852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8528u;
        // 0x1a852c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8530u;
        goto label_fallthrough_0x1a8528;
    }
    ctx->pc = 0x1A8528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8528u;
        // 0x1a852c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8528:
    ctx->pc = 0x1A8530u;
}
