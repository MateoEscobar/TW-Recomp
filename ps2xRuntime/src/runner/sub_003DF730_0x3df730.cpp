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

// Function: sub_003DF730
// Address: 0x3df730 - 0x3dfcb8
void sub_003DF730_0x3df730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF730_0x3df730");
#endif

    switch (ctx->pc) {
        case 0x3df730u: goto label_3df730;
        case 0x3df734u: goto label_3df734;
        case 0x3df738u: goto label_3df738;
        case 0x3df73cu: goto label_3df73c;
        case 0x3df740u: goto label_3df740;
        case 0x3df744u: goto label_3df744;
        case 0x3df748u: goto label_3df748;
        case 0x3df74cu: goto label_3df74c;
        case 0x3df750u: goto label_3df750;
        case 0x3df754u: goto label_3df754;
        case 0x3df758u: goto label_3df758;
        case 0x3df75cu: goto label_3df75c;
        case 0x3df760u: goto label_3df760;
        case 0x3df764u: goto label_3df764;
        case 0x3df768u: goto label_3df768;
        case 0x3df76cu: goto label_3df76c;
        case 0x3df770u: goto label_3df770;
        case 0x3df774u: goto label_3df774;
        case 0x3df778u: goto label_3df778;
        case 0x3df77cu: goto label_3df77c;
        case 0x3df780u: goto label_3df780;
        case 0x3df784u: goto label_3df784;
        case 0x3df788u: goto label_3df788;
        case 0x3df78cu: goto label_3df78c;
        case 0x3df790u: goto label_3df790;
        case 0x3df794u: goto label_3df794;
        case 0x3df798u: goto label_3df798;
        case 0x3df79cu: goto label_3df79c;
        case 0x3df7a0u: goto label_3df7a0;
        case 0x3df7a4u: goto label_3df7a4;
        case 0x3df7a8u: goto label_3df7a8;
        case 0x3df7acu: goto label_3df7ac;
        case 0x3df7b0u: goto label_3df7b0;
        case 0x3df7b4u: goto label_3df7b4;
        case 0x3df7b8u: goto label_3df7b8;
        case 0x3df7bcu: goto label_3df7bc;
        case 0x3df7c0u: goto label_3df7c0;
        case 0x3df7c4u: goto label_3df7c4;
        case 0x3df7c8u: goto label_3df7c8;
        case 0x3df7ccu: goto label_3df7cc;
        case 0x3df7d0u: goto label_3df7d0;
        case 0x3df7d4u: goto label_3df7d4;
        case 0x3df7d8u: goto label_3df7d8;
        case 0x3df7dcu: goto label_3df7dc;
        case 0x3df7e0u: goto label_3df7e0;
        case 0x3df7e4u: goto label_3df7e4;
        case 0x3df7e8u: goto label_3df7e8;
        case 0x3df7ecu: goto label_3df7ec;
        case 0x3df7f0u: goto label_3df7f0;
        case 0x3df7f4u: goto label_3df7f4;
        case 0x3df7f8u: goto label_3df7f8;
        case 0x3df7fcu: goto label_3df7fc;
        case 0x3df800u: goto label_3df800;
        case 0x3df804u: goto label_3df804;
        case 0x3df808u: goto label_3df808;
        case 0x3df80cu: goto label_3df80c;
        case 0x3df810u: goto label_3df810;
        case 0x3df814u: goto label_3df814;
        case 0x3df818u: goto label_3df818;
        case 0x3df81cu: goto label_3df81c;
        case 0x3df820u: goto label_3df820;
        case 0x3df824u: goto label_3df824;
        case 0x3df828u: goto label_3df828;
        case 0x3df82cu: goto label_3df82c;
        case 0x3df830u: goto label_3df830;
        case 0x3df834u: goto label_3df834;
        case 0x3df838u: goto label_3df838;
        case 0x3df83cu: goto label_3df83c;
        case 0x3df840u: goto label_3df840;
        case 0x3df844u: goto label_3df844;
        case 0x3df848u: goto label_3df848;
        case 0x3df84cu: goto label_3df84c;
        case 0x3df850u: goto label_3df850;
        case 0x3df854u: goto label_3df854;
        case 0x3df858u: goto label_3df858;
        case 0x3df85cu: goto label_3df85c;
        case 0x3df860u: goto label_3df860;
        case 0x3df864u: goto label_3df864;
        case 0x3df868u: goto label_3df868;
        case 0x3df86cu: goto label_3df86c;
        case 0x3df870u: goto label_3df870;
        case 0x3df874u: goto label_3df874;
        case 0x3df878u: goto label_3df878;
        case 0x3df87cu: goto label_3df87c;
        case 0x3df880u: goto label_3df880;
        case 0x3df884u: goto label_3df884;
        case 0x3df888u: goto label_3df888;
        case 0x3df88cu: goto label_3df88c;
        case 0x3df890u: goto label_3df890;
        case 0x3df894u: goto label_3df894;
        case 0x3df898u: goto label_3df898;
        case 0x3df89cu: goto label_3df89c;
        case 0x3df8a0u: goto label_3df8a0;
        case 0x3df8a4u: goto label_3df8a4;
        case 0x3df8a8u: goto label_3df8a8;
        case 0x3df8acu: goto label_3df8ac;
        case 0x3df8b0u: goto label_3df8b0;
        case 0x3df8b4u: goto label_3df8b4;
        case 0x3df8b8u: goto label_3df8b8;
        case 0x3df8bcu: goto label_3df8bc;
        case 0x3df8c0u: goto label_3df8c0;
        case 0x3df8c4u: goto label_3df8c4;
        case 0x3df8c8u: goto label_3df8c8;
        case 0x3df8ccu: goto label_3df8cc;
        case 0x3df8d0u: goto label_3df8d0;
        case 0x3df8d4u: goto label_3df8d4;
        case 0x3df8d8u: goto label_3df8d8;
        case 0x3df8dcu: goto label_3df8dc;
        case 0x3df8e0u: goto label_3df8e0;
        case 0x3df8e4u: goto label_3df8e4;
        case 0x3df8e8u: goto label_3df8e8;
        case 0x3df8ecu: goto label_3df8ec;
        case 0x3df8f0u: goto label_3df8f0;
        case 0x3df8f4u: goto label_3df8f4;
        case 0x3df8f8u: goto label_3df8f8;
        case 0x3df8fcu: goto label_3df8fc;
        case 0x3df900u: goto label_3df900;
        case 0x3df904u: goto label_3df904;
        case 0x3df908u: goto label_3df908;
        case 0x3df90cu: goto label_3df90c;
        case 0x3df910u: goto label_3df910;
        case 0x3df914u: goto label_3df914;
        case 0x3df918u: goto label_3df918;
        case 0x3df91cu: goto label_3df91c;
        case 0x3df920u: goto label_3df920;
        case 0x3df924u: goto label_3df924;
        case 0x3df928u: goto label_3df928;
        case 0x3df92cu: goto label_3df92c;
        case 0x3df930u: goto label_3df930;
        case 0x3df934u: goto label_3df934;
        case 0x3df938u: goto label_3df938;
        case 0x3df93cu: goto label_3df93c;
        case 0x3df940u: goto label_3df940;
        case 0x3df944u: goto label_3df944;
        case 0x3df948u: goto label_3df948;
        case 0x3df94cu: goto label_3df94c;
        case 0x3df950u: goto label_3df950;
        case 0x3df954u: goto label_3df954;
        case 0x3df958u: goto label_3df958;
        case 0x3df95cu: goto label_3df95c;
        case 0x3df960u: goto label_3df960;
        case 0x3df964u: goto label_3df964;
        case 0x3df968u: goto label_3df968;
        case 0x3df96cu: goto label_3df96c;
        case 0x3df970u: goto label_3df970;
        case 0x3df974u: goto label_3df974;
        case 0x3df978u: goto label_3df978;
        case 0x3df97cu: goto label_3df97c;
        case 0x3df980u: goto label_3df980;
        case 0x3df984u: goto label_3df984;
        case 0x3df988u: goto label_3df988;
        case 0x3df98cu: goto label_3df98c;
        case 0x3df990u: goto label_3df990;
        case 0x3df994u: goto label_3df994;
        case 0x3df998u: goto label_3df998;
        case 0x3df99cu: goto label_3df99c;
        case 0x3df9a0u: goto label_3df9a0;
        case 0x3df9a4u: goto label_3df9a4;
        case 0x3df9a8u: goto label_3df9a8;
        case 0x3df9acu: goto label_3df9ac;
        case 0x3df9b0u: goto label_3df9b0;
        case 0x3df9b4u: goto label_3df9b4;
        case 0x3df9b8u: goto label_3df9b8;
        case 0x3df9bcu: goto label_3df9bc;
        case 0x3df9c0u: goto label_3df9c0;
        case 0x3df9c4u: goto label_3df9c4;
        case 0x3df9c8u: goto label_3df9c8;
        case 0x3df9ccu: goto label_3df9cc;
        case 0x3df9d0u: goto label_3df9d0;
        case 0x3df9d4u: goto label_3df9d4;
        case 0x3df9d8u: goto label_3df9d8;
        case 0x3df9dcu: goto label_3df9dc;
        case 0x3df9e0u: goto label_3df9e0;
        case 0x3df9e4u: goto label_3df9e4;
        case 0x3df9e8u: goto label_3df9e8;
        case 0x3df9ecu: goto label_3df9ec;
        case 0x3df9f0u: goto label_3df9f0;
        case 0x3df9f4u: goto label_3df9f4;
        case 0x3df9f8u: goto label_3df9f8;
        case 0x3df9fcu: goto label_3df9fc;
        case 0x3dfa00u: goto label_3dfa00;
        case 0x3dfa04u: goto label_3dfa04;
        case 0x3dfa08u: goto label_3dfa08;
        case 0x3dfa0cu: goto label_3dfa0c;
        case 0x3dfa10u: goto label_3dfa10;
        case 0x3dfa14u: goto label_3dfa14;
        case 0x3dfa18u: goto label_3dfa18;
        case 0x3dfa1cu: goto label_3dfa1c;
        case 0x3dfa20u: goto label_3dfa20;
        case 0x3dfa24u: goto label_3dfa24;
        case 0x3dfa28u: goto label_3dfa28;
        case 0x3dfa2cu: goto label_3dfa2c;
        case 0x3dfa30u: goto label_3dfa30;
        case 0x3dfa34u: goto label_3dfa34;
        case 0x3dfa38u: goto label_3dfa38;
        case 0x3dfa3cu: goto label_3dfa3c;
        case 0x3dfa40u: goto label_3dfa40;
        case 0x3dfa44u: goto label_3dfa44;
        case 0x3dfa48u: goto label_3dfa48;
        case 0x3dfa4cu: goto label_3dfa4c;
        case 0x3dfa50u: goto label_3dfa50;
        case 0x3dfa54u: goto label_3dfa54;
        case 0x3dfa58u: goto label_3dfa58;
        case 0x3dfa5cu: goto label_3dfa5c;
        case 0x3dfa60u: goto label_3dfa60;
        case 0x3dfa64u: goto label_3dfa64;
        case 0x3dfa68u: goto label_3dfa68;
        case 0x3dfa6cu: goto label_3dfa6c;
        case 0x3dfa70u: goto label_3dfa70;
        case 0x3dfa74u: goto label_3dfa74;
        case 0x3dfa78u: goto label_3dfa78;
        case 0x3dfa7cu: goto label_3dfa7c;
        case 0x3dfa80u: goto label_3dfa80;
        case 0x3dfa84u: goto label_3dfa84;
        case 0x3dfa88u: goto label_3dfa88;
        case 0x3dfa8cu: goto label_3dfa8c;
        case 0x3dfa90u: goto label_3dfa90;
        case 0x3dfa94u: goto label_3dfa94;
        case 0x3dfa98u: goto label_3dfa98;
        case 0x3dfa9cu: goto label_3dfa9c;
        case 0x3dfaa0u: goto label_3dfaa0;
        case 0x3dfaa4u: goto label_3dfaa4;
        case 0x3dfaa8u: goto label_3dfaa8;
        case 0x3dfaacu: goto label_3dfaac;
        case 0x3dfab0u: goto label_3dfab0;
        case 0x3dfab4u: goto label_3dfab4;
        case 0x3dfab8u: goto label_3dfab8;
        case 0x3dfabcu: goto label_3dfabc;
        case 0x3dfac0u: goto label_3dfac0;
        case 0x3dfac4u: goto label_3dfac4;
        case 0x3dfac8u: goto label_3dfac8;
        case 0x3dfaccu: goto label_3dfacc;
        case 0x3dfad0u: goto label_3dfad0;
        case 0x3dfad4u: goto label_3dfad4;
        case 0x3dfad8u: goto label_3dfad8;
        case 0x3dfadcu: goto label_3dfadc;
        case 0x3dfae0u: goto label_3dfae0;
        case 0x3dfae4u: goto label_3dfae4;
        case 0x3dfae8u: goto label_3dfae8;
        case 0x3dfaecu: goto label_3dfaec;
        case 0x3dfaf0u: goto label_3dfaf0;
        case 0x3dfaf4u: goto label_3dfaf4;
        case 0x3dfaf8u: goto label_3dfaf8;
        case 0x3dfafcu: goto label_3dfafc;
        case 0x3dfb00u: goto label_3dfb00;
        case 0x3dfb04u: goto label_3dfb04;
        case 0x3dfb08u: goto label_3dfb08;
        case 0x3dfb0cu: goto label_3dfb0c;
        case 0x3dfb10u: goto label_3dfb10;
        case 0x3dfb14u: goto label_3dfb14;
        case 0x3dfb18u: goto label_3dfb18;
        case 0x3dfb1cu: goto label_3dfb1c;
        case 0x3dfb20u: goto label_3dfb20;
        case 0x3dfb24u: goto label_3dfb24;
        case 0x3dfb28u: goto label_3dfb28;
        case 0x3dfb2cu: goto label_3dfb2c;
        case 0x3dfb30u: goto label_3dfb30;
        case 0x3dfb34u: goto label_3dfb34;
        case 0x3dfb38u: goto label_3dfb38;
        case 0x3dfb3cu: goto label_3dfb3c;
        case 0x3dfb40u: goto label_3dfb40;
        case 0x3dfb44u: goto label_3dfb44;
        case 0x3dfb48u: goto label_3dfb48;
        case 0x3dfb4cu: goto label_3dfb4c;
        case 0x3dfb50u: goto label_3dfb50;
        case 0x3dfb54u: goto label_3dfb54;
        case 0x3dfb58u: goto label_3dfb58;
        case 0x3dfb5cu: goto label_3dfb5c;
        case 0x3dfb60u: goto label_3dfb60;
        case 0x3dfb64u: goto label_3dfb64;
        case 0x3dfb68u: goto label_3dfb68;
        case 0x3dfb6cu: goto label_3dfb6c;
        case 0x3dfb70u: goto label_3dfb70;
        case 0x3dfb74u: goto label_3dfb74;
        case 0x3dfb78u: goto label_3dfb78;
        case 0x3dfb7cu: goto label_3dfb7c;
        case 0x3dfb80u: goto label_3dfb80;
        case 0x3dfb84u: goto label_3dfb84;
        case 0x3dfb88u: goto label_3dfb88;
        case 0x3dfb8cu: goto label_3dfb8c;
        case 0x3dfb90u: goto label_3dfb90;
        case 0x3dfb94u: goto label_3dfb94;
        case 0x3dfb98u: goto label_3dfb98;
        case 0x3dfb9cu: goto label_3dfb9c;
        case 0x3dfba0u: goto label_3dfba0;
        case 0x3dfba4u: goto label_3dfba4;
        case 0x3dfba8u: goto label_3dfba8;
        case 0x3dfbacu: goto label_3dfbac;
        case 0x3dfbb0u: goto label_3dfbb0;
        case 0x3dfbb4u: goto label_3dfbb4;
        case 0x3dfbb8u: goto label_3dfbb8;
        case 0x3dfbbcu: goto label_3dfbbc;
        case 0x3dfbc0u: goto label_3dfbc0;
        case 0x3dfbc4u: goto label_3dfbc4;
        case 0x3dfbc8u: goto label_3dfbc8;
        case 0x3dfbccu: goto label_3dfbcc;
        case 0x3dfbd0u: goto label_3dfbd0;
        case 0x3dfbd4u: goto label_3dfbd4;
        case 0x3dfbd8u: goto label_3dfbd8;
        case 0x3dfbdcu: goto label_3dfbdc;
        case 0x3dfbe0u: goto label_3dfbe0;
        case 0x3dfbe4u: goto label_3dfbe4;
        case 0x3dfbe8u: goto label_3dfbe8;
        case 0x3dfbecu: goto label_3dfbec;
        case 0x3dfbf0u: goto label_3dfbf0;
        case 0x3dfbf4u: goto label_3dfbf4;
        case 0x3dfbf8u: goto label_3dfbf8;
        case 0x3dfbfcu: goto label_3dfbfc;
        case 0x3dfc00u: goto label_3dfc00;
        case 0x3dfc04u: goto label_3dfc04;
        case 0x3dfc08u: goto label_3dfc08;
        case 0x3dfc0cu: goto label_3dfc0c;
        case 0x3dfc10u: goto label_3dfc10;
        case 0x3dfc14u: goto label_3dfc14;
        case 0x3dfc18u: goto label_3dfc18;
        case 0x3dfc1cu: goto label_3dfc1c;
        case 0x3dfc20u: goto label_3dfc20;
        case 0x3dfc24u: goto label_3dfc24;
        case 0x3dfc28u: goto label_3dfc28;
        case 0x3dfc2cu: goto label_3dfc2c;
        case 0x3dfc30u: goto label_3dfc30;
        case 0x3dfc34u: goto label_3dfc34;
        case 0x3dfc38u: goto label_3dfc38;
        case 0x3dfc3cu: goto label_3dfc3c;
        case 0x3dfc40u: goto label_3dfc40;
        case 0x3dfc44u: goto label_3dfc44;
        case 0x3dfc48u: goto label_3dfc48;
        case 0x3dfc4cu: goto label_3dfc4c;
        case 0x3dfc50u: goto label_3dfc50;
        case 0x3dfc54u: goto label_3dfc54;
        case 0x3dfc58u: goto label_3dfc58;
        case 0x3dfc5cu: goto label_3dfc5c;
        case 0x3dfc60u: goto label_3dfc60;
        case 0x3dfc64u: goto label_3dfc64;
        case 0x3dfc68u: goto label_3dfc68;
        case 0x3dfc6cu: goto label_3dfc6c;
        case 0x3dfc70u: goto label_3dfc70;
        case 0x3dfc74u: goto label_3dfc74;
        case 0x3dfc78u: goto label_3dfc78;
        case 0x3dfc7cu: goto label_3dfc7c;
        case 0x3dfc80u: goto label_3dfc80;
        case 0x3dfc84u: goto label_3dfc84;
        case 0x3dfc88u: goto label_3dfc88;
        case 0x3dfc8cu: goto label_3dfc8c;
        case 0x3dfc90u: goto label_3dfc90;
        case 0x3dfc94u: goto label_3dfc94;
        case 0x3dfc98u: goto label_3dfc98;
        case 0x3dfc9cu: goto label_3dfc9c;
        case 0x3dfca0u: goto label_3dfca0;
        case 0x3dfca4u: goto label_3dfca4;
        case 0x3dfca8u: goto label_3dfca8;
        case 0x3dfcacu: goto label_3dfcac;
        case 0x3dfcb0u: goto label_3dfcb0;
        case 0x3dfcb4u: goto label_3dfcb4;
        default: break;
    }

    ctx->pc = 0x3df730u;

