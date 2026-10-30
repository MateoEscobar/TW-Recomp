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

// Function: sub_0038AB50
// Address: 0x38ab50 - 0x38b0e8
void sub_0038AB50_0x38ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AB50_0x38ab50");
#endif

    switch (ctx->pc) {
        case 0x38ab50u: goto label_38ab50;
        case 0x38ab54u: goto label_38ab54;
        case 0x38ab58u: goto label_38ab58;
        case 0x38ab5cu: goto label_38ab5c;
        case 0x38ab60u: goto label_38ab60;
        case 0x38ab64u: goto label_38ab64;
        case 0x38ab68u: goto label_38ab68;
        case 0x38ab6cu: goto label_38ab6c;
        case 0x38ab70u: goto label_38ab70;
        case 0x38ab74u: goto label_38ab74;
        case 0x38ab78u: goto label_38ab78;
        case 0x38ab7cu: goto label_38ab7c;
        case 0x38ab80u: goto label_38ab80;
        case 0x38ab84u: goto label_38ab84;
        case 0x38ab88u: goto label_38ab88;
        case 0x38ab8cu: goto label_38ab8c;
        case 0x38ab90u: goto label_38ab90;
        case 0x38ab94u: goto label_38ab94;
        case 0x38ab98u: goto label_38ab98;
        case 0x38ab9cu: goto label_38ab9c;
        case 0x38aba0u: goto label_38aba0;
        case 0x38aba4u: goto label_38aba4;
        case 0x38aba8u: goto label_38aba8;
        case 0x38abacu: goto label_38abac;
        case 0x38abb0u: goto label_38abb0;
        case 0x38abb4u: goto label_38abb4;
        case 0x38abb8u: goto label_38abb8;
        case 0x38abbcu: goto label_38abbc;
        case 0x38abc0u: goto label_38abc0;
        case 0x38abc4u: goto label_38abc4;
        case 0x38abc8u: goto label_38abc8;
        case 0x38abccu: goto label_38abcc;
        case 0x38abd0u: goto label_38abd0;
        case 0x38abd4u: goto label_38abd4;
        case 0x38abd8u: goto label_38abd8;
        case 0x38abdcu: goto label_38abdc;
        case 0x38abe0u: goto label_38abe0;
        case 0x38abe4u: goto label_38abe4;
        case 0x38abe8u: goto label_38abe8;
        case 0x38abecu: goto label_38abec;
        case 0x38abf0u: goto label_38abf0;
        case 0x38abf4u: goto label_38abf4;
        case 0x38abf8u: goto label_38abf8;
        case 0x38abfcu: goto label_38abfc;
        case 0x38ac00u: goto label_38ac00;
        case 0x38ac04u: goto label_38ac04;
        case 0x38ac08u: goto label_38ac08;
        case 0x38ac0cu: goto label_38ac0c;
        case 0x38ac10u: goto label_38ac10;
        case 0x38ac14u: goto label_38ac14;
        case 0x38ac18u: goto label_38ac18;
        case 0x38ac1cu: goto label_38ac1c;
        case 0x38ac20u: goto label_38ac20;
        case 0x38ac24u: goto label_38ac24;
        case 0x38ac28u: goto label_38ac28;
        case 0x38ac2cu: goto label_38ac2c;
        case 0x38ac30u: goto label_38ac30;
        case 0x38ac34u: goto label_38ac34;
        case 0x38ac38u: goto label_38ac38;
        case 0x38ac3cu: goto label_38ac3c;
        case 0x38ac40u: goto label_38ac40;
        case 0x38ac44u: goto label_38ac44;
        case 0x38ac48u: goto label_38ac48;
        case 0x38ac4cu: goto label_38ac4c;
        case 0x38ac50u: goto label_38ac50;
        case 0x38ac54u: goto label_38ac54;
        case 0x38ac58u: goto label_38ac58;
        case 0x38ac5cu: goto label_38ac5c;
        case 0x38ac60u: goto label_38ac60;
        case 0x38ac64u: goto label_38ac64;
        case 0x38ac68u: goto label_38ac68;
        case 0x38ac6cu: goto label_38ac6c;
        case 0x38ac70u: goto label_38ac70;
        case 0x38ac74u: goto label_38ac74;
        case 0x38ac78u: goto label_38ac78;
        case 0x38ac7cu: goto label_38ac7c;
        case 0x38ac80u: goto label_38ac80;
        case 0x38ac84u: goto label_38ac84;
        case 0x38ac88u: goto label_38ac88;
        case 0x38ac8cu: goto label_38ac8c;
        case 0x38ac90u: goto label_38ac90;
        case 0x38ac94u: goto label_38ac94;
        case 0x38ac98u: goto label_38ac98;
        case 0x38ac9cu: goto label_38ac9c;
        case 0x38aca0u: goto label_38aca0;
        case 0x38aca4u: goto label_38aca4;
        case 0x38aca8u: goto label_38aca8;
        case 0x38acacu: goto label_38acac;
        case 0x38acb0u: goto label_38acb0;
        case 0x38acb4u: goto label_38acb4;
        case 0x38acb8u: goto label_38acb8;
        case 0x38acbcu: goto label_38acbc;
        case 0x38acc0u: goto label_38acc0;
        case 0x38acc4u: goto label_38acc4;
        case 0x38acc8u: goto label_38acc8;
        case 0x38acccu: goto label_38accc;
        case 0x38acd0u: goto label_38acd0;
        case 0x38acd4u: goto label_38acd4;
        case 0x38acd8u: goto label_38acd8;
        case 0x38acdcu: goto label_38acdc;
        case 0x38ace0u: goto label_38ace0;
        case 0x38ace4u: goto label_38ace4;
        case 0x38ace8u: goto label_38ace8;
        case 0x38acecu: goto label_38acec;
        case 0x38acf0u: goto label_38acf0;
        case 0x38acf4u: goto label_38acf4;
        case 0x38acf8u: goto label_38acf8;
        case 0x38acfcu: goto label_38acfc;
        case 0x38ad00u: goto label_38ad00;
        case 0x38ad04u: goto label_38ad04;
        case 0x38ad08u: goto label_38ad08;
        case 0x38ad0cu: goto label_38ad0c;
        case 0x38ad10u: goto label_38ad10;
        case 0x38ad14u: goto label_38ad14;
        case 0x38ad18u: goto label_38ad18;
        case 0x38ad1cu: goto label_38ad1c;
        case 0x38ad20u: goto label_38ad20;
        case 0x38ad24u: goto label_38ad24;
        case 0x38ad28u: goto label_38ad28;
        case 0x38ad2cu: goto label_38ad2c;
        case 0x38ad30u: goto label_38ad30;
        case 0x38ad34u: goto label_38ad34;
        case 0x38ad38u: goto label_38ad38;
        case 0x38ad3cu: goto label_38ad3c;
        case 0x38ad40u: goto label_38ad40;
        case 0x38ad44u: goto label_38ad44;
        case 0x38ad48u: goto label_38ad48;
        case 0x38ad4cu: goto label_38ad4c;
        case 0x38ad50u: goto label_38ad50;
        case 0x38ad54u: goto label_38ad54;
        case 0x38ad58u: goto label_38ad58;
        case 0x38ad5cu: goto label_38ad5c;
        case 0x38ad60u: goto label_38ad60;
        case 0x38ad64u: goto label_38ad64;
        case 0x38ad68u: goto label_38ad68;
        case 0x38ad6cu: goto label_38ad6c;
        case 0x38ad70u: goto label_38ad70;
        case 0x38ad74u: goto label_38ad74;
        case 0x38ad78u: goto label_38ad78;
        case 0x38ad7cu: goto label_38ad7c;
        case 0x38ad80u: goto label_38ad80;
        case 0x38ad84u: goto label_38ad84;
        case 0x38ad88u: goto label_38ad88;
        case 0x38ad8cu: goto label_38ad8c;
        case 0x38ad90u: goto label_38ad90;
        case 0x38ad94u: goto label_38ad94;
        case 0x38ad98u: goto label_38ad98;
        case 0x38ad9cu: goto label_38ad9c;
        case 0x38ada0u: goto label_38ada0;
        case 0x38ada4u: goto label_38ada4;
        case 0x38ada8u: goto label_38ada8;
        case 0x38adacu: goto label_38adac;
        case 0x38adb0u: goto label_38adb0;
        case 0x38adb4u: goto label_38adb4;
        case 0x38adb8u: goto label_38adb8;
        case 0x38adbcu: goto label_38adbc;
        case 0x38adc0u: goto label_38adc0;
        case 0x38adc4u: goto label_38adc4;
        case 0x38adc8u: goto label_38adc8;
        case 0x38adccu: goto label_38adcc;
        case 0x38add0u: goto label_38add0;
        case 0x38add4u: goto label_38add4;
        case 0x38add8u: goto label_38add8;
        case 0x38addcu: goto label_38addc;
        case 0x38ade0u: goto label_38ade0;
        case 0x38ade4u: goto label_38ade4;
        case 0x38ade8u: goto label_38ade8;
        case 0x38adecu: goto label_38adec;
        case 0x38adf0u: goto label_38adf0;
        case 0x38adf4u: goto label_38adf4;
        case 0x38adf8u: goto label_38adf8;
        case 0x38adfcu: goto label_38adfc;
        case 0x38ae00u: goto label_38ae00;
        case 0x38ae04u: goto label_38ae04;
        case 0x38ae08u: goto label_38ae08;
        case 0x38ae0cu: goto label_38ae0c;
        case 0x38ae10u: goto label_38ae10;
        case 0x38ae14u: goto label_38ae14;
        case 0x38ae18u: goto label_38ae18;
        case 0x38ae1cu: goto label_38ae1c;
        case 0x38ae20u: goto label_38ae20;
        case 0x38ae24u: goto label_38ae24;
        case 0x38ae28u: goto label_38ae28;
        case 0x38ae2cu: goto label_38ae2c;
        case 0x38ae30u: goto label_38ae30;
        case 0x38ae34u: goto label_38ae34;
        case 0x38ae38u: goto label_38ae38;
        case 0x38ae3cu: goto label_38ae3c;
        case 0x38ae40u: goto label_38ae40;
        case 0x38ae44u: goto label_38ae44;
        case 0x38ae48u: goto label_38ae48;
        case 0x38ae4cu: goto label_38ae4c;
        case 0x38ae50u: goto label_38ae50;
        case 0x38ae54u: goto label_38ae54;
        case 0x38ae58u: goto label_38ae58;
        case 0x38ae5cu: goto label_38ae5c;
        case 0x38ae60u: goto label_38ae60;
        case 0x38ae64u: goto label_38ae64;
        case 0x38ae68u: goto label_38ae68;
        case 0x38ae6cu: goto label_38ae6c;
        case 0x38ae70u: goto label_38ae70;
        case 0x38ae74u: goto label_38ae74;
        case 0x38ae78u: goto label_38ae78;
        case 0x38ae7cu: goto label_38ae7c;
        case 0x38ae80u: goto label_38ae80;
        case 0x38ae84u: goto label_38ae84;
        case 0x38ae88u: goto label_38ae88;
        case 0x38ae8cu: goto label_38ae8c;
        case 0x38ae90u: goto label_38ae90;
        case 0x38ae94u: goto label_38ae94;
        case 0x38ae98u: goto label_38ae98;
        case 0x38ae9cu: goto label_38ae9c;
        case 0x38aea0u: goto label_38aea0;
        case 0x38aea4u: goto label_38aea4;
        case 0x38aea8u: goto label_38aea8;
        case 0x38aeacu: goto label_38aeac;
        case 0x38aeb0u: goto label_38aeb0;
        case 0x38aeb4u: goto label_38aeb4;
        case 0x38aeb8u: goto label_38aeb8;
        case 0x38aebcu: goto label_38aebc;
        case 0x38aec0u: goto label_38aec0;
        case 0x38aec4u: goto label_38aec4;
        case 0x38aec8u: goto label_38aec8;
        case 0x38aeccu: goto label_38aecc;
        case 0x38aed0u: goto label_38aed0;
        case 0x38aed4u: goto label_38aed4;
        case 0x38aed8u: goto label_38aed8;
        case 0x38aedcu: goto label_38aedc;
        case 0x38aee0u: goto label_38aee0;
        case 0x38aee4u: goto label_38aee4;
        case 0x38aee8u: goto label_38aee8;
        case 0x38aeecu: goto label_38aeec;
        case 0x38aef0u: goto label_38aef0;
        case 0x38aef4u: goto label_38aef4;
        case 0x38aef8u: goto label_38aef8;
        case 0x38aefcu: goto label_38aefc;
        case 0x38af00u: goto label_38af00;
        case 0x38af04u: goto label_38af04;
        case 0x38af08u: goto label_38af08;
        case 0x38af0cu: goto label_38af0c;
        case 0x38af10u: goto label_38af10;
        case 0x38af14u: goto label_38af14;
        case 0x38af18u: goto label_38af18;
        case 0x38af1cu: goto label_38af1c;
        case 0x38af20u: goto label_38af20;
        case 0x38af24u: goto label_38af24;
        case 0x38af28u: goto label_38af28;
        case 0x38af2cu: goto label_38af2c;
        case 0x38af30u: goto label_38af30;
        case 0x38af34u: goto label_38af34;
        case 0x38af38u: goto label_38af38;
        case 0x38af3cu: goto label_38af3c;
        case 0x38af40u: goto label_38af40;
        case 0x38af44u: goto label_38af44;
        case 0x38af48u: goto label_38af48;
        case 0x38af4cu: goto label_38af4c;
        case 0x38af50u: goto label_38af50;
        case 0x38af54u: goto label_38af54;
        case 0x38af58u: goto label_38af58;
        case 0x38af5cu: goto label_38af5c;
        case 0x38af60u: goto label_38af60;
        case 0x38af64u: goto label_38af64;
        case 0x38af68u: goto label_38af68;
        case 0x38af6cu: goto label_38af6c;
        case 0x38af70u: goto label_38af70;
        case 0x38af74u: goto label_38af74;
        case 0x38af78u: goto label_38af78;
        case 0x38af7cu: goto label_38af7c;
        case 0x38af80u: goto label_38af80;
        case 0x38af84u: goto label_38af84;
        case 0x38af88u: goto label_38af88;
        case 0x38af8cu: goto label_38af8c;
        case 0x38af90u: goto label_38af90;
        case 0x38af94u: goto label_38af94;
        case 0x38af98u: goto label_38af98;
        case 0x38af9cu: goto label_38af9c;
        case 0x38afa0u: goto label_38afa0;
        case 0x38afa4u: goto label_38afa4;
        case 0x38afa8u: goto label_38afa8;
        case 0x38afacu: goto label_38afac;
        case 0x38afb0u: goto label_38afb0;
        case 0x38afb4u: goto label_38afb4;
        case 0x38afb8u: goto label_38afb8;
        case 0x38afbcu: goto label_38afbc;
        case 0x38afc0u: goto label_38afc0;
        case 0x38afc4u: goto label_38afc4;
        case 0x38afc8u: goto label_38afc8;
        case 0x38afccu: goto label_38afcc;
        case 0x38afd0u: goto label_38afd0;
        case 0x38afd4u: goto label_38afd4;
        case 0x38afd8u: goto label_38afd8;
        case 0x38afdcu: goto label_38afdc;
        case 0x38afe0u: goto label_38afe0;
        case 0x38afe4u: goto label_38afe4;
        case 0x38afe8u: goto label_38afe8;
        case 0x38afecu: goto label_38afec;
        case 0x38aff0u: goto label_38aff0;
        case 0x38aff4u: goto label_38aff4;
        case 0x38aff8u: goto label_38aff8;
        case 0x38affcu: goto label_38affc;
        case 0x38b000u: goto label_38b000;
        case 0x38b004u: goto label_38b004;
        case 0x38b008u: goto label_38b008;
        case 0x38b00cu: goto label_38b00c;
        case 0x38b010u: goto label_38b010;
        case 0x38b014u: goto label_38b014;
        case 0x38b018u: goto label_38b018;
        case 0x38b01cu: goto label_38b01c;
        case 0x38b020u: goto label_38b020;
        case 0x38b024u: goto label_38b024;
        case 0x38b028u: goto label_38b028;
        case 0x38b02cu: goto label_38b02c;
        case 0x38b030u: goto label_38b030;
        case 0x38b034u: goto label_38b034;
        case 0x38b038u: goto label_38b038;
        case 0x38b03cu: goto label_38b03c;
        case 0x38b040u: goto label_38b040;
        case 0x38b044u: goto label_38b044;
        case 0x38b048u: goto label_38b048;
        case 0x38b04cu: goto label_38b04c;
        case 0x38b050u: goto label_38b050;
        case 0x38b054u: goto label_38b054;
        case 0x38b058u: goto label_38b058;
        case 0x38b05cu: goto label_38b05c;
        case 0x38b060u: goto label_38b060;
        case 0x38b064u: goto label_38b064;
        case 0x38b068u: goto label_38b068;
        case 0x38b06cu: goto label_38b06c;
        case 0x38b070u: goto label_38b070;
        case 0x38b074u: goto label_38b074;
        case 0x38b078u: goto label_38b078;
        case 0x38b07cu: goto label_38b07c;
        case 0x38b080u: goto label_38b080;
        case 0x38b084u: goto label_38b084;
        case 0x38b088u: goto label_38b088;
        case 0x38b08cu: goto label_38b08c;
        case 0x38b090u: goto label_38b090;
        case 0x38b094u: goto label_38b094;
        case 0x38b098u: goto label_38b098;
        case 0x38b09cu: goto label_38b09c;
        case 0x38b0a0u: goto label_38b0a0;
        case 0x38b0a4u: goto label_38b0a4;
        case 0x38b0a8u: goto label_38b0a8;
        case 0x38b0acu: goto label_38b0ac;
        case 0x38b0b0u: goto label_38b0b0;
        case 0x38b0b4u: goto label_38b0b4;
        case 0x38b0b8u: goto label_38b0b8;
        case 0x38b0bcu: goto label_38b0bc;
        case 0x38b0c0u: goto label_38b0c0;
        case 0x38b0c4u: goto label_38b0c4;
        case 0x38b0c8u: goto label_38b0c8;
        case 0x38b0ccu: goto label_38b0cc;
        case 0x38b0d0u: goto label_38b0d0;
        case 0x38b0d4u: goto label_38b0d4;
        case 0x38b0d8u: goto label_38b0d8;
        case 0x38b0dcu: goto label_38b0dc;
        case 0x38b0e0u: goto label_38b0e0;
        case 0x38b0e4u: goto label_38b0e4;
        default: break;
    }

    ctx->pc = 0x38ab50u;

