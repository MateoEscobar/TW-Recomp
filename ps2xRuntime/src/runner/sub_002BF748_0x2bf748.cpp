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

// Function: sub_002BF748
// Address: 0x2bf748 - 0x2bfc48
void sub_002BF748_0x2bf748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF748_0x2bf748");
#endif

    switch (ctx->pc) {
        case 0x2bf748u: goto label_2bf748;
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf750u: goto label_2bf750;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf758u: goto label_2bf758;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf760u: goto label_2bf760;
        case 0x2bf764u: goto label_2bf764;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf76cu: goto label_2bf76c;
        case 0x2bf770u: goto label_2bf770;
        case 0x2bf774u: goto label_2bf774;
        case 0x2bf778u: goto label_2bf778;
        case 0x2bf77cu: goto label_2bf77c;
        case 0x2bf780u: goto label_2bf780;
        case 0x2bf784u: goto label_2bf784;
        case 0x2bf788u: goto label_2bf788;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf790u: goto label_2bf790;
        case 0x2bf794u: goto label_2bf794;
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf79cu: goto label_2bf79c;
        case 0x2bf7a0u: goto label_2bf7a0;
        case 0x2bf7a4u: goto label_2bf7a4;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7acu: goto label_2bf7ac;
        case 0x2bf7b0u: goto label_2bf7b0;
        case 0x2bf7b4u: goto label_2bf7b4;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7bcu: goto label_2bf7bc;
        case 0x2bf7c0u: goto label_2bf7c0;
        case 0x2bf7c4u: goto label_2bf7c4;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf7ccu: goto label_2bf7cc;
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf830u: goto label_2bf830;
        case 0x2bf834u: goto label_2bf834;
        case 0x2bf838u: goto label_2bf838;
        case 0x2bf83cu: goto label_2bf83c;
        case 0x2bf840u: goto label_2bf840;
        case 0x2bf844u: goto label_2bf844;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf84cu: goto label_2bf84c;
        case 0x2bf850u: goto label_2bf850;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf858u: goto label_2bf858;
        case 0x2bf85cu: goto label_2bf85c;
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf864u: goto label_2bf864;
        case 0x2bf868u: goto label_2bf868;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf870u: goto label_2bf870;
        case 0x2bf874u: goto label_2bf874;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf87cu: goto label_2bf87c;
        case 0x2bf880u: goto label_2bf880;
        case 0x2bf884u: goto label_2bf884;
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf88cu: goto label_2bf88c;
        case 0x2bf890u: goto label_2bf890;
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf89cu: goto label_2bf89c;
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8acu: goto label_2bf8ac;
        case 0x2bf8b0u: goto label_2bf8b0;
        case 0x2bf8b4u: goto label_2bf8b4;
        case 0x2bf8b8u: goto label_2bf8b8;
        case 0x2bf8bcu: goto label_2bf8bc;
        case 0x2bf8c0u: goto label_2bf8c0;
        case 0x2bf8c4u: goto label_2bf8c4;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8d0u: goto label_2bf8d0;
        case 0x2bf8d4u: goto label_2bf8d4;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e0u: goto label_2bf8e0;
        case 0x2bf8e4u: goto label_2bf8e4;
        case 0x2bf8e8u: goto label_2bf8e8;
        case 0x2bf8ecu: goto label_2bf8ec;
        case 0x2bf8f0u: goto label_2bf8f0;
        case 0x2bf8f4u: goto label_2bf8f4;
        case 0x2bf8f8u: goto label_2bf8f8;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf900u: goto label_2bf900;
        case 0x2bf904u: goto label_2bf904;
        case 0x2bf908u: goto label_2bf908;
        case 0x2bf90cu: goto label_2bf90c;
        case 0x2bf910u: goto label_2bf910;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf918u: goto label_2bf918;
        case 0x2bf91cu: goto label_2bf91c;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        case 0x2bf958u: goto label_2bf958;
        case 0x2bf95cu: goto label_2bf95c;
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfab4u: goto label_2bfab4;
        case 0x2bfab8u: goto label_2bfab8;
        case 0x2bfabcu: goto label_2bfabc;
        case 0x2bfac0u: goto label_2bfac0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfac8u: goto label_2bfac8;
        case 0x2bfaccu: goto label_2bfacc;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfad4u: goto label_2bfad4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfadcu: goto label_2bfadc;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfaf4u: goto label_2bfaf4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfafcu: goto label_2bfafc;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb08u: goto label_2bfb08;
        case 0x2bfb0cu: goto label_2bfb0c;
        case 0x2bfb10u: goto label_2bfb10;
        case 0x2bfb14u: goto label_2bfb14;
        case 0x2bfb18u: goto label_2bfb18;
        case 0x2bfb1cu: goto label_2bfb1c;
        case 0x2bfb20u: goto label_2bfb20;
        case 0x2bfb24u: goto label_2bfb24;
        case 0x2bfb28u: goto label_2bfb28;
        case 0x2bfb2cu: goto label_2bfb2c;
        case 0x2bfb30u: goto label_2bfb30;
        case 0x2bfb34u: goto label_2bfb34;
        case 0x2bfb38u: goto label_2bfb38;
        case 0x2bfb3cu: goto label_2bfb3c;
        case 0x2bfb40u: goto label_2bfb40;
        case 0x2bfb44u: goto label_2bfb44;
        case 0x2bfb48u: goto label_2bfb48;
        case 0x2bfb4cu: goto label_2bfb4c;
        case 0x2bfb50u: goto label_2bfb50;
        case 0x2bfb54u: goto label_2bfb54;
        case 0x2bfb58u: goto label_2bfb58;
        case 0x2bfb5cu: goto label_2bfb5c;
        case 0x2bfb60u: goto label_2bfb60;
        case 0x2bfb64u: goto label_2bfb64;
        case 0x2bfb68u: goto label_2bfb68;
        case 0x2bfb6cu: goto label_2bfb6c;
        case 0x2bfb70u: goto label_2bfb70;
        case 0x2bfb74u: goto label_2bfb74;
        case 0x2bfb78u: goto label_2bfb78;
        case 0x2bfb7cu: goto label_2bfb7c;
        case 0x2bfb80u: goto label_2bfb80;
        case 0x2bfb84u: goto label_2bfb84;
        case 0x2bfb88u: goto label_2bfb88;
        case 0x2bfb8cu: goto label_2bfb8c;
        case 0x2bfb90u: goto label_2bfb90;
        case 0x2bfb94u: goto label_2bfb94;
        case 0x2bfb98u: goto label_2bfb98;
        case 0x2bfb9cu: goto label_2bfb9c;
        case 0x2bfba0u: goto label_2bfba0;
        case 0x2bfba4u: goto label_2bfba4;
        case 0x2bfba8u: goto label_2bfba8;
        case 0x2bfbacu: goto label_2bfbac;
        case 0x2bfbb0u: goto label_2bfbb0;
        case 0x2bfbb4u: goto label_2bfbb4;
        case 0x2bfbb8u: goto label_2bfbb8;
        case 0x2bfbbcu: goto label_2bfbbc;
        case 0x2bfbc0u: goto label_2bfbc0;
        case 0x2bfbc4u: goto label_2bfbc4;
        case 0x2bfbc8u: goto label_2bfbc8;
        case 0x2bfbccu: goto label_2bfbcc;
        case 0x2bfbd0u: goto label_2bfbd0;
        case 0x2bfbd4u: goto label_2bfbd4;
        case 0x2bfbd8u: goto label_2bfbd8;
        case 0x2bfbdcu: goto label_2bfbdc;
        case 0x2bfbe0u: goto label_2bfbe0;
        case 0x2bfbe4u: goto label_2bfbe4;
        case 0x2bfbe8u: goto label_2bfbe8;
        case 0x2bfbecu: goto label_2bfbec;
        case 0x2bfbf0u: goto label_2bfbf0;
        case 0x2bfbf4u: goto label_2bfbf4;
        case 0x2bfbf8u: goto label_2bfbf8;
        case 0x2bfbfcu: goto label_2bfbfc;
        case 0x2bfc00u: goto label_2bfc00;
        case 0x2bfc04u: goto label_2bfc04;
        case 0x2bfc08u: goto label_2bfc08;
        case 0x2bfc0cu: goto label_2bfc0c;
        case 0x2bfc10u: goto label_2bfc10;
        case 0x2bfc14u: goto label_2bfc14;
        case 0x2bfc18u: goto label_2bfc18;
        case 0x2bfc1cu: goto label_2bfc1c;
        case 0x2bfc20u: goto label_2bfc20;
        case 0x2bfc24u: goto label_2bfc24;
        case 0x2bfc28u: goto label_2bfc28;
        case 0x2bfc2cu: goto label_2bfc2c;
        case 0x2bfc30u: goto label_2bfc30;
        case 0x2bfc34u: goto label_2bfc34;
        case 0x2bfc38u: goto label_2bfc38;
        case 0x2bfc3cu: goto label_2bfc3c;
        case 0x2bfc40u: goto label_2bfc40;
        case 0x2bfc44u: goto label_2bfc44;
        default: break;
    }

    ctx->pc = 0x2bf748u;

