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

// Function: sub_001BF7E0
// Address: 0x1bf7e0 - 0x1bfcc0
void sub_001BF7E0_0x1bf7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF7E0_0x1bf7e0");
#endif

    switch (ctx->pc) {
        case 0x1bf7e0u: goto label_1bf7e0;
        case 0x1bf7e4u: goto label_1bf7e4;
        case 0x1bf7e8u: goto label_1bf7e8;
        case 0x1bf7ecu: goto label_1bf7ec;
        case 0x1bf7f0u: goto label_1bf7f0;
        case 0x1bf7f4u: goto label_1bf7f4;
        case 0x1bf7f8u: goto label_1bf7f8;
        case 0x1bf7fcu: goto label_1bf7fc;
        case 0x1bf800u: goto label_1bf800;
        case 0x1bf804u: goto label_1bf804;
        case 0x1bf808u: goto label_1bf808;
        case 0x1bf80cu: goto label_1bf80c;
        case 0x1bf810u: goto label_1bf810;
        case 0x1bf814u: goto label_1bf814;
        case 0x1bf818u: goto label_1bf818;
        case 0x1bf81cu: goto label_1bf81c;
        case 0x1bf820u: goto label_1bf820;
        case 0x1bf824u: goto label_1bf824;
        case 0x1bf828u: goto label_1bf828;
        case 0x1bf82cu: goto label_1bf82c;
        case 0x1bf830u: goto label_1bf830;
        case 0x1bf834u: goto label_1bf834;
        case 0x1bf838u: goto label_1bf838;
        case 0x1bf83cu: goto label_1bf83c;
        case 0x1bf840u: goto label_1bf840;
        case 0x1bf844u: goto label_1bf844;
        case 0x1bf848u: goto label_1bf848;
        case 0x1bf84cu: goto label_1bf84c;
        case 0x1bf850u: goto label_1bf850;
        case 0x1bf854u: goto label_1bf854;
        case 0x1bf858u: goto label_1bf858;
        case 0x1bf85cu: goto label_1bf85c;
        case 0x1bf860u: goto label_1bf860;
        case 0x1bf864u: goto label_1bf864;
        case 0x1bf868u: goto label_1bf868;
        case 0x1bf86cu: goto label_1bf86c;
        case 0x1bf870u: goto label_1bf870;
        case 0x1bf874u: goto label_1bf874;
        case 0x1bf878u: goto label_1bf878;
        case 0x1bf87cu: goto label_1bf87c;
        case 0x1bf880u: goto label_1bf880;
        case 0x1bf884u: goto label_1bf884;
        case 0x1bf888u: goto label_1bf888;
        case 0x1bf88cu: goto label_1bf88c;
        case 0x1bf890u: goto label_1bf890;
        case 0x1bf894u: goto label_1bf894;
        case 0x1bf898u: goto label_1bf898;
        case 0x1bf89cu: goto label_1bf89c;
        case 0x1bf8a0u: goto label_1bf8a0;
        case 0x1bf8a4u: goto label_1bf8a4;
        case 0x1bf8a8u: goto label_1bf8a8;
        case 0x1bf8acu: goto label_1bf8ac;
        case 0x1bf8b0u: goto label_1bf8b0;
        case 0x1bf8b4u: goto label_1bf8b4;
        case 0x1bf8b8u: goto label_1bf8b8;
        case 0x1bf8bcu: goto label_1bf8bc;
        case 0x1bf8c0u: goto label_1bf8c0;
        case 0x1bf8c4u: goto label_1bf8c4;
        case 0x1bf8c8u: goto label_1bf8c8;
        case 0x1bf8ccu: goto label_1bf8cc;
        case 0x1bf8d0u: goto label_1bf8d0;
        case 0x1bf8d4u: goto label_1bf8d4;
        case 0x1bf8d8u: goto label_1bf8d8;
        case 0x1bf8dcu: goto label_1bf8dc;
        case 0x1bf8e0u: goto label_1bf8e0;
        case 0x1bf8e4u: goto label_1bf8e4;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8ecu: goto label_1bf8ec;
        case 0x1bf8f0u: goto label_1bf8f0;
        case 0x1bf8f4u: goto label_1bf8f4;
        case 0x1bf8f8u: goto label_1bf8f8;
        case 0x1bf8fcu: goto label_1bf8fc;
        case 0x1bf900u: goto label_1bf900;
        case 0x1bf904u: goto label_1bf904;
        case 0x1bf908u: goto label_1bf908;
        case 0x1bf90cu: goto label_1bf90c;
        case 0x1bf910u: goto label_1bf910;
        case 0x1bf914u: goto label_1bf914;
        case 0x1bf918u: goto label_1bf918;
        case 0x1bf91cu: goto label_1bf91c;
        case 0x1bf920u: goto label_1bf920;
        case 0x1bf924u: goto label_1bf924;
        case 0x1bf928u: goto label_1bf928;
        case 0x1bf92cu: goto label_1bf92c;
        case 0x1bf930u: goto label_1bf930;
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf938u: goto label_1bf938;
        case 0x1bf93cu: goto label_1bf93c;
        case 0x1bf940u: goto label_1bf940;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf948u: goto label_1bf948;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf964u: goto label_1bf964;
        case 0x1bf968u: goto label_1bf968;
        case 0x1bf96cu: goto label_1bf96c;
        case 0x1bf970u: goto label_1bf970;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf978u: goto label_1bf978;
        case 0x1bf97cu: goto label_1bf97c;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf984u: goto label_1bf984;
        case 0x1bf988u: goto label_1bf988;
        case 0x1bf98cu: goto label_1bf98c;
        case 0x1bf990u: goto label_1bf990;
        case 0x1bf994u: goto label_1bf994;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf99cu: goto label_1bf99c;
        case 0x1bf9a0u: goto label_1bf9a0;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bf9acu: goto label_1bf9ac;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b4u: goto label_1bf9b4;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bf9bcu: goto label_1bf9bc;
        case 0x1bf9c0u: goto label_1bf9c0;
        case 0x1bf9c4u: goto label_1bf9c4;
        case 0x1bf9c8u: goto label_1bf9c8;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bf9d0u: goto label_1bf9d0;
        case 0x1bf9d4u: goto label_1bf9d4;
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bf9e0u: goto label_1bf9e0;
        case 0x1bf9e4u: goto label_1bf9e4;
        case 0x1bf9e8u: goto label_1bf9e8;
        case 0x1bf9ecu: goto label_1bf9ec;
        case 0x1bf9f0u: goto label_1bf9f0;
        case 0x1bf9f4u: goto label_1bf9f4;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bf9fcu: goto label_1bf9fc;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa04u: goto label_1bfa04;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfa0cu: goto label_1bfa0c;
        case 0x1bfa10u: goto label_1bfa10;
        case 0x1bfa14u: goto label_1bfa14;
        case 0x1bfa18u: goto label_1bfa18;
        case 0x1bfa1cu: goto label_1bfa1c;
        case 0x1bfa20u: goto label_1bfa20;
        case 0x1bfa24u: goto label_1bfa24;
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfa2cu: goto label_1bfa2c;
        case 0x1bfa30u: goto label_1bfa30;
        case 0x1bfa34u: goto label_1bfa34;
        case 0x1bfa38u: goto label_1bfa38;
        case 0x1bfa3cu: goto label_1bfa3c;
        case 0x1bfa40u: goto label_1bfa40;
        case 0x1bfa44u: goto label_1bfa44;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa4cu: goto label_1bfa4c;
        case 0x1bfa50u: goto label_1bfa50;
        case 0x1bfa54u: goto label_1bfa54;
        case 0x1bfa58u: goto label_1bfa58;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa60u: goto label_1bfa60;
        case 0x1bfa64u: goto label_1bfa64;
        case 0x1bfa68u: goto label_1bfa68;
        case 0x1bfa6cu: goto label_1bfa6c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa74u: goto label_1bfa74;
        case 0x1bfa78u: goto label_1bfa78;
        case 0x1bfa7cu: goto label_1bfa7c;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfa88u: goto label_1bfa88;
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfa94u: goto label_1bfa94;
        case 0x1bfa98u: goto label_1bfa98;
        case 0x1bfa9cu: goto label_1bfa9c;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa4u: goto label_1bfaa4;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfaacu: goto label_1bfaac;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfabcu: goto label_1bfabc;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad0u: goto label_1bfad0;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfadcu: goto label_1bfadc;
        case 0x1bfae0u: goto label_1bfae0;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfae8u: goto label_1bfae8;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfaf8u: goto label_1bfaf8;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb00u: goto label_1bfb00;
        case 0x1bfb04u: goto label_1bfb04;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb10u: goto label_1bfb10;
        case 0x1bfb14u: goto label_1bfb14;
        case 0x1bfb18u: goto label_1bfb18;
        case 0x1bfb1cu: goto label_1bfb1c;
        case 0x1bfb20u: goto label_1bfb20;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb28u: goto label_1bfb28;
        case 0x1bfb2cu: goto label_1bfb2c;
        case 0x1bfb30u: goto label_1bfb30;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb38u: goto label_1bfb38;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb44u: goto label_1bfb44;
        case 0x1bfb48u: goto label_1bfb48;
        case 0x1bfb4cu: goto label_1bfb4c;
        case 0x1bfb50u: goto label_1bfb50;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb58u: goto label_1bfb58;
        case 0x1bfb5cu: goto label_1bfb5c;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb68u: goto label_1bfb68;
        case 0x1bfb6cu: goto label_1bfb6c;
        case 0x1bfb70u: goto label_1bfb70;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb78u: goto label_1bfb78;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb84u: goto label_1bfb84;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb90u: goto label_1bfb90;
        case 0x1bfb94u: goto label_1bfb94;
        case 0x1bfb98u: goto label_1bfb98;
        case 0x1bfb9cu: goto label_1bfb9c;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfba4u: goto label_1bfba4;
        case 0x1bfba8u: goto label_1bfba8;
        case 0x1bfbacu: goto label_1bfbac;
        case 0x1bfbb0u: goto label_1bfbb0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbb8u: goto label_1bfbb8;
        case 0x1bfbbcu: goto label_1bfbbc;
        case 0x1bfbc0u: goto label_1bfbc0;
        case 0x1bfbc4u: goto label_1bfbc4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbccu: goto label_1bfbcc;
        case 0x1bfbd0u: goto label_1bfbd0;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbd8u: goto label_1bfbd8;
        case 0x1bfbdcu: goto label_1bfbdc;
        case 0x1bfbe0u: goto label_1bfbe0;
        case 0x1bfbe4u: goto label_1bfbe4;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbecu: goto label_1bfbec;
        case 0x1bfbf0u: goto label_1bfbf0;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfbf8u: goto label_1bfbf8;
        case 0x1bfbfcu: goto label_1bfbfc;
        case 0x1bfc00u: goto label_1bfc00;
        case 0x1bfc04u: goto label_1bfc04;
        case 0x1bfc08u: goto label_1bfc08;
        case 0x1bfc0cu: goto label_1bfc0c;
        case 0x1bfc10u: goto label_1bfc10;
        case 0x1bfc14u: goto label_1bfc14;
        case 0x1bfc18u: goto label_1bfc18;
        case 0x1bfc1cu: goto label_1bfc1c;
        case 0x1bfc20u: goto label_1bfc20;
        case 0x1bfc24u: goto label_1bfc24;
        case 0x1bfc28u: goto label_1bfc28;
        case 0x1bfc2cu: goto label_1bfc2c;
        case 0x1bfc30u: goto label_1bfc30;
        case 0x1bfc34u: goto label_1bfc34;
        case 0x1bfc38u: goto label_1bfc38;
        case 0x1bfc3cu: goto label_1bfc3c;
        case 0x1bfc40u: goto label_1bfc40;
        case 0x1bfc44u: goto label_1bfc44;
        case 0x1bfc48u: goto label_1bfc48;
        case 0x1bfc4cu: goto label_1bfc4c;
        case 0x1bfc50u: goto label_1bfc50;
        case 0x1bfc54u: goto label_1bfc54;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc5cu: goto label_1bfc5c;
        case 0x1bfc60u: goto label_1bfc60;
        case 0x1bfc64u: goto label_1bfc64;
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfc6cu: goto label_1bfc6c;
        case 0x1bfc70u: goto label_1bfc70;
        case 0x1bfc74u: goto label_1bfc74;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc7cu: goto label_1bfc7c;
        case 0x1bfc80u: goto label_1bfc80;
        case 0x1bfc84u: goto label_1bfc84;
        case 0x1bfc88u: goto label_1bfc88;
        case 0x1bfc8cu: goto label_1bfc8c;
        case 0x1bfc90u: goto label_1bfc90;
        case 0x1bfc94u: goto label_1bfc94;
        case 0x1bfc98u: goto label_1bfc98;
        case 0x1bfc9cu: goto label_1bfc9c;
        case 0x1bfca0u: goto label_1bfca0;
        case 0x1bfca4u: goto label_1bfca4;
        case 0x1bfca8u: goto label_1bfca8;
        case 0x1bfcacu: goto label_1bfcac;
        case 0x1bfcb0u: goto label_1bfcb0;
        case 0x1bfcb4u: goto label_1bfcb4;
        case 0x1bfcb8u: goto label_1bfcb8;
        case 0x1bfcbcu: goto label_1bfcbc;
        default: break;
    }

    ctx->pc = 0x1bf7e0u;

