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

// Function: sub_0024A230
// Address: 0x24a230 - 0x24af78
void sub_0024A230_0x24a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A230_0x24a230");
#endif

    switch (ctx->pc) {
        case 0x24a230u: goto label_24a230;
        case 0x24a234u: goto label_24a234;
        case 0x24a238u: goto label_24a238;
        case 0x24a23cu: goto label_24a23c;
        case 0x24a240u: goto label_24a240;
        case 0x24a244u: goto label_24a244;
        case 0x24a248u: goto label_24a248;
        case 0x24a24cu: goto label_24a24c;
        case 0x24a250u: goto label_24a250;
        case 0x24a254u: goto label_24a254;
        case 0x24a258u: goto label_24a258;
        case 0x24a25cu: goto label_24a25c;
        case 0x24a260u: goto label_24a260;
        case 0x24a264u: goto label_24a264;
        case 0x24a268u: goto label_24a268;
        case 0x24a26cu: goto label_24a26c;
        case 0x24a270u: goto label_24a270;
        case 0x24a274u: goto label_24a274;
        case 0x24a278u: goto label_24a278;
        case 0x24a27cu: goto label_24a27c;
        case 0x24a280u: goto label_24a280;
        case 0x24a284u: goto label_24a284;
        case 0x24a288u: goto label_24a288;
        case 0x24a28cu: goto label_24a28c;
        case 0x24a290u: goto label_24a290;
        case 0x24a294u: goto label_24a294;
        case 0x24a298u: goto label_24a298;
        case 0x24a29cu: goto label_24a29c;
        case 0x24a2a0u: goto label_24a2a0;
        case 0x24a2a4u: goto label_24a2a4;
        case 0x24a2a8u: goto label_24a2a8;
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a2b0u: goto label_24a2b0;
        case 0x24a2b4u: goto label_24a2b4;
        case 0x24a2b8u: goto label_24a2b8;
        case 0x24a2bcu: goto label_24a2bc;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a2c4u: goto label_24a2c4;
        case 0x24a2c8u: goto label_24a2c8;
        case 0x24a2ccu: goto label_24a2cc;
        case 0x24a2d0u: goto label_24a2d0;
        case 0x24a2d4u: goto label_24a2d4;
        case 0x24a2d8u: goto label_24a2d8;
        case 0x24a2dcu: goto label_24a2dc;
        case 0x24a2e0u: goto label_24a2e0;
        case 0x24a2e4u: goto label_24a2e4;
        case 0x24a2e8u: goto label_24a2e8;
        case 0x24a2ecu: goto label_24a2ec;
        case 0x24a2f0u: goto label_24a2f0;
        case 0x24a2f4u: goto label_24a2f4;
        case 0x24a2f8u: goto label_24a2f8;
        case 0x24a2fcu: goto label_24a2fc;
        case 0x24a300u: goto label_24a300;
        case 0x24a304u: goto label_24a304;
        case 0x24a308u: goto label_24a308;
        case 0x24a30cu: goto label_24a30c;
        case 0x24a310u: goto label_24a310;
        case 0x24a314u: goto label_24a314;
        case 0x24a318u: goto label_24a318;
        case 0x24a31cu: goto label_24a31c;
        case 0x24a320u: goto label_24a320;
        case 0x24a324u: goto label_24a324;
        case 0x24a328u: goto label_24a328;
        case 0x24a32cu: goto label_24a32c;
        case 0x24a330u: goto label_24a330;
        case 0x24a334u: goto label_24a334;
        case 0x24a338u: goto label_24a338;
        case 0x24a33cu: goto label_24a33c;
        case 0x24a340u: goto label_24a340;
        case 0x24a344u: goto label_24a344;
        case 0x24a348u: goto label_24a348;
        case 0x24a34cu: goto label_24a34c;
        case 0x24a350u: goto label_24a350;
        case 0x24a354u: goto label_24a354;
        case 0x24a358u: goto label_24a358;
        case 0x24a35cu: goto label_24a35c;
        case 0x24a360u: goto label_24a360;
        case 0x24a364u: goto label_24a364;
        case 0x24a368u: goto label_24a368;
        case 0x24a36cu: goto label_24a36c;
        case 0x24a370u: goto label_24a370;
        case 0x24a374u: goto label_24a374;
        case 0x24a378u: goto label_24a378;
        case 0x24a37cu: goto label_24a37c;
        case 0x24a380u: goto label_24a380;
        case 0x24a384u: goto label_24a384;
        case 0x24a388u: goto label_24a388;
        case 0x24a38cu: goto label_24a38c;
        case 0x24a390u: goto label_24a390;
        case 0x24a394u: goto label_24a394;
        case 0x24a398u: goto label_24a398;
        case 0x24a39cu: goto label_24a39c;
        case 0x24a3a0u: goto label_24a3a0;
        case 0x24a3a4u: goto label_24a3a4;
        case 0x24a3a8u: goto label_24a3a8;
        case 0x24a3acu: goto label_24a3ac;
        case 0x24a3b0u: goto label_24a3b0;
        case 0x24a3b4u: goto label_24a3b4;
        case 0x24a3b8u: goto label_24a3b8;
        case 0x24a3bcu: goto label_24a3bc;
        case 0x24a3c0u: goto label_24a3c0;
        case 0x24a3c4u: goto label_24a3c4;
        case 0x24a3c8u: goto label_24a3c8;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a3d0u: goto label_24a3d0;
        case 0x24a3d4u: goto label_24a3d4;
        case 0x24a3d8u: goto label_24a3d8;
        case 0x24a3dcu: goto label_24a3dc;
        case 0x24a3e0u: goto label_24a3e0;
        case 0x24a3e4u: goto label_24a3e4;
        case 0x24a3e8u: goto label_24a3e8;
        case 0x24a3ecu: goto label_24a3ec;
        case 0x24a3f0u: goto label_24a3f0;
        case 0x24a3f4u: goto label_24a3f4;
        case 0x24a3f8u: goto label_24a3f8;
        case 0x24a3fcu: goto label_24a3fc;
        case 0x24a400u: goto label_24a400;
        case 0x24a404u: goto label_24a404;
        case 0x24a408u: goto label_24a408;
        case 0x24a40cu: goto label_24a40c;
        case 0x24a410u: goto label_24a410;
        case 0x24a414u: goto label_24a414;
        case 0x24a418u: goto label_24a418;
        case 0x24a41cu: goto label_24a41c;
        case 0x24a420u: goto label_24a420;
        case 0x24a424u: goto label_24a424;
        case 0x24a428u: goto label_24a428;
        case 0x24a42cu: goto label_24a42c;
        case 0x24a430u: goto label_24a430;
        case 0x24a434u: goto label_24a434;
        case 0x24a438u: goto label_24a438;
        case 0x24a43cu: goto label_24a43c;
        case 0x24a440u: goto label_24a440;
        case 0x24a444u: goto label_24a444;
        case 0x24a448u: goto label_24a448;
        case 0x24a44cu: goto label_24a44c;
        case 0x24a450u: goto label_24a450;
        case 0x24a454u: goto label_24a454;
        case 0x24a458u: goto label_24a458;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a460u: goto label_24a460;
        case 0x24a464u: goto label_24a464;
        case 0x24a468u: goto label_24a468;
        case 0x24a46cu: goto label_24a46c;
        case 0x24a470u: goto label_24a470;
        case 0x24a474u: goto label_24a474;
        case 0x24a478u: goto label_24a478;
        case 0x24a47cu: goto label_24a47c;
        case 0x24a480u: goto label_24a480;
        case 0x24a484u: goto label_24a484;
        case 0x24a488u: goto label_24a488;
        case 0x24a48cu: goto label_24a48c;
        case 0x24a490u: goto label_24a490;
        case 0x24a494u: goto label_24a494;
        case 0x24a498u: goto label_24a498;
        case 0x24a49cu: goto label_24a49c;
        case 0x24a4a0u: goto label_24a4a0;
        case 0x24a4a4u: goto label_24a4a4;
        case 0x24a4a8u: goto label_24a4a8;
        case 0x24a4acu: goto label_24a4ac;
        case 0x24a4b0u: goto label_24a4b0;
        case 0x24a4b4u: goto label_24a4b4;
        case 0x24a4b8u: goto label_24a4b8;
        case 0x24a4bcu: goto label_24a4bc;
        case 0x24a4c0u: goto label_24a4c0;
        case 0x24a4c4u: goto label_24a4c4;
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a4ccu: goto label_24a4cc;
        case 0x24a4d0u: goto label_24a4d0;
        case 0x24a4d4u: goto label_24a4d4;
        case 0x24a4d8u: goto label_24a4d8;
        case 0x24a4dcu: goto label_24a4dc;
        case 0x24a4e0u: goto label_24a4e0;
        case 0x24a4e4u: goto label_24a4e4;
        case 0x24a4e8u: goto label_24a4e8;
        case 0x24a4ecu: goto label_24a4ec;
        case 0x24a4f0u: goto label_24a4f0;
        case 0x24a4f4u: goto label_24a4f4;
        case 0x24a4f8u: goto label_24a4f8;
        case 0x24a4fcu: goto label_24a4fc;
        case 0x24a500u: goto label_24a500;
        case 0x24a504u: goto label_24a504;
        case 0x24a508u: goto label_24a508;
        case 0x24a50cu: goto label_24a50c;
        case 0x24a510u: goto label_24a510;
        case 0x24a514u: goto label_24a514;
        case 0x24a518u: goto label_24a518;
        case 0x24a51cu: goto label_24a51c;
        case 0x24a520u: goto label_24a520;
        case 0x24a524u: goto label_24a524;
        case 0x24a528u: goto label_24a528;
        case 0x24a52cu: goto label_24a52c;
        case 0x24a530u: goto label_24a530;
        case 0x24a534u: goto label_24a534;
        case 0x24a538u: goto label_24a538;
        case 0x24a53cu: goto label_24a53c;
        case 0x24a540u: goto label_24a540;
        case 0x24a544u: goto label_24a544;
        case 0x24a548u: goto label_24a548;
        case 0x24a54cu: goto label_24a54c;
        case 0x24a550u: goto label_24a550;
        case 0x24a554u: goto label_24a554;
        case 0x24a558u: goto label_24a558;
        case 0x24a55cu: goto label_24a55c;
        case 0x24a560u: goto label_24a560;
        case 0x24a564u: goto label_24a564;
        case 0x24a568u: goto label_24a568;
        case 0x24a56cu: goto label_24a56c;
        case 0x24a570u: goto label_24a570;
        case 0x24a574u: goto label_24a574;
        case 0x24a578u: goto label_24a578;
        case 0x24a57cu: goto label_24a57c;
        case 0x24a580u: goto label_24a580;
        case 0x24a584u: goto label_24a584;
        case 0x24a588u: goto label_24a588;
        case 0x24a58cu: goto label_24a58c;
        case 0x24a590u: goto label_24a590;
        case 0x24a594u: goto label_24a594;
        case 0x24a598u: goto label_24a598;
        case 0x24a59cu: goto label_24a59c;
        case 0x24a5a0u: goto label_24a5a0;
        case 0x24a5a4u: goto label_24a5a4;
        case 0x24a5a8u: goto label_24a5a8;
        case 0x24a5acu: goto label_24a5ac;
        case 0x24a5b0u: goto label_24a5b0;
        case 0x24a5b4u: goto label_24a5b4;
        case 0x24a5b8u: goto label_24a5b8;
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a5c0u: goto label_24a5c0;
        case 0x24a5c4u: goto label_24a5c4;
        case 0x24a5c8u: goto label_24a5c8;
        case 0x24a5ccu: goto label_24a5cc;
        case 0x24a5d0u: goto label_24a5d0;
        case 0x24a5d4u: goto label_24a5d4;
        case 0x24a5d8u: goto label_24a5d8;
        case 0x24a5dcu: goto label_24a5dc;
        case 0x24a5e0u: goto label_24a5e0;
        case 0x24a5e4u: goto label_24a5e4;
        case 0x24a5e8u: goto label_24a5e8;
        case 0x24a5ecu: goto label_24a5ec;
        case 0x24a5f0u: goto label_24a5f0;
        case 0x24a5f4u: goto label_24a5f4;
        case 0x24a5f8u: goto label_24a5f8;
        case 0x24a5fcu: goto label_24a5fc;
        case 0x24a600u: goto label_24a600;
        case 0x24a604u: goto label_24a604;
        case 0x24a608u: goto label_24a608;
        case 0x24a60cu: goto label_24a60c;
        case 0x24a610u: goto label_24a610;
        case 0x24a614u: goto label_24a614;
        case 0x24a618u: goto label_24a618;
        case 0x24a61cu: goto label_24a61c;
        case 0x24a620u: goto label_24a620;
        case 0x24a624u: goto label_24a624;
        case 0x24a628u: goto label_24a628;
        case 0x24a62cu: goto label_24a62c;
        case 0x24a630u: goto label_24a630;
        case 0x24a634u: goto label_24a634;
        case 0x24a638u: goto label_24a638;
        case 0x24a63cu: goto label_24a63c;
        case 0x24a640u: goto label_24a640;
        case 0x24a644u: goto label_24a644;
        case 0x24a648u: goto label_24a648;
        case 0x24a64cu: goto label_24a64c;
        case 0x24a650u: goto label_24a650;
        case 0x24a654u: goto label_24a654;
        case 0x24a658u: goto label_24a658;
        case 0x24a65cu: goto label_24a65c;
        case 0x24a660u: goto label_24a660;
        case 0x24a664u: goto label_24a664;
        case 0x24a668u: goto label_24a668;
        case 0x24a66cu: goto label_24a66c;
        case 0x24a670u: goto label_24a670;
        case 0x24a674u: goto label_24a674;
        case 0x24a678u: goto label_24a678;
        case 0x24a67cu: goto label_24a67c;
        case 0x24a680u: goto label_24a680;
        case 0x24a684u: goto label_24a684;
        case 0x24a688u: goto label_24a688;
        case 0x24a68cu: goto label_24a68c;
        case 0x24a690u: goto label_24a690;
        case 0x24a694u: goto label_24a694;
        case 0x24a698u: goto label_24a698;
        case 0x24a69cu: goto label_24a69c;
        case 0x24a6a0u: goto label_24a6a0;
        case 0x24a6a4u: goto label_24a6a4;
        case 0x24a6a8u: goto label_24a6a8;
        case 0x24a6acu: goto label_24a6ac;
        case 0x24a6b0u: goto label_24a6b0;
        case 0x24a6b4u: goto label_24a6b4;
        case 0x24a6b8u: goto label_24a6b8;
        case 0x24a6bcu: goto label_24a6bc;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6c4u: goto label_24a6c4;
        case 0x24a6c8u: goto label_24a6c8;
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6d0u: goto label_24a6d0;
        case 0x24a6d4u: goto label_24a6d4;
        case 0x24a6d8u: goto label_24a6d8;
        case 0x24a6dcu: goto label_24a6dc;
        case 0x24a6e0u: goto label_24a6e0;
        case 0x24a6e4u: goto label_24a6e4;
        case 0x24a6e8u: goto label_24a6e8;
        case 0x24a6ecu: goto label_24a6ec;
        case 0x24a6f0u: goto label_24a6f0;
        case 0x24a6f4u: goto label_24a6f4;
        case 0x24a6f8u: goto label_24a6f8;
        case 0x24a6fcu: goto label_24a6fc;
        case 0x24a700u: goto label_24a700;
        case 0x24a704u: goto label_24a704;
        case 0x24a708u: goto label_24a708;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a710u: goto label_24a710;
        case 0x24a714u: goto label_24a714;
        case 0x24a718u: goto label_24a718;
        case 0x24a71cu: goto label_24a71c;
        case 0x24a720u: goto label_24a720;
        case 0x24a724u: goto label_24a724;
        case 0x24a728u: goto label_24a728;
        case 0x24a72cu: goto label_24a72c;
        case 0x24a730u: goto label_24a730;
        case 0x24a734u: goto label_24a734;
        case 0x24a738u: goto label_24a738;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a740u: goto label_24a740;
        case 0x24a744u: goto label_24a744;
        case 0x24a748u: goto label_24a748;
        case 0x24a74cu: goto label_24a74c;
        case 0x24a750u: goto label_24a750;
        case 0x24a754u: goto label_24a754;
        case 0x24a758u: goto label_24a758;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a760u: goto label_24a760;
        case 0x24a764u: goto label_24a764;
        case 0x24a768u: goto label_24a768;
        case 0x24a76cu: goto label_24a76c;
        case 0x24a770u: goto label_24a770;
        case 0x24a774u: goto label_24a774;
        case 0x24a778u: goto label_24a778;
        case 0x24a77cu: goto label_24a77c;
        case 0x24a780u: goto label_24a780;
        case 0x24a784u: goto label_24a784;
        case 0x24a788u: goto label_24a788;
        case 0x24a78cu: goto label_24a78c;
        case 0x24a790u: goto label_24a790;
        case 0x24a794u: goto label_24a794;
        case 0x24a798u: goto label_24a798;
        case 0x24a79cu: goto label_24a79c;
        case 0x24a7a0u: goto label_24a7a0;
        case 0x24a7a4u: goto label_24a7a4;
        case 0x24a7a8u: goto label_24a7a8;
        case 0x24a7acu: goto label_24a7ac;
        case 0x24a7b0u: goto label_24a7b0;
        case 0x24a7b4u: goto label_24a7b4;
        case 0x24a7b8u: goto label_24a7b8;
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7c0u: goto label_24a7c0;
        case 0x24a7c4u: goto label_24a7c4;
        case 0x24a7c8u: goto label_24a7c8;
        case 0x24a7ccu: goto label_24a7cc;
        case 0x24a7d0u: goto label_24a7d0;
        case 0x24a7d4u: goto label_24a7d4;
        case 0x24a7d8u: goto label_24a7d8;
        case 0x24a7dcu: goto label_24a7dc;
        case 0x24a7e0u: goto label_24a7e0;
        case 0x24a7e4u: goto label_24a7e4;
        case 0x24a7e8u: goto label_24a7e8;
        case 0x24a7ecu: goto label_24a7ec;
        case 0x24a7f0u: goto label_24a7f0;
        case 0x24a7f4u: goto label_24a7f4;
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a7fcu: goto label_24a7fc;
        case 0x24a800u: goto label_24a800;
        case 0x24a804u: goto label_24a804;
        case 0x24a808u: goto label_24a808;
        case 0x24a80cu: goto label_24a80c;
        case 0x24a810u: goto label_24a810;
        case 0x24a814u: goto label_24a814;
        case 0x24a818u: goto label_24a818;
        case 0x24a81cu: goto label_24a81c;
        case 0x24a820u: goto label_24a820;
        case 0x24a824u: goto label_24a824;
        case 0x24a828u: goto label_24a828;
        case 0x24a82cu: goto label_24a82c;
        case 0x24a830u: goto label_24a830;
        case 0x24a834u: goto label_24a834;
        case 0x24a838u: goto label_24a838;
        case 0x24a83cu: goto label_24a83c;
        case 0x24a840u: goto label_24a840;
        case 0x24a844u: goto label_24a844;
        case 0x24a848u: goto label_24a848;
        case 0x24a84cu: goto label_24a84c;
        case 0x24a850u: goto label_24a850;
        case 0x24a854u: goto label_24a854;
        case 0x24a858u: goto label_24a858;
        case 0x24a85cu: goto label_24a85c;
        case 0x24a860u: goto label_24a860;
        case 0x24a864u: goto label_24a864;
        case 0x24a868u: goto label_24a868;
        case 0x24a86cu: goto label_24a86c;
        case 0x24a870u: goto label_24a870;
        case 0x24a874u: goto label_24a874;
        case 0x24a878u: goto label_24a878;
        case 0x24a87cu: goto label_24a87c;
        case 0x24a880u: goto label_24a880;
        case 0x24a884u: goto label_24a884;
        case 0x24a888u: goto label_24a888;
        case 0x24a88cu: goto label_24a88c;
        case 0x24a890u: goto label_24a890;
        case 0x24a894u: goto label_24a894;
        case 0x24a898u: goto label_24a898;
        case 0x24a89cu: goto label_24a89c;
        case 0x24a8a0u: goto label_24a8a0;
        case 0x24a8a4u: goto label_24a8a4;
        case 0x24a8a8u: goto label_24a8a8;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8b0u: goto label_24a8b0;
        case 0x24a8b4u: goto label_24a8b4;
        case 0x24a8b8u: goto label_24a8b8;
        case 0x24a8bcu: goto label_24a8bc;
        case 0x24a8c0u: goto label_24a8c0;
        case 0x24a8c4u: goto label_24a8c4;
        case 0x24a8c8u: goto label_24a8c8;
        case 0x24a8ccu: goto label_24a8cc;
        case 0x24a8d0u: goto label_24a8d0;
        case 0x24a8d4u: goto label_24a8d4;
        case 0x24a8d8u: goto label_24a8d8;
        case 0x24a8dcu: goto label_24a8dc;
        case 0x24a8e0u: goto label_24a8e0;
        case 0x24a8e4u: goto label_24a8e4;
        case 0x24a8e8u: goto label_24a8e8;
        case 0x24a8ecu: goto label_24a8ec;
        case 0x24a8f0u: goto label_24a8f0;
        case 0x24a8f4u: goto label_24a8f4;
        case 0x24a8f8u: goto label_24a8f8;
        case 0x24a8fcu: goto label_24a8fc;
        case 0x24a900u: goto label_24a900;
        case 0x24a904u: goto label_24a904;
        case 0x24a908u: goto label_24a908;
        case 0x24a90cu: goto label_24a90c;
        case 0x24a910u: goto label_24a910;
        case 0x24a914u: goto label_24a914;
        case 0x24a918u: goto label_24a918;
        case 0x24a91cu: goto label_24a91c;
        case 0x24a920u: goto label_24a920;
        case 0x24a924u: goto label_24a924;
        case 0x24a928u: goto label_24a928;
        case 0x24a92cu: goto label_24a92c;
        case 0x24a930u: goto label_24a930;
        case 0x24a934u: goto label_24a934;
        case 0x24a938u: goto label_24a938;
        case 0x24a93cu: goto label_24a93c;
        case 0x24a940u: goto label_24a940;
        case 0x24a944u: goto label_24a944;
        case 0x24a948u: goto label_24a948;
        case 0x24a94cu: goto label_24a94c;
        case 0x24a950u: goto label_24a950;
        case 0x24a954u: goto label_24a954;
        case 0x24a958u: goto label_24a958;
        case 0x24a95cu: goto label_24a95c;
        case 0x24a960u: goto label_24a960;
        case 0x24a964u: goto label_24a964;
        case 0x24a968u: goto label_24a968;
        case 0x24a96cu: goto label_24a96c;
        case 0x24a970u: goto label_24a970;
        case 0x24a974u: goto label_24a974;
        case 0x24a978u: goto label_24a978;
        case 0x24a97cu: goto label_24a97c;
        case 0x24a980u: goto label_24a980;
        case 0x24a984u: goto label_24a984;
        case 0x24a988u: goto label_24a988;
        case 0x24a98cu: goto label_24a98c;
        case 0x24a990u: goto label_24a990;
        case 0x24a994u: goto label_24a994;
        case 0x24a998u: goto label_24a998;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a0u: goto label_24a9a0;
        case 0x24a9a4u: goto label_24a9a4;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9acu: goto label_24a9ac;
        case 0x24a9b0u: goto label_24a9b0;
        case 0x24a9b4u: goto label_24a9b4;
        case 0x24a9b8u: goto label_24a9b8;
        case 0x24a9bcu: goto label_24a9bc;
        case 0x24a9c0u: goto label_24a9c0;
        case 0x24a9c4u: goto label_24a9c4;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9ccu: goto label_24a9cc;
        case 0x24a9d0u: goto label_24a9d0;
        case 0x24a9d4u: goto label_24a9d4;
        case 0x24a9d8u: goto label_24a9d8;
        case 0x24a9dcu: goto label_24a9dc;
        case 0x24a9e0u: goto label_24a9e0;
        case 0x24a9e4u: goto label_24a9e4;
        case 0x24a9e8u: goto label_24a9e8;
        case 0x24a9ecu: goto label_24a9ec;
        case 0x24a9f0u: goto label_24a9f0;
        case 0x24a9f4u: goto label_24a9f4;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24a9fcu: goto label_24a9fc;
        case 0x24aa00u: goto label_24aa00;
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa0cu: goto label_24aa0c;
        case 0x24aa10u: goto label_24aa10;
        case 0x24aa14u: goto label_24aa14;
        case 0x24aa18u: goto label_24aa18;
        case 0x24aa1cu: goto label_24aa1c;
        case 0x24aa20u: goto label_24aa20;
        case 0x24aa24u: goto label_24aa24;
        case 0x24aa28u: goto label_24aa28;
        case 0x24aa2cu: goto label_24aa2c;
        case 0x24aa30u: goto label_24aa30;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aa38u: goto label_24aa38;
        case 0x24aa3cu: goto label_24aa3c;
        case 0x24aa40u: goto label_24aa40;
        case 0x24aa44u: goto label_24aa44;
        case 0x24aa48u: goto label_24aa48;
        case 0x24aa4cu: goto label_24aa4c;
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa54u: goto label_24aa54;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa5cu: goto label_24aa5c;
        case 0x24aa60u: goto label_24aa60;
        case 0x24aa64u: goto label_24aa64;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa6cu: goto label_24aa6c;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa74u: goto label_24aa74;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa80u: goto label_24aa80;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aa98u: goto label_24aa98;
        case 0x24aa9cu: goto label_24aa9c;
        case 0x24aaa0u: goto label_24aaa0;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aaa8u: goto label_24aaa8;
        case 0x24aaacu: goto label_24aaac;
        case 0x24aab0u: goto label_24aab0;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aabcu: goto label_24aabc;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aac4u: goto label_24aac4;
        case 0x24aac8u: goto label_24aac8;
        case 0x24aaccu: goto label_24aacc;
        case 0x24aad0u: goto label_24aad0;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aad8u: goto label_24aad8;
        case 0x24aadcu: goto label_24aadc;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aae4u: goto label_24aae4;
        case 0x24aae8u: goto label_24aae8;
        case 0x24aaecu: goto label_24aaec;
        case 0x24aaf0u: goto label_24aaf0;
        case 0x24aaf4u: goto label_24aaf4;
        case 0x24aaf8u: goto label_24aaf8;
        case 0x24aafcu: goto label_24aafc;
        case 0x24ab00u: goto label_24ab00;
        case 0x24ab04u: goto label_24ab04;
        case 0x24ab08u: goto label_24ab08;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab10u: goto label_24ab10;
        case 0x24ab14u: goto label_24ab14;
        case 0x24ab18u: goto label_24ab18;
        case 0x24ab1cu: goto label_24ab1c;
        case 0x24ab20u: goto label_24ab20;
        case 0x24ab24u: goto label_24ab24;
        case 0x24ab28u: goto label_24ab28;
        case 0x24ab2cu: goto label_24ab2c;
        case 0x24ab30u: goto label_24ab30;
        case 0x24ab34u: goto label_24ab34;
        case 0x24ab38u: goto label_24ab38;
        case 0x24ab3cu: goto label_24ab3c;
        case 0x24ab40u: goto label_24ab40;
        case 0x24ab44u: goto label_24ab44;
        case 0x24ab48u: goto label_24ab48;
        case 0x24ab4cu: goto label_24ab4c;
        case 0x24ab50u: goto label_24ab50;
        case 0x24ab54u: goto label_24ab54;
        case 0x24ab58u: goto label_24ab58;
        case 0x24ab5cu: goto label_24ab5c;
        case 0x24ab60u: goto label_24ab60;
        case 0x24ab64u: goto label_24ab64;
        case 0x24ab68u: goto label_24ab68;
        case 0x24ab6cu: goto label_24ab6c;
        case 0x24ab70u: goto label_24ab70;
        case 0x24ab74u: goto label_24ab74;
        case 0x24ab78u: goto label_24ab78;
        case 0x24ab7cu: goto label_24ab7c;
        case 0x24ab80u: goto label_24ab80;
        case 0x24ab84u: goto label_24ab84;
        case 0x24ab88u: goto label_24ab88;
        case 0x24ab8cu: goto label_24ab8c;
        case 0x24ab90u: goto label_24ab90;
        case 0x24ab94u: goto label_24ab94;
        case 0x24ab98u: goto label_24ab98;
        case 0x24ab9cu: goto label_24ab9c;
        case 0x24aba0u: goto label_24aba0;
        case 0x24aba4u: goto label_24aba4;
        case 0x24aba8u: goto label_24aba8;
        case 0x24abacu: goto label_24abac;
        case 0x24abb0u: goto label_24abb0;
        case 0x24abb4u: goto label_24abb4;
        case 0x24abb8u: goto label_24abb8;
        case 0x24abbcu: goto label_24abbc;
        case 0x24abc0u: goto label_24abc0;
        case 0x24abc4u: goto label_24abc4;
        case 0x24abc8u: goto label_24abc8;
        case 0x24abccu: goto label_24abcc;
        case 0x24abd0u: goto label_24abd0;
        case 0x24abd4u: goto label_24abd4;
        case 0x24abd8u: goto label_24abd8;
        case 0x24abdcu: goto label_24abdc;
        case 0x24abe0u: goto label_24abe0;
        case 0x24abe4u: goto label_24abe4;
        case 0x24abe8u: goto label_24abe8;
        case 0x24abecu: goto label_24abec;
        case 0x24abf0u: goto label_24abf0;
        case 0x24abf4u: goto label_24abf4;
        case 0x24abf8u: goto label_24abf8;
        case 0x24abfcu: goto label_24abfc;
        case 0x24ac00u: goto label_24ac00;
        case 0x24ac04u: goto label_24ac04;
        case 0x24ac08u: goto label_24ac08;
        case 0x24ac0cu: goto label_24ac0c;
        case 0x24ac10u: goto label_24ac10;
        case 0x24ac14u: goto label_24ac14;
        case 0x24ac18u: goto label_24ac18;
        case 0x24ac1cu: goto label_24ac1c;
        case 0x24ac20u: goto label_24ac20;
        case 0x24ac24u: goto label_24ac24;
        case 0x24ac28u: goto label_24ac28;
        case 0x24ac2cu: goto label_24ac2c;
        case 0x24ac30u: goto label_24ac30;
        case 0x24ac34u: goto label_24ac34;
        case 0x24ac38u: goto label_24ac38;
        case 0x24ac3cu: goto label_24ac3c;
        case 0x24ac40u: goto label_24ac40;
        case 0x24ac44u: goto label_24ac44;
        case 0x24ac48u: goto label_24ac48;
        case 0x24ac4cu: goto label_24ac4c;
        case 0x24ac50u: goto label_24ac50;
        case 0x24ac54u: goto label_24ac54;
        case 0x24ac58u: goto label_24ac58;
        case 0x24ac5cu: goto label_24ac5c;
        case 0x24ac60u: goto label_24ac60;
        case 0x24ac64u: goto label_24ac64;
        case 0x24ac68u: goto label_24ac68;
        case 0x24ac6cu: goto label_24ac6c;
        case 0x24ac70u: goto label_24ac70;
        case 0x24ac74u: goto label_24ac74;
        case 0x24ac78u: goto label_24ac78;
        case 0x24ac7cu: goto label_24ac7c;
        case 0x24ac80u: goto label_24ac80;
        case 0x24ac84u: goto label_24ac84;
        case 0x24ac88u: goto label_24ac88;
        case 0x24ac8cu: goto label_24ac8c;
        case 0x24ac90u: goto label_24ac90;
        case 0x24ac94u: goto label_24ac94;
        case 0x24ac98u: goto label_24ac98;
        case 0x24ac9cu: goto label_24ac9c;
        case 0x24aca0u: goto label_24aca0;
        case 0x24aca4u: goto label_24aca4;
        case 0x24aca8u: goto label_24aca8;
        case 0x24acacu: goto label_24acac;
        case 0x24acb0u: goto label_24acb0;
        case 0x24acb4u: goto label_24acb4;
        case 0x24acb8u: goto label_24acb8;
        case 0x24acbcu: goto label_24acbc;
        case 0x24acc0u: goto label_24acc0;
        case 0x24acc4u: goto label_24acc4;
        case 0x24acc8u: goto label_24acc8;
        case 0x24acccu: goto label_24accc;
        case 0x24acd0u: goto label_24acd0;
        case 0x24acd4u: goto label_24acd4;
        case 0x24acd8u: goto label_24acd8;
        case 0x24acdcu: goto label_24acdc;
        case 0x24ace0u: goto label_24ace0;
        case 0x24ace4u: goto label_24ace4;
        case 0x24ace8u: goto label_24ace8;
        case 0x24acecu: goto label_24acec;
        case 0x24acf0u: goto label_24acf0;
        case 0x24acf4u: goto label_24acf4;
        case 0x24acf8u: goto label_24acf8;
        case 0x24acfcu: goto label_24acfc;
        case 0x24ad00u: goto label_24ad00;
        case 0x24ad04u: goto label_24ad04;
        case 0x24ad08u: goto label_24ad08;
        case 0x24ad0cu: goto label_24ad0c;
        case 0x24ad10u: goto label_24ad10;
        case 0x24ad14u: goto label_24ad14;
        case 0x24ad18u: goto label_24ad18;
        case 0x24ad1cu: goto label_24ad1c;
        case 0x24ad20u: goto label_24ad20;
        case 0x24ad24u: goto label_24ad24;
        case 0x24ad28u: goto label_24ad28;
        case 0x24ad2cu: goto label_24ad2c;
        case 0x24ad30u: goto label_24ad30;
        case 0x24ad34u: goto label_24ad34;
        case 0x24ad38u: goto label_24ad38;
        case 0x24ad3cu: goto label_24ad3c;
        case 0x24ad40u: goto label_24ad40;
        case 0x24ad44u: goto label_24ad44;
        case 0x24ad48u: goto label_24ad48;
        case 0x24ad4cu: goto label_24ad4c;
        case 0x24ad50u: goto label_24ad50;
        case 0x24ad54u: goto label_24ad54;
        case 0x24ad58u: goto label_24ad58;
        case 0x24ad5cu: goto label_24ad5c;
        case 0x24ad60u: goto label_24ad60;
        case 0x24ad64u: goto label_24ad64;
        case 0x24ad68u: goto label_24ad68;
        case 0x24ad6cu: goto label_24ad6c;
        case 0x24ad70u: goto label_24ad70;
        case 0x24ad74u: goto label_24ad74;
        case 0x24ad78u: goto label_24ad78;
        case 0x24ad7cu: goto label_24ad7c;
        case 0x24ad80u: goto label_24ad80;
        case 0x24ad84u: goto label_24ad84;
        case 0x24ad88u: goto label_24ad88;
        case 0x24ad8cu: goto label_24ad8c;
        case 0x24ad90u: goto label_24ad90;
        case 0x24ad94u: goto label_24ad94;
        case 0x24ad98u: goto label_24ad98;
        case 0x24ad9cu: goto label_24ad9c;
        case 0x24ada0u: goto label_24ada0;
        case 0x24ada4u: goto label_24ada4;
        case 0x24ada8u: goto label_24ada8;
        case 0x24adacu: goto label_24adac;
        case 0x24adb0u: goto label_24adb0;
        case 0x24adb4u: goto label_24adb4;
        case 0x24adb8u: goto label_24adb8;
        case 0x24adbcu: goto label_24adbc;
        case 0x24adc0u: goto label_24adc0;
        case 0x24adc4u: goto label_24adc4;
        case 0x24adc8u: goto label_24adc8;
        case 0x24adccu: goto label_24adcc;
        case 0x24add0u: goto label_24add0;
        case 0x24add4u: goto label_24add4;
        case 0x24add8u: goto label_24add8;
        case 0x24addcu: goto label_24addc;
        case 0x24ade0u: goto label_24ade0;
        case 0x24ade4u: goto label_24ade4;
        case 0x24ade8u: goto label_24ade8;
        case 0x24adecu: goto label_24adec;
        case 0x24adf0u: goto label_24adf0;
        case 0x24adf4u: goto label_24adf4;
        case 0x24adf8u: goto label_24adf8;
        case 0x24adfcu: goto label_24adfc;
        case 0x24ae00u: goto label_24ae00;
        case 0x24ae04u: goto label_24ae04;
        case 0x24ae08u: goto label_24ae08;
        case 0x24ae0cu: goto label_24ae0c;
        case 0x24ae10u: goto label_24ae10;
        case 0x24ae14u: goto label_24ae14;
        case 0x24ae18u: goto label_24ae18;
        case 0x24ae1cu: goto label_24ae1c;
        case 0x24ae20u: goto label_24ae20;
        case 0x24ae24u: goto label_24ae24;
        case 0x24ae28u: goto label_24ae28;
        case 0x24ae2cu: goto label_24ae2c;
        case 0x24ae30u: goto label_24ae30;
        case 0x24ae34u: goto label_24ae34;
        case 0x24ae38u: goto label_24ae38;
        case 0x24ae3cu: goto label_24ae3c;
        case 0x24ae40u: goto label_24ae40;
        case 0x24ae44u: goto label_24ae44;
        case 0x24ae48u: goto label_24ae48;
        case 0x24ae4cu: goto label_24ae4c;
        case 0x24ae50u: goto label_24ae50;
        case 0x24ae54u: goto label_24ae54;
        case 0x24ae58u: goto label_24ae58;
        case 0x24ae5cu: goto label_24ae5c;
        case 0x24ae60u: goto label_24ae60;
        case 0x24ae64u: goto label_24ae64;
        case 0x24ae68u: goto label_24ae68;
        case 0x24ae6cu: goto label_24ae6c;
        case 0x24ae70u: goto label_24ae70;
        case 0x24ae74u: goto label_24ae74;
        case 0x24ae78u: goto label_24ae78;
        case 0x24ae7cu: goto label_24ae7c;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae84u: goto label_24ae84;
        case 0x24ae88u: goto label_24ae88;
        case 0x24ae8cu: goto label_24ae8c;
        case 0x24ae90u: goto label_24ae90;
        case 0x24ae94u: goto label_24ae94;
        case 0x24ae98u: goto label_24ae98;
        case 0x24ae9cu: goto label_24ae9c;
        case 0x24aea0u: goto label_24aea0;
        case 0x24aea4u: goto label_24aea4;
        case 0x24aea8u: goto label_24aea8;
        case 0x24aeacu: goto label_24aeac;
        case 0x24aeb0u: goto label_24aeb0;
        case 0x24aeb4u: goto label_24aeb4;
        case 0x24aeb8u: goto label_24aeb8;
        case 0x24aebcu: goto label_24aebc;
        case 0x24aec0u: goto label_24aec0;
        case 0x24aec4u: goto label_24aec4;
        case 0x24aec8u: goto label_24aec8;
        case 0x24aeccu: goto label_24aecc;
        case 0x24aed0u: goto label_24aed0;
        case 0x24aed4u: goto label_24aed4;
        case 0x24aed8u: goto label_24aed8;
        case 0x24aedcu: goto label_24aedc;
        case 0x24aee0u: goto label_24aee0;
        case 0x24aee4u: goto label_24aee4;
        case 0x24aee8u: goto label_24aee8;
        case 0x24aeecu: goto label_24aeec;
        case 0x24aef0u: goto label_24aef0;
        case 0x24aef4u: goto label_24aef4;
        case 0x24aef8u: goto label_24aef8;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af00u: goto label_24af00;
        case 0x24af04u: goto label_24af04;
        case 0x24af08u: goto label_24af08;
        case 0x24af0cu: goto label_24af0c;
        case 0x24af10u: goto label_24af10;
        case 0x24af14u: goto label_24af14;
        case 0x24af18u: goto label_24af18;
        case 0x24af1cu: goto label_24af1c;
        case 0x24af20u: goto label_24af20;
        case 0x24af24u: goto label_24af24;
        case 0x24af28u: goto label_24af28;
        case 0x24af2cu: goto label_24af2c;
        case 0x24af30u: goto label_24af30;
        case 0x24af34u: goto label_24af34;
        case 0x24af38u: goto label_24af38;
        case 0x24af3cu: goto label_24af3c;
        case 0x24af40u: goto label_24af40;
        case 0x24af44u: goto label_24af44;
        case 0x24af48u: goto label_24af48;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af50u: goto label_24af50;
        case 0x24af54u: goto label_24af54;
        case 0x24af58u: goto label_24af58;
        case 0x24af5cu: goto label_24af5c;
        case 0x24af60u: goto label_24af60;
        case 0x24af64u: goto label_24af64;
        case 0x24af68u: goto label_24af68;
        case 0x24af6cu: goto label_24af6c;
        case 0x24af70u: goto label_24af70;
        case 0x24af74u: goto label_24af74;
        default: break;
    }

    ctx->pc = 0x24a230u;

