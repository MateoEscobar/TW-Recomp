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

// Function: sub_00429FE8
// Address: 0x429fe8 - 0x42a6c0
void sub_00429FE8_0x429fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429FE8_0x429fe8");
#endif

    switch (ctx->pc) {
        case 0x429fe8u: goto label_429fe8;
        case 0x429fecu: goto label_429fec;
        case 0x429ff0u: goto label_429ff0;
        case 0x429ff4u: goto label_429ff4;
        case 0x429ff8u: goto label_429ff8;
        case 0x429ffcu: goto label_429ffc;
        case 0x42a000u: goto label_42a000;
        case 0x42a004u: goto label_42a004;
        case 0x42a008u: goto label_42a008;
        case 0x42a00cu: goto label_42a00c;
        case 0x42a010u: goto label_42a010;
        case 0x42a014u: goto label_42a014;
        case 0x42a018u: goto label_42a018;
        case 0x42a01cu: goto label_42a01c;
        case 0x42a020u: goto label_42a020;
        case 0x42a024u: goto label_42a024;
        case 0x42a028u: goto label_42a028;
        case 0x42a02cu: goto label_42a02c;
        case 0x42a030u: goto label_42a030;
        case 0x42a034u: goto label_42a034;
        case 0x42a038u: goto label_42a038;
        case 0x42a03cu: goto label_42a03c;
        case 0x42a040u: goto label_42a040;
        case 0x42a044u: goto label_42a044;
        case 0x42a048u: goto label_42a048;
        case 0x42a04cu: goto label_42a04c;
        case 0x42a050u: goto label_42a050;
        case 0x42a054u: goto label_42a054;
        case 0x42a058u: goto label_42a058;
        case 0x42a05cu: goto label_42a05c;
        case 0x42a060u: goto label_42a060;
        case 0x42a064u: goto label_42a064;
        case 0x42a068u: goto label_42a068;
        case 0x42a06cu: goto label_42a06c;
        case 0x42a070u: goto label_42a070;
        case 0x42a074u: goto label_42a074;
        case 0x42a078u: goto label_42a078;
        case 0x42a07cu: goto label_42a07c;
        case 0x42a080u: goto label_42a080;
        case 0x42a084u: goto label_42a084;
        case 0x42a088u: goto label_42a088;
        case 0x42a08cu: goto label_42a08c;
        case 0x42a090u: goto label_42a090;
        case 0x42a094u: goto label_42a094;
        case 0x42a098u: goto label_42a098;
        case 0x42a09cu: goto label_42a09c;
        case 0x42a0a0u: goto label_42a0a0;
        case 0x42a0a4u: goto label_42a0a4;
        case 0x42a0a8u: goto label_42a0a8;
        case 0x42a0acu: goto label_42a0ac;
        case 0x42a0b0u: goto label_42a0b0;
        case 0x42a0b4u: goto label_42a0b4;
        case 0x42a0b8u: goto label_42a0b8;
        case 0x42a0bcu: goto label_42a0bc;
        case 0x42a0c0u: goto label_42a0c0;
        case 0x42a0c4u: goto label_42a0c4;
        case 0x42a0c8u: goto label_42a0c8;
        case 0x42a0ccu: goto label_42a0cc;
        case 0x42a0d0u: goto label_42a0d0;
        case 0x42a0d4u: goto label_42a0d4;
        case 0x42a0d8u: goto label_42a0d8;
        case 0x42a0dcu: goto label_42a0dc;
        case 0x42a0e0u: goto label_42a0e0;
        case 0x42a0e4u: goto label_42a0e4;
        case 0x42a0e8u: goto label_42a0e8;
        case 0x42a0ecu: goto label_42a0ec;
        case 0x42a0f0u: goto label_42a0f0;
        case 0x42a0f4u: goto label_42a0f4;
        case 0x42a0f8u: goto label_42a0f8;
        case 0x42a0fcu: goto label_42a0fc;
        case 0x42a100u: goto label_42a100;
        case 0x42a104u: goto label_42a104;
        case 0x42a108u: goto label_42a108;
        case 0x42a10cu: goto label_42a10c;
        case 0x42a110u: goto label_42a110;
        case 0x42a114u: goto label_42a114;
        case 0x42a118u: goto label_42a118;
        case 0x42a11cu: goto label_42a11c;
        case 0x42a120u: goto label_42a120;
        case 0x42a124u: goto label_42a124;
        case 0x42a128u: goto label_42a128;
        case 0x42a12cu: goto label_42a12c;
        case 0x42a130u: goto label_42a130;
        case 0x42a134u: goto label_42a134;
        case 0x42a138u: goto label_42a138;
        case 0x42a13cu: goto label_42a13c;
        case 0x42a140u: goto label_42a140;
        case 0x42a144u: goto label_42a144;
        case 0x42a148u: goto label_42a148;
        case 0x42a14cu: goto label_42a14c;
        case 0x42a150u: goto label_42a150;
        case 0x42a154u: goto label_42a154;
        case 0x42a158u: goto label_42a158;
        case 0x42a15cu: goto label_42a15c;
        case 0x42a160u: goto label_42a160;
        case 0x42a164u: goto label_42a164;
        case 0x42a168u: goto label_42a168;
        case 0x42a16cu: goto label_42a16c;
        case 0x42a170u: goto label_42a170;
        case 0x42a174u: goto label_42a174;
        case 0x42a178u: goto label_42a178;
        case 0x42a17cu: goto label_42a17c;
        case 0x42a180u: goto label_42a180;
        case 0x42a184u: goto label_42a184;
        case 0x42a188u: goto label_42a188;
        case 0x42a18cu: goto label_42a18c;
        case 0x42a190u: goto label_42a190;
        case 0x42a194u: goto label_42a194;
        case 0x42a198u: goto label_42a198;
        case 0x42a19cu: goto label_42a19c;
        case 0x42a1a0u: goto label_42a1a0;
        case 0x42a1a4u: goto label_42a1a4;
        case 0x42a1a8u: goto label_42a1a8;
        case 0x42a1acu: goto label_42a1ac;
        case 0x42a1b0u: goto label_42a1b0;
        case 0x42a1b4u: goto label_42a1b4;
        case 0x42a1b8u: goto label_42a1b8;
        case 0x42a1bcu: goto label_42a1bc;
        case 0x42a1c0u: goto label_42a1c0;
        case 0x42a1c4u: goto label_42a1c4;
        case 0x42a1c8u: goto label_42a1c8;
        case 0x42a1ccu: goto label_42a1cc;
        case 0x42a1d0u: goto label_42a1d0;
        case 0x42a1d4u: goto label_42a1d4;
        case 0x42a1d8u: goto label_42a1d8;
        case 0x42a1dcu: goto label_42a1dc;
        case 0x42a1e0u: goto label_42a1e0;
        case 0x42a1e4u: goto label_42a1e4;
        case 0x42a1e8u: goto label_42a1e8;
        case 0x42a1ecu: goto label_42a1ec;
        case 0x42a1f0u: goto label_42a1f0;
        case 0x42a1f4u: goto label_42a1f4;
        case 0x42a1f8u: goto label_42a1f8;
        case 0x42a1fcu: goto label_42a1fc;
        case 0x42a200u: goto label_42a200;
        case 0x42a204u: goto label_42a204;
        case 0x42a208u: goto label_42a208;
        case 0x42a20cu: goto label_42a20c;
        case 0x42a210u: goto label_42a210;
        case 0x42a214u: goto label_42a214;
        case 0x42a218u: goto label_42a218;
        case 0x42a21cu: goto label_42a21c;
        case 0x42a220u: goto label_42a220;
        case 0x42a224u: goto label_42a224;
        case 0x42a228u: goto label_42a228;
        case 0x42a22cu: goto label_42a22c;
        case 0x42a230u: goto label_42a230;
        case 0x42a234u: goto label_42a234;
        case 0x42a238u: goto label_42a238;
        case 0x42a23cu: goto label_42a23c;
        case 0x42a240u: goto label_42a240;
        case 0x42a244u: goto label_42a244;
        case 0x42a248u: goto label_42a248;
        case 0x42a24cu: goto label_42a24c;
        case 0x42a250u: goto label_42a250;
        case 0x42a254u: goto label_42a254;
        case 0x42a258u: goto label_42a258;
        case 0x42a25cu: goto label_42a25c;
        case 0x42a260u: goto label_42a260;
        case 0x42a264u: goto label_42a264;
        case 0x42a268u: goto label_42a268;
        case 0x42a26cu: goto label_42a26c;
        case 0x42a270u: goto label_42a270;
        case 0x42a274u: goto label_42a274;
        case 0x42a278u: goto label_42a278;
        case 0x42a27cu: goto label_42a27c;
        case 0x42a280u: goto label_42a280;
        case 0x42a284u: goto label_42a284;
        case 0x42a288u: goto label_42a288;
        case 0x42a28cu: goto label_42a28c;
        case 0x42a290u: goto label_42a290;
        case 0x42a294u: goto label_42a294;
        case 0x42a298u: goto label_42a298;
        case 0x42a29cu: goto label_42a29c;
        case 0x42a2a0u: goto label_42a2a0;
        case 0x42a2a4u: goto label_42a2a4;
        case 0x42a2a8u: goto label_42a2a8;
        case 0x42a2acu: goto label_42a2ac;
        case 0x42a2b0u: goto label_42a2b0;
        case 0x42a2b4u: goto label_42a2b4;
        case 0x42a2b8u: goto label_42a2b8;
        case 0x42a2bcu: goto label_42a2bc;
        case 0x42a2c0u: goto label_42a2c0;
        case 0x42a2c4u: goto label_42a2c4;
        case 0x42a2c8u: goto label_42a2c8;
        case 0x42a2ccu: goto label_42a2cc;
        case 0x42a2d0u: goto label_42a2d0;
        case 0x42a2d4u: goto label_42a2d4;
        case 0x42a2d8u: goto label_42a2d8;
        case 0x42a2dcu: goto label_42a2dc;
        case 0x42a2e0u: goto label_42a2e0;
        case 0x42a2e4u: goto label_42a2e4;
        case 0x42a2e8u: goto label_42a2e8;
        case 0x42a2ecu: goto label_42a2ec;
        case 0x42a2f0u: goto label_42a2f0;
        case 0x42a2f4u: goto label_42a2f4;
        case 0x42a2f8u: goto label_42a2f8;
        case 0x42a2fcu: goto label_42a2fc;
        case 0x42a300u: goto label_42a300;
        case 0x42a304u: goto label_42a304;
        case 0x42a308u: goto label_42a308;
        case 0x42a30cu: goto label_42a30c;
        case 0x42a310u: goto label_42a310;
        case 0x42a314u: goto label_42a314;
        case 0x42a318u: goto label_42a318;
        case 0x42a31cu: goto label_42a31c;
        case 0x42a320u: goto label_42a320;
        case 0x42a324u: goto label_42a324;
        case 0x42a328u: goto label_42a328;
        case 0x42a32cu: goto label_42a32c;
        case 0x42a330u: goto label_42a330;
        case 0x42a334u: goto label_42a334;
        case 0x42a338u: goto label_42a338;
        case 0x42a33cu: goto label_42a33c;
        case 0x42a340u: goto label_42a340;
        case 0x42a344u: goto label_42a344;
        case 0x42a348u: goto label_42a348;
        case 0x42a34cu: goto label_42a34c;
        case 0x42a350u: goto label_42a350;
        case 0x42a354u: goto label_42a354;
        case 0x42a358u: goto label_42a358;
        case 0x42a35cu: goto label_42a35c;
        case 0x42a360u: goto label_42a360;
        case 0x42a364u: goto label_42a364;
        case 0x42a368u: goto label_42a368;
        case 0x42a36cu: goto label_42a36c;
        case 0x42a370u: goto label_42a370;
        case 0x42a374u: goto label_42a374;
        case 0x42a378u: goto label_42a378;
        case 0x42a37cu: goto label_42a37c;
        case 0x42a380u: goto label_42a380;
        case 0x42a384u: goto label_42a384;
        case 0x42a388u: goto label_42a388;
        case 0x42a38cu: goto label_42a38c;
        case 0x42a390u: goto label_42a390;
        case 0x42a394u: goto label_42a394;
        case 0x42a398u: goto label_42a398;
        case 0x42a39cu: goto label_42a39c;
        case 0x42a3a0u: goto label_42a3a0;
        case 0x42a3a4u: goto label_42a3a4;
        case 0x42a3a8u: goto label_42a3a8;
        case 0x42a3acu: goto label_42a3ac;
        case 0x42a3b0u: goto label_42a3b0;
        case 0x42a3b4u: goto label_42a3b4;
        case 0x42a3b8u: goto label_42a3b8;
        case 0x42a3bcu: goto label_42a3bc;
        case 0x42a3c0u: goto label_42a3c0;
        case 0x42a3c4u: goto label_42a3c4;
        case 0x42a3c8u: goto label_42a3c8;
        case 0x42a3ccu: goto label_42a3cc;
        case 0x42a3d0u: goto label_42a3d0;
        case 0x42a3d4u: goto label_42a3d4;
        case 0x42a3d8u: goto label_42a3d8;
        case 0x42a3dcu: goto label_42a3dc;
        case 0x42a3e0u: goto label_42a3e0;
        case 0x42a3e4u: goto label_42a3e4;
        case 0x42a3e8u: goto label_42a3e8;
        case 0x42a3ecu: goto label_42a3ec;
        case 0x42a3f0u: goto label_42a3f0;
        case 0x42a3f4u: goto label_42a3f4;
        case 0x42a3f8u: goto label_42a3f8;
        case 0x42a3fcu: goto label_42a3fc;
        case 0x42a400u: goto label_42a400;
        case 0x42a404u: goto label_42a404;
        case 0x42a408u: goto label_42a408;
        case 0x42a40cu: goto label_42a40c;
        case 0x42a410u: goto label_42a410;
        case 0x42a414u: goto label_42a414;
        case 0x42a418u: goto label_42a418;
        case 0x42a41cu: goto label_42a41c;
        case 0x42a420u: goto label_42a420;
        case 0x42a424u: goto label_42a424;
        case 0x42a428u: goto label_42a428;
        case 0x42a42cu: goto label_42a42c;
        case 0x42a430u: goto label_42a430;
        case 0x42a434u: goto label_42a434;
        case 0x42a438u: goto label_42a438;
        case 0x42a43cu: goto label_42a43c;
        case 0x42a440u: goto label_42a440;
        case 0x42a444u: goto label_42a444;
        case 0x42a448u: goto label_42a448;
        case 0x42a44cu: goto label_42a44c;
        case 0x42a450u: goto label_42a450;
        case 0x42a454u: goto label_42a454;
        case 0x42a458u: goto label_42a458;
        case 0x42a45cu: goto label_42a45c;
        case 0x42a460u: goto label_42a460;
        case 0x42a464u: goto label_42a464;
        case 0x42a468u: goto label_42a468;
        case 0x42a46cu: goto label_42a46c;
        case 0x42a470u: goto label_42a470;
        case 0x42a474u: goto label_42a474;
        case 0x42a478u: goto label_42a478;
        case 0x42a47cu: goto label_42a47c;
        case 0x42a480u: goto label_42a480;
        case 0x42a484u: goto label_42a484;
        case 0x42a488u: goto label_42a488;
        case 0x42a48cu: goto label_42a48c;
        case 0x42a490u: goto label_42a490;
        case 0x42a494u: goto label_42a494;
        case 0x42a498u: goto label_42a498;
        case 0x42a49cu: goto label_42a49c;
        case 0x42a4a0u: goto label_42a4a0;
        case 0x42a4a4u: goto label_42a4a4;
        case 0x42a4a8u: goto label_42a4a8;
        case 0x42a4acu: goto label_42a4ac;
        case 0x42a4b0u: goto label_42a4b0;
        case 0x42a4b4u: goto label_42a4b4;
        case 0x42a4b8u: goto label_42a4b8;
        case 0x42a4bcu: goto label_42a4bc;
        case 0x42a4c0u: goto label_42a4c0;
        case 0x42a4c4u: goto label_42a4c4;
        case 0x42a4c8u: goto label_42a4c8;
        case 0x42a4ccu: goto label_42a4cc;
        case 0x42a4d0u: goto label_42a4d0;
        case 0x42a4d4u: goto label_42a4d4;
        case 0x42a4d8u: goto label_42a4d8;
        case 0x42a4dcu: goto label_42a4dc;
        case 0x42a4e0u: goto label_42a4e0;
        case 0x42a4e4u: goto label_42a4e4;
        case 0x42a4e8u: goto label_42a4e8;
        case 0x42a4ecu: goto label_42a4ec;
        case 0x42a4f0u: goto label_42a4f0;
        case 0x42a4f4u: goto label_42a4f4;
        case 0x42a4f8u: goto label_42a4f8;
        case 0x42a4fcu: goto label_42a4fc;
        case 0x42a500u: goto label_42a500;
        case 0x42a504u: goto label_42a504;
        case 0x42a508u: goto label_42a508;
        case 0x42a50cu: goto label_42a50c;
        case 0x42a510u: goto label_42a510;
        case 0x42a514u: goto label_42a514;
        case 0x42a518u: goto label_42a518;
        case 0x42a51cu: goto label_42a51c;
        case 0x42a520u: goto label_42a520;
        case 0x42a524u: goto label_42a524;
        case 0x42a528u: goto label_42a528;
        case 0x42a52cu: goto label_42a52c;
        case 0x42a530u: goto label_42a530;
        case 0x42a534u: goto label_42a534;
        case 0x42a538u: goto label_42a538;
        case 0x42a53cu: goto label_42a53c;
        case 0x42a540u: goto label_42a540;
        case 0x42a544u: goto label_42a544;
        case 0x42a548u: goto label_42a548;
        case 0x42a54cu: goto label_42a54c;
        case 0x42a550u: goto label_42a550;
        case 0x42a554u: goto label_42a554;
        case 0x42a558u: goto label_42a558;
        case 0x42a55cu: goto label_42a55c;
        case 0x42a560u: goto label_42a560;
        case 0x42a564u: goto label_42a564;
        case 0x42a568u: goto label_42a568;
        case 0x42a56cu: goto label_42a56c;
        case 0x42a570u: goto label_42a570;
        case 0x42a574u: goto label_42a574;
        case 0x42a578u: goto label_42a578;
        case 0x42a57cu: goto label_42a57c;
        case 0x42a580u: goto label_42a580;
        case 0x42a584u: goto label_42a584;
        case 0x42a588u: goto label_42a588;
        case 0x42a58cu: goto label_42a58c;
        case 0x42a590u: goto label_42a590;
        case 0x42a594u: goto label_42a594;
        case 0x42a598u: goto label_42a598;
        case 0x42a59cu: goto label_42a59c;
        case 0x42a5a0u: goto label_42a5a0;
        case 0x42a5a4u: goto label_42a5a4;
        case 0x42a5a8u: goto label_42a5a8;
        case 0x42a5acu: goto label_42a5ac;
        case 0x42a5b0u: goto label_42a5b0;
        case 0x42a5b4u: goto label_42a5b4;
        case 0x42a5b8u: goto label_42a5b8;
        case 0x42a5bcu: goto label_42a5bc;
        case 0x42a5c0u: goto label_42a5c0;
        case 0x42a5c4u: goto label_42a5c4;
        case 0x42a5c8u: goto label_42a5c8;
        case 0x42a5ccu: goto label_42a5cc;
        case 0x42a5d0u: goto label_42a5d0;
        case 0x42a5d4u: goto label_42a5d4;
        case 0x42a5d8u: goto label_42a5d8;
        case 0x42a5dcu: goto label_42a5dc;
        case 0x42a5e0u: goto label_42a5e0;
        case 0x42a5e4u: goto label_42a5e4;
        case 0x42a5e8u: goto label_42a5e8;
        case 0x42a5ecu: goto label_42a5ec;
        case 0x42a5f0u: goto label_42a5f0;
        case 0x42a5f4u: goto label_42a5f4;
        case 0x42a5f8u: goto label_42a5f8;
        case 0x42a5fcu: goto label_42a5fc;
        case 0x42a600u: goto label_42a600;
        case 0x42a604u: goto label_42a604;
        case 0x42a608u: goto label_42a608;
        case 0x42a60cu: goto label_42a60c;
        case 0x42a610u: goto label_42a610;
        case 0x42a614u: goto label_42a614;
        case 0x42a618u: goto label_42a618;
        case 0x42a61cu: goto label_42a61c;
        case 0x42a620u: goto label_42a620;
        case 0x42a624u: goto label_42a624;
        case 0x42a628u: goto label_42a628;
        case 0x42a62cu: goto label_42a62c;
        case 0x42a630u: goto label_42a630;
        case 0x42a634u: goto label_42a634;
        case 0x42a638u: goto label_42a638;
        case 0x42a63cu: goto label_42a63c;
        case 0x42a640u: goto label_42a640;
        case 0x42a644u: goto label_42a644;
        case 0x42a648u: goto label_42a648;
        case 0x42a64cu: goto label_42a64c;
        case 0x42a650u: goto label_42a650;
        case 0x42a654u: goto label_42a654;
        case 0x42a658u: goto label_42a658;
        case 0x42a65cu: goto label_42a65c;
        case 0x42a660u: goto label_42a660;
        case 0x42a664u: goto label_42a664;
        case 0x42a668u: goto label_42a668;
        case 0x42a66cu: goto label_42a66c;
        case 0x42a670u: goto label_42a670;
        case 0x42a674u: goto label_42a674;
        case 0x42a678u: goto label_42a678;
        case 0x42a67cu: goto label_42a67c;
        case 0x42a680u: goto label_42a680;
        case 0x42a684u: goto label_42a684;
        case 0x42a688u: goto label_42a688;
        case 0x42a68cu: goto label_42a68c;
        case 0x42a690u: goto label_42a690;
        case 0x42a694u: goto label_42a694;
        case 0x42a698u: goto label_42a698;
        case 0x42a69cu: goto label_42a69c;
        case 0x42a6a0u: goto label_42a6a0;
        case 0x42a6a4u: goto label_42a6a4;
        case 0x42a6a8u: goto label_42a6a8;
        case 0x42a6acu: goto label_42a6ac;
        case 0x42a6b0u: goto label_42a6b0;
        case 0x42a6b4u: goto label_42a6b4;
        case 0x42a6b8u: goto label_42a6b8;
        case 0x42a6bcu: goto label_42a6bc;
        default: break;
    }

    ctx->pc = 0x429fe8u;