label_1bf7e0:
    // 0x1bf7e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1bf7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1bf7e4:
    // 0x1bf7e4: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1bf7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_1bf7e8:
    // 0x1bf7e8: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x1bf7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_1bf7ec:
    // 0x1bf7ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7f0:
    // 0x1bf7f0: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1bf7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_1bf7f4:
    // 0x1bf7f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1bf7f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7f8:
    // 0x1bf7f8: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1bf7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_1bf7fc:
    // 0x1bf7fc: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1bf7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_1bf800:
    // 0x1bf800: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1bf800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_1bf804:
    // 0x1bf804: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1bf804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_1bf808:
    // 0x1bf808: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x1bf808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_1bf80c:
    // 0x1bf80c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1bf80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_1bf810:
    // 0x1bf810: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1bf810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_1bf814:
    // 0x1bf814: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1bf814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1bf818:
    // 0x1bf818: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1bf818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1bf81c:
    // 0x1bf81c: 0xc06fc24  jal         func_1BF090
label_1bf820:
    if (ctx->pc == 0x1BF820u) {
        ctx->pc = 0x1BF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF81Cu;
        // 0x1bf820: 0xaef100f0  sw          $s1, 0xF0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 240), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF824u;
        goto label_1bf824;
    }
    ctx->pc = 0x1BF81Cu;
    SET_GPR_U32(ctx, 31, 0x1BF824u);
    ctx->pc = 0x1BF820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF81Cu;
    // 0x1bf820: 0xaef100f0  sw          $s1, 0xF0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 240), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF090u, 0x1BF81Cu, 0x1BF824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF824u;