label_24a230:
    // 0x24a230: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x24a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_24a234:
    // 0x24a234: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a238:
    // 0x24a238: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x24a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_24a23c:
    // 0x24a23c: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x24a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_24a240:
    // 0x24a240: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24a240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a244:
    // 0x24a244: 0xafa6019c  sw          $a2, 0x19C($sp)
    ctx->pc = 0x24a244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 6));
label_24a248:
    // 0x24a248: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x24a248u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_24a24c:
    // 0x24a24c: 0xe7bb0288  swc1        $f27, 0x288($sp)
    ctx->pc = 0x24a24cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_24a250:
    // 0x24a250: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x24a250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_24a254:
    // 0x24a254: 0x46006ec6  mov.s       $f27, $f13
    ctx->pc = 0x24a254u;
    ctx->f[27] = FPU_MOV_S(ctx->f[13]);
label_24a258:
    // 0x24a258: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x24a258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_24a25c:
    // 0x24a25c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x24a25cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_24a260:
    // 0x24a260: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x24a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_24a264:
    // 0x24a264: 0x24c50009  addiu       $a1, $a2, 0x9
    ctx->pc = 0x24a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
label_24a268:
    // 0x24a268: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x24a268u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_24a26c:
    // 0x24a26c: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x24a26cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_24a270:
    // 0x24a270: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x24a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_24a274:
    // 0x24a274: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x24a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