label_429fe8:
    // 0x429fe8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x429fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_429fec:
    // 0x429fec: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x429fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_429ff0:
    // 0x429ff0: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x429ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_429ff4:
    // 0x429ff4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x429ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429ff8:
    // 0x429ff8: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x429ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_429ffc:
    // 0x429ffc: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x429ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_42a000:
    // 0x42a000: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42a000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42a004:
    // 0x42a004: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x42a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_42a008:
    // 0x42a008: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x42a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_42a00c:
    // 0x42a00c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x42a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_42a010:
    // 0x42a010: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x42a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_42a014:
    // 0x42a014: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x42a014u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_42a018:
    // 0x42a018: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x42a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_42a01c:
    // 0x42a01c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x42a01cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_42a020:
    // 0x42a020: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x42a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_42a024:
    // 0x42a024: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x42a024u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_42a028:
    // 0x42a028: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x42a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_42a02c:
    // 0x42a02c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x42a02cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_42a030:
    // 0x42a030: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x42a030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_42a034:
    // 0x42a034: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x42a034u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a038:
    // 0x42a038: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x42a038u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_42a03c:
    // 0x42a03c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x42a03cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_42a040:
    // 0x42a040: 0xc10c4de  jal         func_431378
label_42a044:
    if (ctx->pc == 0x42A044u) {
        ctx->pc = 0x42A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A040u;
        // 0x42a044: 0xa2a0003f  sb          $zero, 0x3F($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 63), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A048u;
        goto label_42a048;
    }
    ctx->pc = 0x42A040u;
    SET_GPR_U32(ctx, 31, 0x42A048u);
    ctx->pc = 0x42A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A040u;
    // 0x42a044: 0xa2a0003f  sb          $zero, 0x3F($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x42A040u, 0x42A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A048u;
