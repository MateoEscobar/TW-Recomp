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

// Function: sub_001DF700
// Address: 0x1df700 - 0x1dfc08
void sub_001DF700_0x1df700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF700_0x1df700");
#endif

    switch (ctx->pc) {
        case 0x1df700u: goto label_1df700;
        case 0x1df704u: goto label_1df704;
        case 0x1df708u: goto label_1df708;
        case 0x1df70cu: goto label_1df70c;
        case 0x1df710u: goto label_1df710;
        case 0x1df714u: goto label_1df714;
        case 0x1df718u: goto label_1df718;
        case 0x1df71cu: goto label_1df71c;
        case 0x1df720u: goto label_1df720;
        case 0x1df724u: goto label_1df724;
        case 0x1df728u: goto label_1df728;
        case 0x1df72cu: goto label_1df72c;
        case 0x1df730u: goto label_1df730;
        case 0x1df734u: goto label_1df734;
        case 0x1df738u: goto label_1df738;
        case 0x1df73cu: goto label_1df73c;
        case 0x1df740u: goto label_1df740;
        case 0x1df744u: goto label_1df744;
        case 0x1df748u: goto label_1df748;
        case 0x1df74cu: goto label_1df74c;
        case 0x1df750u: goto label_1df750;
        case 0x1df754u: goto label_1df754;
        case 0x1df758u: goto label_1df758;
        case 0x1df75cu: goto label_1df75c;
        case 0x1df760u: goto label_1df760;
        case 0x1df764u: goto label_1df764;
        case 0x1df768u: goto label_1df768;
        case 0x1df76cu: goto label_1df76c;
        case 0x1df770u: goto label_1df770;
        case 0x1df774u: goto label_1df774;
        case 0x1df778u: goto label_1df778;
        case 0x1df77cu: goto label_1df77c;
        case 0x1df780u: goto label_1df780;
        case 0x1df784u: goto label_1df784;
        case 0x1df788u: goto label_1df788;
        case 0x1df78cu: goto label_1df78c;
        case 0x1df790u: goto label_1df790;
        case 0x1df794u: goto label_1df794;
        case 0x1df798u: goto label_1df798;
        case 0x1df79cu: goto label_1df79c;
        case 0x1df7a0u: goto label_1df7a0;
        case 0x1df7a4u: goto label_1df7a4;
        case 0x1df7a8u: goto label_1df7a8;
        case 0x1df7acu: goto label_1df7ac;
        case 0x1df7b0u: goto label_1df7b0;
        case 0x1df7b4u: goto label_1df7b4;
        case 0x1df7b8u: goto label_1df7b8;
        case 0x1df7bcu: goto label_1df7bc;
        case 0x1df7c0u: goto label_1df7c0;
        case 0x1df7c4u: goto label_1df7c4;
        case 0x1df7c8u: goto label_1df7c8;
        case 0x1df7ccu: goto label_1df7cc;
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7d4u: goto label_1df7d4;
        case 0x1df7d8u: goto label_1df7d8;
        case 0x1df7dcu: goto label_1df7dc;
        case 0x1df7e0u: goto label_1df7e0;
        case 0x1df7e4u: goto label_1df7e4;
        case 0x1df7e8u: goto label_1df7e8;
        case 0x1df7ecu: goto label_1df7ec;
        case 0x1df7f0u: goto label_1df7f0;
        case 0x1df7f4u: goto label_1df7f4;
        case 0x1df7f8u: goto label_1df7f8;
        case 0x1df7fcu: goto label_1df7fc;
        case 0x1df800u: goto label_1df800;
        case 0x1df804u: goto label_1df804;
        case 0x1df808u: goto label_1df808;
        case 0x1df80cu: goto label_1df80c;
        case 0x1df810u: goto label_1df810;
        case 0x1df814u: goto label_1df814;
        case 0x1df818u: goto label_1df818;
        case 0x1df81cu: goto label_1df81c;
        case 0x1df820u: goto label_1df820;
        case 0x1df824u: goto label_1df824;
        case 0x1df828u: goto label_1df828;
        case 0x1df82cu: goto label_1df82c;
        case 0x1df830u: goto label_1df830;
        case 0x1df834u: goto label_1df834;
        case 0x1df838u: goto label_1df838;
        case 0x1df83cu: goto label_1df83c;
        case 0x1df840u: goto label_1df840;
        case 0x1df844u: goto label_1df844;
        case 0x1df848u: goto label_1df848;
        case 0x1df84cu: goto label_1df84c;
        case 0x1df850u: goto label_1df850;
        case 0x1df854u: goto label_1df854;
        case 0x1df858u: goto label_1df858;
        case 0x1df85cu: goto label_1df85c;
        case 0x1df860u: goto label_1df860;
        case 0x1df864u: goto label_1df864;
        case 0x1df868u: goto label_1df868;
        case 0x1df86cu: goto label_1df86c;
        case 0x1df870u: goto label_1df870;
        case 0x1df874u: goto label_1df874;
        case 0x1df878u: goto label_1df878;
        case 0x1df87cu: goto label_1df87c;
        case 0x1df880u: goto label_1df880;
        case 0x1df884u: goto label_1df884;
        case 0x1df888u: goto label_1df888;
        case 0x1df88cu: goto label_1df88c;
        case 0x1df890u: goto label_1df890;
        case 0x1df894u: goto label_1df894;
        case 0x1df898u: goto label_1df898;
        case 0x1df89cu: goto label_1df89c;
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8a4u: goto label_1df8a4;
        case 0x1df8a8u: goto label_1df8a8;
        case 0x1df8acu: goto label_1df8ac;
        case 0x1df8b0u: goto label_1df8b0;
        case 0x1df8b4u: goto label_1df8b4;
        case 0x1df8b8u: goto label_1df8b8;
        case 0x1df8bcu: goto label_1df8bc;
        case 0x1df8c0u: goto label_1df8c0;
        case 0x1df8c4u: goto label_1df8c4;
        case 0x1df8c8u: goto label_1df8c8;
        case 0x1df8ccu: goto label_1df8cc;
        case 0x1df8d0u: goto label_1df8d0;
        case 0x1df8d4u: goto label_1df8d4;
        case 0x1df8d8u: goto label_1df8d8;
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df8e0u: goto label_1df8e0;
        case 0x1df8e4u: goto label_1df8e4;
        case 0x1df8e8u: goto label_1df8e8;
        case 0x1df8ecu: goto label_1df8ec;
        case 0x1df8f0u: goto label_1df8f0;
        case 0x1df8f4u: goto label_1df8f4;
        case 0x1df8f8u: goto label_1df8f8;
        case 0x1df8fcu: goto label_1df8fc;
        case 0x1df900u: goto label_1df900;
        case 0x1df904u: goto label_1df904;
        case 0x1df908u: goto label_1df908;
        case 0x1df90cu: goto label_1df90c;
        case 0x1df910u: goto label_1df910;
        case 0x1df914u: goto label_1df914;
        case 0x1df918u: goto label_1df918;
        case 0x1df91cu: goto label_1df91c;
        case 0x1df920u: goto label_1df920;
        case 0x1df924u: goto label_1df924;
        case 0x1df928u: goto label_1df928;
        case 0x1df92cu: goto label_1df92c;
        case 0x1df930u: goto label_1df930;
        case 0x1df934u: goto label_1df934;
        case 0x1df938u: goto label_1df938;
        case 0x1df93cu: goto label_1df93c;
        case 0x1df940u: goto label_1df940;
        case 0x1df944u: goto label_1df944;
        case 0x1df948u: goto label_1df948;
        case 0x1df94cu: goto label_1df94c;
        case 0x1df950u: goto label_1df950;
        case 0x1df954u: goto label_1df954;
        case 0x1df958u: goto label_1df958;
        case 0x1df95cu: goto label_1df95c;
        case 0x1df960u: goto label_1df960;
        case 0x1df964u: goto label_1df964;
        case 0x1df968u: goto label_1df968;
        case 0x1df96cu: goto label_1df96c;
        case 0x1df970u: goto label_1df970;
        case 0x1df974u: goto label_1df974;
        case 0x1df978u: goto label_1df978;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df980u: goto label_1df980;
        case 0x1df984u: goto label_1df984;
        case 0x1df988u: goto label_1df988;
        case 0x1df98cu: goto label_1df98c;
        case 0x1df990u: goto label_1df990;
        case 0x1df994u: goto label_1df994;
        case 0x1df998u: goto label_1df998;
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9a0u: goto label_1df9a0;
        case 0x1df9a4u: goto label_1df9a4;
        case 0x1df9a8u: goto label_1df9a8;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9b0u: goto label_1df9b0;
        case 0x1df9b4u: goto label_1df9b4;
        case 0x1df9b8u: goto label_1df9b8;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9c0u: goto label_1df9c0;
        case 0x1df9c4u: goto label_1df9c4;
        case 0x1df9c8u: goto label_1df9c8;
        case 0x1df9ccu: goto label_1df9cc;
        case 0x1df9d0u: goto label_1df9d0;
        case 0x1df9d4u: goto label_1df9d4;
        case 0x1df9d8u: goto label_1df9d8;
        case 0x1df9dcu: goto label_1df9dc;
        case 0x1df9e0u: goto label_1df9e0;
        case 0x1df9e4u: goto label_1df9e4;
        case 0x1df9e8u: goto label_1df9e8;
        case 0x1df9ecu: goto label_1df9ec;
        case 0x1df9f0u: goto label_1df9f0;
        case 0x1df9f4u: goto label_1df9f4;
        case 0x1df9f8u: goto label_1df9f8;
        case 0x1df9fcu: goto label_1df9fc;
        case 0x1dfa00u: goto label_1dfa00;
        case 0x1dfa04u: goto label_1dfa04;
        case 0x1dfa08u: goto label_1dfa08;
        case 0x1dfa0cu: goto label_1dfa0c;
        case 0x1dfa10u: goto label_1dfa10;
        case 0x1dfa14u: goto label_1dfa14;
        case 0x1dfa18u: goto label_1dfa18;
        case 0x1dfa1cu: goto label_1dfa1c;
        case 0x1dfa20u: goto label_1dfa20;
        case 0x1dfa24u: goto label_1dfa24;
        case 0x1dfa28u: goto label_1dfa28;
        case 0x1dfa2cu: goto label_1dfa2c;
        case 0x1dfa30u: goto label_1dfa30;
        case 0x1dfa34u: goto label_1dfa34;
        case 0x1dfa38u: goto label_1dfa38;
        case 0x1dfa3cu: goto label_1dfa3c;
        case 0x1dfa40u: goto label_1dfa40;
        case 0x1dfa44u: goto label_1dfa44;
        case 0x1dfa48u: goto label_1dfa48;
        case 0x1dfa4cu: goto label_1dfa4c;
        case 0x1dfa50u: goto label_1dfa50;
        case 0x1dfa54u: goto label_1dfa54;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa5cu: goto label_1dfa5c;
        case 0x1dfa60u: goto label_1dfa60;
        case 0x1dfa64u: goto label_1dfa64;
        case 0x1dfa68u: goto label_1dfa68;
        case 0x1dfa6cu: goto label_1dfa6c;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfa74u: goto label_1dfa74;
        case 0x1dfa78u: goto label_1dfa78;
        case 0x1dfa7cu: goto label_1dfa7c;
        case 0x1dfa80u: goto label_1dfa80;
        case 0x1dfa84u: goto label_1dfa84;
        case 0x1dfa88u: goto label_1dfa88;
        case 0x1dfa8cu: goto label_1dfa8c;
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfa94u: goto label_1dfa94;
        case 0x1dfa98u: goto label_1dfa98;
        case 0x1dfa9cu: goto label_1dfa9c;
        case 0x1dfaa0u: goto label_1dfaa0;
        case 0x1dfaa4u: goto label_1dfaa4;
        case 0x1dfaa8u: goto label_1dfaa8;
        case 0x1dfaacu: goto label_1dfaac;
        case 0x1dfab0u: goto label_1dfab0;
        case 0x1dfab4u: goto label_1dfab4;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfabcu: goto label_1dfabc;
        case 0x1dfac0u: goto label_1dfac0;
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfac8u: goto label_1dfac8;
        case 0x1dfaccu: goto label_1dfacc;
        case 0x1dfad0u: goto label_1dfad0;
        case 0x1dfad4u: goto label_1dfad4;
        case 0x1dfad8u: goto label_1dfad8;
        case 0x1dfadcu: goto label_1dfadc;
        case 0x1dfae0u: goto label_1dfae0;
        case 0x1dfae4u: goto label_1dfae4;
        case 0x1dfae8u: goto label_1dfae8;
        case 0x1dfaecu: goto label_1dfaec;
        case 0x1dfaf0u: goto label_1dfaf0;
        case 0x1dfaf4u: goto label_1dfaf4;
        case 0x1dfaf8u: goto label_1dfaf8;
        case 0x1dfafcu: goto label_1dfafc;
        case 0x1dfb00u: goto label_1dfb00;
        case 0x1dfb04u: goto label_1dfb04;
        case 0x1dfb08u: goto label_1dfb08;
        case 0x1dfb0cu: goto label_1dfb0c;
        case 0x1dfb10u: goto label_1dfb10;
        case 0x1dfb14u: goto label_1dfb14;
        case 0x1dfb18u: goto label_1dfb18;
        case 0x1dfb1cu: goto label_1dfb1c;
        case 0x1dfb20u: goto label_1dfb20;
        case 0x1dfb24u: goto label_1dfb24;
        case 0x1dfb28u: goto label_1dfb28;
        case 0x1dfb2cu: goto label_1dfb2c;
        case 0x1dfb30u: goto label_1dfb30;
        case 0x1dfb34u: goto label_1dfb34;
        case 0x1dfb38u: goto label_1dfb38;
        case 0x1dfb3cu: goto label_1dfb3c;
        case 0x1dfb40u: goto label_1dfb40;
        case 0x1dfb44u: goto label_1dfb44;
        case 0x1dfb48u: goto label_1dfb48;
        case 0x1dfb4cu: goto label_1dfb4c;
        case 0x1dfb50u: goto label_1dfb50;
        case 0x1dfb54u: goto label_1dfb54;
        case 0x1dfb58u: goto label_1dfb58;
        case 0x1dfb5cu: goto label_1dfb5c;
        case 0x1dfb60u: goto label_1dfb60;
        case 0x1dfb64u: goto label_1dfb64;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfb6cu: goto label_1dfb6c;
        case 0x1dfb70u: goto label_1dfb70;
        case 0x1dfb74u: goto label_1dfb74;
        case 0x1dfb78u: goto label_1dfb78;
        case 0x1dfb7cu: goto label_1dfb7c;
        case 0x1dfb80u: goto label_1dfb80;
        case 0x1dfb84u: goto label_1dfb84;
        case 0x1dfb88u: goto label_1dfb88;
        case 0x1dfb8cu: goto label_1dfb8c;
        case 0x1dfb90u: goto label_1dfb90;
        case 0x1dfb94u: goto label_1dfb94;
        case 0x1dfb98u: goto label_1dfb98;
        case 0x1dfb9cu: goto label_1dfb9c;
        case 0x1dfba0u: goto label_1dfba0;
        case 0x1dfba4u: goto label_1dfba4;
        case 0x1dfba8u: goto label_1dfba8;
        case 0x1dfbacu: goto label_1dfbac;
        case 0x1dfbb0u: goto label_1dfbb0;
        case 0x1dfbb4u: goto label_1dfbb4;
        case 0x1dfbb8u: goto label_1dfbb8;
        case 0x1dfbbcu: goto label_1dfbbc;
        case 0x1dfbc0u: goto label_1dfbc0;
        case 0x1dfbc4u: goto label_1dfbc4;
        case 0x1dfbc8u: goto label_1dfbc8;
        case 0x1dfbccu: goto label_1dfbcc;
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbd4u: goto label_1dfbd4;
        case 0x1dfbd8u: goto label_1dfbd8;
        case 0x1dfbdcu: goto label_1dfbdc;
        case 0x1dfbe0u: goto label_1dfbe0;
        case 0x1dfbe4u: goto label_1dfbe4;
        case 0x1dfbe8u: goto label_1dfbe8;
        case 0x1dfbecu: goto label_1dfbec;
        case 0x1dfbf0u: goto label_1dfbf0;
        case 0x1dfbf4u: goto label_1dfbf4;
        case 0x1dfbf8u: goto label_1dfbf8;
        case 0x1dfbfcu: goto label_1dfbfc;
        case 0x1dfc00u: goto label_1dfc00;
        case 0x1dfc04u: goto label_1dfc04;
        default: break;
    }

    ctx->pc = 0x1df700u;