label_38ab50:
    // 0x38ab50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x38ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_38ab54:
    // 0x38ab54: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x38ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_38ab58:
    // 0x38ab58: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x38ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_38ab5c:
    // 0x38ab5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38ab5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ab60:
    // 0x38ab60: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x38ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_38ab64:
    // 0x38ab64: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38ab64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38ab68:
    // 0x38ab68: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x38ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_38ab6c:
    // 0x38ab6c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x38ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_38ab70:
    // 0x38ab70: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x38ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_38ab74:
    // 0x38ab74: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x38ab74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_38ab78:
    // 0x38ab78: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x38ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_38ab7c:
    // 0x38ab7c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x38ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_38ab80:
    // 0x38ab80: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38ab84:
    // 0x38ab84: 0x16a00032  bnez        $s5, . + 4 + (0x32 << 2)
label_38ab88:
    if (ctx->pc == 0x38AB88u) {
        ctx->pc = 0x38AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB84u;
        // 0x38ab88: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AB8Cu;
        goto label_38ab8c;
    }
    ctx->pc = 0x38AB84u;
    {
        const bool branch_taken_0x38ab84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB84u;
        // 0x38ab88: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab84) {
            ctx->pc = 0x38AC50u;
            goto label_38ac50;
        }
    }
    ctx->pc = 0x38AB8Cu;