label_3df730:
    // 0x3df730: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x3df730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_3df734:
    // 0x3df734: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x3df734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_3df738:
    // 0x3df738: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x3df738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_3df73c:
    // 0x3df73c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3df73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3df740:
    // 0x3df740: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x3df740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_3df744:
    // 0x3df744: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3df744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3df748:
    // 0x3df748: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x3df748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_3df74c:
    // 0x3df74c: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x3df74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_3df750:
    // 0x3df750: 0x7fb504b0  sq          $s5, 0x4B0($sp)
    ctx->pc = 0x3df750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 21));
label_3df754:
    // 0x3df754: 0x7fb604a0  sq          $s6, 0x4A0($sp)
    ctx->pc = 0x3df754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 22));
label_3df758:
    // 0x3df758: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x3df758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_3df75c:
    // 0x3df75c: 0xe7b70528  swc1        $f23, 0x528($sp)
    ctx->pc = 0x3df75cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_3df760:
    // 0x3df760: 0xe7b60520  swc1        $f22, 0x520($sp)
    ctx->pc = 0x3df760u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3df764:
    // 0x3df764: 0xe7b50518  swc1        $f21, 0x518($sp)
    ctx->pc = 0x3df764u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
label_3df768:
    // 0x3df768: 0xe7b40510  swc1        $f20, 0x510($sp)
    ctx->pc = 0x3df768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_3df76c:
    // 0x3df76c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3df76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3df770:
    // 0x3df770: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3df770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3df774:
    // 0x3df774: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3df774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3df778:
    // 0x3df778: 0x40f809  jalr        $v0