label_2bf748:
    // 0x2bf748: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2bf748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2bf74c:
    // 0x2bf74c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bf750:
    // 0x2bf750: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2bf750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2bf754:
    // 0x2bf754: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2bf754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2bf758:
    // 0x2bf758: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf75c:
    // 0x2bf75c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2bf75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2bf760:
    // 0x2bf760: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2bf760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2bf764:
    // 0x2bf764: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2bf764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2bf768:
    // 0x2bf768: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2bf768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2bf76c:
    // 0x2bf76c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bf76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2bf770:
    // 0x2bf770: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2bf770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2bf774:
    // 0x2bf774: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2bf774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2bf778:
    // 0x2bf778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bf77c:
    // 0x2bf77c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bf77cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2bf780:
    // 0x2bf780: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2bf780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2bf784:
    // 0x2bf784: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf788:
    // 0x2bf788: 0x8c750048  lw          $s5, 0x48($v1)
    ctx->pc = 0x2bf788u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bf78c:
    // 0x2bf78c: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x2bf78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2bf790:
    // 0x2bf790: 0xc05959e  jal         func_165678
label_2bf794:
    if (ctx->pc == 0x2BF794u) {
        ctx->pc = 0x2BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF790u;
        // 0x2bf794: 0x8cb30000  lw          $s3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF798u;
        goto label_2bf798;
    }
    ctx->pc = 0x2BF790u;
    SET_GPR_U32(ctx, 31, 0x2BF798u);
    ctx->pc = 0x2BF794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF790u;
    // 0x2bf794: 0x8cb30000  lw          $s3, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BF790u, 0x2BF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF798u;
label_2bf798:
    // 0x2bf798: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bf798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf79c:
    // 0x2bf79c: 0x1240011c  beqz        $s2, . + 4 + (0x11C << 2)
label_2bf7a0:
    if (ctx->pc == 0x2BF7A0u) {
        ctx->pc = 0x2BF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF79Cu;
        // 0x2bf7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7A4u;
        goto label_2bf7a4;
    }
    ctx->pc = 0x2BF79Cu;
    {
        const bool branch_taken_0x2bf79c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF79Cu;
        // 0x2bf7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf79c) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BF7A4u;
label_2bf7a4:
    // 0x2bf7a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bf7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf7a8:
    // 0x2bf7a8: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x2bf7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_2bf7ac:
    // 0x2bf7ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2bf7b0:
    if (ctx->pc == 0x2BF7B0u) {
        ctx->pc = 0x2BF7B4u;
        goto label_2bf7b4;
    }
    ctx->pc = 0x2BF7ACu;
    {
        const bool branch_taken_0x2bf7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7ac) {
            ctx->pc = 0x2BF7C0u;
            goto label_2bf7c0;
        }
    }
    ctx->pc = 0x2BF7B4u;
label_2bf7b4:
    // 0x2bf7b4: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2bf7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2bf7b8:
    // 0x2bf7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf7bc:
    // 0x2bf7bc: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x2bf7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_2bf7c0:
    // 0x2bf7c0: 0xc0afb9e  jal         func_2BEE78
label_2bf7c4:
    if (ctx->pc == 0x2BF7C4u) {
        ctx->pc = 0x2BF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C0u;
        // 0x2bf7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7C8u;
        goto label_2bf7c8;
    }
    ctx->pc = 0x2BF7C0u;
    SET_GPR_U32(ctx, 31, 0x2BF7C8u);
    ctx->pc = 0x2BF7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7C0u;
    // 0x2bf7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEE78u, 0x2BF7C0u, 0x2BF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7C8u;
label_2bf7c8:
    // 0x2bf7c8: 0x14400111  bnez        $v0, . + 4 + (0x111 << 2)
label_2bf7cc:
    if (ctx->pc == 0x2BF7CCu) {
        ctx->pc = 0x2BF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C8u;
        // 0x2bf7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7D0u;
        goto label_2bf7d0;
    }
    ctx->pc = 0x2BF7C8u;
    {
        const bool branch_taken_0x2bf7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C8u;
        // 0x2bf7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7c8) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BF7D0u;
label_2bf7d0:
    // 0x2bf7d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf7d4:
    // 0x2bf7d4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2bf7d8:
    // 0x2bf7d8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_2bf7dc:
    if (ctx->pc == 0x2BF7DCu) {
        ctx->pc = 0x2BF7E0u;
        goto label_2bf7e0;
    }
    ctx->pc = 0x2BF7D8u;
    {
        const bool branch_taken_0x2bf7d8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2bf7d8) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF7E0u;
label_2bf7e0:
    // 0x2bf7e0: 0xc08a148  jal         func_228520
label_2bf7e4:
    if (ctx->pc == 0x2BF7E4u) {
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E8u;
        goto label_2bf7e8;
    }
    ctx->pc = 0x2BF7E0u;
    SET_GPR_U32(ctx, 31, 0x2BF7E8u);
    ctx->pc = 0x2BF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7E0u;
    // 0x2bf7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228520u, 0x2BF7E0u, 0x2BF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7E8u;
label_2bf7e8:
    // 0x2bf7e8: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
label_2bf7ec:
    if (ctx->pc == 0x2BF7ECu) {
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F0u;
        goto label_2bf7f0;
    }
    ctx->pc = 0x2BF7E8u;
    {
        const bool branch_taken_0x2bf7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e8) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BF7F0u;
label_2bf7f0:
    // 0x2bf7f0: 0xc0afc46  jal         func_2BF118
label_2bf7f4:
    if (ctx->pc == 0x2BF7F4u) {
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F8u;
        goto label_2bf7f8;
    }
    ctx->pc = 0x2BF7F0u;
    SET_GPR_U32(ctx, 31, 0x2BF7F8u);
    ctx->pc = 0x2BF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7F0u;
    // 0x2bf7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF118u, 0x2BF7F0u, 0x2BF7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7F8u;
label_2bf7f8:
    // 0x2bf7f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bf7fc:
    if (ctx->pc == 0x2BF7FCu) {
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF800u;
        goto label_2bf800;
    }
    ctx->pc = 0x2BF7F8u;
    {
        const bool branch_taken_0x2bf7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f8) {
            ctx->pc = 0x2BF808u;
            goto label_2bf808;
        }
    }
    ctx->pc = 0x2BF800u;