label_1df700:
    // 0x1df700: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1df700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1df704:
    // 0x1df704: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1df704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1df708:
    // 0x1df708: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1df708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1df70c:
    // 0x1df70c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1df70cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df710:
    // 0x1df710: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1df710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1df714:
    // 0x1df714: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1df714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1df718:
    // 0x1df718: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1df718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1df71c:
    // 0x1df71c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1df71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1df720:
    // 0x1df720: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1df720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1df724:
    // 0x1df724: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1df724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1df728:
    // 0x1df728: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1df728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1df72c:
    // 0x1df72c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1df730:
    // 0x1df730: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1df730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1df734:
    // 0x1df734: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
label_1df738:
    if (ctx->pc == 0x1DF738u) {
        ctx->pc = 0x1DF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF734u;
        // 0x1df738: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF73Cu;
        goto label_1df73c;
    }
    ctx->pc = 0x1DF734u;
    {
        const bool branch_taken_0x1df734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF734u;
        // 0x1df738: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df734) {
            ctx->pc = 0x1DFBD8u;
            goto label_1dfbd8;
        }
    }
    ctx->pc = 0x1DF73Cu;
label_1df73c:
    // 0x1df73c: 0x8e421b7c  lw          $v0, 0x1B7C($s2)
    ctx->pc = 0x1df73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7036)));
label_1df740:
    // 0x1df740: 0x14400126  bnez        $v0, . + 4 + (0x126 << 2)
label_1df744:
    if (ctx->pc == 0x1DF744u) {
        ctx->pc = 0x1DF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF740u;
        // 0x1df744: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF748u;
        goto label_1df748;
    }
    ctx->pc = 0x1DF740u;
    {
        const bool branch_taken_0x1df740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF740u;
        // 0x1df744: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df740) {
            ctx->pc = 0x1DFBDCu;
            goto label_1dfbdc;
        }
    }
    ctx->pc = 0x1DF748u;
label_1df748:
    // 0x1df748: 0x26503a90  addiu       $s0, $s2, 0x3A90
    ctx->pc = 0x1df748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 14992));
label_1df74c:
    // 0x1df74c: 0x92453b9c  lbu         $a1, 0x3B9C($s2)
    ctx->pc = 0x1df74cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15260)));
label_1df750:
    // 0x1df750: 0xc06898e  jal         func_1A2638
label_1df754:
    if (ctx->pc == 0x1DF754u) {
        ctx->pc = 0x1DF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF750u;
        // 0x1df754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF758u;
        goto label_1df758;
    }
    ctx->pc = 0x1DF750u;
    SET_GPR_U32(ctx, 31, 0x1DF758u);
    ctx->pc = 0x1DF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF750u;
    // 0x1df754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1DF750u, 0x1DF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF758u;
label_1df758:
    // 0x1df758: 0xc068998  jal         func_1A2660
label_1df75c:
    if (ctx->pc == 0x1DF75Cu) {
        ctx->pc = 0x1DF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF758u;
        // 0x1df75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF760u;
        goto label_1df760;
    }
    ctx->pc = 0x1DF758u;
    SET_GPR_U32(ctx, 31, 0x1DF760u);
    ctx->pc = 0x1DF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF758u;
    // 0x1df75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1DF758u, 0x1DF760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF760u;
label_1df760:
    // 0x1df760: 0x8e423a78  lw          $v0, 0x3A78($s2)
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14968)));
label_1df764:
    // 0x1df764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1df768:
    if (ctx->pc == 0x1DF768u) {
        ctx->pc = 0x1DF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF764u;
        // 0x1df768: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF76Cu;
        goto label_1df76c;
    }
    ctx->pc = 0x1DF764u;
    {
        const bool branch_taken_0x1df764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF764u;
        // 0x1df768: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df764) {
            ctx->pc = 0x1DF778u;
            goto label_1df778;
        }
    }
    ctx->pc = 0x1DF76Cu;