label_3df77c:
    if (ctx->pc == 0x3DF77Cu) {
        ctx->pc = 0x3DF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF778u;
        // 0x3df77c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF780u;
        goto label_3df780;
    }
    ctx->pc = 0x3DF778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF780u);
        ctx->pc = 0x3DF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF778u;
        // 0x3df77c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF778u, 0x3DF780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF780u;
label_3df780:
    // 0x3df780: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3df780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3df784:
    // 0x3df784: 0x1223013d  beq         $s1, $v1, . + 4 + (0x13D << 2)
label_3df788:
    if (ctx->pc == 0x3DF788u) {
        ctx->pc = 0x3DF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF784u;
        // 0x3df788: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF78Cu;
        goto label_3df78c;
    }
    ctx->pc = 0x3DF784u;
    {
        const bool branch_taken_0x3df784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF784u;
        // 0x3df788: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df784) {
            ctx->pc = 0x3DFC7Cu;
            goto label_3dfc7c;
        }
    }
    ctx->pc = 0x3DF78Cu;
label_3df78c:
    // 0x3df78c: 0x5622013c  bnel        $s1, $v0, . + 4 + (0x13C << 2)
label_3df790:
    if (ctx->pc == 0x3DF790u) {
        ctx->pc = 0x3DF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF78Cu;
        // 0x3df790: 0x7bb00500  lq          $s0, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF794u;
        goto label_3df794;
    }
    ctx->pc = 0x3DF78Cu;
    {
        const bool branch_taken_0x3df78c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df78c) {
            ctx->pc = 0x3DF790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF78Cu;
            // 0x3df790: 0x7bb00500  lq          $s0, 0x500($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFC80u;
            goto label_3dfc80;
        }
    }
    ctx->pc = 0x3DF794u;
label_3df794:
    // 0x3df794: 0xc0ea146  jal         func_3A8518
label_3df798:
    if (ctx->pc == 0x3DF798u) {
        ctx->pc = 0x3DF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF794u;
        // 0x3df798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF79Cu;
        goto label_3df79c;
    }
    ctx->pc = 0x3DF794u;
    SET_GPR_U32(ctx, 31, 0x3DF79Cu);
    ctx->pc = 0x3DF798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF794u;
    // 0x3df798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DF794u, 0x3DF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF79Cu;
label_3df79c:
    // 0x3df79c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3df79cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df7a0:
    // 0x3df7a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3df7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df7a4:
    // 0x3df7a4: 0xc0ea12a  jal         func_3A84A8
label_3df7a8:
    if (ctx->pc == 0x3DF7A8u) {
        ctx->pc = 0x3DF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7A4u;
        // 0x3df7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF7ACu;
        goto label_3df7ac;
    }
    ctx->pc = 0x3DF7A4u;
    SET_GPR_U32(ctx, 31, 0x3DF7ACu);
    ctx->pc = 0x3DF7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF7A4u;
    // 0x3df7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF7A4u, 0x3DF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF7ACu;
label_3df7ac:
    // 0x3df7ac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3df7acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df7b0:
    // 0x3df7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3df7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df7b4:
    // 0x3df7b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3df7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df7b8:
    // 0x3df7b8: 0xc0ea12a  jal         func_3A84A8
label_3df7bc:
    if (ctx->pc == 0x3DF7BCu) {
        ctx->pc = 0x3DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7B8u;
        // 0x3df7bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF7C0u;
        goto label_3df7c0;
    }
    ctx->pc = 0x3DF7B8u;
    SET_GPR_U32(ctx, 31, 0x3DF7C0u);
    ctx->pc = 0x3DF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF7B8u;
    // 0x3df7bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF7B8u, 0x3DF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF7C0u;