label_38ab8c:
    // 0x38ab8c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38ab8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38ab90:
    // 0x38ab90: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x38ab90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_38ab94:
    // 0x38ab94: 0xc0e8b48  jal         func_3A2D20
label_38ab98:
    if (ctx->pc == 0x38AB98u) {
        ctx->pc = 0x38AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB94u;
        // 0x38ab98: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AB9Cu;
        goto label_38ab9c;
    }
    ctx->pc = 0x38AB94u;
    SET_GPR_U32(ctx, 31, 0x38AB9Cu);
    ctx->pc = 0x38AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AB94u;
    // 0x38ab98: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38AB94u, 0x38AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AB9Cu;
label_38ab9c:
    // 0x38ab9c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38aba0:
    // 0x38aba0: 0xc0e8b58  jal         func_3A2D60
label_38aba4:
    if (ctx->pc == 0x38ABA4u) {
        ctx->pc = 0x38ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABA0u;
        // 0x38aba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABA8u;
        goto label_38aba8;
    }
    ctx->pc = 0x38ABA0u;
    SET_GPR_U32(ctx, 31, 0x38ABA8u);
    ctx->pc = 0x38ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABA0u;
    // 0x38aba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38ABA0u, 0x38ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABA8u;
label_38aba8:
    // 0x38aba8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x38aba8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_38abac:
    // 0x38abac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38abacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38abb0:
    // 0x38abb0: 0x26311740  addiu       $s1, $s1, 0x1740
    ctx->pc = 0x38abb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
label_38abb4:
    // 0x38abb4: 0xc0e8b58  jal         func_3A2D60
label_38abb8:
    if (ctx->pc == 0x38ABB8u) {
        ctx->pc = 0x38ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABB4u;
        // 0x38abb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABBCu;
        goto label_38abbc;
    }
    ctx->pc = 0x38ABB4u;
    SET_GPR_U32(ctx, 31, 0x38ABBCu);
    ctx->pc = 0x38ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABB4u;
    // 0x38abb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38ABB4u, 0x38ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABBCu;
label_38abbc:
    // 0x38abbc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38abc0:
    // 0x38abc0: 0xc0e8b70  jal         func_3A2DC0
label_38abc4:
    if (ctx->pc == 0x38ABC4u) {
        ctx->pc = 0x38ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABC0u;
        // 0x38abc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABC8u;
        goto label_38abc8;
    }
    ctx->pc = 0x38ABC0u;
    SET_GPR_U32(ctx, 31, 0x38ABC8u);
    ctx->pc = 0x38ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABC0u;
    // 0x38abc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x38ABC0u, 0x38ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABC8u;
label_38abc8:
    // 0x38abc8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38abcc:
    // 0x38abcc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x38abccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_38abd0:
    // 0x38abd0: 0xc0e8b90  jal         func_3A2E40
