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

// Function: sub_0011A170
// Address: 0x11a170 - 0x11b108
void sub_0011A170_0x11a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A170_0x11a170");
#endif

    switch (ctx->pc) {
        case 0x11a170u: goto label_11a170;
        case 0x11a174u: goto label_11a174;
        case 0x11a178u: goto label_11a178;
        case 0x11a17cu: goto label_11a17c;
        case 0x11a180u: goto label_11a180;
        case 0x11a184u: goto label_11a184;
        case 0x11a188u: goto label_11a188;
        case 0x11a18cu: goto label_11a18c;
        case 0x11a190u: goto label_11a190;
        case 0x11a194u: goto label_11a194;
        case 0x11a198u: goto label_11a198;
        case 0x11a19cu: goto label_11a19c;
        case 0x11a1a0u: goto label_11a1a0;
        case 0x11a1a4u: goto label_11a1a4;
        case 0x11a1a8u: goto label_11a1a8;
        case 0x11a1acu: goto label_11a1ac;
        case 0x11a1b0u: goto label_11a1b0;
        case 0x11a1b4u: goto label_11a1b4;
        case 0x11a1b8u: goto label_11a1b8;
        case 0x11a1bcu: goto label_11a1bc;
        case 0x11a1c0u: goto label_11a1c0;
        case 0x11a1c4u: goto label_11a1c4;
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a1ccu: goto label_11a1cc;
        case 0x11a1d0u: goto label_11a1d0;
        case 0x11a1d4u: goto label_11a1d4;
        case 0x11a1d8u: goto label_11a1d8;
        case 0x11a1dcu: goto label_11a1dc;
        case 0x11a1e0u: goto label_11a1e0;
        case 0x11a1e4u: goto label_11a1e4;
        case 0x11a1e8u: goto label_11a1e8;
        case 0x11a1ecu: goto label_11a1ec;
        case 0x11a1f0u: goto label_11a1f0;
        case 0x11a1f4u: goto label_11a1f4;
        case 0x11a1f8u: goto label_11a1f8;
        case 0x11a1fcu: goto label_11a1fc;
        case 0x11a200u: goto label_11a200;
        case 0x11a204u: goto label_11a204;
        case 0x11a208u: goto label_11a208;
        case 0x11a20cu: goto label_11a20c;
        case 0x11a210u: goto label_11a210;
        case 0x11a214u: goto label_11a214;
        case 0x11a218u: goto label_11a218;
        case 0x11a21cu: goto label_11a21c;
        case 0x11a220u: goto label_11a220;
        case 0x11a224u: goto label_11a224;
        case 0x11a228u: goto label_11a228;
        case 0x11a22cu: goto label_11a22c;
        case 0x11a230u: goto label_11a230;
        case 0x11a234u: goto label_11a234;
        case 0x11a238u: goto label_11a238;
        case 0x11a23cu: goto label_11a23c;
        case 0x11a240u: goto label_11a240;
        case 0x11a244u: goto label_11a244;
        case 0x11a248u: goto label_11a248;
        case 0x11a24cu: goto label_11a24c;
        case 0x11a250u: goto label_11a250;
        case 0x11a254u: goto label_11a254;
        case 0x11a258u: goto label_11a258;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a260u: goto label_11a260;
        case 0x11a264u: goto label_11a264;
        case 0x11a268u: goto label_11a268;
        case 0x11a26cu: goto label_11a26c;
        case 0x11a270u: goto label_11a270;
        case 0x11a274u: goto label_11a274;
        case 0x11a278u: goto label_11a278;
        case 0x11a27cu: goto label_11a27c;
        case 0x11a280u: goto label_11a280;
        case 0x11a284u: goto label_11a284;
        case 0x11a288u: goto label_11a288;
        case 0x11a28cu: goto label_11a28c;
        case 0x11a290u: goto label_11a290;
        case 0x11a294u: goto label_11a294;
        case 0x11a298u: goto label_11a298;
        case 0x11a29cu: goto label_11a29c;
        case 0x11a2a0u: goto label_11a2a0;
        case 0x11a2a4u: goto label_11a2a4;
        case 0x11a2a8u: goto label_11a2a8;
        case 0x11a2acu: goto label_11a2ac;
        case 0x11a2b0u: goto label_11a2b0;
        case 0x11a2b4u: goto label_11a2b4;
        case 0x11a2b8u: goto label_11a2b8;
        case 0x11a2bcu: goto label_11a2bc;
        case 0x11a2c0u: goto label_11a2c0;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2c8u: goto label_11a2c8;
        case 0x11a2ccu: goto label_11a2cc;
        case 0x11a2d0u: goto label_11a2d0;
        case 0x11a2d4u: goto label_11a2d4;
        case 0x11a2d8u: goto label_11a2d8;
        case 0x11a2dcu: goto label_11a2dc;
        case 0x11a2e0u: goto label_11a2e0;
        case 0x11a2e4u: goto label_11a2e4;
        case 0x11a2e8u: goto label_11a2e8;
        case 0x11a2ecu: goto label_11a2ec;
        case 0x11a2f0u: goto label_11a2f0;
        case 0x11a2f4u: goto label_11a2f4;
        case 0x11a2f8u: goto label_11a2f8;
        case 0x11a2fcu: goto label_11a2fc;
        case 0x11a300u: goto label_11a300;
        case 0x11a304u: goto label_11a304;
        case 0x11a308u: goto label_11a308;
        case 0x11a30cu: goto label_11a30c;
        case 0x11a310u: goto label_11a310;
        case 0x11a314u: goto label_11a314;
        case 0x11a318u: goto label_11a318;
        case 0x11a31cu: goto label_11a31c;
        case 0x11a320u: goto label_11a320;
        case 0x11a324u: goto label_11a324;
        case 0x11a328u: goto label_11a328;
        case 0x11a32cu: goto label_11a32c;
        case 0x11a330u: goto label_11a330;
        case 0x11a334u: goto label_11a334;
        case 0x11a338u: goto label_11a338;
        case 0x11a33cu: goto label_11a33c;
        case 0x11a340u: goto label_11a340;
        case 0x11a344u: goto label_11a344;
        case 0x11a348u: goto label_11a348;
        case 0x11a34cu: goto label_11a34c;
        case 0x11a350u: goto label_11a350;
        case 0x11a354u: goto label_11a354;
        case 0x11a358u: goto label_11a358;
        case 0x11a35cu: goto label_11a35c;
        case 0x11a360u: goto label_11a360;
        case 0x11a364u: goto label_11a364;
        case 0x11a368u: goto label_11a368;
        case 0x11a36cu: goto label_11a36c;
        case 0x11a370u: goto label_11a370;
        case 0x11a374u: goto label_11a374;
        case 0x11a378u: goto label_11a378;
        case 0x11a37cu: goto label_11a37c;
        case 0x11a380u: goto label_11a380;
        case 0x11a384u: goto label_11a384;
        case 0x11a388u: goto label_11a388;
        case 0x11a38cu: goto label_11a38c;
        case 0x11a390u: goto label_11a390;
        case 0x11a394u: goto label_11a394;
        case 0x11a398u: goto label_11a398;
        case 0x11a39cu: goto label_11a39c;
        case 0x11a3a0u: goto label_11a3a0;
        case 0x11a3a4u: goto label_11a3a4;
        case 0x11a3a8u: goto label_11a3a8;
        case 0x11a3acu: goto label_11a3ac;
        case 0x11a3b0u: goto label_11a3b0;
        case 0x11a3b4u: goto label_11a3b4;
        case 0x11a3b8u: goto label_11a3b8;
        case 0x11a3bcu: goto label_11a3bc;
        case 0x11a3c0u: goto label_11a3c0;
        case 0x11a3c4u: goto label_11a3c4;
        case 0x11a3c8u: goto label_11a3c8;
        case 0x11a3ccu: goto label_11a3cc;
        case 0x11a3d0u: goto label_11a3d0;
        case 0x11a3d4u: goto label_11a3d4;
        case 0x11a3d8u: goto label_11a3d8;
        case 0x11a3dcu: goto label_11a3dc;
        case 0x11a3e0u: goto label_11a3e0;
        case 0x11a3e4u: goto label_11a3e4;
        case 0x11a3e8u: goto label_11a3e8;
        case 0x11a3ecu: goto label_11a3ec;
        case 0x11a3f0u: goto label_11a3f0;
        case 0x11a3f4u: goto label_11a3f4;
        case 0x11a3f8u: goto label_11a3f8;
        case 0x11a3fcu: goto label_11a3fc;
        case 0x11a400u: goto label_11a400;
        case 0x11a404u: goto label_11a404;
        case 0x11a408u: goto label_11a408;
        case 0x11a40cu: goto label_11a40c;
        case 0x11a410u: goto label_11a410;
        case 0x11a414u: goto label_11a414;
        case 0x11a418u: goto label_11a418;
        case 0x11a41cu: goto label_11a41c;
        case 0x11a420u: goto label_11a420;
        case 0x11a424u: goto label_11a424;
        case 0x11a428u: goto label_11a428;
        case 0x11a42cu: goto label_11a42c;
        case 0x11a430u: goto label_11a430;
        case 0x11a434u: goto label_11a434;
        case 0x11a438u: goto label_11a438;
        case 0x11a43cu: goto label_11a43c;
        case 0x11a440u: goto label_11a440;
        case 0x11a444u: goto label_11a444;
        case 0x11a448u: goto label_11a448;
        case 0x11a44cu: goto label_11a44c;
        case 0x11a450u: goto label_11a450;
        case 0x11a454u: goto label_11a454;
        case 0x11a458u: goto label_11a458;
        case 0x11a45cu: goto label_11a45c;
        case 0x11a460u: goto label_11a460;
        case 0x11a464u: goto label_11a464;
        case 0x11a468u: goto label_11a468;
        case 0x11a46cu: goto label_11a46c;
        case 0x11a470u: goto label_11a470;
        case 0x11a474u: goto label_11a474;
        case 0x11a478u: goto label_11a478;
        case 0x11a47cu: goto label_11a47c;
        case 0x11a480u: goto label_11a480;
        case 0x11a484u: goto label_11a484;
        case 0x11a488u: goto label_11a488;
        case 0x11a48cu: goto label_11a48c;
        case 0x11a490u: goto label_11a490;
        case 0x11a494u: goto label_11a494;
        case 0x11a498u: goto label_11a498;
        case 0x11a49cu: goto label_11a49c;
        case 0x11a4a0u: goto label_11a4a0;
        case 0x11a4a4u: goto label_11a4a4;
        case 0x11a4a8u: goto label_11a4a8;
        case 0x11a4acu: goto label_11a4ac;
        case 0x11a4b0u: goto label_11a4b0;
        case 0x11a4b4u: goto label_11a4b4;
        case 0x11a4b8u: goto label_11a4b8;
        case 0x11a4bcu: goto label_11a4bc;
        case 0x11a4c0u: goto label_11a4c0;
        case 0x11a4c4u: goto label_11a4c4;
        case 0x11a4c8u: goto label_11a4c8;
        case 0x11a4ccu: goto label_11a4cc;
        case 0x11a4d0u: goto label_11a4d0;
        case 0x11a4d4u: goto label_11a4d4;
        case 0x11a4d8u: goto label_11a4d8;
        case 0x11a4dcu: goto label_11a4dc;
        case 0x11a4e0u: goto label_11a4e0;
        case 0x11a4e4u: goto label_11a4e4;
        case 0x11a4e8u: goto label_11a4e8;
        case 0x11a4ecu: goto label_11a4ec;
        case 0x11a4f0u: goto label_11a4f0;
        case 0x11a4f4u: goto label_11a4f4;
        case 0x11a4f8u: goto label_11a4f8;
        case 0x11a4fcu: goto label_11a4fc;
        case 0x11a500u: goto label_11a500;
        case 0x11a504u: goto label_11a504;
        case 0x11a508u: goto label_11a508;
        case 0x11a50cu: goto label_11a50c;
        case 0x11a510u: goto label_11a510;
        case 0x11a514u: goto label_11a514;
        case 0x11a518u: goto label_11a518;
        case 0x11a51cu: goto label_11a51c;
        case 0x11a520u: goto label_11a520;
        case 0x11a524u: goto label_11a524;
        case 0x11a528u: goto label_11a528;
        case 0x11a52cu: goto label_11a52c;
        case 0x11a530u: goto label_11a530;
        case 0x11a534u: goto label_11a534;
        case 0x11a538u: goto label_11a538;
        case 0x11a53cu: goto label_11a53c;
        case 0x11a540u: goto label_11a540;
        case 0x11a544u: goto label_11a544;
        case 0x11a548u: goto label_11a548;
        case 0x11a54cu: goto label_11a54c;
        case 0x11a550u: goto label_11a550;
        case 0x11a554u: goto label_11a554;
        case 0x11a558u: goto label_11a558;
        case 0x11a55cu: goto label_11a55c;
        case 0x11a560u: goto label_11a560;
        case 0x11a564u: goto label_11a564;
        case 0x11a568u: goto label_11a568;
        case 0x11a56cu: goto label_11a56c;
        case 0x11a570u: goto label_11a570;
        case 0x11a574u: goto label_11a574;
        case 0x11a578u: goto label_11a578;
        case 0x11a57cu: goto label_11a57c;
        case 0x11a580u: goto label_11a580;
        case 0x11a584u: goto label_11a584;
        case 0x11a588u: goto label_11a588;
        case 0x11a58cu: goto label_11a58c;
        case 0x11a590u: goto label_11a590;
        case 0x11a594u: goto label_11a594;
        case 0x11a598u: goto label_11a598;
        case 0x11a59cu: goto label_11a59c;
        case 0x11a5a0u: goto label_11a5a0;
        case 0x11a5a4u: goto label_11a5a4;
        case 0x11a5a8u: goto label_11a5a8;
        case 0x11a5acu: goto label_11a5ac;
        case 0x11a5b0u: goto label_11a5b0;
        case 0x11a5b4u: goto label_11a5b4;
        case 0x11a5b8u: goto label_11a5b8;
        case 0x11a5bcu: goto label_11a5bc;
        case 0x11a5c0u: goto label_11a5c0;
        case 0x11a5c4u: goto label_11a5c4;
        case 0x11a5c8u: goto label_11a5c8;
        case 0x11a5ccu: goto label_11a5cc;
        case 0x11a5d0u: goto label_11a5d0;
        case 0x11a5d4u: goto label_11a5d4;
        case 0x11a5d8u: goto label_11a5d8;
        case 0x11a5dcu: goto label_11a5dc;
        case 0x11a5e0u: goto label_11a5e0;
        case 0x11a5e4u: goto label_11a5e4;
        case 0x11a5e8u: goto label_11a5e8;
        case 0x11a5ecu: goto label_11a5ec;
        case 0x11a5f0u: goto label_11a5f0;
        case 0x11a5f4u: goto label_11a5f4;
        case 0x11a5f8u: goto label_11a5f8;
        case 0x11a5fcu: goto label_11a5fc;
        case 0x11a600u: goto label_11a600;
        case 0x11a604u: goto label_11a604;
        case 0x11a608u: goto label_11a608;
        case 0x11a60cu: goto label_11a60c;
        case 0x11a610u: goto label_11a610;
        case 0x11a614u: goto label_11a614;
        case 0x11a618u: goto label_11a618;
        case 0x11a61cu: goto label_11a61c;
        case 0x11a620u: goto label_11a620;
        case 0x11a624u: goto label_11a624;
        case 0x11a628u: goto label_11a628;
        case 0x11a62cu: goto label_11a62c;
        case 0x11a630u: goto label_11a630;
        case 0x11a634u: goto label_11a634;
        case 0x11a638u: goto label_11a638;
        case 0x11a63cu: goto label_11a63c;
        case 0x11a640u: goto label_11a640;
        case 0x11a644u: goto label_11a644;
        case 0x11a648u: goto label_11a648;
        case 0x11a64cu: goto label_11a64c;
        case 0x11a650u: goto label_11a650;
        case 0x11a654u: goto label_11a654;
        case 0x11a658u: goto label_11a658;
        case 0x11a65cu: goto label_11a65c;
        case 0x11a660u: goto label_11a660;
        case 0x11a664u: goto label_11a664;
        case 0x11a668u: goto label_11a668;
        case 0x11a66cu: goto label_11a66c;
        case 0x11a670u: goto label_11a670;
        case 0x11a674u: goto label_11a674;
        case 0x11a678u: goto label_11a678;
        case 0x11a67cu: goto label_11a67c;
        case 0x11a680u: goto label_11a680;
        case 0x11a684u: goto label_11a684;
        case 0x11a688u: goto label_11a688;
        case 0x11a68cu: goto label_11a68c;
        case 0x11a690u: goto label_11a690;
        case 0x11a694u: goto label_11a694;
        case 0x11a698u: goto label_11a698;
        case 0x11a69cu: goto label_11a69c;
        case 0x11a6a0u: goto label_11a6a0;
        case 0x11a6a4u: goto label_11a6a4;
        case 0x11a6a8u: goto label_11a6a8;
        case 0x11a6acu: goto label_11a6ac;
        case 0x11a6b0u: goto label_11a6b0;
        case 0x11a6b4u: goto label_11a6b4;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6bcu: goto label_11a6bc;
        case 0x11a6c0u: goto label_11a6c0;
        case 0x11a6c4u: goto label_11a6c4;
        case 0x11a6c8u: goto label_11a6c8;
        case 0x11a6ccu: goto label_11a6cc;
        case 0x11a6d0u: goto label_11a6d0;
        case 0x11a6d4u: goto label_11a6d4;
        case 0x11a6d8u: goto label_11a6d8;
        case 0x11a6dcu: goto label_11a6dc;
        case 0x11a6e0u: goto label_11a6e0;
        case 0x11a6e4u: goto label_11a6e4;
        case 0x11a6e8u: goto label_11a6e8;
        case 0x11a6ecu: goto label_11a6ec;
        case 0x11a6f0u: goto label_11a6f0;
        case 0x11a6f4u: goto label_11a6f4;
        case 0x11a6f8u: goto label_11a6f8;
        case 0x11a6fcu: goto label_11a6fc;
        case 0x11a700u: goto label_11a700;
        case 0x11a704u: goto label_11a704;
        case 0x11a708u: goto label_11a708;
        case 0x11a70cu: goto label_11a70c;
        case 0x11a710u: goto label_11a710;
        case 0x11a714u: goto label_11a714;
        case 0x11a718u: goto label_11a718;
        case 0x11a71cu: goto label_11a71c;
        case 0x11a720u: goto label_11a720;
        case 0x11a724u: goto label_11a724;
        case 0x11a728u: goto label_11a728;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a730u: goto label_11a730;
        case 0x11a734u: goto label_11a734;
        case 0x11a738u: goto label_11a738;
        case 0x11a73cu: goto label_11a73c;
        case 0x11a740u: goto label_11a740;
        case 0x11a744u: goto label_11a744;
        case 0x11a748u: goto label_11a748;
        case 0x11a74cu: goto label_11a74c;
        case 0x11a750u: goto label_11a750;
        case 0x11a754u: goto label_11a754;
        case 0x11a758u: goto label_11a758;
        case 0x11a75cu: goto label_11a75c;
        case 0x11a760u: goto label_11a760;
        case 0x11a764u: goto label_11a764;
        case 0x11a768u: goto label_11a768;
        case 0x11a76cu: goto label_11a76c;
        case 0x11a770u: goto label_11a770;
        case 0x11a774u: goto label_11a774;
        case 0x11a778u: goto label_11a778;
        case 0x11a77cu: goto label_11a77c;
        case 0x11a780u: goto label_11a780;
        case 0x11a784u: goto label_11a784;
        case 0x11a788u: goto label_11a788;
        case 0x11a78cu: goto label_11a78c;
        case 0x11a790u: goto label_11a790;
        case 0x11a794u: goto label_11a794;
        case 0x11a798u: goto label_11a798;
        case 0x11a79cu: goto label_11a79c;
        case 0x11a7a0u: goto label_11a7a0;
        case 0x11a7a4u: goto label_11a7a4;
        case 0x11a7a8u: goto label_11a7a8;
        case 0x11a7acu: goto label_11a7ac;
        case 0x11a7b0u: goto label_11a7b0;
        case 0x11a7b4u: goto label_11a7b4;
        case 0x11a7b8u: goto label_11a7b8;
        case 0x11a7bcu: goto label_11a7bc;
        case 0x11a7c0u: goto label_11a7c0;
        case 0x11a7c4u: goto label_11a7c4;
        case 0x11a7c8u: goto label_11a7c8;
        case 0x11a7ccu: goto label_11a7cc;
        case 0x11a7d0u: goto label_11a7d0;
        case 0x11a7d4u: goto label_11a7d4;
        case 0x11a7d8u: goto label_11a7d8;
        case 0x11a7dcu: goto label_11a7dc;
        case 0x11a7e0u: goto label_11a7e0;
        case 0x11a7e4u: goto label_11a7e4;
        case 0x11a7e8u: goto label_11a7e8;
        case 0x11a7ecu: goto label_11a7ec;
        case 0x11a7f0u: goto label_11a7f0;
        case 0x11a7f4u: goto label_11a7f4;
        case 0x11a7f8u: goto label_11a7f8;
        case 0x11a7fcu: goto label_11a7fc;
        case 0x11a800u: goto label_11a800;
        case 0x11a804u: goto label_11a804;
        case 0x11a808u: goto label_11a808;
        case 0x11a80cu: goto label_11a80c;
        case 0x11a810u: goto label_11a810;
        case 0x11a814u: goto label_11a814;
        case 0x11a818u: goto label_11a818;
        case 0x11a81cu: goto label_11a81c;
        case 0x11a820u: goto label_11a820;
        case 0x11a824u: goto label_11a824;
        case 0x11a828u: goto label_11a828;
        case 0x11a82cu: goto label_11a82c;
        case 0x11a830u: goto label_11a830;
        case 0x11a834u: goto label_11a834;
        case 0x11a838u: goto label_11a838;
        case 0x11a83cu: goto label_11a83c;
        case 0x11a840u: goto label_11a840;
        case 0x11a844u: goto label_11a844;
        case 0x11a848u: goto label_11a848;
        case 0x11a84cu: goto label_11a84c;
        case 0x11a850u: goto label_11a850;
        case 0x11a854u: goto label_11a854;
        case 0x11a858u: goto label_11a858;
        case 0x11a85cu: goto label_11a85c;
        case 0x11a860u: goto label_11a860;
        case 0x11a864u: goto label_11a864;
        case 0x11a868u: goto label_11a868;
        case 0x11a86cu: goto label_11a86c;
        case 0x11a870u: goto label_11a870;
        case 0x11a874u: goto label_11a874;
        case 0x11a878u: goto label_11a878;
        case 0x11a87cu: goto label_11a87c;
        case 0x11a880u: goto label_11a880;
        case 0x11a884u: goto label_11a884;
        case 0x11a888u: goto label_11a888;
        case 0x11a88cu: goto label_11a88c;
        case 0x11a890u: goto label_11a890;
        case 0x11a894u: goto label_11a894;
        case 0x11a898u: goto label_11a898;
        case 0x11a89cu: goto label_11a89c;
        case 0x11a8a0u: goto label_11a8a0;
        case 0x11a8a4u: goto label_11a8a4;
        case 0x11a8a8u: goto label_11a8a8;
        case 0x11a8acu: goto label_11a8ac;
        case 0x11a8b0u: goto label_11a8b0;
        case 0x11a8b4u: goto label_11a8b4;
        case 0x11a8b8u: goto label_11a8b8;
        case 0x11a8bcu: goto label_11a8bc;
        case 0x11a8c0u: goto label_11a8c0;
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a8c8u: goto label_11a8c8;
        case 0x11a8ccu: goto label_11a8cc;
        case 0x11a8d0u: goto label_11a8d0;
        case 0x11a8d4u: goto label_11a8d4;
        case 0x11a8d8u: goto label_11a8d8;
        case 0x11a8dcu: goto label_11a8dc;
        case 0x11a8e0u: goto label_11a8e0;
        case 0x11a8e4u: goto label_11a8e4;
        case 0x11a8e8u: goto label_11a8e8;
        case 0x11a8ecu: goto label_11a8ec;
        case 0x11a8f0u: goto label_11a8f0;
        case 0x11a8f4u: goto label_11a8f4;
        case 0x11a8f8u: goto label_11a8f8;
        case 0x11a8fcu: goto label_11a8fc;
        case 0x11a900u: goto label_11a900;
        case 0x11a904u: goto label_11a904;
        case 0x11a908u: goto label_11a908;
        case 0x11a90cu: goto label_11a90c;
        case 0x11a910u: goto label_11a910;
        case 0x11a914u: goto label_11a914;
        case 0x11a918u: goto label_11a918;
        case 0x11a91cu: goto label_11a91c;
        case 0x11a920u: goto label_11a920;
        case 0x11a924u: goto label_11a924;
        case 0x11a928u: goto label_11a928;
        case 0x11a92cu: goto label_11a92c;
        case 0x11a930u: goto label_11a930;
        case 0x11a934u: goto label_11a934;
        case 0x11a938u: goto label_11a938;
        case 0x11a93cu: goto label_11a93c;
        case 0x11a940u: goto label_11a940;
        case 0x11a944u: goto label_11a944;
        case 0x11a948u: goto label_11a948;
        case 0x11a94cu: goto label_11a94c;
        case 0x11a950u: goto label_11a950;
        case 0x11a954u: goto label_11a954;
        case 0x11a958u: goto label_11a958;
        case 0x11a95cu: goto label_11a95c;
        case 0x11a960u: goto label_11a960;
        case 0x11a964u: goto label_11a964;
        case 0x11a968u: goto label_11a968;
        case 0x11a96cu: goto label_11a96c;
        case 0x11a970u: goto label_11a970;
        case 0x11a974u: goto label_11a974;
        case 0x11a978u: goto label_11a978;
        case 0x11a97cu: goto label_11a97c;
        case 0x11a980u: goto label_11a980;
        case 0x11a984u: goto label_11a984;
        case 0x11a988u: goto label_11a988;
        case 0x11a98cu: goto label_11a98c;
        case 0x11a990u: goto label_11a990;
        case 0x11a994u: goto label_11a994;
        case 0x11a998u: goto label_11a998;
        case 0x11a99cu: goto label_11a99c;
        case 0x11a9a0u: goto label_11a9a0;
        case 0x11a9a4u: goto label_11a9a4;
        case 0x11a9a8u: goto label_11a9a8;
        case 0x11a9acu: goto label_11a9ac;
        case 0x11a9b0u: goto label_11a9b0;
        case 0x11a9b4u: goto label_11a9b4;
        case 0x11a9b8u: goto label_11a9b8;
        case 0x11a9bcu: goto label_11a9bc;
        case 0x11a9c0u: goto label_11a9c0;
        case 0x11a9c4u: goto label_11a9c4;
        case 0x11a9c8u: goto label_11a9c8;
        case 0x11a9ccu: goto label_11a9cc;
        case 0x11a9d0u: goto label_11a9d0;
        case 0x11a9d4u: goto label_11a9d4;
        case 0x11a9d8u: goto label_11a9d8;
        case 0x11a9dcu: goto label_11a9dc;
        case 0x11a9e0u: goto label_11a9e0;
        case 0x11a9e4u: goto label_11a9e4;
        case 0x11a9e8u: goto label_11a9e8;
        case 0x11a9ecu: goto label_11a9ec;
        case 0x11a9f0u: goto label_11a9f0;
        case 0x11a9f4u: goto label_11a9f4;
        case 0x11a9f8u: goto label_11a9f8;
        case 0x11a9fcu: goto label_11a9fc;
        case 0x11aa00u: goto label_11aa00;
        case 0x11aa04u: goto label_11aa04;
        case 0x11aa08u: goto label_11aa08;
        case 0x11aa0cu: goto label_11aa0c;
        case 0x11aa10u: goto label_11aa10;
        case 0x11aa14u: goto label_11aa14;
        case 0x11aa18u: goto label_11aa18;
        case 0x11aa1cu: goto label_11aa1c;
        case 0x11aa20u: goto label_11aa20;
        case 0x11aa24u: goto label_11aa24;
        case 0x11aa28u: goto label_11aa28;
        case 0x11aa2cu: goto label_11aa2c;
        case 0x11aa30u: goto label_11aa30;
        case 0x11aa34u: goto label_11aa34;
        case 0x11aa38u: goto label_11aa38;
        case 0x11aa3cu: goto label_11aa3c;
        case 0x11aa40u: goto label_11aa40;
        case 0x11aa44u: goto label_11aa44;
        case 0x11aa48u: goto label_11aa48;
        case 0x11aa4cu: goto label_11aa4c;
        case 0x11aa50u: goto label_11aa50;
        case 0x11aa54u: goto label_11aa54;
        case 0x11aa58u: goto label_11aa58;
        case 0x11aa5cu: goto label_11aa5c;
        case 0x11aa60u: goto label_11aa60;
        case 0x11aa64u: goto label_11aa64;
        case 0x11aa68u: goto label_11aa68;
        case 0x11aa6cu: goto label_11aa6c;
        case 0x11aa70u: goto label_11aa70;
        case 0x11aa74u: goto label_11aa74;
        case 0x11aa78u: goto label_11aa78;
        case 0x11aa7cu: goto label_11aa7c;
        case 0x11aa80u: goto label_11aa80;
        case 0x11aa84u: goto label_11aa84;
        case 0x11aa88u: goto label_11aa88;
        case 0x11aa8cu: goto label_11aa8c;
        case 0x11aa90u: goto label_11aa90;
        case 0x11aa94u: goto label_11aa94;
        case 0x11aa98u: goto label_11aa98;
        case 0x11aa9cu: goto label_11aa9c;
        case 0x11aaa0u: goto label_11aaa0;
        case 0x11aaa4u: goto label_11aaa4;
        case 0x11aaa8u: goto label_11aaa8;
        case 0x11aaacu: goto label_11aaac;
        case 0x11aab0u: goto label_11aab0;
        case 0x11aab4u: goto label_11aab4;
        case 0x11aab8u: goto label_11aab8;
        case 0x11aabcu: goto label_11aabc;
        case 0x11aac0u: goto label_11aac0;
        case 0x11aac4u: goto label_11aac4;
        case 0x11aac8u: goto label_11aac8;
        case 0x11aaccu: goto label_11aacc;
        case 0x11aad0u: goto label_11aad0;
        case 0x11aad4u: goto label_11aad4;
        case 0x11aad8u: goto label_11aad8;
        case 0x11aadcu: goto label_11aadc;
        case 0x11aae0u: goto label_11aae0;
        case 0x11aae4u: goto label_11aae4;
        case 0x11aae8u: goto label_11aae8;
        case 0x11aaecu: goto label_11aaec;
        case 0x11aaf0u: goto label_11aaf0;
        case 0x11aaf4u: goto label_11aaf4;
        case 0x11aaf8u: goto label_11aaf8;
        case 0x11aafcu: goto label_11aafc;
        case 0x11ab00u: goto label_11ab00;
        case 0x11ab04u: goto label_11ab04;
        case 0x11ab08u: goto label_11ab08;
        case 0x11ab0cu: goto label_11ab0c;
        case 0x11ab10u: goto label_11ab10;
        case 0x11ab14u: goto label_11ab14;
        case 0x11ab18u: goto label_11ab18;
        case 0x11ab1cu: goto label_11ab1c;
        case 0x11ab20u: goto label_11ab20;
        case 0x11ab24u: goto label_11ab24;
        case 0x11ab28u: goto label_11ab28;
        case 0x11ab2cu: goto label_11ab2c;
        case 0x11ab30u: goto label_11ab30;
        case 0x11ab34u: goto label_11ab34;
        case 0x11ab38u: goto label_11ab38;
        case 0x11ab3cu: goto label_11ab3c;
        case 0x11ab40u: goto label_11ab40;
        case 0x11ab44u: goto label_11ab44;
        case 0x11ab48u: goto label_11ab48;
        case 0x11ab4cu: goto label_11ab4c;
        case 0x11ab50u: goto label_11ab50;
        case 0x11ab54u: goto label_11ab54;
        case 0x11ab58u: goto label_11ab58;
        case 0x11ab5cu: goto label_11ab5c;
        case 0x11ab60u: goto label_11ab60;
        case 0x11ab64u: goto label_11ab64;
        case 0x11ab68u: goto label_11ab68;
        case 0x11ab6cu: goto label_11ab6c;
        case 0x11ab70u: goto label_11ab70;
        case 0x11ab74u: goto label_11ab74;
        case 0x11ab78u: goto label_11ab78;
        case 0x11ab7cu: goto label_11ab7c;
        case 0x11ab80u: goto label_11ab80;
        case 0x11ab84u: goto label_11ab84;
        case 0x11ab88u: goto label_11ab88;
        case 0x11ab8cu: goto label_11ab8c;
        case 0x11ab90u: goto label_11ab90;
        case 0x11ab94u: goto label_11ab94;
        case 0x11ab98u: goto label_11ab98;
        case 0x11ab9cu: goto label_11ab9c;
        case 0x11aba0u: goto label_11aba0;
        case 0x11aba4u: goto label_11aba4;
        case 0x11aba8u: goto label_11aba8;
        case 0x11abacu: goto label_11abac;
        case 0x11abb0u: goto label_11abb0;
        case 0x11abb4u: goto label_11abb4;
        case 0x11abb8u: goto label_11abb8;
        case 0x11abbcu: goto label_11abbc;
        case 0x11abc0u: goto label_11abc0;
        case 0x11abc4u: goto label_11abc4;
        case 0x11abc8u: goto label_11abc8;
        case 0x11abccu: goto label_11abcc;
        case 0x11abd0u: goto label_11abd0;
        case 0x11abd4u: goto label_11abd4;
        case 0x11abd8u: goto label_11abd8;
        case 0x11abdcu: goto label_11abdc;
        case 0x11abe0u: goto label_11abe0;
        case 0x11abe4u: goto label_11abe4;
        case 0x11abe8u: goto label_11abe8;
        case 0x11abecu: goto label_11abec;
        case 0x11abf0u: goto label_11abf0;
        case 0x11abf4u: goto label_11abf4;
        case 0x11abf8u: goto label_11abf8;
        case 0x11abfcu: goto label_11abfc;
        case 0x11ac00u: goto label_11ac00;
        case 0x11ac04u: goto label_11ac04;
        case 0x11ac08u: goto label_11ac08;
        case 0x11ac0cu: goto label_11ac0c;
        case 0x11ac10u: goto label_11ac10;
        case 0x11ac14u: goto label_11ac14;
        case 0x11ac18u: goto label_11ac18;
        case 0x11ac1cu: goto label_11ac1c;
        case 0x11ac20u: goto label_11ac20;
        case 0x11ac24u: goto label_11ac24;
        case 0x11ac28u: goto label_11ac28;
        case 0x11ac2cu: goto label_11ac2c;
        case 0x11ac30u: goto label_11ac30;
        case 0x11ac34u: goto label_11ac34;
        case 0x11ac38u: goto label_11ac38;
        case 0x11ac3cu: goto label_11ac3c;
        case 0x11ac40u: goto label_11ac40;
        case 0x11ac44u: goto label_11ac44;
        case 0x11ac48u: goto label_11ac48;
        case 0x11ac4cu: goto label_11ac4c;
        case 0x11ac50u: goto label_11ac50;
        case 0x11ac54u: goto label_11ac54;
        case 0x11ac58u: goto label_11ac58;
        case 0x11ac5cu: goto label_11ac5c;
        case 0x11ac60u: goto label_11ac60;
        case 0x11ac64u: goto label_11ac64;
        case 0x11ac68u: goto label_11ac68;
        case 0x11ac6cu: goto label_11ac6c;
        case 0x11ac70u: goto label_11ac70;
        case 0x11ac74u: goto label_11ac74;
        case 0x11ac78u: goto label_11ac78;
        case 0x11ac7cu: goto label_11ac7c;
        case 0x11ac80u: goto label_11ac80;
        case 0x11ac84u: goto label_11ac84;
        case 0x11ac88u: goto label_11ac88;
        case 0x11ac8cu: goto label_11ac8c;
        case 0x11ac90u: goto label_11ac90;
        case 0x11ac94u: goto label_11ac94;
        case 0x11ac98u: goto label_11ac98;
        case 0x11ac9cu: goto label_11ac9c;
        case 0x11aca0u: goto label_11aca0;
        case 0x11aca4u: goto label_11aca4;
        case 0x11aca8u: goto label_11aca8;
        case 0x11acacu: goto label_11acac;
        case 0x11acb0u: goto label_11acb0;
        case 0x11acb4u: goto label_11acb4;
        case 0x11acb8u: goto label_11acb8;
        case 0x11acbcu: goto label_11acbc;
        case 0x11acc0u: goto label_11acc0;
        case 0x11acc4u: goto label_11acc4;
        case 0x11acc8u: goto label_11acc8;
        case 0x11acccu: goto label_11accc;
        case 0x11acd0u: goto label_11acd0;
        case 0x11acd4u: goto label_11acd4;
        case 0x11acd8u: goto label_11acd8;
        case 0x11acdcu: goto label_11acdc;
        case 0x11ace0u: goto label_11ace0;
        case 0x11ace4u: goto label_11ace4;
        case 0x11ace8u: goto label_11ace8;
        case 0x11acecu: goto label_11acec;
        case 0x11acf0u: goto label_11acf0;
        case 0x11acf4u: goto label_11acf4;
        case 0x11acf8u: goto label_11acf8;
        case 0x11acfcu: goto label_11acfc;
        case 0x11ad00u: goto label_11ad00;
        case 0x11ad04u: goto label_11ad04;
        case 0x11ad08u: goto label_11ad08;
        case 0x11ad0cu: goto label_11ad0c;
        case 0x11ad10u: goto label_11ad10;
        case 0x11ad14u: goto label_11ad14;
        case 0x11ad18u: goto label_11ad18;
        case 0x11ad1cu: goto label_11ad1c;
        case 0x11ad20u: goto label_11ad20;
        case 0x11ad24u: goto label_11ad24;
        case 0x11ad28u: goto label_11ad28;
        case 0x11ad2cu: goto label_11ad2c;
        case 0x11ad30u: goto label_11ad30;
        case 0x11ad34u: goto label_11ad34;
        case 0x11ad38u: goto label_11ad38;
        case 0x11ad3cu: goto label_11ad3c;
        case 0x11ad40u: goto label_11ad40;
        case 0x11ad44u: goto label_11ad44;
        case 0x11ad48u: goto label_11ad48;
        case 0x11ad4cu: goto label_11ad4c;
        case 0x11ad50u: goto label_11ad50;
        case 0x11ad54u: goto label_11ad54;
        case 0x11ad58u: goto label_11ad58;
        case 0x11ad5cu: goto label_11ad5c;
        case 0x11ad60u: goto label_11ad60;
        case 0x11ad64u: goto label_11ad64;
        case 0x11ad68u: goto label_11ad68;
        case 0x11ad6cu: goto label_11ad6c;
        case 0x11ad70u: goto label_11ad70;
        case 0x11ad74u: goto label_11ad74;
        case 0x11ad78u: goto label_11ad78;
        case 0x11ad7cu: goto label_11ad7c;
        case 0x11ad80u: goto label_11ad80;
        case 0x11ad84u: goto label_11ad84;
        case 0x11ad88u: goto label_11ad88;
        case 0x11ad8cu: goto label_11ad8c;
        case 0x11ad90u: goto label_11ad90;
        case 0x11ad94u: goto label_11ad94;
        case 0x11ad98u: goto label_11ad98;
        case 0x11ad9cu: goto label_11ad9c;
        case 0x11ada0u: goto label_11ada0;
        case 0x11ada4u: goto label_11ada4;
        case 0x11ada8u: goto label_11ada8;
        case 0x11adacu: goto label_11adac;
        case 0x11adb0u: goto label_11adb0;
        case 0x11adb4u: goto label_11adb4;
        case 0x11adb8u: goto label_11adb8;
        case 0x11adbcu: goto label_11adbc;
        case 0x11adc0u: goto label_11adc0;
        case 0x11adc4u: goto label_11adc4;
        case 0x11adc8u: goto label_11adc8;
        case 0x11adccu: goto label_11adcc;
        case 0x11add0u: goto label_11add0;
        case 0x11add4u: goto label_11add4;
        case 0x11add8u: goto label_11add8;
        case 0x11addcu: goto label_11addc;
        case 0x11ade0u: goto label_11ade0;
        case 0x11ade4u: goto label_11ade4;
        case 0x11ade8u: goto label_11ade8;
        case 0x11adecu: goto label_11adec;
        case 0x11adf0u: goto label_11adf0;
        case 0x11adf4u: goto label_11adf4;
        case 0x11adf8u: goto label_11adf8;
        case 0x11adfcu: goto label_11adfc;
        case 0x11ae00u: goto label_11ae00;
        case 0x11ae04u: goto label_11ae04;
        case 0x11ae08u: goto label_11ae08;
        case 0x11ae0cu: goto label_11ae0c;
        case 0x11ae10u: goto label_11ae10;
        case 0x11ae14u: goto label_11ae14;
        case 0x11ae18u: goto label_11ae18;
        case 0x11ae1cu: goto label_11ae1c;
        case 0x11ae20u: goto label_11ae20;
        case 0x11ae24u: goto label_11ae24;
        case 0x11ae28u: goto label_11ae28;
        case 0x11ae2cu: goto label_11ae2c;
        case 0x11ae30u: goto label_11ae30;
        case 0x11ae34u: goto label_11ae34;
        case 0x11ae38u: goto label_11ae38;
        case 0x11ae3cu: goto label_11ae3c;
        case 0x11ae40u: goto label_11ae40;
        case 0x11ae44u: goto label_11ae44;
        case 0x11ae48u: goto label_11ae48;
        case 0x11ae4cu: goto label_11ae4c;
        case 0x11ae50u: goto label_11ae50;
        case 0x11ae54u: goto label_11ae54;
        case 0x11ae58u: goto label_11ae58;
        case 0x11ae5cu: goto label_11ae5c;
        case 0x11ae60u: goto label_11ae60;
        case 0x11ae64u: goto label_11ae64;
        case 0x11ae68u: goto label_11ae68;
        case 0x11ae6cu: goto label_11ae6c;
        case 0x11ae70u: goto label_11ae70;
        case 0x11ae74u: goto label_11ae74;
        case 0x11ae78u: goto label_11ae78;
        case 0x11ae7cu: goto label_11ae7c;
        case 0x11ae80u: goto label_11ae80;
        case 0x11ae84u: goto label_11ae84;
        case 0x11ae88u: goto label_11ae88;
        case 0x11ae8cu: goto label_11ae8c;
        case 0x11ae90u: goto label_11ae90;
        case 0x11ae94u: goto label_11ae94;
        case 0x11ae98u: goto label_11ae98;
        case 0x11ae9cu: goto label_11ae9c;
        case 0x11aea0u: goto label_11aea0;
        case 0x11aea4u: goto label_11aea4;
        case 0x11aea8u: goto label_11aea8;
        case 0x11aeacu: goto label_11aeac;
        case 0x11aeb0u: goto label_11aeb0;
        case 0x11aeb4u: goto label_11aeb4;
        case 0x11aeb8u: goto label_11aeb8;
        case 0x11aebcu: goto label_11aebc;
        case 0x11aec0u: goto label_11aec0;
        case 0x11aec4u: goto label_11aec4;
        case 0x11aec8u: goto label_11aec8;
        case 0x11aeccu: goto label_11aecc;
        case 0x11aed0u: goto label_11aed0;
        case 0x11aed4u: goto label_11aed4;
        case 0x11aed8u: goto label_11aed8;
        case 0x11aedcu: goto label_11aedc;
        case 0x11aee0u: goto label_11aee0;
        case 0x11aee4u: goto label_11aee4;
        case 0x11aee8u: goto label_11aee8;
        case 0x11aeecu: goto label_11aeec;
        case 0x11aef0u: goto label_11aef0;
        case 0x11aef4u: goto label_11aef4;
        case 0x11aef8u: goto label_11aef8;
        case 0x11aefcu: goto label_11aefc;
        case 0x11af00u: goto label_11af00;
        case 0x11af04u: goto label_11af04;
        case 0x11af08u: goto label_11af08;
        case 0x11af0cu: goto label_11af0c;
        case 0x11af10u: goto label_11af10;
        case 0x11af14u: goto label_11af14;
        case 0x11af18u: goto label_11af18;
        case 0x11af1cu: goto label_11af1c;
        case 0x11af20u: goto label_11af20;
        case 0x11af24u: goto label_11af24;
        case 0x11af28u: goto label_11af28;
        case 0x11af2cu: goto label_11af2c;
        case 0x11af30u: goto label_11af30;
        case 0x11af34u: goto label_11af34;
        case 0x11af38u: goto label_11af38;
        case 0x11af3cu: goto label_11af3c;
        case 0x11af40u: goto label_11af40;
        case 0x11af44u: goto label_11af44;
        case 0x11af48u: goto label_11af48;
        case 0x11af4cu: goto label_11af4c;
        case 0x11af50u: goto label_11af50;
        case 0x11af54u: goto label_11af54;
        case 0x11af58u: goto label_11af58;
        case 0x11af5cu: goto label_11af5c;
        case 0x11af60u: goto label_11af60;
        case 0x11af64u: goto label_11af64;
        case 0x11af68u: goto label_11af68;
        case 0x11af6cu: goto label_11af6c;
        case 0x11af70u: goto label_11af70;
        case 0x11af74u: goto label_11af74;
        case 0x11af78u: goto label_11af78;
        case 0x11af7cu: goto label_11af7c;
        case 0x11af80u: goto label_11af80;
        case 0x11af84u: goto label_11af84;
        case 0x11af88u: goto label_11af88;
        case 0x11af8cu: goto label_11af8c;
        case 0x11af90u: goto label_11af90;
        case 0x11af94u: goto label_11af94;
        case 0x11af98u: goto label_11af98;
        case 0x11af9cu: goto label_11af9c;
        case 0x11afa0u: goto label_11afa0;
        case 0x11afa4u: goto label_11afa4;
        case 0x11afa8u: goto label_11afa8;
        case 0x11afacu: goto label_11afac;
        case 0x11afb0u: goto label_11afb0;
        case 0x11afb4u: goto label_11afb4;
        case 0x11afb8u: goto label_11afb8;
        case 0x11afbcu: goto label_11afbc;
        case 0x11afc0u: goto label_11afc0;
        case 0x11afc4u: goto label_11afc4;
        case 0x11afc8u: goto label_11afc8;
        case 0x11afccu: goto label_11afcc;
        case 0x11afd0u: goto label_11afd0;
        case 0x11afd4u: goto label_11afd4;
        case 0x11afd8u: goto label_11afd8;
        case 0x11afdcu: goto label_11afdc;
        case 0x11afe0u: goto label_11afe0;
        case 0x11afe4u: goto label_11afe4;
        case 0x11afe8u: goto label_11afe8;
        case 0x11afecu: goto label_11afec;
        case 0x11aff0u: goto label_11aff0;
        case 0x11aff4u: goto label_11aff4;
        case 0x11aff8u: goto label_11aff8;
        case 0x11affcu: goto label_11affc;
        case 0x11b000u: goto label_11b000;
        case 0x11b004u: goto label_11b004;
        case 0x11b008u: goto label_11b008;
        case 0x11b00cu: goto label_11b00c;
        case 0x11b010u: goto label_11b010;
        case 0x11b014u: goto label_11b014;
        case 0x11b018u: goto label_11b018;
        case 0x11b01cu: goto label_11b01c;
        case 0x11b020u: goto label_11b020;
        case 0x11b024u: goto label_11b024;
        case 0x11b028u: goto label_11b028;
        case 0x11b02cu: goto label_11b02c;
        case 0x11b030u: goto label_11b030;
        case 0x11b034u: goto label_11b034;
        case 0x11b038u: goto label_11b038;
        case 0x11b03cu: goto label_11b03c;
        case 0x11b040u: goto label_11b040;
        case 0x11b044u: goto label_11b044;
        case 0x11b048u: goto label_11b048;
        case 0x11b04cu: goto label_11b04c;
        case 0x11b050u: goto label_11b050;
        case 0x11b054u: goto label_11b054;
        case 0x11b058u: goto label_11b058;
        case 0x11b05cu: goto label_11b05c;
        case 0x11b060u: goto label_11b060;
        case 0x11b064u: goto label_11b064;
        case 0x11b068u: goto label_11b068;
        case 0x11b06cu: goto label_11b06c;
        case 0x11b070u: goto label_11b070;
        case 0x11b074u: goto label_11b074;
        case 0x11b078u: goto label_11b078;
        case 0x11b07cu: goto label_11b07c;
        case 0x11b080u: goto label_11b080;
        case 0x11b084u: goto label_11b084;
        case 0x11b088u: goto label_11b088;
        case 0x11b08cu: goto label_11b08c;
        case 0x11b090u: goto label_11b090;
        case 0x11b094u: goto label_11b094;
        case 0x11b098u: goto label_11b098;
        case 0x11b09cu: goto label_11b09c;
        case 0x11b0a0u: goto label_11b0a0;
        case 0x11b0a4u: goto label_11b0a4;
        case 0x11b0a8u: goto label_11b0a8;
        case 0x11b0acu: goto label_11b0ac;
        case 0x11b0b0u: goto label_11b0b0;
        case 0x11b0b4u: goto label_11b0b4;
        case 0x11b0b8u: goto label_11b0b8;
        case 0x11b0bcu: goto label_11b0bc;
        case 0x11b0c0u: goto label_11b0c0;
        case 0x11b0c4u: goto label_11b0c4;
        case 0x11b0c8u: goto label_11b0c8;
        case 0x11b0ccu: goto label_11b0cc;
        case 0x11b0d0u: goto label_11b0d0;
        case 0x11b0d4u: goto label_11b0d4;
        case 0x11b0d8u: goto label_11b0d8;
        case 0x11b0dcu: goto label_11b0dc;
        case 0x11b0e0u: goto label_11b0e0;
        case 0x11b0e4u: goto label_11b0e4;
        case 0x11b0e8u: goto label_11b0e8;
        case 0x11b0ecu: goto label_11b0ec;
        case 0x11b0f0u: goto label_11b0f0;
        case 0x11b0f4u: goto label_11b0f4;
        case 0x11b0f8u: goto label_11b0f8;
        case 0x11b0fcu: goto label_11b0fc;
        case 0x11b100u: goto label_11b100;
        case 0x11b104u: goto label_11b104;
        default: break;
    }

    ctx->pc = 0x11a170u;