label_24a278:
    // 0x24a278: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x24a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
label_24a27c:
    // 0x24a27c: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x24a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
label_24a280:
    // 0x24a280: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x24a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
label_24a284:
    // 0x24a284: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x24a284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
label_24a288:
    // 0x24a288: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x24a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
label_24a28c:
    // 0x24a28c: 0xe7ba0280  swc1        $f26, 0x280($sp)
    ctx->pc = 0x24a28cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_24a290:
    // 0x24a290: 0xe7b90278  swc1        $f25, 0x278($sp)
    ctx->pc = 0x24a290u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_24a294:
    // 0x24a294: 0xe7b80270  swc1        $f24, 0x270($sp)
    ctx->pc = 0x24a294u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_24a298:
    // 0x24a298: 0xc0616ac  jal         func_185AB0
label_24a29c:
    if (ctx->pc == 0x24A29Cu) {
        ctx->pc = 0x24A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A298u;
        // 0x24a29c: 0xe7b70268  swc1        $f23, 0x268($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2A0u;
        goto label_24a2a0;
    }
    ctx->pc = 0x24A298u;
    SET_GPR_U32(ctx, 31, 0x24A2A0u);
    ctx->pc = 0x24A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A298u;
    // 0x24a29c: 0xe7b70268  swc1        $f23, 0x268($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x24A298u, 0x24A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2A0u;
label_24a2a0:
    // 0x24a2a0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x24a2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_24a2a4:
    // 0x24a2a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24a2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_24a2a8:
    // 0x24a2a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24a2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_24a2ac:
    // 0x24a2ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24a2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a2b0:
    // 0x24a2b0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x24a2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_24a2b4:
    // 0x24a2b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x24a2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_24a2b8:
    // 0x24a2b8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24a2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_24a2bc:
    // 0x24a2bc: 0x1220031a  beqz        $s1, . + 4 + (0x31A << 2)
label_24a2c0:
    if (ctx->pc == 0x24A2C0u) {
        ctx->pc = 0x24A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2BCu;
        // 0x24a2c0: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2C4u;
        goto label_24a2c4;
    }
    ctx->pc = 0x24A2BCu;
    {
        const bool branch_taken_0x24a2bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2BCu;
        // 0x24a2c0: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2bc) {
            ctx->pc = 0x24AF28u;
            goto label_24af28;
        }
    }
    ctx->pc = 0x24A2C4u;
label_24a2c4:
    // 0x24a2c4: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x24a2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_24a2c8:
    // 0x24a2c8: 0x50400318  beql        $v0, $zero, . + 4 + (0x318 << 2)
label_24a2cc:
    if (ctx->pc == 0x24A2CCu) {
        ctx->pc = 0x24A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2C8u;
        // 0x24a2cc: 0x7bb10230  lq          $s1, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2D0u;
        goto label_24a2d0;
    }
    ctx->pc = 0x24A2C8u;
    {
        const bool branch_taken_0x24a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2c8) {
            ctx->pc = 0x24A2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2C8u;
            // 0x24a2cc: 0x7bb10230  lq          $s1, 0x230($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF2Cu;
            goto label_24af2c;
        }
    }
    ctx->pc = 0x24A2D0u;
label_24a2d0:
    // 0x24a2d0: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x24a2d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24a2d4:
    // 0x24a2d4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x24a2d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_24a2d8:
    // 0x24a2d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24a2dc:
    if (ctx->pc == 0x24A2DCu) {
        ctx->pc = 0x24A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2D8u;
        // 0x24a2dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2E0u;
        goto label_24a2e0;
    }
    ctx->pc = 0x24A2D8u;
    {
        const bool branch_taken_0x24a2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2D8u;
        // 0x24a2dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2d8) {
            ctx->pc = 0x24A2F4u;
            goto label_24a2f4;
        }
    }
    ctx->pc = 0x24A2E0u;
label_24a2e0:
    // 0x24a2e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24a2e4:
    // 0x24a2e4: 0x24420530  addiu       $v0, $v0, 0x530
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
label_24a2e8:
    // 0x24a2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a2ec:
    // 0x24a2ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a2f0:
    // 0x24a2f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_24a2f4:
    // 0x24a2f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a2f8:
    // 0x24a2f8: 0xc107458  jal         func_41D160
label_24a2fc:
    if (ctx->pc == 0x24A2FCu) {
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A300u;
        goto label_24a300;
    }
    ctx->pc = 0x24A2F8u;
    SET_GPR_U32(ctx, 31, 0x24A300u);
    ctx->pc = 0x24A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2F8u;
    // 0x24a2fc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24A2F8u, 0x24A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A300u;
label_24a300:
    // 0x24a300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24a304:
    if (ctx->pc == 0x24A304u) {
        ctx->pc = 0x24A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A300u;
        // 0x24a304: 0x8fa6019c  lw          $a2, 0x19C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A308u;
        goto label_24a308;
    }
    ctx->pc = 0x24A300u;
    {
        const bool branch_taken_0x24a300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A300u;
        // 0x24a304: 0x8fa6019c  lw          $a2, 0x19C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a300) {
            ctx->pc = 0x24A318u;
            goto label_24a318;
        }
    }
    ctx->pc = 0x24A308u;
label_24a308:
    // 0x24a308: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24a308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24a30c:
    // 0x24a30c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a310:
    // 0x24a310: 0xc09272c  jal         func_249CB0
label_24a314:
    if (ctx->pc == 0x24A314u) {
        ctx->pc = 0x24A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A310u;
        // 0x24a314: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A318u;
        goto label_24a318;
    }
    ctx->pc = 0x24A310u;
    SET_GPR_U32(ctx, 31, 0x24A318u);
    ctx->pc = 0x24A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A310u;
    // 0x24a314: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249CB0u, 0x24A310u, 0x24A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A318u;
label_24a318:
    // 0x24a318: 0xc060b58  jal         func_182D60
label_24a31c:
    if (ctx->pc == 0x24A31Cu) {
        ctx->pc = 0x24A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A318u;
        // 0x24a31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A320u;
        goto label_24a320;
    }
    ctx->pc = 0x24A318u;
    SET_GPR_U32(ctx, 31, 0x24A320u);
    ctx->pc = 0x24A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A318u;
    // 0x24a31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x24A318u, 0x24A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A320u;
label_24a320:
    // 0x24a320: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24a320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_24a324:
    // 0x24a324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a328:
    // 0x24a328: 0xc06078e  jal         func_181E38
label_24a32c:
    if (ctx->pc == 0x24A32Cu) {
        ctx->pc = 0x24A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A328u;
        // 0x24a32c: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A330u;
        goto label_24a330;
    }
    ctx->pc = 0x24A328u;
    SET_GPR_U32(ctx, 31, 0x24A330u);
    ctx->pc = 0x24A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A328u;
    // 0x24a32c: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x24A328u, 0x24A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A330u;
label_24a330:
    // 0x24a330: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x24a330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_24a334:
    // 0x24a334: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x24a334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_24a338:
    // 0x24a338: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x24a338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_24a33c:
    // 0x24a33c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x24a33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_24a340:
    // 0x24a340: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x24a340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a344:
    // 0x24a344: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x24a344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a348:
    // 0x24a348: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x24a348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a34c:
    // 0x24a34c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x24a34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a350:
    // 0x24a350: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24a350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_24a354:
    // 0x24a354: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24a354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_24a358:
    // 0x24a358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a35c:
    // 0x24a35c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a360:
    // 0x24a360: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x24a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a364:
    // 0x24a364: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a368:
    // 0x24a368: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x24a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a36c:
    // 0x24a36c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24a36cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_24a370:
    // 0x24a370: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_24a374:
    // 0x24a374: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x24a374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_24a378:
    // 0x24a378: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24a378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_24a37c:
    // 0x24a37c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x24a37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24a380:
    // 0x24a380: 0xc088ade  jal         func_222B78
label_24a384:
    if (ctx->pc == 0x24A384u) {
        ctx->pc = 0x24A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A380u;
        // 0x24a384: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A388u;
        goto label_24a388;
    }
    ctx->pc = 0x24A380u;
    SET_GPR_U32(ctx, 31, 0x24A388u);
    ctx->pc = 0x24A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A380u;
    // 0x24a384: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x24A380u, 0x24A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A388u;
label_24a388:
    // 0x24a388: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x24a388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
label_24a38c:
    // 0x24a38c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_24a390:
    if (ctx->pc == 0x24A390u) {
        ctx->pc = 0x24A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A38Cu;
        // 0x24a390: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A394u;
        goto label_24a394;
    }
    ctx->pc = 0x24A38Cu;
    {
        const bool branch_taken_0x24a38c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A38Cu;
        // 0x24a390: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a38c) {
            ctx->pc = 0x24A3A8u;
            goto label_24a3a8;
        }
    }
    ctx->pc = 0x24A394u;
label_24a394:
    // 0x24a394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a398:
    // 0x24a398: 0x0  nop
    ctx->pc = 0x24a398u;
    // NOP
label_24a39c:
    // 0x24a39c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24a39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24a3a0:
    // 0x24a3a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_24a3a4:
    if (ctx->pc == 0x24A3A4u) {
        ctx->pc = 0x24A3A8u;
        goto label_24a3a8;
    }
    ctx->pc = 0x24A3A0u;
    {
        const bool branch_taken_0x24a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3a0) {
            ctx->pc = 0x24A3C0u;
            goto label_24a3c0;
        }
    }
    ctx->pc = 0x24A3A8u;