label_38abd4:
    if (ctx->pc == 0x38ABD4u) {
        ctx->pc = 0x38ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABD0u;
        // 0x38abd4: 0x24a5e2f8  addiu       $a1, $a1, -0x1D08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABD8u;
        goto label_38abd8;
    }
    ctx->pc = 0x38ABD0u;
    SET_GPR_U32(ctx, 31, 0x38ABD8u);
    ctx->pc = 0x38ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABD0u;
    // 0x38abd4: 0x24a5e2f8  addiu       $a1, $a1, -0x1D08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x38ABD0u, 0x38ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABD8u;
label_38abd8:
    // 0x38abd8: 0xc0e8b50  jal         func_3A2D40
label_38abdc:
    if (ctx->pc == 0x38ABDCu) {
        ctx->pc = 0x38ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABD8u;
        // 0x38abdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABE0u;
        goto label_38abe0;
    }
    ctx->pc = 0x38ABD8u;
    SET_GPR_U32(ctx, 31, 0x38ABE0u);
    ctx->pc = 0x38ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABD8u;
    // 0x38abdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38ABD8u, 0x38ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABE0u;
label_38abe0:
    // 0x38abe0: 0xc0e8b48  jal         func_3A2D20
label_38abe4:
    if (ctx->pc == 0x38ABE4u) {
        ctx->pc = 0x38ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABE0u;
        // 0x38abe4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABE8u;
        goto label_38abe8;
    }
    ctx->pc = 0x38ABE0u;
    SET_GPR_U32(ctx, 31, 0x38ABE8u);
    ctx->pc = 0x38ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABE0u;
    // 0x38abe4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38ABE0u, 0x38ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABE8u;
label_38abe8:
    // 0x38abe8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38abec:
    // 0x38abec: 0xc0e8b58  jal         func_3A2D60
label_38abf0:
    if (ctx->pc == 0x38ABF0u) {
        ctx->pc = 0x38ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABECu;
        // 0x38abf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ABF4u;
        goto label_38abf4;
    }
    ctx->pc = 0x38ABECu;
    SET_GPR_U32(ctx, 31, 0x38ABF4u);
    ctx->pc = 0x38ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABECu;
    // 0x38abf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38ABECu, 0x38ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABF4u;
label_38abf4:
    // 0x38abf4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38abf8:
    // 0x38abf8: 0xc0e8b58  jal         func_3A2D60
label_38abfc:
    if (ctx->pc == 0x38ABFCu) {
        ctx->pc = 0x38ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABF8u;
        // 0x38abfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC00u;
        goto label_38ac00;
    }
    ctx->pc = 0x38ABF8u;
    SET_GPR_U32(ctx, 31, 0x38AC00u);
    ctx->pc = 0x38ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABF8u;
    // 0x38abfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38ABF8u, 0x38AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC00u;
label_38ac00:
    // 0x38ac00: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38ac04:
    // 0x38ac04: 0xc0e8b70  jal         func_3A2DC0
label_38ac08:
    if (ctx->pc == 0x38AC08u) {
        ctx->pc = 0x38AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC04u;
        // 0x38ac08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC0Cu;
        goto label_38ac0c;
    }
    ctx->pc = 0x38AC04u;
    SET_GPR_U32(ctx, 31, 0x38AC0Cu);
    ctx->pc = 0x38AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC04u;
    // 0x38ac08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x38AC04u, 0x38AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC0Cu;
label_38ac0c:
    // 0x38ac0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38ac10:
    // 0x38ac10: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x38ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_38ac14:
    // 0x38ac14: 0xc0e8b90  jal         func_3A2E40
label_38ac18:
    if (ctx->pc == 0x38AC18u) {
        ctx->pc = 0x38AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC14u;
        // 0x38ac18: 0x24a5e310  addiu       $a1, $a1, -0x1CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC1Cu;
        goto label_38ac1c;
    }
    ctx->pc = 0x38AC14u;
    SET_GPR_U32(ctx, 31, 0x38AC1Cu);
    ctx->pc = 0x38AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC14u;
    // 0x38ac18: 0x24a5e310  addiu       $a1, $a1, -0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x38AC14u, 0x38AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC1Cu;
label_38ac1c:
    // 0x38ac1c: 0xc0e8b50  jal         func_3A2D40
label_38ac20:
    if (ctx->pc == 0x38AC20u) {
        ctx->pc = 0x38AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC1Cu;
        // 0x38ac20: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC24u;
        goto label_38ac24;
    }
    ctx->pc = 0x38AC1Cu;
    SET_GPR_U32(ctx, 31, 0x38AC24u);
    ctx->pc = 0x38AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC1Cu;
    // 0x38ac20: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38AC1Cu, 0x38AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC24u;
label_38ac24:
    // 0x38ac24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38ac28:
    // 0x38ac28: 0x8e6512fc  lw          $a1, 0x12FC($s3)
    ctx->pc = 0x38ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4860)));
label_38ac2c:
    // 0x38ac2c: 0xc044096  jal         func_110258
label_38ac30:
    if (ctx->pc == 0x38AC30u) {
        ctx->pc = 0x38AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC2Cu;
        // 0x38ac30: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC34u;
        goto label_38ac34;
    }
    ctx->pc = 0x38AC2Cu;
    SET_GPR_U32(ctx, 31, 0x38AC34u);
    ctx->pc = 0x38AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC2Cu;
    // 0x38ac30: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x38AC2Cu, 0x38AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC34u;
label_38ac34:
    // 0x38ac34: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x38ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_38ac38:
    // 0x38ac38: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x38ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_38ac3c:
    // 0x38ac3c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x38ac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_38ac40:
    // 0x38ac40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38ac40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ac44:
    // 0x38ac44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38ac48:
    // 0x38ac48: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x38ac48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_38ac4c:
    // 0x38ac4c: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x38ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_38ac50:
    // 0x38ac50: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_38ac54:
    // 0x38ac54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38ac54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ac58:
    // 0x38ac58: 0x245ee5b0  addiu       $fp, $v0, -0x1A50
    ctx->pc = 0x38ac58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
label_38ac5c:
    // 0x38ac5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ac60:
    // 0x38ac60: 0x26621204  addiu       $v0, $s3, 0x1204
    ctx->pc = 0x38ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4612));
label_38ac64:
    // 0x38ac64: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x38ac64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_38ac68:
    // 0x38ac68: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x38ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_38ac6c:
    // 0x38ac6c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x38ac6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ac70:
    // 0x38ac70: 0x241605f0  addiu       $s6, $zero, 0x5F0
    ctx->pc = 0x38ac70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38ac74:
    // 0x38ac74: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x38ac74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38ac78:
    // 0x38ac78: 0x8e6511f0  lw          $a1, 0x11F0($s3)
    ctx->pc = 0x38ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4592)));
label_38ac7c:
    // 0x38ac7c: 0x2122004  sllv        $a0, $s2, $s0
    ctx->pc = 0x38ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
label_38ac80:
    // 0x38ac80: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x38ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_38ac84:
    // 0x38ac84: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_38ac88:
    if (ctx->pc == 0x38AC88u) {
        ctx->pc = 0x38AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC84u;
        // 0x38ac88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC8Cu;
        goto label_38ac8c;
    }
    ctx->pc = 0x38AC84u;
    {
        const bool branch_taken_0x38ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ac84) {
            ctx->pc = 0x38AC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AC84u;
            // 0x38ac88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD10u;
            goto label_38ad10;
        }
    }
    ctx->pc = 0x38AC8Cu;
label_38ac8c:
    // 0x38ac8c: 0x8e6211f4  lw          $v0, 0x11F4($s3)
    ctx->pc = 0x38ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4596)));