label_11a170:
    // 0x11a170: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x11a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_11a174:
    // 0x11a174: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11a178:
    // 0x11a178: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x11a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_11a17c:
    // 0x11a17c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x11a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_11a180:
    // 0x11a180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11a180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a184:
    // 0x11a184: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x11a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_11a188:
    // 0x11a188: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x11a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_11a18c:
    // 0x11a18c: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x11a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_11a190:
    // 0x11a190: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x11a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_11a194:
    // 0x11a194: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x11a194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_11a198:
    // 0x11a198: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x11a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_11a19c:
    // 0x11a19c: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x11a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_11a1a0:
    // 0x11a1a0: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x11a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_11a1a4:
    // 0x11a1a4: 0xe7bd01d8  swc1        $f29, 0x1D8($sp)
    ctx->pc = 0x11a1a4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_11a1a8:
    // 0x11a1a8: 0xe7bc01d0  swc1        $f28, 0x1D0($sp)
    ctx->pc = 0x11a1a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_11a1ac:
    // 0x11a1ac: 0xe7bb01c8  swc1        $f27, 0x1C8($sp)
    ctx->pc = 0x11a1acu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_11a1b0:
    // 0x11a1b0: 0xe7ba01c0  swc1        $f26, 0x1C0($sp)
    ctx->pc = 0x11a1b0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_11a1b4:
    // 0x11a1b4: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x11a1b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_11a1b8:
    // 0x11a1b8: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x11a1b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_11a1bc:
    // 0x11a1bc: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x11a1bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_11a1c0:
    // 0x11a1c0: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x11a1c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_11a1c4:
    // 0x11a1c4: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x11a1c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_11a1c8:
    // 0x11a1c8: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x11a1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_11a1cc:
    // 0x11a1cc: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x11a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_11a1d0:
    // 0x11a1d0: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x11a1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