label_1df76c:
    // 0x1df76c: 0x92453b9c  lbu         $a1, 0x3B9C($s2)
    ctx->pc = 0x1df76cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15260)));
label_1df770:
    // 0x1df770: 0xc076a20  jal         func_1DA880
label_1df774:
    if (ctx->pc == 0x1DF774u) {
        ctx->pc = 0x1DF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF770u;
        // 0x1df774: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF778u;
        goto label_1df778;
    }
    ctx->pc = 0x1DF770u;
    SET_GPR_U32(ctx, 31, 0x1DF778u);
    ctx->pc = 0x1DF774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF770u;
    // 0x1df774: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA880u, 0x1DF770u, 0x1DF778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF778u;
label_1df778:
    // 0x1df778: 0x8e423a7c  lw          $v0, 0x3A7C($s2)
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14972)));
label_1df77c:
    // 0x1df77c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1df780:
    if (ctx->pc == 0x1DF780u) {
        ctx->pc = 0x1DF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF77Cu;
        // 0x1df780: 0x265030a0  addiu       $s0, $s2, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF784u;
        goto label_1df784;
    }
    ctx->pc = 0x1DF77Cu;
    {
        const bool branch_taken_0x1df77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF77Cu;
        // 0x1df780: 0x265030a0  addiu       $s0, $s2, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df77c) {
            ctx->pc = 0x1DF7F0u;
            goto label_1df7f0;
        }
    }
    ctx->pc = 0x1DF784u;
label_1df784:
    // 0x1df784: 0x92453b9c  lbu         $a1, 0x3B9C($s2)
    ctx->pc = 0x1df784u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15260)));
label_1df788:
    // 0x1df788: 0xc0794be  jal         func_1E52F8
label_1df78c:
    if (ctx->pc == 0x1DF78Cu) {
        ctx->pc = 0x1DF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF788u;
        // 0x1df78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF790u;
        goto label_1df790;
    }
    ctx->pc = 0x1DF788u;
    SET_GPR_U32(ctx, 31, 0x1DF790u);
    ctx->pc = 0x1DF78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF788u;
    // 0x1df78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E52F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52F8u, 0x1DF788u, 0x1DF790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF790u;
label_1df790:
    // 0x1df790: 0xc0794c0  jal         func_1E5300
label_1df794:
    if (ctx->pc == 0x1DF794u) {
        ctx->pc = 0x1DF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF790u;
        // 0x1df794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF798u;
        goto label_1df798;
    }
    ctx->pc = 0x1DF790u;
    SET_GPR_U32(ctx, 31, 0x1DF798u);
    ctx->pc = 0x1DF794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF790u;
    // 0x1df794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5300u, 0x1DF790u, 0x1DF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF798u;
label_1df798:
    // 0x1df798: 0x8e030950  lw          $v1, 0x950($s0)
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2384)));
label_1df79c:
    // 0x1df79c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1df7a0:
    if (ctx->pc == 0x1DF7A0u) {
        ctx->pc = 0x1DF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF79Cu;
        // 0x1df7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7A4u;
        goto label_1df7a4;
    }
    ctx->pc = 0x1DF79Cu;
    {
        const bool branch_taken_0x1df79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF79Cu;
        // 0x1df7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df79c) {
            ctx->pc = 0x1DF7B0u;
            goto label_1df7b0;
        }
    }
    ctx->pc = 0x1DF7A4u;
label_1df7a4:
    // 0x1df7a4: 0x8e020948  lw          $v0, 0x948($s0)
    ctx->pc = 0x1df7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1df7a8:
    // 0x1df7a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df7ac:
    // 0x1df7ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df7b0:
    // 0x1df7b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1df7b4:
    if (ctx->pc == 0x1DF7B4u) {
        ctx->pc = 0x1DF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B0u;
        // 0x1df7b4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7B8u;
        goto label_1df7b8;
    }
    ctx->pc = 0x1DF7B0u;
    {
        const bool branch_taken_0x1df7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B0u;
        // 0x1df7b4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7b0) {
            ctx->pc = 0x1DF7D4u;
            goto label_1df7d4;
        }
    }
    ctx->pc = 0x1DF7B8u;
label_1df7b8:
    // 0x1df7b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1df7bc:
    if (ctx->pc == 0x1DF7BCu) {
        ctx->pc = 0x1DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B8u;
        // 0x1df7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7C0u;
        goto label_1df7c0;
    }
    ctx->pc = 0x1DF7B8u;
    {
        const bool branch_taken_0x1df7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B8u;
        // 0x1df7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7b8) {
            ctx->pc = 0x1DF7C8u;
            goto label_1df7c8;
        }
    }
    ctx->pc = 0x1DF7C0u;
label_1df7c0:
    // 0x1df7c0: 0x8e020948  lw          $v0, 0x948($s0)
    ctx->pc = 0x1df7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1df7c4:
    // 0x1df7c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df7c8:
    // 0x1df7c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1df7cc:
    if (ctx->pc == 0x1DF7CCu) {
        ctx->pc = 0x1DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7C8u;
        // 0x1df7cc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7D0u;
        goto label_1df7d0;
    }
    ctx->pc = 0x1DF7C8u;
    {
        const bool branch_taken_0x1df7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7C8u;
        // 0x1df7cc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7c8) {
            ctx->pc = 0x1DF7D4u;
            goto label_1df7d4;
        }
    }
    ctx->pc = 0x1DF7D0u;
label_1df7d0:
    // 0x1df7d0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1df7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1df7d4:
    // 0x1df7d4: 0xc067b9c  jal         func_19EE70
label_1df7d8:
    if (ctx->pc == 0x1DF7D8u) {
        ctx->pc = 0x1DF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7D4u;
        // 0x1df7d8: 0x26502dd0  addiu       $s0, $s2, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7DCu;
        goto label_1df7dc;
    }
    ctx->pc = 0x1DF7D4u;
    SET_GPR_U32(ctx, 31, 0x1DF7DCu);
    ctx->pc = 0x1DF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7D4u;
    // 0x1df7d8: 0x26502dd0  addiu       $s0, $s2, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DF7D4u, 0x1DF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7DCu;
label_1df7dc:
    // 0x1df7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df7e0:
    // 0x1df7e0: 0xc073b0a  jal         func_1CEC28
label_1df7e4:
    if (ctx->pc == 0x1DF7E4u) {
        ctx->pc = 0x1DF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E0u;
        // 0x1df7e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7E8u;
        goto label_1df7e8;
    }
    ctx->pc = 0x1DF7E0u;
    SET_GPR_U32(ctx, 31, 0x1DF7E8u);
    ctx->pc = 0x1DF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7E0u;
    // 0x1df7e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1DF7E0u, 0x1DF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7E8u;
label_1df7e8:
    // 0x1df7e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1df7ec:
    if (ctx->pc == 0x1DF7ECu) {
        ctx->pc = 0x1DF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E8u;
        // 0x1df7ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7F0u;
        goto label_1df7f0;
    }
    ctx->pc = 0x1DF7E8u;
    {
        const bool branch_taken_0x1df7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E8u;
        // 0x1df7ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e8) {
            ctx->pc = 0x1DF818u;
            goto label_1df818;
        }
    }
    ctx->pc = 0x1DF7F0u;
label_1df7f0:
    // 0x1df7f0: 0x8e421ba4  lw          $v0, 0x1BA4($s2)
    ctx->pc = 0x1df7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
label_1df7f4:
    // 0x1df7f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1df7f8:
    if (ctx->pc == 0x1DF7F8u) {
        ctx->pc = 0x1DF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F4u;
        // 0x1df7f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7FCu;
        goto label_1df7fc;
    }
    ctx->pc = 0x1DF7F4u;
    {
        const bool branch_taken_0x1df7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F4u;
        // 0x1df7f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7f4) {
            ctx->pc = 0x1DF818u;
            goto label_1df818;
        }
    }
    ctx->pc = 0x1DF7FCu;
label_1df7fc:
    // 0x1df7fc: 0x26503bb0  addiu       $s0, $s2, 0x3BB0
    ctx->pc = 0x1df7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15280));
label_1df800:
    // 0x1df800: 0x92453b9c  lbu         $a1, 0x3B9C($s2)
    ctx->pc = 0x1df800u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15260)));
label_1df804:
    // 0x1df804: 0xc079b3c  jal         func_1E6CF0
label_1df808:
    if (ctx->pc == 0x1DF808u) {
        ctx->pc = 0x1DF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF804u;
        // 0x1df808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF80Cu;
        goto label_1df80c;
    }
    ctx->pc = 0x1DF804u;
    SET_GPR_U32(ctx, 31, 0x1DF80Cu);
    ctx->pc = 0x1DF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF804u;
    // 0x1df808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6CF0u, 0x1DF804u, 0x1DF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF80Cu;
label_1df80c:
    // 0x1df80c: 0xc079b3e  jal         func_1E6CF8
label_1df810:
    if (ctx->pc == 0x1DF810u) {
        ctx->pc = 0x1DF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF80Cu;
        // 0x1df810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF814u;
        goto label_1df814;
    }
    ctx->pc = 0x1DF80Cu;
    SET_GPR_U32(ctx, 31, 0x1DF814u);
    ctx->pc = 0x1DF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF80Cu;
    // 0x1df810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6CF8u, 0x1DF80Cu, 0x1DF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF814u;
label_1df814:
    // 0x1df814: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1df814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df818:
    // 0x1df818: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1df81c:
    // 0x1df81c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x1df81cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
label_1df820:
    // 0x1df820: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1df820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df824:
    // 0x1df824: 0x26532af0  addiu       $s3, $s2, 0x2AF0
    ctx->pc = 0x1df824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
label_1df828:
    // 0x1df828: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1df828u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df82c:
    // 0x1df82c: 0x0  nop
    ctx->pc = 0x1df82cu;
    // NOP