label_38ac90:
    // 0x38ac90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38ac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_38ac94:
    // 0x38ac94: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_38ac98:
    if (ctx->pc == 0x38AC98u) {
        ctx->pc = 0x38AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC94u;
        // 0x38ac98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC9Cu;
        goto label_38ac9c;
    }
    ctx->pc = 0x38AC94u;
    {
        const bool branch_taken_0x38ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ac94) {
            ctx->pc = 0x38AC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AC94u;
            // 0x38ac98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD10u;
            goto label_38ad10;
        }
    }
    ctx->pc = 0x38AC9Cu;
label_38ac9c:
    // 0x38ac9c: 0x8e6311f8  lw          $v1, 0x11F8($s3)
    ctx->pc = 0x38ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4600)));
label_38aca0:
    // 0x38aca0: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x38aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_38aca4:
    // 0x38aca4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_38aca8:
    if (ctx->pc == 0x38ACA8u) {
        ctx->pc = 0x38ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACA4u;
        // 0x38aca8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACACu;
        goto label_38acac;
    }
    ctx->pc = 0x38ACA4u;
    {
        const bool branch_taken_0x38aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38aca4) {
            ctx->pc = 0x38ACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38ACA4u;
            // 0x38aca8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD10u;
            goto label_38ad10;
        }
    }
    ctx->pc = 0x38ACACu;
label_38acac:
    // 0x38acac: 0x2e02001a  sltiu       $v0, $s0, 0x1A
    ctx->pc = 0x38acacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_38acb0:
    // 0x38acb0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_38acb4:
    if (ctx->pc == 0x38ACB4u) {
        ctx->pc = 0x38ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACB0u;
        // 0x38acb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACB8u;
        goto label_38acb8;
    }
    ctx->pc = 0x38ACB0u;
    {
        const bool branch_taken_0x38acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACB0u;
        // 0x38acb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acb0) {
            ctx->pc = 0x38ACECu;
            goto label_38acec;
        }
    }
    ctx->pc = 0x38ACB8u;
label_38acb8:
    // 0x38acb8: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
label_38acbc:
    // 0x38acbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38acbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38acc0:
    // 0x38acc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38acc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38acc4:
    // 0x38acc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38acc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38acc8:
    // 0x38acc8: 0xb61018  mult        $v0, $a1, $s6
    ctx->pc = 0x38acc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38accc:
    // 0x38accc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38acd0:
    // 0x38acd0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x38acd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38acd4:
    // 0x38acd4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x38acd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_38acd8:
    // 0x38acd8: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x38acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_38acdc:
    // 0x38acdc: 0xc0e2936  jal         func_38A4D8
label_38ace0:
    if (ctx->pc == 0x38ACE0u) {
        ctx->pc = 0x38ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACDCu;
        // 0x38ace0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACE4u;
        goto label_38ace4;
    }
    ctx->pc = 0x38ACDCu;
    SET_GPR_U32(ctx, 31, 0x38ACE4u);
    ctx->pc = 0x38ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ACDCu;
    // 0x38ace0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4D8u, 0x38ACDCu, 0x38ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ACE4u;
label_38ace4:
    // 0x38ace4: 0x10000006  b           . + 4 + (0x6 << 2)
label_38ace8:
    if (ctx->pc == 0x38ACE8u) {
        ctx->pc = 0x38ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACE4u;
        // 0x38ace8: 0x8e6211ec  lw          $v0, 0x11EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACECu;
        goto label_38acec;
    }
    ctx->pc = 0x38ACE4u;
    {
        const bool branch_taken_0x38ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACE4u;
        // 0x38ace8: 0x8e6211ec  lw          $v0, 0x11EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ace4) {
            ctx->pc = 0x38AD00u;
            goto label_38ad00;
        }
    }
    ctx->pc = 0x38ACECu;
label_38acec:
    // 0x38acec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38acf0:
    // 0x38acf0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x38acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_38acf4:
    // 0x38acf4: 0xae6211f0  sw          $v0, 0x11F0($s3)
    ctx->pc = 0x38acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4592), GPR_U32(ctx, 2));
label_38acf8:
    // 0x38acf8: 0xae6311f8  sw          $v1, 0x11F8($s3)
    ctx->pc = 0x38acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4600), GPR_U32(ctx, 3));
label_38acfc:
    // 0x38acfc: 0x8e6211ec  lw          $v0, 0x11EC($s3)
    ctx->pc = 0x38acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4588)));
label_38ad00:
    // 0x38ad00: 0x2121804  sllv        $v1, $s2, $s0
    ctx->pc = 0x38ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
label_38ad04:
    // 0x38ad04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38ad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_38ad08:
    // 0x38ad08: 0xae6211ec  sw          $v0, 0x11EC($s3)
    ctx->pc = 0x38ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4588), GPR_U32(ctx, 2));
label_38ad0c:
    // 0x38ad0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38ad0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38ad10:
    // 0x38ad10: 0x2e02001e  sltiu       $v0, $s0, 0x1E
    ctx->pc = 0x38ad10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_38ad14:
    // 0x38ad14: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_38ad18:
    if (ctx->pc == 0x38AD18u) {
        ctx->pc = 0x38AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD14u;
        // 0x38ad18: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD1Cu;
        goto label_38ad1c;
    }
    ctx->pc = 0x38AD14u;
    {
        const bool branch_taken_0x38ad14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD14u;
        // 0x38ad18: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad14) {
            ctx->pc = 0x38AC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ac78;
        }
    }
    ctx->pc = 0x38AD1Cu;
label_38ad1c:
    // 0x38ad1c: 0x56a0005a  bnel        $s5, $zero, . + 4 + (0x5A << 2)
label_38ad20:
    if (ctx->pc == 0x38AD20u) {
        ctx->pc = 0x38AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD1Cu;
        // 0x38ad20: 0x8e6411e4  lw          $a0, 0x11E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD24u;
        goto label_38ad24;
    }
    ctx->pc = 0x38AD1Cu;
    {
        const bool branch_taken_0x38ad1c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ad1c) {
            ctx->pc = 0x38AD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AD1Cu;
            // 0x38ad20: 0x8e6411e4  lw          $a0, 0x11E4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AE88u;
            goto label_38ae88;
        }
    }
    ctx->pc = 0x38AD24u;
label_38ad24:
    // 0x38ad24: 0xc0e409a  jal         func_390268
label_38ad28:
    if (ctx->pc == 0x38AD28u) {
        ctx->pc = 0x38AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD24u;
        // 0x38ad28: 0x26641208  addiu       $a0, $s3, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD2Cu;
        goto label_38ad2c;
    }
    ctx->pc = 0x38AD24u;
    SET_GPR_U32(ctx, 31, 0x38AD2Cu);
    ctx->pc = 0x38AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD24u;
    // 0x38ad28: 0x26641208  addiu       $a0, $s3, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x38AD24u, 0x38AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD2Cu;
label_38ad2c:
    // 0x38ad2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38ad2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ad30:
    // 0x38ad30: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_38ad34:
    if (ctx->pc == 0x38AD34u) {
        ctx->pc = 0x38AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD30u;
        // 0x38ad34: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD38u;
        goto label_38ad38;
    }
    ctx->pc = 0x38AD30u;
    {
        const bool branch_taken_0x38ad30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ad30) {
            ctx->pc = 0x38AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AD30u;
            // 0x38ad34: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD74u;
            goto label_38ad74;
        }
    }
    ctx->pc = 0x38AD38u;
label_38ad38:
    // 0x38ad38: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x38ad38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_38ad3c:
    // 0x38ad3c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x38ad3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_38ad40:
    // 0x38ad40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_38ad44:
    if (ctx->pc == 0x38AD44u) {
        ctx->pc = 0x38AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD40u;
        // 0x38ad44: 0x143842  srl         $a3, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD48u;
        goto label_38ad48;
    }
    ctx->pc = 0x38AD40u;
    {
        const bool branch_taken_0x38ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD40u;
        // 0x38ad44: 0x143842  srl         $a3, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad40) {
            ctx->pc = 0x38AD70u;
            goto label_38ad70;
        }
    }
    ctx->pc = 0x38AD48u;