label_3df7c0:
    // 0x3df7c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3df7c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df7c4:
    // 0x3df7c4: 0x16a0003c  bnez        $s5, . + 4 + (0x3C << 2)
label_3df7c8:
    if (ctx->pc == 0x3DF7C8u) {
        ctx->pc = 0x3DF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7C4u;
        // 0x3df7c8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF7CCu;
        goto label_3df7cc;
    }
    ctx->pc = 0x3DF7C4u;
    {
        const bool branch_taken_0x3df7c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7C4u;
        // 0x3df7c8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7c4) {
            ctx->pc = 0x3DF8B8u;
            goto label_3df8b8;
        }
    }
    ctx->pc = 0x3DF7CCu;
label_3df7cc:
    // 0x3df7cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3df7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3df7d0:
    // 0x3df7d0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3df7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3df7d4:
    // 0x3df7d4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3df7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3df7d8:
    // 0x3df7d8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3df7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df7dc:
    // 0x3df7dc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3df7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3df7e0:
    // 0x3df7e0: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3df7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3df7e4:
    // 0x3df7e4: 0xe7b70440  swc1        $f23, 0x440($sp)
    ctx->pc = 0x3df7e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3df7e8:
    // 0x3df7e8: 0x261052f0  addiu       $s0, $s0, 0x52F0
    ctx->pc = 0x3df7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21232));
label_3df7ec:
    // 0x3df7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df7f0:
    // 0x3df7f0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3df7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3df7f4:
    // 0x3df7f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3df7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3df7f8:
    // 0x3df7f8: 0xc0e9f84  jal         func_3A7E10
label_3df7fc:
    if (ctx->pc == 0x3DF7FCu) {
        ctx->pc = 0x3DF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7F8u;
        // 0x3df7fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF800u;
        goto label_3df800;
    }
    ctx->pc = 0x3DF7F8u;
    SET_GPR_U32(ctx, 31, 0x3DF800u);
    ctx->pc = 0x3DF7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF7F8u;
    // 0x3df7fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3DF7F8u, 0x3DF800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF800u;
label_3df800:
    // 0x3df800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3df800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3df804:
    // 0x3df804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3df804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3df808:
    // 0x3df808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df80c:
    // 0x3df80c: 0xc0f15bc  jal         func_3C56F0
label_3df810:
    if (ctx->pc == 0x3DF810u) {
        ctx->pc = 0x3DF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF80Cu;
        // 0x3df810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF814u;
        goto label_3df814;
    }
    ctx->pc = 0x3DF80Cu;
    SET_GPR_U32(ctx, 31, 0x3DF814u);
    ctx->pc = 0x3DF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF80Cu;
    // 0x3df810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DF80Cu, 0x3DF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF814u;
label_3df814:
    // 0x3df814: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3df814u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3df818:
    // 0x3df818: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3df818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3df81c:
    // 0x3df81c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3df81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3df820:
    // 0x3df820: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3df820u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3df824:
    // 0x3df824: 0xc0cd518  jal         func_335460
label_3df828:
    if (ctx->pc == 0x3DF828u) {
        ctx->pc = 0x3DF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF824u;
        // 0x3df828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF82Cu;
        goto label_3df82c;
    }
    ctx->pc = 0x3DF824u;
    SET_GPR_U32(ctx, 31, 0x3DF82Cu);
    ctx->pc = 0x3DF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF824u;
    // 0x3df828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF824u, 0x3DF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF82Cu;
label_3df82c:
    // 0x3df82c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3df82cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3df830:
    // 0x3df830: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3df830u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3df834:
    // 0x3df834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df838:
    // 0x3df838: 0xc0cd518  jal         func_335460
label_3df83c:
    if (ctx->pc == 0x3DF83Cu) {
        ctx->pc = 0x3DF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF838u;
        // 0x3df83c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF840u;
        goto label_3df840;
    }
    ctx->pc = 0x3DF838u;
    SET_GPR_U32(ctx, 31, 0x3DF840u);
    ctx->pc = 0x3DF83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF838u;
    // 0x3df83c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF838u, 0x3DF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF840u;
label_3df840:
    // 0x3df840: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3df840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3df844:
    // 0x3df844: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3df844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3df848:
    // 0x3df848: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3df848u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3df84c:
    // 0x3df84c: 0xc0cd518  jal         func_335460
label_3df850:
    if (ctx->pc == 0x3DF850u) {
        ctx->pc = 0x3DF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF84Cu;
        // 0x3df850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF854u;
        goto label_3df854;
    }
    ctx->pc = 0x3DF84Cu;
    SET_GPR_U32(ctx, 31, 0x3DF854u);
    ctx->pc = 0x3DF850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF84Cu;
    // 0x3df850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF84Cu, 0x3DF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF854u;
label_3df854:
    // 0x3df854: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3df854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3df858:
    // 0x3df858: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x3df858u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3df85c:
    // 0x3df85c: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x3df85cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3df860:
    // 0x3df860: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3df860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3df864:
    // 0x3df864: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3df864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3df868:
    // 0x3df868: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3df868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3df86c:
    // 0x3df86c: 0xe477000c  swc1        $f23, 0xC($v1)
    ctx->pc = 0x3df86cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3df870:
    // 0x3df870: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3df870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df874:
    // 0x3df874: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3df874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df878:
    // 0x3df878: 0xc136b18  jal         func_4DAC60
label_3df87c:
    if (ctx->pc == 0x3DF87Cu) {
        ctx->pc = 0x3DF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF878u;
        // 0x3df87c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF880u;
        goto label_3df880;
    }
    ctx->pc = 0x3DF878u;
    SET_GPR_U32(ctx, 31, 0x3DF880u);
    ctx->pc = 0x3DF87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF878u;
    // 0x3df87c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DF878u, 0x3DF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF880u;
label_3df880:
    // 0x3df880: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3df880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df884:
    // 0x3df884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df888:
    // 0x3df888: 0x3c013ff9  lui         $at, 0x3FF9
    ctx->pc = 0x3df888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16377 << 16));
label_3df88c:
    // 0x3df88c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3df88cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3df890:
    // 0x3df890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df894:
    // 0x3df894: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3df894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3df898:
    // 0x3df898: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df89c:
    // 0x3df89c: 0xc0cd518  jal         func_335460
label_3df8a0:
    if (ctx->pc == 0x3DF8A0u) {
        ctx->pc = 0x3DF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF89Cu;
        // 0x3df8a0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF8A4u;
        goto label_3df8a4;
    }
    ctx->pc = 0x3DF89Cu;
    SET_GPR_U32(ctx, 31, 0x3DF8A4u);
    ctx->pc = 0x3DF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF89Cu;
    // 0x3df8a0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF89Cu, 0x3DF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF8A4u;
label_3df8a4:
    // 0x3df8a4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3df8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3df8a8:
    // 0x3df8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df8ac:
    // 0x3df8ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3df8acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3df8b0:
    // 0x3df8b0: 0xc0f15f6  jal         func_3C57D8
label_3df8b4:
    if (ctx->pc == 0x3DF8B4u) {
        ctx->pc = 0x3DF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8B0u;
        // 0x3df8b4: 0x34a56920  ori         $a1, $a1, 0x6920 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26912);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF8B8u;
        goto label_3df8b8;
    }
    ctx->pc = 0x3DF8B0u;
    SET_GPR_U32(ctx, 31, 0x3DF8B8u);
    ctx->pc = 0x3DF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF8B0u;
    // 0x3df8b4: 0x34a56920  ori         $a1, $a1, 0x6920 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26912);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3DF8B0u, 0x3DF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF8B8u;
label_3df8b8:
    // 0x3df8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df8bc:
    // 0x3df8bc: 0x16a2004e  bne         $s5, $v0, . + 4 + (0x4E << 2)
label_3df8c0:
    if (ctx->pc == 0x3DF8C0u) {
        ctx->pc = 0x3DF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8BCu;
        // 0x3df8c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF8C4u;
        goto label_3df8c4;
    }
    ctx->pc = 0x3DF8BCu;
    {
        const bool branch_taken_0x3df8bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8BCu;
        // 0x3df8c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8bc) {
            ctx->pc = 0x3DF9F8u;
            goto label_3df9f8;
        }
    }
    ctx->pc = 0x3DF8C4u;
label_3df8c4:
    // 0x3df8c4: 0xc0e9694  jal         func_3A5A50