label_11a1d4:
    // 0x11a1d4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_11a1d8:
    if (ctx->pc == 0x11A1D8u) {
        ctx->pc = 0x11A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1D4u;
        // 0x11a1d8: 0x8e6500a4  lw          $a1, 0xA4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A1DCu;
        goto label_11a1dc;
    }
    ctx->pc = 0x11A1D4u;
    {
        const bool branch_taken_0x11a1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a1d4) {
            ctx->pc = 0x11A1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A1D4u;
            // 0x11a1d8: 0x8e6500a4  lw          $a1, 0xA4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A1E4u;
            goto label_11a1e4;
        }
    }
    ctx->pc = 0x11A1DCu;
label_11a1dc:
    // 0x11a1dc: 0x100003b3  b           . + 4 + (0x3B3 << 2)
label_11a1e0:
    if (ctx->pc == 0x11A1E0u) {
        ctx->pc = 0x11A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1DCu;
        // 0x11a1e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A1E4u;
        goto label_11a1e4;
    }
    ctx->pc = 0x11A1DCu;
    {
        const bool branch_taken_0x11a1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1DCu;
        // 0x11a1e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1dc) {
            ctx->pc = 0x11B0ACu;
            goto label_11b0ac;
        }
    }
    ctx->pc = 0x11A1E4u;
label_11a1e4:
    // 0x11a1e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11a1e8:
    // 0x11a1e8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x11a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_11a1ec:
    // 0x11a1ec: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x11a1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_11a1f0:
    // 0x11a1f0: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x11a1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_11a1f4:
    // 0x11a1f4: 0xc044b12  jal         func_112C48
label_11a1f8:
    if (ctx->pc == 0x11A1F8u) {
        ctx->pc = 0x11A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1F4u;
        // 0x11a1f8: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A1FCu;
        goto label_11a1fc;
    }
    ctx->pc = 0x11A1F4u;
    SET_GPR_U32(ctx, 31, 0x11A1FCu);
    ctx->pc = 0x11A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1F4u;
    // 0x11a1f8: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C48u, 0x11A1F4u, 0x11A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1FCu;
label_11a1fc:
    // 0x11a1fc: 0xc043c06  jal         func_10F018
label_11a200:
    if (ctx->pc == 0x11A200u) {
        ctx->pc = 0x11A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1FCu;
        // 0x11a200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A204u;
        goto label_11a204;
    }
    ctx->pc = 0x11A1FCu;
    SET_GPR_U32(ctx, 31, 0x11A204u);
    ctx->pc = 0x11A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1FCu;
    // 0x11a200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F018u, 0x11A1FCu, 0x11A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A204u;
label_11a204:
    // 0x11a204: 0x544000d1  bnel        $v0, $zero, . + 4 + (0xD1 << 2)
label_11a208:
    if (ctx->pc == 0x11A208u) {
        ctx->pc = 0x11A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A204u;
        // 0x11a208: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A20Cu;
        goto label_11a20c;
    }
    ctx->pc = 0x11A204u;
    {
        const bool branch_taken_0x11a204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a204) {
            ctx->pc = 0x11A208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A204u;
            // 0x11a208: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A54Cu;
            goto label_11a54c;
        }
    }
    ctx->pc = 0x11A20Cu;
label_11a20c:
    // 0x11a20c: 0x9263007c  lbu         $v1, 0x7C($s3)
    ctx->pc = 0x11a20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 124)));
label_11a210:
    // 0x11a210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a214:
    // 0x11a214: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_11a218:
    if (ctx->pc == 0x11A218u) {
        ctx->pc = 0x11A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A214u;
        // 0x11a218: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A21Cu;
        goto label_11a21c;
    }
    ctx->pc = 0x11A214u;
    {
        const bool branch_taken_0x11a214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A214u;
        // 0x11a218: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a214) {
            ctx->pc = 0x11A2CCu;
            goto label_11a2cc;
        }
    }
    ctx->pc = 0x11A21Cu;
label_11a21c:
    // 0x11a21c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11a220:
    // 0x11a220: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x11a220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_11a224:
    // 0x11a224: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_11a228:
    // 0x11a228: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_11a22c:
    // 0x11a22c: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x11a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_11a230:
    // 0x11a230: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11a234:
    if (ctx->pc == 0x11A234u) {
        ctx->pc = 0x11A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A230u;
        // 0x11a234: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A238u;
        goto label_11a238;
    }
    ctx->pc = 0x11A230u;
    {
        const bool branch_taken_0x11a230 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A230u;
        // 0x11a234: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a230) {
            ctx->pc = 0x11A24Cu;
            goto label_11a24c;
        }
    }
    ctx->pc = 0x11A238u;
label_11a238:
    // 0x11a238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a23c:
    // 0x11a23c: 0x0  nop
    ctx->pc = 0x11a23cu;
    // NOP
label_11a240:
    // 0x11a240: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11a244:
    // 0x11a244: 0x10000008  b           . + 4 + (0x8 << 2)
label_11a248:
    if (ctx->pc == 0x11A248u) {
        ctx->pc = 0x11A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A244u;
        // 0x11a248: 0x8e620084  lw          $v0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A24Cu;
        goto label_11a24c;
    }
    ctx->pc = 0x11A244u;
    {
        const bool branch_taken_0x11a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A244u;
        // 0x11a248: 0x8e620084  lw          $v0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a244) {
            ctx->pc = 0x11A268u;
            goto label_11a268;
        }
    }
    ctx->pc = 0x11A24Cu;
label_11a24c:
    // 0x11a24c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11a250:
    // 0x11a250: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11a254:
    // 0x11a254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a258:
    // 0x11a258: 0x0  nop
    ctx->pc = 0x11a258u;
    // NOP
label_11a25c:
    // 0x11a25c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11a260:
    // 0x11a260: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11a260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11a264:
    // 0x11a264: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x11a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_11a268:
    // 0x11a268: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11a26c:
    if (ctx->pc == 0x11A26Cu) {
        ctx->pc = 0x11A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A268u;
        // 0x11a26c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A270u;
        goto label_11a270;
    }
    ctx->pc = 0x11A268u;
    {
        const bool branch_taken_0x11a268 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A268u;
        // 0x11a26c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a268) {
            ctx->pc = 0x11A284u;
            goto label_11a284;
        }
    }
    ctx->pc = 0x11A270u;
label_11a270:
    // 0x11a270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a274:
    // 0x11a274: 0x0  nop
    ctx->pc = 0x11a274u;
    // NOP
label_11a278:
    // 0x11a278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11a27c:
    // 0x11a27c: 0x10000007  b           . + 4 + (0x7 << 2)
label_11a280:
    if (ctx->pc == 0x11A280u) {
        ctx->pc = 0x11A284u;
        goto label_11a284;
    }
    ctx->pc = 0x11A27Cu;
    {
        const bool branch_taken_0x11a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a27c) {
            ctx->pc = 0x11A29Cu;
            goto label_11a29c;
        }
    }
    ctx->pc = 0x11A284u;
label_11a284:
    // 0x11a284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11a288:
    // 0x11a288: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11a28c:
    // 0x11a28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a290:
    // 0x11a290: 0x0  nop
    ctx->pc = 0x11a290u;
    // NOP
label_11a294:
    // 0x11a294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11a298:
    // 0x11a298: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11a298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11a29c:
    // 0x11a29c: 0x0  nop
    ctx->pc = 0x11a29cu;
    // NOP
label_11a2a0:
    // 0x11a2a0: 0x0  nop
    ctx->pc = 0x11a2a0u;
    // NOP
label_11a2a4:
    // 0x11a2a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11a2a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11a2a8:
    // 0x11a2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a2ac:
    // 0x11a2ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a2b0:
    // 0x11a2b0: 0x0  nop
    ctx->pc = 0x11a2b0u;
    // NOP
label_11a2b4:
    // 0x11a2b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11a2b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a2b8:
    // 0x11a2b8: 0x0  nop
    ctx->pc = 0x11a2b8u;
    // NOP
label_11a2bc:
    // 0x11a2bc: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_11a2c0:
    if (ctx->pc == 0x11A2C0u) {
        ctx->pc = 0x11A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2BCu;
        // 0x11a2c0: 0xe6600078  swc1        $f0, 0x78($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2C4u;
        goto label_11a2c4;
    }
    ctx->pc = 0x11A2BCu;
    {
        const bool branch_taken_0x11a2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2BCu;
        // 0x11a2c0: 0xe6600078  swc1        $f0, 0x78($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2bc) {
            ctx->pc = 0x11A390u;
            goto label_11a390;
        }
    }
    ctx->pc = 0x11A2C4u;
label_11a2c4:
    // 0x11a2c4: 0x10000031  b           . + 4 + (0x31 << 2)
label_11a2c8:
    if (ctx->pc == 0x11A2C8u) {
        ctx->pc = 0x11A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2C4u;
        // 0x11a2c8: 0xe6610078  swc1        $f1, 0x78($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2CCu;
        goto label_11a2cc;
    }
    ctx->pc = 0x11A2C4u;
    {
        const bool branch_taken_0x11a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2C4u;
        // 0x11a2c8: 0xe6610078  swc1        $f1, 0x78($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2c4) {
            ctx->pc = 0x11A38Cu;
            goto label_11a38c;
        }
    }
    ctx->pc = 0x11A2CCu;
label_11a2cc:
    // 0x11a2cc: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_11a2d0:
    if (ctx->pc == 0x11A2D0u) {
        ctx->pc = 0x11A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2CCu;
        // 0x11a2d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2D4u;
        goto label_11a2d4;
    }
    ctx->pc = 0x11A2CCu;
    {
        const bool branch_taken_0x11a2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2CCu;
        // 0x11a2d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2cc) {
            ctx->pc = 0x11A394u;
            goto label_11a394;
        }
    }
    ctx->pc = 0x11A2D4u;
label_11a2d4:
    // 0x11a2d4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11a2d8:
    // 0x11a2d8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x11a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_11a2dc:
    // 0x11a2dc: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x11a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_11a2e0:
    // 0x11a2e0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x11a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_11a2e4:
    // 0x11a2e4: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x11a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_11a2e8:
    // 0x11a2e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11a2ec:
    if (ctx->pc == 0x11A2ECu) {
        ctx->pc = 0x11A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2E8u;
        // 0x11a2ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2F0u;
        goto label_11a2f0;
    }
    ctx->pc = 0x11A2E8u;
    {
        const bool branch_taken_0x11a2e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2E8u;
        // 0x11a2ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2e8) {
            ctx->pc = 0x11A304u;
            goto label_11a304;
        }
    }
    ctx->pc = 0x11A2F0u;
label_11a2f0:
    // 0x11a2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a2f4:
    // 0x11a2f4: 0x0  nop
    ctx->pc = 0x11a2f4u;
    // NOP
label_11a2f8:
    // 0x11a2f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11a2fc:
    // 0x11a2fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_11a300:
    if (ctx->pc == 0x11A300u) {
        ctx->pc = 0x11A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2FCu;
        // 0x11a300: 0x8e620084  lw          $v0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A304u;
        goto label_11a304;
    }
    ctx->pc = 0x11A2FCu;
    {
        const bool branch_taken_0x11a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2FCu;
        // 0x11a300: 0x8e620084  lw          $v0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2fc) {
            ctx->pc = 0x11A320u;
            goto label_11a320;
        }
    }
    ctx->pc = 0x11A304u;
label_11a304:
    // 0x11a304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11a308:
    // 0x11a308: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11a30c:
    // 0x11a30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a310:
    // 0x11a310: 0x0  nop
    ctx->pc = 0x11a310u;
    // NOP
label_11a314:
    // 0x11a314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11a318:
    // 0x11a318: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11a318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11a31c:
    // 0x11a31c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x11a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_11a320:
    // 0x11a320: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11a324:
    if (ctx->pc == 0x11A324u) {
        ctx->pc = 0x11A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A320u;
        // 0x11a324: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A328u;
        goto label_11a328;
    }
    ctx->pc = 0x11A320u;
    {
        const bool branch_taken_0x11a320 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A320u;
        // 0x11a324: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a320) {
            ctx->pc = 0x11A33Cu;
            goto label_11a33c;
        }
    }
    ctx->pc = 0x11A328u;
label_11a328:
    // 0x11a328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a32c:
    // 0x11a32c: 0x0  nop
    ctx->pc = 0x11a32cu;
    // NOP
label_11a330:
    // 0x11a330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11a334:
    // 0x11a334: 0x10000007  b           . + 4 + (0x7 << 2)
label_11a338:
    if (ctx->pc == 0x11A338u) {
        ctx->pc = 0x11A33Cu;
        goto label_11a33c;
    }
    ctx->pc = 0x11A334u;
    {
        const bool branch_taken_0x11a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a334) {
            ctx->pc = 0x11A354u;
            goto label_11a354;
        }
    }
    ctx->pc = 0x11A33Cu;
label_11a33c:
    // 0x11a33c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11a340:
    // 0x11a340: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11a344:
    // 0x11a344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a348:
    // 0x11a348: 0x0  nop
    ctx->pc = 0x11a348u;
    // NOP
label_11a34c:
    // 0x11a34c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11a350:
    // 0x11a350: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11a350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11a354:
    // 0x11a354: 0x0  nop
    ctx->pc = 0x11a354u;
    // NOP
label_11a358:
    // 0x11a358: 0x0  nop
    ctx->pc = 0x11a358u;
    // NOP
label_11a35c:
    // 0x11a35c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x11a35cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_11a360:
    // 0x11a360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a364:
    // 0x11a364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a368:
    // 0x11a368: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11a368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11a36c:
    // 0x11a36c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a36cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11a370:
    // 0x11a370: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11a370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a374:
    // 0x11a374: 0x0  nop
    ctx->pc = 0x11a374u;
    // NOP