label_2bf800:
    // 0x2bf800: 0x10000102  b           . + 4 + (0x102 << 2)
label_2bf804:
    if (ctx->pc == 0x2BF804u) {
        ctx->pc = 0x2BF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF800u;
        // 0x2bf804: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF808u;
        goto label_2bf808;
    }
    ctx->pc = 0x2BF800u;
    {
        const bool branch_taken_0x2bf800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF800u;
        // 0x2bf804: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf800) {
            ctx->pc = 0x2BFC0Cu;
            goto label_2bfc0c;
        }
    }
    ctx->pc = 0x2BF808u;
label_2bf808:
    // 0x2bf808: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2bf808u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2bf80c:
    // 0x2bf80c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x2bf80cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2bf810:
    // 0x2bf810: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2bf814:
    // 0x2bf814: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2bf814u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf818:
    // 0x2bf818: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bf818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bf81c:
    // 0x2bf81c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2bf81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2bf820:
    // 0x2bf820: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bf820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2bf824:
    // 0x2bf824: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x2bf824u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bf828:
    // 0x2bf828: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x2bf828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2bf82c:
    // 0x2bf82c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2bf82cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf830:
    // 0x2bf830: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bf830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bf834:
    // 0x2bf834: 0xc0cdb38  jal         func_336CE0
label_2bf838:
    if (ctx->pc == 0x2BF838u) {
        ctx->pc = 0x2BF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF834u;
        // 0x2bf838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF83Cu;
        goto label_2bf83c;
    }
    ctx->pc = 0x2BF834u;
    SET_GPR_U32(ctx, 31, 0x2BF83Cu);
    ctx->pc = 0x2BF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF834u;
    // 0x2bf838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BF834u, 0x2BF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF83Cu;
label_2bf83c:
    // 0x2bf83c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bf83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf840:
    // 0x2bf840: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bf840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bf844:
    // 0x2bf844: 0xc05a596  jal         func_169658
label_2bf848:
    if (ctx->pc == 0x2BF848u) {
        ctx->pc = 0x2BF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF844u;
        // 0x2bf848: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF84Cu;
        goto label_2bf84c;
    }
    ctx->pc = 0x2BF844u;
    SET_GPR_U32(ctx, 31, 0x2BF84Cu);
    ctx->pc = 0x2BF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF844u;
    // 0x2bf848: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2BF844u, 0x2BF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF84Cu;
label_2bf84c:
    // 0x2bf84c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf850:
    // 0x2bf850: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2bf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2bf854:
    // 0x2bf854: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2bf858:
    if (ctx->pc == 0x2BF858u) {
        ctx->pc = 0x2BF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF854u;
        // 0x2bf858: 0x26a207d0  addiu       $v0, $s5, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF85Cu;
        goto label_2bf85c;
    }
    ctx->pc = 0x2BF854u;
    {
        const bool branch_taken_0x2bf854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF854u;
        // 0x2bf858: 0x26a207d0  addiu       $v0, $s5, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf854) {
            ctx->pc = 0x2BF860u;
            goto label_2bf860;
        }
    }
    ctx->pc = 0x2BF85Cu;
label_2bf85c:
    // 0x2bf85c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2bf85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2bf860:
    // 0x2bf860: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2bf860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2bf864:
    // 0x2bf864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf868:
    // 0x2bf868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bf86c:
    if (ctx->pc == 0x2BF86Cu) {
        ctx->pc = 0x2BF870u;
        goto label_2bf870;
    }
    ctx->pc = 0x2BF868u;
    {
        const bool branch_taken_0x2bf868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf868) {
            ctx->pc = 0x2BF878u;
            goto label_2bf878;
        }
    }
    ctx->pc = 0x2BF870u;
label_2bf870:
    // 0x2bf870: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2bf874:
    // 0x2bf874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf878:
    // 0x2bf878: 0x0  nop
    ctx->pc = 0x2bf878u;
    // NOP
label_2bf87c:
    // 0x2bf87c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bf87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bf880:
    // 0x2bf880: 0x0  nop
    ctx->pc = 0x2bf880u;
    // NOP
label_2bf884:
    // 0x2bf884: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2bf888:
    if (ctx->pc == 0x2BF888u) {
        ctx->pc = 0x2BF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF884u;
        // 0x2bf888: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF88Cu;
        goto label_2bf88c;
    }
    ctx->pc = 0x2BF884u;
    {
        const bool branch_taken_0x2bf884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF884u;
        // 0x2bf888: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf884) {
            ctx->pc = 0x2BF8A0u;
            goto label_2bf8a0;
        }
    }
    ctx->pc = 0x2BF88Cu;
label_2bf88c:
    // 0x2bf88c: 0x8e4201a8  lw          $v0, 0x1A8($s2)
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_2bf890:
    // 0x2bf890: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2bf890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2bf894:
    // 0x2bf894: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bf894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2bf898:
    // 0x2bf898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bf89c:
    if (ctx->pc == 0x2BF89Cu) {
        ctx->pc = 0x2BF8A0u;
        goto label_2bf8a0;
    }
    ctx->pc = 0x2BF898u;
    {
        const bool branch_taken_0x2bf898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf898) {
            ctx->pc = 0x2BF8A8u;
            goto label_2bf8a8;
        }
    }
    ctx->pc = 0x2BF8A0u;
label_2bf8a0:
    // 0x2bf8a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2bf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2bf8a4:
    // 0x2bf8a4: 0x55182b  sltu        $v1, $v0, $s5
    ctx->pc = 0x2bf8a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2bf8a8:
    // 0x2bf8a8: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
label_2bf8ac:
    if (ctx->pc == 0x2BF8ACu) {
        ctx->pc = 0x2BF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8A8u;
        // 0x2bf8ac: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B0u;
        goto label_2bf8b0;
    }
    ctx->pc = 0x2BF8A8u;
    {
        const bool branch_taken_0x2bf8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8a8) {
            ctx->pc = 0x2BF8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8A8u;
            // 0x2bf8ac: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF938u;
            goto label_2bf938;
        }
    }
    ctx->pc = 0x2BF8B0u;
label_2bf8b0:
    // 0x2bf8b0: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2bf8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2bf8b4:
    // 0x2bf8b4: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2bf8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2bf8b8:
    // 0x2bf8b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2bf8bc:
    if (ctx->pc == 0x2BF8BCu) {
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x92220028  lbu         $v0, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8C0u;
        goto label_2bf8c0;
    }
    ctx->pc = 0x2BF8B8u;
    {
        const bool branch_taken_0x2bf8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8b8) {
            ctx->pc = 0x2BF8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8B8u;
            // 0x2bf8bc: 0x92220028  lbu         $v0, 0x28($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8D0u;
            goto label_2bf8d0;
        }
    }
    ctx->pc = 0x2BF8C0u;