label_3df8c8:
    if (ctx->pc == 0x3DF8C8u) {
        ctx->pc = 0x3DF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8C4u;
        // 0x3df8c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF8CCu;
        goto label_3df8cc;
    }
    ctx->pc = 0x3DF8C4u;
    SET_GPR_U32(ctx, 31, 0x3DF8CCu);
    ctx->pc = 0x3DF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF8C4u;
    // 0x3df8c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DF8C4u, 0x3DF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF8CCu;
label_3df8cc:
    // 0x3df8cc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3df8d0:
    if (ctx->pc == 0x3DF8D0u) {
        ctx->pc = 0x3DF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8CCu;
        // 0x3df8d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF8D4u;
        goto label_3df8d4;
    }
    ctx->pc = 0x3DF8CCu;
    {
        const bool branch_taken_0x3df8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8CCu;
        // 0x3df8d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8cc) {
            ctx->pc = 0x3DF9F8u;
            goto label_3df9f8;
        }
    }
    ctx->pc = 0x3DF8D4u;
label_3df8d4:
    // 0x3df8d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3df8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df8d8:
    // 0x3df8d8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3df8dc:
    if (ctx->pc == 0x3DF8DCu) {
        ctx->pc = 0x3DF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8D8u;
        // 0x3df8dc: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF8E0u;
        goto label_3df8e0;
    }
    ctx->pc = 0x3DF8D8u;
    {
        const bool branch_taken_0x3df8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8D8u;
        // 0x3df8dc: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8d8) {
            ctx->pc = 0x3DF9D4u;
            goto label_3df9d4;
        }
    }
    ctx->pc = 0x3DF8E0u;
label_3df8e0:
    // 0x3df8e0: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3df8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3df8e4:
    // 0x3df8e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3df8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3df8e8:
    // 0x3df8e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3df8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3df8ec:
    // 0x3df8ec: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3df8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3df8f0:
    // 0x3df8f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3df8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3df8f4:
    // 0x3df8f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3df8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3df8f8:
    // 0x3df8f8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3df8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df8fc:
    // 0x3df8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df900:
    // 0x3df900: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3df900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3df904:
    // 0x3df904: 0x26525308  addiu       $s2, $s2, 0x5308
    ctx->pc = 0x3df904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21256));
label_3df908:
    // 0x3df908: 0xc0cd518  jal         func_335460
label_3df90c:
    if (ctx->pc == 0x3DF90Cu) {
        ctx->pc = 0x3DF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF908u;
        // 0x3df90c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF910u;
        goto label_3df910;
    }
    ctx->pc = 0x3DF908u;
    SET_GPR_U32(ctx, 31, 0x3DF910u);
    ctx->pc = 0x3DF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF908u;
    // 0x3df90c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF908u, 0x3DF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF910u;
label_3df910:
    // 0x3df910: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3df910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3df914:
    // 0x3df914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df918:
    // 0x3df918: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3df918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3df91c:
    // 0x3df91c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3df91cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3df920:
    // 0x3df920: 0xc0cd518  jal         func_335460
label_3df924:
    if (ctx->pc == 0x3DF924u) {
        ctx->pc = 0x3DF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF920u;
        // 0x3df924: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF928u;
        goto label_3df928;
    }
    ctx->pc = 0x3DF920u;
    SET_GPR_U32(ctx, 31, 0x3DF928u);
    ctx->pc = 0x3DF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF920u;
    // 0x3df924: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF920u, 0x3DF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF928u;
label_3df928:
    // 0x3df928: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3df928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3df92c:
    // 0x3df92c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3df92cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3df930:
    // 0x3df930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df934:
    // 0x3df934: 0xc0cd518  jal         func_335460
label_3df938:
    if (ctx->pc == 0x3DF938u) {
        ctx->pc = 0x3DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF934u;
        // 0x3df938: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF93Cu;
        goto label_3df93c;
    }
    ctx->pc = 0x3DF934u;
    SET_GPR_U32(ctx, 31, 0x3DF93Cu);
    ctx->pc = 0x3DF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF934u;
    // 0x3df938: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF934u, 0x3DF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF93Cu;
label_3df93c:
    // 0x3df93c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3df93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3df940:
    // 0x3df940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3df940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df944:
    // 0x3df944: 0x27b00460  addiu       $s0, $sp, 0x460
    ctx->pc = 0x3df944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3df948:
    // 0x3df948: 0xe7b60460  swc1        $f22, 0x460($sp)
    ctx->pc = 0x3df948u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3df94c:
    // 0x3df94c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3df94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3df950:
    // 0x3df950: 0xe7b50464  swc1        $f21, 0x464($sp)
    ctx->pc = 0x3df950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3df954:
    // 0x3df954: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3df954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3df958:
    // 0x3df958: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3df958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3df95c:
    // 0x3df95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df960:
    // 0x3df960: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3df960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3df964:
    // 0x3df964: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3df964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3df968:
    // 0x3df968: 0xc136b18  jal         func_4DAC60
label_3df96c:
    if (ctx->pc == 0x3DF96Cu) {
        ctx->pc = 0x3DF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF968u;
        // 0x3df96c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF970u;
        goto label_3df970;
    }
    ctx->pc = 0x3DF968u;
    SET_GPR_U32(ctx, 31, 0x3DF970u);
    ctx->pc = 0x3DF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF968u;
    // 0x3df96c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DF968u, 0x3DF970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF970u;
label_3df970:
    // 0x3df970: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3df970u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3df974:
    // 0x3df974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df978:
    // 0x3df978: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3df978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df97c:
    // 0x3df97c: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3df97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3df980:
    // 0x3df980: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3df980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3df984:
    // 0x3df984: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3df984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3df988:
    // 0x3df988: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df98c:
    // 0x3df98c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3df98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3df990:
    // 0x3df990: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3df990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3df994:
    // 0x3df994: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df998:
    // 0x3df998: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3df998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3df99c:
    // 0x3df99c: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3df99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3df9a0:
    // 0x3df9a0: 0xc0cd518  jal         func_335460
label_3df9a4:
    if (ctx->pc == 0x3DF9A4u) {
        ctx->pc = 0x3DF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9A0u;
        // 0x3df9a4: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF9A8u;
        goto label_3df9a8;
    }
    ctx->pc = 0x3DF9A0u;
    SET_GPR_U32(ctx, 31, 0x3DF9A8u);
    ctx->pc = 0x3DF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF9A0u;
    // 0x3df9a4: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF9A0u, 0x3DF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF9A8u;
label_3df9a8:
    // 0x3df9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df9ac:
    // 0x3df9ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3df9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3df9b0:
    // 0x3df9b0: 0xe7a00470  swc1        $f0, 0x470($sp)
    ctx->pc = 0x3df9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3df9b4:
    // 0x3df9b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3df9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df9b8:
    // 0x3df9b8: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3df9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3df9bc:
    // 0x3df9bc: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3df9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3df9c0:
    // 0x3df9c0: 0xc0e9fd0  jal         func_3A7F40
label_3df9c4:
    if (ctx->pc == 0x3DF9C4u) {
        ctx->pc = 0x3DF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9C0u;
        // 0x3df9c4: 0x27a80480  addiu       $t0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF9C8u;
        goto label_3df9c8;
    }
    ctx->pc = 0x3DF9C0u;
    SET_GPR_U32(ctx, 31, 0x3DF9C8u);
    ctx->pc = 0x3DF9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF9C0u;
    // 0x3df9c4: 0x27a80480  addiu       $t0, $sp, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3DF9C0u, 0x3DF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF9C8u;
label_3df9c8:
    // 0x3df9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df9cc:
    // 0x3df9cc: 0xc0f15bc  jal         func_3C56F0
label_3df9d0:
    if (ctx->pc == 0x3DF9D0u) {
        ctx->pc = 0x3DF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9CCu;
        // 0x3df9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF9D4u;
        goto label_3df9d4;
    }
    ctx->pc = 0x3DF9CCu;
    SET_GPR_U32(ctx, 31, 0x3DF9D4u);
    ctx->pc = 0x3DF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF9CCu;
    // 0x3df9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DF9CCu, 0x3DF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF9D4u;
label_3df9d4:
    // 0x3df9d4: 0x26d1b8b8  addiu       $s1, $s6, -0x4748
    ctx->pc = 0x3df9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3df9d8:
    // 0x3df9d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3df9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3df9dc:
    // 0x3df9dc: 0xc0cd4ee  jal         func_3353B8