label_24a3a8:
    // 0x24a3a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24a3ac:
    // 0x24a3ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24a3b0:
    // 0x24a3b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a3b4:
    // 0x24a3b4: 0x0  nop
    ctx->pc = 0x24a3b4u;
    // NOP
label_24a3b8:
    // 0x24a3b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24a3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24a3bc:
    // 0x24a3bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24a3bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24a3c0:
    // 0x24a3c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_24a3c4:
    // 0x24a3c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x24a3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_24a3c8:
    // 0x24a3c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a3cc:
    // 0x24a3cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a3d0:
    // 0x24a3d0: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x24a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_24a3d4:
    // 0x24a3d4: 0xc088bbc  jal         func_222EF0
label_24a3d8:
    if (ctx->pc == 0x24A3D8u) {
        ctx->pc = 0x24A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D4u;
        // 0x24a3d8: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A3DCu;
        goto label_24a3dc;
    }
    ctx->pc = 0x24A3D4u;
    SET_GPR_U32(ctx, 31, 0x24A3DCu);
    ctx->pc = 0x24A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A3D4u;
    // 0x24a3d8: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x24A3D4u, 0x24A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3DCu;
label_24a3dc:
    // 0x24a3dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24a3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24a3e0:
    // 0x24a3e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a3e4:
    // 0x24a3e4: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x24a3e4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_24a3e8:
    // 0x24a3e8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_24a3ec:
    // 0x24a3ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24a3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a3f0:
    // 0x24a3f0: 0x0  nop
    ctx->pc = 0x24a3f0u;
    // NOP
label_24a3f4:
    // 0x24a3f4: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x24a3f4u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
label_24a3f8:
    // 0x24a3f8: 0xc088f88  jal         func_223E20
label_24a3fc:
    if (ctx->pc == 0x24A3FCu) {
        ctx->pc = 0x24A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3F8u;
        // 0x24a3fc: 0x46001686  mov.s       $f26, $f2 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A400u;
        goto label_24a400;
    }
    ctx->pc = 0x24A3F8u;
    SET_GPR_U32(ctx, 31, 0x24A400u);
    ctx->pc = 0x24A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A3F8u;
    // 0x24a3fc: 0x46001686  mov.s       $f26, $f2 (Delay Slot)
    ctx->f[26] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x24A3F8u, 0x24A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A400u;
label_24a400:
    // 0x24a400: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_24a404:
    if (ctx->pc == 0x24A404u) {
        ctx->pc = 0x24A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A400u;
        // 0x24a404: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A408u;
        goto label_24a408;
    }
    ctx->pc = 0x24A400u;
    {
        const bool branch_taken_0x24a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A400u;
        // 0x24a404: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a400) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A408u;
label_24a408:
    // 0x24a408: 0xc107458  jal         func_41D160
label_24a40c:
    if (ctx->pc == 0x24A40Cu) {
        ctx->pc = 0x24A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A408u;
        // 0x24a40c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A410u;
        goto label_24a410;
    }
    ctx->pc = 0x24A408u;
    SET_GPR_U32(ctx, 31, 0x24A410u);
    ctx->pc = 0x24A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A408u;
    // 0x24a40c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24A408u, 0x24A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A410u;
label_24a410:
    // 0x24a410: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_24a414:
    if (ctx->pc == 0x24A414u) {
        ctx->pc = 0x24A418u;
        goto label_24a418;
    }
    ctx->pc = 0x24A410u;
    {
        const bool branch_taken_0x24a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a410) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x24a418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_24a41c:
    // 0x24a41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a420:
    // 0x24a420: 0x0  nop
    ctx->pc = 0x24a420u;
    // NOP
label_24a424:
    // 0x24a424: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x24a424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a428:
    // 0x24a428: 0x0  nop
    ctx->pc = 0x24a428u;
    // NOP
label_24a42c:
    // 0x24a42c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_24a430:
    if (ctx->pc == 0x24A430u) {
        ctx->pc = 0x24A434u;
        goto label_24a434;
    }
    ctx->pc = 0x24A42Cu;
    {
        const bool branch_taken_0x24a42c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a42c) {
            ctx->pc = 0x24A44Cu;
            goto label_24a44c;
        }
    }
    ctx->pc = 0x24A434u;
label_24a434:
    // 0x24a434: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x24a434u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_24a438:
    // 0x24a438: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x24a438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_24a43c:
    // 0x24a43c: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x24a43cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_24a440:
    // 0x24a440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a444:
    // 0x24a444: 0x10000014  b           . + 4 + (0x14 << 2)
label_24a448:
    if (ctx->pc == 0x24A448u) {
        ctx->pc = 0x24A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A444u;
        // 0x24a448: 0x46000e82  mul.s       $f26, $f1, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A44Cu;
        goto label_24a44c;
    }
    ctx->pc = 0x24A444u;
    {
        const bool branch_taken_0x24a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A444u;
        // 0x24a448: 0x46000e82  mul.s       $f26, $f1, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a444) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A44Cu;
label_24a44c:
    // 0x24a44c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_24a450:
    // 0x24a450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a454:
    // 0x24a454: 0x0  nop
    ctx->pc = 0x24a454u;
    // NOP
label_24a458:
    // 0x24a458: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x24a458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a45c:
    // 0x24a45c: 0x0  nop
    ctx->pc = 0x24a45cu;
    // NOP
label_24a460:
    // 0x24a460: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_24a464:
    if (ctx->pc == 0x24A464u) {
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A468u;
        goto label_24a468;
    }
    ctx->pc = 0x24A460u;
    {
        const bool branch_taken_0x24a460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a460) {
            ctx->pc = 0x24A484u;
            goto label_24a484;
        }
    }
    ctx->pc = 0x24A468u;
label_24a468:
    // 0x24a468: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x24a468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_24a46c:
    // 0x24a46c: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x24a46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_24a470:
    // 0x24a470: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x24a470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_24a474:
    // 0x24a474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a478:
    // 0x24a478: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x24a478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
label_24a47c:
    // 0x24a47c: 0x10000006  b           . + 4 + (0x6 << 2)
label_24a480:
    if (ctx->pc == 0x24A480u) {
        ctx->pc = 0x24A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A47Cu;
        // 0x24a480: 0x46000e82  mul.s       $f26, $f1, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A484u;
        goto label_24a484;
    }
    ctx->pc = 0x24A47Cu;
    {
        const bool branch_taken_0x24a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A47Cu;
        // 0x24a480: 0x46000e82  mul.s       $f26, $f1, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a47c) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A484u;
label_24a484:
    // 0x24a484: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x24a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_24a488:
    // 0x24a488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a48c:
    // 0x24a48c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24a490:
    // 0x24a490: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x24a490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_24a494:
    // 0x24a494: 0x4600a682  mul.s       $f26, $f20, $f0
    ctx->pc = 0x24a494u;
    ctx->f[26] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_24a498:
    // 0x24a498: 0xc088bd2  jal         func_222F48
label_24a49c:
    if (ctx->pc == 0x24A49Cu) {
        ctx->pc = 0x24A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A498u;
        // 0x24a49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4A0u;
        goto label_24a4a0;
    }
    ctx->pc = 0x24A498u;
    SET_GPR_U32(ctx, 31, 0x24A4A0u);
    ctx->pc = 0x24A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A498u;
    // 0x24a49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222F48u, 0x24A498u, 0x24A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4A0u;
label_24a4a0:
    // 0x24a4a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24a4a4:
    // 0x24a4a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24a4a8:
    // 0x24a4a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24a4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a4ac:
    // 0x24a4ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24a4acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a4b0:
    // 0x24a4b0: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_24a4b4:
    // 0x24a4b4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x24a4b4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_24a4b8:
    // 0x24a4b8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_24a4bc:
    // 0x24a4bc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_24a4c0:
    // 0x24a4c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24a4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a4c4:
    // 0x24a4c4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_24a4c8:
    // 0x24a4c8: 0x46010669  min.s       $f25, $f0, $f1
    ctx->pc = 0x24a4c8u;
    ctx->f[25] = std::min(ctx->f[0], ctx->f[1]);
label_24a4cc:
    // 0x24a4cc: 0x60f809  jalr        $v1
label_24a4d0:
    if (ctx->pc == 0x24A4D0u) {
        ctx->pc = 0x24A4D4u;
        goto label_24a4d4;
    }
    ctx->pc = 0x24A4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24A4D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4CCu, 0x24A4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A4D4u;
label_24a4d4:
    // 0x24a4d4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x24a4d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a4d8:
    // 0x24a4d8: 0x964505d2  lhu         $a1, 0x5D2($s2)
    ctx->pc = 0x24a4d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1490)));
label_24a4dc:
    // 0x24a4dc: 0x864405d2  lh          $a0, 0x5D2($s2)
    ctx->pc = 0x24a4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1490)));
label_24a4e0:
    // 0x24a4e0: 0x964605d4  lhu         $a2, 0x5D4($s2)
    ctx->pc = 0x24a4e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1492)));
label_24a4e4:
    // 0x24a4e4: 0x864305d4  lh          $v1, 0x5D4($s2)
    ctx->pc = 0x24a4e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1492)));
label_24a4e8:
    // 0x24a4e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_24a4ec:
    if (ctx->pc == 0x24A4ECu) {
        ctx->pc = 0x24A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E8u;
        // 0x24a4ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4F0u;
        goto label_24a4f0;
    }
    ctx->pc = 0x24A4E8u;
    {
        const bool branch_taken_0x24a4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E8u;
        // 0x24a4ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4e8) {
            ctx->pc = 0x24A4F8u;
            goto label_24a4f8;
        }
    }
    ctx->pc = 0x24A4F0u;
label_24a4f0:
    // 0x24a4f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_24a4f4:
    if (ctx->pc == 0x24A4F4u) {
        ctx->pc = 0x24A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4F0u;
        // 0x24a4f4: 0xa64005d2  sh          $zero, 0x5D2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1490), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4F8u;
        goto label_24a4f8;
    }
    ctx->pc = 0x24A4F0u;
    {
        const bool branch_taken_0x24a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4F0u;
        // 0x24a4f4: 0xa64005d2  sh          $zero, 0x5D2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1490), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4f0) {
            ctx->pc = 0x24A550u;
            goto label_24a550;
        }
    }
    ctx->pc = 0x24A4F8u;
label_24a4f8:
    // 0x24a4f8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x24a4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a4fc:
    // 0x24a4fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24a500:
    if (ctx->pc == 0x24A500u) {
        ctx->pc = 0x24A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4FCu;
        // 0x24a500: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A504u;
        goto label_24a504;
    }
    ctx->pc = 0x24A4FCu;
    {
        const bool branch_taken_0x24a4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4FCu;
        // 0x24a500: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4fc) {
            ctx->pc = 0x24A52Cu;
            goto label_24a52c;
        }
    }
    ctx->pc = 0x24A504u;
label_24a504:
    // 0x24a504: 0x9443051c  lhu         $v1, 0x51C($v0)
    ctx->pc = 0x24a504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1308)));
label_24a508:
    // 0x24a508: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x24a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_24a50c:
    // 0x24a50c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_24a510:
    // 0x24a510: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24a510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_24a514:
    // 0x24a514: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x24a514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a518:
    // 0x24a518: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24a51c:
    if (ctx->pc == 0x24A51Cu) {
        ctx->pc = 0x24A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A518u;
        // 0x24a51c: 0xa64305d4  sh          $v1, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A520u;
        goto label_24a520;
    }
    ctx->pc = 0x24A518u;
    {
        const bool branch_taken_0x24a518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A518u;
        // 0x24a51c: 0xa64305d4  sh          $v1, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a518) {
            ctx->pc = 0x24A524u;
            goto label_24a524;
        }
    }
    ctx->pc = 0x24A520u;
label_24a520:
    // 0x24a520: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24a520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24a524:
    // 0x24a524: 0x1000000a  b           . + 4 + (0xA << 2)
label_24a528:
    if (ctx->pc == 0x24A528u) {
        ctx->pc = 0x24A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A524u;
        // 0x24a528: 0xa64505d4  sh          $a1, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A52Cu;
        goto label_24a52c;
    }
    ctx->pc = 0x24A524u;
    {
        const bool branch_taken_0x24a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A524u;
        // 0x24a528: 0xa64505d4  sh          $a1, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a524) {
            ctx->pc = 0x24A550u;
            goto label_24a550;
        }
    }
    ctx->pc = 0x24A52Cu;
label_24a52c:
    // 0x24a52c: 0x9443051c  lhu         $v1, 0x51C($v0)
    ctx->pc = 0x24a52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1308)));
label_24a530:
    // 0x24a530: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x24a530u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_24a534:
    // 0x24a534: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24a534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_24a538:
    // 0x24a538: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24a538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_24a53c:
    // 0x24a53c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x24a53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a540:
    // 0x24a540: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24a544:
    if (ctx->pc == 0x24A544u) {
        ctx->pc = 0x24A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A540u;
        // 0x24a544: 0xa64305d4  sh          $v1, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A548u;
        goto label_24a548;
    }
    ctx->pc = 0x24A540u;
    {
        const bool branch_taken_0x24a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A540u;
        // 0x24a544: 0xa64305d4  sh          $v1, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a540) {
            ctx->pc = 0x24A54Cu;
            goto label_24a54c;
        }
    }
    ctx->pc = 0x24A548u;
label_24a548:
    // 0x24a548: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24a548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24a54c:
    // 0x24a54c: 0xa64305d4  sh          $v1, 0x5D4($s2)
    ctx->pc = 0x24a54cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 3));
label_24a550:
    // 0x24a550: 0x864305d4  lh          $v1, 0x5D4($s2)
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1492)));
label_24a554:
    // 0x24a554: 0x28620065  slti        $v0, $v1, 0x65
    ctx->pc = 0x24a554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_24a558:
    // 0x24a558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24a55c:
    if (ctx->pc == 0x24A55Cu) {
        ctx->pc = 0x24A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A558u;
        // 0x24a55c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A560u;
        goto label_24a560;
    }
    ctx->pc = 0x24A558u;
    {
        const bool branch_taken_0x24a558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A558u;
        // 0x24a55c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a558) {
            ctx->pc = 0x24A568u;
            goto label_24a568;
        }
    }
    ctx->pc = 0x24A560u;
label_24a560:
    // 0x24a560: 0x10000003  b           . + 4 + (0x3 << 2)
label_24a564:
    if (ctx->pc == 0x24A564u) {
        ctx->pc = 0x24A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A560u;
        // 0x24a564: 0xa64205d4  sh          $v0, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A568u;
        goto label_24a568;
    }
    ctx->pc = 0x24A560u;
    {
        const bool branch_taken_0x24a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A560u;
        // 0x24a564: 0xa64205d4  sh          $v0, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a560) {
            ctx->pc = 0x24A570u;
            goto label_24a570;
        }
    }
    ctx->pc = 0x24A568u;
label_24a568:
    // 0x24a568: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_24a56c:
    if (ctx->pc == 0x24A56Cu) {
        ctx->pc = 0x24A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A568u;
        // 0x24a56c: 0xa64005d4  sh          $zero, 0x5D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A570u;
        goto label_24a570;
    }
    ctx->pc = 0x24A568u;
    {
        const bool branch_taken_0x24a568 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x24a568) {
            ctx->pc = 0x24A56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A568u;
            // 0x24a56c: 0xa64005d4  sh          $zero, 0x5D4($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 1492), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A570u;
            goto label_24a570;
        }
    }
    ctx->pc = 0x24A570u;
label_24a570:
    // 0x24a570: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24a570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24a574:
    // 0x24a574: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24a574u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24a578:
    // 0x24a578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24a57c:
    if (ctx->pc == 0x24A57Cu) {
        ctx->pc = 0x24A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A578u;
        // 0x24a57c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A580u;
        goto label_24a580;
    }
    ctx->pc = 0x24A578u;
    {
        const bool branch_taken_0x24a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A578u;
        // 0x24a57c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a578) {
            ctx->pc = 0x24A594u;
            goto label_24a594;
        }
    }
    ctx->pc = 0x24A580u;
label_24a580:
    // 0x24a580: 0xc047ab8  jal         func_11EAE0
label_24a584:
    if (ctx->pc == 0x24A584u) {
        ctx->pc = 0x24A588u;
        goto label_24a588;
    }
    ctx->pc = 0x24A580u;
    SET_GPR_U32(ctx, 31, 0x24A588u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x24A580u, 0x24A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A588u;
label_24a588:
    // 0x24a588: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24a588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24a58c:
    // 0x24a58c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24a590:
    if (ctx->pc == 0x24A590u) {
        ctx->pc = 0x24A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A58Cu;
        // 0x24a590: 0x825001b0  lb          $s0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A594u;
        goto label_24a594;
    }
    ctx->pc = 0x24A58Cu;
    {
        const bool branch_taken_0x24a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a58c) {
            ctx->pc = 0x24A590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A58Cu;
            // 0x24a590: 0x825001b0  lb          $s0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A594u;
            goto label_24a594;
        }
    }
    ctx->pc = 0x24A594u;
label_24a594:
    // 0x24a594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a598:
    // 0x24a598: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_24a59c:
    // 0x24a59c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x24a59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_24a5a0:
    // 0x24a5a0: 0xc047e6c  jal         func_11F9B0