label_2bf8c0:
    // 0x2bf8c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf8c4:
    // 0x2bf8c4: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2bf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2bf8c8:
    // 0x2bf8c8: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x2bf8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_2bf8cc:
    // 0x2bf8cc: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2bf8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2bf8d0:
    // 0x2bf8d0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2bf8d4:
    if (ctx->pc == 0x2BF8D4u) {
        ctx->pc = 0x2BF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8D0u;
        // 0x2bf8d4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8D8u;
        goto label_2bf8d8;
    }
    ctx->pc = 0x2BF8D0u;
    {
        const bool branch_taken_0x2bf8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8d0) {
            ctx->pc = 0x2BF8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8D0u;
            // 0x2bf8d4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF938u;
            goto label_2bf938;
        }
    }
    ctx->pc = 0x2BF8D8u;
label_2bf8d8:
    // 0x2bf8d8: 0xc0a4e54  jal         func_293950
label_2bf8dc:
    if (ctx->pc == 0x2BF8DCu) {
        ctx->pc = 0x2BF8E0u;
        goto label_2bf8e0;
    }
    ctx->pc = 0x2BF8D8u;
    SET_GPR_U32(ctx, 31, 0x2BF8E0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BF8D8u, 0x2BF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8E0u;
label_2bf8e0:
    // 0x2bf8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf8e4:
    // 0x2bf8e4: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2bf8e8:
    if (ctx->pc == 0x2BF8E8u) {
        ctx->pc = 0x2BF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8E4u;
        // 0x2bf8e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8ECu;
        goto label_2bf8ec;
    }
    ctx->pc = 0x2BF8E4u;
    {
        const bool branch_taken_0x2bf8e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8e4) {
            ctx->pc = 0x2BF8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8E4u;
            // 0x2bf8e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF928u;
            goto label_2bf928;
        }
    }
    ctx->pc = 0x2BF8ECu;
label_2bf8ec:
    // 0x2bf8ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf8f0:
    // 0x2bf8f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf8f4:
    // 0x2bf8f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf8f8:
    // 0x2bf8f8: 0x40f809  jalr        $v0
label_2bf8fc:
    if (ctx->pc == 0x2BF8FCu) {
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF900u;
        goto label_2bf900;
    }
    ctx->pc = 0x2BF8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF900u);
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8F8u, 0x2BF900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF900u;
label_2bf900:
    // 0x2bf900: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2bf900u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2bf904:
    // 0x2bf904: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bf904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf908:
    // 0x2bf908: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2bf908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2bf90c:
    // 0x2bf90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf910:
    // 0x2bf910: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bf910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf914:
    // 0x2bf914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf918:
    // 0x2bf918: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf91c:
    // 0x2bf91c: 0xc0b7eea  jal         func_2DFBA8
label_2bf920:
    if (ctx->pc == 0x2BF920u) {
        ctx->pc = 0x2BF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF91Cu;
        // 0x2bf920: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF924u;
        goto label_2bf924;
    }
    ctx->pc = 0x2BF91Cu;
    SET_GPR_U32(ctx, 31, 0x2BF924u);
    ctx->pc = 0x2BF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF91Cu;
    // 0x2bf920: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2BF91Cu, 0x2BF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF924u;
label_2bf924:
    // 0x2bf924: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bf924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf928:
    // 0x2bf928: 0xc0a35d6  jal         func_28D758
label_2bf92c:
    if (ctx->pc == 0x2BF92Cu) {
        ctx->pc = 0x2BF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF928u;
        // 0x2bf92c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF930u;
        goto label_2bf930;
    }
    ctx->pc = 0x2BF928u;
    SET_GPR_U32(ctx, 31, 0x2BF930u);
    ctx->pc = 0x2BF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF928u;
    // 0x2bf92c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BF928u, 0x2BF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF930u;
label_2bf930:
    // 0x2bf930: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_2bf934:
    if (ctx->pc == 0x2BF934u) {
        ctx->pc = 0x2BF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF930u;
        // 0x2bf934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF938u;
        goto label_2bf938;
    }
    ctx->pc = 0x2BF930u;
    {
        const bool branch_taken_0x2bf930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF930u;
        // 0x2bf934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf930) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BF938u;
label_2bf938:
    // 0x2bf938: 0x80a2002e  lb          $v0, 0x2E($a1)
    ctx->pc = 0x2bf938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2bf93c:
    // 0x2bf93c: 0x1c4000b3  bgtz        $v0, . + 4 + (0xB3 << 2)
label_2bf940:
    if (ctx->pc == 0x2BF940u) {
        ctx->pc = 0x2BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF93Cu;
        // 0x2bf940: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF944u;
        goto label_2bf944;
    }
    ctx->pc = 0x2BF93Cu;
    {
        const bool branch_taken_0x2bf93c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF93Cu;
        // 0x2bf940: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf93c) {
            ctx->pc = 0x2BFC0Cu;
            goto label_2bfc0c;
        }
    }
    ctx->pc = 0x2BF944u;
label_2bf944:
    // 0x2bf944: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
label_2bf948:
    if (ctx->pc == 0x2BF948u) {
        ctx->pc = 0x2BF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF944u;
        // 0x2bf948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF94Cu;
        goto label_2bf94c;
    }
    ctx->pc = 0x2BF944u;
    {
        const bool branch_taken_0x2bf944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF944u;
        // 0x2bf948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf944) {
            ctx->pc = 0x2BFAA4u;
            goto label_2bfaa4;
        }
    }
    ctx->pc = 0x2BF94Cu;
label_2bf94c:
    // 0x2bf94c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2bf94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2bf950:
    // 0x2bf950: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2bf950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2bf954:
    // 0x2bf954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf958:
    // 0x2bf958: 0xc08a0d0  jal         func_228340
label_2bf95c:
    if (ctx->pc == 0x2BF95Cu) {
        ctx->pc = 0x2BF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF958u;
        // 0x2bf95c: 0xe4a0012c  swc1        $f0, 0x12C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 300), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF960u;
        goto label_2bf960;
    }
    ctx->pc = 0x2BF958u;
    SET_GPR_U32(ctx, 31, 0x2BF960u);
    ctx->pc = 0x2BF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF958u;
    // 0x2bf95c: 0xe4a0012c  swc1        $f0, 0x12C($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BF958u, 0x2BF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF960u;
label_2bf960:
    // 0x2bf960: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2bf964:
    if (ctx->pc == 0x2BF964u) {
        ctx->pc = 0x2BF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF960u;
        // 0x2bf964: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF968u;
        goto label_2bf968;
    }
    ctx->pc = 0x2BF960u;
    {
        const bool branch_taken_0x2bf960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf960) {
            ctx->pc = 0x2BF964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF960u;
            // 0x2bf964: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF974u;
            goto label_2bf974;
        }
    }
    ctx->pc = 0x2BF968u;
label_2bf968:
    // 0x2bf968: 0xc08bfa0  jal         func_22FE80
label_2bf96c:
    if (ctx->pc == 0x2BF96Cu) {
        ctx->pc = 0x2BF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF968u;
        // 0x2bf96c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF970u;
        goto label_2bf970;
    }
    ctx->pc = 0x2BF968u;
    SET_GPR_U32(ctx, 31, 0x2BF970u);
    ctx->pc = 0x2BF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF968u;
    // 0x2bf96c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BF968u, 0x2BF970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF970u;
label_2bf970:
    // 0x2bf970: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf974:
    // 0x2bf974: 0xc0e409a  jal         func_390268