label_11a378:
    // 0x11a378: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_11a37c:
    if (ctx->pc == 0x11A37Cu) {
        ctx->pc = 0x11A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A378u;
        // 0x11a37c: 0xe6600078  swc1        $f0, 0x78($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A380u;
        goto label_11a380;
    }
    ctx->pc = 0x11A378u;
    {
        const bool branch_taken_0x11a378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A378u;
        // 0x11a37c: 0xe6600078  swc1        $f0, 0x78($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a378) {
            ctx->pc = 0x11A390u;
            goto label_11a390;
        }
    }
    ctx->pc = 0x11A380u;
label_11a380:
    // 0x11a380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a384:
    // 0x11a384: 0xe6620078  swc1        $f2, 0x78($s3)
    ctx->pc = 0x11a384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_11a388:
    // 0x11a388: 0xa2620094  sb          $v0, 0x94($s3)
    ctx->pc = 0x11a388u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
label_11a38c:
    // 0x11a38c: 0xa260007c  sb          $zero, 0x7C($s3)
    ctx->pc = 0x11a38cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 0));
label_11a390:
    // 0x11a390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11a390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11a394:
    // 0x11a394: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11a394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11a398:
    // 0x11a398: 0x8c43aa84  lw          $v1, -0x557C($v0)
    ctx->pc = 0x11a398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_11a39c:
    // 0x11a39c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x11a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_11a3a0:
    // 0x11a3a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x11a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_11a3a4:
    // 0x11a3a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11a3a8:
    // 0x11a3a8: 0xc043c62  jal         func_10F188
label_11a3ac:
    if (ctx->pc == 0x11A3ACu) {
        ctx->pc = 0x11A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A8u;
        // 0x11a3ac: 0xc4757a20  lwc1        $f21, 0x7A20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3B0u;
        goto label_11a3b0;
    }
    ctx->pc = 0x11A3A8u;
    SET_GPR_U32(ctx, 31, 0x11A3B0u);
    ctx->pc = 0x11A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3A8u;
    // 0x11a3ac: 0xc4757a20  lwc1        $f21, 0x7A20($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F188u, 0x11A3A8u, 0x11A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3B0u;
label_11a3b0:
    // 0x11a3b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11a3b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_11a3b4:
    // 0x11a3b4: 0xc043c20  jal         func_10F080
label_11a3b8:
    if (ctx->pc == 0x11A3B8u) {
        ctx->pc = 0x11A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3B4u;
        // 0x11a3b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3BCu;
        goto label_11a3bc;
    }
    ctx->pc = 0x11A3B4u;
    SET_GPR_U32(ctx, 31, 0x11A3BCu);
    ctx->pc = 0x11A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3B4u;
    // 0x11a3b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x11A3B4u, 0x11A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3BCu;
label_11a3bc:
    // 0x11a3bc: 0x3c03510b  lui         $v1, 0x510B
    ctx->pc = 0x11a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20747 << 16));
label_11a3c0:
    // 0x11a3c0: 0x3463b577  ori         $v1, $v1, 0xB577
    ctx->pc = 0x11a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46455);
label_11a3c4:
    // 0x11a3c4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_11a3c8:
    if (ctx->pc == 0x11A3C8u) {
        ctx->pc = 0x11A3CCu;
        goto label_11a3cc;
    }
    ctx->pc = 0x11A3C4u;
    {
        const bool branch_taken_0x11a3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11a3c4) {
            ctx->pc = 0x11A3E4u;
            goto label_11a3e4;
        }
    }
    ctx->pc = 0x11A3CCu;
label_11a3cc:
    // 0x11a3cc: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x11a3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a3d0:
    // 0x11a3d0: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x11a3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a3d4:
    // 0x11a3d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_11a3d8:
    // 0x11a3d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11a3d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11a3dc:
    // 0x11a3dc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_11a3e0:
    if (ctx->pc == 0x11A3E0u) {
        ctx->pc = 0x11A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3DCu;
        // 0x11a3e0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3E4u;
        goto label_11a3e4;
    }
    ctx->pc = 0x11A3DCu;
    {
        const bool branch_taken_0x11a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3DCu;
        // 0x11a3e0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3dc) {
            ctx->pc = 0x11A448u;
            goto label_11a448;
        }
    }
    ctx->pc = 0x11A3E4u;
label_11a3e4:
    // 0x11a3e4: 0xc043ca8  jal         func_10F2A0
label_11a3e8:
    if (ctx->pc == 0x11A3E8u) {
        ctx->pc = 0x11A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3E4u;
        // 0x11a3e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3ECu;
        goto label_11a3ec;
    }
    ctx->pc = 0x11A3E4u;
    SET_GPR_U32(ctx, 31, 0x11A3ECu);
    ctx->pc = 0x11A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3E4u;
    // 0x11a3e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x11A3E4u, 0x11A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3ECu;
label_11a3ec:
    // 0x11a3ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a3f0:
    // 0x11a3f0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_11a3f4:
    if (ctx->pc == 0x11A3F4u) {
        ctx->pc = 0x11A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F0u;
        // 0x11a3f4: 0x4615a002  mul.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3F8u;
        goto label_11a3f8;
    }
    ctx->pc = 0x11A3F0u;
    {
        const bool branch_taken_0x11a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F0u;
        // 0x11a3f4: 0x4615a002  mul.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3f0) {
            ctx->pc = 0x11A41Cu;
            goto label_11a41c;
        }
    }
    ctx->pc = 0x11A3F8u;
label_11a3f8:
    // 0x11a3f8: 0xc6620078  lwc1        $f2, 0x78($s3)
    ctx->pc = 0x11a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11a3fc:
    // 0x11a3fc: 0xc6630074  lwc1        $f3, 0x74($s3)
    ctx->pc = 0x11a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11a400:
    // 0x11a400: 0xc6640050  lwc1        $f4, 0x50($s3)
    ctx->pc = 0x11a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11a404:
    // 0x11a404: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11a404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_11a408:
    // 0x11a408: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x11a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a40c:
    // 0x11a40c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11a40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_11a410:
    // 0x11a410: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11a410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11a414:
    // 0x11a414: 0x1000000c  b           . + 4 + (0xC << 2)
label_11a418:
    if (ctx->pc == 0x11A418u) {
        ctx->pc = 0x11A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A414u;
        // 0x11a418: 0x46040082  mul.s       $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A41Cu;
        goto label_11a41c;
    }
    ctx->pc = 0x11A414u;
    {
        const bool branch_taken_0x11a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A414u;
        // 0x11a418: 0x46040082  mul.s       $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a414) {
            ctx->pc = 0x11A448u;
            goto label_11a448;
        }
    }
    ctx->pc = 0x11A41Cu;
label_11a41c:
    // 0x11a41c: 0xc6620078  lwc1        $f2, 0x78($s3)
    ctx->pc = 0x11a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11a420:
    // 0x11a420: 0xc6630074  lwc1        $f3, 0x74($s3)
    ctx->pc = 0x11a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11a424:
    // 0x11a424: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x11a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a428:
    // 0x11a428: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11a428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_11a42c:
    // 0x11a42c: 0xc6640050  lwc1        $f4, 0x50($s3)
    ctx->pc = 0x11a42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11a430:
    // 0x11a430: 0xc66200a8  lwc1        $f2, 0xA8($s3)
    ctx->pc = 0x11a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11a434:
    // 0x11a434: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11a434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_11a438:
    // 0x11a438: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11a438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11a43c:
    // 0x11a43c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11a43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_11a440:
    // 0x11a440: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11a440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_11a444:
    // 0x11a444: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11a444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_11a448:
    // 0x11a448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a44c:
    // 0x11a44c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a450:
    // 0x11a450: 0x0  nop
    ctx->pc = 0x11a450u;
    // NOP
label_11a454:
    // 0x11a454: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x11a454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a458:
    // 0x11a458: 0x0  nop
    ctx->pc = 0x11a458u;
    // NOP
label_11a45c:
    // 0x11a45c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11a460:
    if (ctx->pc == 0x11A460u) {
        ctx->pc = 0x11A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A45Cu;
        // 0x11a460: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A464u;
        goto label_11a464;
    }
    ctx->pc = 0x11A45Cu;
    {
        const bool branch_taken_0x11a45c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a45c) {
            ctx->pc = 0x11A460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A45Cu;
            // 0x11a460: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A464u;
            goto label_11a464;
        }
    }
    ctx->pc = 0x11A464u;
label_11a464:
    // 0x11a464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11a464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a468:
    // 0x11a468: 0x0  nop
    ctx->pc = 0x11a468u;
    // NOP
label_11a46c:
    // 0x11a46c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11a470:
    if (ctx->pc == 0x11A470u) {
        ctx->pc = 0x11A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A46Cu;
        // 0x11a470: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A474u;
        goto label_11a474;
    }
    ctx->pc = 0x11A46Cu;
    {
        const bool branch_taken_0x11a46c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a46c) {
            ctx->pc = 0x11A470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A46Cu;
            // 0x11a470: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A474u;
            goto label_11a474;
        }
    }
    ctx->pc = 0x11A474u;
label_11a474:
    // 0x11a474: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x11a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a478:
    // 0x11a478: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x11a478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a47c:
    // 0x11a47c: 0x0  nop
    ctx->pc = 0x11a47cu;
    // NOP
label_11a480:
    // 0x11a480: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_11a484:
    if (ctx->pc == 0x11A484u) {
        ctx->pc = 0x11A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A480u;
        // 0x11a484: 0xe6620058  swc1        $f2, 0x58($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A488u;
        goto label_11a488;
    }
    ctx->pc = 0x11A480u;
    {
        const bool branch_taken_0x11a480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a480) {
            ctx->pc = 0x11A484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A480u;
            // 0x11a484: 0xe6620058  swc1        $f2, 0x58($s3) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A4ACu;
            goto label_11a4ac;
        }
    }
    ctx->pc = 0x11A488u;
label_11a488:
    // 0x11a488: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x11a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a48c:
    // 0x11a48c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x11a48cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a490:
    // 0x11a490: 0x0  nop
    ctx->pc = 0x11a490u;
    // NOP
label_11a494:
    // 0x11a494: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_11a498:
    if (ctx->pc == 0x11A498u) {
        ctx->pc = 0x11A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A494u;
        // 0x11a498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A49Cu;
        goto label_11a49c;
    }
    ctx->pc = 0x11A494u;
    {
        const bool branch_taken_0x11a494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A494u;
        // 0x11a498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a494) {
            ctx->pc = 0x11A4A8u;
            goto label_11a4a8;
        }
    }
    ctx->pc = 0x11A49Cu;
label_11a49c:
    // 0x11a49c: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x11a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_11a4a0:
    // 0x11a4a0: 0x54620302  bnel        $v1, $v0, . + 4 + (0x302 << 2)
label_11a4a4:
    if (ctx->pc == 0x11A4A4u) {
        ctx->pc = 0x11A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4A0u;
        // 0x11a4a4: 0x92620094  lbu         $v0, 0x94($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4A8u;
        goto label_11a4a8;
    }
    ctx->pc = 0x11A4A0u;
    {
        const bool branch_taken_0x11a4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a4a0) {
            ctx->pc = 0x11A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A4A0u;
            // 0x11a4a4: 0x92620094  lbu         $v0, 0x94($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B0ACu;
            goto label_11b0ac;
        }
    }
    ctx->pc = 0x11A4A8u;
label_11a4a8:
    // 0x11a4a8: 0xe6620058  swc1        $f2, 0x58($s3)
    ctx->pc = 0x11a4a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_11a4ac:
    // 0x11a4ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11a4b0:
    // 0x11a4b0: 0xc043ca8  jal         func_10F2A0
label_11a4b4:
    if (ctx->pc == 0x11A4B4u) {
        ctx->pc = 0x11A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4B0u;
        // 0x11a4b4: 0xe661005c  swc1        $f1, 0x5C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4B8u;
        goto label_11a4b8;
    }
    ctx->pc = 0x11A4B0u;
    SET_GPR_U32(ctx, 31, 0x11A4B8u);
    ctx->pc = 0x11A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4B0u;
    // 0x11a4b4: 0xe661005c  swc1        $f1, 0x5C($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x11A4B0u, 0x11A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4B8u;
label_11a4b8:
    // 0x11a4b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a4bc:
    // 0x11a4bc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_11a4c0:
    if (ctx->pc == 0x11A4C0u) {
        ctx->pc = 0x11A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4BCu;
        // 0x11a4c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4C4u;
        goto label_11a4c4;
    }
    ctx->pc = 0x11A4BCu;
    {
        const bool branch_taken_0x11a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4BCu;
        // 0x11a4c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4bc) {
            ctx->pc = 0x11A520u;
            goto label_11a520;
        }
    }
    ctx->pc = 0x11A4C4u;
label_11a4c4:
    // 0x11a4c4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x11a4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_11a4c8:
    // 0x11a4c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11a4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11a4cc:
    // 0x11a4cc: 0x8e06bce4  lw          $a2, -0x431C($s0)
    ctx->pc = 0x11a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_11a4d0:
    // 0x11a4d0: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x11a4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_11a4d4:
    // 0x11a4d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x11a4d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_11a4d8:
    // 0x11a4d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11a4dc:
    // 0x11a4dc: 0xc66c0058  lwc1        $f12, 0x58($s3)
    ctx->pc = 0x11a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11a4e0:
    // 0x11a4e0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_11a4e4:
    // 0x11a4e4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x11a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_11a4e8:
    // 0x11a4e8: 0x60f809  jalr        $v1
label_11a4ec:
    if (ctx->pc == 0x11A4ECu) {
        ctx->pc = 0x11A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E8u;
        // 0x11a4ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4F0u;
        goto label_11a4f0;
    }
    ctx->pc = 0x11A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A4F0u);
        ctx->pc = 0x11A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E8u;
        // 0x11a4ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A4E8u, 0x11A4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A4F0u;
label_11a4f0:
    // 0x11a4f0: 0x8e06bce4  lw          $a2, -0x431C($s0)
    ctx->pc = 0x11a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_11a4f4:
    // 0x11a4f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a4f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11a4f8:
    // 0x11a4f8: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x11a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_11a4fc:
    // 0x11a4fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x11a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11a500:
    // 0x11a500: 0xc66d005c  lwc1        $f13, 0x5C($s3)
    ctx->pc = 0x11a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11a504:
    // 0x11a504: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11a508:
    // 0x11a508: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11a508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11a50c:
    // 0x11a50c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11a510:
    // 0x11a510: 0x40f809  jalr        $v0
label_11a514:
    if (ctx->pc == 0x11A514u) {
        ctx->pc = 0x11A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A510u;
        // 0x11a514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A518u;
        goto label_11a518;
    }
    ctx->pc = 0x11A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A518u);
        ctx->pc = 0x11A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A510u;
        // 0x11a514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A510u, 0x11A518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A518u;
label_11a518:
    // 0x11a518: 0x100002e3  b           . + 4 + (0x2E3 << 2)
label_11a51c:
    if (ctx->pc == 0x11A51Cu) {
        ctx->pc = 0x11A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A518u;
        // 0x11a51c: 0xae600060  sw          $zero, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A520u;
        goto label_11a520;
    }
    ctx->pc = 0x11A518u;
    {
        const bool branch_taken_0x11a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A518u;
        // 0x11a51c: 0xae600060  sw          $zero, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a518) {
            ctx->pc = 0x11B0A8u;
            goto label_11b0a8;
        }
    }
    ctx->pc = 0x11A520u;
label_11a520:
    // 0x11a520: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_11a524:
    // 0x11a524: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_11a528:
    // 0x11a528: 0xc66c0058  lwc1        $f12, 0x58($s3)
    ctx->pc = 0x11a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11a52c:
    // 0x11a52c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11a530:
    // 0x11a530: 0xc66d005c  lwc1        $f13, 0x5C($s3)
    ctx->pc = 0x11a530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11a534:
    // 0x11a534: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x11a534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_11a538:
    // 0x11a538: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x11a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_11a53c:
    // 0x11a53c: 0x60f809  jalr        $v1
label_11a540:
    if (ctx->pc == 0x11A540u) {
        ctx->pc = 0x11A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A53Cu;
        // 0x11a540: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A544u;
        goto label_11a544;
    }
    ctx->pc = 0x11A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A544u);
        ctx->pc = 0x11A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A53Cu;
        // 0x11a540: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A53Cu, 0x11A544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A544u;
label_11a544:
    // 0x11a544: 0x100002d8  b           . + 4 + (0x2D8 << 2)
label_11a548:
    if (ctx->pc == 0x11A548u) {
        ctx->pc = 0x11A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A544u;
        // 0x11a548: 0xae600060  sw          $zero, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A54Cu;
        goto label_11a54c;
    }
    ctx->pc = 0x11A544u;
    {
        const bool branch_taken_0x11a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A544u;
        // 0x11a548: 0xae600060  sw          $zero, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a544) {
            ctx->pc = 0x11B0A8u;
            goto label_11b0a8;
        }
    }
    ctx->pc = 0x11A54Cu;
label_11a54c:
    // 0x11a54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a550:
    // 0x11a550: 0x104302d5  beq         $v0, $v1, . + 4 + (0x2D5 << 2)
label_11a554:
    if (ctx->pc == 0x11A554u) {
        ctx->pc = 0x11A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A550u;
        // 0x11a554: 0xafa300e4  sw          $v1, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A558u;
        goto label_11a558;
    }
    ctx->pc = 0x11A550u;
    {
        const bool branch_taken_0x11a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A550u;
        // 0x11a554: 0xafa300e4  sw          $v1, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a550) {
            ctx->pc = 0x11B0A8u;
            goto label_11b0a8;
        }
    }
    ctx->pc = 0x11A558u;
label_11a558:
    // 0x11a558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a55c:
    // 0x11a55c: 0x266400e8  addiu       $a0, $s3, 0xE8
    ctx->pc = 0x11a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
label_11a560:
    // 0x11a560: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x11a560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
label_11a564:
    // 0x11a564: 0xc0e4060  jal         func_390180
label_11a568:
    if (ctx->pc == 0x11A568u) {
        ctx->pc = 0x11A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A564u;
        // 0x11a568: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A56Cu;
        goto label_11a56c;
    }
    ctx->pc = 0x11A564u;
    SET_GPR_U32(ctx, 31, 0x11A56Cu);
    ctx->pc = 0x11A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A564u;
    // 0x11a568: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11A564u, 0x11A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A56Cu;
label_11a56c:
    // 0x11a56c: 0xc08a61a  jal         func_229868
label_11a570:
    if (ctx->pc == 0x11A570u) {
        ctx->pc = 0x11A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A56Cu;
        // 0x11a570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A574u;
        goto label_11a574;
    }
    ctx->pc = 0x11A56Cu;
    SET_GPR_U32(ctx, 31, 0x11A574u);
    ctx->pc = 0x11A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A56Cu;
    // 0x11a570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x11A56Cu, 0x11A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A574u;
label_11a574:
    // 0x11a574: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11a574u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a578:
    // 0x11a578: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11a57c:
    // 0x11a57c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x11a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_11a580:
    // 0x11a580: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x11a580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_11a584:
    // 0x11a584: 0x188001dc  blez        $a0, . + 4 + (0x1DC << 2)
label_11a588:
    if (ctx->pc == 0x11A588u) {
        ctx->pc = 0x11A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A584u;
        // 0x11a588: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A58Cu;
        goto label_11a58c;
    }
    ctx->pc = 0x11A584u;
    {
        const bool branch_taken_0x11a584 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A584u;
        // 0x11a588: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a584) {
            ctx->pc = 0x11ACF8u;
            goto label_11acf8;
        }
    }
    ctx->pc = 0x11A58Cu;
label_11a58c:
    // 0x11a58c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a590:
    // 0x11a590: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x11a590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_11a594:
    // 0x11a594: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x11a594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_11a598:
    // 0x11a598: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x11a598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11a59c:
    // 0x11a59c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x11a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_11a5a0:
    // 0x11a5a0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x11a5a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11a5a4:
    // 0x11a5a4: 0x8fb600e0  lw          $s6, 0xE0($sp)
    ctx->pc = 0x11a5a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_11a5a8:
    // 0x11a5a8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x11a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_11a5ac:
    // 0x11a5ac: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_11a5b0:
    if (ctx->pc == 0x11A5B0u) {
        ctx->pc = 0x11A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5ACu;
        // 0x11a5b0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5B4u;
        goto label_11a5b4;
    }
    ctx->pc = 0x11A5ACu;
    {
        const bool branch_taken_0x11a5ac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5ACu;
        // 0x11a5b0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5ac) {
            ctx->pc = 0x11A5ECu;
            goto label_11a5ec;
        }
    }
    ctx->pc = 0x11A5B4u;
label_11a5b4:
    // 0x11a5b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11a5b8:
    // 0x11a5b8: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x11a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_11a5bc:
    // 0x11a5bc: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x11a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_11a5c0:
    // 0x11a5c0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x11a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_11a5c4:
    // 0x11a5c4: 0xc0e409a  jal         func_390268
label_11a5c8:
    if (ctx->pc == 0x11A5C8u) {
        ctx->pc = 0x11A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5C4u;
        // 0x11a5c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5CCu;
        goto label_11a5cc;
    }
    ctx->pc = 0x11A5C4u;
    SET_GPR_U32(ctx, 31, 0x11A5CCu);
    ctx->pc = 0x11A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5C4u;
    // 0x11a5c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x11A5C4u, 0x11A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5CCu;
label_11a5cc:
    // 0x11a5cc: 0x904305b7  lbu         $v1, 0x5B7($v0)
    ctx->pc = 0x11a5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1463)));
label_11a5d0:
    // 0x11a5d0: 0x92e205b7  lbu         $v0, 0x5B7($s7)
    ctx->pc = 0x11a5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1463)));
label_11a5d4:
    // 0x11a5d4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x11a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_11a5d8:
    // 0x11a5d8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11a5d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_11a5dc:
    // 0x11a5dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11a5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11a5e0:
    // 0x11a5e0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x11a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_11a5e4:
    // 0x11a5e4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x11a5e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_11a5e8:
    // 0x11a5e8: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x11a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_11a5ec:
    // 0x11a5ec: 0xc047e6c  jal         func_11F9B0
label_11a5f0:
    if (ctx->pc == 0x11A5F0u) {
        ctx->pc = 0x11A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5ECu;
        // 0x11a5f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5F4u;
        goto label_11a5f4;
    }
    ctx->pc = 0x11A5ECu;
    SET_GPR_U32(ctx, 31, 0x11A5F4u);
    ctx->pc = 0x11A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5ECu;
    // 0x11a5f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11A5ECu, 0x11A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5F4u;