label_1bf824:
    // 0x1bf824: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1bf828:
    // 0x1bf828: 0x8ee40078  lw          $a0, 0x78($s7)
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 120)));
label_1bf82c:
    // 0x1bf82c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1bf82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1bf830:
    // 0x1bf830: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1bf834:
    // 0x1bf834: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_1bf838:
    // 0x1bf838: 0xa3a900b0  sb          $t1, 0xB0($sp)
    ctx->pc = 0x1bf838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 9));
label_1bf83c:
    // 0x1bf83c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bf83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1bf840:
    // 0x1bf840: 0x24632e50  addiu       $v1, $v1, 0x2E50
    ctx->pc = 0x1bf840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
label_1bf844:
    // 0x1bf844: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1bf844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1bf848:
    // 0x1bf848: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1bf848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bf84c:
    // 0x1bf84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bf850:
    // 0x1bf850: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1bf850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bf854:
    // 0x1bf854: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bf854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf858:
    // 0x1bf858: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_1bf85c:
    // 0x1bf85c: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x1bf85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bf860:
    // 0x1bf860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf864:
    // 0x1bf864: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1bf864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1bf868:
    // 0x1bf868: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bf868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bf86c:
    // 0x1bf86c: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x1bf86cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
label_1bf870:
    // 0x1bf870: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x1bf870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
label_1bf874:
    // 0x1bf874: 0xa0c90002  sb          $t1, 0x2($a2)
    ctx->pc = 0x1bf874u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 9));
label_1bf878:
    // 0x1bf878: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf87c:
    // 0x1bf87c: 0xa0c90001  sb          $t1, 0x1($a2)
    ctx->pc = 0x1bf87cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 9));
label_1bf880:
    // 0x1bf880: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1bf880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf884:
    // 0x1bf884: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1bf884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bf888:
    // 0x1bf888: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bf888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf88c:
    // 0x1bf88c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1bf88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf890:
    // 0x1bf890: 0xc0683f4  jal         func_1A0FD0