label_2bf978:
    if (ctx->pc == 0x2BF978u) {
        ctx->pc = 0x2BF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF974u;
        // 0x2bf978: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF97Cu;
        goto label_2bf97c;
    }
    ctx->pc = 0x2BF974u;
    SET_GPR_U32(ctx, 31, 0x2BF97Cu);
    ctx->pc = 0x2BF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF974u;
    // 0x2bf978: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BF974u, 0x2BF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF97Cu;
label_2bf97c:
    // 0x2bf97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf980:
    // 0x2bf980: 0xc0a34d6  jal         func_28D358
label_2bf984:
    if (ctx->pc == 0x2BF984u) {
        ctx->pc = 0x2BF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF980u;
        // 0x2bf984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF988u;
        goto label_2bf988;
    }
    ctx->pc = 0x2BF980u;
    SET_GPR_U32(ctx, 31, 0x2BF988u);
    ctx->pc = 0x2BF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF980u;
    // 0x2bf984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BF980u, 0x2BF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF988u;
label_2bf988:
    // 0x2bf988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf98c:
    // 0x2bf98c: 0x56000013  bnel        $s0, $zero, . + 4 + (0x13 << 2)
label_2bf990:
    if (ctx->pc == 0x2BF990u) {
        ctx->pc = 0x2BF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF98Cu;
        // 0x2bf990: 0x86020092  lh          $v0, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF994u;
        goto label_2bf994;
    }
    ctx->pc = 0x2BF98Cu;
    {
        const bool branch_taken_0x2bf98c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf98c) {
            ctx->pc = 0x2BF990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF98Cu;
            // 0x2bf990: 0x86020092  lh          $v0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF9DCu;
            goto label_2bf9dc;
        }
    }
    ctx->pc = 0x2BF994u;
label_2bf994:
    // 0x2bf994: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bf994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf998:
    // 0x2bf998: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bf998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bf99c:
    // 0x2bf99c: 0x26100164  addiu       $s0, $s0, 0x164
    ctx->pc = 0x2bf99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_2bf9a0:
    // 0x2bf9a0: 0xc13b748  jal         func_4EDD20
label_2bf9a4:
    if (ctx->pc == 0x2BF9A4u) {
        ctx->pc = 0x2BF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9A0u;
        // 0x2bf9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9A8u;
        goto label_2bf9a8;
    }
    ctx->pc = 0x2BF9A0u;
    SET_GPR_U32(ctx, 31, 0x2BF9A8u);
    ctx->pc = 0x2BF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9A0u;
    // 0x2bf9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2BF9A0u, 0x2BF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9A8u;
label_2bf9a8:
    // 0x2bf9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9ac:
    // 0x2bf9ac: 0xc137826  jal         func_4DE098
label_2bf9b0:
    if (ctx->pc == 0x2BF9B0u) {
        ctx->pc = 0x2BF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9ACu;
        // 0x2bf9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9B4u;
        goto label_2bf9b4;
    }
    ctx->pc = 0x2BF9ACu;
    SET_GPR_U32(ctx, 31, 0x2BF9B4u);
    ctx->pc = 0x2BF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9ACu;
    // 0x2bf9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2BF9ACu, 0x2BF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9B4u;
label_2bf9b4:
    // 0x2bf9b4: 0xc0e409a  jal         func_390268
label_2bf9b8:
    if (ctx->pc == 0x2BF9B8u) {
        ctx->pc = 0x2BF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9B4u;
        // 0x2bf9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9BCu;
        goto label_2bf9bc;
    }
    ctx->pc = 0x2BF9B4u;
    SET_GPR_U32(ctx, 31, 0x2BF9BCu);
    ctx->pc = 0x2BF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9B4u;
    // 0x2bf9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BF9B4u, 0x2BF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9BCu;
label_2bf9bc:
    // 0x2bf9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9c0:
    // 0x2bf9c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf9c4:
    // 0x2bf9c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9c8:
    // 0x2bf9c8: 0xc0a33f8  jal         func_28CFE0
label_2bf9cc:
    if (ctx->pc == 0x2BF9CCu) {
        ctx->pc = 0x2BF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9C8u;
        // 0x2bf9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9D0u;
        goto label_2bf9d0;
    }
    ctx->pc = 0x2BF9C8u;
    SET_GPR_U32(ctx, 31, 0x2BF9D0u);
    ctx->pc = 0x2BF9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9C8u;
    // 0x2bf9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BF9C8u, 0x2BF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9D0u;
label_2bf9d0:
    // 0x2bf9d0: 0x5200002f  beql        $s0, $zero, . + 4 + (0x2F << 2)
label_2bf9d4:
    if (ctx->pc == 0x2BF9D4u) {
        ctx->pc = 0x2BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9D0u;
        // 0x2bf9d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9D8u;
        goto label_2bf9d8;
    }
    ctx->pc = 0x2BF9D0u;
    {
        const bool branch_taken_0x2bf9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf9d0) {
            ctx->pc = 0x2BF9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF9D0u;
            // 0x2bf9d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA90u;
            goto label_2bfa90;
        }
    }
    ctx->pc = 0x2BF9D8u;
label_2bf9d8:
    // 0x2bf9d8: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2bf9d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2bf9dc:
    // 0x2bf9dc: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x2bf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2bf9e0:
    // 0x2bf9e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bf9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf9e4:
    // 0x2bf9e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9e8:
    // 0x2bf9e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bf9ec:
    // 0x2bf9ec: 0xc4b40140  lwc1        $f20, 0x140($a1)
    ctx->pc = 0x2bf9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bf9f0:
    // 0x2bf9f0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2bf9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf9f4:
    // 0x2bf9f4: 0xc0cdb38  jal         func_336CE0
label_2bf9f8:
    if (ctx->pc == 0x2BF9F8u) {
        ctx->pc = 0x2BF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9F4u;
        // 0x2bf9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9FCu;
        goto label_2bf9fc;
    }
    ctx->pc = 0x2BF9F4u;
    SET_GPR_U32(ctx, 31, 0x2BF9FCu);
    ctx->pc = 0x2BF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9F4u;
    // 0x2bf9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BF9F4u, 0x2BF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9FCu;
label_2bf9fc:
    // 0x2bf9fc: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2bf9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2bfa00:
    // 0x2bfa00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bfa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bfa04:
    // 0x2bfa04: 0x0  nop
    ctx->pc = 0x2bfa04u;
    // NOP
label_2bfa08:
    // 0x2bfa08: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2bfa0c:
    if (ctx->pc == 0x2BFA0Cu) {
        ctx->pc = 0x2BFA10u;
        goto label_2bfa10;
    }
    ctx->pc = 0x2BFA08u;
    {
        const bool branch_taken_0x2bfa08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfa08) {
            ctx->pc = 0x2BFA54u;
            goto label_2bfa54;
        }
    }
    ctx->pc = 0x2BFA10u;
label_2bfa10:
    // 0x2bfa10: 0xc0a367c  jal         func_28D9F0