label_3df9e0:
    if (ctx->pc == 0x3DF9E0u) {
        ctx->pc = 0x3DF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9DCu;
        // 0x3df9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF9E4u;
        goto label_3df9e4;
    }
    ctx->pc = 0x3DF9DCu;
    SET_GPR_U32(ctx, 31, 0x3DF9E4u);
    ctx->pc = 0x3DF9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF9DCu;
    // 0x3df9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DF9DCu, 0x3DF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF9E4u;
label_3df9e4:
    // 0x3df9e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3df9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3df9e8:
    // 0x3df9e8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3df9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3df9ec:
    // 0x3df9ec: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_3df9f0:
    if (ctx->pc == 0x3DF9F0u) {
        ctx->pc = 0x3DF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9ECu;
        // 0x3df9f0: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF9F4u;
        goto label_3df9f4;
    }
    ctx->pc = 0x3DF9ECu;
    {
        const bool branch_taken_0x3df9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9ECu;
        // 0x3df9f0: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9ec) {
            ctx->pc = 0x3DF8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df8e0;
        }
    }
    ctx->pc = 0x3DF9F4u;
label_3df9f4:
    // 0x3df9f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3df9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3df9f8:
    // 0x3df9f8: 0x16a20051  bne         $s5, $v0, . + 4 + (0x51 << 2)
label_3df9fc:
    if (ctx->pc == 0x3DF9FCu) {
        ctx->pc = 0x3DF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9F8u;
        // 0x3df9fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA00u;
        goto label_3dfa00;
    }
    ctx->pc = 0x3DF9F8u;
    {
        const bool branch_taken_0x3df9f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9F8u;
        // 0x3df9fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9f8) {
            ctx->pc = 0x3DFB40u;
            goto label_3dfb40;
        }
    }
    ctx->pc = 0x3DFA00u;
label_3dfa00:
    // 0x3dfa00: 0xc0e9694  jal         func_3A5A50
label_3dfa04:
    if (ctx->pc == 0x3DFA04u) {
        ctx->pc = 0x3DFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA00u;
        // 0x3dfa04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA08u;
        goto label_3dfa08;
    }
    ctx->pc = 0x3DFA00u;
    SET_GPR_U32(ctx, 31, 0x3DFA08u);
    ctx->pc = 0x3DFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFA00u;
    // 0x3dfa04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DFA00u, 0x3DFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA08u;
label_3dfa08:
    // 0x3dfa08: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_3dfa0c:
    if (ctx->pc == 0x3DFA0Cu) {
        ctx->pc = 0x3DFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA08u;
        // 0x3dfa0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA10u;
        goto label_3dfa10;
    }
    ctx->pc = 0x3DFA08u;
    {
        const bool branch_taken_0x3dfa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA08u;
        // 0x3dfa0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa08) {
            ctx->pc = 0x3DFB40u;
            goto label_3dfb40;
        }
    }
    ctx->pc = 0x3DFA10u;
label_3dfa10:
    // 0x3dfa10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3dfa10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dfa14:
    // 0x3dfa14: 0x10000041  b           . + 4 + (0x41 << 2)
label_3dfa18:
    if (ctx->pc == 0x3DFA18u) {
        ctx->pc = 0x3DFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA14u;
        // 0x3dfa18: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA1Cu;
        goto label_3dfa1c;
    }
    ctx->pc = 0x3DFA14u;
    {
        const bool branch_taken_0x3dfa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA14u;
        // 0x3dfa18: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa14) {
            ctx->pc = 0x3DFB1Cu;
            goto label_3dfb1c;
        }
    }
    ctx->pc = 0x3DFA1Cu;
label_3dfa1c:
    // 0x3dfa1c: 0x0  nop
    ctx->pc = 0x3dfa1cu;
    // NOP
label_3dfa20:
    // 0x3dfa20: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x3dfa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_3dfa24:
    // 0x3dfa24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dfa24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dfa28:
    // 0x3dfa28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3dfa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3dfa2c:
    // 0x3dfa2c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3dfa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3dfa30:
    // 0x3dfa30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dfa30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dfa34:
    // 0x3dfa34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dfa34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dfa38:
    // 0x3dfa38: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3dfa38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dfa3c:
    // 0x3dfa3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfa40:
    // 0x3dfa40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3dfa40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3dfa44:
    // 0x3dfa44: 0x26525318  addiu       $s2, $s2, 0x5318
    ctx->pc = 0x3dfa44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21272));
label_3dfa48:
    // 0x3dfa48: 0xc0cd518  jal         func_335460
label_3dfa4c:
    if (ctx->pc == 0x3DFA4Cu) {
        ctx->pc = 0x3DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA48u;
        // 0x3dfa4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA50u;
        goto label_3dfa50;
    }
    ctx->pc = 0x3DFA48u;
    SET_GPR_U32(ctx, 31, 0x3DFA50u);
    ctx->pc = 0x3DFA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFA48u;
    // 0x3dfa4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DFA48u, 0x3DFA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA50u;
label_3dfa50:
    // 0x3dfa50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dfa50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dfa54:
    // 0x3dfa54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfa58:
    // 0x3dfa58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3dfa58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3dfa5c:
    // 0x3dfa5c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3dfa5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3dfa60:
    // 0x3dfa60: 0xc0cd518  jal         func_335460
label_3dfa64:
    if (ctx->pc == 0x3DFA64u) {
        ctx->pc = 0x3DFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA60u;
        // 0x3dfa64: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA68u;
        goto label_3dfa68;
    }
    ctx->pc = 0x3DFA60u;
    SET_GPR_U32(ctx, 31, 0x3DFA68u);
    ctx->pc = 0x3DFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFA60u;
    // 0x3dfa64: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DFA60u, 0x3DFA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA68u;
label_3dfa68:
    // 0x3dfa68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3dfa68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3dfa6c:
    // 0x3dfa6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3dfa6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3dfa70:
    // 0x3dfa70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfa74:
    // 0x3dfa74: 0xc0cd518  jal         func_335460
label_3dfa78:
    if (ctx->pc == 0x3DFA78u) {
        ctx->pc = 0x3DFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA74u;
        // 0x3dfa78: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFA7Cu;
        goto label_3dfa7c;
    }
    ctx->pc = 0x3DFA74u;
    SET_GPR_U32(ctx, 31, 0x3DFA7Cu);
    ctx->pc = 0x3DFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFA74u;
    // 0x3dfa78: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DFA74u, 0x3DFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA7Cu;
label_3dfa7c:
    // 0x3dfa7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dfa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dfa80:
    // 0x3dfa80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dfa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dfa84:
    // 0x3dfa84: 0x27b00460  addiu       $s0, $sp, 0x460
    ctx->pc = 0x3dfa84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3dfa88:
    // 0x3dfa88: 0xe7b60460  swc1        $f22, 0x460($sp)
    ctx->pc = 0x3dfa88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3dfa8c:
    // 0x3dfa8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3dfa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dfa90:
    // 0x3dfa90: 0xe7b50464  swc1        $f21, 0x464($sp)
    ctx->pc = 0x3dfa90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3dfa94:
    // 0x3dfa94: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3dfa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dfa98:
    // 0x3dfa98: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3dfa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3dfa9c:
    // 0x3dfa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfaa0:
    // 0x3dfaa0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3dfaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3dfaa4:
    // 0x3dfaa4: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3dfaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3dfaa8:
    // 0x3dfaa8: 0xc136b18  jal         func_4DAC60
label_3dfaac:
    if (ctx->pc == 0x3DFAACu) {
        ctx->pc = 0x3DFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFAA8u;
        // 0x3dfaac: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFAB0u;
        goto label_3dfab0;
    }
    ctx->pc = 0x3DFAA8u;
    SET_GPR_U32(ctx, 31, 0x3DFAB0u);
    ctx->pc = 0x3DFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFAA8u;
    // 0x3dfaac: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DFAA8u, 0x3DFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFAB0u;
label_3dfab0:
    // 0x3dfab0: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3dfab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3dfab4:
    // 0x3dfab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfab8:
    // 0x3dfab8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3dfab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfabc:
    // 0x3dfabc: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3dfabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dfac0:
    // 0x3dfac0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3dfac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3dfac4:
    // 0x3dfac4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3dfac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3dfac8:
    // 0x3dfac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dfac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dfacc:
    // 0x3dfacc: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3dfaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3dfad0:
    // 0x3dfad0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3dfad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3dfad4:
    // 0x3dfad4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dfad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dfad8:
    // 0x3dfad8: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3dfad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3dfadc:
    // 0x3dfadc: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3dfadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3dfae0:
    // 0x3dfae0: 0xc0cd518  jal         func_335460