label_11a5f4:
    // 0x11a5f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a5f8:
    // 0x11a5f8: 0x122001b7  beqz        $s1, . + 4 + (0x1B7 << 2)
label_11a5fc:
    if (ctx->pc == 0x11A5FCu) {
        ctx->pc = 0x11A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F8u;
        // 0x11a5fc: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A600u;
        goto label_11a600;
    }
    ctx->pc = 0x11A5F8u;
    {
        const bool branch_taken_0x11a5f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F8u;
        // 0x11a5fc: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5f8) {
            ctx->pc = 0x11ACD8u;
            goto label_11acd8;
        }
    }
    ctx->pc = 0x11A600u;
label_11a600:
    // 0x11a600: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
label_11a604:
    if (ctx->pc == 0x11A604u) {
        ctx->pc = 0x11A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A600u;
        // 0x11a604: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A608u;
        goto label_11a608;
    }
    ctx->pc = 0x11A600u;
    {
        const bool branch_taken_0x11a600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a600) {
            ctx->pc = 0x11A604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A600u;
            // 0x11a604: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A624u;
            goto label_11a624;
        }
    }
    ctx->pc = 0x11A608u;
label_11a608:
    // 0x11a608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11a608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11a60c:
    // 0x11a60c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_11a610:
    // 0x11a610: 0x2463b930  addiu       $v1, $v1, -0x46D0
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949168));
label_11a614:
    // 0x11a614: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
label_11a618:
    // 0x11a618: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11a618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_11a61c:
    // 0x11a61c: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a620:
    if (ctx->pc == 0x11A620u) {
        ctx->pc = 0x11A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A61Cu;
        // 0x11a620: 0x78830010  lq          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A624u;
        goto label_11a624;
    }
    ctx->pc = 0x11A61Cu;
    {
        const bool branch_taken_0x11a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A61Cu;
        // 0x11a620: 0x78830010  lq          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a61c) {
            ctx->pc = 0x11A628u;
            goto label_11a628;
        }
    }
    ctx->pc = 0x11A624u;
label_11a624:
    // 0x11a624: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x11a624u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_11a628:
    // 0x11a628: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x11a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_11a62c:
    // 0x11a62c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x11a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_11a630:
    // 0x11a630: 0x7a6200c0  lq          $v0, 0xC0($s3)
    ctx->pc = 0x11a630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 192)));
label_11a634:
    // 0x11a634: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11a638:
    // 0x11a638: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11a63c:
    // 0x11a63c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a640:
    // 0x11a640: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x11a640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_11a644:
    // 0x11a644: 0xc0cdb62  jal         func_336D88
label_11a648:
    if (ctx->pc == 0x11A648u) {
        ctx->pc = 0x11A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A644u;
        // 0x11a648: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A64Cu;
        goto label_11a64c;
    }
    ctx->pc = 0x11A644u;
    SET_GPR_U32(ctx, 31, 0x11A64Cu);
    ctx->pc = 0x11A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A644u;
    // 0x11a648: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x11A644u, 0x11A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A64Cu;
label_11a64c:
    // 0x11a64c: 0x4600c686  mov.s       $f26, $f24
    ctx->pc = 0x11a64cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[24]);
label_11a650:
    // 0x11a650: 0xe660008c  swc1        $f0, 0x8C($s3)
    ctx->pc = 0x11a650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
label_11a654:
    // 0x11a654: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11a658:
    // 0x11a658: 0x4600c746  mov.s       $f29, $f24
    ctx->pc = 0x11a658u;
    ctx->f[29] = FPU_MOV_S(ctx->f[24]);
label_11a65c:
    // 0x11a65c: 0x4600c706  mov.s       $f28, $f24
    ctx->pc = 0x11a65cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[24]);
label_11a660:
    // 0x11a660: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11a664:
    // 0x11a664: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x11a664u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_11a668:
    // 0x11a668: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_11a66c:
    // 0x11a66c: 0x60f809  jalr        $v1
label_11a670:
    if (ctx->pc == 0x11A670u) {
        ctx->pc = 0x11A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A66Cu;
        // 0x11a670: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A674u;
        goto label_11a674;
    }
    ctx->pc = 0x11A66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A674u);
        ctx->pc = 0x11A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A66Cu;
        // 0x11a670: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A66Cu, 0x11A674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A674u;
label_11a674:
    // 0x11a674: 0xc043c6c  jal         func_10F1B0
label_11a678:
    if (ctx->pc == 0x11A678u) {
        ctx->pc = 0x11A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A674u;
        // 0x11a678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A67Cu;
        goto label_11a67c;
    }
    ctx->pc = 0x11A674u;
    SET_GPR_U32(ctx, 31, 0x11A67Cu);
    ctx->pc = 0x11A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A674u;
    // 0x11a678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1B0u, 0x11A674u, 0x11A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A67Cu;
label_11a67c:
    // 0x11a67c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a680:
    // 0x11a680: 0xc043c7a  jal         func_10F1E8
label_11a684:
    if (ctx->pc == 0x11A684u) {
        ctx->pc = 0x11A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A680u;
        // 0x11a684: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A688u;
        goto label_11a688;
    }
    ctx->pc = 0x11A680u;
    SET_GPR_U32(ctx, 31, 0x11A688u);
    ctx->pc = 0x11A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A680u;
    // 0x11a684: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x11A680u, 0x11A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A688u;
label_11a688:
    // 0x11a688: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x11a688u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_11a68c:
    // 0x11a68c: 0xc043bf8  jal         func_10EFE0
label_11a690:
    if (ctx->pc == 0x11A690u) {
        ctx->pc = 0x11A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A68Cu;
        // 0x11a690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A694u;
        goto label_11a694;
    }
    ctx->pc = 0x11A68Cu;
    SET_GPR_U32(ctx, 31, 0x11A694u);
    ctx->pc = 0x11A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A68Cu;
    // 0x11a690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFE0u, 0x11A68Cu, 0x11A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A694u;
label_11a694:
    // 0x11a694: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_11a698:
    if (ctx->pc == 0x11A698u) {
        ctx->pc = 0x11A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A694u;
        // 0x11a698: 0x8fa500e4  lw          $a1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A69Cu;
        goto label_11a69c;
    }
    ctx->pc = 0x11A694u;
    {
        const bool branch_taken_0x11a694 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A694u;
        // 0x11a698: 0x8fa500e4  lw          $a1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a694) {
            ctx->pc = 0x11A6ACu;
            goto label_11a6ac;
        }
    }
    ctx->pc = 0x11A69Cu;
label_11a69c:
    // 0x11a69c: 0x82e201b0  lb          $v0, 0x1B0($s7)
    ctx->pc = 0x11a69cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 432)));
label_11a6a0:
    // 0x11a6a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11a6a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_11a6a4:
    // 0x11a6a4: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x11a6a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_11a6a8:
    // 0x11a6a8: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x11a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_11a6ac:
    // 0x11a6ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11a6b0:
    // 0x11a6b0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x11a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_11a6b4:
    // 0x11a6b4: 0x8c620268  lw          $v0, 0x268($v1)
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 616)));
label_11a6b8:
    // 0x11a6b8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_11a6bc:
    if (ctx->pc == 0x11A6BCu) {
        ctx->pc = 0x11A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6B8u;
        // 0x11a6bc: 0xc661008c  lwc1        $f1, 0x8C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6C0u;
        goto label_11a6c0;
    }
    ctx->pc = 0x11A6B8u;
    {
        const bool branch_taken_0x11a6b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6B8u;
        // 0x11a6bc: 0xc661008c  lwc1        $f1, 0x8C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6b8) {
            ctx->pc = 0x11A700u;
            goto label_11a700;
        }
    }
    ctx->pc = 0x11A6C0u;
label_11a6c0:
    // 0x11a6c0: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x11a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_11a6c4:
    // 0x11a6c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_11a6c8:
    if (ctx->pc == 0x11A6C8u) {
        ctx->pc = 0x11A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6C4u;
        // 0x11a6c8: 0x8fa300e4  lw          $v1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6CCu;
        goto label_11a6cc;
    }
    ctx->pc = 0x11A6C4u;
    {
        const bool branch_taken_0x11a6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6C4u;
        // 0x11a6c8: 0x8fa300e4  lw          $v1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6c4) {
            ctx->pc = 0x11A700u;
            goto label_11a700;
        }
    }
    ctx->pc = 0x11A6CCu;
label_11a6cc:
    // 0x11a6cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_11a6d0:
    if (ctx->pc == 0x11A6D0u) {
        ctx->pc = 0x11A6D4u;
        goto label_11a6d4;
    }
    ctx->pc = 0x11A6CCu;
    {
        const bool branch_taken_0x11a6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a6cc) {
            ctx->pc = 0x11A700u;
            goto label_11a700;
        }
    }
    ctx->pc = 0x11A6D4u;
label_11a6d4:
    // 0x11a6d4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11a6d8:
    // 0x11a6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a6dc:
    // 0x11a6dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x11a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_11a6e0:
    // 0x11a6e0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x11a6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_11a6e4:
    // 0x11a6e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11a6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a6e8:
    // 0x11a6e8: 0x0  nop
    ctx->pc = 0x11a6e8u;
    // NOP
label_11a6ec:
    // 0x11a6ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_11a6f0:
    if (ctx->pc == 0x11A6F0u) {
        ctx->pc = 0x11A6F4u;
        goto label_11a6f4;
    }
    ctx->pc = 0x11A6ECu;
    {
        const bool branch_taken_0x11a6ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a6ec) {
            ctx->pc = 0x11A700u;
            goto label_11a700;
        }
    }
    ctx->pc = 0x11A6F4u;
label_11a6f4:
    // 0x11a6f4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x11a6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_11a6f8:
    // 0x11a6f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x11a6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_11a6fc:
    // 0x11a6fc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x11a6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_11a700:
    // 0x11a700: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x11a700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a704:
    // 0x11a704: 0x0  nop
    ctx->pc = 0x11a704u;
    // NOP
label_11a708:
    // 0x11a708: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_11a70c:
    if (ctx->pc == 0x11A70Cu) {
        ctx->pc = 0x11A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A708u;
        // 0x11a70c: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A710u;
        goto label_11a710;
    }
    ctx->pc = 0x11A708u;
    {
        const bool branch_taken_0x11a708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A708u;
        // 0x11a70c: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a708) {
            ctx->pc = 0x11A71Cu;
            goto label_11a71c;
        }
    }
    ctx->pc = 0x11A710u;
label_11a710:
    // 0x11a710: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x11a710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11a714:
    // 0x11a714: 0x10000065  b           . + 4 + (0x65 << 2)
label_11a718:
    if (ctx->pc == 0x11A718u) {
        ctx->pc = 0x11A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A714u;
        // 0x11a718: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A71Cu;
        goto label_11a71c;
    }
    ctx->pc = 0x11A714u;
    {
        const bool branch_taken_0x11a714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A714u;
        // 0x11a718: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a714) {
            ctx->pc = 0x11A8ACu;
            goto label_11a8ac;
        }
    }
    ctx->pc = 0x11A71Cu;
label_11a71c:
    // 0x11a71c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x11a71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a720:
    // 0x11a720: 0x0  nop
    ctx->pc = 0x11a720u;
    // NOP
label_11a724:
    // 0x11a724: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_11a728:
    if (ctx->pc == 0x11A728u) {
        ctx->pc = 0x11A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A724u;
        // 0x11a728: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A72Cu;
        goto label_11a72c;
    }
    ctx->pc = 0x11A724u;
    {
        const bool branch_taken_0x11a724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A724u;
        // 0x11a728: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a724) {
            ctx->pc = 0x11A73Cu;
            goto label_11a73c;
        }
    }
    ctx->pc = 0x11A72Cu;
label_11a72c:
    // 0x11a72c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a730:
    // 0x11a730: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11a734:
    // 0x11a734: 0x1000005d  b           . + 4 + (0x5D << 2)
label_11a738:
    if (ctx->pc == 0x11A738u) {
        ctx->pc = 0x11A73Cu;
        goto label_11a73c;
    }
    ctx->pc = 0x11A734u;
    {
        const bool branch_taken_0x11a734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a734) {
            ctx->pc = 0x11A8ACu;
            goto label_11a8ac;
        }
    }
    ctx->pc = 0x11A73Cu;
label_11a73c:
    // 0x11a73c: 0xc043bf8  jal         func_10EFE0
label_11a740:
    if (ctx->pc == 0x11A740u) {
        ctx->pc = 0x11A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A73Cu;
        // 0x11a740: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A744u;
        goto label_11a744;
    }
    ctx->pc = 0x11A73Cu;
    SET_GPR_U32(ctx, 31, 0x11A744u);
    ctx->pc = 0x11A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A73Cu;
    // 0x11a740: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFE0u, 0x11A73Cu, 0x11A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A744u;
label_11a744:
    // 0x11a744: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_11a748:
    if (ctx->pc == 0x11A748u) {
        ctx->pc = 0x11A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A744u;
        // 0x11a748: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A74Cu;
        goto label_11a74c;
    }
    ctx->pc = 0x11A744u;
    {
        const bool branch_taken_0x11a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A744u;
        // 0x11a748: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a744) {
            ctx->pc = 0x11A870u;
            goto label_11a870;
        }
    }
    ctx->pc = 0x11A74Cu;
label_11a74c:
    // 0x11a74c: 0x7a6300c0  lq          $v1, 0xC0($s3)
    ctx->pc = 0x11a74cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 192)));
label_11a750:
    // 0x11a750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a754:
    // 0x11a754: 0x7a6700d0  lq          $a3, 0xD0($s3)
    ctx->pc = 0x11a754u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 208)));
label_11a758:
    // 0x11a758: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x11a758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_11a75c:
    // 0x11a75c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x11a75cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11a760:
    // 0x11a760: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11a760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11a764:
    // 0x11a764: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11a764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11a768:
    // 0x11a768: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x11a768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a76c:
    // 0x11a76c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x11a76cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11a770:
    // 0x11a770: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x11a770u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_11a774:
    // 0x11a774: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x11a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_11a778:
    // 0x11a778: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11a778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11a77c:
    // 0x11a77c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x11a77cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a780:
    // 0x11a780: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x11a780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a784:
    // 0x11a784: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x11a784u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_11a788:
    // 0x11a788: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x11a788u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11a78c:
    // 0x11a78c: 0x4a0003bf  vwaitq
    ctx->pc = 0x11a78cu;
    // VWAITQ (Q already resolved in this runtime)
label_11a790:
    // 0x11a790: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x11a790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_11a794:
    // 0x11a794: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x11a794u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_11a798:
    // 0x11a798: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x11a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_11a79c:
    // 0x11a79c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x11a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_11a7a0:
    // 0x11a7a0: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x11a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
label_11a7a4:
    // 0x11a7a4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x11a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_11a7a8:
    // 0x11a7a8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x11a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_11a7ac:
    // 0x11a7ac: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x11a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_11a7b0:
    // 0x11a7b0: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x11a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
label_11a7b4:
    // 0x11a7b4: 0xc0cd8ec  jal         func_3363B0
label_11a7b8:
    if (ctx->pc == 0x11A7B8u) {
        ctx->pc = 0x11A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7B4u;
        // 0x11a7b8: 0x7fa60060  sq          $a2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7BCu;
        goto label_11a7bc;
    }
    ctx->pc = 0x11A7B4u;
    SET_GPR_U32(ctx, 31, 0x11A7BCu);
    ctx->pc = 0x11A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7B4u;
    // 0x11a7b8: 0x7fa60060  sq          $a2, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x11A7B4u, 0x11A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7BCu;
label_11a7bc:
    // 0x11a7bc: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x11a7bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11a7c0:
    // 0x11a7c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11a7c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11a7c4:
    // 0x11a7c4: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x11a7c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a7c8:
    // 0x11a7c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x11a7c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a7cc:
    // 0x11a7cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x11a7ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_11a7d0:
    // 0x11a7d0: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x11a7d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11a7d4:
    // 0x11a7d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x11a7d4u;
    // VWAITQ (Q already resolved in this runtime)
label_11a7d8:
    // 0x11a7d8: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x11a7d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_11a7dc:
    // 0x11a7dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x11a7dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_11a7e0:
    // 0x11a7e0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x11a7e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11a7e4:
    // 0x11a7e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11a7e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11a7e8:
    // 0x11a7e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11a7e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11a7ec:
    // 0x11a7ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x11a7ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_11a7f0:
    // 0x11a7f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x11a7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_11a7f4:
    // 0x11a7f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x11a7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_11a7f8:
    // 0x11a7f8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x11a7f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_11a7fc:
    // 0x11a7fc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x11a7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_11a800:
    // 0x11a800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11a804:
    // 0x11a804: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a804u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a808:
    // 0x11a808: 0xc661008c  lwc1        $f1, 0x8C($s3)
    ctx->pc = 0x11a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a80c:
    // 0x11a80c: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x11a80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_11a810:
    // 0x11a810: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x11a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_11a814:
    // 0x11a814: 0x46190834  c.lt.s      $f1, $f25
    ctx->pc = 0x11a814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a818:
    // 0x11a818: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11a818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_11a81c:
    // 0x11a81c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11a820:
    // 0x11a820: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x11a820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_11a824:
    // 0x11a824: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_11a828:
    if (ctx->pc == 0x11A828u) {
        ctx->pc = 0x11A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A824u;
        // 0x11a828: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A82Cu;
        goto label_11a82c;
    }
    ctx->pc = 0x11A824u;
    {
        const bool branch_taken_0x11a824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A824u;
        // 0x11a828: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a824) {
            ctx->pc = 0x11A83Cu;
            goto label_11a83c;
        }
    }
    ctx->pc = 0x11A82Cu;
label_11a82c:
    // 0x11a82c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a830:
    // 0x11a830: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x11a830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_11a834:
    // 0x11a834: 0x1000000f  b           . + 4 + (0xF << 2)
label_11a838:
    if (ctx->pc == 0x11A838u) {
        ctx->pc = 0x11A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A834u;
        // 0x11a838: 0x4614a841  sub.s       $f1, $f21, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A83Cu;
        goto label_11a83c;
    }
    ctx->pc = 0x11A834u;
    {
        const bool branch_taken_0x11a834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A834u;
        // 0x11a838: 0x4614a841  sub.s       $f1, $f21, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a834) {
            ctx->pc = 0x11A874u;
            goto label_11a874;
        }
    }
    ctx->pc = 0x11A83Cu;
label_11a83c:
    // 0x11a83c: 0x2c8200c8  sltiu       $v0, $a0, 0xC8
    ctx->pc = 0x11a83cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_11a840:
    // 0x11a840: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11a840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11a844:
    // 0x11a844: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x11a844u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_11a848:
    // 0x11a848: 0x2463a910  addiu       $v1, $v1, -0x56F0
    ctx->pc = 0x11a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945040));
label_11a84c:
    // 0x11a84c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11a850:
    // 0x11a850: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x11a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_11a854:
    // 0x11a854: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x11a854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_11a858:
    // 0x11a858: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a85c:
    // 0x11a85c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x11a85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_11a860:
    // 0x11a860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a864:
    // 0x11a864: 0x0  nop
    ctx->pc = 0x11a864u;
    // NOP
label_11a868:
    // 0x11a868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11a86c:
    // 0x11a86c: 0x46010682  mul.s       $f26, $f0, $f1
    ctx->pc = 0x11a86cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11a870:
    // 0x11a870: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x11a870u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_11a874:
    // 0x11a874: 0xc660008c  lwc1        $f0, 0x8C($s3)
    ctx->pc = 0x11a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a878:
    // 0x11a878: 0x4601d834  c.lt.s      $f27, $f1
    ctx->pc = 0x11a878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a87c:
    // 0x11a87c: 0x0  nop
    ctx->pc = 0x11a87cu;
    // NOP
label_11a880:
    // 0x11a880: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_11a884:
    if (ctx->pc == 0x11A884u) {
        ctx->pc = 0x11A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A880u;
        // 0x11a884: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A888u;
        goto label_11a888;
    }
    ctx->pc = 0x11A880u;
    {
        const bool branch_taken_0x11a880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A880u;
        // 0x11a884: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a880) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A888u;
label_11a888:
    // 0x11a888: 0x0  nop
    ctx->pc = 0x11a888u;
    // NOP
label_11a88c:
    // 0x11a88c: 0x0  nop
    ctx->pc = 0x11a88cu;
    // NOP
label_11a890:
    // 0x11a890: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11a890u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_11a894:
    // 0x11a894: 0x4600cdc1  sub.s       $f23, $f25, $f0
    ctx->pc = 0x11a894u;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
label_11a898:
    // 0x11a898: 0x10000003  b           . + 4 + (0x3 << 2)
label_11a89c:
    if (ctx->pc == 0x11A89Cu) {
        ctx->pc = 0x11A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A898u;
        // 0x11a89c: 0x4617bdc2  mul.s       $f23, $f23, $f23 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8A0u;
        goto label_11a8a0;
    }
    ctx->pc = 0x11A898u;
    {
        const bool branch_taken_0x11a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A898u;
        // 0x11a89c: 0x4617bdc2  mul.s       $f23, $f23, $f23 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a898) {
            ctx->pc = 0x11A8A8u;
            goto label_11a8a8;
        }
    }
    ctx->pc = 0x11A8A0u;
label_11a8a0:
    // 0x11a8a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a8a4:
    // 0x11a8a4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11a8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11a8a8:
    // 0x11a8a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11a8ac:
    // 0x11a8ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11a8b0:
    // 0x11a8b0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x11a8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_11a8b4:
    // 0x11a8b4: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_11a8b8:
    // 0x11a8b8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x11a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_11a8bc:
    // 0x11a8bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x11a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_11a8c0:
    // 0x11a8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11a8c4:
    // 0x11a8c4: 0x8c447aa8  lw          $a0, 0x7AA8($v0)
    ctx->pc = 0x11a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
label_11a8c8:
    // 0x11a8c8: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