label_1bf894:
    if (ctx->pc == 0x1BF894u) {
        ctx->pc = 0x1BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF890u;
        // 0x1bf894: 0x8fa600b0  lw          $a2, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF898u;
        goto label_1bf898;
    }
    ctx->pc = 0x1BF890u;
    SET_GPR_U32(ctx, 31, 0x1BF898u);
    ctx->pc = 0x1BF894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF890u;
    // 0x1bf894: 0x8fa600b0  lw          $a2, 0xB0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1BF890u, 0x1BF898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF898u;
label_1bf898:
    // 0x1bf898: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1bf898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1bf89c:
    // 0x1bf89c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1bf8a0:
    // 0x1bf8a0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1bf8a4:
    // 0x1bf8a4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1bf8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1bf8a8:
    // 0x1bf8a8: 0xafa400e4  sw          $a0, 0xE4($sp)
    ctx->pc = 0x1bf8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
label_1bf8ac:
    // 0x1bf8ac: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1bf8acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8b0:
    // 0x1bf8b0: 0x27a800b4  addiu       $t0, $sp, 0xB4
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1bf8b4:
    // 0x1bf8b4: 0x27b500b8  addiu       $s5, $sp, 0xB8
    ctx->pc = 0x1bf8b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1bf8b8:
    // 0x1bf8b8: 0x27be00bc  addiu       $fp, $sp, 0xBC
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1bf8bc:
    // 0x1bf8bc: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x1bf8bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1bf8c0:
    // 0x1bf8c0: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x1bf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1bf8c4:
    // 0x1bf8c4: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x1bf8c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf8c8:
    // 0x1bf8c8: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x1bf8c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1bf8cc:
    // 0x1bf8cc: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1bf8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_1bf8d0:
    // 0x1bf8d0: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x1bf8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
label_1bf8d4:
    // 0x1bf8d4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1bf8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1bf8d8:
    // 0x1bf8d8: 0x1603fffa  bne         $s0, $v1, . + 4 + (-0x6 << 2)
label_1bf8dc:
    if (ctx->pc == 0x1BF8DCu) {
        ctx->pc = 0x1BF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D8u;
        // 0x1bf8dc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8E0u;
        goto label_1bf8e0;
    }
    ctx->pc = 0x1BF8D8u;
    {
        const bool branch_taken_0x1bf8d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D8u;
        // 0x1bf8dc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8d8) {
            ctx->pc = 0x1BF8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf8c4;
        }
    }
    ctx->pc = 0x1BF8E0u;
label_1bf8e0:
    // 0x1bf8e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bf8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf8e4:
    // 0x1bf8e4: 0x24090090  addiu       $t1, $zero, 0x90
    ctx->pc = 0x1bf8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1bf8e8:
    // 0x1bf8e8: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1bf8e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf8ec:
    // 0x1bf8ec: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x1bf8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_1bf8f0:
    // 0x1bf8f0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1bf8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_1bf8f4:
    // 0x1bf8f4: 0x26f30100  addiu       $s3, $s7, 0x100
    ctx->pc = 0x1bf8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
label_1bf8f8:
    // 0x1bf8f8: 0xaee30078  sw          $v1, 0x78($s7)
    ctx->pc = 0x1bf8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 3));
label_1bf8fc:
    // 0x1bf8fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1bf8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1bf900:
    // 0x1bf900: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1bf900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1bf904:
    // 0x1bf904: 0x8ee700e8  lw          $a3, 0xE8($s7)
    ctx->pc = 0x1bf904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 232)));
label_1bf908:
    // 0x1bf908: 0x246594a0  addiu       $a1, $v1, -0x6B60
    ctx->pc = 0x1bf908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939808));
label_1bf90c:
    // 0x1bf90c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1bf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1bf910:
    // 0x1bf910: 0xa3a600b4  sb          $a2, 0xB4($sp)
    ctx->pc = 0x1bf910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 180), (uint8_t)GPR_U32(ctx, 6));
label_1bf914:
    // 0x1bf914: 0x24422e70  addiu       $v0, $v0, 0x2E70
    ctx->pc = 0x1bf914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
label_1bf918:
    // 0x1bf918: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1bf918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1bf91c:
    // 0x1bf91c: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1bf920:
    // 0x1bf920: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1bf920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bf924:
    // 0x1bf924: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1bf924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1bf928:
    // 0x1bf928: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1bf928u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf92c:
    // 0x1bf92c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1bf930:
    // 0x1bf930: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1bf930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_1bf934:
    // 0x1bf934: 0x26e20300  addiu       $v0, $s7, 0x300
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 768));
label_1bf938:
    // 0x1bf938: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1bf938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_1bf93c:
    // 0x1bf93c: 0x26e30400  addiu       $v1, $s7, 0x400
    ctx->pc = 0x1bf93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
label_1bf940:
    // 0x1bf940: 0xa1050003  sb          $a1, 0x3($t0)
    ctx->pc = 0x1bf940u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 5));
label_1bf944:
    // 0x1bf944: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1bf944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_1bf948:
    // 0x1bf948: 0xa1060002  sb          $a2, 0x2($t0)
    ctx->pc = 0x1bf948u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 6));
label_1bf94c:
    // 0x1bf94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf950:
    // 0x1bf950: 0xa1060001  sb          $a2, 0x1($t0)
    ctx->pc = 0x1bf950u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 6));
label_1bf954:
    // 0x1bf954: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bf954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bf958:
    // 0x1bf958: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1bf958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bf95c:
    // 0x1bf95c: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x1bf95cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