label_3dfae4:
    if (ctx->pc == 0x3DFAE4u) {
        ctx->pc = 0x3DFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFAE0u;
        // 0x3dfae4: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFAE8u;
        goto label_3dfae8;
    }
    ctx->pc = 0x3DFAE0u;
    SET_GPR_U32(ctx, 31, 0x3DFAE8u);
    ctx->pc = 0x3DFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFAE0u;
    // 0x3dfae4: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DFAE0u, 0x3DFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFAE8u;
label_3dfae8:
    // 0x3dfae8: 0x3c025c0a  lui         $v0, 0x5C0A
    ctx->pc = 0x3dfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23562 << 16));
label_3dfaec:
    // 0x3dfaec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dfaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfaf0:
    // 0x3dfaf0: 0x344218ff  ori         $v0, $v0, 0x18FF
    ctx->pc = 0x3dfaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6399);
label_3dfaf4:
    // 0x3dfaf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dfaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dfaf8:
    // 0x3dfaf8: 0xe7a00470  swc1        $f0, 0x470($sp)
    ctx->pc = 0x3dfaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3dfafc:
    // 0x3dfafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3dfafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfb00:
    // 0x3dfb00: 0xafa20480  sw          $v0, 0x480($sp)
    ctx->pc = 0x3dfb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
label_3dfb04:
    // 0x3dfb04: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3dfb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3dfb08:
    // 0x3dfb08: 0xc0e9fd0  jal         func_3A7F40
label_3dfb0c:
    if (ctx->pc == 0x3DFB0Cu) {
        ctx->pc = 0x3DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB08u;
        // 0x3dfb0c: 0x27a80480  addiu       $t0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB10u;
        goto label_3dfb10;
    }
    ctx->pc = 0x3DFB08u;
    SET_GPR_U32(ctx, 31, 0x3DFB10u);
    ctx->pc = 0x3DFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFB08u;
    // 0x3dfb0c: 0x27a80480  addiu       $t0, $sp, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3DFB08u, 0x3DFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFB10u;
label_3dfb10:
    // 0x3dfb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dfb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dfb14:
    // 0x3dfb14: 0xc0f15bc  jal         func_3C56F0
label_3dfb18:
    if (ctx->pc == 0x3DFB18u) {
        ctx->pc = 0x3DFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB14u;
        // 0x3dfb18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB1Cu;
        goto label_3dfb1c;
    }
    ctx->pc = 0x3DFB14u;
    SET_GPR_U32(ctx, 31, 0x3DFB1Cu);
    ctx->pc = 0x3DFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFB14u;
    // 0x3dfb18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DFB14u, 0x3DFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFB1Cu;
label_3dfb1c:
    // 0x3dfb1c: 0x26d1b8b8  addiu       $s1, $s6, -0x4748
    ctx->pc = 0x3dfb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3dfb20:
    // 0x3dfb20: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3dfb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3dfb24:
    // 0x3dfb24: 0xc0cd4ee  jal         func_3353B8
label_3dfb28:
    if (ctx->pc == 0x3DFB28u) {
        ctx->pc = 0x3DFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB24u;
        // 0x3dfb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB2Cu;
        goto label_3dfb2c;
    }
    ctx->pc = 0x3DFB24u;
    SET_GPR_U32(ctx, 31, 0x3DFB2Cu);
    ctx->pc = 0x3DFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFB24u;
    // 0x3dfb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DFB24u, 0x3DFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFB2Cu;
label_3dfb2c:
    // 0x3dfb2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3dfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3dfb30:
    // 0x3dfb30: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3dfb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3dfb34:
    // 0x3dfb34: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_3dfb38:
    if (ctx->pc == 0x3DFB38u) {
        ctx->pc = 0x3DFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB34u;
        // 0x3dfb38: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB3Cu;
        goto label_3dfb3c;
    }
    ctx->pc = 0x3DFB34u;
    {
        const bool branch_taken_0x3dfb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB34u;
        // 0x3dfb38: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb34) {
            ctx->pc = 0x3DFA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dfa20;
        }
    }
    ctx->pc = 0x3DFB3Cu;
label_3dfb3c:
    // 0x3dfb3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3dfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dfb40:
    // 0x3dfb40: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
label_3dfb44:
    if (ctx->pc == 0x3DFB44u) {
        ctx->pc = 0x3DFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB40u;
        // 0x3dfb44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB48u;
        goto label_3dfb48;
    }
    ctx->pc = 0x3DFB40u;
    {
        const bool branch_taken_0x3dfb40 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB40u;
        // 0x3dfb44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb40) {
            ctx->pc = 0x3DFB78u;
            goto label_3dfb78;
        }
    }
    ctx->pc = 0x3DFB48u;
label_3dfb48:
    // 0x3dfb48: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3dfb48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfb4c:
    // 0x3dfb4c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3dfb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dfb50:
    // 0x3dfb50: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dfb50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dfb54:
    // 0x3dfb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfb58:
    // 0x3dfb58: 0x261052c0  addiu       $s0, $s0, 0x52C0
    ctx->pc = 0x3dfb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21184));
label_3dfb5c:
    // 0x3dfb5c: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3dfb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dfb60:
    // 0x3dfb60: 0xc0e9f6a  jal         func_3A7DA8
label_3dfb64:
    if (ctx->pc == 0x3DFB64u) {
        ctx->pc = 0x3DFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB60u;
        // 0x3dfb64: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB68u;
        goto label_3dfb68;
    }
    ctx->pc = 0x3DFB60u;
    SET_GPR_U32(ctx, 31, 0x3DFB68u);
    ctx->pc = 0x3DFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFB60u;
    // 0x3dfb64: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3DFB60u, 0x3DFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFB68u;
label_3dfb68:
    // 0x3dfb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfb6c:
    // 0x3dfb6c: 0xc0f15bc  jal         func_3C56F0
label_3dfb70:
    if (ctx->pc == 0x3DFB70u) {
        ctx->pc = 0x3DFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB6Cu;
        // 0x3dfb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB74u;
        goto label_3dfb74;
    }
    ctx->pc = 0x3DFB6Cu;
    SET_GPR_U32(ctx, 31, 0x3DFB74u);
    ctx->pc = 0x3DFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFB6Cu;
    // 0x3dfb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DFB6Cu, 0x3DFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFB74u;
label_3dfb74:
    // 0x3dfb74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dfb78:
    // 0x3dfb78: 0x16a20019  bne         $s5, $v0, . + 4 + (0x19 << 2)
label_3dfb7c:
    if (ctx->pc == 0x3DFB7Cu) {
        ctx->pc = 0x3DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB78u;
        // 0x3dfb7c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFB80u;
        goto label_3dfb80;
    }
    ctx->pc = 0x3DFB78u;
    {
        const bool branch_taken_0x3dfb78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB78u;
        // 0x3dfb7c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb78) {
            ctx->pc = 0x3DFBE0u;
            goto label_3dfbe0;
        }
    }
    ctx->pc = 0x3DFB80u;
label_3dfb80:
    // 0x3dfb80: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3dfb80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfb84:
    // 0x3dfb84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3dfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3dfb88:
    // 0x3dfb88: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3dfb88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfb8c:
    // 0x3dfb8c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3dfb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dfb90:
    // 0x3dfb90: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3dfb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3dfb94:
    // 0x3dfb94: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3dfb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3dfb98:
    // 0x3dfb98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dfb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfb9c:
    // 0x3dfb9c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3dfb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3dfba0:
    // 0x3dfba0: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x3dfba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_3dfba4:
    // 0x3dfba4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dfba4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dfba8:
    // 0x3dfba8: 0x26104a98  addiu       $s0, $s0, 0x4A98
    ctx->pc = 0x3dfba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19096));
label_3dfbac:
    // 0x3dfbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbb0:
    // 0x3dfbb0: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3dfbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dfbb4:
    // 0x3dfbb4: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3dfbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3dfbb8:
    // 0x3dfbb8: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3dfbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3dfbbc:
    // 0x3dfbbc: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3dfbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dfbc0:
    // 0x3dfbc0: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x3dfbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
label_3dfbc4:
    // 0x3dfbc4: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3dfbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dfbc8:
    // 0x3dfbc8: 0xc0e9fd0  jal         func_3A7F40