label_1df830:
    // 0x1df830: 0x8e421b88  lw          $v0, 0x1B88($s2)
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7048)));
label_1df834:
    // 0x1df834: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1df838:
    if (ctx->pc == 0x1DF838u) {
        ctx->pc = 0x1DF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF834u;
        // 0x1df838: 0x8e423a78  lw          $v0, 0x3A78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF83Cu;
        goto label_1df83c;
    }
    ctx->pc = 0x1DF834u;
    {
        const bool branch_taken_0x1df834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df834) {
            ctx->pc = 0x1DF838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF834u;
            // 0x1df838: 0x8e423a78  lw          $v0, 0x3A78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF858u;
            goto label_1df858;
        }
    }
    ctx->pc = 0x1DF83Cu;
label_1df83c:
    // 0x1df83c: 0x568000c1  bnel        $s4, $zero, . + 4 + (0xC1 << 2)
label_1df840:
    if (ctx->pc == 0x1DF840u) {
        ctx->pc = 0x1DF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF83Cu;
        // 0x1df840: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF844u;
        goto label_1df844;
    }
    ctx->pc = 0x1DF83Cu;
    {
        const bool branch_taken_0x1df83c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df83c) {
            ctx->pc = 0x1DF840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF83Cu;
            // 0x1df840: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB44u;
            goto label_1dfb44;
        }
    }
    ctx->pc = 0x1DF844u;
label_1df844:
    // 0x1df844: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1df848:
    // 0x1df848: 0xc079faa  jal         func_1E7EA8
label_1df84c:
    if (ctx->pc == 0x1DF84Cu) {
        ctx->pc = 0x1DF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF848u;
        // 0x1df84c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF850u;
        goto label_1df850;
    }
    ctx->pc = 0x1DF848u;
    SET_GPR_U32(ctx, 31, 0x1DF850u);
    ctx->pc = 0x1DF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF848u;
    // 0x1df84c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF848u, 0x1DF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF850u;
label_1df850:
    // 0x1df850: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1df854:
    if (ctx->pc == 0x1DF854u) {
        ctx->pc = 0x1DF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF850u;
        // 0x1df854: 0x8e512af0  lw          $s1, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF858u;
        goto label_1df858;
    }
    ctx->pc = 0x1DF850u;
    {
        const bool branch_taken_0x1df850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF850u;
        // 0x1df854: 0x8e512af0  lw          $s1, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df850) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DF858u;
label_1df858:
    // 0x1df858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1df85c:
    if (ctx->pc == 0x1DF85Cu) {
        ctx->pc = 0x1DF860u;
        goto label_1df860;
    }
    ctx->pc = 0x1DF858u;
    {
        const bool branch_taken_0x1df858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df858) {
            ctx->pc = 0x1DF878u;
            goto label_1df878;
        }
    }
    ctx->pc = 0x1DF860u;
label_1df860:
    // 0x1df860: 0x8e423a7c  lw          $v0, 0x3A7C($s2)
    ctx->pc = 0x1df860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14972)));
label_1df864:
    // 0x1df864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1df868:
    if (ctx->pc == 0x1DF868u) {
        ctx->pc = 0x1DF86Cu;
        goto label_1df86c;
    }
    ctx->pc = 0x1DF864u;
    {
        const bool branch_taken_0x1df864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df864) {
            ctx->pc = 0x1DF878u;
            goto label_1df878;
        }
    }
    ctx->pc = 0x1DF86Cu;
label_1df86c:
    // 0x1df86c: 0x8e421ba4  lw          $v0, 0x1BA4($s2)
    ctx->pc = 0x1df86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7076)));
label_1df870:
    // 0x1df870: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1df874:
    if (ctx->pc == 0x1DF874u) {
        ctx->pc = 0x1DF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF870u;
        // 0x1df874: 0x8e421bb8  lw          $v0, 0x1BB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF878u;
        goto label_1df878;
    }
    ctx->pc = 0x1DF870u;
    {
        const bool branch_taken_0x1df870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df870) {
            ctx->pc = 0x1DF874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF870u;
            // 0x1df874: 0x8e421bb8  lw          $v0, 0x1BB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF884u;
            goto label_1df884;
        }
    }
    ctx->pc = 0x1DF878u;
label_1df878:
    // 0x1df878: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
label_1df87c:
    if (ctx->pc == 0x1DF87Cu) {
        ctx->pc = 0x1DF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF878u;
        // 0x1df87c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF880u;
        goto label_1df880;
    }
    ctx->pc = 0x1DF878u;
    {
        const bool branch_taken_0x1df878 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df878) {
            ctx->pc = 0x1DF87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF878u;
            // 0x1df87c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF8A0u;
            goto label_1df8a0;
        }
    }
    ctx->pc = 0x1DF880u;
label_1df880:
    // 0x1df880: 0x8e421bb8  lw          $v0, 0x1BB8($s2)
    ctx->pc = 0x1df880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
label_1df884:
    // 0x1df884: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1df888:
    if (ctx->pc == 0x1DF888u) {
        ctx->pc = 0x1DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF884u;
        // 0x1df888: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF88Cu;
        goto label_1df88c;
    }
    ctx->pc = 0x1DF884u;
    {
        const bool branch_taken_0x1df884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF884u;
        // 0x1df888: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df884) {
            ctx->pc = 0x1DF8B8u;
            goto label_1df8b8;
        }
    }
    ctx->pc = 0x1DF88Cu;
label_1df88c:
    // 0x1df88c: 0xc107458  jal         func_41D160
label_1df890:
    if (ctx->pc == 0x1DF890u) {
        ctx->pc = 0x1DF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF88Cu;
        // 0x1df890: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF894u;
        goto label_1df894;
    }
    ctx->pc = 0x1DF88Cu;
    SET_GPR_U32(ctx, 31, 0x1DF894u);
    ctx->pc = 0x1DF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF88Cu;
    // 0x1df890: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF88Cu, 0x1DF894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF894u;
label_1df894:
    // 0x1df894: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1df898:
    if (ctx->pc == 0x1DF898u) {
        ctx->pc = 0x1DF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF894u;
        // 0x1df898: 0x8e421bb4  lw          $v0, 0x1BB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF89Cu;
        goto label_1df89c;
    }
    ctx->pc = 0x1DF894u;
    {
        const bool branch_taken_0x1df894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df894) {
            ctx->pc = 0x1DF898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF894u;
            // 0x1df898: 0x8e421bb4  lw          $v0, 0x1BB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF8BCu;
            goto label_1df8bc;
        }
    }
    ctx->pc = 0x1DF89Cu;
label_1df89c:
    // 0x1df89c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1df89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df8a0:
    // 0x1df8a0: 0xc079faa  jal         func_1E7EA8
label_1df8a4:
    if (ctx->pc == 0x1DF8A4u) {
        ctx->pc = 0x1DF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A0u;
        // 0x1df8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8A8u;
        goto label_1df8a8;
    }
    ctx->pc = 0x1DF8A0u;
    SET_GPR_U32(ctx, 31, 0x1DF8A8u);
    ctx->pc = 0x1DF8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8A0u;
    // 0x1df8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF8A0u, 0x1DF8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8A8u;
label_1df8a8:
    // 0x1df8a8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1df8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df8ac:
    // 0x1df8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df8b0:
    // 0x1df8b0: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1df8b4:
    if (ctx->pc == 0x1DF8B4u) {
        ctx->pc = 0x1DF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8B0u;
        // 0x1df8b4: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8B8u;
        goto label_1df8b8;
    }
    ctx->pc = 0x1DF8B0u;
    {
        const bool branch_taken_0x1df8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8B0u;
        // 0x1df8b4: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8b0) {
            ctx->pc = 0x1DFAE0u;
            goto label_1dfae0;
        }
    }
    ctx->pc = 0x1DF8B8u;
label_1df8b8:
    // 0x1df8b8: 0x8e421bb4  lw          $v0, 0x1BB4($s2)
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7092)));
label_1df8bc:
    // 0x1df8bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1df8c0:
    if (ctx->pc == 0x1DF8C0u) {
        ctx->pc = 0x1DF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8BCu;
        // 0x1df8c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8C4u;
        goto label_1df8c4;
    }
    ctx->pc = 0x1DF8BCu;
    {
        const bool branch_taken_0x1df8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8BCu;
        // 0x1df8c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8bc) {
            ctx->pc = 0x1DF8D8u;
            goto label_1df8d8;
        }
    }
    ctx->pc = 0x1DF8C4u;
label_1df8c4:
    // 0x1df8c4: 0x8e421bb8  lw          $v0, 0x1BB8($s2)
    ctx->pc = 0x1df8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7096)));
label_1df8c8:
    // 0x1df8c8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1df8cc:
    if (ctx->pc == 0x1DF8CCu) {
        ctx->pc = 0x1DF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8C8u;
        // 0x1df8cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8D0u;
        goto label_1df8d0;
    }
    ctx->pc = 0x1DF8C8u;
    {
        const bool branch_taken_0x1df8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8C8u;
        // 0x1df8cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8c8) {
            ctx->pc = 0x1DF9B8u;
            goto label_1df9b8;
        }
    }
    ctx->pc = 0x1DF8D0u;
label_1df8d0:
    // 0x1df8d0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1df8d4:
    if (ctx->pc == 0x1DF8D4u) {
        ctx->pc = 0x1DF8D8u;
        goto label_1df8d8;
    }
    ctx->pc = 0x1DF8D0u;
    {
        const bool branch_taken_0x1df8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8d0) {
            ctx->pc = 0x1DF954u;
            goto label_1df954;
        }
    }
    ctx->pc = 0x1DF8D8u;
label_1df8d8:
    // 0x1df8d8: 0xc107458  jal         func_41D160
label_1df8dc:
    if (ctx->pc == 0x1DF8DCu) {
        ctx->pc = 0x1DF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8D8u;
        // 0x1df8dc: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8E0u;
        goto label_1df8e0;
    }
    ctx->pc = 0x1DF8D8u;
    SET_GPR_U32(ctx, 31, 0x1DF8E0u);
    ctx->pc = 0x1DF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8D8u;
    // 0x1df8dc: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF8D8u, 0x1DF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8E0u;