label_2bfa14:
    if (ctx->pc == 0x2BFA14u) {
        ctx->pc = 0x2BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA10u;
        // 0x2bfa14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA18u;
        goto label_2bfa18;
    }
    ctx->pc = 0x2BFA10u;
    SET_GPR_U32(ctx, 31, 0x2BFA18u);
    ctx->pc = 0x2BFA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA10u;
    // 0x2bfa14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BFA10u, 0x2BFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_2bfa1c:
    if (ctx->pc == 0x2BFA1Cu) {
        ctx->pc = 0x2BFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA18u;
        // 0x2bfa1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA20u;
        goto label_2bfa20;
    }
    ctx->pc = 0x2BFA18u;
    {
        const bool branch_taken_0x2bfa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA18u;
        // 0x2bfa1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa18) {
            ctx->pc = 0x2BFC0Cu;
            goto label_2bfc0c;
        }
    }
    ctx->pc = 0x2BFA20u;
label_2bfa20:
    // 0x2bfa20: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2bfa24:
    // 0x2bfa24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bfa24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bfa28:
    // 0x2bfa28: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2bfa2c:
    // 0x2bfa2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bfa2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bfa30:
    // 0x2bfa30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bfa30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa34:
    // 0x2bfa34: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2bfa34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2bfa38:
    // 0x2bfa38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfa3c:
    // 0x2bfa3c: 0x460da340  add.s       $f13, $f20, $f13
    ctx->pc = 0x2bfa3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
label_2bfa40:
    // 0x2bfa40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfa40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa44:
    // 0x2bfa44: 0xc0bf3d4  jal         func_2FCF50
label_2bfa48:
    if (ctx->pc == 0x2BFA48u) {
        ctx->pc = 0x2BFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA44u;
        // 0x2bfa48: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA4Cu;
        goto label_2bfa4c;
    }
    ctx->pc = 0x2BFA44u;
    SET_GPR_U32(ctx, 31, 0x2BFA4Cu);
    ctx->pc = 0x2BFA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA44u;
    // 0x2bfa48: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BFA44u, 0x2BFA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA4Cu;
label_2bfa4c:
    // 0x2bfa4c: 0x10000070  b           . + 4 + (0x70 << 2)