label_1bf960:
    // 0x1bf960: 0xc52d0034  lwc1        $f13, 0x34($t1)
    ctx->pc = 0x1bf960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bf964:
    // 0x1bf964: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bf964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf968:
    // 0x1bf968: 0xc52c0030  lwc1        $f12, 0x30($t1)
    ctx->pc = 0x1bf968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf96c:
    // 0x1bf96c: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1bf970:
    // 0x1bf970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bf970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf974:
    // 0x1bf974: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1bf974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_1bf978:
    // 0x1bf978: 0xc0683f4  jal         func_1A0FD0
label_1bf97c:
    if (ctx->pc == 0x1BF97Cu) {
        ctx->pc = 0x1BF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF978u;
        // 0x1bf97c: 0xafa300d4  sw          $v1, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF980u;
        goto label_1bf980;
    }
    ctx->pc = 0x1BF978u;
    SET_GPR_U32(ctx, 31, 0x1BF980u);
    ctx->pc = 0x1BF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF978u;
    // 0x1bf97c: 0xafa300d4  sw          $v1, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1BF978u, 0x1BF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF980u;
label_1bf980:
    // 0x1bf980: 0x26e40500  addiu       $a0, $s7, 0x500
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1280));
label_1bf984:
    // 0x1bf984: 0x26e70640  addiu       $a3, $s7, 0x640
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1600));
label_1bf988:
    // 0x1bf988: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1bf988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_1bf98c:
    // 0x1bf98c: 0x26e50200  addiu       $a1, $s7, 0x200
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 512));
label_1bf990:
    // 0x1bf990: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x1bf990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
label_1bf994:
    // 0x1bf994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf998:
    // 0x1bf998: 0x26e60080  addiu       $a2, $s7, 0x80
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
label_1bf99c:
    // 0x1bf99c: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x1bf99cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf9a0:
    // 0x1bf9a0: 0x78890010  lq          $t1, 0x10($a0)
    ctx->pc = 0x1bf9a0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_1bf9a4:
    // 0x1bf9a4: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x1bf9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
label_1bf9a8:
    // 0x1bf9a8: 0x7cc90010  sq          $t1, 0x10($a2)
    ctx->pc = 0x1bf9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 9));
label_1bf9ac:
    // 0x1bf9ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1bf9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1bf9b0:
    // 0x1bf9b0: 0x1496fffa  bne         $a0, $s6, . + 4 + (-0x6 << 2)
label_1bf9b4:
    if (ctx->pc == 0x1BF9B4u) {
        ctx->pc = 0x1BF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9B0u;
        // 0x1bf9b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9B8u;
        goto label_1bf9b8;
    }
    ctx->pc = 0x1BF9B0u;
    {
        const bool branch_taken_0x1bf9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x1BF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9B0u;
        // 0x1bf9b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9b0) {
            ctx->pc = 0x1BF99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf99c;
        }
    }
    ctx->pc = 0x1BF9B8u;
label_1bf9b8:
    // 0x1bf9b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf9bc:
    // 0x1bf9bc: 0x24160090  addiu       $s6, $zero, 0x90
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1bf9c0:
    // 0x1bf9c0: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x1bf9c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf9c4:
    // 0x1bf9c4: 0x236b018  mult        $s6, $s1, $s6
    ctx->pc = 0x1bf9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_1bf9c8:
    // 0x1bf9c8: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1bf9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
label_1bf9cc:
    // 0x1bf9cc: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bf9d0:
    // 0x1bf9d0: 0xaee300e8  sw          $v1, 0xE8($s7)
    ctx->pc = 0x1bf9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 232), GPR_U32(ctx, 3));
label_1bf9d4:
    // 0x1bf9d4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_1bf9d8:
    // 0x1bf9d8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1bf9dc:
    // 0x1bf9dc: 0xa3b000b8  sb          $s0, 0xB8($sp)
    ctx->pc = 0x1bf9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 16));
label_1bf9e0:
    // 0x1bf9e0: 0x246294a0  addiu       $v0, $v1, -0x6B60
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939808));
label_1bf9e4:
    // 0x1bf9e4: 0x24842e90  addiu       $a0, $a0, 0x2E90
    ctx->pc = 0x1bf9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
label_1bf9e8:
    // 0x1bf9e8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1bf9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_1bf9ec:
    // 0x1bf9ec: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bf9f0:
    // 0x1bf9f0: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x1bf9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_1bf9f4:
    // 0x1bf9f4: 0x2491ffc0  addiu       $s1, $a0, -0x40
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_1bf9f8:
    // 0x1bf9f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bf9f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf9fc:
    // 0x1bf9fc: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x1bf9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_1bfa00:
    // 0x1bfa00: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1bfa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1bfa04:
    // 0x1bfa04: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1bfa04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1bfa08:
    // 0x1bfa08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bfa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bfa0c:
    // 0x1bfa0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bfa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa10:
    // 0x1bfa10: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1bfa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1bfa14:
    // 0x1bfa14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bfa14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfa18:
    // 0x1bfa18: 0xa2b20003  sb          $s2, 0x3($s5)
    ctx->pc = 0x1bfa18u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 18));
label_1bfa1c:
    // 0x1bfa1c: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1bfa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1bfa20:
    // 0x1bfa20: 0xa2b00001  sb          $s0, 0x1($s5)
    ctx->pc = 0x1bfa20u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 16));
label_1bfa24:
    // 0x1bfa24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bfa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfa28:
    // 0x1bfa28: 0xa2b00002  sb          $s0, 0x2($s5)
    ctx->pc = 0x1bfa28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 16));
label_1bfa2c:
    // 0x1bfa2c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1bfa2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1bfa30:
    // 0x1bfa30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfa34:
    // 0x1bfa34: 0x35290005  ori         $t1, $t1, 0x5
    ctx->pc = 0x1bfa34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