label_24a5a4:
    if (ctx->pc == 0x24A5A4u) {
        ctx->pc = 0x24A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5A0u;
        // 0x24a5a4: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5A8u;
        goto label_24a5a8;
    }
    ctx->pc = 0x24A5A0u;
    SET_GPR_U32(ctx, 31, 0x24A5A8u);
    ctx->pc = 0x24A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5A0u;
    // 0x24a5a4: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x24A5A0u, 0x24A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5A8u;
label_24a5a8:
    // 0x24a5a8: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_24a5ac:
    // 0x24a5ac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x24a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a5b0:
    // 0x24a5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a5b4:
    // 0x24a5b4: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_24a5b8:
    // 0x24a5b8: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x24a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_24a5bc:
    // 0x24a5bc: 0x60f809  jalr        $v1
label_24a5c0:
    if (ctx->pc == 0x24A5C0u) {
        ctx->pc = 0x24A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5BCu;
        // 0x24a5c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5C4u;
        goto label_24a5c4;
    }
    ctx->pc = 0x24A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24A5C4u);
        ctx->pc = 0x24A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5BCu;
        // 0x24a5c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A5BCu, 0x24A5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A5C4u;
label_24a5c4:
    // 0x24a5c4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x24a5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24a5c8:
    // 0x24a5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24a5cc:
    // 0x24a5cc: 0xa3a00169  sb          $zero, 0x169($sp)
    ctx->pc = 0x24a5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 361), (uint8_t)GPR_U32(ctx, 0));
label_24a5d0:
    // 0x24a5d0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x24a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_24a5d4:
    // 0x24a5d4: 0xc0cd7d2  jal         func_335F48
label_24a5d8:
    if (ctx->pc == 0x24A5D8u) {
        ctx->pc = 0x24A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5D4u;
        // 0x24a5d8: 0xa3a00168  sb          $zero, 0x168($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 360), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5DCu;
        goto label_24a5dc;
    }
    ctx->pc = 0x24A5D4u;
    SET_GPR_U32(ctx, 31, 0x24A5DCu);
    ctx->pc = 0x24A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5D4u;
    // 0x24a5d8: 0xa3a00168  sb          $zero, 0x168($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 360), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x24A5D4u, 0x24A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5DCu;
label_24a5dc:
    // 0x24a5dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a5e0:
    // 0x24a5e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24a5e4:
    // 0x24a5e4: 0xc4410520  lwc1        $f1, 0x520($v0)
    ctx->pc = 0x24a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a5e8:
    // 0x24a5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a5ec:
    // 0x24a5ec: 0x90620500  lbu         $v0, 0x500($v1)
    ctx->pc = 0x24a5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1280)));
label_24a5f0:
    // 0x24a5f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24a5f4:
    // 0x24a5f4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x24a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a5f8:
    // 0x24a5f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x24a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a5fc:
    // 0x24a5fc: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x24a5fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_24a600:
    // 0x24a600: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x24a600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_24a604:
    // 0x24a604: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x24a604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_24a608:
    // 0x24a608: 0xa3a200dc  sb          $v0, 0xDC($sp)
    ctx->pc = 0x24a608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 2));
label_24a60c:
    // 0x24a60c: 0xc060b58  jal         func_182D60
label_24a610:
    if (ctx->pc == 0x24A610u) {
        ctx->pc = 0x24A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A60Cu;
        // 0x24a610: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A614u;
        goto label_24a614;
    }
    ctx->pc = 0x24A60Cu;
    SET_GPR_U32(ctx, 31, 0x24A614u);
    ctx->pc = 0x24A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A60Cu;
    // 0x24a610: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x24A60Cu, 0x24A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A614u;
label_24a614:
    // 0x24a614: 0xc066116  jal         func_198458
label_24a618:
    if (ctx->pc == 0x24A618u) {
        ctx->pc = 0x24A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A614u;
        // 0x24a618: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A61Cu;
        goto label_24a61c;
    }
    ctx->pc = 0x24A614u;
    SET_GPR_U32(ctx, 31, 0x24A61Cu);
    ctx->pc = 0x24A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A614u;
    // 0x24a618: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198458u, 0x24A614u, 0x24A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A61Cu;
label_24a61c:
    // 0x24a61c: 0x864405d4  lh          $a0, 0x5D4($s2)
    ctx->pc = 0x24a61cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1492)));
label_24a620:
    // 0x24a620: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x24a620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_24a624:
    // 0x24a624: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24a624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_24a628:
    // 0x24a628: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24a628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a62c:
    // 0x24a62c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24a62cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a630:
    // 0x24a630: 0x0  nop
    ctx->pc = 0x24a630u;
    // NOP
label_24a634:
    // 0x24a634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24a634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_24a638:
    // 0x24a638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24a63c:
    // 0x24a63c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24a63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24a640:
    // 0x24a640: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x24a640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24a644:
    // 0x24a644: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x24a644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_24a648:
    // 0x24a648: 0x0  nop
    ctx->pc = 0x24a648u;
    // NOP
label_24a64c:
    // 0x24a64c: 0x0  nop
    ctx->pc = 0x24a64cu;
    // NOP
label_24a650:
    // 0x24a650: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24a650u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_24a654:
    // 0x24a654: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x24a654u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_24a658:
    // 0x24a658: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x24a658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_24a65c:
    // 0x24a65c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24a65cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_24a660:
    // 0x24a660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24a660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a664:
    // 0x24a664: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_24a668:
    // 0x24a668: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x24a668u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_24a66c:
    // 0x24a66c: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_24a670:
    if (ctx->pc == 0x24A670u) {
        ctx->pc = 0x24A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A66Cu;
        // 0x24a670: 0x4600adc2  mul.s       $f23, $f21, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A674u;
        goto label_24a674;
    }
    ctx->pc = 0x24A66Cu;
    {
        const bool branch_taken_0x24a66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A66Cu;
        // 0x24a670: 0x4600adc2  mul.s       $f23, $f21, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a66c) {
            ctx->pc = 0x24A834u;
            goto label_24a834;
        }
    }
    ctx->pc = 0x24A674u;
label_24a674:
    // 0x24a674: 0x26a21720  addiu       $v0, $s5, 0x1720
    ctx->pc = 0x24a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5920));
label_24a678:
    // 0x24a678: 0xc6a01720  lwc1        $f0, 0x1720($s5)
    ctx->pc = 0x24a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a67c:
    // 0x24a67c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a680:
    // 0x24a680: 0x26e31730  addiu       $v1, $s7, 0x1730
    ctx->pc = 0x24a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5936));
label_24a684:
    // 0x24a684: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a688:
    // 0x24a688: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24a688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_24a68c:
    // 0x24a68c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24a68cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_24a690:
    // 0x24a690: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x24a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a694:
    // 0x24a694: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x24a694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_24a698:
    // 0x24a698: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x24a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a69c:
    // 0x24a69c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_24a6a0:
    // 0x24a6a0: 0x27c21770  addiu       $v0, $fp, 0x1770
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 6000));
label_24a6a4:
    // 0x24a6a4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x24a6a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_24a6a8:
    // 0x24a6a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x24a6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_24a6ac:
    // 0x24a6ac: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x24a6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_24a6b0:
    // 0x24a6b0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24a6b0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24a6b4:
    // 0x24a6b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a6b8:
    // 0x24a6b8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x24a6b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_24a6bc:
    // 0x24a6bc: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x24a6bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_24a6c0:
    // 0x24a6c0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x24a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24a6c4:
    // 0x24a6c4: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x24a6c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_24a6c8:
    // 0x24a6c8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x24a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a6cc:
    // 0x24a6cc: 0xc6e01730  lwc1        $f0, 0x1730($s7)
    ctx->pc = 0x24a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a6d0:
    // 0x24a6d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24a6d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_24a6d4:
    // 0x24a6d4: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x24a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24a6d8:
    // 0x24a6d8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24a6d8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_24a6dc:
    // 0x24a6dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24a6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_24a6e0:
    // 0x24a6e0: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x24a6e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_24a6e4:
    // 0x24a6e4: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x24a6e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_24a6e8:
    // 0x24a6e8: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x24a6e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_24a6ec:
    // 0x24a6ec: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x24a6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_24a6f0:
    // 0x24a6f0: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x24a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a6f4:
    // 0x24a6f4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24a6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_24a6f8:
    // 0x24a6f8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x24a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24a6fc:
    // 0x24a6fc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x24a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a700:
    // 0x24a700: 0x27a30174  addiu       $v1, $sp, 0x174
    ctx->pc = 0x24a700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_24a704:
    // 0x24a704: 0xc7c01770  lwc1        $f0, 0x1770($fp)
    ctx->pc = 0x24a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a708:
    // 0x24a708: 0x4600c986  mov.s       $f6, $f25
    ctx->pc = 0x24a708u;
    ctx->f[6] = FPU_MOV_S(ctx->f[25]);
label_24a70c:
    // 0x24a70c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x24a70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_24a710:
    // 0x24a710: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x24a710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_24a714:
    // 0x24a714: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24a714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_24a718:
    // 0x24a718: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x24a718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_24a71c:
    // 0x24a71c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x24a71cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_24a720:
    // 0x24a720: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24a720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_24a724:
    // 0x24a724: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24a724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_24a728:
    // 0x24a728: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x24a728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_24a72c:
    // 0x24a72c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24a72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24a730:
    // 0x24a730: 0xc4c00518  lwc1        $f0, 0x518($a2)
    ctx->pc = 0x24a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a734:
    // 0x24a734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_24a738:
    // 0x24a738: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24a738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_24a73c:
    // 0x24a73c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x24a73cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_24a740:
    // 0x24a740: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24a740u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_24a744:
    // 0x24a744: 0xa3a50170  sb          $a1, 0x170($sp)
    ctx->pc = 0x24a744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 5));
label_24a748:
    // 0x24a748: 0x461b18c0  add.s       $f3, $f3, $f27
    ctx->pc = 0x24a748u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[27]);
label_24a74c:
    // 0x24a74c: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x24a74cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_24a750:
    // 0x24a750: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x24a750u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_24a754:
    // 0x24a754: 0xa0930003  sb          $s3, 0x3($a0)
    ctx->pc = 0x24a754u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 19));
label_24a758:
    // 0x24a758: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x24a758u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_24a75c:
    // 0x24a75c: 0xa3a00174  sb          $zero, 0x174($sp)
    ctx->pc = 0x24a75cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 372), (uint8_t)GPR_U32(ctx, 0));
label_24a760:
    // 0x24a760: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24a760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24a764:
    // 0x24a764: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x24a764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_24a768:
    // 0x24a768: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_24a76c:
    if (ctx->pc == 0x24A76Cu) {
        ctx->pc = 0x24A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A768u;
        // 0x24a76c: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A770u;
        goto label_24a770;
    }
    ctx->pc = 0x24A768u;
    {
        const bool branch_taken_0x24a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A768u;
        // 0x24a76c: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a768) {
            ctx->pc = 0x24A7A0u;
            goto label_24a7a0;
        }
    }
    ctx->pc = 0x24A770u;
label_24a770:
    // 0x24a770: 0x240200d9  addiu       $v0, $zero, 0xD9
    ctx->pc = 0x24a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_24a774:
    // 0x24a774: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x24a774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_24a778:
    // 0x24a778: 0xa3a20178  sb          $v0, 0x178($sp)
    ctx->pc = 0x24a778u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 376), (uint8_t)GPR_U32(ctx, 2));
label_24a77c:
    // 0x24a77c: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x24a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_24a780:
    // 0x24a780: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24a784:
    // 0x24a784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x24a784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_24a788:
    // 0x24a788: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x24a788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_24a78c:
    // 0x24a78c: 0xc6460650  lwc1        $f6, 0x650($s2)
    ctx->pc = 0x24a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24a790:
    // 0x24a790: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x24a790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_24a794:
    // 0x24a794: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24a794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24a798:
    // 0x24a798: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x24a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_24a79c:
    // 0x24a79c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x24a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_24a7a0:
    // 0x24a7a0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_24a7a4:
    // 0x24a7a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a7a8:
    // 0x24a7a8: 0x46183042  mul.s       $f1, $f6, $f24
    ctx->pc = 0x24a7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
label_24a7ac:
    // 0x24a7ac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x24a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_24a7b0:
    // 0x24a7b0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x24a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_24a7b4:
    // 0x24a7b4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x24a7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_24a7b8:
    // 0x24a7b8: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x24a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_24a7bc:
    // 0x24a7bc: 0xa3a3017c  sb          $v1, 0x17C($sp)
    ctx->pc = 0x24a7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 380), (uint8_t)GPR_U32(ctx, 3));
label_24a7c0:
    // 0x24a7c0: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x24a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_24a7c4:
    // 0x24a7c4: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x24a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_24a7c8:
    // 0x24a7c8: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x24a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_24a7cc:
    // 0x24a7cc: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x24a7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_24a7d0:
    // 0x24a7d0: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x24a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_24a7d4:
    // 0x24a7d4: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x24a7d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_24a7d8:
    // 0x24a7d8: 0xe7b700cc  swc1        $f23, 0xCC($sp)
    ctx->pc = 0x24a7d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_24a7dc:
    // 0x24a7dc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x24a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_24a7e0:
    // 0x24a7e0: 0xa0530003  sb          $s3, 0x3($v0)
    ctx->pc = 0x24a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
label_24a7e4:
    // 0x24a7e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_24a7e8:
    // 0x24a7e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a7ec:
    // 0x24a7ec: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x24a7ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24a7f0:
    // 0x24a7f0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x24a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_24a7f4:
    // 0x24a7f4: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x24a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_24a7f8:
    // 0x24a7f8: 0x8fa7017c  lw          $a3, 0x17C($sp)
    ctx->pc = 0x24a7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_24a7fc:
    // 0x24a7fc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x24a7fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24a800:
    // 0x24a800: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x24a800u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24a804:
    // 0x24a804: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x24a804u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24a808:
    // 0x24a808: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x24a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_24a80c:
    // 0x24a80c: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x24a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
label_24a810:
    // 0x24a810: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x24a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_24a814:
    // 0x24a814: 0x7fa50130  sq          $a1, 0x130($sp)
    ctx->pc = 0x24a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 5));
label_24a818:
    // 0x24a818: 0x7fa60140  sq          $a2, 0x140($sp)
    ctx->pc = 0x24a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 6));
label_24a81c:
    // 0x24a81c: 0xc107458  jal         func_41D160
label_24a820:
    if (ctx->pc == 0x24A820u) {
        ctx->pc = 0x24A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A81Cu;
        // 0x24a820: 0xa3a3016a  sb          $v1, 0x16A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 362), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A824u;
        goto label_24a824;
    }
    ctx->pc = 0x24A81Cu;
    SET_GPR_U32(ctx, 31, 0x24A824u);
    ctx->pc = 0x24A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A81Cu;
    // 0x24a820: 0xa3a3016a  sb          $v1, 0x16A($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 362), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24A81Cu, 0x24A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A824u;
label_24a824:
    // 0x24a824: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_24a828:
    if (ctx->pc == 0x24A828u) {
        ctx->pc = 0x24A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A824u;
        // 0x24a828: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A82Cu;
        goto label_24a82c;
    }
    ctx->pc = 0x24A824u;
    {
        const bool branch_taken_0x24a824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A824u;
        // 0x24a828: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a824) {
            ctx->pc = 0x24A838u;
            goto label_24a838;
        }
    }
    ctx->pc = 0x24A82Cu;
label_24a82c:
    // 0x24a82c: 0xc05ec78  jal         func_17B1E0
label_24a830:
    if (ctx->pc == 0x24A830u) {
        ctx->pc = 0x24A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A82Cu;
        // 0x24a830: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A834u;
        goto label_24a834;
    }
    ctx->pc = 0x24A82Cu;
    SET_GPR_U32(ctx, 31, 0x24A834u);
    ctx->pc = 0x24A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A82Cu;
    // 0x24a830: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x24A82Cu, 0x24A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A834u;
label_24a834:
    // 0x24a834: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x24a834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_24a838:
    // 0x24a838: 0x8e0272c4  lw          $v0, 0x72C4($s0)
    ctx->pc = 0x24a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29380)));
label_24a83c:
    // 0x24a83c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_24a840:
    if (ctx->pc == 0x24A840u) {
        ctx->pc = 0x24A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A83Cu;
        // 0x24a840: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A844u;
        goto label_24a844;
    }
    ctx->pc = 0x24A83Cu;
    {
        const bool branch_taken_0x24a83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A83Cu;
        // 0x24a840: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a83c) {
            ctx->pc = 0x24A86Cu;
            goto label_24a86c;
        }
    }
    ctx->pc = 0x24A844u;
label_24a844:
    // 0x24a844: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x24a844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_24a848:
    // 0x24a848: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24a84c:
    // 0x24a84c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24a84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24a850:
    // 0x24a850: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24a854:
    // 0x24a854: 0x40f809  jalr        $v0
label_24a858:
    if (ctx->pc == 0x24A858u) {
        ctx->pc = 0x24A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A854u;
        // 0x24a858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A85Cu;
        goto label_24a85c;
    }
    ctx->pc = 0x24A854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A85Cu);
        ctx->pc = 0x24A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A854u;
        // 0x24a858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A854u, 0x24A85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A85Cu;