label_11a8cc:
    if (ctx->pc == 0x11A8CCu) {
        ctx->pc = 0x11A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8C8u;
        // 0x11a8cc: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8D0u;
        goto label_11a8d0;
    }
    ctx->pc = 0x11A8C8u;
    {
        const bool branch_taken_0x11a8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8C8u;
        // 0x11a8cc: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8c8) {
            ctx->pc = 0x11AA28u;
            goto label_11aa28;
        }
    }
    ctx->pc = 0x11A8D0u;
label_11a8d0:
    // 0x11a8d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11a8d4:
    // 0x11a8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a8d8:
    // 0x11a8d8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x11a8d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_11a8dc:
    // 0x11a8dc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x11a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_11a8e0:
    // 0x11a8e0: 0x60f809  jalr        $v1
label_11a8e4:
    if (ctx->pc == 0x11A8E4u) {
        ctx->pc = 0x11A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8E0u;
        // 0x11a8e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8E8u;
        goto label_11a8e8;
    }
    ctx->pc = 0x11A8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A8E8u);
        ctx->pc = 0x11A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8E0u;
        // 0x11a8e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8E0u, 0x11A8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A8E8u;
label_11a8e8:
    // 0x11a8e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11a8ec:
    // 0x11a8ec: 0xc0cd8ec  jal         func_3363B0
label_11a8f0:
    if (ctx->pc == 0x11A8F0u) {
        ctx->pc = 0x11A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8ECu;
        // 0x11a8f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8F4u;
        goto label_11a8f4;
    }
    ctx->pc = 0x11A8ECu;
    SET_GPR_U32(ctx, 31, 0x11A8F4u);
    ctx->pc = 0x11A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8ECu;
    // 0x11a8f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x11A8ECu, 0x11A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8F4u;
label_11a8f4:
    // 0x11a8f4: 0x7a6400c0  lq          $a0, 0xC0($s3)
    ctx->pc = 0x11a8f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 192)));
label_11a8f8:
    // 0x11a8f8: 0x7a6300d0  lq          $v1, 0xD0($s3)
    ctx->pc = 0x11a8f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 208)));
label_11a8fc:
    // 0x11a8fc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x11a8fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11a900:
    // 0x11a900: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11a900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11a904:
    // 0x11a904: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x11a904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a908:
    // 0x11a908: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x11a908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a90c:
    // 0x11a90c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x11a90cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_11a910:
    // 0x11a910: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x11a910u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11a914:
    // 0x11a914: 0x4a0003bf  vwaitq
    ctx->pc = 0x11a914u;
    // VWAITQ (Q already resolved in this runtime)
label_11a918:
    // 0x11a918: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x11a918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_11a91c:
    // 0x11a91c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x11a91cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_11a920:
    // 0x11a920: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x11a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_11a924:
    // 0x11a924: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x11a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_11a928:
    // 0x11a928: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x11a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_11a92c:
    // 0x11a92c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x11a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_11a930:
    // 0x11a930: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11a934:
    // 0x11a934: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x11a934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_11a938:
    // 0x11a938: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x11a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_11a93c:
    // 0x11a93c: 0x40f809  jalr        $v0
label_11a940:
    if (ctx->pc == 0x11A940u) {
        ctx->pc = 0x11A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A93Cu;
        // 0x11a940: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A944u;
        goto label_11a944;
    }
    ctx->pc = 0x11A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A944u);
        ctx->pc = 0x11A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A93Cu;
        // 0x11a940: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A93Cu, 0x11A944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A944u;
label_11a944:
    // 0x11a944: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x11a944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_11a948:
    // 0x11a948: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x11a948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11a94c:
    // 0x11a94c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11a94cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11a950:
    // 0x11a950: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11a950u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11a954:
    // 0x11a954: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x11a954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a958:
    // 0x11a958: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x11a958u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11a95c:
    // 0x11a95c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x11a95cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_11a960:
    // 0x11a960: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x11a960u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11a964:
    // 0x11a964: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11a964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11a968:
    // 0x11a968: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x11a968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a96c:
    // 0x11a96c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x11a96cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a970:
    // 0x11a970: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x11a970u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_11a974:
    // 0x11a974: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x11a974u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11a978:
    // 0x11a978: 0x4a0003bf  vwaitq
    ctx->pc = 0x11a978u;
    // VWAITQ (Q already resolved in this runtime)
label_11a97c:
    // 0x11a97c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x11a97cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_11a980:
    // 0x11a980: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x11a980u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_11a984:
    // 0x11a984: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x11a984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_11a988:
    // 0x11a988: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11a98c:
    // 0x11a98c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x11a98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_11a990:
    // 0x11a990: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11a990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11a994:
    // 0x11a994: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x11a994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_11a998:
    // 0x11a998: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x11a998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_11a99c:
    // 0x11a99c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x11a99cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_11a9a0:
    // 0x11a9a0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x11a9a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_11a9a4:
    // 0x11a9a4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x11a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_11a9a8:
    // 0x11a9a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11a9a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a9ac:
    // 0x11a9ac: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x11a9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_11a9b0:
    // 0x11a9b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11a9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11a9b4:
    // 0x11a9b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x11a9b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_11a9b8:
    // 0x11a9b8: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x11a9b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a9bc:
    // 0x11a9bc: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x11a9bcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_11a9c0:
    // 0x11a9c0: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x11a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_11a9c4:
    // 0x11a9c4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x11a9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_11a9c8:
    // 0x11a9c8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x11a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_11a9cc:
    // 0x11a9cc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x11a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a9d0:
    // 0x11a9d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x11a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_11a9d4:
    // 0x11a9d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11a9d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_11a9d8:
    // 0x11a9d8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x11a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_11a9dc:
    // 0x11a9dc: 0x4601d836  c.le.s      $f27, $f1
    ctx->pc = 0x11a9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[27], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a9e0:
    // 0x11a9e0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x11a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_11a9e4:
    // 0x11a9e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a9e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11a9e8:
    // 0x11a9e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11a9e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11a9ec:
    // 0x11a9ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_11a9f0:
    if (ctx->pc == 0x11A9F0u) {
        ctx->pc = 0x11A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9ECu;
        // 0x11a9f0: 0x7fa40080  sq          $a0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A9F4u;
        goto label_11a9f4;
    }
    ctx->pc = 0x11A9ECu;
    {
        const bool branch_taken_0x11a9ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9ECu;
        // 0x11a9f0: 0x7fa40080  sq          $a0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9ec) {
            ctx->pc = 0x11A9FCu;
            goto label_11a9fc;
        }
    }
    ctx->pc = 0x11A9F4u;
label_11a9f4:
    // 0x11a9f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_11a9f8:
    if (ctx->pc == 0x11A9F8u) {
        ctx->pc = 0x11A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9F4u;
        // 0x11a9f8: 0x246300b4  addiu       $v1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A9FCu;
        goto label_11a9fc;
    }
    ctx->pc = 0x11A9F4u;
    {
        const bool branch_taken_0x11a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9F4u;
        // 0x11a9f8: 0x246300b4  addiu       $v1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f4) {
            ctx->pc = 0x11AA04u;
            goto label_11aa04;
        }
    }
    ctx->pc = 0x11A9FCu;
label_11a9fc:
    // 0x11a9fc: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x11a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_11aa00:
    // 0x11aa00: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x11aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11aa04:
    // 0x11aa04: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_11aa08:
    // 0x11aa08: 0xa66300b0  sh          $v1, 0xB0($s3)
    ctx->pc = 0x11aa08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 176), (uint16_t)GPR_U32(ctx, 3));
label_11aa0c:
    // 0x11aa0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11aa10:
    // 0x11aa10: 0x24848600  addiu       $a0, $a0, -0x7A00
    ctx->pc = 0x11aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936064));
label_11aa14:
    // 0x11aa14: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x11aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_11aa18:
    // 0x11aa18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11aa1c:
    // 0x11aa1c: 0xc47c0000  lwc1        $f28, 0x0($v1)
    ctx->pc = 0x11aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_11aa20:
    // 0x11aa20: 0x10000052  b           . + 4 + (0x52 << 2)
label_11aa24:
    if (ctx->pc == 0x11AA24u) {
        ctx->pc = 0x11AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA20u;
        // 0x11aa24: 0xc45d05a4  lwc1        $f29, 0x5A4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AA28u;
        goto label_11aa28;
    }
    ctx->pc = 0x11AA20u;
    {
        const bool branch_taken_0x11aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA20u;
        // 0x11aa24: 0xc45d05a4  lwc1        $f29, 0x5A4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa20) {
            ctx->pc = 0x11AB6Cu;
            goto label_11ab6c;
        }
    }
    ctx->pc = 0x11AA28u;
label_11aa28:
    // 0x11aa28: 0x7a6200c0  lq          $v0, 0xC0($s3)
    ctx->pc = 0x11aa28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 192)));
label_11aa2c:
    // 0x11aa2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x11aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_11aa30:
    // 0x11aa30: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11aa34:
    // 0x11aa34: 0xc0cd8c2  jal         func_336308
label_11aa38:
    if (ctx->pc == 0x11AA38u) {
        ctx->pc = 0x11AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA34u;
        // 0x11aa38: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AA3Cu;
        goto label_11aa3c;
    }
    ctx->pc = 0x11AA34u;
    SET_GPR_U32(ctx, 31, 0x11AA3Cu);
    ctx->pc = 0x11AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA34u;
    // 0x11aa38: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x11AA34u, 0x11AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA3Cu;
label_11aa3c:
    // 0x11aa3c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x11aa3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11aa40:
    // 0x11aa40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11aa44:
    // 0x11aa44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x11aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_11aa48:
    // 0x11aa48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11aa48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11aa4c:
    // 0x11aa4c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11aa4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11aa50:
    // 0x11aa50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x11aa50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_11aa54:
    // 0x11aa54: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x11aa54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_11aa58:
    // 0x11aa58: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x11aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_11aa5c:
    // 0x11aa5c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x11aa5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11aa60:
    // 0x11aa60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11aa60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11aa64:
    // 0x11aa64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11aa64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11aa68:
    // 0x11aa68: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x11aa68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11aa6c:
    // 0x11aa6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x11aa6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11aa70:
    // 0x11aa70: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x11aa70u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_11aa74:
    // 0x11aa74: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x11aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_11aa78:
    // 0x11aa78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11aa78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11aa7c:
    // 0x11aa7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11aa7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11aa80:
    // 0x11aa80: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x11aa80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11aa84:
    // 0x11aa84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x11aa84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11aa88:
    // 0x11aa88: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x11aa88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_11aa8c:
    // 0x11aa8c: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x11aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
label_11aa90:
    // 0x11aa90: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x11aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_11aa94:
    // 0x11aa94: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x11aa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_11aa98:
    // 0x11aa98: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x11aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_11aa9c:
    // 0x11aa9c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x11aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_11aaa0:
    // 0x11aaa0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x11aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_11aaa4:
    // 0x11aaa4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x11aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_11aaa8:
    // 0x11aaa8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x11aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_11aaac:
    // 0x11aaac: 0xc0cdb62  jal         func_336D88
label_11aab0:
    if (ctx->pc == 0x11AAB0u) {
        ctx->pc = 0x11AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAACu;
        // 0x11aab0: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AAB4u;
        goto label_11aab4;
    }
    ctx->pc = 0x11AAACu;
    SET_GPR_U32(ctx, 31, 0x11AAB4u);
    ctx->pc = 0x11AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAACu;
    // 0x11aab0: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x11AAACu, 0x11AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAB4u;
label_11aab4:
    // 0x11aab4: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_11aab8:
    // 0x11aab8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11aab8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_11aabc:
    // 0x11aabc: 0xc0cdb62  jal         func_336D88
label_11aac0:
    if (ctx->pc == 0x11AAC0u) {
        ctx->pc = 0x11AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AABCu;
        // 0x11aac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AAC4u;
        goto label_11aac4;
    }
    ctx->pc = 0x11AABCu;
    SET_GPR_U32(ctx, 31, 0x11AAC4u);
    ctx->pc = 0x11AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AABCu;
    // 0x11aac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x11AABCu, 0x11AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAC4u;
label_11aac4:
    // 0x11aac4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x11aac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11aac8:
    // 0x11aac8: 0x0  nop
    ctx->pc = 0x11aac8u;
    // NOP
label_11aacc:
    // 0x11aacc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_11aad0:
    if (ctx->pc == 0x11AAD0u) {
        ctx->pc = 0x11AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AACCu;
        // 0x11aad0: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AAD4u;
        goto label_11aad4;
    }
    ctx->pc = 0x11AACCu;
    {
        const bool branch_taken_0x11aacc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aacc) {
            ctx->pc = 0x11AAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AACCu;
            // 0x11aad0: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AAF0u;
            goto label_11aaf0;
        }
    }
    ctx->pc = 0x11AAD4u;
label_11aad4:
    // 0x11aad4: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x11aad4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_11aad8:
    // 0x11aad8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x11aad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_11aadc:
    // 0x11aadc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11aadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11aae0:
    // 0x11aae0: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x11aae0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_11aae4:
    // 0x11aae4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x11aae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_11aae8:
    // 0x11aae8: 0x10000006  b           . + 4 + (0x6 << 2)
label_11aaec:
    if (ctx->pc == 0x11AAECu) {
        ctx->pc = 0x11AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAE8u;
        // 0x11aaec: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AAF0u;
        goto label_11aaf0;
    }
    ctx->pc = 0x11AAE8u;
    {
        const bool branch_taken_0x11aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAE8u;
        // 0x11aaec: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aae8) {
            ctx->pc = 0x11AB04u;
            goto label_11ab04;
        }
    }
    ctx->pc = 0x11AAF0u;
label_11aaf0:
    // 0x11aaf0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x11aaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_11aaf4:
    // 0x11aaf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11aaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11aaf8:
    // 0x11aaf8: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x11aaf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_11aafc:
    // 0x11aafc: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x11aafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_11ab00:
    // 0x11ab00: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x11ab00u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11ab04:
    // 0x11ab04: 0x461ba834  c.lt.s      $f21, $f27
    ctx->pc = 0x11ab04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ab08:
    // 0x11ab08: 0x0  nop
    ctx->pc = 0x11ab08u;
    // NOP
label_11ab0c:
    // 0x11ab0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_11ab10:
    if (ctx->pc == 0x11AB10u) {
        ctx->pc = 0x11AB14u;
        goto label_11ab14;
    }
    ctx->pc = 0x11AB0Cu;
    {
        const bool branch_taken_0x11ab0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ab0c) {
            ctx->pc = 0x11AB20u;
            goto label_11ab20;
        }
    }
    ctx->pc = 0x11AB14u;
label_11ab14:
    // 0x11ab14: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x11ab14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11ab18:
    // 0x11ab18: 0x10000007  b           . + 4 + (0x7 << 2)
label_11ab1c:
    if (ctx->pc == 0x11AB1Cu) {
        ctx->pc = 0x11AB20u;
        goto label_11ab20;
    }
    ctx->pc = 0x11AB18u;
    {
        const bool branch_taken_0x11ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ab18) {
            ctx->pc = 0x11AB38u;
            goto label_11ab38;
        }
    }
    ctx->pc = 0x11AB20u;
label_11ab20:
    // 0x11ab20: 0x4615c834  c.lt.s      $f25, $f21
    ctx->pc = 0x11ab20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ab24:
    // 0x11ab24: 0x0  nop
    ctx->pc = 0x11ab24u;
    // NOP
label_11ab28:
    // 0x11ab28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_11ab2c:
    if (ctx->pc == 0x11AB2Cu) {
        ctx->pc = 0x11AB30u;
        goto label_11ab30;
    }
    ctx->pc = 0x11AB28u;
    {
        const bool branch_taken_0x11ab28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ab28) {
            ctx->pc = 0x11AB38u;
            goto label_11ab38;
        }
    }
    ctx->pc = 0x11AB30u;
label_11ab30:
    // 0x11ab30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ab34:
    // 0x11ab34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11ab34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11ab38:
    // 0x11ab38: 0x461bb034  c.lt.s      $f22, $f27
    ctx->pc = 0x11ab38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ab3c:
    // 0x11ab3c: 0x0  nop
    ctx->pc = 0x11ab3cu;
    // NOP
label_11ab40:
    // 0x11ab40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_11ab44:
    if (ctx->pc == 0x11AB44u) {
        ctx->pc = 0x11AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB40u;
        // 0x11ab44: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB48u;
        goto label_11ab48;
    }
    ctx->pc = 0x11AB40u;
    {
        const bool branch_taken_0x11ab40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB40u;
        // 0x11ab44: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab40) {
            ctx->pc = 0x11AB54u;
            goto label_11ab54;
        }
    }
    ctx->pc = 0x11AB48u;
label_11ab48:
    // 0x11ab48: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x11ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_11ab4c:
    // 0x11ab4c: 0x10000009  b           . + 4 + (0x9 << 2)
label_11ab50:
    if (ctx->pc == 0x11AB50u) {
        ctx->pc = 0x11AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB4Cu;
        // 0x11ab50: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB54u;
        goto label_11ab54;
    }
    ctx->pc = 0x11AB4Cu;
    {
        const bool branch_taken_0x11ab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB4Cu;
        // 0x11ab50: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab4c) {
            ctx->pc = 0x11AB74u;
            goto label_11ab74;
        }
    }
    ctx->pc = 0x11AB54u;
label_11ab54:
    // 0x11ab54: 0x4616c834  c.lt.s      $f25, $f22
    ctx->pc = 0x11ab54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ab58:
    // 0x11ab58: 0x0  nop
    ctx->pc = 0x11ab58u;
    // NOP
label_11ab5c:
    // 0x11ab5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_11ab60:
    if (ctx->pc == 0x11AB60u) {
        ctx->pc = 0x11AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB5Cu;
        // 0x11ab60: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB64u;
        goto label_11ab64;
    }
    ctx->pc = 0x11AB5Cu;
    {
        const bool branch_taken_0x11ab5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB5Cu;
        // 0x11ab60: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab5c) {
            ctx->pc = 0x11AB74u;
            goto label_11ab74;
        }
    }
    ctx->pc = 0x11AB64u;
label_11ab64:
    // 0x11ab64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ab64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ab68:
    // 0x11ab68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x11ab68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_11ab6c:
    // 0x11ab6c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11ab70:
    // 0x11ab70: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x11ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_11ab74:
    // 0x11ab74: 0x8c82aa84  lw          $v0, -0x557C($a0)
    ctx->pc = 0x11ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945412)));
label_11ab78:
    // 0x11ab78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x11ab78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_11ab7c:
    // 0x11ab7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11ab80:
    // 0x11ab80: 0x8c447aa8  lw          $a0, 0x7AA8($v0)
    ctx->pc = 0x11ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
label_11ab84:
    // 0x11ab84: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_11ab88:
    if (ctx->pc == 0x11AB88u) {
        ctx->pc = 0x11AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB84u;
        // 0x11ab88: 0xc4547a20  lwc1        $f20, 0x7A20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB8Cu;
        goto label_11ab8c;
    }
    ctx->pc = 0x11AB84u;
    {
        const bool branch_taken_0x11ab84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB84u;
        // 0x11ab88: 0xc4547a20  lwc1        $f20, 0x7A20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab84) {
            ctx->pc = 0x11ABD0u;
            goto label_11abd0;
        }
    }
    ctx->pc = 0x11AB8Cu;
label_11ab8c:
    // 0x11ab8c: 0xc043c62  jal         func_10F188
label_11ab90:
    if (ctx->pc == 0x11AB90u) {
        ctx->pc = 0x11AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB8Cu;
        // 0x11ab90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB94u;
        goto label_11ab94;
    }
    ctx->pc = 0x11AB8Cu;
    SET_GPR_U32(ctx, 31, 0x11AB94u);
    ctx->pc = 0x11AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB8Cu;
    // 0x11ab90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F188u, 0x11AB8Cu, 0x11AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB94u;
label_11ab94:
    // 0x11ab94: 0x4617e042  mul.s       $f1, $f28, $f23
    ctx->pc = 0x11ab94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[23]);
label_11ab98:
    // 0x11ab98: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x11ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11ab9c:
    // 0x11ab9c: 0xc6640078  lwc1        $f4, 0x78($s3)
    ctx->pc = 0x11ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11aba0:
    // 0x11aba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11aba4:
    // 0x11aba4: 0xc66300a8  lwc1        $f3, 0xA8($s3)
    ctx->pc = 0x11aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11aba8:
    // 0x11aba8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11aba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11abac:
    // 0x11abac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11abacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_11abb0:
    // 0x11abb0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11abb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_11abb4:
    // 0x11abb4: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x11abb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_11abb8:
    // 0x11abb8: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x11abb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_11abbc:
    // 0x11abbc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11abbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_11abc0:
    // 0x11abc0: 0xc043c62  jal         func_10F188
label_11abc4:
    if (ctx->pc == 0x11ABC4u) {
        ctx->pc = 0x11ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABC0u;
        // 0x11abc4: 0x46030d42  mul.s       $f21, $f1, $f3 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABC8u;
        goto label_11abc8;
    }
    ctx->pc = 0x11ABC0u;
    SET_GPR_U32(ctx, 31, 0x11ABC8u);
    ctx->pc = 0x11ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABC0u;
    // 0x11abc4: 0x46030d42  mul.s       $f21, $f1, $f3 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F188u, 0x11ABC0u, 0x11ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABC8u;
label_11abc8:
    // 0x11abc8: 0x10000011  b           . + 4 + (0x11 << 2)
label_11abcc:
    if (ctx->pc == 0x11ABCCu) {
        ctx->pc = 0x11ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABC8u;
        // 0x11abcc: 0x4617e842  mul.s       $f1, $f29, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABD0u;
        goto label_11abd0;
    }
    ctx->pc = 0x11ABC8u;
    {
        const bool branch_taken_0x11abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABC8u;
        // 0x11abcc: 0x4617e842  mul.s       $f1, $f29, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abc8) {
            ctx->pc = 0x11AC10u;
            goto label_11ac10;
        }
    }
    ctx->pc = 0x11ABD0u;
label_11abd0:
    // 0x11abd0: 0xc043c62  jal         func_10F188