label_2bfa50:
    if (ctx->pc == 0x2BFA50u) {
        ctx->pc = 0x2BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA4Cu;
        // 0x2bfa50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA54u;
        goto label_2bfa54;
    }
    ctx->pc = 0x2BFA4Cu;
    {
        const bool branch_taken_0x2bfa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA4Cu;
        // 0x2bfa50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa4c) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFA54u;
label_2bfa54:
    // 0x2bfa54: 0xc0a367c  jal         func_28D9F0
label_2bfa58:
    if (ctx->pc == 0x2BFA58u) {
        ctx->pc = 0x2BFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA54u;
        // 0x2bfa58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA5Cu;
        goto label_2bfa5c;
    }
    ctx->pc = 0x2BFA54u;
    SET_GPR_U32(ctx, 31, 0x2BFA5Cu);
    ctx->pc = 0x2BFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA54u;
    // 0x2bfa58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BFA54u, 0x2BFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA5Cu;
label_2bfa5c:
    // 0x2bfa5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa60:
    // 0x2bfa60: 0x1200006b  beqz        $s0, . + 4 + (0x6B << 2)
label_2bfa64:
    if (ctx->pc == 0x2BFA64u) {
        ctx->pc = 0x2BFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA60u;
        // 0x2bfa64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA68u;
        goto label_2bfa68;
    }
    ctx->pc = 0x2BFA60u;
    {
        const bool branch_taken_0x2bfa60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA60u;
        // 0x2bfa64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa60) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFA68u;
label_2bfa68:
    // 0x2bfa68: 0xc0884f6  jal         func_2213D8
label_2bfa6c:
    if (ctx->pc == 0x2BFA6Cu) {
        ctx->pc = 0x2BFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA68u;
        // 0x2bfa6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA70u;
        goto label_2bfa70;
    }
    ctx->pc = 0x2BFA68u;
    SET_GPR_U32(ctx, 31, 0x2BFA70u);
    ctx->pc = 0x2BFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA68u;
    // 0x2bfa6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BFA68u, 0x2BFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA70u;
label_2bfa70:
    // 0x2bfa70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfa74:
    // 0x2bfa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa78:
    // 0x2bfa78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bfa78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa7c:
    // 0x2bfa7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bfa7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bfa80:
    // 0x2bfa80: 0xc0bf800  jal         func_2FE000
label_2bfa84:
    if (ctx->pc == 0x2BFA84u) {
        ctx->pc = 0x2BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA80u;
        // 0x2bfa84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA88u;
        goto label_2bfa88;
    }
    ctx->pc = 0x2BFA80u;
    SET_GPR_U32(ctx, 31, 0x2BFA88u);
    ctx->pc = 0x2BFA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA80u;
    // 0x2bfa84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BFA80u, 0x2BFA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA88u;
label_2bfa88:
    // 0x2bfa88: 0x10000061  b           . + 4 + (0x61 << 2)
label_2bfa8c:
    if (ctx->pc == 0x2BFA8Cu) {
        ctx->pc = 0x2BFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA88u;
        // 0x2bfa8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA90u;
        goto label_2bfa90;
    }
    ctx->pc = 0x2BFA88u;
    {
        const bool branch_taken_0x2bfa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA88u;
        // 0x2bfa8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa88) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFA90u;
label_2bfa90:
    // 0x2bfa90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bfa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa94:
    // 0x2bfa94: 0xc0a33f8  jal         func_28CFE0
label_2bfa98:
    if (ctx->pc == 0x2BFA98u) {
        ctx->pc = 0x2BFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA94u;
        // 0x2bfa98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA9Cu;
        goto label_2bfa9c;
    }
    ctx->pc = 0x2BFA94u;
    SET_GPR_U32(ctx, 31, 0x2BFA9Cu);
    ctx->pc = 0x2BFA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA94u;
    // 0x2bfa98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BFA94u, 0x2BFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA9Cu;
label_2bfa9c:
    // 0x2bfa9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2bfaa0:
    if (ctx->pc == 0x2BFAA0u) {
        ctx->pc = 0x2BFAA4u;
        goto label_2bfaa4;
    }
    ctx->pc = 0x2BFA9Cu;
    {
        const bool branch_taken_0x2bfa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfa9c) {
            ctx->pc = 0x2BFAC4u;
            goto label_2bfac4;
        }
    }
    ctx->pc = 0x2BFAA4u;
label_2bfaa4:
    // 0x2bfaa4: 0xc089bdc  jal         func_226F70
label_2bfaa8:
    if (ctx->pc == 0x2BFAA8u) {
        ctx->pc = 0x2BFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAA4u;
        // 0x2bfaa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAACu;
        goto label_2bfaac;
    }
    ctx->pc = 0x2BFAA4u;
    SET_GPR_U32(ctx, 31, 0x2BFAACu);
    ctx->pc = 0x2BFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAA4u;
    // 0x2bfaa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2BFAA4u, 0x2BFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAACu;
label_2bfaac:
    // 0x2bfaac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfab0:
    // 0x2bfab0: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2bfab4:
    // 0x2bfab4: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2bfab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2bfab8:
    // 0x2bfab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bfab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bfabc:
    // 0x2bfabc: 0x0  nop
    ctx->pc = 0x2bfabcu;
    // NOP
label_2bfac0:
    // 0x2bfac0: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2bfac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2bfac4:
    // 0x2bfac4: 0xc08a0d0  jal         func_228340
label_2bfac8:
    if (ctx->pc == 0x2BFAC8u) {
        ctx->pc = 0x2BFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAC4u;
        // 0x2bfac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFACCu;
        goto label_2bfacc;
    }
    ctx->pc = 0x2BFAC4u;
    SET_GPR_U32(ctx, 31, 0x2BFACCu);
    ctx->pc = 0x2BFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAC4u;
    // 0x2bfac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BFAC4u, 0x2BFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFACCu;
label_2bfacc:
    // 0x2bfacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfad0:
    // 0x2bfad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfad4:
    // 0x2bfad4: 0x56020015  bnel        $s0, $v0, . + 4 + (0x15 << 2)
label_2bfad8:
    if (ctx->pc == 0x2BFAD8u) {
        ctx->pc = 0x2BFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAD4u;
        // 0x2bfad8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFADCu;
        goto label_2bfadc;
    }
    ctx->pc = 0x2BFAD4u;
    {
        const bool branch_taken_0x2bfad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfad4) {
            ctx->pc = 0x2BFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFAD4u;
            // 0x2bfad8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB2Cu;
            goto label_2bfb2c;
        }
    }
    ctx->pc = 0x2BFADCu;
label_2bfadc:
    // 0x2bfadc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfae0:
    // 0x2bfae0: 0xc137832  jal         func_4DE0C8
label_2bfae4:
    if (ctx->pc == 0x2BFAE4u) {
        ctx->pc = 0x2BFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAE0u;
        // 0x2bfae4: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAE8u;
        goto label_2bfae8;
    }
    ctx->pc = 0x2BFAE0u;
    SET_GPR_U32(ctx, 31, 0x2BFAE8u);
    ctx->pc = 0x2BFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAE0u;
    // 0x2bfae4: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BFAE0u, 0x2BFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE8u;
label_2bfae8:
    // 0x2bfae8: 0x14500049  bne         $v0, $s0, . + 4 + (0x49 << 2)
label_2bfaec:
    if (ctx->pc == 0x2BFAECu) {
        ctx->pc = 0x2BFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAE8u;
        // 0x2bfaec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAF0u;
        goto label_2bfaf0;
    }
    ctx->pc = 0x2BFAE8u;
    {
        const bool branch_taken_0x2bfae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAE8u;
        // 0x2bfaec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfae8) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFAF0u;
label_2bfaf0:
    // 0x2bfaf0: 0xc0a367c  jal         func_28D9F0
label_2bfaf4:
    if (ctx->pc == 0x2BFAF4u) {
        ctx->pc = 0x2BFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAF0u;
        // 0x2bfaf4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAF8u;
        goto label_2bfaf8;
    }
    ctx->pc = 0x2BFAF0u;
    SET_GPR_U32(ctx, 31, 0x2BFAF8u);
    ctx->pc = 0x2BFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAF0u;
    // 0x2bfaf4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BFAF0u, 0x2BFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAF8u;
label_2bfaf8:
    // 0x2bfaf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfafc:
    // 0x2bfafc: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_2bfb00:
    if (ctx->pc == 0x2BFB00u) {
        ctx->pc = 0x2BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAFCu;
        // 0x2bfb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB04u;
        goto label_2bfb04;
    }
    ctx->pc = 0x2BFAFCu;
    {
        const bool branch_taken_0x2bfafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAFCu;
        // 0x2bfb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfafc) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFB04u;
label_2bfb04:
    // 0x2bfb04: 0xc0884f6  jal         func_2213D8
label_2bfb08:
    if (ctx->pc == 0x2BFB08u) {
        ctx->pc = 0x2BFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB04u;
        // 0x2bfb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB0Cu;
        goto label_2bfb0c;
    }
    ctx->pc = 0x2BFB04u;
    SET_GPR_U32(ctx, 31, 0x2BFB0Cu);
    ctx->pc = 0x2BFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB04u;
    // 0x2bfb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BFB04u, 0x2BFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB0Cu;
label_2bfb0c:
    // 0x2bfb0c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bfb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfb10:
    // 0x2bfb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb14:
    // 0x2bfb14: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bfb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb18:
    // 0x2bfb18: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bfb18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bfb1c:
    // 0x2bfb1c: 0xc0bf800  jal         func_2FE000
label_2bfb20:
    if (ctx->pc == 0x2BFB20u) {
        ctx->pc = 0x2BFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB1Cu;
        // 0x2bfb20: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB24u;
        goto label_2bfb24;
    }
    ctx->pc = 0x2BFB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BFB24u);
    ctx->pc = 0x2BFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB1Cu;
    // 0x2bfb20: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BFB1Cu, 0x2BFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB24u;
label_2bfb24:
    // 0x2bfb24: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2bfb28:
    if (ctx->pc == 0x2BFB28u) {
        ctx->pc = 0x2BFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB24u;
        // 0x2bfb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB2Cu;
        goto label_2bfb2c;
    }
    ctx->pc = 0x2BFB24u;
    {
        const bool branch_taken_0x2bfb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB24u;
        // 0x2bfb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb24) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFB2Cu;
label_2bfb2c:
    // 0x2bfb2c: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2bfb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2bfb30:
    // 0x2bfb30: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2bfb34:
    if (ctx->pc == 0x2BFB34u) {
        ctx->pc = 0x2BFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB30u;
        // 0x2bfb34: 0x26a20fa0  addiu       $v0, $s5, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB38u;
        goto label_2bfb38;
    }
    ctx->pc = 0x2BFB30u;
    {
        const bool branch_taken_0x2bfb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB30u;
        // 0x2bfb34: 0x26a20fa0  addiu       $v0, $s5, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb30) {
            ctx->pc = 0x2BFBB4u;
            goto label_2bfbb4;
        }
    }
    ctx->pc = 0x2BFB38u;
label_2bfb38:
    // 0x2bfb38: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2bfb3c:
    // 0x2bfb3c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2bfb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2bfb40:
    // 0x2bfb40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bfb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb44:
    // 0x2bfb44: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2bfb44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2bfb48:
    // 0x2bfb48: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bfb48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bfb4c:
    // 0x2bfb4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2bfb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2bfb50:
    // 0x2bfb50: 0xc0cd8ec  jal         func_3363B0
label_2bfb54:
    if (ctx->pc == 0x2BFB54u) {
        ctx->pc = 0x2BFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB50u;
        // 0x2bfb54: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB58u;
        goto label_2bfb58;
    }
    ctx->pc = 0x2BFB50u;
    SET_GPR_U32(ctx, 31, 0x2BFB58u);
    ctx->pc = 0x2BFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB50u;
    // 0x2bfb54: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2BFB50u, 0x2BFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB58u;
label_2bfb58:
    // 0x2bfb58: 0xc0a367c  jal         func_28D9F0
label_2bfb5c:
    if (ctx->pc == 0x2BFB5Cu) {
        ctx->pc = 0x2BFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB58u;
        // 0x2bfb5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB60u;
        goto label_2bfb60;
    }
    ctx->pc = 0x2BFB58u;
    SET_GPR_U32(ctx, 31, 0x2BFB60u);
    ctx->pc = 0x2BFB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB58u;
    // 0x2bfb5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BFB58u, 0x2BFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB60u;
label_2bfb60:
    // 0x2bfb60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bfb60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb64:
    // 0x2bfb64: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_2bfb68:
    if (ctx->pc == 0x2BFB68u) {
        ctx->pc = 0x2BFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB64u;
        // 0x2bfb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB6Cu;
        goto label_2bfb6c;
    }
    ctx->pc = 0x2BFB64u;
    {
        const bool branch_taken_0x2bfb64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB64u;
        // 0x2bfb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb64) {
            ctx->pc = 0x2BFBB4u;
            goto label_2bfbb4;
        }
    }
    ctx->pc = 0x2BFB6Cu;
label_2bfb6c:
    // 0x2bfb6c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x2bfb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2bfb70:
    // 0x2bfb70: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2bfb70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfb74:
    // 0x2bfb74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2bfb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bfb78:
    // 0x2bfb78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bfb78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2bfb7c:
    // 0x2bfb7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bfb7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2bfb80:
    // 0x2bfb80: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2bfb80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2bfb84:
    // 0x2bfb84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2bfb84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2bfb88:
    // 0x2bfb88: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2bfb88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2bfb8c:
    // 0x2bfb8c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2bfb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2bfb90:
    // 0x2bfb90: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2bfb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2bfb94:
    // 0x2bfb94: 0xc0884f6  jal         func_2213D8
label_2bfb98:
    if (ctx->pc == 0x2BFB98u) {
        ctx->pc = 0x2BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB94u;
        // 0x2bfb98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB9Cu;
        goto label_2bfb9c;
    }
    ctx->pc = 0x2BFB94u;
    SET_GPR_U32(ctx, 31, 0x2BFB9Cu);
    ctx->pc = 0x2BFB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB94u;
    // 0x2bfb98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BFB94u, 0x2BFB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB9Cu;
label_2bfb9c:
    // 0x2bfb9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bfb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfba0:
    // 0x2bfba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bfba4:
    // 0x2bfba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bfba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfba8:
    // 0x2bfba8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bfba8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bfbac:
    // 0x2bfbac: 0xc0bf800  jal         func_2FE000
label_2bfbb0:
    if (ctx->pc == 0x2BFBB0u) {
        ctx->pc = 0x2BFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBACu;
        // 0x2bfbb0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFBB4u;
        goto label_2bfbb4;
    }
    ctx->pc = 0x2BFBACu;
    SET_GPR_U32(ctx, 31, 0x2BFBB4u);
    ctx->pc = 0x2BFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBACu;
    // 0x2bfbb0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BFBACu, 0x2BFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBB4u;
label_2bfbb4:
    // 0x2bfbb4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2bfbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2bfbb8:
    // 0x2bfbb8: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2bfbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2bfbbc:
    // 0x2bfbbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2bfbc0:
    if (ctx->pc == 0x2BFBC0u) {
        ctx->pc = 0x2BFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBBCu;
        // 0x2bfbc0: 0x26a20bb8  addiu       $v0, $s5, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFBC4u;
        goto label_2bfbc4;
    }
    ctx->pc = 0x2BFBBCu;
    {
        const bool branch_taken_0x2bfbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBBCu;
        // 0x2bfbc0: 0x26a20bb8  addiu       $v0, $s5, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbbc) {
            ctx->pc = 0x2BFC0Cu;
            goto label_2bfc0c;
        }
    }
    ctx->pc = 0x2BFBC4u;