label_1bfa38:
    // 0x1bfa38: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1bfa38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1bfa3c:
    // 0x1bfa3c: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1bfa40:
    // 0x1bfa40: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x1bfa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bfa44:
    // 0x1bfa44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfa44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa48:
    // 0x1bfa48: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1bfa48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_1bfa4c:
    // 0x1bfa4c: 0x241500e1  addiu       $s5, $zero, 0xE1
    ctx->pc = 0x1bfa4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_1bfa50:
    // 0x1bfa50: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1bfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1bfa54:
    // 0x1bfa54: 0xc06876e  jal         func_1A1DB8
label_1bfa58:
    if (ctx->pc == 0x1BFA58u) {
        ctx->pc = 0x1BFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA54u;
        // 0x1bfa58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA5Cu;
        goto label_1bfa5c;
    }
    ctx->pc = 0x1BFA54u;
    SET_GPR_U32(ctx, 31, 0x1BFA5Cu);
    ctx->pc = 0x1BFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA54u;
    // 0x1bfa58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1BFA54u, 0x1BFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA5Cu;
label_1bfa5c:
    // 0x1bfa5c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bfa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bfa60:
    // 0x1bfa60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bfa60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bfa64:
    // 0x1bfa64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bfa64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bfa68:
    // 0x1bfa68: 0xa3b000bc  sb          $s0, 0xBC($sp)
    ctx->pc = 0x1bfa68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 188), (uint8_t)GPR_U32(ctx, 16));
label_1bfa6c:
    // 0x1bfa6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfa70:
    // 0x1bfa70: 0xa3d00002  sb          $s0, 0x2($fp)
    ctx->pc = 0x1bfa70u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 16));
label_1bfa74:
    // 0x1bfa74: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1bfa78:
    // 0x1bfa78: 0xa3d20003  sb          $s2, 0x3($fp)
    ctx->pc = 0x1bfa78u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 18));
label_1bfa7c:
    // 0x1bfa7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfa80:
    // 0x1bfa80: 0xa3d00001  sb          $s0, 0x1($fp)
    ctx->pc = 0x1bfa80u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 16));
label_1bfa84:
    // 0x1bfa84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa88:
    // 0x1bfa88: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1bfa88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1bfa8c:
    // 0x1bfa8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfa90:
    // 0x1bfa90: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x1bfa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1bfa94:
    // 0x1bfa94: 0x35290006  ori         $t1, $t1, 0x6
    ctx->pc = 0x1bfa94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
label_1bfa98:
    // 0x1bfa98: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x1bfa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bfa9c:
    // 0x1bfa9c: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1bfa9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1bfaa0:
    // 0x1bfaa0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1bfaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_1bfaa4:
    // 0x1bfaa4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfaa4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfaa8:
    // 0x1bfaa8: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1bfaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1bfaac:
    // 0x1bfaac: 0x241000ba  addiu       $s0, $zero, 0xBA
    ctx->pc = 0x1bfaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1bfab0:
    // 0x1bfab0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1bfab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1bfab4:
    // 0x1bfab4: 0xc06876e  jal         func_1A1DB8
label_1bfab8:
    if (ctx->pc == 0x1BFAB8u) {
        ctx->pc = 0x1BFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB4u;
        // 0x1bfab8: 0x24110041  addiu       $s1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFABCu;
        goto label_1bfabc;
    }
    ctx->pc = 0x1BFAB4u;
    SET_GPR_U32(ctx, 31, 0x1BFABCu);
    ctx->pc = 0x1BFAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAB4u;
    // 0x1bfab8: 0x24110041  addiu       $s1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1BFAB4u, 0x1BFABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFABCu;
label_1bfabc:
    // 0x1bfabc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1bfabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfac0:
    // 0x1bfac0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_1bfac4:
    // 0x1bfac4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1bfac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bfac8:
    // 0x1bfac8: 0x24a52e90  addiu       $a1, $a1, 0x2E90
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11920));
label_1bfacc:
    // 0x1bfacc: 0xe6e00830  swc1        $f0, 0x830($s7)
    ctx->pc = 0x1bfaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 2096), bits); }
label_1bfad0:
    // 0x1bfad0: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_1bfad4:
    // 0x1bfad4: 0xe6e10834  swc1        $f1, 0x834($s7)
    ctx->pc = 0x1bfad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 2100), bits); }
label_1bfad8:
    // 0x1bfad8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfadc:
    // 0x1bfadc: 0xa3b500c0  sb          $s5, 0xC0($sp)
    ctx->pc = 0x1bfadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 21));
label_1bfae0:
    // 0x1bfae0: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1bfae4:
    // 0x1bfae4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bfae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfae8:
    // 0x1bfae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfaec:
    // 0x1bfaec: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1bfaecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1bfaf0:
    // 0x1bfaf0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1bfaf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1bfaf4:
    // 0x1bfaf4: 0x8ee30300  lw          $v1, 0x300($s7)
    ctx->pc = 0x1bfaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 768)));
label_1bfaf8:
    // 0x1bfaf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bfaf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bfafc:
    // 0x1bfafc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bfafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1bfb00:
    // 0x1bfb00: 0x35290007  ori         $t1, $t1, 0x7
    ctx->pc = 0x1bfb00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7);
label_1bfb04:
    // 0x1bfb04: 0xa2920003  sb          $s2, 0x3($s4)
    ctx->pc = 0x1bfb04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 18));
label_1bfb08:
    // 0x1bfb08: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1bfb08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1bfb0c:
    // 0x1bfb0c: 0xa2900001  sb          $s0, 0x1($s4)
    ctx->pc = 0x1bfb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 16));