label_3dfbcc:
    if (ctx->pc == 0x3DFBCCu) {
        ctx->pc = 0x3DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBC8u;
        // 0x3dfbcc: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFBD0u;
        goto label_3dfbd0;
    }
    ctx->pc = 0x3DFBC8u;
    SET_GPR_U32(ctx, 31, 0x3DFBD0u);
    ctx->pc = 0x3DFBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFBC8u;
    // 0x3dfbcc: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3DFBC8u, 0x3DFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFBD0u;
label_3dfbd0:
    // 0x3dfbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbd4:
    // 0x3dfbd4: 0xc0f15bc  jal         func_3C56F0
label_3dfbd8:
    if (ctx->pc == 0x3DFBD8u) {
        ctx->pc = 0x3DFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBD4u;
        // 0x3dfbd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFBDCu;
        goto label_3dfbdc;
    }
    ctx->pc = 0x3DFBD4u;
    SET_GPR_U32(ctx, 31, 0x3DFBDCu);
    ctx->pc = 0x3DFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFBD4u;
    // 0x3dfbd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DFBD4u, 0x3DFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFBDCu;
label_3dfbdc:
    // 0x3dfbdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3dfbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dfbe0:
    // 0x3dfbe0: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
label_3dfbe4:
    if (ctx->pc == 0x3DFBE4u) {
        ctx->pc = 0x3DFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBE0u;
        // 0x3dfbe4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFBE8u;
        goto label_3dfbe8;
    }
    ctx->pc = 0x3DFBE0u;
    {
        const bool branch_taken_0x3dfbe0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBE0u;
        // 0x3dfbe4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbe0) {
            ctx->pc = 0x3DFC18u;
            goto label_3dfc18;
        }
    }
    ctx->pc = 0x3DFBE8u;
label_3dfbe8:
    // 0x3dfbe8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3dfbe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfbec:
    // 0x3dfbec: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3dfbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dfbf0:
    // 0x3dfbf0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dfbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dfbf4:
    // 0x3dfbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbf8:
    // 0x3dfbf8: 0x26105330  addiu       $s0, $s0, 0x5330
    ctx->pc = 0x3dfbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21296));
label_3dfbfc:
    // 0x3dfbfc: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3dfbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dfc00:
    // 0x3dfc00: 0xc0e9f6a  jal         func_3A7DA8
label_3dfc04:
    if (ctx->pc == 0x3DFC04u) {
        ctx->pc = 0x3DFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC00u;
        // 0x3dfc04: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFC08u;
        goto label_3dfc08;
    }
    ctx->pc = 0x3DFC00u;
    SET_GPR_U32(ctx, 31, 0x3DFC08u);
    ctx->pc = 0x3DFC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC00u;
    // 0x3dfc04: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3DFC00u, 0x3DFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC08u;
label_3dfc08:
    // 0x3dfc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfc0c:
    // 0x3dfc0c: 0xc0f15bc  jal         func_3C56F0
label_3dfc10:
    if (ctx->pc == 0x3DFC10u) {
        ctx->pc = 0x3DFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC0Cu;
        // 0x3dfc10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFC14u;
        goto label_3dfc14;
    }
    ctx->pc = 0x3DFC0Cu;
    SET_GPR_U32(ctx, 31, 0x3DFC14u);
    ctx->pc = 0x3DFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC0Cu;
    // 0x3dfc10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DFC0Cu, 0x3DFC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC14u;
label_3dfc14:
    // 0x3dfc14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3dfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3dfc18:
    // 0x3dfc18: 0x16a20019  bne         $s5, $v0, . + 4 + (0x19 << 2)
label_3dfc1c:
    if (ctx->pc == 0x3DFC1Cu) {
        ctx->pc = 0x3DFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC18u;
        // 0x3dfc1c: 0x7bb00500  lq          $s0, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFC20u;
        goto label_3dfc20;
    }
    ctx->pc = 0x3DFC18u;
    {
        const bool branch_taken_0x3dfc18 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC18u;
        // 0x3dfc1c: 0x7bb00500  lq          $s0, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc18) {
            ctx->pc = 0x3DFC80u;
            goto label_3dfc80;
        }
    }
    ctx->pc = 0x3DFC20u;
label_3dfc20:
    // 0x3dfc20: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3dfc20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfc24:
    // 0x3dfc24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3dfc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3dfc28:
    // 0x3dfc28: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3dfc28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfc2c:
    // 0x3dfc2c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3dfc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dfc30:
    // 0x3dfc30: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x3dfc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_3dfc34:
    // 0x3dfc34: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3dfc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3dfc38:
    // 0x3dfc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dfc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfc3c:
    // 0x3dfc3c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3dfc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3dfc40:
    // 0x3dfc40: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x3dfc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_3dfc44:
    // 0x3dfc44: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dfc44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dfc48:
    // 0x3dfc48: 0x26104a98  addiu       $s0, $s0, 0x4A98
    ctx->pc = 0x3dfc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19096));
label_3dfc4c:
    // 0x3dfc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dfc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfc50:
    // 0x3dfc50: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3dfc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dfc54:
    // 0x3dfc54: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3dfc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3dfc58:
    // 0x3dfc58: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3dfc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3dfc5c:
    // 0x3dfc5c: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3dfc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dfc60:
    // 0x3dfc60: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x3dfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
label_3dfc64:
    // 0x3dfc64: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3dfc64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dfc68:
    // 0x3dfc68: 0xc0e9fd0  jal         func_3A7F40
label_3dfc6c:
    if (ctx->pc == 0x3DFC6Cu) {
        ctx->pc = 0x3DFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC68u;
        // 0x3dfc6c: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFC70u;
        goto label_3dfc70;
    }
    ctx->pc = 0x3DFC68u;
    SET_GPR_U32(ctx, 31, 0x3DFC70u);
    ctx->pc = 0x3DFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC68u;
    // 0x3dfc6c: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3DFC68u, 0x3DFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC70u;
label_3dfc70:
    // 0x3dfc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfc74:
    // 0x3dfc74: 0xc0f15bc  jal         func_3C56F0
label_3dfc78:
    if (ctx->pc == 0x3DFC78u) {
        ctx->pc = 0x3DFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC74u;
        // 0x3dfc78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFC7Cu;
        goto label_3dfc7c;
    }
    ctx->pc = 0x3DFC74u;
    SET_GPR_U32(ctx, 31, 0x3DFC7Cu);
    ctx->pc = 0x3DFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC74u;
    // 0x3dfc78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DFC74u, 0x3DFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC7Cu;
label_3dfc7c:
    // 0x3dfc7c: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x3dfc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3dfc80:
    // 0x3dfc80: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x3dfc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3dfc84:
    // 0x3dfc84: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x3dfc84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3dfc88:
    // 0x3dfc88: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x3dfc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3dfc8c:
    // 0x3dfc8c: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x3dfc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3dfc90:
    // 0x3dfc90: 0x7bb504b0  lq          $s5, 0x4B0($sp)
    ctx->pc = 0x3dfc90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3dfc94:
    // 0x3dfc94: 0x7bb604a0  lq          $s6, 0x4A0($sp)
    ctx->pc = 0x3dfc94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3dfc98:
    // 0x3dfc98: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x3dfc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_3dfc9c:
    // 0x3dfc9c: 0xc7b70528  lwc1        $f23, 0x528($sp)
    ctx->pc = 0x3dfc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3dfca0:
    // 0x3dfca0: 0xc7b60520  lwc1        $f22, 0x520($sp)
    ctx->pc = 0x3dfca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3dfca4:
    // 0x3dfca4: 0xc7b50518  lwc1        $f21, 0x518($sp)
    ctx->pc = 0x3dfca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3dfca8:
    // 0x3dfca8: 0xc7b40510  lwc1        $f20, 0x510($sp)
    ctx->pc = 0x3dfca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dfcac:
    // 0x3dfcac: 0x3e00008  jr          $ra
label_3dfcb0:
    if (ctx->pc == 0x3DFCB0u) {
        ctx->pc = 0x3DFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCACu;
        // 0x3dfcb0: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFCB4u;
        goto label_3dfcb4;
    }
    ctx->pc = 0x3DFCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCACu;
        // 0x3dfcb0: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFCB4u;
label_3dfcb4:
    // 0x3dfcb4: 0x0  nop
    ctx->pc = 0x3dfcb4u;
    // NOP
    ctx->pc = 0x3dfcb8u;
}