label_24a85c:
    // 0x24a85c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x24a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_24a860:
    // 0x24a860: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a864:
    // 0x24a864: 0xac6272c0  sw          $v0, 0x72C0($v1)
    ctx->pc = 0x24a864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29376), GPR_U32(ctx, 2));
label_24a868:
    // 0x24a868: 0xae0472c4  sw          $a0, 0x72C4($s0)
    ctx->pc = 0x24a868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29380), GPR_U32(ctx, 4));
label_24a86c:
    // 0x24a86c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24a86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_24a870:
    // 0x24a870: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24a870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24a874:
    // 0x24a874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a878:
    // 0x24a878: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a87c:
    // 0x24a87c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24a87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a880:
    // 0x24a880: 0x0  nop
    ctx->pc = 0x24a880u;
    // NOP
label_24a884:
    // 0x24a884: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_24a888:
    if (ctx->pc == 0x24A888u) {
        ctx->pc = 0x24A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A884u;
        // 0x24a888: 0x8c540510  lw          $s4, 0x510($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A88Cu;
        goto label_24a88c;
    }
    ctx->pc = 0x24A884u;
    {
        const bool branch_taken_0x24a884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A884u;
        // 0x24a888: 0x8c540510  lw          $s4, 0x510($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a884) {
            ctx->pc = 0x24A934u;
            goto label_24a934;
        }
    }
    ctx->pc = 0x24A88Cu;
label_24a88c:
    // 0x24a88c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a890:
    // 0x24a890: 0xc4400514  lwc1        $f0, 0x514($v0)
    ctx->pc = 0x24a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a894:
    // 0x24a894: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x24a894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a898:
    // 0x24a898: 0x0  nop
    ctx->pc = 0x24a898u;
    // NOP
label_24a89c:
    // 0x24a89c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_24a8a0:
    if (ctx->pc == 0x24A8A0u) {
        ctx->pc = 0x24A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A89Cu;
        // 0x24a8a0: 0x26a21720  addiu       $v0, $s5, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8A4u;
        goto label_24a8a4;
    }
    ctx->pc = 0x24A89Cu;
    {
        const bool branch_taken_0x24a89c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A89Cu;
        // 0x24a8a0: 0x26a21720  addiu       $v0, $s5, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a89c) {
            ctx->pc = 0x24A938u;
            goto label_24a938;
        }
    }
    ctx->pc = 0x24A8A4u;
label_24a8a4:
    // 0x24a8a4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24a8a8:
    // 0x24a8a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24a8a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24a8ac:
    // 0x24a8ac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_24a8b0:
    if (ctx->pc == 0x24A8B0u) {
        ctx->pc = 0x24A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ACu;
        // 0x24a8b0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8B4u;
        goto label_24a8b4;
    }
    ctx->pc = 0x24A8ACu;
    {
        const bool branch_taken_0x24a8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ACu;
        // 0x24a8b0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8ac) {
            ctx->pc = 0x24A934u;
            goto label_24a934;
        }
    }
    ctx->pc = 0x24A8B4u;
label_24a8b4:
    // 0x24a8b4: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x24a8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
label_24a8b8:
    // 0x24a8b8: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x24a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_24a8bc:
    // 0x24a8bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24a8c0:
    // 0x24a8c0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24a8c4:
    // 0x24a8c4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24a8c8:
    // 0x24a8c8: 0x40f809  jalr        $v0
label_24a8cc:
    if (ctx->pc == 0x24A8CCu) {
        ctx->pc = 0x24A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8C8u;
        // 0x24a8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8D0u;
        goto label_24a8d0;
    }
    ctx->pc = 0x24A8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A8D0u);
        ctx->pc = 0x24A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8C8u;
        // 0x24a8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8C8u, 0x24A8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A8D0u;
label_24a8d0:
    // 0x24a8d0: 0x8e2372c0  lw          $v1, 0x72C0($s1)
    ctx->pc = 0x24a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29376)));
label_24a8d4:
    // 0x24a8d4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_24a8d8:
    // 0x24a8d8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x24a8d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24a8dc:
    // 0x24a8dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_24a8e0:
    if (ctx->pc == 0x24A8E0u) {
        ctx->pc = 0x24A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8DCu;
        // 0x24a8e0: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8E4u;
        goto label_24a8e4;
    }
    ctx->pc = 0x24A8DCu;
    {
        const bool branch_taken_0x24a8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8DCu;
        // 0x24a8e0: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8dc) {
            ctx->pc = 0x24A8F0u;
            goto label_24a8f0;
        }
    }
    ctx->pc = 0x24A8E4u;
label_24a8e4:
    // 0x24a8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a8e8:
    // 0x24a8e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_24a8ec:
    if (ctx->pc == 0x24A8ECu) {
        ctx->pc = 0x24A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8E8u;
        // 0x24a8ec: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8F0u;
        goto label_24a8f0;
    }
    ctx->pc = 0x24A8E8u;
    {
        const bool branch_taken_0x24a8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8E8u;
        // 0x24a8ec: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8e8) {
            ctx->pc = 0x24A934u;
            goto label_24a934;
        }
    }
    ctx->pc = 0x24A8F0u;
label_24a8f0:
    // 0x24a8f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24a8f4:
    // 0x24a8f4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24a8f8:
    // 0x24a8f8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24a8fc:
    // 0x24a8fc: 0x40f809  jalr        $v0
label_24a900:
    if (ctx->pc == 0x24A900u) {
        ctx->pc = 0x24A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8FCu;
        // 0x24a900: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A904u;
        goto label_24a904;
    }
    ctx->pc = 0x24A8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A904u);
        ctx->pc = 0x24A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8FCu;
        // 0x24a900: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8FCu, 0x24A904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A904u;
label_24a904:
    // 0x24a904: 0x8e2372c0  lw          $v1, 0x72C0($s1)
    ctx->pc = 0x24a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29376)));
label_24a908:
    // 0x24a908: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x24a908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_24a90c:
    // 0x24a90c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24a910:
    // 0x24a910: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x24a910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24a914:
    // 0x24a914: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_24a918:
    if (ctx->pc == 0x24A918u) {
        ctx->pc = 0x24A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A914u;
        // 0x24a918: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A91Cu;
        goto label_24a91c;
    }
    ctx->pc = 0x24A914u;
    {
        const bool branch_taken_0x24a914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A914u;
        // 0x24a918: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a914) {
            ctx->pc = 0x24A934u;
            goto label_24a934;
        }
    }
    ctx->pc = 0x24A91Cu;
label_24a91c:
    // 0x24a91c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24a920:
    // 0x24a920: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24a924:
    // 0x24a924: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24a928:
    // 0x24a928: 0x40f809  jalr        $v0
label_24a92c:
    if (ctx->pc == 0x24A92Cu) {
        ctx->pc = 0x24A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A928u;
        // 0x24a92c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A930u;
        goto label_24a930;
    }
    ctx->pc = 0x24A928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A930u);
        ctx->pc = 0x24A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A928u;
        // 0x24a92c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A928u, 0x24A930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A930u;
label_24a930:
    // 0x24a930: 0xae2272c0  sw          $v0, 0x72C0($s1)
    ctx->pc = 0x24a930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29376), GPR_U32(ctx, 2));
label_24a934:
    // 0x24a934: 0x26a21720  addiu       $v0, $s5, 0x1720
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5920));
label_24a938:
    // 0x24a938: 0xc6a01720  lwc1        $f0, 0x1720($s5)
    ctx->pc = 0x24a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a93c:
    // 0x24a93c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a940:
    // 0x24a940: 0x26e31730  addiu       $v1, $s7, 0x1730
    ctx->pc = 0x24a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5936));
label_24a944:
    // 0x24a944: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a948:
    // 0x24a948: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x24a948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_24a94c:
    // 0x24a94c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24a94cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_24a950:
    // 0x24a950: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x24a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a954:
    // 0x24a954: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x24a954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_24a958:
    // 0x24a958: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x24a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a95c:
    // 0x24a95c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24a95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_24a960:
    // 0x24a960: 0x27c21770  addiu       $v0, $fp, 0x1770
    ctx->pc = 0x24a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 6000));
label_24a964:
    // 0x24a964: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x24a964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_24a968:
    // 0x24a968: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x24a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_24a96c:
    // 0x24a96c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x24a96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_24a970:
    // 0x24a970: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24a970u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24a974:
    // 0x24a974: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a978:
    // 0x24a978: 0x46162102  mul.s       $f4, $f4, $f22
    ctx->pc = 0x24a978u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
label_24a97c:
    // 0x24a97c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x24a97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_24a980:
    // 0x24a980: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x24a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_24a984:
    // 0x24a984: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x24a984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
label_24a988:
    // 0x24a988: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x24a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a98c:
    // 0x24a98c: 0xc6e01730  lwc1        $f0, 0x1730($s7)
    ctx->pc = 0x24a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a990:
    // 0x24a990: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24a990u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_24a994:
    // 0x24a994: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x24a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24a998:
    // 0x24a998: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24a998u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_24a99c:
    // 0x24a99c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x24a99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_24a9a0:
    // 0x24a9a0: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x24a9a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_24a9a4:
    // 0x24a9a4: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x24a9a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_24a9a8:
    // 0x24a9a8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x24a9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_24a9ac:
    // 0x24a9ac: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x24a9acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
label_24a9b0:
    // 0x24a9b0: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x24a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a9b4:
    // 0x24a9b4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24a9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_24a9b8:
    // 0x24a9b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24a9bc:
    // 0x24a9bc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x24a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a9c0:
    // 0x24a9c0: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x24a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_24a9c4:
    // 0x24a9c4: 0xc7c01770  lwc1        $f0, 0x1770($fp)
    ctx->pc = 0x24a9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a9c8:
    // 0x24a9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a9cc:
    // 0x24a9cc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x24a9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_24a9d0:
    // 0x24a9d0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x24a9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_24a9d4:
    // 0x24a9d4: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x24a9d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_24a9d8:
    // 0x24a9d8: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x24a9d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_24a9dc:
    // 0x24a9dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24a9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_24a9e0:
    // 0x24a9e0: 0xc4410518  lwc1        $f1, 0x518($v0)
    ctx->pc = 0x24a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a9e4:
    // 0x24a9e4: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x24a9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_24a9e8:
    // 0x24a9e8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x24a9e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_24a9ec:
    // 0x24a9ec: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x24a9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_24a9f0:
    // 0x24a9f0: 0x461b18c0  add.s       $f3, $f3, $f27
    ctx->pc = 0x24a9f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[27]);
label_24a9f4:
    // 0x24a9f4: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x24a9f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_24a9f8:
    // 0x24a9f8: 0xa0b30003  sb          $s3, 0x3($a1)
    ctx->pc = 0x24a9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 19));
label_24a9fc:
    // 0x24a9fc: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x24a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_24aa00:
    // 0x24aa00: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x24aa00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_24aa04:
    // 0x24aa04: 0xa3a60184  sb          $a2, 0x184($sp)
    ctx->pc = 0x24aa04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 388), (uint8_t)GPR_U32(ctx, 6));
label_24aa08:
    // 0x24aa08: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x24aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_24aa0c:
    // 0x24aa0c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x24aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_24aa10:
    // 0x24aa10: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x24aa10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_24aa14:
    // 0x24aa14: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x24aa14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
label_24aa18:
    // 0x24aa18: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24aa18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24aa1c:
    // 0x24aa1c: 0xc088f88  jal         func_223E20
label_24aa20:
    if (ctx->pc == 0x24AA20u) {
        ctx->pc = 0x24AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA1Cu;
        // 0x24aa20: 0x8fbe0184  lw          $fp, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA24u;
        goto label_24aa24;
    }
    ctx->pc = 0x24AA1Cu;
    SET_GPR_U32(ctx, 31, 0x24AA24u);
    ctx->pc = 0x24AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA1Cu;
    // 0x24aa20: 0x8fbe0184  lw          $fp, 0x184($sp) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x24AA1Cu, 0x24AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA24u;
label_24aa24:
    // 0x24aa24: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_24aa28:
    if (ctx->pc == 0x24AA28u) {
        ctx->pc = 0x24AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA24u;
        // 0x24aa28: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA2Cu;
        goto label_24aa2c;
    }
    ctx->pc = 0x24AA24u;
    {
        const bool branch_taken_0x24aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA24u;
        // 0x24aa28: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa24) {
            ctx->pc = 0x24AB10u;
            goto label_24ab10;
        }
    }
    ctx->pc = 0x24AA2Cu;
label_24aa2c:
    // 0x24aa2c: 0xc107458  jal         func_41D160
label_24aa30:
    if (ctx->pc == 0x24AA30u) {
        ctx->pc = 0x24AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA2Cu;
        // 0x24aa30: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA34u;
        goto label_24aa34;
    }
    ctx->pc = 0x24AA2Cu;
    SET_GPR_U32(ctx, 31, 0x24AA34u);
    ctx->pc = 0x24AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA2Cu;
    // 0x24aa30: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24AA2Cu, 0x24AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA34u;
label_24aa34:
    // 0x24aa34: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_24aa38:
    if (ctx->pc == 0x24AA38u) {
        ctx->pc = 0x24AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA34u;
        // 0x24aa38: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA3Cu;
        goto label_24aa3c;
    }
    ctx->pc = 0x24AA34u;
    {
        const bool branch_taken_0x24aa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA34u;
        // 0x24aa38: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa34) {
            ctx->pc = 0x24AB10u;
            goto label_24ab10;
        }
    }
    ctx->pc = 0x24AA3Cu;
label_24aa3c:
    // 0x24aa3c: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
label_24aa40:
    if (ctx->pc == 0x24AA40u) {
        ctx->pc = 0x24AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA3Cu;
        // 0x24aa40: 0x8fa501a0  lw          $a1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA44u;
        goto label_24aa44;
    }
    ctx->pc = 0x24AA3Cu;
    {
        const bool branch_taken_0x24aa3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA3Cu;
        // 0x24aa40: 0x8fa501a0  lw          $a1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa3c) {
            ctx->pc = 0x24AA98u;
            goto label_24aa98;
        }
    }
    ctx->pc = 0x24AA44u;
label_24aa44:
    // 0x24aa44: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x24aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_24aa48:
    // 0x24aa48: 0x2407ff00  addiu       $a3, $zero, -0x100
    ctx->pc = 0x24aa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_24aa4c:
    // 0x24aa4c: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x24aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24aa50:
    // 0x24aa50: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x24aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_24aa54:
    // 0x24aa54: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x24aa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_24aa58:
    // 0x24aa58: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x24aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_24aa5c:
    // 0x24aa5c: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x24aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
label_24aa60:
    // 0x24aa60: 0x27a4018c  addiu       $a0, $sp, 0x18C
    ctx->pc = 0x24aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_24aa64:
    // 0x24aa64: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x24aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_24aa68:
    // 0x24aa68: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24aa6c:
    // 0x24aa6c: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x24aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_24aa70:
    // 0x24aa70: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x24aa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_24aa74:
    // 0x24aa74: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24aa74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24aa78:
    // 0x24aa78: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x24aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_24aa7c:
    // 0x24aa7c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x24aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_24aa80:
    // 0x24aa80: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x24aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_24aa84:
    // 0x24aa84: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x24aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_24aa88:
    // 0x24aa88: 0xa0930003  sb          $s3, 0x3($a0)
    ctx->pc = 0x24aa88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 19));
label_24aa8c:
    // 0x24aa8c: 0xa0880001  sb          $t0, 0x1($a0)
    ctx->pc = 0x24aa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
label_24aa90:
    // 0x24aa90: 0x10000101  b           . + 4 + (0x101 << 2)
label_24aa94:
    if (ctx->pc == 0x24AA94u) {
        ctx->pc = 0x24AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA90u;
        // 0x24aa94: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA98u;
        goto label_24aa98;
    }
    ctx->pc = 0x24AA90u;
    {
        const bool branch_taken_0x24aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA90u;
        // 0x24aa94: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa90) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AA98u;
label_24aa98:
    // 0x24aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24aa9c:
    // 0x24aa9c: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
label_24aaa0:
    if (ctx->pc == 0x24AAA0u) {
        ctx->pc = 0x24AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA9Cu;
        // 0x24aaa0: 0x24030086  addiu       $v1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAA4u;
        goto label_24aaa4;
    }
    ctx->pc = 0x24AA9Cu;
    {
        const bool branch_taken_0x24aa9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x24AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA9Cu;
        // 0x24aaa0: 0x24030086  addiu       $v1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa9c) {
            ctx->pc = 0x24AAE0u;
            goto label_24aae0;
        }
    }
    ctx->pc = 0x24AAA4u;
label_24aaa4:
    // 0x24aaa4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x24aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24aaa8:
    // 0x24aaa8: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x24aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24aaac:
    // 0x24aaac: 0xa3a40188  sb          $a0, 0x188($sp)
    ctx->pc = 0x24aaacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 4));
label_24aab0:
    // 0x24aab0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x24aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24aab4:
    // 0x24aab4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x24aab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24aab8:
    // 0x24aab8: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_24aabc:
    // 0x24aabc: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24aabcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24aac0:
    // 0x24aac0: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x24aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_24aac4:
    // 0x24aac4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x24aac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_24aac8:
    // 0x24aac8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x24aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_24aacc:
    // 0x24aacc: 0xa3a5018c  sb          $a1, 0x18C($sp)
    ctx->pc = 0x24aaccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 5));