label_2bfbc4:
    // 0x2bfbc4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bfbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bfbc8:
    // 0x2bfbc8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2bfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2bfbcc:
    // 0x2bfbcc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bfbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2bfbd0:
    // 0x2bfbd0: 0xc0cd4ee  jal         func_3353B8
label_2bfbd4:
    if (ctx->pc == 0x2BFBD4u) {
        ctx->pc = 0x2BFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBD0u;
        // 0x2bfbd4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFBD8u;
        goto label_2bfbd8;
    }
    ctx->pc = 0x2BFBD0u;
    SET_GPR_U32(ctx, 31, 0x2BFBD8u);
    ctx->pc = 0x2BFBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBD0u;
    // 0x2bfbd4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BFBD0u, 0x2BFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBD8u;
label_2bfbd8:
    // 0x2bfbd8: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2bfbd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2bfbdc:
    // 0x2bfbdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2bfbe0:
    if (ctx->pc == 0x2BFBE0u) {
        ctx->pc = 0x2BFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBDCu;
        // 0x2bfbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFBE4u;
        goto label_2bfbe4;
    }
    ctx->pc = 0x2BFBDCu;
    {
        const bool branch_taken_0x2bfbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBDCu;
        // 0x2bfbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbdc) {
            ctx->pc = 0x2BFC10u;
            goto label_2bfc10;
        }
    }
    ctx->pc = 0x2BFBE4u;
label_2bfbe4:
    // 0x2bfbe4: 0xc0a367c  jal         func_28D9F0
label_2bfbe8:
    if (ctx->pc == 0x2BFBE8u) {
        ctx->pc = 0x2BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBE4u;
        // 0x2bfbe8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFBECu;
        goto label_2bfbec;
    }
    ctx->pc = 0x2BFBE4u;
    SET_GPR_U32(ctx, 31, 0x2BFBECu);
    ctx->pc = 0x2BFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBE4u;
    // 0x2bfbe8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BFBE4u, 0x2BFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBECu;
label_2bfbec:
    // 0x2bfbec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2bfbf0:
    if (ctx->pc == 0x2BFBF0u) {
        ctx->pc = 0x2BFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBECu;
        // 0x2bfbf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFBF4u;
        goto label_2bfbf4;
    }
    ctx->pc = 0x2BFBECu;
    {
        const bool branch_taken_0x2bfbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBECu;
        // 0x2bfbf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbec) {
            ctx->pc = 0x2BFC0Cu;
            goto label_2bfc0c;
        }
    }
    ctx->pc = 0x2BFBF4u;
label_2bfbf4:
    // 0x2bfbf4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bfbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfbf8:
    // 0x2bfbf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfbfc:
    // 0x2bfbfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bfbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfc00:
    // 0x2bfc00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bfc00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfc04:
    // 0x2bfc04: 0xc0be7d2  jal         func_2F9F48
label_2bfc08:
    if (ctx->pc == 0x2BFC08u) {
        ctx->pc = 0x2BFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC04u;
        // 0x2bfc08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFC0Cu;
        goto label_2bfc0c;
    }
    ctx->pc = 0x2BFC04u;
    SET_GPR_U32(ctx, 31, 0x2BFC0Cu);
    ctx->pc = 0x2BFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC04u;
    // 0x2bfc08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2BFC04u, 0x2BFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC0Cu;
label_2bfc0c:
    // 0x2bfc0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bfc0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfc10:
    // 0x2bfc10: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2bfc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2bfc14:
    // 0x2bfc14: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2bfc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2bfc18:
    // 0x2bfc18: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2bfc18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2bfc1c:
    // 0x2bfc1c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2bfc1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bfc20:
    // 0x2bfc20: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2bfc20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2bfc24:
    // 0x2bfc24: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2bfc24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bfc28:
    // 0x2bfc28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2bfc28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bfc2c:
    // 0x2bfc2c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2bfc2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bfc30:
    // 0x2bfc30: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2bfc30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bfc34:
    // 0x2bfc34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bfc38:
    // 0x2bfc38: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bfc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bfc3c:
    // 0x2bfc3c: 0x3e00008  jr          $ra
label_2bfc40:
    if (ctx->pc == 0x2BFC40u) {
        ctx->pc = 0x2BFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC3Cu;
        // 0x2bfc40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFC44u;
        goto label_2bfc44;
    }
    ctx->pc = 0x2BFC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC3Cu;
        // 0x2bfc40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC44u;
label_2bfc44:
    // 0x2bfc44: 0x0  nop
    ctx->pc = 0x2bfc44u;
    // NOP
    ctx->pc = 0x2bfc48u;
}