label_42a048:
    // 0x42a048: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42a048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42a04c:
    // 0x42a04c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x42a04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a050:
    // 0x42a050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x42a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42a054:
    // 0x42a054: 0xc10ca28  jal         func_4328A0
label_42a058:
    if (ctx->pc == 0x42A058u) {
        ctx->pc = 0x42A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A054u;
        // 0x42a058: 0x24a5bd18  addiu       $a1, $a1, -0x42E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A05Cu;
        goto label_42a05c;
    }
    ctx->pc = 0x42A054u;
    SET_GPR_U32(ctx, 31, 0x42A05Cu);
    ctx->pc = 0x42A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A054u;
    // 0x42a058: 0x24a5bd18  addiu       $a1, $a1, -0x42E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x42A054u, 0x42A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A05Cu;
label_42a05c:
    // 0x42a05c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x42a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
label_42a060:
    // 0x42a060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42a060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a064:
    // 0x42a064: 0xc0547b4  jal         func_151ED0
label_42a068:
    if (ctx->pc == 0x42A068u) {
        ctx->pc = 0x42A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A064u;
        // 0x42a068: 0x24849e20  addiu       $a0, $a0, -0x61E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A06Cu;
        goto label_42a06c;
    }
    ctx->pc = 0x42A064u;
    SET_GPR_U32(ctx, 31, 0x42A06Cu);
    ctx->pc = 0x42A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A064u;
    // 0x42a068: 0x24849e20  addiu       $a0, $a0, -0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151ED0u, 0x42A064u, 0x42A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A06Cu;
label_42a06c:
    // 0x42a06c: 0xc13343c  jal         func_4CD0F0
label_42a070:
    if (ctx->pc == 0x42A070u) {
        ctx->pc = 0x42A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A06Cu;
        // 0x42a070: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A074u;
        goto label_42a074;
    }
    ctx->pc = 0x42A06Cu;
    SET_GPR_U32(ctx, 31, 0x42A074u);
    ctx->pc = 0x42A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A06Cu;
    // 0x42a070: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD0F0u, 0x42A06Cu, 0x42A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A074u;
label_42a074:
    // 0x42a074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42a074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a078:
    // 0x42a078: 0xc11095c  jal         func_442570
label_42a07c:
    if (ctx->pc == 0x42A07Cu) {
        ctx->pc = 0x42A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A078u;
        // 0x42a07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A080u;
        goto label_42a080;
    }
    ctx->pc = 0x42A078u;
    SET_GPR_U32(ctx, 31, 0x42A080u);
    ctx->pc = 0x42A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A078u;
    // 0x42a07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442570u, 0x42A078u, 0x42A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A080u;
label_42a080:
    // 0x42a080: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x42a080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_42a084:
    // 0x42a084: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x42a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_42a088:
    // 0x42a088: 0x2484bd28  addiu       $a0, $a0, -0x42D8
    ctx->pc = 0x42a088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950184));
label_42a08c:
    // 0x42a08c: 0xc10c978  jal         func_4325E0
label_42a090:
    if (ctx->pc == 0x42A090u) {
        ctx->pc = 0x42A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A08Cu;
        // 0x42a090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A094u;
        goto label_42a094;
    }
    ctx->pc = 0x42A08Cu;
    SET_GPR_U32(ctx, 31, 0x42A094u);
    ctx->pc = 0x42A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A08Cu;
    // 0x42a090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x42A08Cu, 0x42A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A094u;
label_42a094:
    // 0x42a094: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x42a094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_42a098:
    // 0x42a098: 0x8e25b9c8  lw          $a1, -0x4638($s1)
    ctx->pc = 0x42a098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_42a09c:
    // 0x42a09c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42a0a0:
    // 0x42a0a0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x42a0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_42a0a4:
    // 0x42a0a4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x42a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_42a0a8:
    // 0x42a0a8: 0x60f809  jalr        $v1
label_42a0ac:
    if (ctx->pc == 0x42A0ACu) {
        ctx->pc = 0x42A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0A8u;
        // 0x42a0ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0B0u;
        goto label_42a0b0;
    }
    ctx->pc = 0x42A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A0B0u);
        ctx->pc = 0x42A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0A8u;
        // 0x42a0ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A0A8u, 0x42A0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A0B0u;
label_42a0b0:
    // 0x42a0b0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x42a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
label_42a0b4:
    // 0x42a0b4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42a0b8:
    // 0x42a0b8: 0x24849f50  addiu       $a0, $a0, -0x60B0
    ctx->pc = 0x42a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942544));
label_42a0bc:
    // 0x42a0bc: 0x24a59fa8  addiu       $a1, $a1, -0x6058
    ctx->pc = 0x42a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942632));
label_42a0c0:
    // 0x42a0c0: 0xae40545c  sw          $zero, 0x545C($s2)
    ctx->pc = 0x42a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 21596), GPR_U32(ctx, 0));
label_42a0c4:
    // 0x42a0c4: 0xc1312e0  jal         func_4C4B80
label_42a0c8:
    if (ctx->pc == 0x42A0C8u) {
        ctx->pc = 0x42A0CCu;
        goto label_42a0cc;
    }
    ctx->pc = 0x42A0C4u;
    SET_GPR_U32(ctx, 31, 0x42A0CCu);
    ctx->pc = 0x4C4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4B80u, 0x42A0C4u, 0x42A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A0CCu;
label_42a0cc:
    // 0x42a0cc: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x42a0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_42a0d0:
    // 0x42a0d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a0d4:
    // 0x42a0d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x42a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42a0d8:
    // 0x42a0d8: 0xc1330dc  jal         func_4CC370