label_11abd4:
    if (ctx->pc == 0x11ABD4u) {
        ctx->pc = 0x11ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD0u;
        // 0x11abd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABD8u;
        goto label_11abd8;
    }
    ctx->pc = 0x11ABD0u;
    SET_GPR_U32(ctx, 31, 0x11ABD8u);
    ctx->pc = 0x11ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABD0u;
    // 0x11abd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F188u, 0x11ABD0u, 0x11ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABD8u;
label_11abd8:
    // 0x11abd8: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x11abd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_11abdc:
    // 0x11abdc: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x11abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11abe0:
    // 0x11abe0: 0xc6640078  lwc1        $f4, 0x78($s3)
    ctx->pc = 0x11abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11abe4:
    // 0x11abe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11abe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11abe8:
    // 0x11abe8: 0xc66300a8  lwc1        $f3, 0xA8($s3)
    ctx->pc = 0x11abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11abec:
    // 0x11abec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11abecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11abf0:
    // 0x11abf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11abf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_11abf4:
    // 0x11abf4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11abf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_11abf8:
    // 0x11abf8: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x11abf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_11abfc:
    // 0x11abfc: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x11abfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_11ac00:
    // 0x11ac00: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11ac00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_11ac04:
    // 0x11ac04: 0xc043c62  jal         func_10F188
label_11ac08:
    if (ctx->pc == 0x11AC08u) {
        ctx->pc = 0x11AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC04u;
        // 0x11ac08: 0x46030d42  mul.s       $f21, $f1, $f3 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AC0Cu;
        goto label_11ac0c;
    }
    ctx->pc = 0x11AC04u;
    SET_GPR_U32(ctx, 31, 0x11AC0Cu);
    ctx->pc = 0x11AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC04u;
    // 0x11ac08: 0x46030d42  mul.s       $f21, $f1, $f3 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F188u, 0x11AC04u, 0x11AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC0Cu;
label_11ac0c:
    // 0x11ac0c: 0x4616b842  mul.s       $f1, $f23, $f22
    ctx->pc = 0x11ac0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
label_11ac10:
    // 0x11ac10: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x11ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11ac14:
    // 0x11ac14: 0xc6630078  lwc1        $f3, 0x78($s3)
    ctx->pc = 0x11ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11ac18:
    // 0x11ac18: 0xc66400a8  lwc1        $f4, 0xA8($s3)
    ctx->pc = 0x11ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11ac1c:
    // 0x11ac1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11ac1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11ac20:
    // 0x11ac20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11ac20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_11ac24:
    // 0x11ac24: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11ac24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_11ac28:
    // 0x11ac28: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x11ac28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_11ac2c:
    // 0x11ac2c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x11ac2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_11ac30:
    // 0x11ac30: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11ac30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_11ac34:
    // 0x11ac34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ac38:
    // 0x11ac38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11ac38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11ac3c:
    // 0x11ac3c: 0x0  nop
    ctx->pc = 0x11ac3cu;
    // NOP
label_11ac40:
    // 0x11ac40: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x11ac40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ac44:
    // 0x11ac44: 0x0  nop
    ctx->pc = 0x11ac44u;
    // NOP
label_11ac48:
    // 0x11ac48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_11ac4c:
    if (ctx->pc == 0x11AC4Cu) {
        ctx->pc = 0x11AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC48u;
        // 0x11ac4c: 0x46040842  mul.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AC50u;
        goto label_11ac50;
    }
    ctx->pc = 0x11AC48u;
    {
        const bool branch_taken_0x11ac48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC48u;
        // 0x11ac4c: 0x46040842  mul.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac48) {
            ctx->pc = 0x11AC54u;
            goto label_11ac54;
        }
    }
    ctx->pc = 0x11AC50u;
label_11ac50:
    // 0x11ac50: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x11ac50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_11ac54:
    // 0x11ac54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11ac54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_11ac58:
    // 0x11ac58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ac58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ac5c:
    // 0x11ac5c: 0x0  nop
    ctx->pc = 0x11ac5cu;
    // NOP
label_11ac60:
    // 0x11ac60: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x11ac60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ac64:
    // 0x11ac64: 0x0  nop
    ctx->pc = 0x11ac64u;
    // NOP
label_11ac68:
    // 0x11ac68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11ac6c:
    if (ctx->pc == 0x11AC6Cu) {
        ctx->pc = 0x11AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC68u;
        // 0x11ac6c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AC70u;
        goto label_11ac70;
    }
    ctx->pc = 0x11AC68u;
    {
        const bool branch_taken_0x11ac68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ac68) {
            ctx->pc = 0x11AC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AC68u;
            // 0x11ac6c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AC70u;
            goto label_11ac70;
        }
    }
    ctx->pc = 0x11AC70u;
label_11ac70:
    // 0x11ac70: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x11ac70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ac74:
    // 0x11ac74: 0x0  nop
    ctx->pc = 0x11ac74u;
    // NOP
label_11ac78:
    // 0x11ac78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11ac7c:
    if (ctx->pc == 0x11AC7Cu) {
        ctx->pc = 0x11AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC78u;
        // 0x11ac7c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AC80u;
        goto label_11ac80;
    }
    ctx->pc = 0x11AC78u;
    {
        const bool branch_taken_0x11ac78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ac78) {
            ctx->pc = 0x11AC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AC78u;
            // 0x11ac7c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AC80u;
            goto label_11ac80;
        }
    }
    ctx->pc = 0x11AC80u;
label_11ac80:
    // 0x11ac80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11ac80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ac84:
    // 0x11ac84: 0x0  nop
    ctx->pc = 0x11ac84u;
    // NOP
label_11ac88:
    // 0x11ac88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11ac8c:
    if (ctx->pc == 0x11AC8Cu) {
        ctx->pc = 0x11AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC88u;
        // 0x11ac8c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AC90u;
        goto label_11ac90;
    }
    ctx->pc = 0x11AC88u;
    {
        const bool branch_taken_0x11ac88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ac88) {
            ctx->pc = 0x11AC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AC88u;
            // 0x11ac8c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AC90u;
            goto label_11ac90;
        }
    }
    ctx->pc = 0x11AC90u;
label_11ac90:
    // 0x11ac90: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x11ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_11ac94:
    // 0x11ac94: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x11ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_11ac98:
    // 0x11ac98: 0x8c430268  lw          $v1, 0x268($v0)
    ctx->pc = 0x11ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
label_11ac9c:
    // 0x11ac9c: 0x5860000c  blezl       $v1, . + 4 + (0xC << 2)
label_11aca0:
    if (ctx->pc == 0x11ACA0u) {
        ctx->pc = 0x11ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC9Cu;
        // 0x11aca0: 0xe6790070  swc1        $f25, 0x70($s3) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACA4u;
        goto label_11aca4;
    }
    ctx->pc = 0x11AC9Cu;
    {
        const bool branch_taken_0x11ac9c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11ac9c) {
            ctx->pc = 0x11ACA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AC9Cu;
            // 0x11aca0: 0xe6790070  swc1        $f25, 0x70($s3) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ACD0u;
            goto label_11acd0;
        }
    }
    ctx->pc = 0x11ACA4u;
label_11aca4:
    // 0x11aca4: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x11aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_11aca8:
    // 0x11aca8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_11acac:
    if (ctx->pc == 0x11ACACu) {
        ctx->pc = 0x11ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACA8u;
        // 0x11acac: 0x8fa200e4  lw          $v0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACB0u;
        goto label_11acb0;
    }
    ctx->pc = 0x11ACA8u;
    {
        const bool branch_taken_0x11aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACA8u;
        // 0x11acac: 0x8fa200e4  lw          $v0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aca8) {
            ctx->pc = 0x11ACCCu;
            goto label_11accc;
        }
    }
    ctx->pc = 0x11ACB0u;
label_11acb0:
    // 0x11acb0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_11acb4:
    if (ctx->pc == 0x11ACB4u) {
        ctx->pc = 0x11ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACB0u;
        // 0x11acb4: 0xe6790070  swc1        $f25, 0x70($s3) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACB8u;
        goto label_11acb8;
    }
    ctx->pc = 0x11ACB0u;
    {
        const bool branch_taken_0x11acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11acb0) {
            ctx->pc = 0x11ACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ACB0u;
            // 0x11acb4: 0xe6790070  swc1        $f25, 0x70($s3) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ACD0u;
            goto label_11acd0;
        }
    }
    ctx->pc = 0x11ACB8u;
label_11acb8:
    // 0x11acb8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_11acbc:
    // 0x11acbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x11acbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_11acc0:
    // 0x11acc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11acc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11acc4:
    // 0x11acc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_11acc8:
    if (ctx->pc == 0x11ACC8u) {
        ctx->pc = 0x11ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC4u;
        // 0x11acc8: 0xe6600070  swc1        $f0, 0x70($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACCCu;
        goto label_11accc;
    }
    ctx->pc = 0x11ACC4u;
    {
        const bool branch_taken_0x11acc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC4u;
        // 0x11acc8: 0xe6600070  swc1        $f0, 0x70($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acc4) {
            ctx->pc = 0x11ACD0u;
            goto label_11acd0;
        }
    }
    ctx->pc = 0x11ACCCu;
label_11accc:
    // 0x11accc: 0xe6790070  swc1        $f25, 0x70($s3)
    ctx->pc = 0x11acccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
label_11acd0:
    // 0x11acd0: 0xe6950000  swc1        $f21, 0x0($s4)
    ctx->pc = 0x11acd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_11acd4:
    // 0x11acd4: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x11acd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_11acd8:
    // 0x11acd8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11acdc:
    // 0x11acdc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_11ace0:
    // 0x11ace0: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x11ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_11ace4:
    // 0x11ace4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11ace4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_11ace8:
    // 0x11ace8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11ace8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_11acec:
    // 0x11acec: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x11acecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11acf0:
    // 0x11acf0: 0x1440fe2d  bnez        $v0, . + 4 + (-0x1D3 << 2)
label_11acf4:
    if (ctx->pc == 0x11ACF4u) {
        ctx->pc = 0x11ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACF0u;
        // 0x11acf4: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACF8u;
        goto label_11acf8;
    }
    ctx->pc = 0x11ACF0u;
    {
        const bool branch_taken_0x11acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACF0u;
        // 0x11acf4: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acf0) {
            ctx->pc = 0x11A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a5a8;
        }
    }
    ctx->pc = 0x11ACF8u;
label_11acf8:
    // 0x11acf8: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x11acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_11acfc:
    // 0x11acfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11acfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ad00:
    // 0x11ad00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ad00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11ad04:
    // 0x11ad04: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_11ad08:
    if (ctx->pc == 0x11AD08u) {
        ctx->pc = 0x11AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD04u;
        // 0x11ad08: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD0Cu;
        goto label_11ad0c;
    }
    ctx->pc = 0x11AD04u;
    {
        const bool branch_taken_0x11ad04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD04u;
        // 0x11ad08: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad04) {
            ctx->pc = 0x11AD5Cu;
            goto label_11ad5c;
        }
    }
    ctx->pc = 0x11AD0Cu;
label_11ad0c:
    // 0x11ad0c: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x11ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_11ad10:
    // 0x11ad10: 0x8c430268  lw          $v1, 0x268($v0)
    ctx->pc = 0x11ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
label_11ad14:
    // 0x11ad14: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
label_11ad18:
    if (ctx->pc == 0x11AD18u) {
        ctx->pc = 0x11AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD14u;
        // 0x11ad18: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD1Cu;
        goto label_11ad1c;
    }
    ctx->pc = 0x11AD14u;
    {
        const bool branch_taken_0x11ad14 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x11AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD14u;
        // 0x11ad18: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad14) {
            ctx->pc = 0x11AD60u;
            goto label_11ad60;
        }
    }
    ctx->pc = 0x11AD1Cu;
label_11ad1c:
    // 0x11ad1c: 0x8e7000a4  lw          $s0, 0xA4($s3)
    ctx->pc = 0x11ad1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_11ad20:
    // 0x11ad20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ad24:
    // 0x11ad24: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_11ad28:
    if (ctx->pc == 0x11AD28u) {
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD24u;
        // 0x11ad28: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD2Cu;
        goto label_11ad2c;
    }
    ctx->pc = 0x11AD24u;
    {
        const bool branch_taken_0x11ad24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD24u;
        // 0x11ad28: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad24) {
            ctx->pc = 0x11AD64u;
            goto label_11ad64;
        }
    }
    ctx->pc = 0x11AD2Cu;
label_11ad2c:
    // 0x11ad2c: 0xc043bf8  jal         func_10EFE0
label_11ad30:
    if (ctx->pc == 0x11AD30u) {
        ctx->pc = 0x11AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD2Cu;
        // 0x11ad30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD34u;
        goto label_11ad34;
    }
    ctx->pc = 0x11AD2Cu;
    SET_GPR_U32(ctx, 31, 0x11AD34u);
    ctx->pc = 0x11AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD2Cu;
    // 0x11ad30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFE0u, 0x11AD2Cu, 0x11AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD34u;
label_11ad34:
    // 0x11ad34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11ad38:
    if (ctx->pc == 0x11AD38u) {
        ctx->pc = 0x11AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD34u;
        // 0x11ad38: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD3Cu;
        goto label_11ad3c;
    }
    ctx->pc = 0x11AD34u;
    {
        const bool branch_taken_0x11ad34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD34u;
        // 0x11ad38: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad34) {
            ctx->pc = 0x11AD5Cu;
            goto label_11ad5c;
        }
    }
    ctx->pc = 0x11AD3Cu;
label_11ad3c:
    // 0x11ad3c: 0x8c83aa84  lw          $v1, -0x557C($a0)
    ctx->pc = 0x11ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945412)));
label_11ad40:
    // 0x11ad40: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x11ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
label_11ad44:
    // 0x11ad44: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_11ad48:
    if (ctx->pc == 0x11AD48u) {
        ctx->pc = 0x11AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD44u;
        // 0x11ad48: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD4Cu;
        goto label_11ad4c;
    }
    ctx->pc = 0x11AD44u;
    {
        const bool branch_taken_0x11ad44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x11AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD44u;
        // 0x11ad48: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad44) {
            ctx->pc = 0x11AD60u;
            goto label_11ad60;
        }
    }
    ctx->pc = 0x11AD4Cu;
label_11ad4c:
    // 0x11ad4c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x11ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_11ad50:
    // 0x11ad50: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x11ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_11ad54:
    // 0x11ad54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11ad58:
    // 0x11ad58: 0xc4547aac  lwc1        $f20, 0x7AAC($v0)
    ctx->pc = 0x11ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11ad5c:
    // 0x11ad5c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_11ad60:
    // 0x11ad60: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x11ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_11ad64:
    // 0x11ad64: 0x8ca2aa84  lw          $v0, -0x557C($a1)
    ctx->pc = 0x11ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_11ad68:
    // 0x11ad68: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x11ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_11ad6c:
    // 0x11ad6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11ad6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11ad70:
    // 0x11ad70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11ad74:
    // 0x11ad74: 0x8c447aa8  lw          $a0, 0x7AA8($v0)
    ctx->pc = 0x11ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
label_11ad78:
    // 0x11ad78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_11ad7c:
    if (ctx->pc == 0x11AD7Cu) {
        ctx->pc = 0x11AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD78u;
        // 0x11ad7c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD80u;
        goto label_11ad80;
    }
    ctx->pc = 0x11AD78u;
    {
        const bool branch_taken_0x11ad78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD78u;
        // 0x11ad7c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad78) {
            ctx->pc = 0x11AD8Cu;
            goto label_11ad8c;
        }
    }
    ctx->pc = 0x11AD80u;
label_11ad80:
    // 0x11ad80: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x11ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11ad84:
    // 0x11ad84: 0x10000015  b           . + 4 + (0x15 << 2)
label_11ad88:
    if (ctx->pc == 0x11AD88u) {
        ctx->pc = 0x11AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD84u;
        // 0x11ad88: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD8Cu;
        goto label_11ad8c;
    }
    ctx->pc = 0x11AD84u;
    {
        const bool branch_taken_0x11ad84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD84u;
        // 0x11ad88: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad84) {
            ctx->pc = 0x11ADDCu;
            goto label_11addc;
        }
    }
    ctx->pc = 0x11AD8Cu;
label_11ad8c:
    // 0x11ad8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11ad90:
    // 0x11ad90: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x11ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_11ad94:
    // 0x11ad94: 0x84420224  lh          $v0, 0x224($v0)
    ctx->pc = 0x11ad94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_11ad98:
    // 0x11ad98: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_11ad9c:
    if (ctx->pc == 0x11AD9Cu) {
        ctx->pc = 0x11ADA0u;
        goto label_11ada0;
    }
    ctx->pc = 0x11AD98u;
    {
        const bool branch_taken_0x11ad98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11ad98) {
            ctx->pc = 0x11ADDCu;
            goto label_11addc;
        }
    }
    ctx->pc = 0x11ADA0u;
label_11ada0:
    // 0x11ada0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ada0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ada4:
    // 0x11ada4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x11ada4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ada8:
    // 0x11ada8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11adac:
    // 0x11adac: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11adacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11adb0:
    // 0x11adb0: 0x0  nop
    ctx->pc = 0x11adb0u;
    // NOP
label_11adb4:
    // 0x11adb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11adb8:
    if (ctx->pc == 0x11ADB8u) {
        ctx->pc = 0x11ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADB4u;
        // 0x11adb8: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ADBCu;
        goto label_11adbc;
    }
    ctx->pc = 0x11ADB4u;
    {
        const bool branch_taken_0x11adb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11adb4) {
            ctx->pc = 0x11ADB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ADB4u;
            // 0x11adb8: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ADBCu;
            goto label_11adbc;
        }
    }
    ctx->pc = 0x11ADBCu;
label_11adbc:
    // 0x11adbc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11adc0:
    // 0x11adc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11adc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11adc4:
    // 0x11adc4: 0x0  nop
    ctx->pc = 0x11adc4u;
    // NOP
label_11adc8:
    // 0x11adc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11adcc:
    if (ctx->pc == 0x11ADCCu) {
        ctx->pc = 0x11ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADC8u;
        // 0x11adcc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ADD0u;
        goto label_11add0;
    }
    ctx->pc = 0x11ADC8u;
    {
        const bool branch_taken_0x11adc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11adc8) {
            ctx->pc = 0x11ADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ADC8u;
            // 0x11adcc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ADD0u;
            goto label_11add0;
        }
    }
    ctx->pc = 0x11ADD0u;
label_11add0:
    // 0x11add0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11add4:
    // 0x11add4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_11add8:
    if (ctx->pc == 0x11ADD8u) {
        ctx->pc = 0x11ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADD4u;
        // 0x11add8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ADDCu;
        goto label_11addc;
    }
    ctx->pc = 0x11ADD4u;
    {
        const bool branch_taken_0x11add4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADD4u;
        // 0x11add8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11add4) {
            ctx->pc = 0x11ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ada8;
        }
    }
    ctx->pc = 0x11ADDCu;
label_11addc:
    // 0x11addc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11addcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ade0:
    // 0x11ade0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ade0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ade4:
    // 0x11ade4: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_11ade8:
    if (ctx->pc == 0x11ADE8u) {
        ctx->pc = 0x11ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADE4u;
        // 0x11ade8: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ADECu;
        goto label_11adec;
    }
    ctx->pc = 0x11ADE4u;
    {
        const bool branch_taken_0x11ade4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADE4u;
        // 0x11ade8: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade4) {
            ctx->pc = 0x11AE08u;
            goto label_11ae08;
        }
    }
    ctx->pc = 0x11ADECu;
label_11adec:
    // 0x11adec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_11adf0:
    if (ctx->pc == 0x11ADF0u) {
        ctx->pc = 0x11ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADECu;
        // 0x11adf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ADF4u;
        goto label_11adf4;
    }
    ctx->pc = 0x11ADECu;
    {
        const bool branch_taken_0x11adec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADECu;
        // 0x11adf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adec) {
            ctx->pc = 0x11AE0Cu;
            goto label_11ae0c;
        }
    }
    ctx->pc = 0x11ADF4u;
label_11adf4:
    // 0x11adf4: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x11adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_11adf8:
    // 0x11adf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11adfc:
    if (ctx->pc == 0x11ADFCu) {
        ctx->pc = 0x11ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADF8u;
        // 0x11adfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AE00u;
        goto label_11ae00;
    }
    ctx->pc = 0x11ADF8u;
    {
        const bool branch_taken_0x11adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADF8u;
        // 0x11adfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adf8) {
            ctx->pc = 0x11AE0Cu;
            goto label_11ae0c;
        }
    }
    ctx->pc = 0x11AE00u;
label_11ae00:
    // 0x11ae00: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x11ae00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_11ae04:
    // 0x11ae04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ae04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ae08:
    // 0x11ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ae0c:
    // 0x11ae0c: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x11ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_11ae10:
    // 0x11ae10: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x11ae10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
label_11ae14:
    // 0x11ae14: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x11ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_11ae18:
    // 0x11ae18: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x11ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_11ae1c:
    // 0x11ae1c: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x11ae1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_11ae20:
    // 0x11ae20: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_11ae24:
    if (ctx->pc == 0x11AE24u) {
        ctx->pc = 0x11AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE20u;
        // 0x11ae24: 0xc66000ac  lwc1        $f0, 0xAC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AE28u;
        goto label_11ae28;
    }
    ctx->pc = 0x11AE20u;
    {
        const bool branch_taken_0x11ae20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ae20) {
            ctx->pc = 0x11AE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE20u;
            // 0x11ae24: 0xc66000ac  lwc1        $f0, 0xAC($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AE4Cu;
            goto label_11ae4c;
        }
    }
    ctx->pc = 0x11AE28u;
label_11ae28:
    // 0x11ae28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ae2c:
    // 0x11ae2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ae2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ae30:
    // 0x11ae30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ae34:
    // 0x11ae34: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x11ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_11ae38:
    // 0x11ae38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11ae38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_11ae3c:
    // 0x11ae3c: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x11ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
label_11ae40:
    // 0x11ae40: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x11ae40u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_11ae44:
    // 0x11ae44: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x11ae44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_11ae48:
    // 0x11ae48: 0xc66000ac  lwc1        $f0, 0xAC($s3)
    ctx->pc = 0x11ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ae4c:
    // 0x11ae4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11ae50:
    // 0x11ae50: 0x9262007c  lbu         $v0, 0x7C($s3)
    ctx->pc = 0x11ae50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 124)));