label_24aad0:
    // 0x24aad0: 0xa0530003  sb          $s3, 0x3($v0)
    ctx->pc = 0x24aad0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
label_24aad4:
    // 0x24aad4: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x24aad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_24aad8:
    // 0x24aad8: 0x100000ef  b           . + 4 + (0xEF << 2)
label_24aadc:
    if (ctx->pc == 0x24AADCu) {
        ctx->pc = 0x24AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAD8u;
        // 0x24aadc: 0xa0440001  sb          $a0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAE0u;
        goto label_24aae0;
    }
    ctx->pc = 0x24AAD8u;
    {
        const bool branch_taken_0x24aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAD8u;
        // 0x24aadc: 0xa0440001  sb          $a0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aad8) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AAE0u;
label_24aae0:
    // 0x24aae0: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x24aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24aae4:
    // 0x24aae4: 0xa3a30188  sb          $v1, 0x188($sp)
    ctx->pc = 0x24aae4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 3));
label_24aae8:
    // 0x24aae8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x24aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_24aaec:
    // 0x24aaec: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x24aaecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_24aaf0:
    // 0x24aaf0: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x24aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_24aaf4:
    // 0x24aaf4: 0xa0530003  sb          $s3, 0x3($v0)
    ctx->pc = 0x24aaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
label_24aaf8:
    // 0x24aaf8: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x24aaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_24aafc:
    // 0x24aafc: 0xa3a0018c  sb          $zero, 0x18C($sp)
    ctx->pc = 0x24aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 0));
label_24ab00:
    // 0x24ab00: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24ab00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24ab04:
    // 0x24ab04: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x24ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_24ab08:
    // 0x24ab08: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_24ab0c:
    if (ctx->pc == 0x24AB0Cu) {
        ctx->pc = 0x24AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB08u;
        // 0x24ab0c: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB10u;
        goto label_24ab10;
    }
    ctx->pc = 0x24AB08u;
    {
        const bool branch_taken_0x24ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB08u;
        // 0x24ab0c: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab08) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AB10u;
label_24ab10:
    // 0x24ab10: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x24ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_24ab14:
    // 0x24ab14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ab14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ab18:
    // 0x24ab18: 0x0  nop
    ctx->pc = 0x24ab18u;
    // NOP
label_24ab1c:
    // 0x24ab1c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24ab1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ab20:
    // 0x24ab20: 0x0  nop
    ctx->pc = 0x24ab20u;
    // NOP
label_24ab24:
    // 0x24ab24: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_24ab28:
    if (ctx->pc == 0x24AB28u) {
        ctx->pc = 0x24AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB24u;
        // 0x24ab28: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB2Cu;
        goto label_24ab2c;
    }
    ctx->pc = 0x24AB24u;
    {
        const bool branch_taken_0x24ab24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB24u;
        // 0x24ab28: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab24) {
            ctx->pc = 0x24AB50u;
            goto label_24ab50;
        }
    }
    ctx->pc = 0x24AB2Cu;
label_24ab2c:
    // 0x24ab2c: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x24ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24ab30:
    // 0x24ab30: 0xa3a30188  sb          $v1, 0x188($sp)
    ctx->pc = 0x24ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 3));
label_24ab34:
    // 0x24ab34: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x24ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_24ab38:
    // 0x24ab38: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_24ab3c:
    // 0x24ab3c: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x24ab3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_24ab40:
    // 0x24ab40: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x24ab40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_24ab44:
    // 0x24ab44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24ab44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ab48:
    // 0x24ab48: 0x10000022  b           . + 4 + (0x22 << 2)
label_24ab4c:
    if (ctx->pc == 0x24AB4Cu) {
        ctx->pc = 0x24AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB48u;
        // 0x24ab4c: 0xa0530003  sb          $s3, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB50u;
        goto label_24ab50;
    }
    ctx->pc = 0x24AB48u;
    {
        const bool branch_taken_0x24ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB48u;
        // 0x24ab4c: 0xa0530003  sb          $s3, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab48) {
            ctx->pc = 0x24ABD4u;
            goto label_24abd4;
        }
    }
    ctx->pc = 0x24AB50u;
label_24ab50:
    // 0x24ab50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_24ab54:
    // 0x24ab54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ab54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24ab58:
    // 0x24ab58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ab58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ab5c:
    // 0x24ab5c: 0x0  nop
    ctx->pc = 0x24ab5cu;
    // NOP
label_24ab60:
    // 0x24ab60: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x24ab60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ab64:
    // 0x24ab64: 0x0  nop
    ctx->pc = 0x24ab64u;
    // NOP
label_24ab68:
    // 0x24ab68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_24ab6c:
    if (ctx->pc == 0x24AB6Cu) {
        ctx->pc = 0x24AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB68u;
        // 0x24ab6c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB70u;
        goto label_24ab70;
    }
    ctx->pc = 0x24AB68u;
    {
        const bool branch_taken_0x24ab68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB68u;
        // 0x24ab6c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab68) {
            ctx->pc = 0x24AB8Cu;
            goto label_24ab8c;
        }
    }
    ctx->pc = 0x24AB70u;
label_24ab70:
    // 0x24ab70: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x24ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24ab74:
    // 0x24ab74: 0xa3a30188  sb          $v1, 0x188($sp)
    ctx->pc = 0x24ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 3));
label_24ab78:
    // 0x24ab78: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24ab78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ab7c:
    // 0x24ab7c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x24ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_24ab80:
    // 0x24ab80: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24ab80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_24ab84:
    // 0x24ab84: 0x10000013  b           . + 4 + (0x13 << 2)
label_24ab88:
    if (ctx->pc == 0x24AB88u) {
        ctx->pc = 0x24AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB84u;
        // 0x24ab88: 0xa0530003  sb          $s3, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB8Cu;
        goto label_24ab8c;
    }
    ctx->pc = 0x24AB84u;
    {
        const bool branch_taken_0x24ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB84u;
        // 0x24ab88: 0xa0530003  sb          $s3, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab84) {
            ctx->pc = 0x24ABD4u;
            goto label_24abd4;
        }
    }
    ctx->pc = 0x24AB8Cu;
label_24ab8c:
    // 0x24ab8c: 0x3c013c59  lui         $at, 0x3C59
    ctx->pc = 0x24ab8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15449 << 16));
label_24ab90:
    // 0x24ab90: 0x3421e83e  ori         $at, $at, 0xE83E
    ctx->pc = 0x24ab90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59454);
label_24ab94:
    // 0x24ab94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ab98:
    // 0x24ab98: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x24ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_24ab9c:
    // 0x24ab9c: 0x3c0142ae  lui         $at, 0x42AE
    ctx->pc = 0x24ab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17070 << 16));
label_24aba0:
    // 0x24aba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24aba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24aba4:
    // 0x24aba4: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x24aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24aba8:
    // 0x24aba8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x24aba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_24abac:
    // 0x24abac: 0xa3a40188  sb          $a0, 0x188($sp)
    ctx->pc = 0x24abacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 4));
label_24abb0:
    // 0x24abb0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x24abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24abb4:
    // 0x24abb4: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24abb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24abb8:
    // 0x24abb8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x24abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_24abbc:
    // 0x24abbc: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x24abbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24abc0:
    // 0x24abc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24abc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24abc4:
    // 0x24abc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24abc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_24abc8:
    // 0x24abc8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24abc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_24abcc:
    // 0x24abcc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x24abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_24abd0:
    // 0x24abd0: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x24abd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24abd4:
    // 0x24abd4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24abd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24abd8:
    // 0x24abd8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24abd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24abdc:
    // 0x24abdc: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_24abe0:
    if (ctx->pc == 0x24ABE0u) {
        ctx->pc = 0x24ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABDCu;
        // 0x24abe0: 0x3c14006c  lui         $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ABE4u;
        goto label_24abe4;
    }
    ctx->pc = 0x24ABDCu;
    {
        const bool branch_taken_0x24abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABDCu;
        // 0x24abe0: 0x3c14006c  lui         $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abdc) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24ABE4u;
label_24abe4:
    // 0x24abe4: 0x8e8272d0  lw          $v0, 0x72D0($s4)
    ctx->pc = 0x24abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29392)));
label_24abe8:
    // 0x24abe8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_24abec:
    if (ctx->pc == 0x24ABECu) {
        ctx->pc = 0x24ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABE8u;
        // 0x24abec: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ABF0u;
        goto label_24abf0;
    }
    ctx->pc = 0x24ABE8u;
    {
        const bool branch_taken_0x24abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24abe8) {
            ctx->pc = 0x24ABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ABE8u;
            // 0x24abec: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC50u;
            goto label_24ac50;
        }
    }
    ctx->pc = 0x24ABF0u;
label_24abf0:
    // 0x24abf0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24abf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24abf4:
    // 0x24abf4: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x24abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
label_24abf8:
    // 0x24abf8: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x24abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_24abfc:
    // 0x24abfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24ac00:
    // 0x24ac00: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24ac00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24ac04:
    // 0x24ac04: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24ac08:
    // 0x24ac08: 0x40f809  jalr        $v0
label_24ac0c:
    if (ctx->pc == 0x24AC0Cu) {
        ctx->pc = 0x24AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC08u;
        // 0x24ac0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AC10u;
        goto label_24ac10;
    }
    ctx->pc = 0x24AC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24AC10u);
        ctx->pc = 0x24AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC08u;
        // 0x24ac0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AC08u, 0x24AC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AC10u;
label_24ac10:
    // 0x24ac10: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x24ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_24ac14:
    // 0x24ac14: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x24ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_24ac18:
    // 0x24ac18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24ac1c:
    // 0x24ac1c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24ac1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24ac20:
    // 0x24ac20: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24ac24:
    // 0x24ac24: 0x40f809  jalr        $v0
label_24ac28:
    if (ctx->pc == 0x24AC28u) {
        ctx->pc = 0x24AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC24u;
        // 0x24ac28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AC2Cu;
        goto label_24ac2c;
    }
    ctx->pc = 0x24AC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24AC2Cu);
        ctx->pc = 0x24AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC24u;
        // 0x24ac28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AC24u, 0x24AC2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AC2Cu;
label_24ac2c:
    // 0x24ac2c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x24ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_24ac30:
    // 0x24ac30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ac34:
    // 0x24ac34: 0xae8272d0  sw          $v0, 0x72D0($s4)
    ctx->pc = 0x24ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29392), GPR_U32(ctx, 2));
label_24ac38:
    // 0x24ac38: 0x262572c8  addiu       $a1, $s1, 0x72C8
    ctx->pc = 0x24ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 29384));
label_24ac3c:
    // 0x24ac3c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x24ac3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_24ac40:
    // 0x24ac40: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x24ac40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_24ac44:
    // 0x24ac44: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x24ac44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24ac48:
    // 0x24ac48: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x24ac48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24ac4c:
    // 0x24ac4c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24ac4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24ac50:
    // 0x24ac50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24ac54:
    // 0x24ac54: 0x24740538  addiu       $s4, $v1, 0x538
    ctx->pc = 0x24ac54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1336));
label_24ac58:
    // 0x24ac58: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x24ac58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24ac5c:
    // 0x24ac5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24ac60:
    // 0x24ac60: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24ac64:
    // 0x24ac64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24ac68:
    // 0x24ac68: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_24ac6c:
    if (ctx->pc == 0x24AC6Cu) {
        ctx->pc = 0x24AC70u;
        goto label_24ac70;
    }
    ctx->pc = 0x24AC68u;
    {
        const bool branch_taken_0x24ac68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac68) {
            ctx->pc = 0x24ACE4u;
            goto label_24ace4;
        }
    }
    ctx->pc = 0x24AC70u;
label_24ac70:
    // 0x24ac70: 0xc088c98  jal         func_223260
label_24ac74:
    if (ctx->pc == 0x24AC74u) {
        ctx->pc = 0x24AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC70u;
        // 0x24ac74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AC78u;
        goto label_24ac78;
    }
    ctx->pc = 0x24AC70u;
    SET_GPR_U32(ctx, 31, 0x24AC78u);
    ctx->pc = 0x24AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC70u;
    // 0x24ac74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x24AC70u, 0x24AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC78u;
label_24ac78:
    // 0x24ac78: 0x8e430650  lw          $v1, 0x650($s2)
    ctx->pc = 0x24ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
label_24ac7c:
    // 0x24ac7c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x24ac7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24ac80:
    // 0x24ac80: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_24ac84:
    if (ctx->pc == 0x24AC84u) {
        ctx->pc = 0x24AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC80u;
        // 0x24ac84: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AC88u;
        goto label_24ac88;
    }
    ctx->pc = 0x24AC80u;
    {
        const bool branch_taken_0x24ac80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC80u;
        // 0x24ac84: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac80) {
            ctx->pc = 0x24ACE4u;
            goto label_24ace4;
        }
    }
    ctx->pc = 0x24AC88u;
label_24ac88:
    // 0x24ac88: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24ac88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24ac8c:
    // 0x24ac8c: 0x26240540  addiu       $a0, $s1, 0x540
    ctx->pc = 0x24ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
label_24ac90:
    // 0x24ac90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24ac94:
    // 0x24ac94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24ac98:
    // 0x24ac98: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x24ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_24ac9c:
    // 0x24ac9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24aca0:
    // 0x24aca0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24aca4:
    // 0x24aca4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24aca8:
    // 0x24aca8: 0x825001b0  lb          $s0, 0x1B0($s2)
    ctx->pc = 0x24aca8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24acac:
    // 0x24acac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24acacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24acb0:
    // 0x24acb0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24acb4:
    // 0x24acb4: 0x40f809  jalr        $v0
label_24acb8:
    if (ctx->pc == 0x24ACB8u) {
        ctx->pc = 0x24ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACB4u;
        // 0x24acb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ACBCu;
        goto label_24acbc;
    }
    ctx->pc = 0x24ACB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24ACBCu);
        ctx->pc = 0x24ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACB4u;
        // 0x24acb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ACB4u, 0x24ACBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24ACBCu;
label_24acbc:
    // 0x24acbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x24acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_24acc0:
    // 0x24acc0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24acc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_24acc4:
    // 0x24acc4: 0x246372c8  addiu       $v1, $v1, 0x72C8
    ctx->pc = 0x24acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29384));
label_24acc8:
    // 0x24acc8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24acc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_24accc:
    // 0x24accc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24acccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24acd0:
    // 0x24acd0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24acd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24acd4:
    // 0x24acd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24acd8:
    // 0x24acd8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24acdc:
    // 0x24acdc: 0x1000000d  b           . + 4 + (0xD << 2)
label_24ace0:
    if (ctx->pc == 0x24ACE0u) {
        ctx->pc = 0x24ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACDCu;
        // 0x24ace0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ACE4u;
        goto label_24ace4;
    }
    ctx->pc = 0x24ACDCu;
    {
        const bool branch_taken_0x24acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACDCu;
        // 0x24ace0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acdc) {
            ctx->pc = 0x24AD14u;
            goto label_24ad14;
        }
    }
    ctx->pc = 0x24ACE4u;
label_24ace4:
    // 0x24ace4: 0xc088c98  jal         func_223260
label_24ace8:
    if (ctx->pc == 0x24ACE8u) {
        ctx->pc = 0x24ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACE4u;
        // 0x24ace8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ACECu;
        goto label_24acec;
    }
    ctx->pc = 0x24ACE4u;
    SET_GPR_U32(ctx, 31, 0x24ACECu);
    ctx->pc = 0x24ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ACE4u;
    // 0x24ace8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x24ACE4u, 0x24ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ACECu;
label_24acec:
    // 0x24acec: 0x8e430650  lw          $v1, 0x650($s2)
    ctx->pc = 0x24acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
label_24acf0:
    // 0x24acf0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x24acf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24acf4:
    // 0x24acf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_24acf8:
    if (ctx->pc == 0x24ACF8u) {
        ctx->pc = 0x24ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACF4u;
        // 0x24acf8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ACFCu;
        goto label_24acfc;
    }
    ctx->pc = 0x24ACF4u;
    {
        const bool branch_taken_0x24acf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACF4u;
        // 0x24acf8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acf4) {
            ctx->pc = 0x24AD14u;
            goto label_24ad14;
        }
    }
    ctx->pc = 0x24ACFCu;
label_24acfc:
    // 0x24acfc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24acfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24ad00:
    // 0x24ad00: 0x26030538  addiu       $v1, $s0, 0x538
    ctx->pc = 0x24ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1336));
label_24ad04:
    // 0x24ad04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ad08:
    // 0x24ad08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24ad0c:
    // 0x24ad0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ad10:
    // 0x24ad10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_24ad14:
    // 0x24ad14: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24ad14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24ad18:
    // 0x24ad18: 0x26350540  addiu       $s5, $s1, 0x540
    ctx->pc = 0x24ad18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
label_24ad1c:
    // 0x24ad1c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x24ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24ad20:
    // 0x24ad20: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x24ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_24ad24:
    // 0x24ad24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ad28:
    // 0x24ad28: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x24ad28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_24ad2c:
    // 0x24ad2c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_24ad30:
    if (ctx->pc == 0x24AD30u) {
        ctx->pc = 0x24AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD2Cu;
        // 0x24ad30: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AD34u;
        goto label_24ad34;
    }
    ctx->pc = 0x24AD2Cu;
    {
        const bool branch_taken_0x24ad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD2Cu;
        // 0x24ad30: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad2c) {
            ctx->pc = 0x24AE5Cu;
            goto label_24ae5c;
        }
    }
    ctx->pc = 0x24AD34u;