label_42a0dc:
    if (ctx->pc == 0x42A0DCu) {
        ctx->pc = 0x42A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0D8u;
        // 0x42a0dc: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0E0u;
        goto label_42a0e0;
    }
    ctx->pc = 0x42A0D8u;
    SET_GPR_U32(ctx, 31, 0x42A0E0u);
    ctx->pc = 0x42A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A0D8u;
    // 0x42a0dc: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC370u, 0x42A0D8u, 0x42A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A0E0u;
label_42a0e0:
    // 0x42a0e0: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
label_42a0e4:
    if (ctx->pc == 0x42A0E4u) {
        ctx->pc = 0x42A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0E0u;
        // 0x42a0e4: 0x24053fff  addiu       $a1, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0E8u;
        goto label_42a0e8;
    }
    ctx->pc = 0x42A0E0u;
    {
        const bool branch_taken_0x42a0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0E0u;
        // 0x42a0e4: 0x24053fff  addiu       $a1, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a0e0) {
            ctx->pc = 0x42A628u;
            goto label_42a628;
        }
    }
    ctx->pc = 0x42A0E8u;
label_42a0e8:
    // 0x42a0e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42a0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a0ec:
    // 0x42a0ec: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x42a0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_42a0f0:
    // 0x42a0f0: 0x24076665  addiu       $a3, $zero, 0x6665
    ctx->pc = 0x42a0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26213));
label_42a0f4:
    // 0x42a0f4: 0xc1334ae  jal         func_4CD2B8
label_42a0f8:
    if (ctx->pc == 0x42A0F8u) {
        ctx->pc = 0x42A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0F4u;
        // 0x42a0f8: 0x24086665  addiu       $t0, $zero, 0x6665 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26213));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0FCu;
        goto label_42a0fc;
    }
    ctx->pc = 0x42A0F4u;
    SET_GPR_U32(ctx, 31, 0x42A0FCu);
    ctx->pc = 0x42A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A0F4u;
    // 0x42a0f8: 0x24086665  addiu       $t0, $zero, 0x6665 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26213));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD2B8u, 0x42A0F4u, 0x42A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A0FCu;
label_42a0fc:
    // 0x42a0fc: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x42a0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_42a100:
    // 0x42a100: 0x24076665  addiu       $a3, $zero, 0x6665
    ctx->pc = 0x42a100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26213));
label_42a104:
    // 0x42a104: 0x24086665  addiu       $t0, $zero, 0x6665
    ctx->pc = 0x42a104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26213));
label_42a108:
    // 0x42a108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a10c:
    // 0x42a10c: 0xc1334ae  jal         func_4CD2B8
label_42a110:
    if (ctx->pc == 0x42A110u) {
        ctx->pc = 0x42A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A10Cu;
        // 0x42a110: 0x24053fff  addiu       $a1, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A114u;
        goto label_42a114;
    }
    ctx->pc = 0x42A10Cu;
    SET_GPR_U32(ctx, 31, 0x42A114u);
    ctx->pc = 0x42A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A10Cu;
    // 0x42a110: 0x24053fff  addiu       $a1, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD2B8u, 0x42A10Cu, 0x42A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A114u;
label_42a114:
    // 0x42a114: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x42a114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_42a118:
    // 0x42a118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42a118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a11c:
    // 0x42a11c: 0xc1312c4  jal         func_4C4B10
label_42a120:
    if (ctx->pc == 0x42A120u) {
        ctx->pc = 0x42A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A11Cu;
        // 0x42a120: 0x24840198  addiu       $a0, $a0, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A124u;
        goto label_42a124;
    }
    ctx->pc = 0x42A11Cu;
    SET_GPR_U32(ctx, 31, 0x42A124u);
    ctx->pc = 0x42A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A11Cu;
    // 0x42a120: 0x24840198  addiu       $a0, $a0, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4B10u, 0x42A11Cu, 0x42A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A124u;
label_42a124:
    // 0x42a124: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x42a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42a128:
    // 0x42a128: 0xc130734  jal         func_4C1CD0
label_42a12c:
    if (ctx->pc == 0x42A12Cu) {
        ctx->pc = 0x42A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A128u;
        // 0x42a12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A130u;
        goto label_42a130;
    }
    ctx->pc = 0x42A128u;
    SET_GPR_U32(ctx, 31, 0x42A130u);
    ctx->pc = 0x42A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A128u;
    // 0x42a12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1CD0u, 0x42A128u, 0x42A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A130u;
label_42a130:
    // 0x42a130: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x42a130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a134:
    // 0x42a134: 0x56800017  bnel        $s4, $zero, . + 4 + (0x17 << 2)
label_42a138:
    if (ctx->pc == 0x42A138u) {
        ctx->pc = 0x42A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A134u;
        // 0x42a138: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A13Cu;
        goto label_42a13c;
    }
    ctx->pc = 0x42A134u;
    {
        const bool branch_taken_0x42a134 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a134) {
            ctx->pc = 0x42A138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A134u;
            // 0x42a138: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42A194u;
            goto label_42a194;
        }
    }
    ctx->pc = 0x42A13Cu;
label_42a13c:
    // 0x42a13c: 0xc1109b6  jal         func_4426D8
label_42a140:
    if (ctx->pc == 0x42A140u) {
        ctx->pc = 0x42A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A13Cu;
        // 0x42a140: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A144u;
        goto label_42a144;
    }
    ctx->pc = 0x42A13Cu;
    SET_GPR_U32(ctx, 31, 0x42A144u);
    ctx->pc = 0x42A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A13Cu;
    // 0x42a140: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4426D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4426D8u, 0x42A13Cu, 0x42A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A144u;
label_42a144:
    // 0x42a144: 0xc1331ce  jal         func_4CC738
label_42a148:
    if (ctx->pc == 0x42A148u) {
        ctx->pc = 0x42A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A144u;
        // 0x42a148: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A14Cu;
        goto label_42a14c;
    }
    ctx->pc = 0x42A144u;
    SET_GPR_U32(ctx, 31, 0x42A14Cu);
    ctx->pc = 0x42A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A144u;
    // 0x42a148: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC738u, 0x42A144u, 0x42A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A14Cu;
label_42a14c:
    // 0x42a14c: 0xc13129e  jal         func_4C4A78
label_42a150:
    if (ctx->pc == 0x42A150u) {
        ctx->pc = 0x42A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A14Cu;
        // 0x42a150: 0x2610bd50  addiu       $s0, $s0, -0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A154u;
        goto label_42a154;
    }
    ctx->pc = 0x42A14Cu;
    SET_GPR_U32(ctx, 31, 0x42A154u);
    ctx->pc = 0x42A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A14Cu;
    // 0x42a150: 0x2610bd50  addiu       $s0, $s0, -0x42B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4A78u, 0x42A14Cu, 0x42A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A154u;
label_42a154:
    // 0x42a154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a158:
    // 0x42a158: 0xc10c978  jal         func_4325E0
label_42a15c:
    if (ctx->pc == 0x42A15Cu) {
        ctx->pc = 0x42A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A158u;
        // 0x42a15c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A160u;
        goto label_42a160;
    }
    ctx->pc = 0x42A158u;
    SET_GPR_U32(ctx, 31, 0x42A160u);
    ctx->pc = 0x42A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A158u;
    // 0x42a15c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x42A158u, 0x42A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A160u;
label_42a160:
    // 0x42a160: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x42a160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_42a164:
    // 0x42a164: 0x8e25b9c8  lw          $a1, -0x4638($s1)
    ctx->pc = 0x42a164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_42a168:
    // 0x42a168: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42a16c:
    // 0x42a16c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x42a16cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_42a170:
    // 0x42a170: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x42a170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_42a174:
    // 0x42a174: 0x60f809  jalr        $v1
label_42a178:
    if (ctx->pc == 0x42A178u) {
        ctx->pc = 0x42A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A174u;
        // 0x42a178: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A17Cu;
        goto label_42a17c;
    }
    ctx->pc = 0x42A174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A17Cu);
        ctx->pc = 0x42A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A174u;
        // 0x42a178: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A174u, 0x42A17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A17Cu;
label_42a17c:
    // 0x42a17c: 0x10000141  b           . + 4 + (0x141 << 2)
label_42a180:
    if (ctx->pc == 0x42A180u) {
        ctx->pc = 0x42A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A17Cu;
        // 0x42a180: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A184u;
        goto label_42a184;
    }
    ctx->pc = 0x42A17Cu;
    {
        const bool branch_taken_0x42a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A17Cu;
        // 0x42a180: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a17c) {
            ctx->pc = 0x42A684u;
            goto label_42a684;
        }
    }
    ctx->pc = 0x42A184u;
label_42a184:
    // 0x42a184: 0xc10c978  jal         func_4325E0
label_42a188:
    if (ctx->pc == 0x42A188u) {
        ctx->pc = 0x42A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A184u;
        // 0x42a188: 0x2484bd70  addiu       $a0, $a0, -0x4290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A18Cu;
        goto label_42a18c;
    }
    ctx->pc = 0x42A184u;
    SET_GPR_U32(ctx, 31, 0x42A18Cu);
    ctx->pc = 0x42A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A184u;
    // 0x42a188: 0x2484bd70  addiu       $a0, $a0, -0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x42A184u, 0x42A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A18Cu;
label_42a18c:
    // 0x42a18c: 0x10000114  b           . + 4 + (0x114 << 2)
label_42a190:
    if (ctx->pc == 0x42A190u) {
        ctx->pc = 0x42A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A18Cu;
        // 0x42a190: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A194u;
        goto label_42a194;
    }
    ctx->pc = 0x42A18Cu;
    {
        const bool branch_taken_0x42a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A18Cu;
        // 0x42a190: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a18c) {
            ctx->pc = 0x42A5E0u;
            goto label_42a5e0;
        }
    }
    ctx->pc = 0x42A194u;
label_42a194:
    // 0x42a194: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42a198:
    // 0x42a198: 0xaea40040  sw          $a0, 0x40($s5)
    ctx->pc = 0x42a198u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 4));