label_1df8e0:
    // 0x1df8e0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1df8e4:
    if (ctx->pc == 0x1DF8E4u) {
        ctx->pc = 0x1DF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8E0u;
        // 0x1df8e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8E8u;
        goto label_1df8e8;
    }
    ctx->pc = 0x1DF8E0u;
    {
        const bool branch_taken_0x1df8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8E0u;
        // 0x1df8e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8e0) {
            ctx->pc = 0x1DF954u;
            goto label_1df954;
        }
    }
    ctx->pc = 0x1DF8E8u;
label_1df8e8:
    // 0x1df8e8: 0x8e421bb0  lw          $v0, 0x1BB0($s2)
    ctx->pc = 0x1df8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7088)));
label_1df8ec:
    // 0x1df8ec: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1df8f0:
    if (ctx->pc == 0x1DF8F0u) {
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8F4u;
        goto label_1df8f4;
    }
    ctx->pc = 0x1DF8ECu;
    {
        const bool branch_taken_0x1df8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ec) {
            ctx->pc = 0x1DF954u;
            goto label_1df954;
        }
    }
    ctx->pc = 0x1DF8F4u;
label_1df8f4:
    // 0x1df8f4: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x1df8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1df8f8:
    // 0x1df8f8: 0x8c6256e8  lw          $v0, 0x56E8($v1)
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22248)));
label_1df8fc:
    // 0x1df8fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1df900:
    if (ctx->pc == 0x1DF900u) {
        ctx->pc = 0x1DF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8FCu;
        // 0x1df900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF904u;
        goto label_1df904;
    }
    ctx->pc = 0x1DF8FCu;
    {
        const bool branch_taken_0x1df8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8FCu;
        // 0x1df900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8fc) {
            ctx->pc = 0x1DF91Cu;
            goto label_1df91c;
        }
    }
    ctx->pc = 0x1DF904u;
label_1df904:
    // 0x1df904: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x1df904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_1df908:
    // 0x1df908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1df90c:
    if (ctx->pc == 0x1DF90Cu) {
        ctx->pc = 0x1DF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF908u;
        // 0x1df90c: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF910u;
        goto label_1df910;
    }
    ctx->pc = 0x1DF908u;
    {
        const bool branch_taken_0x1df908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF908u;
        // 0x1df90c: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df908) {
            ctx->pc = 0x1DF918u;
            goto label_1df918;
        }
    }
    ctx->pc = 0x1DF910u;
label_1df910:
    // 0x1df910: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1df914:
    if (ctx->pc == 0x1DF914u) {
        ctx->pc = 0x1DF918u;
        goto label_1df918;
    }
    ctx->pc = 0x1DF910u;
    {
        const bool branch_taken_0x1df910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df910) {
            ctx->pc = 0x1DF91Cu;
            goto label_1df91c;
        }
    }
    ctx->pc = 0x1DF918u;
label_1df918:
    // 0x1df918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1df918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df91c:
    // 0x1df91c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1df920:
    if (ctx->pc == 0x1DF920u) {
        ctx->pc = 0x1DF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF91Cu;
        // 0x1df920: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF924u;
        goto label_1df924;
    }
    ctx->pc = 0x1DF91Cu;
    {
        const bool branch_taken_0x1df91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF91Cu;
        // 0x1df920: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df91c) {
            ctx->pc = 0x1DF938u;
            goto label_1df938;
        }
    }
    ctx->pc = 0x1DF924u;
label_1df924:
    // 0x1df924: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1df924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1df928:
    // 0x1df928: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1df928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1df92c:
    // 0x1df92c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df930:
    // 0x1df930: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1df934:
    if (ctx->pc == 0x1DF934u) {
        ctx->pc = 0x1DF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF930u;
        // 0x1df934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF938u;
        goto label_1df938;
    }
    ctx->pc = 0x1DF930u;
    {
        const bool branch_taken_0x1df930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF930u;
        // 0x1df934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df930) {
            ctx->pc = 0x1DF954u;
            goto label_1df954;
        }
    }
    ctx->pc = 0x1DF938u;
label_1df938:
    // 0x1df938: 0x56800082  bnel        $s4, $zero, . + 4 + (0x82 << 2)
label_1df93c:
    if (ctx->pc == 0x1DF93Cu) {
        ctx->pc = 0x1DF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF938u;
        // 0x1df93c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF940u;
        goto label_1df940;
    }
    ctx->pc = 0x1DF938u;
    {
        const bool branch_taken_0x1df938 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df938) {
            ctx->pc = 0x1DF93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF938u;
            // 0x1df93c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB44u;
            goto label_1dfb44;
        }
    }
    ctx->pc = 0x1DF940u;
label_1df940:
    // 0x1df940: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1df944:
    // 0x1df944: 0xc079faa  jal         func_1E7EA8
label_1df948:
    if (ctx->pc == 0x1DF948u) {
        ctx->pc = 0x1DF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF944u;
        // 0x1df948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF94Cu;
        goto label_1df94c;
    }
    ctx->pc = 0x1DF944u;
    SET_GPR_U32(ctx, 31, 0x1DF94Cu);
    ctx->pc = 0x1DF948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF944u;
    // 0x1df948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF944u, 0x1DF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF94Cu;
label_1df94c:
    // 0x1df94c: 0x10000062  b           . + 4 + (0x62 << 2)
label_1df950:
    if (ctx->pc == 0x1DF950u) {
        ctx->pc = 0x1DF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF94Cu;
        // 0x1df950: 0x8e512af0  lw          $s1, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF954u;
        goto label_1df954;
    }
    ctx->pc = 0x1DF94Cu;
    {
        const bool branch_taken_0x1df94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF94Cu;
        // 0x1df950: 0x8e512af0  lw          $s1, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df94c) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DF954u;
label_1df954:
    // 0x1df954: 0x5282007b  beql        $s4, $v0, . + 4 + (0x7B << 2)
label_1df958:
    if (ctx->pc == 0x1DF958u) {
        ctx->pc = 0x1DF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF954u;
        // 0x1df958: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF95Cu;
        goto label_1df95c;
    }
    ctx->pc = 0x1DF954u;
    {
        const bool branch_taken_0x1df954 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1df954) {
            ctx->pc = 0x1DF958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF954u;
            // 0x1df958: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB44u;
            goto label_1dfb44;
        }
    }
    ctx->pc = 0x1DF95Cu;
label_1df95c:
    // 0x1df95c: 0x8e423a74  lw          $v0, 0x3A74($s2)
    ctx->pc = 0x1df95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1df960:
    // 0x1df960: 0x56820011  bnel        $s4, $v0, . + 4 + (0x11 << 2)
label_1df964:
    if (ctx->pc == 0x1DF964u) {
        ctx->pc = 0x1DF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF960u;
        // 0x1df964: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF968u;
        goto label_1df968;
    }
    ctx->pc = 0x1DF960u;
    {
        const bool branch_taken_0x1df960 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df960) {
            ctx->pc = 0x1DF964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF960u;
            // 0x1df964: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF9A8u;
            goto label_1df9a8;
        }
    }
    ctx->pc = 0x1DF968u;
label_1df968:
    // 0x1df968: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1df968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1df96c:
    // 0x1df96c: 0xc107458  jal         func_41D160
label_1df970:
    if (ctx->pc == 0x1DF970u) {
        ctx->pc = 0x1DF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF96Cu;
        // 0x1df970: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF974u;
        goto label_1df974;
    }
    ctx->pc = 0x1DF96Cu;
    SET_GPR_U32(ctx, 31, 0x1DF974u);
    ctx->pc = 0x1DF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF96Cu;
    // 0x1df970: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF96Cu, 0x1DF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF974u;
label_1df974:
    // 0x1df974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1df978:
    if (ctx->pc == 0x1DF978u) {
        ctx->pc = 0x1DF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF974u;
        // 0x1df978: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF97Cu;
        goto label_1df97c;
    }
    ctx->pc = 0x1DF974u;
    {
        const bool branch_taken_0x1df974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF974u;
        // 0x1df978: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df974) {
            ctx->pc = 0x1DF984u;
            goto label_1df984;
        }
    }
    ctx->pc = 0x1DF97Cu;
label_1df97c:
    // 0x1df97c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1df980:
    if (ctx->pc == 0x1DF980u) {
        ctx->pc = 0x1DF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF97Cu;
        // 0x1df980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF984u;
        goto label_1df984;
    }
    ctx->pc = 0x1DF97Cu;
    {
        const bool branch_taken_0x1df97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF97Cu;
        // 0x1df980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df97c) {
            ctx->pc = 0x1DF988u;
            goto label_1df988;
        }
    }
    ctx->pc = 0x1DF984u;
label_1df984:
    // 0x1df984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df988:
    // 0x1df988: 0xc079f9e  jal         func_1E7E78
label_1df98c:
    if (ctx->pc == 0x1DF98Cu) {
        ctx->pc = 0x1DF990u;
        goto label_1df990;
    }
    ctx->pc = 0x1DF988u;
    SET_GPR_U32(ctx, 31, 0x1DF990u);
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DF988u, 0x1DF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF990u;
label_1df990:
    // 0x1df990: 0x26422af0  addiu       $v0, $s2, 0x2AF0
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
label_1df994:
    // 0x1df994: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1df994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1df998:
    // 0x1df998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df99c:
    // 0x1df99c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1df99cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df9a0:
    // 0x1df9a0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1df9a4:
    if (ctx->pc == 0x1DF9A4u) {
        ctx->pc = 0x1DF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9A0u;
        // 0x1df9a4: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9A8u;
        goto label_1df9a8;
    }
    ctx->pc = 0x1DF9A0u;
    {
        const bool branch_taken_0x1df9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9A0u;
        // 0x1df9a4: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9a0) {
            ctx->pc = 0x1DFAE0u;
            goto label_1dfae0;
        }
    }
    ctx->pc = 0x1DF9A8u;
label_1df9a8:
    // 0x1df9a8: 0xc079f9e  jal         func_1E7E78
label_1df9ac:
    if (ctx->pc == 0x1DF9ACu) {
        ctx->pc = 0x1DF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9A8u;
        // 0x1df9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9B0u;
        goto label_1df9b0;
    }
    ctx->pc = 0x1DF9A8u;
    SET_GPR_U32(ctx, 31, 0x1DF9B0u);
    ctx->pc = 0x1DF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9A8u;
    // 0x1df9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DF9A8u, 0x1DF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9B0u;