label_1bfb10:
    // 0x1bfb10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfb10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb14:
    // 0x1bfb14: 0xa2910002  sb          $s1, 0x2($s4)
    ctx->pc = 0x1bfb14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 17));
label_1bfb18:
    // 0x1bfb18: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x1bfb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1bfb1c:
    // 0x1bfb1c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1bfb20:
    // 0x1bfb20: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1bfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1bfb24:
    // 0x1bfb24: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1bfb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1bfb28:
    // 0x1bfb28: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1bfb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bfb2c:
    // 0x1bfb2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bfb30:
    // 0x1bfb30: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1bfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1bfb34:
    // 0x1bfb34: 0x40f809  jalr        $v0
label_1bfb38:
    if (ctx->pc == 0x1BFB38u) {
        ctx->pc = 0x1BFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB34u;
        // 0x1bfb38: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB3Cu;
        goto label_1bfb3c;
    }
    ctx->pc = 0x1BFB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFB3Cu);
        ctx->pc = 0x1BFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB34u;
        // 0x1bfb38: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB34u, 0x1BFB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFB3Cu;
label_1bfb3c:
    // 0x1bfb3c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x1bfb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1bfb40:
    // 0x1bfb40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfb44:
    // 0x1bfb44: 0xa3b500c4  sb          $s5, 0xC4($sp)
    ctx->pc = 0x1bfb44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 21));
label_1bfb48:
    // 0x1bfb48: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1bfb4c:
    // 0x1bfb4c: 0xa0f20003  sb          $s2, 0x3($a3)
    ctx->pc = 0x1bfb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 18));
label_1bfb50:
    // 0x1bfb50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bfb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfb54:
    // 0x1bfb54: 0xa0f00001  sb          $s0, 0x1($a3)
    ctx->pc = 0x1bfb54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 16));
label_1bfb58:
    // 0x1bfb58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bfb58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bfb5c:
    // 0x1bfb5c: 0xa0f10002  sb          $s1, 0x2($a3)
    ctx->pc = 0x1bfb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 17));
label_1bfb60:
    // 0x1bfb60: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1bfb60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1bfb64:
    // 0x1bfb64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfb68:
    // 0x1bfb68: 0x35290008  ori         $t1, $t1, 0x8
    ctx->pc = 0x1bfb68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
label_1bfb6c:
    // 0x1bfb6c: 0x8ee30400  lw          $v1, 0x400($s7)
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1024)));
label_1bfb70:
    // 0x1bfb70: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1bfb74:
    // 0x1bfb74: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1bfb78:
    // 0x1bfb78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfb78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb7c:
    // 0x1bfb7c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1bfb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1bfb80:
    // 0x1bfb80: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1bfb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1bfb84:
    // 0x1bfb84: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1bfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1bfb88:
    // 0x1bfb88: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1bfb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bfb8c:
    // 0x1bfb8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bfb90:
    // 0x1bfb90: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1bfb94:
    // 0x1bfb94: 0x40f809  jalr        $v0
label_1bfb98:
    if (ctx->pc == 0x1BFB98u) {
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x8fa600c4  lw          $a2, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB9Cu;
        goto label_1bfb9c;
    }
    ctx->pc = 0x1BFB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFB9Cu);
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x8fa600c4  lw          $a2, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB94u, 0x1BFB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFB9Cu;
label_1bfb9c:
    // 0x1bfb9c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1bfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1bfba0:
    // 0x1bfba0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bfba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfba4:
    // 0x1bfba4: 0xa3b500c8  sb          $s5, 0xC8($sp)
    ctx->pc = 0x1bfba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 21));
label_1bfba8:
    // 0x1bfba8: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1bfbac:
    // 0x1bfbac: 0xa0700001  sb          $s0, 0x1($v1)
    ctx->pc = 0x1bfbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 16));
label_1bfbb0:
    // 0x1bfbb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bfbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfbb4:
    // 0x1bfbb4: 0xa0710002  sb          $s1, 0x2($v1)
    ctx->pc = 0x1bfbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 17));
label_1bfbb8:
    // 0x1bfbb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bfbb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bfbbc:
    // 0x1bfbbc: 0xa0720003  sb          $s2, 0x3($v1)
    ctx->pc = 0x1bfbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 18));
label_1bfbc0:
    // 0x1bfbc0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1bfbc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1bfbc4:
    // 0x1bfbc4: 0x8ee30500  lw          $v1, 0x500($s7)
    ctx->pc = 0x1bfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1280)));
label_1bfbc8:
    // 0x1bfbc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfbcc:
    // 0x1bfbcc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1bfbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1bfbd0:
    // 0x1bfbd0: 0x35290009  ori         $t1, $t1, 0x9
    ctx->pc = 0x1bfbd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)9);
label_1bfbd4:
    // 0x1bfbd4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1bfbd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1bfbd8:
    // 0x1bfbd8: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1bfbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1bfbdc:
    // 0x1bfbdc: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1bfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1bfbe0:
    // 0x1bfbe0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfbe0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfbe4:
    // 0x1bfbe4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1bfbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1bfbe8:
    // 0x1bfbe8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1bfbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bfbec:
    // 0x1bfbec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bfbf0:
    // 0x1bfbf0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1bfbf4:
    // 0x1bfbf4: 0x40f809  jalr        $v0
label_1bfbf8:
    if (ctx->pc == 0x1BFBF8u) {
        ctx->pc = 0x1BFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF4u;
        // 0x1bfbf8: 0x8fa600c8  lw          $a2, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBFCu;
        goto label_1bfbfc;
    }
    ctx->pc = 0x1BFBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFBFCu);
        ctx->pc = 0x1BFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF4u;
        // 0x1bfbf8: 0x8fa600c8  lw          $a2, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFBF4u, 0x1BFBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFBFCu;