label_42a19c:
    // 0x42a19c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x42a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_42a1a0:
    // 0x42a1a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42a1a4:
    // 0x42a1a4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x42a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_42a1a8:
    // 0x42a1a8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x42a1a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_42a1ac:
    // 0x42a1ac: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x42a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_42a1b0:
    // 0x42a1b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x42a1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_42a1b4:
    // 0x42a1b4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x42a1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_42a1b8:
    // 0x42a1b8: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x42a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_42a1bc:
    // 0x42a1bc: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x42a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_42a1c0:
    // 0x42a1c0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x42a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_42a1c4:
    // 0x42a1c4: 0x8e24cdb4  lw          $a0, -0x324C($s1)
    ctx->pc = 0x42a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_42a1c8:
    // 0x42a1c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_42a1cc:
    // 0x42a1cc: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x42a1ccu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_42a1d0:
    // 0x42a1d0: 0x24520028  addiu       $s2, $v0, 0x28
    ctx->pc = 0x42a1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_42a1d4:
    // 0x42a1d4: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x42a1d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_42a1d8:
    // 0x42a1d8: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x42a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_42a1dc:
    // 0x42a1dc: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x42a1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_42a1e0:
    // 0x42a1e0: 0xa0f809  jalr        $a1
label_42a1e4:
    if (ctx->pc == 0x42A1E4u) {
        ctx->pc = 0x42A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1E0u;
        // 0x42a1e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A1E8u;
        goto label_42a1e8;
    }
    ctx->pc = 0x42A1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x42A1E8u);
        ctx->pc = 0x42A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1E0u;
        // 0x42a1e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A1E0u, 0x42A1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A1E8u;
label_42a1e8:
    // 0x42a1e8: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x42a1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_42a1ec:
    // 0x42a1ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x42a1ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_42a1f0:
    // 0x42a1f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x42a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_42a1f4:
    // 0x42a1f4: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x42a1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_42a1f8:
    // 0x42a1f8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x42a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_42a1fc:
    // 0x42a1fc: 0x60f809  jalr        $v1
label_42a200:
    if (ctx->pc == 0x42A200u) {
        ctx->pc = 0x42A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1FCu;
        // 0x42a200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A204u;
        goto label_42a204;
    }
    ctx->pc = 0x42A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A204u);
        ctx->pc = 0x42A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1FCu;
        // 0x42a200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A1FCu, 0x42A204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A204u;
label_42a204:
    // 0x42a204: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x42a204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_42a208:
    // 0x42a208: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x42a208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_42a20c:
    // 0x42a20c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42a20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42a210:
    // 0x42a210: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x42a210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_42a214:
    // 0x42a214: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x42a214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_42a218:
    // 0x42a218: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x42a218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_42a21c:
    // 0x42a21c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x42a21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_42a220:
    // 0x42a220: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x42a220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_42a224:
    // 0x42a224: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x42a224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_42a228:
    // 0x42a228: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x42a228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_42a22c:
    // 0x42a22c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x42a22cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_42a230:
    // 0x42a230: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x42a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_42a234:
    // 0x42a234: 0x40f809  jalr        $v0
label_42a238:
    if (ctx->pc == 0x42A238u) {
        ctx->pc = 0x42A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A234u;
        // 0x42a238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A23Cu;
        goto label_42a23c;
    }
    ctx->pc = 0x42A234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A23Cu);
        ctx->pc = 0x42A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A234u;
        // 0x42a238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A234u, 0x42A23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A23Cu;
label_42a23c:
    // 0x42a23c: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x42a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_42a240:
    // 0x42a240: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42a244:
    // 0x42a244: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x42a244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_42a248:
    // 0x42a248: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x42a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_42a24c:
    // 0x42a24c: 0x60f809  jalr        $v1
label_42a250:
    if (ctx->pc == 0x42A250u) {
        ctx->pc = 0x42A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A24Cu;
        // 0x42a250: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A254u;
        goto label_42a254;
    }
    ctx->pc = 0x42A24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A254u);
        ctx->pc = 0x42A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A24Cu;
        // 0x42a250: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A24Cu, 0x42A254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A254u;
label_42a254:
    // 0x42a254: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x42a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_42a258:
    // 0x42a258: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42a258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_42a25c:
    // 0x42a25c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x42a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_42a260:
    // 0x42a260: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x42a260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_42a264:
    // 0x42a264: 0x8c8927e4  lw          $t1, 0x27E4($a0)
    ctx->pc = 0x42a264u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_42a268:
    // 0x42a268: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x42a268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_42a26c:
    // 0x42a26c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x42a26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_42a270:
    // 0x42a270: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42a270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42a274:
    // 0x42a274: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x42a274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_42a278:
    // 0x42a278: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x42a278u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_42a27c:
    // 0x42a27c: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x42a27cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_42a280:
    // 0x42a280: 0x24a5bce8  addiu       $a1, $a1, -0x4318
    ctx->pc = 0x42a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950120));
label_42a284:
    // 0x42a284: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x42a284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_42a288:
    // 0x42a288: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42a288u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a28c:
    // 0x42a28c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x42a28cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_42a290:
    // 0x42a290: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x42a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_42a294:
    // 0x42a294: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x42a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_42a298:
    // 0x42a298: 0x24c6007f  addiu       $a2, $a2, 0x7F
    ctx->pc = 0x42a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
label_42a29c:
    // 0x42a29c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x42a29cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_42a2a0:
    // 0x42a2a0: 0x2508bcf0  addiu       $t0, $t0, -0x4310
    ctx->pc = 0x42a2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950128));
label_42a2a4:
    // 0x42a2a4: 0x254abd68  addiu       $t2, $t2, -0x4298
    ctx->pc = 0x42a2a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294950248));
label_42a2a8:
    // 0x42a2a8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x42a2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_42a2ac:
    // 0x42a2ac: 0x40f809  jalr        $v0
label_42a2b0:
    if (ctx->pc == 0x42A2B0u) {
        ctx->pc = 0x42A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2ACu;
        // 0x42a2b0: 0x2409010f  addiu       $t1, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A2B4u;
        goto label_42a2b4;
    }
    ctx->pc = 0x42A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A2B4u);
        ctx->pc = 0x42A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2ACu;
        // 0x42a2b0: 0x2409010f  addiu       $t1, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A2ACu, 0x42A2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A2B4u;
label_42a2b4:
    // 0x42a2b4: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x42a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_42a2b8:
    // 0x42a2b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x42a2b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a2bc:
    // 0x42a2bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42a2c0:
    // 0x42a2c0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x42a2c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_42a2c4:
    // 0x42a2c4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x42a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42a2c8:
    // 0x42a2c8: 0x40f809  jalr        $v0
label_42a2cc:
    if (ctx->pc == 0x42A2CCu) {
        ctx->pc = 0x42A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2C8u;
        // 0x42a2cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A2D0u;
        goto label_42a2d0;
    }
    ctx->pc = 0x42A2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A2D0u);
        ctx->pc = 0x42A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2C8u;
        // 0x42a2cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A2C8u, 0x42A2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A2D0u;
label_42a2d0:
    // 0x42a2d0: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x42a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_42a2d4:
    // 0x42a2d4: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x42a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_42a2d8:
    // 0x42a2d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42a2dc:
    // 0x42a2dc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x42a2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_42a2e0:
    // 0x42a2e0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x42a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42a2e4:
    // 0x42a2e4: 0x40f809  jalr        $v0
label_42a2e8:
    if (ctx->pc == 0x42A2E8u) {
        ctx->pc = 0x42A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2E4u;
        // 0x42a2e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A2ECu;
        goto label_42a2ec;
    }
    ctx->pc = 0x42A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A2ECu);
        ctx->pc = 0x42A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2E4u;
        // 0x42a2e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A2E4u, 0x42A2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A2ECu;
label_42a2ec:
    // 0x42a2ec: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x42a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_42a2f0:
    // 0x42a2f0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x42a2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a2f4:
    // 0x42a2f4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x42a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_42a2f8:
    // 0x42a2f8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_42a2fc:
    if (ctx->pc == 0x42A2FCu) {
        ctx->pc = 0x42A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2F8u;
        // 0x42a2fc: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A300u;
        goto label_42a300;
    }
    ctx->pc = 0x42A2F8u;
    {
        const bool branch_taken_0x42a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2F8u;
        // 0x42a2fc: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a2f8) {
            ctx->pc = 0x42A5A8u;
            goto label_42a5a8;
        }
    }
    ctx->pc = 0x42A300u;
label_42a300:
    // 0x42a300: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x42a300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_42a304:
    // 0x42a304: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x42a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_42a308:
    // 0x42a308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a30c:
    // 0x42a30c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x42a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_42a310:
    // 0x42a310: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_42a314:
    if (ctx->pc == 0x42A314u) {
        ctx->pc = 0x42A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A310u;
        // 0x42a314: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A318u;
        goto label_42a318;
    }
    ctx->pc = 0x42A310u;
    {
        const bool branch_taken_0x42a310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A310u;
        // 0x42a314: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a310) {
            ctx->pc = 0x42A338u;
            goto label_42a338;
        }
    }
    ctx->pc = 0x42A318u;
label_42a318:
    // 0x42a318: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x42a318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_42a31c:
    // 0x42a31c: 0x0  nop
    ctx->pc = 0x42a31cu;
    // NOP
label_42a320:
    // 0x42a320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42a320u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_42a324:
    // 0x42a324: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x42a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_42a328:
    // 0x42a328: 0x0  nop
    ctx->pc = 0x42a328u;
    // NOP
label_42a32c:
    // 0x42a32c: 0x0  nop
    ctx->pc = 0x42a32cu;
    // NOP
label_42a330:
    // 0x42a330: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_42a334:
    if (ctx->pc == 0x42A334u) {
        ctx->pc = 0x42A338u;
        goto label_42a338;
    }
    ctx->pc = 0x42A330u;
    {
        const bool branch_taken_0x42a330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a330) {
            ctx->pc = 0x42A320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a320;
        }
    }
    ctx->pc = 0x42A338u;
label_42a338:
    // 0x42a338: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x42a338u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