label_11ae54:
    // 0x11ae54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11ae54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11ae58:
    // 0x11ae58: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x11ae58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_11ae5c:
    // 0x11ae5c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11ae5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_11ae60:
    // 0x11ae60: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_11ae64:
    if (ctx->pc == 0x11AE64u) {
        ctx->pc = 0x11AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE60u;
        // 0x11ae64: 0x461400c2  mul.s       $f3, $f0, $f20 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AE68u;
        goto label_11ae68;
    }
    ctx->pc = 0x11AE60u;
    {
        const bool branch_taken_0x11ae60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE60u;
        // 0x11ae64: 0x461400c2  mul.s       $f3, $f0, $f20 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae60) {
            ctx->pc = 0x11AF3Cu;
            goto label_11af3c;
        }
    }
    ctx->pc = 0x11AE68u;
label_11ae68:
    // 0x11ae68: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11ae6c:
    // 0x11ae6c: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x11ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_11ae70:
    // 0x11ae70: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x11ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_11ae74:
    // 0x11ae74: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x11ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_11ae78:
    // 0x11ae78: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x11ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_11ae7c:
    // 0x11ae7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11ae80:
    if (ctx->pc == 0x11AE80u) {
        ctx->pc = 0x11AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE7Cu;
        // 0x11ae80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AE84u;
        goto label_11ae84;
    }
    ctx->pc = 0x11AE7Cu;
    {
        const bool branch_taken_0x11ae7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE7Cu;
        // 0x11ae80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae7c) {
            ctx->pc = 0x11AE98u;
            goto label_11ae98;
        }
    }
    ctx->pc = 0x11AE84u;
label_11ae84:
    // 0x11ae84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11ae84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11ae88:
    // 0x11ae88: 0x0  nop
    ctx->pc = 0x11ae88u;
    // NOP
label_11ae8c:
    // 0x11ae8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ae8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_11ae90:
    // 0x11ae90: 0x10000008  b           . + 4 + (0x8 << 2)
label_11ae94:
    if (ctx->pc == 0x11AE94u) {
        ctx->pc = 0x11AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE90u;
        // 0x11ae94: 0x8e620084  lw          $v0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AE98u;
        goto label_11ae98;
    }
    ctx->pc = 0x11AE90u;
    {
        const bool branch_taken_0x11ae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE90u;
        // 0x11ae94: 0x8e620084  lw          $v0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae90) {
            ctx->pc = 0x11AEB4u;
            goto label_11aeb4;
        }
    }
    ctx->pc = 0x11AE98u;
label_11ae98:
    // 0x11ae98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11ae9c:
    // 0x11ae9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11aea0:
    // 0x11aea0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11aea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11aea4:
    // 0x11aea4: 0x0  nop
    ctx->pc = 0x11aea4u;
    // NOP
label_11aea8:
    // 0x11aea8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11aea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_11aeac:
    // 0x11aeac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x11aeacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_11aeb0:
    // 0x11aeb0: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x11aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_11aeb4:
    // 0x11aeb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11aeb8:
    if (ctx->pc == 0x11AEB8u) {
        ctx->pc = 0x11AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEB4u;
        // 0x11aeb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AEBCu;
        goto label_11aebc;
    }
    ctx->pc = 0x11AEB4u;
    {
        const bool branch_taken_0x11aeb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEB4u;
        // 0x11aeb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeb4) {
            ctx->pc = 0x11AED0u;
            goto label_11aed0;
        }
    }
    ctx->pc = 0x11AEBCu;
label_11aebc:
    // 0x11aebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11aebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11aec0:
    // 0x11aec0: 0x0  nop
    ctx->pc = 0x11aec0u;
    // NOP
label_11aec4:
    // 0x11aec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11aec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11aec8:
    // 0x11aec8: 0x10000007  b           . + 4 + (0x7 << 2)
label_11aecc:
    if (ctx->pc == 0x11AECCu) {
        ctx->pc = 0x11AED0u;
        goto label_11aed0;
    }
    ctx->pc = 0x11AEC8u;
    {
        const bool branch_taken_0x11aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aec8) {
            ctx->pc = 0x11AEE8u;
            goto label_11aee8;
        }
    }
    ctx->pc = 0x11AED0u;
label_11aed0:
    // 0x11aed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11aed4:
    // 0x11aed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11aed8:
    // 0x11aed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11aed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11aedc:
    // 0x11aedc: 0x0  nop
    ctx->pc = 0x11aedcu;
    // NOP
label_11aee0:
    // 0x11aee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11aee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11aee4:
    // 0x11aee4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11aee8:
    // 0x11aee8: 0x0  nop
    ctx->pc = 0x11aee8u;
    // NOP
label_11aeec:
    // 0x11aeec: 0x0  nop
    ctx->pc = 0x11aeecu;
    // NOP
label_11aef0:
    // 0x11aef0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x11aef0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_11aef4:
    // 0x11aef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11aef8:
    // 0x11aef8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11aef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11aefc:
    // 0x11aefc: 0x0  nop
    ctx->pc = 0x11aefcu;
    // NOP
label_11af00:
    // 0x11af00: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11af00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11af04:
    // 0x11af04: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x11af04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11af08:
    // 0x11af08: 0x0  nop
    ctx->pc = 0x11af08u;
    // NOP
label_11af0c:
    // 0x11af0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11af10:
    if (ctx->pc == 0x11AF10u) {
        ctx->pc = 0x11AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF0Cu;
        // 0x11af10: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF14u;
        goto label_11af14;
    }
    ctx->pc = 0x11AF0Cu;
    {
        const bool branch_taken_0x11af0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11af0c) {
            ctx->pc = 0x11AF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AF0Cu;
            // 0x11af10: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF14u;
            goto label_11af14;
        }
    }
    ctx->pc = 0x11AF14u;
label_11af14:
    // 0x11af14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11af14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11af18:
    // 0x11af18: 0x0  nop
    ctx->pc = 0x11af18u;
    // NOP
label_11af1c:
    // 0x11af1c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x11af1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11af20:
    // 0x11af20: 0x0  nop
    ctx->pc = 0x11af20u;
    // NOP
label_11af24:
    // 0x11af24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_11af28:
    if (ctx->pc == 0x11AF28u) {
        ctx->pc = 0x11AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF24u;
        // 0x11af28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF2Cu;
        goto label_11af2c;
    }
    ctx->pc = 0x11AF24u;
    {
        const bool branch_taken_0x11af24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF24u;
        // 0x11af28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af24) {
            ctx->pc = 0x11AF34u;
            goto label_11af34;
        }
    }
    ctx->pc = 0x11AF2Cu;
label_11af2c:
    // 0x11af2c: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x11af2cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_11af30:
    // 0x11af30: 0xa2620094  sb          $v0, 0x94($s3)
    ctx->pc = 0x11af30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
label_11af34:
    // 0x11af34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11af34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11af38:
    // 0x11af38: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11af38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_11af3c:
    // 0x11af3c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x11af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11af40:
    // 0x11af40: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x11af40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11af44:
    // 0x11af44: 0x0  nop
    ctx->pc = 0x11af44u;
    // NOP
label_11af48:
    // 0x11af48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_11af4c:
    if (ctx->pc == 0x11AF4Cu) {
        ctx->pc = 0x11AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF48u;
        // 0x11af4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF50u;
        goto label_11af50;
    }
    ctx->pc = 0x11AF48u;
    {
        const bool branch_taken_0x11af48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF48u;
        // 0x11af4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af48) {
            ctx->pc = 0x11AF68u;
            goto label_11af68;
        }
    }
    ctx->pc = 0x11AF50u;
label_11af50:
    // 0x11af50: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x11af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11af54:
    // 0x11af54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11af54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11af58:
    // 0x11af58: 0x0  nop
    ctx->pc = 0x11af58u;
    // NOP
label_11af5c:
    // 0x11af5c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_11af60:
    if (ctx->pc == 0x11AF60u) {
        ctx->pc = 0x11AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF5Cu;
        // 0x11af60: 0x8e620038  lw          $v0, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF64u;
        goto label_11af64;
    }
    ctx->pc = 0x11AF5Cu;
    {
        const bool branch_taken_0x11af5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11af5c) {
            ctx->pc = 0x11AF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AF5Cu;
            // 0x11af60: 0x8e620038  lw          $v0, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF78u;
            goto label_11af78;
        }
    }
    ctx->pc = 0x11AF64u;
label_11af64:
    // 0x11af64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11af68:
    // 0x11af68: 0xe6630058  swc1        $f3, 0x58($s3)
    ctx->pc = 0x11af68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_11af6c:
    // 0x11af6c: 0xe661005c  swc1        $f1, 0x5C($s3)
    ctx->pc = 0x11af6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
label_11af70:
    // 0x11af70: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x11af70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_11af74:
    // 0x11af74: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x11af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_11af78:
    // 0x11af78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_11af7c:
    if (ctx->pc == 0x11AF7Cu) {
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF78u;
        // 0x11af7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF80u;
        goto label_11af80;
    }
    ctx->pc = 0x11AF78u;
    {
        const bool branch_taken_0x11af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF78u;
        // 0x11af7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af78) {
            ctx->pc = 0x11AF90u;
            goto label_11af90;
        }
    }
    ctx->pc = 0x11AF80u;
label_11af80:
    // 0x11af80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11af84:
    // 0x11af84: 0x92620094  lbu         $v0, 0x94($s3)
    ctx->pc = 0x11af84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
label_11af88:
    // 0x11af88: 0x10000048  b           . + 4 + (0x48 << 2)
label_11af8c:
    if (ctx->pc == 0x11AF8Cu) {
        ctx->pc = 0x11AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF88u;
        // 0x11af8c: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF90u;
        goto label_11af90;
    }
    ctx->pc = 0x11AF88u;
    {
        const bool branch_taken_0x11af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF88u;
        // 0x11af8c: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af88) {
            ctx->pc = 0x11B0ACu;
            goto label_11b0ac;
        }
    }
    ctx->pc = 0x11AF90u;
label_11af90:
    // 0x11af90: 0xc043cbc  jal         func_10F2F0
label_11af94:
    if (ctx->pc == 0x11AF94u) {
        ctx->pc = 0x11AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF90u;
        // 0x11af94: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF98u;
        goto label_11af98;
    }
    ctx->pc = 0x11AF90u;
    SET_GPR_U32(ctx, 31, 0x11AF98u);
    ctx->pc = 0x11AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF90u;
    // 0x11af94: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x11AF90u, 0x11AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF98u;
label_11af98:
    // 0x11af98: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
label_11af9c:
    if (ctx->pc == 0x11AF9Cu) {
        ctx->pc = 0x11AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF98u;
        // 0x11af9c: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFA0u;
        goto label_11afa0;
    }
    ctx->pc = 0x11AF98u;
    {
        const bool branch_taken_0x11af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x11af98) {
            ctx->pc = 0x11AF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AF98u;
            // 0x11af9c: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AFC4u;
            goto label_11afc4;
        }
    }
    ctx->pc = 0x11AFA0u;
label_11afa0:
    // 0x11afa0: 0xc043cb2  jal         func_10F2C8
label_11afa4:
    if (ctx->pc == 0x11AFA4u) {
        ctx->pc = 0x11AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFA0u;
        // 0x11afa4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFA8u;
        goto label_11afa8;
    }
    ctx->pc = 0x11AFA0u;
    SET_GPR_U32(ctx, 31, 0x11AFA8u);
    ctx->pc = 0x11AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFA0u;
    // 0x11afa4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C8u, 0x11AFA0u, 0x11AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFA8u;
label_11afa8:
    // 0x11afa8: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
label_11afac:
    if (ctx->pc == 0x11AFACu) {
        ctx->pc = 0x11AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFA8u;
        // 0x11afac: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFB0u;
        goto label_11afb0;
    }
    ctx->pc = 0x11AFA8u;
    {
        const bool branch_taken_0x11afa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x11afa8) {
            ctx->pc = 0x11AFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFA8u;
            // 0x11afac: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AFC4u;
            goto label_11afc4;
        }
    }
    ctx->pc = 0x11AFB0u;
label_11afb0:
    // 0x11afb0: 0xc043bf8  jal         func_10EFE0
label_11afb4:
    if (ctx->pc == 0x11AFB4u) {
        ctx->pc = 0x11AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFB0u;
        // 0x11afb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFB8u;
        goto label_11afb8;
    }
    ctx->pc = 0x11AFB0u;
    SET_GPR_U32(ctx, 31, 0x11AFB8u);
    ctx->pc = 0x11AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFB0u;
    // 0x11afb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFE0u, 0x11AFB0u, 0x11AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFB8u;
label_11afb8:
    // 0x11afb8: 0x5450003c  bnel        $v0, $s0, . + 4 + (0x3C << 2)
label_11afbc:
    if (ctx->pc == 0x11AFBCu) {
        ctx->pc = 0x11AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFB8u;
        // 0x11afbc: 0x92620094  lbu         $v0, 0x94($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFC0u;
        goto label_11afc0;
    }
    ctx->pc = 0x11AFB8u;
    {
        const bool branch_taken_0x11afb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x11afb8) {
            ctx->pc = 0x11AFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFB8u;
            // 0x11afbc: 0x92620094  lbu         $v0, 0x94($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B0ACu;
            goto label_11b0ac;
        }
    }
    ctx->pc = 0x11AFC0u;
label_11afc0:
    // 0x11afc0: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_11afc4:
    // 0x11afc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11afc8:
    if (ctx->pc == 0x11AFC8u) {
        ctx->pc = 0x11AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFC4u;
        // 0x11afc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFCCu;
        goto label_11afcc;
    }
    ctx->pc = 0x11AFC4u;
    {
        const bool branch_taken_0x11afc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFC4u;
        // 0x11afc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afc4) {
            ctx->pc = 0x11AFF4u;
            goto label_11aff4;
        }
    }
    ctx->pc = 0x11AFCCu;
label_11afcc:
    // 0x11afcc: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x11afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_11afd0:
    // 0x11afd0: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x11afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_11afd4:
    // 0x11afd4: 0xc66c0058  lwc1        $f12, 0x58($s3)
    ctx->pc = 0x11afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11afd8:
    // 0x11afd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11afdc:
    // 0x11afdc: 0xc66d005c  lwc1        $f13, 0x5C($s3)
    ctx->pc = 0x11afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11afe0:
    // 0x11afe0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x11afe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_11afe4:
    // 0x11afe4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x11afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_11afe8:
    // 0x11afe8: 0x60f809  jalr        $v1
label_11afec:
    if (ctx->pc == 0x11AFECu) {
        ctx->pc = 0x11AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFE8u;
        // 0x11afec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFF0u;
        goto label_11aff0;
    }
    ctx->pc = 0x11AFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AFF0u);
        ctx->pc = 0x11AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFE8u;
        // 0x11afec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AFE8u, 0x11AFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AFF0u;
label_11aff0:
    // 0x11aff0: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x11aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_11aff4:
    // 0x11aff4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11aff8:
    // 0x11aff8: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x11aff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
label_11affc:
    // 0x11affc: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_11b000:
    // 0x11b000: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x11b000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_11b004:
    // 0x11b004: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11b008:
    // 0x11b008: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x11b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
label_11b00c:
    // 0x11b00c: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
label_11b010:
    if (ctx->pc == 0x11B010u) {
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B00Cu;
        // 0x11b010: 0x92620094  lbu         $v0, 0x94($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B014u;
        goto label_11b014;
    }
    ctx->pc = 0x11B00Cu;
    {
        const bool branch_taken_0x11b00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b00c) {
            ctx->pc = 0x11B010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B00Cu;
            // 0x11b010: 0x92620094  lbu         $v0, 0x94($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B0ACu;
            goto label_11b0ac;
        }
    }
    ctx->pc = 0x11B014u;
label_11b014:
    // 0x11b014: 0xc043c8e  jal         func_10F238
label_11b018:
    if (ctx->pc == 0x11B018u) {
        ctx->pc = 0x11B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B014u;
        // 0x11b018: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B01Cu;
        goto label_11b01c;
    }
    ctx->pc = 0x11B014u;
    SET_GPR_U32(ctx, 31, 0x11B01Cu);
    ctx->pc = 0x11B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B014u;
    // 0x11b018: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F238u, 0x11B014u, 0x11B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B01Cu;
label_11b01c:
    // 0x11b01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b020:
    // 0x11b020: 0x0  nop
    ctx->pc = 0x11b020u;
    // NOP
label_11b024:
    // 0x11b024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11b024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11b028:
    // 0x11b028: 0xc6610068  lwc1        $f1, 0x68($s3)
    ctx->pc = 0x11b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b02c:
    // 0x11b02c: 0xc663006c  lwc1        $f3, 0x6C($s3)
    ctx->pc = 0x11b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11b030:
    // 0x11b030: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11b030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11b034:
    // 0x11b034: 0x8c82aa84  lw          $v0, -0x557C($a0)
    ctx->pc = 0x11b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945412)));
label_11b038:
    // 0x11b038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11b038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b03c:
    // 0x11b03c: 0xc6620070  lwc1        $f2, 0x70($s3)
    ctx->pc = 0x11b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11b040:
    // 0x11b040: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11b044:
    // 0x11b044: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x11b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_11b048:
    // 0x11b048: 0xc4417a5c  lwc1        $f1, 0x7A5C($v0)
    ctx->pc = 0x11b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b04c:
    // 0x11b04c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11b04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_11b050:
    // 0x11b050: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11b050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_11b054:
    // 0x11b054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11b054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b058:
    // 0x11b058: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11b05c:
    // 0x11b05c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11b05cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_11b060:
    // 0x11b060: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
label_11b064:
    if (ctx->pc == 0x11B064u) {
        ctx->pc = 0x11B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B060u;
        // 0x11b064: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B068u;
        goto label_11b068;
    }
    ctx->pc = 0x11B060u;
    {
        const bool branch_taken_0x11b060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B060u;
        // 0x11b064: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b060) {
            ctx->pc = 0x11B0A8u;
            goto label_11b0a8;
        }
    }
    ctx->pc = 0x11B068u;
label_11b068:
    // 0x11b068: 0xae650064  sw          $a1, 0x64($s3)
    ctx->pc = 0x11b068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 5));
label_11b06c:
    // 0x11b06c: 0x8c44bce4  lw          $a0, -0x431C($v0)
    ctx->pc = 0x11b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_11b070:
    // 0x11b070: 0x8e72003c  lw          $s2, 0x3C($s3)
    ctx->pc = 0x11b070u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_11b074:
    // 0x11b074: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11b078:
    // 0x11b078: 0x84700058  lh          $s0, 0x58($v1)
    ctx->pc = 0x11b078u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_11b07c:
    // 0x11b07c: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x11b07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_11b080:
    // 0x11b080: 0x84660028  lh          $a2, 0x28($v1)
    ctx->pc = 0x11b080u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11b084:
    // 0x11b084: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x11b084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11b088:
    // 0x11b088: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11b08c:
    // 0x11b08c: 0x40f809  jalr        $v0
label_11b090:
    if (ctx->pc == 0x11B090u) {
        ctx->pc = 0x11B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B08Cu;
        // 0x11b090: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B094u;
        goto label_11b094;
    }
    ctx->pc = 0x11B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B094u);
        ctx->pc = 0x11B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B08Cu;
        // 0x11b090: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B08Cu, 0x11B094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B094u;
label_11b094:
    // 0x11b094: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11b098:
    // 0x11b098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b09c:
    // 0x11b09c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11b0a0:
    // 0x11b0a0: 0x60f809  jalr        $v1
label_11b0a4:
    if (ctx->pc == 0x11B0A4u) {
        ctx->pc = 0x11B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0A0u;
        // 0x11b0a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B0A8u;
        goto label_11b0a8;
    }
    ctx->pc = 0x11B0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B0A8u);
        ctx->pc = 0x11B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0A0u;
        // 0x11b0a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0A0u, 0x11B0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B0A8u;
label_11b0a8:
    // 0x11b0a8: 0x92620094  lbu         $v0, 0x94($s3)
    ctx->pc = 0x11b0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
label_11b0ac:
    // 0x11b0ac: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x11b0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_11b0b0:
    // 0x11b0b0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x11b0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_11b0b4:
    // 0x11b0b4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x11b0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_11b0b8:
    // 0x11b0b8: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x11b0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_11b0bc:
    // 0x11b0bc: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x11b0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_11b0c0:
    // 0x11b0c0: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x11b0c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_11b0c4:
    // 0x11b0c4: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x11b0c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_11b0c8:
    // 0x11b0c8: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x11b0c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_11b0cc:
    // 0x11b0cc: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x11b0ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_11b0d0:
    // 0x11b0d0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x11b0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_11b0d4:
    // 0x11b0d4: 0xc7bd01d8  lwc1        $f29, 0x1D8($sp)
    ctx->pc = 0x11b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_11b0d8:
    // 0x11b0d8: 0xc7bc01d0  lwc1        $f28, 0x1D0($sp)
    ctx->pc = 0x11b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_11b0dc:
    // 0x11b0dc: 0xc7bb01c8  lwc1        $f27, 0x1C8($sp)
    ctx->pc = 0x11b0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_11b0e0:
    // 0x11b0e0: 0xc7ba01c0  lwc1        $f26, 0x1C0($sp)
    ctx->pc = 0x11b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_11b0e4:
    // 0x11b0e4: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x11b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_11b0e8:
    // 0x11b0e8: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x11b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_11b0ec:
    // 0x11b0ec: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x11b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11b0f0:
    // 0x11b0f0: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x11b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11b0f4:
    // 0x11b0f4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x11b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11b0f8:
    // 0x11b0f8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x11b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11b0fc:
    // 0x11b0fc: 0x3e00008  jr          $ra
label_11b100:
    if (ctx->pc == 0x11B100u) {
        ctx->pc = 0x11B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0FCu;
        // 0x11b100: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B104u;
        goto label_11b104;
    }
    ctx->pc = 0x11B0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0FCu;
        // 0x11b100: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B104u;
label_11b104:
    // 0x11b104: 0x0  nop
    ctx->pc = 0x11b104u;
    // NOP
    ctx->pc = 0x11b108u;
}