label_38ad48:
    // 0x38ad48: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x38ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38ad4c:
    // 0x38ad4c: 0x2ce2000b  sltiu       $v0, $a3, 0xB
    ctx->pc = 0x38ad4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_38ad50:
    // 0x38ad50: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x38ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_38ad54:
    // 0x38ad54: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x38ad54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_38ad58:
    // 0x38ad58: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x38ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_38ad5c:
    // 0x38ad5c: 0xc13b652  jal         func_4ED948
label_38ad60:
    if (ctx->pc == 0x38AD60u) {
        ctx->pc = 0x38AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD5Cu;
        // 0x38ad60: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD64u;
        goto label_38ad64;
    }
    ctx->pc = 0x38AD5Cu;
    SET_GPR_U32(ctx, 31, 0x38AD64u);
    ctx->pc = 0x38AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD5Cu;
    // 0x38ad60: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x38AD5Cu, 0x38AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD64u;
label_38ad64:
    // 0x38ad64: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38ad68:
    // 0x38ad68: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x38ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_38ad6c:
    // 0x38ad6c: 0xae631208  sw          $v1, 0x1208($s3)
    ctx->pc = 0x38ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4616), GPR_U32(ctx, 3));
label_38ad70:
    // 0x38ad70: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x38ad70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_38ad74:
    // 0x38ad74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38ad78:
    // 0x38ad78: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x38ad78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_38ad7c:
    // 0x38ad7c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x38ad7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_38ad80:
    // 0x38ad80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38ad80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38ad84:
    // 0x38ad84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x38ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38ad88:
    // 0x38ad88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_38ad8c:
    // 0x38ad8c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x38ad8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38ad90:
    // 0x38ad90: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x38ad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_38ad94:
    // 0x38ad94: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x38ad94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_38ad98:
    // 0x38ad98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x38ad98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38ad9c:
    // 0x38ad9c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x38ad9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38ada0:
    // 0x38ada0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x38ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38ada4:
    // 0x38ada4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38ada4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38ada8:
    // 0x38ada8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x38ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_38adac:
    // 0x38adac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x38adacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_38adb0:
    // 0x38adb0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x38adb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_38adb4:
    // 0x38adb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38adb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38adb8:
    // 0x38adb8: 0x8c64cf14  lw          $a0, -0x30EC($v1)
    ctx->pc = 0x38adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954772)));
label_38adbc:
    // 0x38adbc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x38adbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_38adc0:
    // 0x38adc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38adc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38adc4:
    // 0x38adc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38adc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38adc8:
    // 0x38adc8: 0xc067074  jal         func_19C1D0
label_38adcc:
    if (ctx->pc == 0x38ADCCu) {
        ctx->pc = 0x38ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADC8u;
        // 0x38adcc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADD0u;
        goto label_38add0;
    }
    ctx->pc = 0x38ADC8u;
    SET_GPR_U32(ctx, 31, 0x38ADD0u);
    ctx->pc = 0x38ADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADC8u;
    // 0x38adcc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1D0u, 0x38ADC8u, 0x38ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADD0u;
label_38add0:
    // 0x38add0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38add4:
    // 0x38add4: 0xc0e858c  jal         func_3A1630
label_38add8:
    if (ctx->pc == 0x38ADD8u) {
        ctx->pc = 0x38ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADD4u;
        // 0x38add8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADDCu;
        goto label_38addc;
    }
    ctx->pc = 0x38ADD4u;
    SET_GPR_U32(ctx, 31, 0x38ADDCu);
    ctx->pc = 0x38ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADD4u;
    // 0x38add8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38ADD4u, 0x38ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADDCu;
label_38addc:
    // 0x38addc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38addcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38ade0:
    // 0x38ade0: 0xc0e8cda  jal         func_3A3368
label_38ade4:
    if (ctx->pc == 0x38ADE4u) {
        ctx->pc = 0x38ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE0u;
        // 0x38ade4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADE8u;
        goto label_38ade8;
    }
    ctx->pc = 0x38ADE0u;
    SET_GPR_U32(ctx, 31, 0x38ADE8u);
    ctx->pc = 0x38ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADE0u;
    // 0x38ade4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x38ADE0u, 0x38ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADE8u;
label_38ade8:
    // 0x38ade8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38adec:
    // 0x38adec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38adecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38adf0:
    // 0x38adf0: 0xc0e8cbc  jal         func_3A32F0
label_38adf4:
    if (ctx->pc == 0x38ADF4u) {
        ctx->pc = 0x38ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADF0u;
        // 0x38adf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADF8u;
        goto label_38adf8;
    }
    ctx->pc = 0x38ADF0u;
    SET_GPR_U32(ctx, 31, 0x38ADF8u);
    ctx->pc = 0x38ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADF0u;
    // 0x38adf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x38ADF0u, 0x38ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADF8u;
label_38adf8:
    // 0x38adf8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38adfc:
    // 0x38adfc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x38adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38ae00:
    // 0x38ae00: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x38ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_38ae04:
    // 0x38ae04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38ae08:
    // 0x38ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ae0c:
    // 0x38ae0c: 0xafb30044  sw          $s3, 0x44($sp)
    ctx->pc = 0x38ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
label_38ae10:
    // 0x38ae10: 0xa7a20026  sh          $v0, 0x26($sp)
    ctx->pc = 0x38ae10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
label_38ae14:
    // 0x38ae14: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x38ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_38ae18:
    // 0x38ae18: 0xa7a30024  sh          $v1, 0x24($sp)
    ctx->pc = 0x38ae18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 3));
label_38ae1c:
    // 0x38ae1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38ae20:
    // 0x38ae20: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x38ae20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_38ae24:
    // 0x38ae24: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x38ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_38ae28:
    // 0x38ae28: 0x40f809  jalr        $v0
label_38ae2c:
    if (ctx->pc == 0x38AE2Cu) {
        ctx->pc = 0x38AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE28u;
        // 0x38ae2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE30u;
        goto label_38ae30;
    }
    ctx->pc = 0x38AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38AE30u);
        ctx->pc = 0x38AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE28u;
        // 0x38ae2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AE28u, 0x38AE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38AE30u;
label_38ae30:
    // 0x38ae30: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x38ae30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_38ae34:
    // 0x38ae34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38ae34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38ae38:
    // 0x38ae38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38ae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ae3c:
    // 0x38ae3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38ae3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38ae40:
    // 0x38ae40: 0xc0a4daa  jal         func_2936A8
label_38ae44:
    if (ctx->pc == 0x38AE44u) {
        ctx->pc = 0x38AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE40u;
        // 0x38ae44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE48u;
        goto label_38ae48;
    }
    ctx->pc = 0x38AE40u;
    SET_GPR_U32(ctx, 31, 0x38AE48u);
    ctx->pc = 0x38AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE40u;
    // 0x38ae44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x38AE40u, 0x38AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE48u;
label_38ae48:
    // 0x38ae48: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x38ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_38ae4c:
    // 0x38ae4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38ae4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38ae50:
    // 0x38ae50: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x38ae50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_38ae54:
    // 0x38ae54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38ae58:
    // 0x38ae58: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x38ae58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38ae5c:
    // 0x38ae5c: 0x254a16c0  addiu       $t2, $t2, 0x16C0
    ctx->pc = 0x38ae5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5824));
label_38ae60:
    // 0x38ae60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ae60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ae64:
    // 0x38ae64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38ae64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ae68:
    // 0x38ae68: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x38ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_38ae6c:
    // 0x38ae6c: 0xc0e498e  jal         func_392638