label_42a33c:
    // 0x42a33c: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x42a33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_42a340:
    // 0x42a340: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x42a340u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_42a344:
    // 0x42a344: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x42a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42a348:
    // 0x42a348: 0x3d32825  or          $a1, $fp, $s3
    ctx->pc = 0x42a348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | GPR_U64(ctx, 19));
label_42a34c:
    // 0x42a34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42a34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a350:
    // 0x42a350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42a350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a354:
    // 0x42a354: 0xc1312a2  jal         func_4C4A88
label_42a358:
    if (ctx->pc == 0x42A358u) {
        ctx->pc = 0x42A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A354u;
        // 0x42a358: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A35Cu;
        goto label_42a35c;
    }
    ctx->pc = 0x42A354u;
    SET_GPR_U32(ctx, 31, 0x42A35Cu);
    ctx->pc = 0x42A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A354u;
    // 0x42a358: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4A88u, 0x42A354u, 0x42A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A35Cu;
label_42a35c:
    // 0x42a35c: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_42a360:
    if (ctx->pc == 0x42A360u) {
        ctx->pc = 0x42A364u;
        goto label_42a364;
    }
    ctx->pc = 0x42A35Cu;
    {
        const bool branch_taken_0x42a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a35c) {
            ctx->pc = 0x42A564u;
            goto label_42a564;
        }
    }
    ctx->pc = 0x42A364u;
label_42a364:
    // 0x42a364: 0xc12618a  jal         func_498628
label_42a368:
    if (ctx->pc == 0x42A368u) {
        ctx->pc = 0x42A36Cu;
        goto label_42a36c;
    }
    ctx->pc = 0x42A364u;
    SET_GPR_U32(ctx, 31, 0x42A36Cu);
    ctx->pc = 0x498628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498628u, 0x42A364u, 0x42A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A36Cu;
label_42a36c:
    // 0x42a36c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x42a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42a370:
    // 0x42a370: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x42a370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_42a374:
    // 0x42a374: 0xc1291e6  jal         func_4A4798
label_42a378:
    if (ctx->pc == 0x42A378u) {
        ctx->pc = 0x42A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A374u;
        // 0x42a378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A37Cu;
        goto label_42a37c;
    }
    ctx->pc = 0x42A374u;
    SET_GPR_U32(ctx, 31, 0x42A37Cu);
    ctx->pc = 0x42A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A374u;
    // 0x42a378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x42A374u, 0x42A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A37Cu;
label_42a37c:
    // 0x42a37c: 0x8e44cdb4  lw          $a0, -0x324C($s2)
    ctx->pc = 0x42a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a380:
    // 0x42a380: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_42a384:
    // 0x42a384: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x42a384u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_42a388:
    // 0x42a388: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x42a388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_42a38c:
    // 0x42a38c: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x42a38cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_42a390:
    // 0x42a390: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x42a390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_42a394:
    // 0x42a394: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x42a394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_42a398:
    // 0x42a398: 0xa0f809  jalr        $a1
label_42a39c:
    if (ctx->pc == 0x42A39Cu) {
        ctx->pc = 0x42A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A398u;
        // 0x42a39c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3A0u;
        goto label_42a3a0;
    }
    ctx->pc = 0x42A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x42A3A0u);
        ctx->pc = 0x42A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A398u;
        // 0x42a39c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A398u, 0x42A3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A3A0u;
label_42a3a0:
    // 0x42a3a0: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x42a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a3a4:
    // 0x42a3a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x42a3a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_42a3a8:
    // 0x42a3a8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x42a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_42a3ac:
    // 0x42a3ac: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x42a3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_42a3b0:
    // 0x42a3b0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x42a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_42a3b4:
    // 0x42a3b4: 0x60f809  jalr        $v1
label_42a3b8:
    if (ctx->pc == 0x42A3B8u) {
        ctx->pc = 0x42A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3B4u;
        // 0x42a3b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3BCu;
        goto label_42a3bc;
    }
    ctx->pc = 0x42A3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A3BCu);
        ctx->pc = 0x42A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3B4u;
        // 0x42a3b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A3B4u, 0x42A3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A3BCu;
label_42a3bc:
    // 0x42a3bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42a3c0:
    // 0x42a3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a3c4:
    // 0x42a3c4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x42a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_42a3c8:
    // 0x42a3c8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x42a3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_42a3cc:
    // 0x42a3cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42a3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42a3d0:
    // 0x42a3d0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x42a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_42a3d4:
    // 0x42a3d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x42a3d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_42a3d8:
    // 0x42a3d8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x42a3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_42a3dc:
    // 0x42a3dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x42a3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_42a3e0:
    // 0x42a3e0: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x42a3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_42a3e4:
    // 0x42a3e4: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x42a3e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_42a3e8:
    // 0x42a3e8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x42a3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_42a3ec:
    // 0x42a3ec: 0x40f809  jalr        $v0
label_42a3f0:
    if (ctx->pc == 0x42A3F0u) {
        ctx->pc = 0x42A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3ECu;
        // 0x42a3f0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3F4u;
        goto label_42a3f4;
    }
    ctx->pc = 0x42A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A3F4u);
        ctx->pc = 0x42A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3ECu;
        // 0x42a3f0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A3ECu, 0x42A3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A3F4u;
label_42a3f4:
    // 0x42a3f4: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x42a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a3f8:
    // 0x42a3f8: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x42a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_42a3fc:
    // 0x42a3fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x42a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_42a400:
    // 0x42a400: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x42a400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42a404:
    // 0x42a404: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x42a404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_42a408:
    // 0x42a408: 0xa3a000a8  sb          $zero, 0xA8($sp)
    ctx->pc = 0x42a408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 0));
label_42a40c:
    // 0x42a40c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x42a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_42a410:
    // 0x42a410: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x42a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_42a414:
    // 0x42a414: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x42a414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_42a418:
    // 0x42a418: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x42a418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_42a41c:
    // 0x42a41c: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x42a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_42a420:
    // 0x42a420: 0x40f809  jalr        $v0
label_42a424:
    if (ctx->pc == 0x42A424u) {
        ctx->pc = 0x42A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A420u;
        // 0x42a424: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A428u;
        goto label_42a428;
    }
    ctx->pc = 0x42A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A428u);
        ctx->pc = 0x42A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A420u;
        // 0x42a424: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A420u, 0x42A428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A428u;
label_42a428:
    // 0x42a428: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_42a42c:
    if (ctx->pc == 0x42A42Cu) {
        ctx->pc = 0x42A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A428u;
        // 0x42a42c: 0x8e45cdb4  lw          $a1, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A430u;
        goto label_42a430;
    }
    ctx->pc = 0x42A428u;
    {
        const bool branch_taken_0x42a428 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A428u;
        // 0x42a42c: 0x8e45cdb4  lw          $a1, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a428) {
            ctx->pc = 0x42A440u;
            goto label_42a440;
        }
    }
    ctx->pc = 0x42A430u;
label_42a430:
    // 0x42a430: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x42a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42a434:
    // 0x42a434: 0xc10a9c6  jal         func_42A718
label_42a438:
    if (ctx->pc == 0x42A438u) {
        ctx->pc = 0x42A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A434u;
        // 0x42a438: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A43Cu;
        goto label_42a43c;
    }
    ctx->pc = 0x42A434u;
    SET_GPR_U32(ctx, 31, 0x42A43Cu);
    ctx->pc = 0x42A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A434u;
    // 0x42a438: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A718u, 0x42A434u, 0x42A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A43Cu;
label_42a43c:
    // 0x42a43c: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x42a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a440:
    // 0x42a440: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42a444:
    // 0x42a444: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x42a444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_42a448:
    // 0x42a448: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x42a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_42a44c:
    // 0x42a44c: 0x60f809  jalr        $v1
label_42a450:
    if (ctx->pc == 0x42A450u) {
        ctx->pc = 0x42A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A44Cu;
        // 0x42a450: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A454u;
        goto label_42a454;
    }
    ctx->pc = 0x42A44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A454u);
        ctx->pc = 0x42A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A44Cu;
        // 0x42a450: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A44Cu, 0x42A454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A454u;
label_42a454:
    // 0x42a454: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_42a458:
    // 0x42a458: 0x93a300a4  lbu         $v1, 0xA4($sp)
    ctx->pc = 0x42a458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
label_42a45c:
    // 0x42a45c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x42a45cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a460:
    // 0x42a460: 0x27b100ac  addiu       $s1, $sp, 0xAC
    ctx->pc = 0x42a460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_42a464:
    // 0x42a464: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x42a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
label_42a468:
    // 0x42a468: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x42a468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_42a46c:
    // 0x42a46c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x42a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_42a470:
    // 0x42a470: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_42a474:
    if (ctx->pc == 0x42A474u) {
        ctx->pc = 0x42A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A470u;
        // 0x42a474: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A478u;
        goto label_42a478;
    }
    ctx->pc = 0x42A470u;
    {
        const bool branch_taken_0x42a470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A470u;
        // 0x42a474: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a470) {
            ctx->pc = 0x42A4D0u;
            goto label_42a4d0;
        }
    }
    ctx->pc = 0x42A478u;
label_42a478:
    // 0x42a478: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x42a478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a47c:
    // 0x42a47c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42a480:
    // 0x42a480: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x42a480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_42a484:
    // 0x42a484: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x42a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_42a488:
    // 0x42a488: 0x60f809  jalr        $v1
label_42a48c:
    if (ctx->pc == 0x42A48Cu) {
        ctx->pc = 0x42A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A488u;
        // 0x42a48c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A490u;
        goto label_42a490;
    }
    ctx->pc = 0x42A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A490u);
        ctx->pc = 0x42A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A488u;
        // 0x42a48c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A488u, 0x42A490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A490u;
label_42a490:
    // 0x42a490: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x42a490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a494:
    // 0x42a494: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x42a494u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_42a498:
    // 0x42a498: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42a49c:
    // 0x42a49c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x42a49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_42a4a0:
    // 0x42a4a0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x42a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_42a4a4:
    // 0x42a4a4: 0x60f809  jalr        $v1