label_1df9b0:
    // 0x1df9b0: 0x10000049  b           . + 4 + (0x49 << 2)
label_1df9b4:
    if (ctx->pc == 0x1DF9B4u) {
        ctx->pc = 0x1DF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9B0u;
        // 0x1df9b4: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9B8u;
        goto label_1df9b8;
    }
    ctx->pc = 0x1DF9B0u;
    {
        const bool branch_taken_0x1df9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9B0u;
        // 0x1df9b4: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9b0) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DF9B8u;
label_1df9b8:
    // 0x1df9b8: 0x8e421ba8  lw          $v0, 0x1BA8($s2)
    ctx->pc = 0x1df9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7080)));
label_1df9bc:
    // 0x1df9bc: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_1df9c0:
    if (ctx->pc == 0x1DF9C0u) {
        ctx->pc = 0x1DF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9BCu;
        // 0x1df9c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9C4u;
        goto label_1df9c4;
    }
    ctx->pc = 0x1DF9BCu;
    {
        const bool branch_taken_0x1df9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9BCu;
        // 0x1df9c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9bc) {
            ctx->pc = 0x1DFB40u;
            goto label_1dfb40;
        }
    }
    ctx->pc = 0x1DF9C4u;
label_1df9c4:
    // 0x1df9c4: 0xc107458  jal         func_41D160
label_1df9c8:
    if (ctx->pc == 0x1DF9C8u) {
        ctx->pc = 0x1DF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9C4u;
        // 0x1df9c8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9CCu;
        goto label_1df9cc;
    }
    ctx->pc = 0x1DF9C4u;
    SET_GPR_U32(ctx, 31, 0x1DF9CCu);
    ctx->pc = 0x1DF9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9C4u;
    // 0x1df9c8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF9C4u, 0x1DF9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9CCu;
label_1df9cc:
    // 0x1df9cc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1df9d0:
    if (ctx->pc == 0x1DF9D0u) {
        ctx->pc = 0x1DF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9CCu;
        // 0x1df9d0: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9D4u;
        goto label_1df9d4;
    }
    ctx->pc = 0x1DF9CCu;
    {
        const bool branch_taken_0x1df9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df9cc) {
            ctx->pc = 0x1DF9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF9CCu;
            // 0x1df9d0: 0x8e423a74  lw          $v0, 0x3A74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA14u;
            goto label_1dfa14;
        }
    }
    ctx->pc = 0x1DF9D4u;
label_1df9d4:
    // 0x1df9d4: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_1df9d8:
    if (ctx->pc == 0x1DF9D8u) {
        ctx->pc = 0x1DF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D4u;
        // 0x1df9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9DCu;
        goto label_1df9dc;
    }
    ctx->pc = 0x1DF9D4u;
    {
        const bool branch_taken_0x1df9d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D4u;
        // 0x1df9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d4) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF9DCu;
label_1df9dc:
    // 0x1df9dc: 0x8e442af0  lw          $a0, 0x2AF0($s2)
    ctx->pc = 0x1df9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
label_1df9e0:
    // 0x1df9e0: 0xc079faa  jal         func_1E7EA8
label_1df9e4:
    if (ctx->pc == 0x1DF9E4u) {
        ctx->pc = 0x1DF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9E0u;
        // 0x1df9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9E8u;
        goto label_1df9e8;
    }
    ctx->pc = 0x1DF9E0u;
    SET_GPR_U32(ctx, 31, 0x1DF9E8u);
    ctx->pc = 0x1DF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9E0u;
    // 0x1df9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF9E0u, 0x1DF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9E8u;
label_1df9e8:
    // 0x1df9e8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1df9ec:
    if (ctx->pc == 0x1DF9ECu) {
        ctx->pc = 0x1DF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9E8u;
        // 0x1df9ec: 0x8e512af0  lw          $s1, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9F0u;
        goto label_1df9f0;
    }
    ctx->pc = 0x1DF9E8u;
    {
        const bool branch_taken_0x1df9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9E8u;
        // 0x1df9ec: 0x8e512af0  lw          $s1, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9e8) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DF9F0u;
label_1df9f0:
    // 0x1df9f0: 0x56820054  bnel        $s4, $v0, . + 4 + (0x54 << 2)
label_1df9f4:
    if (ctx->pc == 0x1DF9F4u) {
        ctx->pc = 0x1DF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9F0u;
        // 0x1df9f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9F8u;
        goto label_1df9f8;
    }
    ctx->pc = 0x1DF9F0u;
    {
        const bool branch_taken_0x1df9f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df9f0) {
            ctx->pc = 0x1DF9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF9F0u;
            // 0x1df9f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB44u;
            goto label_1dfb44;
        }
    }
    ctx->pc = 0x1DF9F8u;
label_1df9f8:
    // 0x1df9f8: 0x8e442af8  lw          $a0, 0x2AF8($s2)
    ctx->pc = 0x1df9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1df9fc:
    // 0x1df9fc: 0xc079f96  jal         func_1E7E58
label_1dfa00:
    if (ctx->pc == 0x1DFA00u) {
        ctx->pc = 0x1DFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9FCu;
        // 0x1dfa00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA04u;
        goto label_1dfa04;
    }
    ctx->pc = 0x1DF9FCu;
    SET_GPR_U32(ctx, 31, 0x1DFA04u);
    ctx->pc = 0x1DFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9FCu;
    // 0x1dfa00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DF9FCu, 0x1DFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA04u;
label_1dfa04:
    // 0x1dfa04: 0x8e512af8  lw          $s1, 0x2AF8($s2)
    ctx->pc = 0x1dfa04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dfa08:
    // 0x1dfa08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa0c:
    // 0x1dfa0c: 0x10000034  b           . + 4 + (0x34 << 2)
label_1dfa10:
    if (ctx->pc == 0x1DFA10u) {
        ctx->pc = 0x1DFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA0Cu;
        // 0x1dfa10: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA14u;
        goto label_1dfa14;
    }
    ctx->pc = 0x1DFA0Cu;
    {
        const bool branch_taken_0x1dfa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA0Cu;
        // 0x1dfa10: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa0c) {
            ctx->pc = 0x1DFAE0u;
            goto label_1dfae0;
        }
    }
    ctx->pc = 0x1DFA14u;
label_1dfa14:
    // 0x1dfa14: 0x16820018  bne         $s4, $v0, . + 4 + (0x18 << 2)
label_1dfa18:
    if (ctx->pc == 0x1DFA18u) {
        ctx->pc = 0x1DFA1Cu;
        goto label_1dfa1c;
    }
    ctx->pc = 0x1DFA14u;
    {
        const bool branch_taken_0x1dfa14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfa14) {
            ctx->pc = 0x1DFA78u;
            goto label_1dfa78;
        }
    }
    ctx->pc = 0x1DFA1Cu;
label_1dfa1c:
    // 0x1dfa1c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_1dfa20:
    if (ctx->pc == 0x1DFA20u) {
        ctx->pc = 0x1DFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA1Cu;
        // 0x1dfa20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA24u;
        goto label_1dfa24;
    }
    ctx->pc = 0x1DFA1Cu;
    {
        const bool branch_taken_0x1dfa1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA1Cu;
        // 0x1dfa20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa1c) {
            ctx->pc = 0x1DFA34u;
            goto label_1dfa34;
        }
    }
    ctx->pc = 0x1DFA24u;
label_1dfa24:
    // 0x1dfa24: 0xc067b9c  jal         func_19EE70
label_1dfa28:
    if (ctx->pc == 0x1DFA28u) {
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA2Cu;
        goto label_1dfa2c;
    }
    ctx->pc = 0x1DFA24u;
    SET_GPR_U32(ctx, 31, 0x1DFA2Cu);
    ctx->pc = 0x1DFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA24u;
    // 0x1dfa28: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFA24u, 0x1DFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA2Cu;
label_1dfa2c:
    // 0x1dfa2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dfa30:
    if (ctx->pc == 0x1DFA30u) {
        ctx->pc = 0x1DFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA2Cu;
        // 0x1dfa30: 0x8e442af0  lw          $a0, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA34u;
        goto label_1dfa34;
    }
    ctx->pc = 0x1DFA2Cu;
    {
        const bool branch_taken_0x1dfa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA2Cu;
        // 0x1dfa30: 0x8e442af0  lw          $a0, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa2c) {
            ctx->pc = 0x1DFA58u;
            goto label_1dfa58;
        }
    }
    ctx->pc = 0x1DFA34u;
label_1dfa34:
    // 0x1dfa34: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_1dfa38:
    if (ctx->pc == 0x1DFA38u) {
        ctx->pc = 0x1DFA3Cu;
        goto label_1dfa3c;
    }
    ctx->pc = 0x1DFA34u;
    {
        const bool branch_taken_0x1dfa34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfa34) {
            ctx->pc = 0x1DFA4Cu;
            goto label_1dfa4c;
        }
    }
    ctx->pc = 0x1DFA3Cu;
label_1dfa3c:
    // 0x1dfa3c: 0xc067b9c  jal         func_19EE70
label_1dfa40:
    if (ctx->pc == 0x1DFA40u) {
        ctx->pc = 0x1DFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA3Cu;
        // 0x1dfa40: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA44u;
        goto label_1dfa44;
    }
    ctx->pc = 0x1DFA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DFA44u);
    ctx->pc = 0x1DFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA3Cu;
    // 0x1dfa40: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFA3Cu, 0x1DFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA44u;
label_1dfa44:
    // 0x1dfa44: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dfa48:
    if (ctx->pc == 0x1DFA48u) {
        ctx->pc = 0x1DFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA44u;
        // 0x1dfa48: 0x8e442af4  lw          $a0, 0x2AF4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA4Cu;
        goto label_1dfa4c;
    }
    ctx->pc = 0x1DFA44u;
    {
        const bool branch_taken_0x1dfa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA44u;
        // 0x1dfa48: 0x8e442af4  lw          $a0, 0x2AF4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa44) {
            ctx->pc = 0x1DFA58u;
            goto label_1dfa58;
        }
    }
    ctx->pc = 0x1DFA4Cu;
label_1dfa4c:
    // 0x1dfa4c: 0xc067b9c  jal         func_19EE70