label_1bfbfc:
    // 0x1bfbfc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1bfbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_1bfc00:
    // 0x1bfc00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bfc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bfc04:
    // 0x1bfc04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bfc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bfc08:
    // 0x1bfc08: 0x24632e90  addiu       $v1, $v1, 0x2E90
    ctx->pc = 0x1bfc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11920));
label_1bfc0c:
    // 0x1bfc0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bfc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1bfc10:
    // 0x1bfc10: 0x76b021  addu        $s6, $v1, $s6
    ctx->pc = 0x1bfc10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1bfc14:
    // 0x1bfc14: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1bfc18:
    // 0x1bfc18: 0xafb600cc  sw          $s6, 0xCC($sp)
    ctx->pc = 0x1bfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 22));
label_1bfc1c:
    // 0x1bfc1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfc20:
    // 0x1bfc20: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1bfc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1bfc24:
    // 0x1bfc24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1bfc24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1bfc28:
    // 0x1bfc28: 0x7ac30040  lq          $v1, 0x40($s6)
    ctx->pc = 0x1bfc28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 64)));
label_1bfc2c:
    // 0x1bfc2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfc30:
    // 0x1bfc30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bfc34:
    // 0x1bfc34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfc38:
    // 0x1bfc38: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1bfc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1bfc3c:
    // 0x1bfc3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bfc3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc40:
    // 0x1bfc40: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1bfc40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bfc44:
    // 0x1bfc44: 0xc06e424  jal         func_1B9090
label_1bfc48:
    if (ctx->pc == 0x1BFC48u) {
        ctx->pc = 0x1BFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC44u;
        // 0x1bfc48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC4Cu;
        goto label_1bfc4c;
    }
    ctx->pc = 0x1BFC44u;
    SET_GPR_U32(ctx, 31, 0x1BFC4Cu);
    ctx->pc = 0x1BFC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC44u;
    // 0x1bfc48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1BFC44u, 0x1BFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC4Cu;
label_1bfc4c:
    // 0x1bfc4c: 0xc067b9c  jal         func_19EE70
label_1bfc50:
    if (ctx->pc == 0x1BFC50u) {
        ctx->pc = 0x1BFC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC4Cu;
        // 0x1bfc50: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC54u;
        goto label_1bfc54;
    }
    ctx->pc = 0x1BFC4Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC54u);
    ctx->pc = 0x1BFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC4Cu;
    // 0x1bfc50: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1BFC4Cu, 0x1BFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC54u;
label_1bfc54:
    // 0x1bfc54: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1bfc58:
    // 0x1bfc58: 0xc06ec94  jal         func_1BB250
label_1bfc5c:
    if (ctx->pc == 0x1BFC5Cu) {
        ctx->pc = 0x1BFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC58u;
        // 0x1bfc5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC60u;
        goto label_1bfc60;
    }
    ctx->pc = 0x1BFC58u;
    SET_GPR_U32(ctx, 31, 0x1BFC60u);
    ctx->pc = 0x1BFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC58u;
    // 0x1bfc5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1BFC58u, 0x1BFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC60u;
label_1bfc60:
    // 0x1bfc60: 0xaee00844  sw          $zero, 0x844($s7)
    ctx->pc = 0x1bfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2116), GPR_U32(ctx, 0));
label_1bfc64:
    // 0x1bfc64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bfc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc68:
    // 0x1bfc68: 0xaee0084c  sw          $zero, 0x84C($s7)
    ctx->pc = 0x1bfc68u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2124), GPR_U32(ctx, 0));
label_1bfc6c:
    // 0x1bfc6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bfc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bfc70:
    // 0x1bfc70: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1bfc74:
    // 0x1bfc74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bfc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bfc78:
    // 0x1bfc78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bfc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bfc7c:
    // 0x1bfc7c: 0xc06ff4c  jal         func_1BFD30
label_1bfc80:
    if (ctx->pc == 0x1BFC80u) {
        ctx->pc = 0x1BFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC7Cu;
        // 0x1bfc80: 0xaee00850  sw          $zero, 0x850($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 2128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC84u;
        goto label_1bfc84;
    }
    ctx->pc = 0x1BFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC84u);
    ctx->pc = 0x1BFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC7Cu;
    // 0x1bfc80: 0xaee00850  sw          $zero, 0x850($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 2128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFD30u, 0x1BFC7Cu, 0x1BFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC84u;
label_1bfc84:
    // 0x1bfc84: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1bfc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1bfc88:
    // 0x1bfc88: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1bfc88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1bfc8c:
    // 0x1bfc8c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1bfc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1bfc90:
    // 0x1bfc90: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1bfc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1bfc94:
    // 0x1bfc94: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1bfc94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1bfc98:
    // 0x1bfc98: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1bfc98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1bfc9c:
    // 0x1bfc9c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1bfc9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1bfca0:
    // 0x1bfca0: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1bfca0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1bfca4:
    // 0x1bfca4: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1bfca4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1bfca8:
    // 0x1bfca8: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1bfca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1bfcac:
    // 0x1bfcac: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1bfcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bfcb0:
    // 0x1bfcb0: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1bfcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bfcb4:
    // 0x1bfcb4: 0x3e00008  jr          $ra
label_1bfcb8:
    if (ctx->pc == 0x1BFCB8u) {
        ctx->pc = 0x1BFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCB4u;
        // 0x1bfcb8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCBCu;
        goto label_1bfcbc;
    }
    ctx->pc = 0x1BFCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCB4u;
        // 0x1bfcb8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFCBCu;
label_1bfcbc:
    // 0x1bfcbc: 0x0  nop
    ctx->pc = 0x1bfcbcu;
    // NOP
    ctx->pc = 0x1bfcc0u;
}