label_42a4a8:
    if (ctx->pc == 0x42A4A8u) {
        ctx->pc = 0x42A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4A4u;
        // 0x42a4a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4ACu;
        goto label_42a4ac;
    }
    ctx->pc = 0x42A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A4ACu);
        ctx->pc = 0x42A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4A4u;
        // 0x42a4a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A4A4u, 0x42A4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A4ACu;
label_42a4ac:
    // 0x42a4ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x42a4acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_42a4b0:
    // 0x42a4b0: 0xc10b1c6  jal         func_42C718
label_42a4b4:
    if (ctx->pc == 0x42A4B4u) {
        ctx->pc = 0x42A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4B0u;
        // 0x42a4b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4B8u;
        goto label_42a4b8;
    }
    ctx->pc = 0x42A4B0u;
    SET_GPR_U32(ctx, 31, 0x42A4B8u);
    ctx->pc = 0x42A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A4B0u;
    // 0x42a4b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x42A4B0u, 0x42A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A4B8u;
label_42a4b8:
    // 0x42a4b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42a4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a4bc:
    // 0x42a4bc: 0xc10b1c6  jal         func_42C718
label_42a4c0:
    if (ctx->pc == 0x42A4C0u) {
        ctx->pc = 0x42A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4BCu;
        // 0x42a4c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4C4u;
        goto label_42a4c4;
    }
    ctx->pc = 0x42A4BCu;
    SET_GPR_U32(ctx, 31, 0x42A4C4u);
    ctx->pc = 0x42A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A4BCu;
    // 0x42a4c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x42A4BCu, 0x42A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A4C4u;
label_42a4c4:
    // 0x42a4c4: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x42a4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_42a4c8:
    // 0x42a4c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_42a4cc:
    if (ctx->pc == 0x42A4CCu) {
        ctx->pc = 0x42A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4C8u;
        // 0x42a4cc: 0x102982  srl         $a1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4D0u;
        goto label_42a4d0;
    }
    ctx->pc = 0x42A4C8u;
    {
        const bool branch_taken_0x42a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4C8u;
        // 0x42a4cc: 0x102982  srl         $a1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a4c8) {
            ctx->pc = 0x42A4D4u;
            goto label_42a4d4;
        }
    }
    ctx->pc = 0x42A4D0u;
label_42a4d0:
    // 0x42a4d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42a4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a4d4:
    // 0x42a4d4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x42a4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_42a4d8:
    // 0x42a4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a4dc:
    // 0x42a4dc: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x42a4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_42a4e0:
    // 0x42a4e0: 0xc10a6c6  jal         func_429B18
label_42a4e4:
    if (ctx->pc == 0x42A4E4u) {
        ctx->pc = 0x42A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4E0u;
        // 0x42a4e4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4E8u;
        goto label_42a4e8;
    }
    ctx->pc = 0x42A4E0u;
    SET_GPR_U32(ctx, 31, 0x42A4E8u);
    ctx->pc = 0x42A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A4E0u;
    // 0x42a4e4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429B18u, 0x42A4E0u, 0x42A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A4E8u;
label_42a4e8:
    // 0x42a4e8: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x42a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_42a4ec:
    // 0x42a4ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x42a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_42a4f0:
    // 0x42a4f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42a4f4:
    // 0x42a4f4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x42a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_42a4f8:
    // 0x42a4f8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x42a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_42a4fc:
    // 0x42a4fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x42a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_42a500:
    // 0x42a500: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x42a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_42a504:
    // 0x42a504: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x42a504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_42a508:
    // 0x42a508: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x42a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_42a50c:
    // 0x42a50c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a510:
    // 0x42a510: 0xc12adc8  jal         func_4AB720
label_42a514:
    if (ctx->pc == 0x42A514u) {
        ctx->pc = 0x42A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A510u;
        // 0x42a514: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A518u;
        goto label_42a518;
    }
    ctx->pc = 0x42A510u;
    SET_GPR_U32(ctx, 31, 0x42A518u);
    ctx->pc = 0x42A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A510u;
    // 0x42a514: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x42A510u, 0x42A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A518u;
label_42a518:
    // 0x42a518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42a518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a51c:
    // 0x42a51c: 0xc12ae82  jal         func_4ABA08
label_42a520:
    if (ctx->pc == 0x42A520u) {
        ctx->pc = 0x42A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A51Cu;
        // 0x42a520: 0x26c5ecd0  addiu       $a1, $s6, -0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A524u;
        goto label_42a524;
    }
    ctx->pc = 0x42A51Cu;
    SET_GPR_U32(ctx, 31, 0x42A524u);
    ctx->pc = 0x42A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A51Cu;
    // 0x42a520: 0x26c5ecd0  addiu       $a1, $s6, -0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABA08u, 0x42A51Cu, 0x42A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A524u;
label_42a524:
    // 0x42a524: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_42a528:
    if (ctx->pc == 0x42A528u) {
        ctx->pc = 0x42A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A524u;
        // 0x42a528: 0x8e46cdb4  lw          $a2, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A52Cu;
        goto label_42a52c;
    }
    ctx->pc = 0x42A524u;
    {
        const bool branch_taken_0x42a524 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A524u;
        // 0x42a528: 0x8e46cdb4  lw          $a2, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a524) {
            ctx->pc = 0x42A538u;
            goto label_42a538;
        }
    }
    ctx->pc = 0x42A52Cu;
label_42a52c:
    // 0x42a52c: 0xc10a9fc  jal         func_42A7F0
label_42a530:
    if (ctx->pc == 0x42A530u) {
        ctx->pc = 0x42A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A52Cu;
        // 0x42a530: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A534u;
        goto label_42a534;
    }
    ctx->pc = 0x42A52Cu;
    SET_GPR_U32(ctx, 31, 0x42A534u);
    ctx->pc = 0x42A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A52Cu;
    // 0x42a530: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A7F0u, 0x42A52Cu, 0x42A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A534u;
label_42a534:
    // 0x42a534: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x42a534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42a538:
    // 0x42a538: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42a538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42a53c:
    // 0x42a53c: 0x8c62545c  lw          $v0, 0x545C($v1)
    ctx->pc = 0x42a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21596)));
label_42a540:
    // 0x42a540: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x42a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_42a544:
    // 0x42a544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42a548:
    // 0x42a548: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x42a548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_42a54c:
    // 0x42a54c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x42a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42a550:
    // 0x42a550: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42a550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42a554:
    // 0x42a554: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x42a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_42a558:
    // 0x42a558: 0xac62545c  sw          $v0, 0x545C($v1)
    ctx->pc = 0x42a558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21596), GPR_U32(ctx, 2));
label_42a55c:
    // 0x42a55c: 0xa0f809  jalr        $a1
label_42a560:
    if (ctx->pc == 0x42A560u) {
        ctx->pc = 0x42A564u;
        goto label_42a564;
    }
    ctx->pc = 0x42A55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x42A564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A55Cu, 0x42A564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A564u;
label_42a564:
    // 0x42a564: 0xc130ee8  jal         func_4C3BA0
label_42a568:
    if (ctx->pc == 0x42A568u) {
        ctx->pc = 0x42A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A564u;
        // 0x42a568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A56Cu;
        goto label_42a56c;
    }
    ctx->pc = 0x42A564u;
    SET_GPR_U32(ctx, 31, 0x42A56Cu);
    ctx->pc = 0x42A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A564u;
    // 0x42a568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C3BA0u, 0x42A564u, 0x42A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A56Cu;
label_42a56c:
    // 0x42a56c: 0xc10a796  jal         func_429E58
label_42a570:
    if (ctx->pc == 0x42A570u) {
        ctx->pc = 0x42A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A56Cu;
        // 0x42a570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A574u;
        goto label_42a574;
    }
    ctx->pc = 0x42A56Cu;
    SET_GPR_U32(ctx, 31, 0x42A574u);
    ctx->pc = 0x42A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A56Cu;
    // 0x42a570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429E58u, 0x42A56Cu, 0x42A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A574u;
label_42a574:
    // 0x42a574: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x42a574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_42a578:
    // 0x42a578: 0x1440ff02  bnez        $v0, . + 4 + (-0xFE << 2)
label_42a57c:
    if (ctx->pc == 0x42A57Cu) {
        ctx->pc = 0x42A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A578u;
        // 0x42a57c: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A580u;
        goto label_42a580;
    }
    ctx->pc = 0x42A578u;
    {
        const bool branch_taken_0x42a578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A578u;
        // 0x42a57c: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a578) {
            ctx->pc = 0x42A184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a184;
        }
    }
    ctx->pc = 0x42A580u;
label_42a580:
    // 0x42a580: 0xc05152a  jal         func_1454A8
label_42a584:
    if (ctx->pc == 0x42A584u) {
        ctx->pc = 0x42A588u;
        goto label_42a588;
    }
    ctx->pc = 0x42A580u;
    SET_GPR_U32(ctx, 31, 0x42A588u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x42A580u, 0x42A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A588u;
label_42a588:
    // 0x42a588: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x42a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_42a58c:
    // 0x42a58c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_42a590:
    if (ctx->pc == 0x42A590u) {
        ctx->pc = 0x42A594u;
        goto label_42a594;
    }
    ctx->pc = 0x42A58Cu;
    {
        const bool branch_taken_0x42a58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a58c) {
            ctx->pc = 0x42A5A8u;
            goto label_42a5a8;
        }
    }
    ctx->pc = 0x42A594u;
label_42a594:
    // 0x42a594: 0xc10aa08  jal         func_42A820
label_42a598:
    if (ctx->pc == 0x42A598u) {
        ctx->pc = 0x42A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A594u;
        // 0x42a598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A59Cu;
        goto label_42a59c;
    }
    ctx->pc = 0x42A594u;
    SET_GPR_U32(ctx, 31, 0x42A59Cu);
    ctx->pc = 0x42A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A594u;
    // 0x42a598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A820u, 0x42A594u, 0x42A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A59Cu;