label_24ad34:
    // 0x24ad34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x24ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_24ad38:
    // 0x24ad38: 0x8e26b8b8  lw          $a2, -0x4748($s1)
    ctx->pc = 0x24ad38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_24ad3c:
    // 0x24ad3c: 0x245372c8  addiu       $s3, $v0, 0x72C8
    ctx->pc = 0x24ad3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 29384));
label_24ad40:
    // 0x24ad40: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x24ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_24ad44:
    // 0x24ad44: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x24ad44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_24ad48:
    // 0x24ad48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24ad4c:
    // 0x24ad4c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x24ad4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24ad50:
    // 0x24ad50: 0x8e850528  lw          $a1, 0x528($s4)
    ctx->pc = 0x24ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1320)));
label_24ad54:
    // 0x24ad54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24ad54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24ad58:
    // 0x24ad58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24ad5c:
    // 0x24ad5c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x24ad5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24ad60:
    // 0x24ad60: 0x40f809  jalr        $v0
label_24ad64:
    if (ctx->pc == 0x24AD64u) {
        ctx->pc = 0x24AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD60u;
        // 0x24ad64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AD68u;
        goto label_24ad68;
    }
    ctx->pc = 0x24AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24AD68u);
        ctx->pc = 0x24AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD60u;
        // 0x24ad64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AD60u, 0x24AD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AD68u;
label_24ad68:
    // 0x24ad68: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x24ad68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_24ad6c:
    // 0x24ad6c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_24ad70:
    if (ctx->pc == 0x24AD70u) {
        ctx->pc = 0x24AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD6Cu;
        // 0x24ad70: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AD74u;
        goto label_24ad74;
    }
    ctx->pc = 0x24AD6Cu;
    {
        const bool branch_taken_0x24ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD6Cu;
        // 0x24ad70: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad6c) {
            ctx->pc = 0x24ADD0u;
            goto label_24add0;
        }
    }
    ctx->pc = 0x24AD74u;
label_24ad74:
    // 0x24ad74: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x24ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24ad78:
    // 0x24ad78: 0xa3a30188  sb          $v1, 0x188($sp)
    ctx->pc = 0x24ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 3));
label_24ad7c:
    // 0x24ad7c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x24ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24ad80:
    // 0x24ad80: 0xa2e20003  sb          $v0, 0x3($s7)
    ctx->pc = 0x24ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
label_24ad84:
    // 0x24ad84: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x24ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24ad88:
    // 0x24ad88: 0xa2e40001  sb          $a0, 0x1($s7)
    ctx->pc = 0x24ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 4));
label_24ad8c:
    // 0x24ad8c: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x24ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_24ad90:
    // 0x24ad90: 0xa2e00002  sb          $zero, 0x2($s7)
    ctx->pc = 0x24ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 0));
label_24ad94:
    // 0x24ad94: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x24ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24ad98:
    // 0x24ad98: 0xa3a60190  sb          $a2, 0x190($sp)
    ctx->pc = 0x24ad98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 6));
label_24ad9c:
    // 0x24ad9c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x24ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24ada0:
    // 0x24ada0: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x24ada0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
label_24ada4:
    // 0x24ada4: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x24ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_24ada8:
    // 0x24ada8: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x24ada8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_24adac:
    // 0x24adac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x24adacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_24adb0:
    // 0x24adb0: 0xa3a60194  sb          $a2, 0x194($sp)
    ctx->pc = 0x24adb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 404), (uint8_t)GPR_U32(ctx, 6));
label_24adb4:
    // 0x24adb4: 0x8fbe0190  lw          $fp, 0x190($sp)
    ctx->pc = 0x24adb4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_24adb8:
    // 0x24adb8: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x24adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_24adbc:
    // 0x24adbc: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x24adbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_24adc0:
    // 0x24adc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x24adc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_24adc4:
    // 0x24adc4: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x24adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_24adc8:
    // 0x24adc8: 0x10000033  b           . + 4 + (0x33 << 2)
label_24adcc:
    if (ctx->pc == 0x24ADCCu) {
        ctx->pc = 0x24ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADC8u;
        // 0x24adcc: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ADD0u;
        goto label_24add0;
    }
    ctx->pc = 0x24ADC8u;
    {
        const bool branch_taken_0x24adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADC8u;
        // 0x24adcc: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24adc8) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24ADD0u;
label_24add0:
    // 0x24add0: 0x8e26b8b8  lw          $a2, -0x4748($s1)
    ctx->pc = 0x24add0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_24add4:
    // 0x24add4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x24add4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24add8:
    // 0x24add8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24add8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24addc:
    // 0x24addc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24addcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24ade0:
    // 0x24ade0: 0x8e830528  lw          $v1, 0x528($s4)
    ctx->pc = 0x24ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1320)));
label_24ade4:
    // 0x24ade4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x24ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_24ade8:
    // 0x24ade8: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x24ade8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_24adec:
    // 0x24adec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24adecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24adf0:
    // 0x24adf0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24adf4:
    // 0x24adf4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x24adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_24adf8:
    // 0x24adf8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x24adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_24adfc:
    // 0x24adfc: 0x40f809  jalr        $v0
label_24ae00:
    if (ctx->pc == 0x24AE00u) {
        ctx->pc = 0x24AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADFCu;
        // 0x24ae00: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE04u;
        goto label_24ae04;
    }
    ctx->pc = 0x24ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24AE04u);
        ctx->pc = 0x24AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADFCu;
        // 0x24ae00: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ADFCu, 0x24AE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AE04u;
label_24ae04:
    // 0x24ae04: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x24ae04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_24ae08:
    // 0x24ae08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24ae0c:
    if (ctx->pc == 0x24AE0Cu) {
        ctx->pc = 0x24AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE08u;
        // 0x24ae0c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE10u;
        goto label_24ae10;
    }
    ctx->pc = 0x24AE08u;
    {
        const bool branch_taken_0x24ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE08u;
        // 0x24ae0c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae08) {
            ctx->pc = 0x24AE18u;
            goto label_24ae18;
        }
    }
    ctx->pc = 0x24AE10u;
label_24ae10:
    // 0x24ae10: 0x10000021  b           . + 4 + (0x21 << 2)
label_24ae14:
    if (ctx->pc == 0x24AE14u) {
        ctx->pc = 0x24AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE10u;
        // 0x24ae14: 0xa2e20003  sb          $v0, 0x3($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE18u;
        goto label_24ae18;
    }
    ctx->pc = 0x24AE10u;
    {
        const bool branch_taken_0x24ae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE10u;
        // 0x24ae14: 0xa2e20003  sb          $v0, 0x3($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae10) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AE18u;
label_24ae18:
    // 0x24ae18: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x24ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_24ae1c:
    // 0x24ae1c: 0x825001b0  lb          $s0, 0x1B0($s2)
    ctx->pc = 0x24ae1cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24ae20:
    // 0x24ae20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24ae24:
    // 0x24ae24: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24ae24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24ae28:
    // 0x24ae28: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_24ae2c:
    // 0x24ae2c: 0x40f809  jalr        $v0
label_24ae30:
    if (ctx->pc == 0x24AE30u) {
        ctx->pc = 0x24AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE2Cu;
        // 0x24ae30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE34u;
        goto label_24ae34;
    }
    ctx->pc = 0x24AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24AE34u);
        ctx->pc = 0x24AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE2Cu;
        // 0x24ae30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE2Cu, 0x24AE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AE34u;
label_24ae34:
    // 0x24ae34: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24ae34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_24ae38:
    // 0x24ae38: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x24ae38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_24ae3c:
    // 0x24ae3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24ae40:
    // 0x24ae40: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x24ae40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_24ae44:
    // 0x24ae44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24ae48:
    // 0x24ae48: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x24ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_24ae4c:
    // 0x24ae4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ae50:
    // 0x24ae50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24ae54:
    // 0x24ae54: 0x10000010  b           . + 4 + (0x10 << 2)
label_24ae58:
    if (ctx->pc == 0x24AE58u) {
        ctx->pc = 0x24AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE54u;
        // 0x24ae58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE5Cu;
        goto label_24ae5c;
    }
    ctx->pc = 0x24AE54u;
    {
        const bool branch_taken_0x24ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE54u;
        // 0x24ae58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae54) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AE5Cu;
label_24ae5c:
    // 0x24ae5c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x24ae5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_24ae60:
    // 0x24ae60: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x24ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_24ae64:
    // 0x24ae64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24ae68:
    // 0x24ae68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24ae68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24ae6c:
    // 0x24ae6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_24ae70:
    // 0x24ae70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24ae70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_24ae74:
    // 0x24ae74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24ae78:
    if (ctx->pc == 0x24AE78u) {
        ctx->pc = 0x24AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE74u;
        // 0x24ae78: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE7Cu;
        goto label_24ae7c;
    }
    ctx->pc = 0x24AE74u;
    {
        const bool branch_taken_0x24ae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE74u;
        // 0x24ae78: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae74) {
            ctx->pc = 0x24AE98u;
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AE7Cu;
label_24ae7c:
    // 0x24ae7c: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x24ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_24ae80:
    // 0x24ae80: 0xa3a20198  sb          $v0, 0x198($sp)
    ctx->pc = 0x24ae80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 408), (uint8_t)GPR_U32(ctx, 2));
label_24ae84:
    // 0x24ae84: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x24ae84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
label_24ae88:
    // 0x24ae88: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x24ae88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_24ae8c:
    // 0x24ae8c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x24ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24ae90:
    // 0x24ae90: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x24ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_24ae94:
    // 0x24ae94: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x24ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
label_24ae98:
    // 0x24ae98: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_24ae9c:
    // 0x24ae9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ae9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24aea0:
    // 0x24aea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24aea4:
    // 0x24aea4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x24aea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_24aea8:
    // 0x24aea8: 0xc088f88  jal         func_223E20
label_24aeac:
    if (ctx->pc == 0x24AEACu) {
        ctx->pc = 0x24AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEA8u;
        // 0x24aeac: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEB0u;
        goto label_24aeb0;
    }
    ctx->pc = 0x24AEA8u;
    SET_GPR_U32(ctx, 31, 0x24AEB0u);
    ctx->pc = 0x24AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEA8u;
    // 0x24aeac: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x24AEA8u, 0x24AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEB0u;
label_24aeb0:
    // 0x24aeb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24aeb4:
    if (ctx->pc == 0x24AEB4u) {
        ctx->pc = 0x24AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB0u;
        // 0x24aeb4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEB8u;
        goto label_24aeb8;
    }
    ctx->pc = 0x24AEB0u;
    {
        const bool branch_taken_0x24aeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB0u;
        // 0x24aeb4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aeb0) {
            ctx->pc = 0x24AED0u;
            goto label_24aed0;
        }
    }
    ctx->pc = 0x24AEB8u;
label_24aeb8:
    // 0x24aeb8: 0xc107458  jal         func_41D160
label_24aebc:
    if (ctx->pc == 0x24AEBCu) {
        ctx->pc = 0x24AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB8u;
        // 0x24aebc: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEC0u;
        goto label_24aec0;
    }
    ctx->pc = 0x24AEB8u;
    SET_GPR_U32(ctx, 31, 0x24AEC0u);
    ctx->pc = 0x24AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEB8u;
    // 0x24aebc: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24AEB8u, 0x24AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEC0u;
label_24aec0:
    // 0x24aec0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_24aec4:
    if (ctx->pc == 0x24AEC4u) {
        ctx->pc = 0x24AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEC0u;
        // 0x24aec4: 0x4618a002  mul.s       $f0, $f20, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEC8u;
        goto label_24aec8;
    }
    ctx->pc = 0x24AEC0u;
    {
        const bool branch_taken_0x24aec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aec0) {
            ctx->pc = 0x24AEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AEC0u;
            // 0x24aec4: 0x4618a002  mul.s       $f0, $f20, $f24 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AED4u;
            goto label_24aed4;
        }
    }
    ctx->pc = 0x24AEC8u;
label_24aec8:
    // 0x24aec8: 0x10000002  b           . + 4 + (0x2 << 2)
label_24aecc:
    if (ctx->pc == 0x24AECCu) {
        ctx->pc = 0x24AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEC8u;
        // 0x24aecc: 0x4618d002  mul.s       $f0, $f26, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AED0u;
        goto label_24aed0;
    }
    ctx->pc = 0x24AEC8u;
    {
        const bool branch_taken_0x24aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEC8u;
        // 0x24aecc: 0x4618d002  mul.s       $f0, $f26, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aec8) {
            ctx->pc = 0x24AED4u;
            goto label_24aed4;
        }
    }
    ctx->pc = 0x24AED0u;
label_24aed0:
    // 0x24aed0: 0x4618a002  mul.s       $f0, $f20, $f24
    ctx->pc = 0x24aed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
label_24aed4:
    // 0x24aed4: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x24aed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_24aed8:
    // 0x24aed8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x24aed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24aedc:
    // 0x24aedc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24aee0:
    // 0x24aee0: 0x8fa80188  lw          $t0, 0x188($sp)
    ctx->pc = 0x24aee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_24aee4:
    // 0x24aee4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x24aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_24aee8:
    // 0x24aee8: 0x8fa7018c  lw          $a3, 0x18C($sp)
    ctx->pc = 0x24aee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_24aeec:
    // 0x24aeec: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x24aeecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24aef0:
    // 0x24aef0: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x24aef0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24aef4:
    // 0x24aef4: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x24aef4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24aef8:
    // 0x24aef8: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x24aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_24aefc:
    // 0x24aefc: 0xe7b700cc  swc1        $f23, 0xCC($sp)
    ctx->pc = 0x24aefcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_24af00:
    // 0x24af00: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x24af00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
label_24af04:
    // 0x24af04: 0xafa700e4  sw          $a3, 0xE4($sp)
    ctx->pc = 0x24af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 7));
label_24af08:
    // 0x24af08: 0xafbe00e8  sw          $fp, 0xE8($sp)
    ctx->pc = 0x24af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 30));
label_24af0c:
    // 0x24af0c: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x24af0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_24af10:
    // 0x24af10: 0x7fa50130  sq          $a1, 0x130($sp)
    ctx->pc = 0x24af10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 5));
label_24af14:
    // 0x24af14: 0x7fa60140  sq          $a2, 0x140($sp)
    ctx->pc = 0x24af14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 6));
label_24af18:
    // 0x24af18: 0xa3a2016a  sb          $v0, 0x16A($sp)
    ctx->pc = 0x24af18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 362), (uint8_t)GPR_U32(ctx, 2));
label_24af1c:
    // 0x24af1c: 0xc05ec78  jal         func_17B1E0
label_24af20:
    if (ctx->pc == 0x24AF20u) {
        ctx->pc = 0x24AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF1Cu;
        // 0x24af20: 0xe7b700c8  swc1        $f23, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF24u;
        goto label_24af24;
    }
    ctx->pc = 0x24AF1Cu;
    SET_GPR_U32(ctx, 31, 0x24AF24u);
    ctx->pc = 0x24AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF1Cu;
    // 0x24af20: 0xe7b700c8  swc1        $f23, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x24AF1Cu, 0x24AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF24u;
label_24af24:
    // 0x24af24: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x24af24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_24af28:
    // 0x24af28: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x24af28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_24af2c:
    // 0x24af2c: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x24af2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_24af30:
    // 0x24af30: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x24af30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_24af34:
    // 0x24af34: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x24af34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_24af38:
    // 0x24af38: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x24af38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_24af3c:
    // 0x24af3c: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x24af3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_24af40:
    // 0x24af40: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x24af40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_24af44:
    // 0x24af44: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x24af44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_24af48:
    // 0x24af48: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x24af48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_24af4c:
    // 0x24af4c: 0xc7bb0288  lwc1        $f27, 0x288($sp)
    ctx->pc = 0x24af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_24af50:
    // 0x24af50: 0xc7ba0280  lwc1        $f26, 0x280($sp)
    ctx->pc = 0x24af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_24af54:
    // 0x24af54: 0xc7b90278  lwc1        $f25, 0x278($sp)
    ctx->pc = 0x24af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_24af58:
    // 0x24af58: 0xc7b80270  lwc1        $f24, 0x270($sp)
    ctx->pc = 0x24af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_24af5c:
    // 0x24af5c: 0xc7b70268  lwc1        $f23, 0x268($sp)
    ctx->pc = 0x24af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_24af60:
    // 0x24af60: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x24af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24af64:
    // 0x24af64: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x24af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24af68:
    // 0x24af68: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x24af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24af6c:
    // 0x24af6c: 0x3e00008  jr          $ra
label_24af70:
    if (ctx->pc == 0x24AF70u) {
        ctx->pc = 0x24AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF6Cu;
        // 0x24af70: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF74u;
        goto label_24af74;
    }
    ctx->pc = 0x24AF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF6Cu;
        // 0x24af70: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AF74u;
label_24af74:
    // 0x24af74: 0x0  nop
    ctx->pc = 0x24af74u;
    // NOP
    ctx->pc = 0x24af78u;
}