label_1dfa50:
    if (ctx->pc == 0x1DFA50u) {
        ctx->pc = 0x1DFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA4Cu;
        // 0x1dfa50: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA54u;
        goto label_1dfa54;
    }
    ctx->pc = 0x1DFA4Cu;
    SET_GPR_U32(ctx, 31, 0x1DFA54u);
    ctx->pc = 0x1DFA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA4Cu;
    // 0x1dfa50: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFA4Cu, 0x1DFA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA54u;
label_1dfa54:
    // 0x1dfa54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dfa58:
    // 0x1dfa58: 0xc079f96  jal         func_1E7E58
label_1dfa5c:
    if (ctx->pc == 0x1DFA5Cu) {
        ctx->pc = 0x1DFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA58u;
        // 0x1dfa5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA60u;
        goto label_1dfa60;
    }
    ctx->pc = 0x1DFA58u;
    SET_GPR_U32(ctx, 31, 0x1DFA60u);
    ctx->pc = 0x1DFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA58u;
    // 0x1dfa5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DFA58u, 0x1DFA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA60u;
label_1dfa60:
    // 0x1dfa60: 0x26422af0  addiu       $v0, $s2, 0x2AF0
    ctx->pc = 0x1dfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
label_1dfa64:
    // 0x1dfa64: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1dfa68:
    // 0x1dfa68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa6c:
    // 0x1dfa6c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1dfa6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfa70:
    // 0x1dfa70: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1dfa74:
    if (ctx->pc == 0x1DFA74u) {
        ctx->pc = 0x1DFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA70u;
        // 0x1dfa74: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA78u;
        goto label_1dfa78;
    }
    ctx->pc = 0x1DFA70u;
    {
        const bool branch_taken_0x1dfa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA70u;
        // 0x1dfa74: 0x26a5d310  addiu       $a1, $s5, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa70) {
            ctx->pc = 0x1DFAE0u;
            goto label_1dfae0;
        }
    }
    ctx->pc = 0x1DFA78u;
label_1dfa78:
    // 0x1dfa78: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_1dfa7c:
    if (ctx->pc == 0x1DFA7Cu) {
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA80u;
        goto label_1dfa80;
    }
    ctx->pc = 0x1DFA78u;
    {
        const bool branch_taken_0x1dfa78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa78) {
            ctx->pc = 0x1DFA90u;
            goto label_1dfa90;
        }
    }
    ctx->pc = 0x1DFA80u;
label_1dfa80:
    // 0x1dfa80: 0xc067b9c  jal         func_19EE70
label_1dfa84:
    if (ctx->pc == 0x1DFA84u) {
        ctx->pc = 0x1DFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA80u;
        // 0x1dfa84: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA88u;
        goto label_1dfa88;
    }
    ctx->pc = 0x1DFA80u;
    SET_GPR_U32(ctx, 31, 0x1DFA88u);
    ctx->pc = 0x1DFA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA80u;
    // 0x1dfa84: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFA80u, 0x1DFA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA88u;
label_1dfa88:
    // 0x1dfa88: 0x10000006  b           . + 4 + (0x6 << 2)
label_1dfa8c:
    if (ctx->pc == 0x1DFA8Cu) {
        ctx->pc = 0x1DFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA88u;
        // 0x1dfa8c: 0x8e442af0  lw          $a0, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA90u;
        goto label_1dfa90;
    }
    ctx->pc = 0x1DFA88u;
    {
        const bool branch_taken_0x1dfa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA88u;
        // 0x1dfa8c: 0x8e442af0  lw          $a0, 0x2AF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa88) {
            ctx->pc = 0x1DFAA4u;
            goto label_1dfaa4;
        }
    }
    ctx->pc = 0x1DFA90u;
label_1dfa90:
    // 0x1dfa90: 0x16820008  bne         $s4, $v0, . + 4 + (0x8 << 2)
label_1dfa94:
    if (ctx->pc == 0x1DFA94u) {
        ctx->pc = 0x1DFA98u;
        goto label_1dfa98;
    }
    ctx->pc = 0x1DFA90u;
    {
        const bool branch_taken_0x1dfa90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfa90) {
            ctx->pc = 0x1DFAB4u;
            goto label_1dfab4;
        }
    }
    ctx->pc = 0x1DFA98u;
label_1dfa98:
    // 0x1dfa98: 0xc067b9c  jal         func_19EE70
label_1dfa9c:
    if (ctx->pc == 0x1DFA9Cu) {
        ctx->pc = 0x1DFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA98u;
        // 0x1dfa9c: 0x24040101  addiu       $a0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAA0u;
        goto label_1dfaa0;
    }
    ctx->pc = 0x1DFA98u;
    SET_GPR_U32(ctx, 31, 0x1DFAA0u);
    ctx->pc = 0x1DFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA98u;
    // 0x1dfa9c: 0x24040101  addiu       $a0, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFA98u, 0x1DFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAA0u;
label_1dfaa0:
    // 0x1dfaa0: 0x8e442af4  lw          $a0, 0x2AF4($s2)
    ctx->pc = 0x1dfaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dfaa4:
    // 0x1dfaa4: 0xc079f96  jal         func_1E7E58
label_1dfaa8:
    if (ctx->pc == 0x1DFAA8u) {
        ctx->pc = 0x1DFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA4u;
        // 0x1dfaa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAACu;
        goto label_1dfaac;
    }
    ctx->pc = 0x1DFAA4u;
    SET_GPR_U32(ctx, 31, 0x1DFAACu);
    ctx->pc = 0x1DFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAA4u;
    // 0x1dfaa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DFAA4u, 0x1DFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAACu;
label_1dfaac:
    // 0x1dfaac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dfab0:
    if (ctx->pc == 0x1DFAB0u) {
        ctx->pc = 0x1DFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAACu;
        // 0x1dfab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAB4u;
        goto label_1dfab4;
    }
    ctx->pc = 0x1DFAACu;
    {
        const bool branch_taken_0x1dfaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAACu;
        // 0x1dfab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaac) {
            ctx->pc = 0x1DFACCu;
            goto label_1dfacc;
        }
    }
    ctx->pc = 0x1DFAB4u;
label_1dfab4:
    // 0x1dfab4: 0xc067b9c  jal         func_19EE70
label_1dfab8:
    if (ctx->pc == 0x1DFAB8u) {
        ctx->pc = 0x1DFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAB4u;
        // 0x1dfab8: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFABCu;
        goto label_1dfabc;
    }
    ctx->pc = 0x1DFAB4u;
    SET_GPR_U32(ctx, 31, 0x1DFABCu);
    ctx->pc = 0x1DFAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAB4u;
    // 0x1dfab8: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFAB4u, 0x1DFABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFABCu;
label_1dfabc:
    // 0x1dfabc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dfabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dfac0:
    // 0x1dfac0: 0xc079f96  jal         func_1E7E58
label_1dfac4:
    if (ctx->pc == 0x1DFAC4u) {
        ctx->pc = 0x1DFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAC0u;
        // 0x1dfac4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAC8u;
        goto label_1dfac8;
    }
    ctx->pc = 0x1DFAC0u;
    SET_GPR_U32(ctx, 31, 0x1DFAC8u);
    ctx->pc = 0x1DFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAC0u;
    // 0x1dfac4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DFAC0u, 0x1DFAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAC8u;
label_1dfac8:
    // 0x1dfac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dfacc:
    // 0x1dfacc: 0x56820010  bnel        $s4, $v0, . + 4 + (0x10 << 2)
label_1dfad0:
    if (ctx->pc == 0x1DFAD0u) {
        ctx->pc = 0x1DFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFACCu;
        // 0x1dfad0: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAD4u;
        goto label_1dfad4;
    }
    ctx->pc = 0x1DFACCu;
    {
        const bool branch_taken_0x1dfacc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfacc) {
            ctx->pc = 0x1DFAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFACCu;
            // 0x1dfad0: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB10u;
            goto label_1dfb10;
        }
    }
    ctx->pc = 0x1DFAD4u;
label_1dfad4:
    // 0x1dfad4: 0x8e512af8  lw          $s1, 0x2AF8($s2)
    ctx->pc = 0x1dfad4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dfad8:
    // 0x1dfad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dfadc:
    // 0x1dfadc: 0x26c5d320  addiu       $a1, $s6, -0x2CE0
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955808));
label_1dfae0:
    // 0x1dfae0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfae4:
    // 0x1dfae4: 0x860200d0  lh          $v0, 0xD0($s0)
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
label_1dfae8:
    // 0x1dfae8: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1dfae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1dfaec:
    // 0x1dfaec: 0xc077db4  jal         func_1DF6D0
label_1dfaf0:
    if (ctx->pc == 0x1DFAF0u) {
        ctx->pc = 0x1DFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAECu;
        // 0x1dfaf0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAF4u;
        goto label_1dfaf4;
    }
    ctx->pc = 0x1DFAECu;
    SET_GPR_U32(ctx, 31, 0x1DFAF4u);
    ctx->pc = 0x1DFAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAECu;
    // 0x1dfaf0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6D0u, 0x1DFAECu, 0x1DFAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAF4u;
label_1dfaf4:
    // 0x1dfaf4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dfaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dfaf8:
    // 0x1dfaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dfafc:
    // 0x1dfafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dfafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb00:
    // 0x1dfb00: 0x60f809  jalr        $v1
label_1dfb04:
    if (ctx->pc == 0x1DFB04u) {
        ctx->pc = 0x1DFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB00u;
        // 0x1dfb04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB08u;
        goto label_1dfb08;
    }
    ctx->pc = 0x1DFB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DFB08u);
        ctx->pc = 0x1DFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB00u;
        // 0x1dfb04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB00u, 0x1DFB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFB08u;
label_1dfb08:
    // 0x1dfb08: 0x1000000e  b           . + 4 + (0xE << 2)
label_1dfb0c:
    if (ctx->pc == 0x1DFB0Cu) {
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB10u;
        goto label_1dfb10;
    }
    ctx->pc = 0x1DFB08u;
    {
        const bool branch_taken_0x1dfb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb08) {
            ctx->pc = 0x1DFB44u;
            goto label_1dfb44;
        }
    }
    ctx->pc = 0x1DFB10u;