label_42a59c:
    // 0x42a59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a5a0:
    // 0x42a5a0: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_42a5a4:
    if (ctx->pc == 0x42A5A4u) {
        ctx->pc = 0x42A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5A0u;
        // 0x42a5a4: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5A8u;
        goto label_42a5a8;
    }
    ctx->pc = 0x42A5A0u;
    {
        const bool branch_taken_0x42a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x42A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5A0u;
        // 0x42a5a4: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5a0) {
            ctx->pc = 0x42A5E0u;
            goto label_42a5e0;
        }
    }
    ctx->pc = 0x42A5A8u;
label_42a5a8:
    // 0x42a5a8: 0xc13100a  jal         func_4C4028
label_42a5ac:
    if (ctx->pc == 0x42A5ACu) {
        ctx->pc = 0x42A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5A8u;
        // 0x42a5ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5B0u;
        goto label_42a5b0;
    }
    ctx->pc = 0x42A5A8u;
    SET_GPR_U32(ctx, 31, 0x42A5B0u);
    ctx->pc = 0x42A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A5A8u;
    // 0x42a5ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4028u, 0x42A5A8u, 0x42A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A5B0u;
label_42a5b0:
    // 0x42a5b0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_42a5b4:
    if (ctx->pc == 0x42A5B4u) {
        ctx->pc = 0x42A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5B0u;
        // 0x42a5b4: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5B8u;
        goto label_42a5b8;
    }
    ctx->pc = 0x42A5B0u;
    {
        const bool branch_taken_0x42a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a5b0) {
            ctx->pc = 0x42A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A5B0u;
            // 0x42a5b4: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a578;
        }
    }
    ctx->pc = 0x42A5B8u;
label_42a5b8:
    // 0x42a5b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x42a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_42a5bc:
    // 0x42a5bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x42a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42a5c0:
    // 0x42a5c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42a5c4:
    // 0x42a5c4: 0xc130d4a  jal         func_4C3528
label_42a5c8:
    if (ctx->pc == 0x42A5C8u) {
        ctx->pc = 0x42A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5C4u;
        // 0x42a5c8: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5CCu;
        goto label_42a5cc;
    }
    ctx->pc = 0x42A5C4u;
    SET_GPR_U32(ctx, 31, 0x42A5CCu);
    ctx->pc = 0x42A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A5C4u;
    // 0x42a5c8: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C3528u, 0x42A5C4u, 0x42A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A5CCu;
label_42a5cc:
    // 0x42a5cc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x42a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_42a5d0:
    // 0x42a5d0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x42a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_42a5d4:
    // 0x42a5d4: 0x1483ff4a  bne         $a0, $v1, . + 4 + (-0xB6 << 2)
label_42a5d8:
    if (ctx->pc == 0x42A5D8u) {
        ctx->pc = 0x42A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5D4u;
        // 0x42a5d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5DCu;
        goto label_42a5dc;
    }
    ctx->pc = 0x42A5D4u;
    {
        const bool branch_taken_0x42a5d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x42A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5D4u;
        // 0x42a5d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5d4) {
            ctx->pc = 0x42A300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a300;
        }
    }
    ctx->pc = 0x42A5DCu;
label_42a5dc:
    // 0x42a5dc: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x42a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_42a5e0:
    // 0x42a5e0: 0xc1310fa  jal         func_4C43E8
label_42a5e4:
    if (ctx->pc == 0x42A5E4u) {
        ctx->pc = 0x42A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5E0u;
        // 0x42a5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5E8u;
        goto label_42a5e8;
    }
    ctx->pc = 0x42A5E0u;
    SET_GPR_U32(ctx, 31, 0x42A5E8u);
    ctx->pc = 0x42A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A5E0u;
    // 0x42a5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C43E8u, 0x42A5E0u, 0x42A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A5E8u;
label_42a5e8:
    // 0x42a5e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a5ec:
    // 0x42a5ec: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x42a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_42a5f0:
    // 0x42a5f0: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x42a5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_42a5f4:
    // 0x42a5f4: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x42a5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_42a5f8:
    // 0x42a5f8: 0xc1334ae  jal         func_4CD2B8
label_42a5fc:
    if (ctx->pc == 0x42A5FCu) {
        ctx->pc = 0x42A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5F8u;
        // 0x42a5fc: 0x24087fff  addiu       $t0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A600u;
        goto label_42a600;
    }
    ctx->pc = 0x42A5F8u;
    SET_GPR_U32(ctx, 31, 0x42A600u);
    ctx->pc = 0x42A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A5F8u;
    // 0x42a5fc: 0x24087fff  addiu       $t0, $zero, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD2B8u, 0x42A5F8u, 0x42A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A600u;
label_42a600:
    // 0x42a600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a604:
    // 0x42a604: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x42a604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_42a608:
    // 0x42a608: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x42a608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_42a60c:
    // 0x42a60c: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x42a60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_42a610:
    // 0x42a610: 0xc1334ae  jal         func_4CD2B8
label_42a614:
    if (ctx->pc == 0x42A614u) {
        ctx->pc = 0x42A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A610u;
        // 0x42a614: 0x24087fff  addiu       $t0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A618u;
        goto label_42a618;
    }
    ctx->pc = 0x42A610u;
    SET_GPR_U32(ctx, 31, 0x42A618u);
    ctx->pc = 0x42A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A610u;
    // 0x42a614: 0x24087fff  addiu       $t0, $zero, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD2B8u, 0x42A610u, 0x42A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A618u;
label_42a618:
    // 0x42a618: 0xc130f9a  jal         func_4C3E68
label_42a61c:
    if (ctx->pc == 0x42A61Cu) {
        ctx->pc = 0x42A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A618u;
        // 0x42a61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A620u;
        goto label_42a620;
    }
    ctx->pc = 0x42A618u;
    SET_GPR_U32(ctx, 31, 0x42A620u);
    ctx->pc = 0x42A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A618u;
    // 0x42a61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C3E68u, 0x42A618u, 0x42A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A620u;
label_42a620:
    // 0x42a620: 0xc1331ce  jal         func_4CC738
label_42a624:
    if (ctx->pc == 0x42A624u) {
        ctx->pc = 0x42A628u;
        goto label_42a628;
    }
    ctx->pc = 0x42A620u;
    SET_GPR_U32(ctx, 31, 0x42A628u);
    ctx->pc = 0x4CC738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC738u, 0x42A620u, 0x42A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A628u;
label_42a628:
    // 0x42a628: 0xc1109b6  jal         func_4426D8
label_42a62c:
    if (ctx->pc == 0x42A62Cu) {
        ctx->pc = 0x42A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A628u;
        // 0x42a62c: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A630u;
        goto label_42a630;
    }
    ctx->pc = 0x42A628u;
    SET_GPR_U32(ctx, 31, 0x42A630u);
    ctx->pc = 0x42A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A628u;
    // 0x42a62c: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4426D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4426D8u, 0x42A628u, 0x42A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A630u;
label_42a630:
    // 0x42a630: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42a630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42a634:
    // 0x42a634: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x42a634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_42a638:
    // 0x42a638: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x42a638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42a63c:
    // 0x42a63c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x42a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42a640:
    // 0x42a640: 0x24c6bcf0  addiu       $a2, $a2, -0x4310
    ctx->pc = 0x42a640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950128));
label_42a644:
    // 0x42a644: 0x2407019a  addiu       $a3, $zero, 0x19A
    ctx->pc = 0x42a644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_42a648:
    // 0x42a648: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x42a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_42a64c:
    // 0x42a64c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x42a64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_42a650:
    // 0x42a650: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x42a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_42a654:
    // 0x42a654: 0x60f809  jalr        $v1
label_42a658:
    if (ctx->pc == 0x42A658u) {
        ctx->pc = 0x42A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A654u;
        // 0x42a658: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A65Cu;
        goto label_42a65c;
    }
    ctx->pc = 0x42A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A65Cu);
        ctx->pc = 0x42A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A654u;
        // 0x42a658: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A654u, 0x42A65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A65Cu;
label_42a65c:
    // 0x42a65c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42a660:
    // 0x42a660: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x42a660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_42a664:
    // 0x42a664: 0x8c6627e4  lw          $a2, 0x27E4($v1)
    ctx->pc = 0x42a664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_42a668:
    // 0x42a668: 0x8c85b9c8  lw          $a1, -0x4638($a0)
    ctx->pc = 0x42a668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949320)));
label_42a66c:
    // 0x42a66c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42a670:
    // 0x42a670: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x42a670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_42a674:
    // 0x42a674: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x42a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_42a678:
    // 0x42a678: 0x60f809  jalr        $v1
label_42a67c:
    if (ctx->pc == 0x42A67Cu) {
        ctx->pc = 0x42A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A678u;
        // 0x42a67c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A680u;
        goto label_42a680;
    }
    ctx->pc = 0x42A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42A680u);
        ctx->pc = 0x42A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A678u;
        // 0x42a67c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A678u, 0x42A680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A680u;
label_42a680:
    // 0x42a680: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x42a680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42a684:
    // 0x42a684: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x42a684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_42a688:
    // 0x42a688: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x42a688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_42a68c:
    // 0x42a68c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x42a68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_42a690:
    // 0x42a690: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x42a690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_42a694:
    // 0x42a694: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x42a694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_42a698:
    // 0x42a698: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x42a698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_42a69c:
    // 0x42a69c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x42a69cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_42a6a0:
    // 0x42a6a0: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x42a6a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_42a6a4:
    // 0x42a6a4: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x42a6a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_42a6a8:
    // 0x42a6a8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x42a6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_42a6ac:
    // 0x42a6ac: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x42a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_42a6b0:
    // 0x42a6b0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x42a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42a6b4:
    // 0x42a6b4: 0x3e00008  jr          $ra
label_42a6b8:
    if (ctx->pc == 0x42A6B8u) {
        ctx->pc = 0x42A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6B4u;
        // 0x42a6b8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A6BCu;
        goto label_42a6bc;
    }
    ctx->pc = 0x42A6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6B4u;
        // 0x42a6b8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A6BCu;
label_42a6bc:
    // 0x42a6bc: 0x0  nop
    ctx->pc = 0x42a6bcu;
    // NOP
    ctx->pc = 0x42a6c0u;
}