label_38ae70:
    if (ctx->pc == 0x38AE70u) {
        ctx->pc = 0x38AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE6Cu;
        // 0x38ae70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE74u;
        goto label_38ae74;
    }
    ctx->pc = 0x38AE6Cu;
    SET_GPR_U32(ctx, 31, 0x38AE74u);
    ctx->pc = 0x38AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE6Cu;
    // 0x38ae70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392638u, 0x38AE6Cu, 0x38AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE74u;
label_38ae74:
    // 0x38ae74: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x38ae74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_38ae78:
    // 0x38ae78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38ae78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38ae7c:
    // 0x38ae7c: 0xc0e58ee  jal         func_3963B8
label_38ae80:
    if (ctx->pc == 0x38AE80u) {
        ctx->pc = 0x38AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE7Cu;
        // 0x38ae80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE84u;
        goto label_38ae84;
    }
    ctx->pc = 0x38AE7Cu;
    SET_GPR_U32(ctx, 31, 0x38AE84u);
    ctx->pc = 0x38AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE7Cu;
    // 0x38ae80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3963B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3963B8u, 0x38AE7Cu, 0x38AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE84u;
label_38ae84:
    // 0x38ae84: 0x8e6411e4  lw          $a0, 0x11E4($s3)
    ctx->pc = 0x38ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_38ae88:
    // 0x38ae88: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x38ae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_38ae8c:
    // 0x38ae8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38ae8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ae90:
    // 0x38ae90: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x38ae90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_38ae94:
    // 0x38ae94: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x38ae94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38ae98:
    // 0x38ae98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38ae98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38ae9c:
    // 0x38ae9c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x38ae9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_38aea0:
    // 0x38aea0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38aea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38aea4:
    // 0x38aea4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x38aea4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_38aea8:
    // 0x38aea8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38aeac:
    // 0x38aeac: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38aeb0:
    // 0x38aeb0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x38aeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_38aeb4:
    // 0x38aeb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38aeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38aeb8:
    // 0x38aeb8: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x38aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38aebc:
    // 0x38aebc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x38aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38aec0:
    // 0x38aec0: 0x46147381  sub.s       $f14, $f14, $f20
    ctx->pc = 0x38aec0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[20]);
label_38aec4:
    // 0x38aec4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x38aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38aec8:
    // 0x38aec8: 0xc0d0b70  jal         func_342DC0
label_38aecc:
    if (ctx->pc == 0x38AECCu) {
        ctx->pc = 0x38AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEC8u;
        // 0x38aecc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AED0u;
        goto label_38aed0;
    }
    ctx->pc = 0x38AEC8u;
    SET_GPR_U32(ctx, 31, 0x38AED0u);
    ctx->pc = 0x38AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AEC8u;
    // 0x38aecc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DC0u, 0x38AEC8u, 0x38AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AED0u;
label_38aed0:
    // 0x38aed0: 0x8e6411e4  lw          $a0, 0x11E4($s3)
    ctx->pc = 0x38aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_38aed4:
    // 0x38aed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38aed8:
    // 0x38aed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38aed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38aedc:
    // 0x38aedc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x38aedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38aee0:
    // 0x38aee0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x38aee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_38aee4:
    // 0x38aee4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x38aee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_38aee8:
    // 0x38aee8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x38aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_38aeec:
    // 0x38aeec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38aef0:
    // 0x38aef0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x38aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38aef4:
    // 0x38aef4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x38aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38aef8:
    // 0x38aef8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x38aef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_38aefc:
    // 0x38aefc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x38aefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38af00:
    // 0x38af00: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x38af00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_38af04:
    // 0x38af04: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x38af04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_38af08:
    // 0x38af08: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x38af08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_38af0c:
    // 0x38af0c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x38af0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_38af10:
    // 0x38af10: 0xa26512d5  sb          $a1, 0x12D5($s3)
    ctx->pc = 0x38af10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4821), (uint8_t)GPR_U32(ctx, 5));
label_38af14:
    // 0x38af14: 0x8e631204  lw          $v1, 0x1204($s3)
    ctx->pc = 0x38af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4612)));
label_38af18:
    // 0x38af18: 0x8cc2bd30  lw          $v0, -0x42D0($a2)
    ctx->pc = 0x38af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_38af1c:
    // 0x38af1c: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_38af20:
    if (ctx->pc == 0x38AF20u) {
        ctx->pc = 0x38AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF1Cu;
        // 0x38af20: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF24u;
        goto label_38af24;
    }
    ctx->pc = 0x38AF1Cu;
    {
        const bool branch_taken_0x38af1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38af1c) {
            ctx->pc = 0x38AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AF1Cu;
            // 0x38af20: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AF58u;
            goto label_38af58;
        }
    }
    ctx->pc = 0x38AF24u;
label_38af24:
    // 0x38af24: 0xc0e4060  jal         func_390180
label_38af28:
    if (ctx->pc == 0x38AF28u) {
        ctx->pc = 0x38AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF24u;
        // 0x38af28: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF2Cu;
        goto label_38af2c;
    }
    ctx->pc = 0x38AF24u;
    SET_GPR_U32(ctx, 31, 0x38AF2Cu);
    ctx->pc = 0x38AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AF24u;
    // 0x38af28: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38AF24u, 0x38AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AF2Cu;
label_38af2c:
    // 0x38af2c: 0xc0e57ce  jal         func_395F38
label_38af30:
    if (ctx->pc == 0x38AF30u) {
        ctx->pc = 0x38AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF2Cu;
        // 0x38af30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF34u;
        goto label_38af34;
    }
    ctx->pc = 0x38AF2Cu;
    SET_GPR_U32(ctx, 31, 0x38AF34u);
    ctx->pc = 0x38AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AF2Cu;
    // 0x38af30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38AF2Cu, 0x38AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AF34u;
label_38af34:
    // 0x38af34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38af38:
    // 0x38af38: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_38af3c:
    if (ctx->pc == 0x38AF3Cu) {
        ctx->pc = 0x38AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF38u;
        // 0x38af3c: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF40u;
        goto label_38af40;
    }
    ctx->pc = 0x38AF38u;
    {
        const bool branch_taken_0x38af38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38af38) {
            ctx->pc = 0x38AF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AF38u;
            // 0x38af3c: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AF58u;
            goto label_38af58;
        }
    }
    ctx->pc = 0x38AF40u;
label_38af40:
    // 0x38af40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38af44:
    // 0x38af44: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x38af44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_38af48:
    // 0x38af48: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x38af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_38af4c:
    // 0x38af4c: 0x60f809  jalr        $v1
label_38af50:
    if (ctx->pc == 0x38AF50u) {
        ctx->pc = 0x38AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF4Cu;
        // 0x38af50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF54u;
        goto label_38af54;
    }
    ctx->pc = 0x38AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38AF54u);
        ctx->pc = 0x38AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF4Cu;
        // 0x38af50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AF4Cu, 0x38AF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38AF54u;
label_38af54:
    // 0x38af54: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x38af54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_38af58:
    // 0x38af58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x38af58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38af5c:
    // 0x38af5c: 0x7a660f90  lq          $a2, 0xF90($s3)
    ctx->pc = 0x38af5cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 3984)));
label_38af60:
    // 0x38af60: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x38af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_38af64:
    // 0x38af64: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x38af64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_38af68:
    // 0x38af68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38af68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38af6c:
    // 0x38af6c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38af6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38af70:
    // 0x38af70: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38af70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38af74:
    // 0x38af74: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38af74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_38af78:
    // 0x38af78: 0x7a691030  lq          $t1, 0x1030($s3)
    ctx->pc = 0x38af78u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 4144)));