label_1dfb10:
    // 0x1dfb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb14:
    // 0x1dfb14: 0x26a5d310  addiu       $a1, $s5, -0x2CF0
    ctx->pc = 0x1dfb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
label_1dfb18:
    // 0x1dfb18: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1dfb18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfb1c:
    // 0x1dfb1c: 0x860200d0  lh          $v0, 0xD0($s0)
    ctx->pc = 0x1dfb1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
label_1dfb20:
    // 0x1dfb20: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1dfb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1dfb24:
    // 0x1dfb24: 0xc077db4  jal         func_1DF6D0
label_1dfb28:
    if (ctx->pc == 0x1DFB28u) {
        ctx->pc = 0x1DFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB24u;
        // 0x1dfb28: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB2Cu;
        goto label_1dfb2c;
    }
    ctx->pc = 0x1DFB24u;
    SET_GPR_U32(ctx, 31, 0x1DFB2Cu);
    ctx->pc = 0x1DFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB24u;
    // 0x1dfb28: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6D0u, 0x1DFB24u, 0x1DFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB2Cu;
label_1dfb2c:
    // 0x1dfb2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dfb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dfb30:
    // 0x1dfb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb34:
    // 0x1dfb34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dfb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb38:
    // 0x1dfb38: 0x60f809  jalr        $v1
label_1dfb3c:
    if (ctx->pc == 0x1DFB3Cu) {
        ctx->pc = 0x1DFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB38u;
        // 0x1dfb3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB40u;
        goto label_1dfb40;
    }
    ctx->pc = 0x1DFB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DFB40u);
        ctx->pc = 0x1DFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB38u;
        // 0x1dfb3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB38u, 0x1DFB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFB40u;
label_1dfb40:
    // 0x1dfb40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1dfb44:
    // 0x1dfb44: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1dfb44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_1dfb48:
    // 0x1dfb48: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1dfb4c:
    // 0x1dfb4c: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x1dfb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1dfb50:
    // 0x1dfb50: 0x1440ff37  bnez        $v0, . + 4 + (-0xC9 << 2)
label_1dfb54:
    if (ctx->pc == 0x1DFB54u) {
        ctx->pc = 0x1DFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB50u;
        // 0x1dfb54: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB58u;
        goto label_1dfb58;
    }
    ctx->pc = 0x1DFB50u;
    {
        const bool branch_taken_0x1dfb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB50u;
        // 0x1dfb54: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb50) {
            ctx->pc = 0x1DF830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df830;
        }
    }
    ctx->pc = 0x1DFB58u;
label_1dfb58:
    // 0x1dfb58: 0x8e423a78  lw          $v0, 0x3A78($s2)
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14968)));
label_1dfb5c:
    // 0x1dfb5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1dfb60:
    if (ctx->pc == 0x1DFB60u) {
        ctx->pc = 0x1DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB5Cu;
        // 0x1dfb60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB64u;
        goto label_1dfb64;
    }
    ctx->pc = 0x1DFB5Cu;
    {
        const bool branch_taken_0x1dfb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB5Cu;
        // 0x1dfb60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb5c) {
            ctx->pc = 0x1DFB74u;
            goto label_1dfb74;
        }
    }
    ctx->pc = 0x1DFB64u;
label_1dfb64:
    // 0x1dfb64: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1dfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1dfb68:
    // 0x1dfb68: 0x8c64011c  lw          $a0, 0x11C($v1)
    ctx->pc = 0x1dfb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_1dfb6c:
    // 0x1dfb6c: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
label_1dfb70:
    if (ctx->pc == 0x1DFB70u) {
        ctx->pc = 0x1DFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB6Cu;
        // 0x1dfb70: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB74u;
        goto label_1dfb74;
    }
    ctx->pc = 0x1DFB6Cu;
    {
        const bool branch_taken_0x1dfb6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB6Cu;
        // 0x1dfb70: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb6c) {
            ctx->pc = 0x1DFBD8u;
            goto label_1dfbd8;
        }
    }
    ctx->pc = 0x1DFB74u;
label_1dfb74:
    // 0x1dfb74: 0x92453b9c  lbu         $a1, 0x3B9C($s2)
    ctx->pc = 0x1dfb74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15260)));
label_1dfb78:
    // 0x1dfb78: 0x26502dd0  addiu       $s0, $s2, 0x2DD0
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11728));
label_1dfb7c:
    // 0x1dfb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb80:
    // 0x1dfb80: 0xc073b26  jal         func_1CEC98
label_1dfb84:
    if (ctx->pc == 0x1DFB84u) {
        ctx->pc = 0x1DFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB80u;
        // 0x1dfb84: 0x26512b00  addiu       $s1, $s2, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB88u;
        goto label_1dfb88;
    }
    ctx->pc = 0x1DFB80u;
    SET_GPR_U32(ctx, 31, 0x1DFB88u);
    ctx->pc = 0x1DFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB80u;
    // 0x1dfb84: 0x26512b00  addiu       $s1, $s2, 0x2B00 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC98u, 0x1DFB80u, 0x1DFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB88u;
label_1dfb88:
    // 0x1dfb88: 0xc073b62  jal         func_1CED88
label_1dfb8c:
    if (ctx->pc == 0x1DFB8Cu) {
        ctx->pc = 0x1DFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB88u;
        // 0x1dfb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB90u;
        goto label_1dfb90;
    }
    ctx->pc = 0x1DFB88u;
    SET_GPR_U32(ctx, 31, 0x1DFB90u);
    ctx->pc = 0x1DFB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB88u;
    // 0x1dfb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1DFB88u, 0x1DFB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB90u;
label_1dfb90:
    // 0x1dfb90: 0x92453b9c  lbu         $a1, 0x3B9C($s2)
    ctx->pc = 0x1dfb90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15260)));
label_1dfb94:
    // 0x1dfb94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb98:
    // 0x1dfb98: 0xc075392  jal         func_1D4E48
label_1dfb9c:
    if (ctx->pc == 0x1DFB9Cu) {
        ctx->pc = 0x1DFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB98u;
        // 0x1dfb9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBA0u;
        goto label_1dfba0;
    }
    ctx->pc = 0x1DFB98u;
    SET_GPR_U32(ctx, 31, 0x1DFBA0u);
    ctx->pc = 0x1DFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB98u;
    // 0x1dfb9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E48u, 0x1DFB98u, 0x1DFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBA0u;
label_1dfba0:
    // 0x1dfba0: 0xc0754b2  jal         func_1D52C8
label_1dfba4:
    if (ctx->pc == 0x1DFBA4u) {
        ctx->pc = 0x1DFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBA0u;
        // 0x1dfba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBA8u;
        goto label_1dfba8;
    }
    ctx->pc = 0x1DFBA0u;
    SET_GPR_U32(ctx, 31, 0x1DFBA8u);
    ctx->pc = 0x1DFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBA0u;
    // 0x1dfba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1DFBA0u, 0x1DFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBA8u;
label_1dfba8:
    // 0x1dfba8: 0x8e421ba0  lw          $v0, 0x1BA0($s2)
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7072)));
label_1dfbac:
    // 0x1dfbac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1dfbb0:
    if (ctx->pc == 0x1DFBB0u) {
        ctx->pc = 0x1DFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBACu;
        // 0x1dfbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBB4u;
        goto label_1dfbb4;
    }
    ctx->pc = 0x1DFBACu;
    {
        const bool branch_taken_0x1dfbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBACu;
        // 0x1dfbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbac) {
            ctx->pc = 0x1DFBD4u;
            goto label_1dfbd4;
        }
    }
    ctx->pc = 0x1DFBB4u;
label_1dfbb4:
    // 0x1dfbb4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1dfbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1dfbb8:
    // 0x1dfbb8: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x1dfbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
label_1dfbbc:
    // 0x1dfbbc: 0xc077db4  jal         func_1DF6D0
label_1dfbc0:
    if (ctx->pc == 0x1DFBC0u) {
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x26501bd0  addiu       $s0, $s2, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBC4u;
        goto label_1dfbc4;
    }
    ctx->pc = 0x1DFBBCu;
    SET_GPR_U32(ctx, 31, 0x1DFBC4u);
    ctx->pc = 0x1DFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBBCu;
    // 0x1dfbc0: 0x26501bd0  addiu       $s0, $s2, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6D0u, 0x1DFBBCu, 0x1DFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBC4u;
label_1dfbc4:
    // 0x1dfbc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dfbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1dfbc8:
    // 0x1dfbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfbcc:
    // 0x1dfbcc: 0xc075ac0  jal         func_1D6B00
label_1dfbd0:
    if (ctx->pc == 0x1DFBD0u) {
        ctx->pc = 0x1DFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBCCu;
        // 0x1dfbd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBD4u;
        goto label_1dfbd4;
    }
    ctx->pc = 0x1DFBCCu;
    SET_GPR_U32(ctx, 31, 0x1DFBD4u);
    ctx->pc = 0x1DFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBCCu;
    // 0x1dfbd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6B00u, 0x1DFBCCu, 0x1DFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBD4u;
label_1dfbd4:
    // 0x1dfbd4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1dfbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1dfbd8:
    // 0x1dfbd8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1dfbd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1dfbdc:
    // 0x1dfbdc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1dfbdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1dfbe0:
    // 0x1dfbe0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1dfbe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1dfbe4:
    // 0x1dfbe4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1dfbe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dfbe8:
    // 0x1dfbe8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dfbe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dfbec:
    // 0x1dfbec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1dfbecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dfbf0:
    // 0x1dfbf0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1dfbf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dfbf4:
    // 0x1dfbf4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1dfbf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfbf8:
    // 0x1dfbf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfbfc:
    // 0x1dfbfc: 0x3e00008  jr          $ra
label_1dfc00:
    if (ctx->pc == 0x1DFC00u) {
        ctx->pc = 0x1DFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBFCu;
        // 0x1dfc00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC04u;
        goto label_1dfc04;
    }
    ctx->pc = 0x1DFBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBFCu;
        // 0x1dfc00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC04u;
label_1dfc04:
    // 0x1dfc04: 0x0  nop
    ctx->pc = 0x1dfc04u;
    // NOP
    ctx->pc = 0x1dfc08u;
}