label_38af7c:
    // 0x38af7c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38af7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38af80:
    // 0x38af80: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38af80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38af84:
    // 0x38af84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38af84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38af88:
    // 0x38af88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38af88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38af8c:
    // 0x38af8c: 0x482c1800  qmfc2.ni    $t4, $vf3
    ctx->pc = 0x38af8cu;
    SET_GPR_VEC(ctx, 12, _mm_castps_si128(ctx->vu0_vf[3]));
label_38af90:
    // 0x38af90: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x38af90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_38af94:
    // 0x38af94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38af94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38af98:
    // 0x38af98: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38af98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38af9c:
    // 0x38af9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38af9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38afa0:
    // 0x38afa0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x38afa0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_38afa4:
    // 0x38afa4: 0x448ca000  mtc1        $t4, $f20
    ctx->pc = 0x38afa4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38afa8:
    // 0x38afa8: 0x7a6a10d0  lq          $t2, 0x10D0($s3)
    ctx->pc = 0x38afa8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 19), 4304)));
label_38afac:
    // 0x38afac: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x38afacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_38afb0:
    // 0x38afb0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38afb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38afb4:
    // 0x38afb4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38afb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38afb8:
    // 0x38afb8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38afb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38afbc:
    // 0x38afbc: 0x482c1800  qmfc2.ni    $t4, $vf3
    ctx->pc = 0x38afbcu;
    SET_GPR_VEC(ctx, 12, _mm_castps_si128(ctx->vu0_vf[3]));
label_38afc0:
    // 0x38afc0: 0x7a6b1170  lq          $t3, 0x1170($s3)
    ctx->pc = 0x38afc0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 19), 4464)));
label_38afc4:
    // 0x38afc4: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x38afc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_38afc8:
    // 0x38afc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38afc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38afcc:
    // 0x38afcc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38afccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38afd0:
    // 0x38afd0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38afd0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38afd4:
    // 0x38afd4: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x38afd4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_38afd8:
    // 0x38afd8: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x38afd8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38afdc:
    // 0x38afdc: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x38afdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_38afe0:
    // 0x38afe0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38afe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38afe4:
    // 0x38afe4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38afe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38afe8:
    // 0x38afe8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38afe8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38afec:
    // 0x38afec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38afecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38aff0:
    // 0x38aff0: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x38aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_38aff4:
    // 0x38aff4: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x38aff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_38aff8:
    // 0x38aff8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38aff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38affc:
    // 0x38affc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38affcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38b000:
    // 0x38b000: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38b000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38b004:
    // 0x38b004: 0x482c1800  qmfc2.ni    $t4, $vf3
    ctx->pc = 0x38b004u;
    SET_GPR_VEC(ctx, 12, _mm_castps_si128(ctx->vu0_vf[3]));
label_38b008:
    // 0x38b008: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38b00c:
    // 0x38b00c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38b00cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38b010:
    // 0x38b010: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38b014:
    // 0x38b014: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38b014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38b018:
    // 0x38b018: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x38b018u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_38b01c:
    // 0x38b01c: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x38b01cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38b020:
    // 0x38b020: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x38b020u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_38b024:
    // 0x38b024: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x38b024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_38b028:
    // 0x38b028: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x38b028u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
label_38b02c:
    // 0x38b02c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x38b02cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b030:
    // 0x38b030: 0x0  nop
    ctx->pc = 0x38b030u;
    // NOP
label_38b034:
    // 0x38b034: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x38b034u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_38b038:
    // 0x38b038: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x38b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_38b03c:
    // 0x38b03c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x38b03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_38b040:
    // 0x38b040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38b040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b044:
    // 0x38b044: 0x0  nop
    ctx->pc = 0x38b044u;
    // NOP
label_38b048:
    // 0x38b048: 0x0  nop
    ctx->pc = 0x38b048u;
    // NOP
label_38b04c:
    // 0x38b04c: 0x46140504  c1          0x140504
    ctx->pc = 0x38b04cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_38b050:
    // 0x38b050: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x38b050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_38b054:
    // 0x38b054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38b054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b058:
    // 0x38b058: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x38b058u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_38b05c:
    // 0x38b05c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38b060:
    // 0x38b060: 0x7faa0010  sq          $t2, 0x10($sp)
    ctx->pc = 0x38b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
label_38b064:
    // 0x38b064: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x38b064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_38b068:
    // 0x38b068: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x38b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
label_38b06c:
    // 0x38b06c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38b06cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38b070:
    // 0x38b070: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x38b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
label_38b074:
    // 0x38b074: 0x7fab0010  sq          $t3, 0x10($sp)
    ctx->pc = 0x38b074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 11));
label_38b078:
    // 0x38b078: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_38b07c:
    // 0x38b07c: 0xc105d20  jal         func_417480
label_38b080:
    if (ctx->pc == 0x38B080u) {
        ctx->pc = 0x38B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B07Cu;
        // 0x38b080: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B084u;
        goto label_38b084;
    }
    ctx->pc = 0x38B07Cu;
    SET_GPR_U32(ctx, 31, 0x38B084u);
    ctx->pc = 0x38B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B07Cu;
    // 0x38b080: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417480u, 0x38B07Cu, 0x38B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B084u;
label_38b084:
    // 0x38b084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38b084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38b088:
    // 0x38b088: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x38b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38b08c:
    // 0x38b08c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x38b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_38b090:
    // 0x38b090: 0xc105d20  jal         func_417480
label_38b094:
    if (ctx->pc == 0x38B094u) {
        ctx->pc = 0x38B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B090u;
        // 0x38b094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B098u;
        goto label_38b098;
    }
    ctx->pc = 0x38B090u;
    SET_GPR_U32(ctx, 31, 0x38B098u);
    ctx->pc = 0x38B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B090u;
    // 0x38b094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417480u, 0x38B090u, 0x38B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B098u;
label_38b098:
    // 0x38b098: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x38b098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_38b09c:
    // 0x38b09c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x38b09cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_38b0a0:
    // 0x38b0a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38b0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38b0a4:
    // 0x38b0a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x38b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38b0a8:
    // 0x38b0a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x38b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38b0ac:
    // 0x38b0ac: 0xc105d20  jal         func_417480
label_38b0b0:
    if (ctx->pc == 0x38B0B0u) {
        ctx->pc = 0x38B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0ACu;
        // 0x38b0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B0B4u;
        goto label_38b0b4;
    }
    ctx->pc = 0x38B0ACu;
    SET_GPR_U32(ctx, 31, 0x38B0B4u);
    ctx->pc = 0x38B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B0ACu;
    // 0x38b0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417480u, 0x38B0ACu, 0x38B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B0B4u;
label_38b0b4:
    // 0x38b0b4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x38b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38b0b8:
    // 0x38b0b8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x38b0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_38b0bc:
    // 0x38b0bc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x38b0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38b0c0:
    // 0x38b0c0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x38b0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38b0c4:
    // 0x38b0c4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x38b0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38b0c8:
    // 0x38b0c8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x38b0c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38b0cc:
    // 0x38b0cc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x38b0ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38b0d0:
    // 0x38b0d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x38b0d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38b0d4:
    // 0x38b0d4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x38b0d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38b0d8:
    // 0x38b0d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38b0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38b0dc:
    // 0x38b0dc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x38b0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38b0e0:
    // 0x38b0e0: 0x3e00008  jr          $ra
label_38b0e4:
    if (ctx->pc == 0x38B0E4u) {
        ctx->pc = 0x38B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0E0u;
        // 0x38b0e4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B0E8u;
        goto label_fallthrough_0x38b0e0;
    }
    ctx->pc = 0x38B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0E0u;
        // 0x38b0e4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38b0e0:
    ctx->pc = 0x38B0E8u;
}
